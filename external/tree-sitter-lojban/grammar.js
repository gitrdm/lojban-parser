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
    // Top level: a sequence of units
    source_file: $ => repeat($._unit),

    _unit: $ => choice(
      $.statement,
      $.quote,
      $.parenthetical,
      $.free_modifier,
      $.relative_clause
    ),

    // A statement: sumti selbri (sumti)* with optional connectives
    statement: $ => prec.right(seq(
      $.sumti,
      optional($.connective),
      $.selbri,
      repeat(seq(optional($.connective), $.sumti))
    )),

    // Connective: basic JOI/JEK with precedence
    connective: $ => choice(
      prec.left(2, $.joi),
      prec.left(1, $.jek)
    ),

    // Shells: basic placeholders
    sumti: $ => prec.right(repeat1($.word)),  // TODO: refine with proper sumti structure
    selbri: $ => prec.right(repeat1($.word)),  // TODO: refine with brivla/gismu/etc.

    // Quotes and parentheticals
    quote: $ => seq($.lu, repeat1($.word), $.lihU),
    parenthetical: $ => seq($.to, repeat1($._unit), $.toi),

    // Free modifier
    free_modifier: $ => seq($.sei, repeat1($.word), $.seu),

    // Relative clause: VUhO ... VUhU
    relative_clause: $ => seq($.vuhO, repeat1($._unit), $.vuhU),

    // Tokens
    word: $ => token(/[A-Za-z0-9.'-]+/),
    lu: $ => 'lu',
    lihU: $ => "li'u",
    to: $ => 'to',
    toi: $ => 'toi',
    sei: $ => 'sei',
    seu: $ => "se'u",
    vuhO: $ => 'vuhO',
    vuhU: $ => 'vuhU',
    joi: $ => 'joi',
    jek: $ => 'jek',
  }
});
