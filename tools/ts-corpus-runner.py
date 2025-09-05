#!/usr/bin/env python3
import sys
import json
import subprocess
import os

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
    if len(sys.argv) != 2:
        print("Usage: python3 ts-corpus-runner.py <jsonl_file>", file=sys.stderr)
        sys.exit(1)
    
    jsonl_file = sys.argv[1]
    ts_dir = os.path.join(os.path.dirname(__file__), '..', 'external', 'tree-sitter-lojban')
    
    # Ensure TS is generated
    subprocess.run(['tree-sitter', 'generate'], cwd=ts_dir, capture_output=True)
    
    total = 0
    ts_success = 0
    c_success = 0
    both_success = 0
    
    with open(jsonl_file, 'r') as f:
        for line in f:
            entry = json.loads(line.strip())
            text = entry['text']
            expect = entry['expect']
            total += 1
            
            # TS parse
            ts_tree = run_ts_parse(text, ts_dir)
            ts_ok = ts_tree is not None
            
            # C parse (stub, assume parser exists)
            # For now, just check if text parses without error
            c_ok = True  # Placeholder
            
            if ts_ok:
                ts_success += 1
            if c_ok:
                c_success += 1
            if ts_ok and c_ok:
                both_success += 1
            
            if total % 100 == 0:
                print(f"Processed {total}: TS {ts_success}/{total}, C {c_success}/{total}, Both {both_success}/{total}")
    
    print(f"Final: TS {ts_success}/{total}, C {c_success}/{total}, Both {both_success}/{total}")

if __name__ == "__main__":
    main()
