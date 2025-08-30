#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")/.." # into tests/
ROOT_DIR=$(pwd)/..
BIN="$ROOT_DIR/parser"
REGRESS_DIR="$ROOT_DIR/tests/regress"
INPUT_DIR="$REGRESS_DIR/inputs"
GOLDEN_DIR="$REGRESS_DIR/goldens"

modes=(default prolog tree yaml)

ensure_bin() {
  if [[ ! -x "$BIN" ]]; then
    echo "Building parser..." >&2
    (cd "$ROOT_DIR" && make >/dev/null)
  fi
}

run_one() {
  local input=$1
  local mode=$2
  local out
  case "$mode" in
    default) out=$("$BIN" "$input") ;;
    prolog)  out=$("$BIN" -p "$input") ;;
    tree)    out=$("$BIN" -t "$input") ;;
    yaml)    out=$("$BIN" -y "$input") ;;
    *) echo "Unknown mode: $mode" >&2; return 2 ;;
  esac
  printf "%s" "$out"
}

update_goldens() {
  ensure_bin
  mkdir -p "$GOLDEN_DIR"
  local rc=0
  for f in "$INPUT_DIR"/*.txt; do
    for m in "${modes[@]}"; do
      run_one "$f" "$m" >"$GOLDEN_DIR/$(basename "$f").$m.txt" || rc=1
    done
  done
  exit $rc
}

check_diff() {
  ensure_bin
  local rc=0
  for f in "$INPUT_DIR"/*.txt; do
    for m in "${modes[@]}"; do
      tmp=$(mktemp)
      run_one "$f" "$m" >"$tmp"
      gfile="$GOLDEN_DIR/$(basename "$f").$m.txt"
      if ! diff -u "$gfile" "$tmp" >/dev/null; then
        echo "DIFF: $(basename "$f") [$m]" >&2
        diff -u "$gfile" "$tmp" || true
        rc=1
      fi
      rm -f "$tmp"
    done
  done
  exit $rc
}

case "${1:-}" in
  --update) update_goldens ;;
  "")      check_diff ;;
  *) echo "Usage: $0 [--update]" >&2; exit 2 ;;
esac
