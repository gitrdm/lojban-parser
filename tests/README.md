# tests/

Purpose
- Test harnesses for smoke and regression testing.

Files
- smoke.sh: Quick smoke run over sample inputs; exercises print/rprint/tree/yprint modes.
- regress/: Regression corpus and runner comparing outputs across modes/builds.

Usage
- `make test` runs the smoke test.
- `make regress` runs the regression suite; use `make regress-update` to update expected outputs.
