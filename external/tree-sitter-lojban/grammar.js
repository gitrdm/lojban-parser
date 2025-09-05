// @ts-check
/* global grammar, repeat, choice */

// Skeleton Tree-sitter grammar for Lojban
// See docs/proposed/tree-sitter-integration.md for scope and phases.

module.exports = grammar({
  name: 'lojban',

  extras: $ => [
    /\s+/,
    // TODO: indicators as extras in later phases (UI/CAI/Y as safe candidates)
  ],

  // Simple tokens to get started; real tokens will be provided via external scanner later
  // Here we define only a handful to support generation and basic tests.
  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.text,
    ),

    // Very loose placeholder: a line of non-newline text (for corpus sanity)
    text: $ => /[^\n]+/,
  }
});
