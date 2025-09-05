# tree-sitter-lojban (scaffold)

Experimental Tree-sitter grammar for Lojban, staged inside the lojban-parser repo.

Status: Skeleton. See `docs/proposed/tree-sitter-integration.md` for design goals and phased plan.

## Usage

- Generate parser sources:
  - npm install
  - npx tree-sitter generate
- Run tests (none yet):
  - npx tree-sitter test

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