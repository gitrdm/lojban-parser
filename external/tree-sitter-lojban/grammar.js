// @ts-check
/* global grammar, repeat, choice */
// Provide minimal fallbacks for editors/linters; tree-sitter CLI provides real implementations.
// eslint-disable-next-line no-var
var grammar = (g) => g;
// eslint-disable-next-line no-var
var repeat = (x) => [x];
// eslint-disable-next-line no-var
var choice = (...xs) => xs[0];

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
