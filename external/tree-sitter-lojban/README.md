# Tree-sitter Lojban (staged in monorepo)

Status: experimental. External scanner recognizes a small set of reserved cmavo (lu/li'u, to/toi, sei/se'u, joi, je), `bo`, `ke`, and generic words with basic cmene/brivla classification. Grammar has shells for sumti/selbri and basic constructs.

Usage (from repo root):

- make ts-generate
- make ts-test
- tools/ts-validate [paths]

Notes:
- The scanner treats '.' as whitespace, is case-insensitive for reserved tokens, and includes apostrophe as a word character.
- Next milestones: compound 900-series tokens for connective families; expand corpus and add CI.# tree-sitter-lojban (scaffold)

Experimental Tree-sitter grammar for Lojban, staged inside the lojban-parser repo.

Status: Skeleton. See `docs/proposed/tree-sitter-integration.md` for design goals and phased plan.

## Usage

- From repo root (preferred):
  - make ts-generate
  - make ts-test
  - tools/ts-validate examples/*  # optional, quick parse check

- From this directory (direct CLI):
  - tree-sitter generate  (or: npx tree-sitter generate)
  - tree-sitter test      (or: npx tree-sitter test)

## Layout

- grammar.js     Tree-sitter grammar rules (skeleton)
- scanner.c      External scanner (stub for now)
- queries/       Editor queries (highlights/folds/injections)
- corpus/        Sample inputs and expected trees (optional)

## Notes

- This scaffold aims to mirror baselines 233/300. External scanner will bridge
  existing lexer/preparser compounds initially.

- When stable, this can be moved to its own repo and added here as a submodule.

License: inherits from the parent repository (see ../..).