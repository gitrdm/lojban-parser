Regression tests verify that parser outputs remain stable across changes. Goldens are generated from the current parser on master and compared byte-for-byte.

Layout:
- inputs/: sample input texts
- goldens/: expected outputs per mode (default, -p, -t, -y)
- run.sh: runner to compare current output against goldens

Usage:
- Make sure the parser is built: `make`
- Generate or refresh goldens from current parser: `tests/regress/run.sh --update`
- Run regression suite: `tests/regress/run.sh`

Notes:
- Keep inputs small and representative; they should parse quickly.
- Goldens are text files committed to the repo.
