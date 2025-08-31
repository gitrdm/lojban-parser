# include/generated/

Purpose
- Generated include fragments and tables, produced during the regeneration/build steps.

Files
- rulename.i: Rule name mapping emitted by `tools/mknames`.
- selmao.i: Selma'o and cmavo categorization tables.

Regeneration
- Run `make regen` (and optionally `BASELINE=...` and/or `GLR=1`) to refresh these.
- Do not edit manually; changes will be overwritten.
