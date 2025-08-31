# src/

Purpose
- C sources for the lexer, parser, and supporting utilities.

Highlights
- grammar.c / grammar.h: Generated parser source and header from Bison/Yacc.
- lex.c and lexrule*.c: Lexer core and rule tables.
- node.c / node.h: AST node handling and utilities.
- token.c / token.h: Token definitions and interfaces.
- selmao.c / mkcmavo.c: Selma'o tables and cmavo generation helpers.
- print.c: Various output/printer modes (print, rprint, tree, yprint).
- absorb.c, fabsorb.c, filter.c, getword.c, glue.c, queue.c, termin.c, version.c: Parser pipeline helpers and utilities.

Build
- Managed by the root Makefile; run `make` to build `./parser`.
- Many files depend on generated headers under `include/` and fragments under `include/generated/`.
