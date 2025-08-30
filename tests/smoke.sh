#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")/.."
# Exercises: print (default), rprint (-p), tree (-t), and yprint (-y)
INPUT=openwm.txt

printf "== default print ==\n"
./parser "$INPUT" | head -n 5 || true

printf "\n== rprint (-p) ==\n"
./parser -p "$INPUT" | head -n 5 || true

printf "\n== tree (-t) ==\n"
./parser -t "$INPUT" | head -n 5 || true

printf "\n== yprint (-y) ==\n"
./parser -y "$INPUT" | head -n 20 || true
