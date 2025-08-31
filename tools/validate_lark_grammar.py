#!/usr/bin/env python3
"""
Validate grammar/grammar.lark by attempting to construct a Lark parser.

This checks internal consistency (duplicate rules/terminals, malformed productions, etc.).
It does not attempt to run a lexer; declared terminals are fine.

Exit codes:
  0 - PASS
  1 - FAIL (diagnostic printed)
"""
from __future__ import annotations

import sys
from pathlib import Path

from lark import Lark
from lark.exceptions import GrammarError, UnexpectedToken, ConfigurationError

ROOT = Path(__file__).resolve().parents[1]
GRAMMAR = ROOT / "grammar" / "grammar.lark"


def main(argv=None) -> int:
    if not GRAMMAR.exists():
        print(f"FAIL: {GRAMMAR} not found. Run 'make lark' first.")
        return 1
    text = GRAMMAR.read_text(encoding="utf-8")
    try:
        # Use Earley with a dynamic lexer; grammar declares 'start: ...'
        parser = Lark(text, parser="earley", lexer="dynamic", keep_all_tokens=True)
    except (GrammarError, UnexpectedToken, ConfigurationError) as e:
        print("FAIL: Lark rejected grammar.lark:")
        print(str(e))
        return 1
    # If we got here, Lark accepted the grammar definition.
    # Print a small summary for confidence.
    try:
        # Best-effort stats (APIs vary across Lark versions)
        terms = getattr(parser, 'terminals', None) or getattr(getattr(parser, 'lexer', None), 'tokens', [])
        rules = getattr(getattr(parser, 'parser', None), 'rules', [])
        n_terms = len(terms) if terms is not None else -1
        n_rules = len(rules) if rules is not None else -1
        print(f"PASS: grammar.lark loaded (rules={n_rules}, terminals~={n_terms})")
    except Exception:
        print("PASS: grammar.lark loaded")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
