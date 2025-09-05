#!/usr/bin/env python3
import sys
import re
import json
from collections import Counter

def normalize_ts_tree(tree_str):
    """Extract node types from TS tree S-expression and count occurrences."""
    nodes = re.findall(r'\((\w+)', tree_str)
    return Counter(nodes)

def normalize_c_output(c_str):
    """Extract node types from C parser output and count occurrences."""
    nodes = re.findall(r'\((\w+)|{(\w+)}', c_str)
    flat = [n for tup in nodes for n in tup if n]
    return Counter(flat)

def main():
    if len(sys.argv) != 3:
        print("Usage: python3 ts-diff.py <ts_tree> <c_output>", file=sys.stderr)
        sys.exit(1)
    
    ts_tree = sys.argv[1]
    c_output = sys.argv[2]
    
    ts_nodes = normalize_ts_tree(ts_tree)
    c_nodes = normalize_c_output(c_output)
    
    print(f"TS node kinds: {len(ts_nodes)}")
    print(f"C node kinds: {len(c_nodes)}")
    
    # Simple diff
    only_ts = set(ts_nodes.keys()) - set(c_nodes.keys())
    only_c = set(c_nodes.keys()) - set(ts_nodes.keys())
    common = set(ts_nodes.keys()) & set(c_nodes.keys())

    def fmt_counts(prefix, kinds):
        lines = []
        for k in sorted(kinds):
            t = ts_nodes.get(k, 0)
            c = c_nodes.get(k, 0)
            if t != c:
                lines.append(f"  {k}: TS={t} C={c}")
        return "\n".join(lines) if lines else "  (none)"

    print(f"Common kinds with count deltas:\n{fmt_counts('common', common)}")
    print(f"Only TS kinds: {', '.join(sorted(only_ts)) if only_ts else '(none)'}")
    print(f"Only C kinds: {', '.join(sorted(only_c)) if only_c else '(none)'}")

if __name__ == "__main__":
    main()
