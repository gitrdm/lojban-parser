#!/usr/bin/env python3
"""
Minimal example: load grammar/grammar.lark with Lark (Earley) and parse a token stream.

Notes
- The generated grammar.lark uses %declare for terminals; you must supply tokens.
- This demo shows two approaches:
  1) Pure-text + custom lexer callback to convert words to declared tokens.
  2) Pre-tokenized input (sequence of Token objects) fed directly to Lark.

Run
  python3 examples/parse_with_lark.py --help

Requirements
  pip install lark

Caveats
- This is exploratory. The mapping from Lojban words to terminals must mirror the
  cmavo/cmevla/etc. classification from the C lexer. This example uses a tiny,
  incomplete mapping for illustration only.
- Use parser='earley', ambiguity='explicit' to surface GLR-like ambiguities.
"""
from __future__ import annotations

import argparse
import sys
from pathlib import Path
from typing import Iterable, List

from lark import Lark, Token, Transformer
from lark.exceptions import GrammarError

ROOT = Path(__file__).resolve().parents[1]
GRAMMAR_PATH = ROOT / "grammar" / "grammar.lark"

# --- A toy, incomplete mapping from words to token names ---
# Replace/extend this to reflect your lexing rules.
CMAVO = {
    # Illustrative mapping onto grammar terminals actually declared in grammar.lark
    # Pronouns (sumti anaphora): map common ones to KOHA_555
    "mi": "KOHA_555",
    "do": "KOHA_555",
    # Separator 'cu'
    "cu": "CU_521",
    # Articles (simplified)
    "la": "LA_558",
    "le": "LE_562",
}

BRIVLA = {
    "klama": "BRIVLA_509",
    "citka": "BRIVLA_509",
}

NAME = {
    "lojban": "CMENE_518",
}


def simple_lexer(words: Iterable[str]) -> Iterable[Token]:
    """Very naive lexer: map each space-separated word to a declared token.
    Falls back to a generic word token if unknown (will likely fail in parse).
    """
    for w in words:
        lw = w.strip().lower()
        if not lw:
            continue
        if lw in CMAVO:
            yield Token(CMAVO[lw], lw)
        elif lw in BRIVLA:
            yield Token(BRIVLA[lw], lw)
        elif lw in NAME:
            yield Token(NAME[lw], lw)
        elif lw.isdigit():
            # Map digits to a number-ish token if present in grammar
            # Update this to whatever numeric terminal your grammar declares
            yield Token("PA_672", lw)  # example only; see %declare PA_672
        else:
            # Unknown; try treating as a name or word placeholder
            yield Token("CMENE_518", lw)


class JustCount(Transformer):
    """Example transformer that counts nodes for a sanity check."""

    def __default__(self, data, children, meta):  # type: ignore[override]
        return (data, len(children))


def build_lark(full: bool = False) -> Lark:
    if not full:
        # Minimal, working subset grammar for demonstration
        fallback = """
start: toplevel
%import common.WS
%ignore WS
CU: /cu/
BRIVLA: /(klama|citka)/
FAHO: /faho/
toplevel: sentence FAHO | sentence
KOHA: /(mi|do)/
sentence: (CU|KOHA) BRIVLA
        """
        return Lark(
            fallback,
            parser="earley",
            ambiguity="explicit",
            start="toplevel",
            lexer="dynamic",
            keep_all_tokens=True,
            propagate_positions=True,
            maybe_placeholders=True,
        )

    # Experimental path: attempt to load the full exported grammar
    grammar_text = GRAMMAR_PATH.read_text(encoding="utf-8")
    return Lark(
        grammar_text,
        parser="earley",
        ambiguity="explicit",
        start="toplevel",
        lexer="dynamic",
        keep_all_tokens=True,
        propagate_positions=True,
        maybe_placeholders=True,
    )


def parse_text(lark: Lark, text: str):
    return lark.parse(text)


def parse_tokens(lark: Lark, tokens: List[Token]):
    # Still available for custom token streams if you expand this example
    return lark.parse(tokens)  # type: ignore[arg-type]


def main(argv=None) -> int:
    ap = argparse.ArgumentParser(description="Parse with Lark Earley using grammar/grammar.lark")
    ap.add_argument("input", nargs="?", default="mi klama", help="Input string (space-separated words)")
    ap.add_argument("--show-tree", action="store_true", help="Print the parse tree")
    ap.add_argument("--full", action="store_true", help="Use the full exported grammar (experimental)")
    args = ap.parse_args(argv)

    if not GRAMMAR_PATH.exists():
        print(f"Grammar file not found: {GRAMMAR_PATH}. Run 'make lark' first.", file=sys.stderr)
        return 2

    lark = build_lark(full=args.full)

    try:
        tree = parse_text(lark, args.input)
    except Exception as e:
        print(f"Parse failed: {e}", file=sys.stderr)
        return 1

    if args.show_tree:
        print(tree.pretty())
    else:
        # Minimal sanity output
        transformer = JustCount()
        result = transformer.transform(tree)
        print("parsed", result[0], "with", result[1], "children")

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
