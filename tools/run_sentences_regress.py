#!/usr/bin/env python3
"""
Sentence regression runner.

Purpose:
    Execute one or more C parser binaries (LR/GLR) over a JSONL manifest of test
    sentences and report pass/fail versus expectation. Optionally emit detailed
    per-record results as JSONL for downstream analysis or comparison with
    Tree-sitter.

Usage examples:
    python3 tools/run_sentences_regress.py \
            --jsonl tests/regress/inputs/test_sentences.jsonl \
            --parser ./parser_lr --label LR \
            --parser ./parser_glr --label GLR \
            --jobs 32 \
            --timeout 1.5 \
            --out-jsonl tests/regress/outputs/sentences_results.jsonl

Notes:
    - Success is determined by non-empty stdout from the parser on a given input.
    - Unknown expectations (expect=="UNKNOWN") do not count as mismatches.
    - Skipped entries are not executed and are not emitted into the output JSONL.
"""
import argparse
import json
import os
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor, as_completed
from time import perf_counter
from pathlib import Path


def run_parser(parser_path: str, text: str, timeout: float):
    """Run a parser binary with the given text on stdin.

    Returns a tuple: (ok: bool, stdout: bytes, stderr: bytes, duration_ms: float)
    where ok indicates non-empty stdout (heuristic for successful parse).
    """
    try:
        t0 = perf_counter()
        proc = subprocess.run(
            [parser_path],
            input=text.encode('utf-8'),
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            timeout=timeout,
            check=False,
        )
        dt_ms = (perf_counter() - t0) * 1000.0
    except subprocess.TimeoutExpired:
        return False, b"", b"timeout", timeout * 1000.0
    # Success heuristic: parser prints to stdout on success; on failure it prints to stderr only
    ok = len(proc.stdout.strip()) > 0
    return ok, proc.stdout, proc.stderr, dt_ms


def main():
    """CLI entry point: parse args, run parsers (optionally in parallel),
    print a summary, and optionally write detailed JSONL results.
    """
    ap = argparse.ArgumentParser(description="Run sentence regressions against one or more parser binaries.")
    ap.add_argument("--jsonl", required=True, help="Path to test_sentences.jsonl manifest")
    ap.add_argument("--parser", dest="parsers", action="append", required=True,
                    help="Path to parser binary (repeat for multiple)")
    ap.add_argument("--label", dest="labels", action="append",
                    help="Optional label for the corresponding --parser; repeat to match count")
    ap.add_argument("--timeout", type=float, default=2.0, help="Per-sentence timeout in seconds (default: 2.0)")
    ap.add_argument("--jobs", type=int, default=max(1, (os.cpu_count() or 4)),
                    help="Parallel jobs (default: CPU count)")
    ap.add_argument("--out-jsonl", dest="out_jsonl", help="Write detailed results to JSONL file (one record per parser x sentence)")
    args = ap.parse_args()

    manifest_path = Path(args.jsonl)
    if not manifest_path.exists():
        print(f"Manifest not found: {manifest_path}", file=sys.stderr)
        return 2

    parsers = args.parsers
    labels = args.labels or []
    # Normalize labels length
    if len(labels) < len(parsers):
        labels += [Path(p).name for p in parsers[len(labels):]]

    # Load all entries
    entries = []
    with manifest_path.open('r', encoding='utf-8') as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            try:
                obj = json.loads(line)
                entries.append(obj)
            except json.JSONDecodeError:
                print(f"Skipping invalid JSONL line: {line[:120]}", file=sys.stderr)

    # If writing detailed results, prepare the output file
    out_fh = None
    if args.out_jsonl:
        out_path = Path(args.out_jsonl)
        out_path.parent.mkdir(parents=True, exist_ok=True)
        out_fh = out_path.open('w', encoding='utf-8')

    # Tally per parser (evaluate each parser over entries; parallelize per sentences)
    reports = []
    for idx, parser in enumerate(parsers):
        label = labels[idx] if idx < len(labels) else Path(parser).name
        total = skipped = unknown = expect_good = expect_bad = 0
        pass_count = fail_count = 0
        mismatches = []

        # Build task list excluding skipped
        tasks = []
        meta = []  # parallel arrays to track id and expectation
        for e in entries:
            if e.get("skip"):
                skipped += 1
                continue
            text = e.get("text", "")
            exp = (e.get("expect") or "UNKNOWN").upper()
            if exp not in ("GOOD", "BAD", "UNKNOWN"):
                exp = "UNKNOWN"
            meta.append((e.get("id"), exp, text))
            tasks.append(text)
            total += 1
            if exp == "UNKNOWN":
                unknown += 1
            elif exp == "GOOD":
                expect_good += 1
            elif exp == "BAD":
                expect_bad += 1

        # Run in parallel
        results = [False] * len(tasks)
        durations = [0.0] * len(tasks)
        with ThreadPoolExecutor(max_workers=max(1, args.jobs)) as ex:
            fut_to_idx = {ex.submit(run_parser, parser, tasks[i], args.timeout): i for i in range(len(tasks))}
            for fut in as_completed(fut_to_idx):
                i = fut_to_idx[fut]
                try:
                    ok, out, err, dt_ms = fut.result()
                except Exception:
                    ok, out, err, dt_ms = False, b"", b"exception", 0.0
                results[i] = ok
                durations[i] = dt_ms

        # Aggregate
        for i, ok in enumerate(results):
            if ok:
                pass_count += 1
            else:
                fail_count += 1
            mid, exp, text = meta[i]
            if exp == "GOOD" and not ok:
                mismatches.append((mid, "expected GOOD", text[:120]))
            elif exp == "BAD" and ok:
                mismatches.append((mid, "expected BAD", text[:120]))

            # Write detailed record if requested
            if out_fh is not None:
                rec = {
                    "id": mid,
                    "label": label,
                    "parser": str(parser),
                    "ok": bool(ok),
                    "expect": exp,
                    "skipped": False,
                    "duration_ms": durations[i],
                }
                # propagate a few useful fields from manifest
                # Find corresponding entry quickly via same index mapping: meta[i] mirrors tasks order which mirrored non-skipped entries order
                # However, to avoid O(N^2), we don't re-scan; we can enrich with minimal info only
                out_fh.write(json.dumps(rec, ensure_ascii=False) + "\n")

        reports.append({
            "label": label,
            "parser": parser,
            "total": total,
            "skipped": skipped,
            "unknown": unknown,
            "expect_good": expect_good,
            "expect_bad": expect_bad,
            "pass": pass_count,
            "fail": fail_count,
            "mismatches": mismatches,
        })

    # Print a concise report
    for r in reports:
        print(f"== {r['label']} ({r['parser']}) ==")
        print(f"total: {r['total']}  skipped: {r['skipped']}  unknown: {r['unknown']}")
        print(f"expect_good: {r['expect_good']}  expect_bad: {r['expect_bad']}")
        print(f"pass: {r['pass']}  fail: {r['fail']}")
        print(f"mismatches: {len(r['mismatches'])}")
        if r['mismatches']:
            # Show up to first 20 mismatches to keep output readable
            for mid, why, snippet in r['mismatches'][:20]:
                print(f"  - {mid}: {why} :: {snippet}")
            if len(r['mismatches']) > 20:
                print(f"  ... ({len(r['mismatches']) - 20} more)")
        print()

    # Non-zero exit if any mismatches for any parser
    any_mismatch = any(len(r["mismatches"]) > 0 for r in reports)
    if out_fh is not None:
        out_fh.close()
    sys.exit(1 if any_mismatch else 0)


if __name__ == "__main__":
    main()
