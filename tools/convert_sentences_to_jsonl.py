#!/usr/bin/env python3
"""
Convert tests/regress/test_sentences.txt into tests/regress/inputs/test_sentences.jsonl

Parsing rules documented in tests/regress/README.md.
This is a placeholder skeleton to be implemented next.
"""
import argparse
import hashlib
import json
import os
import re
import sys


def stable_id(text: str) -> str:
    h = hashlib.sha256(text.encode('utf-8')).hexdigest()
    return h[:12]


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("input", default="tests/regress/test_sentences.txt", nargs="?")
    ap.add_argument("output", default="tests/regress/inputs/test_sentences.jsonl", nargs="?")
    args = ap.parse_args()

    in_path = args.input
    out_path = args.output
    os.makedirs(os.path.dirname(out_path), exist_ok=True)

    section = None
    with open(in_path, 'r', encoding='utf-8') as fin, open(out_path, 'w', encoding='utf-8') as fout:
        for i, raw in enumerate(fin, start=1):
            line = raw.rstrip('\n')
            if not line.strip():
                continue
            if line.lstrip().startswith('#'):
                # Treat as a potential section header
                m = re.match(r"^#+\s*(.+)$", line.strip())
                if m:
                    section = m.group(1).strip()
                continue

            expect = "UNKNOWN"
            skip = False
            skip_reason = None
            tags = []
            forced_id = None

            # Parse optional tags/id blocks like '## tag:a,b' and '## id:foo'
            tmp = line
            tag_m = re.search(r"\s##\s*tag:([^#]+)$", tmp)
            if tag_m:
                tags = [t.strip() for t in tag_m.group(1).split(',') if t.strip()]
                tmp = tmp[:tag_m.start()].rstrip()
            id_m = re.search(r"\s##\s*id:([^#\s]+)$", tmp)
            if id_m:
                forced_id = id_m.group(1).strip()
                tmp = tmp[:id_m.start()].rstrip()

            # Parse skip marker at EOL
            skip_m = re.search(r"\s--\s*SKIP:(.*)$", tmp)
            if skip_m:
                skip = True
                skip_reason = skip_m.group(1).strip()
                tmp = tmp[:skip_m.start()].rstrip()

            # Parse expected marker at EOL
            if re.search(r"\s--\s*GOOD$", tmp):
                expect = "GOOD"
                tmp = re.sub(r"\s--\s*GOOD$", "", tmp)
            elif re.search(r"\s--\s*BAD$", tmp):
                expect = "BAD"
                tmp = re.sub(r"\s--\s*BAD$", "", tmp)

            text = tmp.rstrip()
            if not text:
                continue

            rec = {
                "id": forced_id or stable_id(text),
                "text": text,
                "expect": expect,
                "skip": skip,
                "skip_reason": skip_reason,
                "tags": tags,
                "section": section,
                "source": {"file": os.path.relpath(in_path), "line": i},
            }
            fout.write(json.dumps(rec, ensure_ascii=False) + "\n")

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
