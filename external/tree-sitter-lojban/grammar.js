// @ts-check
// Bind Tree-sitter DSL helpers from the global scope for linting/type-checking friendliness.
const { grammar, repeat, repeat1, choice, prec, seq, optional, token } = /** @type {any} */ (globalThis);

// Skeleton Tree-sitter grammar for Lojban
// See docs/proposed/tree-sitter-integration.md for scope and phases.

module.exports = grammar({
  name: 'lojban',
  conflicts: $ => [
    [$.quote, $.statement],
    [$.parenthetical, $.statement]
  ],

  extras: $ => [
    /\s+/,
    // TODO: indicators as extras in later phases (UI/CAI/Y as safe candidates)
  ],

  // Simple tokens to get started; real tokens will be provided via external scanner later
  // Here we define only a handful to support generation and basic tests.
  rules: {
    // Top level: a sequence of units (statements, quotes, parentheticals, freemods)
    source_file: $ => repeat($._unit),

    _unit: $ => choice(
      $.statement,
      $.quote,
      $.parenthetical,
      $.free_modifier
    ),

    // A statement is (for now) a run of words; refined in later phases
    statement: $ => prec.right(1, repeat1($.word)),

    // Quotes and parentheticals with optional closing to exercise recovery
  quote: $ => seq($.lu, repeat1($.word), $.lihU),
  parenthetical: $ => seq($.to, repeat1($._unit), $.toi),

    // A free modifier using SEI ... (SE'U)? with content words inside
  free_modifier: $ => seq($.sei, repeat1($.word), $.seu),

    // Tokens (will move to external scanner later)
  // Generic word token (reserved structural cmavo are defined above and preferred)
  word: $ => token(/[A-Za-z0-9.'-]+/),
    lu: $ => 'lu',
    lihU: $ => "li'u",
    to: $ => 'to',
    toi: $ => 'toi',
    sei: $ => 'sei',
    seu: $ => "se'u",
  }
});
