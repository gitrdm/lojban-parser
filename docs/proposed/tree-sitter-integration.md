# Tree-sitter integration design (proposal)

Status: Scaffolded (Phase 0 complete; Phase 1 complete; Phase 2 in progress — expanded coverage and tests; mekso numbers now formed in grammar)
Owner: TBD
Reviewers: TBD
Scope: Introduce a Tree-sitter grammar and runtime alongside the existing C parser to eliminate most hand fixes and enable incremental, editor-friendly parsing.

## Goals

- Provide an incremental, error-tolerant parser for Lojban with high fidelity to baselines 233/300.
- Retire most “hand fixes” by modeling:
  - Elidable closers as optional tokens (no error productions).
  - Free modifiers as `extras` where appropriate.
  - Connective precedence and associativity declaratively.
- Reuse existing tokenization via an external scanner to surface the current 900-series `lexer_*` compounds initially.
- Keep existing C CLI parser intact (Bison) while we converge on parity; enable side-by-side validation.

## Priority: implement the full grammar (corpus as acceptance test)

Implement the full grammar correctly now. Use the large test corpus at `tests/regress/inputs/test_sentences.jsonl` with the canonical results in `tests/regress/outputs/sentences_results.jsonl` as the acceptance test for coverage and correctness. Avoid quick, one-off hacks purely to “make the corpus pass”; fixes should advance the complete grammar and scanner in line with Lojban semantics.

Non-goals (phase 1)
- Rewriting the lexical/preparser pipeline from scratch.
- Producing exactly identical AST node numbering/shape as the current C parser (we’ll document a mapping).

## Deliverables

- `external/tree-sitter-lojban/` subdir with:
  - `grammar.js` (Tree-sitter grammar with sumti/selbri/connectives and precedence; KE/KEhE grouping; XI subscripts; connective+bo precedence modeled).
  - `src/scanner.c` (external scanner with whitespace handling (including '.' as pause), case-insensitive reserved cmavo, apostrophe-inclusive word buffering, and cmene/brivla classification aligned with legacy heuristics; 900-series connective compounds and sumti starters integrated; bridging to full lexer in progress).
  - `tree-sitter.json` (ABI 15 manifest and metadata).
  - `queries/` placeholders (highlights/folds/injections).
  - `corpus/` sample tests.
  - `package.json` (optional if using npx; global CLI also supported).
- Integration glue in this repo:
  - Make targets: `ts-generate`, `ts-test`, `ts-clean`, `ts-validate`.
  - `tools/ts-validate` (prints TS parse trees; structural shape diff vs C parser). Helper `tools/ts-diff.py` compares node kinds and occurrence counts.
  - CI (later): compile grammar, run a corpus parse, and surface regressions.
  - Docs: user guide + mapping from C AST to TS nodes.

## Architecture

- Lexer/Scanner
  - External scanner implemented and active. It currently:
    - Skips whitespace internally (treats '.' as space) and uses `mark_end` to report correct token spans.
    - Buffers words (letters + apostrophe) and lowercases for classification; mirrors `iscmene`/`isbrivla` from `src/lex.c` with refinements (CVCCV/CCVCV segments; `y/h` ignored; `r/n` acts as a vowel hyphen).
    - Recognizes reserved cmavo families case-insensitively, including:
      - Quotes/parentheses/free-mod: `lu`/`li'u`, `to`/`toi`, `sei`/`se'u`.
      - Connectives and compounds: `joi`/`ce`/`ce'o` and `je/ja/jo/ju` families, their `_bo` variants, and i-prefixed joiners `i`, `i_bo`, `i_*`.
      - Grouping/binding: `bo`, `ke`, `ke'e`, `cu`.
      - Relative clauses: `noi` (poi/noi/voi), `ku'o`, `goi`, `ge'u`, and `vuhO`/`vuhU` paren-like shells.
      - Sumti starters/pronouns: `la`, `le`, `lo`, `la'e`, `le'e`, `lo'e`, `le'i`, `lo'i`, `le'a`, `le'o`, `mi`, `do`, `ti/ta/tu`, `da`, `ko`, `mi'o`, `ma'a`, special sumti `zi'o`, `ce'u`, and BY lerfu units/strings.
  - Mekso: `li`, `boi`, `xi` (subscripts); atomic tokens `digits` (raw digits), `pi`, `ki'o`, and sign tokens `ma'u`/`ni'u`; operator set `su'i`, `vu'u`, `pi'i`, `fa'u`, `fe'a`, `fe'i`, `te'a`, plus comparator `du`. Signs are not operators.
    - Emits generic `word` when classification is inconclusive.
  - Next: bridge more of the existing lexer/preparser to surface 900-series compound tokens (`lexer_*`) and additional cmavo families.
  - Longer-term: explore moving some compounding into TS rules once precedence is encoded and ambiguity is manageable.

### Externals-to-legacy token mapping (ordering contract)

The externals array in `external/tree-sitter-lojban/grammar.js` must match the `enum TokenType` order in `external/tree-sitter-lojban/src/scanner.c` exactly. This keeps Tree-sitter token IDs stable and avoids shift/reduce table drift.

Mapping highlights (TS external → Legacy family):

- word/cmene/brivla → generic WORD / CMENE / BRIVLA from legacy lexer morphology.
- lu, lihU; to, toi; sei, seu → LU/LIhU; TO/TOI; SEI/SEhU.
- vuhO, vuhU → VUhO/VUhU shells.
- joi/ce/ce’o and je/ja/jo/ju (+ _bo) → JOI/CEO/CE and JEK families with BO compounds (legacy: JOI_502, JEK_501, *_BO compounds from 900-series preparser).
- i, i_bo, i_* → I and i+connective compounds (legacy: lexer_i*, 900-series).
- li, boi, xi; digits, pi, kio; mau, niu → LI/BOI/XI; PA/PI/KI’O; MAU/NIU tokens used to form numbers (legacy: PA_672 and friends).
- mex_operator → arithmetic and comparator/inequality cmavo (legacy: MEX_310/operator_370 incl. su’i, vu’u, pi’i, fa’u, fe’a, fe’i, te’a, ge’a, du; extended here with me’i, za’u).
- la/le/lo and families la’e/le’e/lo’e, le’i/lo’i, le’a/le’o, lo’a/lo’o → LA/LE/LO and derivative selma’o.
- noi/kuho; goi/gehu → NOI/KUhO; GOI/GEhU.
- cu → CU separator.
- by_unit → BY (lerfu unit); `by` rule in grammar composes strings.
- Forethought: ge/ga/go/gu; gi → GE/GA/GO/GU; GI.
- giha → GIhA (gi’a/gi’e/gi’o/gi’u); se/na/nai decorate GIhA in grammar (legacy: JOIK/GIhEK with modifiers).
- bihi → BIhI (interval cmavo: bi’i, bi’o supported now); gaho → GAhO (interval markers: ga’o, ke’i supported now).

Notes:
- We intentionally keep structure (GIhEK modifiers, BIhI bracket forms, forethought GEK … GI …) in grammar, not scanner; the scanner only recognizes atomic cmavo.
- When adding externals, append to the end to avoid renumbering existing tokens; if reordering is necessary, update both grammar.js and scanner.c in lockstep.

- Grammar
  - Remove left recursion; encode precedence/associativity for connectives and MEX operators via `prec.left` / `prec.right`.
  - Mekso number formation is defined in grammar: `number := (ma'u|ni'u)+? (digits (ki'o digits)* (pi digits)? | (pi digits))`. This keeps structure visible and reduces scanner “hand waving”.
  - Model elidable closers as optional terminals: e.g., `seq: L ... (LIhU)?`.
  - Treat simple indicators (UI/CAI/Y/NAI where appropriate) as `extras`, so they’re globally skippable without clutter.
  - Keep structured free-mods as rules: `SEI ... SEhU`, `XI` subscripts, quotes `LU … LIhU`, parentheticals `TO … TOI`, etc.
  - Maintain a strict `BOI` only in subscript contexts; elsewhere allow it (or its omission) per baseline rules.

- Output/AST
  - TS produces concrete trees; we’ll define a normalization/mapping layer for comparison with current outputs (e.g., focusing on rule kinds and spans rather than node ordinals).

## Scope mapping from current grammar

Key replacements for “hand fixes”
- `_gap` + `yyerrok` branches → Optional closers + TS recovery (“missing” nodes).
- FAhO synthesis for empty alternatives → Allow `%empty` equivalents at top level; EOF is implicit in TS.
- Free-mod TOKEN | TOKEN free_modifier duplication → `extras` for simple indicators; single placement rules for structured free-mods.
- Trailing `.i` / `i+jek` permissive glue → Standard sequencing; rely on TS recovery for incomplete starts.
- `CU` optional by rule → Keep explicit optional in TS; no global elidable.

Tokenization strategy
- External scanner recognizes:
  - Core cmavo families and cmene/lerfu streams consistent with current lexer.
  - Compounds exposed as single tokens matching the 900-series `lexer_*`.
  - Delimiters/quotes/parentheses; tracks nest depth to surface closers.
- Extras list (initial): UI, CAI, Y (and bare NAI when used as discourse markers). We’ll gate this via tests to avoid over-skipping.

## Hand coding: what remains vs what’s removed

What is removed (grammar-side)
- Error-action “hand fixes”: `_gap` rules with `yyerrok` and synthesized closers; FAhO/EOF synthesis for empty alts; permissive trailing `.i`/`i+jek` glue; duplicated `TOKEN | TOKEN free_modifier` arms; global "bare initial NAI" quirks. These become ordinary optional closers, explicit `%empty`-style options, normal sequencing, `extras`, or localized rules.

What remains (scanner-side, by design)
- Morphology and classification: cmavo families, brivla/cmene, lerfu strings—beyond what Tree-sitter’s regex tokenizer can reliably express.
- Compounding (current Step‑5 reality): i+jek/i+bo, connective families (JEK/JOIK/JOI) with BO/KE, and other preparser compounds surfaced as 900‑series `lexer_*` tokens to keep ambiguity manageable and performance high.
- Preprocessing semantics: lowercasing, treating `.` as space, ignoring slash‑delimited segments, handling backslash‑newline, digit→cmavo mapping, and filtering non‑alphabetics (apostrophe is alphabetic). These are language conventions, not grammar hacks, and belong in the scanner.
- Nest tracking: quotes/parentheses depth to emit appropriate closers and support robust recovery.

Context‑constrained tokens (expressed cleanly in grammar)
- `BOI` strictness within subscript contexts while flexible elsewhere. This is kept as a grammar placement rule (not an error action) and is intentional language semantics.

Path to “zero hand fixes” and trade‑offs
- Grammar: we reach zero hacks—no synthesized tokens or error actions—by using optional closers, precedence, and `extras`.
- Scanner: eliminating all hand‑written logic is possible but not advisable:
  - De‑compound into grammar rules and treat words as simpler tokens. Trade‑offs: larger ambiguity space, heavier precedence tables, and likely performance regression.
  - Replace the external scanner with only built‑in TS token rules. Trade‑offs: insufficient expressiveness for full Lojban morphology; complexity resurfaces in grammar and queries.
  - Recommended stance: keep a minimal, well‑factored external scanner for morphology, compounding, and preprocessing; document it and test it. This centralizes the remaining “hand coding” outside the grammar.

See also: `docs/hand-fixes.md` for the catalog of historic grammar‑side adjustments and how each maps to the TS approach above.

## Phased plan

Phase 0: Repo prep
- Add `docs/hand-fixes.md` cross-links (done).
- Create `docs/proposed/tree-sitter-integration.md` (this doc) and align on scope.

Phase 1: Skeleton grammar
- Implement minimal nonterminals for text → paragraph → statement, selbri/sumti shells, and a handful of delimiters (LU/LIhU, TO/TOI, TUhE/TUhU).
- Define precedence for basic connectives and JOI/JEK families.
- Mark extras (UI/CAI/Y) and optional closers.

Status: complete - grammar expanded with sumti/selbri/connectives, precedence, and external scanner integration.

Phase 2: External scanner
- Bridge to existing lexer/preparser to emit 900-series tokens; ensure tokens align with current grammar expectations.
- Validate on sample texts; ensure nesting and closers behave with recovery.

Status: in progress
- Done:
  - Morphology and reserved cmavo implemented; connective families and i-joiners integrated as compounds; spacing/pause tolerant.
  - Mekso numbers formed in grammar; scanner emits `digits`/`pi`/`ki'o` and `ma'u`/`ni'u` signs as atomic tokens; signs removed from operator set.
  - Selbri supports BO-chained tanru with KE/KEhE grouping; CU separator present.
  - Relative clauses (NOI/KUhO and GOI/GEhU) attach to sumti.
  - Subscripts via `XI` with `BOI` enforced only in subscript context.
  - Lerfu BY strings supported.
  - Sumti starters include la/le/lo; la'e/le'e/lo'e; le'i/lo'i; le'a/le'o; lo'a/lo'o; pronouns; special sumti `zi'o`/`ce'u`.
- Pending to complete Phase 2:
  - Surface remaining 900-series compounds beyond connectives (audit vs `lexrules.h`).
  - Add nest-depth tracking for quotes/parentheses to improve recovery across files.
  - Wire scanner core knobs: dot-as-pause, backslash-newline, slash-ignore, to match legacy exactly (documented and tested).
  - Expand operator families (comparators/inequalities) gated by tests; keep them as `mex_operator` terminals.
  - Stabilize token inventory and externals order; document mapping to legacy tokens.

Phase 3: Coverage expansion
- Add relative clauses (VUhO glue), vocatives, Mekso, subscripts (`XI`), BOI strictness in subscript contexts.
- Flesh out precedence and associativity tables; remove any residual left recursion.
- Tanru composition: BO chaining (done) and KE/KEhE grouping (done).

Phase 4: Validation and CI
- Build a corpus from `openwm.txt`, tests/regress inputs.
 - Add `tools/ts-validate` to diff structural shapes (node kinds, spans) vs the C parser.
- CI: compile grammar, run corpus, fail on significant drift.

Phase 5: Editor integrations (optional)
- Provide `queries/` for highlights, folds, injections.
- Publish as a standalone Tree-sitter grammar if desirable.

## Leveraging the current repository (knowledge reuse)

Use this repo as the source of truth while authoring the Tree-sitter grammar; promote to its own repo when stable.

## Leverage the parent project (don’t re-invent)

We will mine the existing C parser for authoritative data and behavior:

- Canonical grammar: `grammar/grammar.ebnf` (and `grammar.y`) define the complete rule shapes and names (e.g., `relative_clause_122 = GOI term GEhU | NOI subsentence KUhO`). We’ll map these directly into Tree-sitter rules, adding them incrementally with focused corpus tests.
- Cmavo inventory and selma’o: `include/generated/selmao.i` consumed by `src/selmao.c` enumerates cmavo families (LA/LE/LO/KU; JOI/JEK and -bo; i-prefixed variants; UI/CAI/Y; etc.). We’ll use this list to drive external token recognition in the TS scanner and to avoid drift.
- Morphology/classification: `src/lex.c` provides `iscmene`/`isbrivla` checks; we’ll port these into the external scanner so TS can prefer `brivla`/`cmene` over a generic `word` when appropriate.
- Tests: `tests/regress/` and `openwm.txt` supply rich sentences for TS corpus cases; we’ll port minimal examples alongside each grammar addition.

Immediate application of this policy:

- Relative clauses: implement the `NOI … KUhO` path first (accepting `poi`/`noi`/`voi` as NOI), reusing the parent’s shape for a minimal `subsentence` (we’ll map it to a `statement` for this phase). Then wire it behind `sumti` as an optional tail just before `ku` closure.
- Morphology: fold in the `isbrivla`/`iscmene` logic to the TS scanner to disambiguate `selbri` vs. names early and reduce grammar conflicts.

- Grammar sources/exports
  - Drive rule coverage from `grammar/grammar.y` (generated by `tools/mkgramy`).
  - Use `make ebnf` → `grammar/grammar.ebnf` and `make lark` → `grammar/grammar.lark` as structure/precedence references.
  - Record the active `BASELINE` and `mkgramy` commit in TS package metadata for traceability.

- Stable naming
  - Reuse `include/generated/rulename.i` and `include/generated/selmao.i` to standardize TS node/token naming, improving diff stability.
  - Mirror token families from `lexrules.h` and `lexrule*.c` in the external scanner.

- Scanner core reuse
  - Extract a small, parser‑agnostic "scanner core" C module (lowercasing, dot‑as‑space, slash‑ignore, backslash‑newline, digit→cmavo; morphology; compounding; nesting counters).
  - Link this core both from the existing C parser and the TS external scanner to avoid drift.

- Precedence data
  - Generate a lightweight JSON of connective/MEX precedence and associativity (source: `grammar/grammar.y` + `docs/techfix.*`), and use it to drive `prec.left/right` in `grammar.js`.

- Validation harness
  - Add `tools/ts-validate` to parse a shared corpus with the C parser and TS, normalize trees (rule kinds + spans), and diff for drift.
  - Corpus: `openwm.txt`, `tests/` inputs, and targeted cases (elidables, free‑mods, BOI in subscripts, quotes/parentheses, connective chains).

## Repository strategy and directory structure

Staging inside this repo (recommended for iteration)

- Location: `external/tree-sitter-lojban/`
- Layout:
  - `tree-sitter.json`        # ABI 15 manifest
  - `package.json`            # optional (if using npx)
  - `grammar.js`              # Tree-sitter grammar (to be expanded with precedence)
  - `scanner.c`               # External scanner using the shared scanner core (stub now)
  - `src/` (optional)         # If splitting scanner into multiple C files
  - `queries/`
    - `highlights.scm`
    - `folds.scm`
    - `injections.scm`
  - `corpus/`                 # Sample inputs and expected trees (optional for dev)
  - `README.md`               # Usage and language notes
  - `LICENSE`

- Integration glue (in this repo):
  - `tools/ts-validate`       # Compare TS vs C parser shapes (WIP in this repo)
  - `tools/export_grammar_json.py`  # Emit precedence/associativity data (optional)
  - Makefile targets:
    - `ts-generate`           # Run `tree-sitter generate` in the subdir
    - `ts-test`               # Run `tree-sitter test`
    - `ts-clean`              # Remove generated TS artifacts
    - (optional) `ts-validate`# Run the shape diff over the corpus
    - (optional) `ts-ci`      # Wrapper used by CI

Promoting to its own repo (best practice when stable)

- New repo: `tree-sitter-lojban` with the same layout as above.
- CI in TS repo: build (tree-sitter generate), run corpus, publish tags; optionally publish to npm.
- Link back here via a Git submodule:
  - Path: `external/tree-sitter-lojban` pinned to a tagged release.
  - Keep validation targets working against the submodule in CI.
  - Track compatibility in TS `package.json` (fields for BASELINE and mkgramy commit) and in this repo’s docs.

## Risks and mitigations

- Ambiguity and performance: Start with external scanner + compounds to keep ambiguity low; use `prec` and contextual rules before decompounding.
- Over-skipping via extras: Keep extras minimal; add tests where indicators must be nodes (e.g., scoped `SEI`).
- Parity drift: Compare normalized shapes, not exact AST ordinals; pin goldens in CI.

## Open questions

- Scope of extras: Which indicators are safe to skip globally vs must remain structural?
- Where to enforce strict `BOI`? Only inside `XI`/subscript contexts or also in specific Mekso forms?
- Publish as separate repo vs monorepo subdir?

## Acceptance criteria (phase 3)

- Grammar parses the corpus with stable trees and minimal recoveries for well-formed input.
- Optional closers and nested constructs recover cleanly when elided.
- Basic connective precedence produces expected associativity.
- Token integration via external scanner matches current 900-series behavior.

## Next steps

- Integrate 900-series compounding (connectives + BO/KE; JOI/JEK families) and expand reserved cmavo families in `src/scanner.c`.
  - Done: `jek_bo`, `joi_bo`, plus JEK family (`ja_bo`, `jo_bo`, `ju_bo`) and JOI family (`ce_bo`, `ceo_bo`); plain connectives `ja/je/jo/ju/ce/ce'o/joi`.
  - Done: i-prefixed joiners `i`, `i_bo`, `i_ja/je/jo/ju`, `i_ce/ce'o`, `i_joi`.
  - Behavior: case-insensitive; tolerates whitespace and pause '.' between parts.
- Expand `tools/ts-validate` to run C parser and diff normalized shapes.
  - Done: runs C parser (when available) and prints a structural shape diff. `tools/ts-diff.py` compares node kind sets and counts.
- Add a corpus runner to process `tests/regress/inputs/test_sentences.jsonl`, compare against `tests/regress/outputs/sentences_results.jsonl`, and track pass rates; use this to verify progress of the full grammar. Any failures should guide principled grammar/scanner improvements—not ad‑hoc patches.
- Add CI job for automated `ts-generate`/`ts-test` and corpus validation.
- Expand corpus with more test cases from `openwm.txt` and regression inputs.
- Quotes/parentheses: add more LU/LIhU and TO/TOI tests (nesting/recovery).
- Mekso: expand number/test coverage (now grammar-formed) and `MEX_OPERATOR` families; enforce BOI strictness only in subscript where required; add tests. [Partially done: numbers with `pi`/`ki'o` and `ma'u`/`ni'u` signs; operators `su'i`, `vu'u`, `pi'i`, `fa'u`, `fe'a`, `fe'i`, `te'a`, `du`; `XI` subscripts with optional `BOI` implemented.]
- Lerfu: extend BY to handle multi-lerfu strings and integration in more sumti tails.
- Morphology: incrementally port additional legacy lex rules (rafsi endings, hyphenation) with guard tests; keep y/h tolerance scoped.
- Sumti: broaden starters/anaphora and quantifiers beyond current set (la'e/le'e/lo'e, zi'o, ce'u, etc.) with focused tests. [Progress: added `le'i`, `lo'i`, `le'a`, `le'o` with corpus cases.]
- Validation: enhance tools/ts-validate to normalize and diff TS vs C trees structurally, and wire into CI.

## Changelog (2025-09-05)

- Broadened JOI/JEK families (+bo) and added i+connective compounds.
- Spacing/pause tolerance and case-insensitive matching for compounds.
- Extended corpus with variants and i-prefixed tests.
- Enhanced `tools/ts-validate` to run the C parser and print a basic TS vs C shape diff.
 - Selbri: added tanru with BO chaining (tanru_unit + (bo tanru_unit)*). Updated corpus expectations to wrap selbri heads in `tanru_unit`.
 - Relative clauses: implemented `poi/noi/voi … ku'o` and `goi … ge'u` after sumti. Added focused tests.
 - KE/KEhE: grouping implemented as tanru unit including nested/missing-closer recovery tests.
 - Pronouns: added mi/do, ti/ta/tu, variable da; added ko, mi'o, ma'a as dedicated terminals; subject/object corpus variants.
 - CU separator: implemented between leading sumti and selbri.
 - Morphology: ported and refined cmene/brivla heuristics. Brivla require final vowel and either a consonant cluster or a CVCCV/CCVCV-like segment (ignoring y/h). Cmene require final consonant; internal pauses allowed only as .C. Guard tests added.
 - Lerfu: basic BY lerfu-word added as a sumti path with tiny corpus tests.

Additional updates (later on 2025-09-05):
- Sumti starters: generic kinds `le'e`/`lo'e` and set kinds `le'i`/`lo'i`, plus `le'a` and `le'o`. Added minimal corpus coverage.
- Lerfu: multi-lerfu BY strings and separators; allowed inside tanru atoms.
- Subscripts: `xi` attaches to tanru units; recovery test for missing number after `xi`.
- Mekso: extended operator coverage with `fe'a`, `fe'i`, `te'a`; chaining validated; optional final `boi` accepted.
- Validation: `tools/ts-diff.py` now compares node kind counts for more meaningful diffs.

Mekso number formation moved into grammar (later on 2025-09-05):
- Introduced externals `digits`, `pi`, `ki'o`, `ma'u`, `ni'u`; removed scanner-side `NUMBER`.
- Grammar forms `number` from signs + digits + grouping + decimal; supports fractional-only `pi` form.
- Removed `ma'u`/`ni'u` as infix operators; left comparator `du` and core arithmetic operators in `mex_operator`.
- Updated corpus expectations accordingly; generation and tests remain green.

Phase 2 completion checklist snapshot:
- [x] Connective families (+bo) and i-prefixed joiners
- [x] KE/KEhE grouping; BO chaining; CU separator
- [x] RCs (NOI/KUhO; GOI/GEhU)
- [x] Lerfu BY strings
- [x] Sumti starters (la/le/lo; la'e/le'e/lo'e; le'i/lo'i; le'a/le'o; lo'a/lo'o); pronouns; zi'o/ce'u
- [x] Subscripts with XI and contextual BOI
- [x] Mekso number formation in grammar; operator seed set including `du`
- [ ] Remaining 900-series compounds (audit)
- [ ] Nest-depth tracking for quotes/parentheses
- [ ] Scanner core behavior parity (dot-as-pause/backslash-newline/slash-ignore) documented and tested
