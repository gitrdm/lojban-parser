# Tree-sitter integration design (proposal)

Status: Scaffolded (Phase 0 complete; Phase 1 started)
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

Non-goals (phase 1)
- Rewriting the lexical/preparser pipeline from scratch.
- Producing exactly identical AST node numbering/shape as the current C parser (we’ll document a mapping).

## Deliverables

- `external/tree-sitter-lojban/` subdir with:
  - `grammar.js` (Tree-sitter grammar skeleton; precedence to be added).
  - `scanner.c` (external scanner stub; will bridge current tokenization).
  - `tree-sitter.json` (ABI 15 manifest and metadata).
  - `queries/` placeholders (highlights/folds/injections).
  - `corpus/` sample for harness sanity.
  - `package.json` (optional if using npx; global CLI also supported).
- Integration glue in this repo:
  - Make targets: `ts-generate`, `ts-test`, `ts-clean`.
  - `tools/ts-validate` (WIP) to compare shapes vs the C parser.
  - CI (later): compile grammar, run a corpus parse, and surface regressions.
  - Docs: user guide + mapping from C AST to TS nodes.

## Architecture

- Lexer/Scanner
  - Start by reusing the existing lexer/preparser logic (Steps 1–5) through a Tree-sitter external scanner.
  - External scanner exposes the same 900-series compound tokens (`lexer_*`) to preserve current disambiguation and performance.
  - Longer-term: explore moving some compounding into TS rules once precedence is encoded and ambiguity is manageable.

- Grammar
  - Remove left recursion; encode precedence/associativity for connectives and MEX operators via `prec.left` / `prec.right`.
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

Status: scaffold in place with a minimal rule to enable generate/test; expand with real nonterminals next.

Phase 2: External scanner
- Bridge to existing lexer/preparser to emit 900-series tokens; ensure tokens align with current grammar expectations.
- Validate on sample texts; ensure nesting and closers behave with recovery.

Phase 3: Coverage expansion
- Add relative clauses (VUhO glue), vocatives, Mekso, subscripts (`XI`), BOI strictness in subscript contexts.
- Flesh out precedence and associativity tables; remove any residual left recursion.

Phase 4: Validation and CI
- Build a corpus from `openwm.txt`, tests/regress inputs.
- Add `tools/ts-validate` to diff structural shapes (node kinds, spans) vs the C parser.
- CI: compile grammar, run corpus, fail on significant drift.

Phase 5: Editor integrations (optional)
- Provide `queries/` for highlights, folds, injections.
- Publish as a standalone Tree-sitter grammar if desirable.

## Leveraging the current repository (knowledge reuse)

Use this repo as the source of truth while authoring the Tree-sitter grammar; promote to its own repo when stable.

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

- Expand `grammar.js` with initial nonterminals (text→paragraph→statement; shells; delimiters) and precedence.
- Implement `scanner.c` bridging the core lexer/preparser compounds (900‑series).
- Add `tools/ts-validate` to normalize and compare shapes vs the C parser.
- Add a CI job to run `ts-generate`/`ts-test` and validate over a small corpus.
