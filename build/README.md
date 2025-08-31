# build/

Purpose
- Staging area for generated artifacts and intermediate build outputs.
- Created/managed by the Makefile; safe to clean/recreate.

Layout
- include/: headers staged by the build (generated or copied) for downstream includes.
- src/: generated C sources (e.g., parser) and any compiled intermediates when configured that way.

Notes
- The primary parser binary is built at the repo root as `./parser` per current Makefile defaults.
- Run `make clean` to remove derived files safely.
