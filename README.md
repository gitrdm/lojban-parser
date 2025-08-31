# Lojban Parser

Purpose
- A modernized C implementation of the Lojban grammar parser with reproducible grammar regeneration, optional GLR mode, and exporters (EBNF, Lark).

Common targets
- make: build parser (./parser)
- make regen: regenerate grammar.y and generated headers from baseline
- make glr: build with GLR middle grammar (use with make regen)
- make ebnf | make lark | make check-lark: export/validate grammars
- make test | make regress: run smoke and regression suites

Directory map
- build/: build staging; generated artifacts (see build/README.md)
- docs/: documentation and historical grammar notes (see docs/README.md)
- examples/: demo scripts (see examples/README.md)
- grammar/: grammar baselines and exports (see grammar/README.md)
- include/: public headers; include/generated/ for generated fragments (see include/README.md)
- src/: C sources (see src/README.md)
- tests/: smoke/regression harness (see tests/README.md)
- tools/: generation/export utilities (see tools/README.md)

Quick start
1. make regen && make
2. ./parser openwm.txt
3. make lark && make check-lark

Notes
- Select baseline with BASELINE=233|300; toggle GLR with GLR=1.
- Do not edit generated files by hand; run the appropriate make target.