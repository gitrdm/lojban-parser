# Hand “fixes” and hacks in the Lojban parser

This document explains the deliberate “hand” coding adjustments in the grammar and build pipeline, where they live, and why they exist. They make a single-pass LALR(1) parser robust while matching the published baselines plus tech fixes.

The sources are generated via `tools/mkgramy` from `grammar/grammar.300` (or `.233`) with an optional middle file `grammar/gmiddle.y`. The generated YACC file is `grammar/grammar.y`.

## At a glance

- Elidable terminators handled by dedicated `_gap` rules with error recovery, synthesizing missing closers.
- Permissive handling of trailing `.i` / `i+jek` / `i+bo` at sentence/paragraph joins.
- Bare initial `nai` permitted at start of text.
- `cu` optional by rule (not a global elidable terminator) for better recovery.
- Free modifiers (`UI/CAI`, etc.) allowed in many strategic positions.
- `boi` special-cased: strict when closing subscripts, flexible elsewhere.
- End-of-text (`FAhO`) treated as a universal EOF marker for empty alternatives.
- Lexer compounds: 900‑series `lexer_*` tokens represent pre-lexed compounds to keep the grammar LALR(1).
- Balanced quotes/parentheses with optional closers to aid editing.
- TUhE/TUhU groups allow nearly full text (and `I`/`NIhO`) inside.
- Relative-clause and vocative expansions; `VUhO` glue for attaching relatives to full sumti.
- MEX/operator tweaks (right/left grouping, `BIhE`, optional `PEhO`, etc.).

Each of these is rooted in the rationale in `docs/techfix.300` / `docs/techfix.233`.

## Where and why

### 1) Elidable terminators via `*_gap` nonterminals

- Where: `grammar/grammar.y`, rules like `LIhU_gap_448`, `gap_450` (KU), `MEX_gap_452` (KUhE), `KEI_gap_453`, `TUhU_gap_454`, `VAU_gap_456`, `DOhU_gap_457`, `FEhU_gap_458`, `SEhU_gap_459`, `NUhU_gap_460`, `BOI_gap_461`, `LUhU_gap_463`, `GEhU_gap_464`, `MEhU_gap_465`, `KEhE_gap_466`, `BEhO_gap_467`, `TOI_gap_468`, `KUhO_gap_469`, `right_bracket_gap_471` (VEhO), `LOhO_gap_472`, `TEhU_gap_473`, and `right_br_no_free_474`.
- How: each `_gap` accepts the explicit closing token, optionally with `free_modifier_32`, or an `error` branch: `{ $$ = elidable(TOKEN); yyerrok; }`.
- Why: accept elided closers and continue parsing with a synthesized node; improves error recovery and matches actual usage.

### 2) Erroneous-start fixes for `.i`/`ijeks`

- Where: paragraph/statement glue:
  - `paragraph_10 … | paragraph_10 I_819 … | paragraph_10 I_819` (trailing `I`).
  - `statement_A_12 … I_JEK_820` (trailing ijek).
  - `statement_B_13 … I_BO_811` (trailing `i+bo`).
  - Comments explicitly mention “fixes an erroneous start… permits incomplete JOIK_JEK after I”.
- Why: allow partial/incomplete starts (e.g., answers, repairs) without hard failure.

### 3) Bare initial `NAI`

- Where: `text_0 : … | NAI_581 text_0`.
- Why: historically a preparser hack; now encoded in grammar (Change 9), making embedded texts consistent.

### 4) `CU` optional by rule

- Where: `front_gap_451 : CU_521 [free_modifier_32]?`.
- Why: change 22—treat `cu` via grammar instead of as a global elidable; improves recovery and avoids ambiguity.

### 5) Free modifiers widely accepted

- Where: Many tokens have an immediate `… | TOKEN free_modifier_32` variant, e.g., `CO`, `CEI`, `NU[NAI]`, `NA` preceding selbri/geks, `NAhE`, `TUhE`, `TEhU`, `BOI` (non-subscript), `VEI/VEhO`, etc. See tokens like `CO_443`, `CEI_444`, `NA_445`, `TUhE_447`, `PEhO_438`, `BIhE_439`, etc.
- Why: Changes 3 and 47 expand where free mods can attach (uniformity and readability), while keeping structural ones (e.g., `SEI…SEhU`) as proper constructs.

### 6) `BOI` special casing

- Where: `BOI_gap_461` allows free modifiers; `sub_gap_462` (and `right_br_no_free_474`) are the strict variants used in subscript contexts (`subscript_486`).
- Why: regularize `boi` (Change 6)—free mods allowed except when terminating subscripts to avoid ambiguity.

### 7) End‑of‑text (`FAhO`) as universal EOF

- Where: empty alternatives in some rules (e.g., `text_C_3 : paragraphs_4 | /* empty */`) are turned by `mkgramy` into actions that yield `elidable(FAhO_529)`.
- How: `tools/mkgramy` AWK logic emits `elidable(FAhO_529)` for bare `|` branches.
- Why: supports EOF without forcing `fa’o` in quoted/parenthesized blocks; aligns with Change 23’s error recovery goal.

### 8) Lexer compounding strategy (Step 5)

- Where: token decls in `grammar/grammar.300|233` contain both 700‑ and 900‑series `lexer_*`. `mkgramy` comments out the 700‑series and enables the 900‑series; the rules then reference the 900‑series (`lexer_B_910` → `EK_802`, etc.).
- How: `mkgramy` sed switches `%token lexer_*` blocks; rules up to `lexer_*` are cut off; compounding is done in the preparser and exposed to YACC as single tokens.
- Why: enforce LALR(1) and match actual implementation (Change 22’s “document reality”).

### 9) Balanced quotes/parentheses with optional closers

- Where: constructs like `TO … TOI_gap`, `LU … LIhU_gap`, `LOhU … LEhU` (no `_gap` because LEhU isn’t elidable), `TUhE … TUhU_gap`, `FIhO … FEhU_gap`, `ME … MEhU_gap`, `KE … KEhE_gap`.
- Why: forgiving editing experience and error recovery (missing closers synthesized), while still producing structured nodes.

### 10) TUhE/TUhU contents and `I`/`NIhO`

- Where: `statement_C_14 : TUhE_447 text_B_2 TUhU_gap_454 | tag_491 TUhE_447 …` and higher-level sequencing lets `I`/`NIhO` appear internally.
- Why: Changes 27 and 44—allow full(-er) text; plus Change 45 separation of `I` vs. ijek semantics.

### 11) Relative clauses, vocatives, and `VUhO` glue

- Where: `relative_clauses_121` using `ZIhE`; `VUhO_497 relative_clauses_121` to attach clauses to a full sumti; `vocative_35` variants allow relative-clause placements around `selbri`, `cmene`, or `sumti`.
- Why: Changes 7, 34, 36, 37—expressivity and clarity when attaching relatives to complete sumti or names.

### 12) Mekso/operator particulars

- Where: `MEX_310`/`operator_370` families: optional `PEhO`; `BIhE` for high-priority right-grouping; KE/KEhE grouping; JOI/BIhI and JEK/JOIK with BO/KE; NIhE/MOhE/NAhU/MAhO conversions; subscript grammar allowing `XI VEI … VEhO`.
- Why: Changes 1, 2, 10, 25, 26, 27, 39, 43—uniform precedence and grouping, better expressivity.

### 13) Action generator and synthesized nodes

- Where: `tools/mkgramy` emits actions `$$ = nodeN(ruleNo, …);` for each alternative; for `error` branches, `elidable(TOKEN)` with `yyerrok`.
- Why: stable, numbered AST nodes used by downstream tools; consistent synthesized tokens for elidables.

## Supporting rationale

Most of these adjustments correspond directly to the published change sets:

- `docs/techfix.300` — Changes 1–47 (e.g., 1–2 precedence, 3/47 free-mods, 6 BOI regularization, 7 ZIhE, 8–9 I+BO and initial NAI, 10 JOI forethought, 11 remove POhO, 20 relative clause grouping, 22 step‑5 doc, 23 CUhE/KI/NAhE cleanup, 24 CAhA/KI ordering, 25 CO/NA restriction, 26 NAhU selbri‑only, 27 TUhE/I/NIhO, 34 VUhO, 39 BIhE, 40 gek unification, 42 tense intervals, 45 I vs ijek, 46 termset revamp).
- `docs/techfix.233` — Earlier set (1–33), overlapping rationale for many of the same points.

## Notes for future ports (Tree‑sitter)

- Model elidables as `optional(close_token)` instead of `error` branches; rely on TS recovery for missing closers.
- Consider treating simple indicators (`UI/CAI/Y`) as `extras`; keep structured free-mods (e.g., `SEI…SEhU`, `XI` subscripts) as real nodes.
- Keep 900‑series lexer compounds as external tokens initially; eliminate left recursion and encode connective precedences with `prec.left/right`.
- Reuse the current lexer/preparser (Steps 1–5) via an external scanner first; full scanner reimplementation can follow later.

## File map

- Grammar: `grammar/grammar.300` (or `.233`) → `tools/mkgramy` → `grammar/grammar.y` (+ `grammar/gmiddle.y`).
- Rationale: `docs/techfix.300`, `docs/techfix.233`.
- Token/rule naming aids: `tools/names2.awk` (friendly names for `lexer_*`).

---
If you need deep links to specific rules/usages, search for `_gap`, `yyerrok`, `elidable(`, `I_819`, `I_JEK_820`, `I_BO_811`, and `lexer_*` in `grammar/grammar.y`.