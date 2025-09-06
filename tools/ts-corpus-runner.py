#!/usr/bin/env python3
import sys
import json
import subprocess
import os
from pathlib import Path

def run_ts_parse(text, ts_dir):
    """Run Tree-sitter parse on text."""
    try:
        result = subprocess.run(
            ['tree-sitter', 'parse', '-'],
            input=text,
            text=True,
            capture_output=True,
            cwd=ts_dir,
            timeout=10
        )
        if result.returncode == 0:
            return result.stdout.strip()
        else:
            return None
    except:
        return None

def main():
    # Lightweight arg parsing: allow optional --limit N before the jsonl path
    limit = None
    args = sys.argv[1:]
    if not args:
        print("Usage: python3 ts-corpus-runner.py [--limit N] <jsonl_file>", file=sys.stderr)
        sys.exit(1)
    if args[0] == '--limit':
        if len(args) < 3:
            print("Usage: python3 ts-corpus-runner.py [--limit N] <jsonl_file>", file=sys.stderr)
            sys.exit(1)
        try:
            limit = int(args[1])
        except ValueError:
            print("--limit must be an integer", file=sys.stderr)
            sys.exit(1)
        args = args[2:]
    if len(args) != 1:
        print("Usage: python3 ts-corpus-runner.py [--limit N] <jsonl_file>", file=sys.stderr)
        sys.exit(1)
    jsonl_file = args[0]
    ts_dir = os.path.join(os.path.dirname(__file__), '..', 'external', 'tree-sitter-lojban')
    
    # Ensure TS is generated
    subprocess.run(['tree-sitter', 'generate'], cwd=ts_dir, capture_output=True)
    
    total = 0
    ts_success = 0
    c_success = 0
    both_success = 0
    diffs = 0
    
    with open(jsonl_file, 'r') as f:
        for line in f:
            entry = json.loads(line.strip())
            text = entry['text']
            expect = entry.get('expect')
            total += 1
            if limit is not None and total > limit:
                break
            
            # TS parse
            ts_tree = run_ts_parse(text, ts_dir)
            ts_ok = ts_tree is not None
            
            # C parse if parser exists; otherwise mark unknown
            c_ok = False
            parser_bin = Path(__file__).parent.parent / 'parser'
            if parser_bin.exists() and os.access(parser_bin, os.X_OK):
                try:
                    c_res = subprocess.run([str(parser_bin)], input=text.encode('utf-8'), stdout=subprocess.PIPE, stderr=subprocess.PIPE, timeout=5)
                    c_ok = len(c_res.stdout.strip()) > 0
                    # Optional: structural diff when both trees exist
                    if ts_ok and c_ok:
                        try:
                            diff_res = subprocess.run(['python3', str(Path(__file__).parent / 'ts-diff.py'), ts_tree, c_res.stdout.decode('utf-8', errors='ignore')], stdout=subprocess.PIPE, stderr=subprocess.PIPE, timeout=3)
                            # Count a diff if there is any non-empty delta reported beyond headers
                            body = diff_res.stdout.decode('utf-8', errors='ignore')
                            if 'Only TS kinds' in body or 'Only C kinds' in body:
                                # Heuristic: treat any listed-only kinds or count deltas as a diff event
                                if '(none)' not in body:
                                    diffs += 1
                        except Exception:
                            pass
                except subprocess.TimeoutExpired:
                    c_ok = False
            
            if ts_ok:
                ts_success += 1
            if c_ok:
                c_success += 1
            if ts_ok and c_ok:
                both_success += 1
            
            if total % 100 == 0:
                print(f"Processed {total}: TS {ts_success}/{total}, C {c_success}/{total}, Both {both_success}/{total}")
    
    print(f"Final: TS {ts_success}/{total}, C {c_success}/{total}, Both {both_success}/{total}, Diffs {diffs}")

if __name__ == "__main__":
    main()
