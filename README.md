# Lojban Parser

Modernized C implementation of the Lojban grammar parser targeting the 3rd baseline as published in “The Complete Lojban Language”. Includes reproducible grammar regeneration, optional GLR mode, and grammar exporters (EBNF, Lark).

## Quick start

1) make regen && make
2) ./parser openwm.txt
3) make lark && make check-lark

Notes
- Select baseline with BASELINE=233 or 300 (default 300).
- Toggle GLR with GLR=1 (via make glr or make regen GLR=1).
- Do not edit generated files by hand; re-run generation targets.

## Command-line usage

The parser reads from stdin or a file argument and writes to stdout.

Options (combine debug letters for -d):
- -d[vLRlre*]  Debug flags: v=valsi, L=cpd_lex, R=cpd_reduce, l=lex, r=reduce, e=elidable, *=all
- -t           Tree output
- -s           Simple mode (flatten single-child nodes)
- -e           Elide mode (omit insertion of elidables)
- -f           Full parse (do not collapse single-child nodes)
- -p           Prolog-style output (rule/selma'o names as functors)
- -y           YAML-like output (structured listing)
- -c           Generate cmavo list and exit
- -h, --help   Show help and exit
- --version    Show version and exit

Preprocessing rules (for reparsing parsed text):
- Upper-case → lower-case; '.' acts as space; text between slashes '/'…'/' ignored
- Backslash-newline escapes newline; digits map to cmavo; other non-alpha ignored (apostrophe is alpha)

## Build

Common targets
- make                Build parser (./parser)
- make regen          Regenerate grammar and generated headers
- make glr            Regenerate with GLR middle grammar and build
- make ebnf           Export EBNF (grammar/grammar.ebnf)
- make lark           Export Lark grammar (grammar/grammar.lark)
- make check-lark     Validate Lark grammar loads
- make test           Run smoke tests
- make regress        Run regression suite

Knobs (variables)
- STD=c11|c17         C standard (default c11)
- STRICT=1            Extra warnings (-Wpedantic -Wshadow -Wconversion -Wpointer-arith -Wformat=2)
- BASELINE=233|300    Grammar baseline for regeneration (default 300)
- GLR=1               Use GLR middle grammar during regeneration

Sanitizers and analysis
- make asan           AddressSanitizer build
- make ubsan          UndefinedBehaviorSanitizer build
- make analyze        GCC static analyzer (if available)
- make ci             Clean → regen → build → test

## Regenerating grammar and names

make regen performs:
- tools/mkgramy to compose grammar/grammar.y from grammar/grammar.$BASELINE and grammar/gmiddle(.glr).y; updates include/version.h
- bison (or yacc) to generate src/grammar.c and include/grammar.h
- tools/mknames to rebuild include/generated/rulename.i

Notes
- Switch baseline: make regen BASELINE=233
- Enable GLR: make regen GLR=1 or use make glr (wraps regen+build)
- Generated files: src/grammar.c, include/grammar.h, include/generated/rulename.i, include/generated/selmao.i, grammar/grammar.y

## Grammar exports

- EBNF: make ebnf → grammar/grammar.ebnf
- Lark: make lark → grammar/grammar.lark; make check-lark validates it loads in Lark

What the Lark export is
- A convenience skeleton declaring nonterminals and terminals via %declare for experimentation with Python Lark (Earley)
- Not a full drop-in parser; you must provide tokenization compatible with the C lexer

## Tests

Smoke test
- make test runs ./parser over sample input and exercises -p, -t, -y modes

Regression suite
- make regress compares outputs vs goldens; make regress-update refreshes goldens

Examples
- ./parser < textfile
- ./parser -p textfile
- echo "mi klama" | ./parser -t

## Troubleshooting

- Use make asan/ubsan for diagnostics on crashes
- Ensure bison or yacc, awk, and cpp are on PATH for make regen
- If mknames complains about include/grammar.h, run make regen first

## Directory map

- build/     Build staging; generated artifacts (see build/README.md)
- docs/      Documentation and historical grammar notes (see docs/README.md)
- examples/  Demo scripts (see examples/README.md)
- grammar/   Grammar baselines and exports (see grammar/README.md)
- include/   Public headers; include/generated/ for fragments (see include/README.md)
- src/       C sources (see src/README.md)
- tests/     Smoke/regression harness (see tests/README.md)
- tools/     Generation/export utilities (see tools/README.md)

## License

See COPYING (GPL) and license file for details.