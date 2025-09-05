#!/usr/bin/env python3
import sys
import re
import json

def normalize_ts_tree(tree_str):
    """Extract node types from TS tree S-expression."""
    # Simple regex to find node types like (statement, (sumti, etc.
    nodes = re.findall(r'\((\w+)', tree_str)
    return sorted(set(nodes))  # Unique node types

def normalize_c_output(c_str):
    """Extract node types from C parser output."""
    # C output like (mi {klama }), so similar
    nodes = re.findall(r'\((\w+)|{(\w+)}', c_str)
    flat = [n for tup in nodes for n in tup if n]
    return sorted(set(flat))

def main():
    if len(sys.argv) != 3:
        print("Usage: python3 ts-diff.py <ts_tree> <c_output>", file=sys.stderr)
        sys.exit(1)
    
    ts_tree = sys.argv[1]
    c_output = sys.argv[2]
    
    ts_nodes = normalize_ts_tree(ts_tree)
    c_nodes = normalize_c_output(c_output)
    
    print(f"TS unique nodes: {len(ts_nodes)} - {', '.join(ts_nodes)}")
    print(f"C unique nodes: {len(c_nodes)} - {', '.join(c_nodes)}")
    
    # Simple diff
    only_ts = set(ts_nodes) - set(c_nodes)
    only_c = set(c_nodes) - set(ts_nodes)
    common = set(ts_nodes) & set(c_nodes)
    
    print(f"Common: {len(common)} - {', '.join(sorted(common))}")
    print(f"Only TS: {len(only_ts)} - {', '.join(sorted(only_ts))}")
    print(f"Only C: {len(only_c)} - {', '.join(sorted(only_c))}")

if __name__ == "__main__":
    main()
