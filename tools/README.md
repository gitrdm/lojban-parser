# tools/

Purpose
- Grammar regeneration, exporting, and validation utilities used by the Makefile.

Key scripts
- mkgramy: Composes `grammar/grammar.y` from the publication baseline and middle grammar; updates `include/version.h`.
- mknames: Generates `include/generated/rulename.i` from `src/grammar.c`.
- names1.awk, names2.awk: AWK helpers for rule-name extraction.
- yacc_to_ebnf.awk: Transform Yacc grammar to EBNF export.
- yacc_to_lark.awk: Transform Yacc grammar to Lark-compatible EBNF.
- validate_lark_grammar.py: Loads `grammar/grammar.lark` with Lark to sanity-check.

Notes
- Prefer invoking via Make targets (`regen`, `ebnf`, `lark`, `check-lark`).
