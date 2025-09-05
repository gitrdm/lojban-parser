Regression tests verify that parser outputs remain stable across changes. Goldens are generated from the current parser on master and compared byte-for-byte.

Layout:
- inputs/: sample input texts
- goldens/: expected outputs per mode (default, -p, -t, -y)
- run.sh: runner to compare current output against goldens
 - test_sentences.txt: large corpus with inline GOOD/BAD markers (human-editable)
 - inputs/test_sentences.jsonl: generated manifest consumed by runners

Usage:
- Make sure the parser is built: `make`
- Generate or refresh goldens from current parser: `tests/regress/run.sh --update`
- Run regression suite: `tests/regress/run.sh`
 - Build test sentences manifest (from .txt → .jsonl): `make sentences-manifest`
 - Run only the test sentences suite: `make regress-sentences`

Notes:
- Keep inputs small and representative; they should parse quickly.
- Goldens are text files committed to the repo.
 - The JSONL manifest schema (per line):
	 - id: string (stable short hash of text or slug)
	 - text: string
	 - expect: "GOOD" | "BAD" | "UNKNOWN"
	 - skip: boolean (default false)
	 - skip_reason: string (optional)
	 - tags: array<string>
	 - section: string (optional)
	 - source: { file: string, line: number }
	 - engines (optional): { yacc: "GOOD"|"BAD"|null, bison: "GOOD"|"BAD"|null }
	 - golden_tree (optional): { yacc_sha256?: string, bison_sha256?: string, ts_sha256?: string }
	 - notes: string (optional)

Conversion rules from test_sentences.txt:
- Lines starting with '#' are comments/section headers (populate `section` or ignore).
- Expected markers must appear at end of line: "-- GOOD" / "-- BAD"; otherwise `expect`="UNKNOWN".
- Optional skip marker: "-- SKIP: reason"; sets skip=true and `skip_reason`.
- Optional inline tags like "## tag:a,b" and "## id:foo" populate `tags` and `id`.

Generated files:
- inputs/test_sentences.jsonl (committed)
- goldens/{yacc,bison,ts}/results.jsonl and trees/ (when applicable)
