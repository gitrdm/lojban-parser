// @ts-check
// Bind Tree-sitter DSL helpers from the global scope for linting/type-checking friendliness.
const { grammar, repeat, repeat1, choice, prec, seq, optional, token } = /** @type {any} */ (globalThis);

// Skeleton Tree-sitter grammar for Lojban
// See docs/proposed/tree-sitter-integration.md for scope and phases.

module.exports = grammar({
  name: 'lojban',
  externals: $ => [
    $.word,
    $.cmene,
    $.brivla,
    $.lu,
    $.lihU,
    $.to,
    $.toi,
    $.sei,
    $.seu,
    $.vuhO,
    $.vuhU,
    $.joi,
  $.jek,
  $.ja,
  $.jo,
  $.ju,
  $.ce,
  $.ceo,
  $.bo,
  $.ke,
  $.jek_bo,
  $.joi_bo,
  $.ja_bo,
  $.jo_bo,
  $.ju_bo,
  $.ce_bo,
  $.ceo_bo,
  $.i,
  $.i_bo,
  $.i_jek,
  $.i_joi,
  $.i_ja,
  $.i_jo,
  $.i_ju,
  $.i_ce,
  $.i_ceo,
  ],
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
      $.i_statement,
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
      // JOI-family with BO (highest among these)
      prec.left(4, $.joi_bo),
      prec.left(4, $.ceo_bo),
      prec.left(4, $.ce_bo),
      // JEK-family with BO
      prec.left(4, $.jek_bo),
      prec.left(4, $.ja_bo),
      prec.left(4, $.jo_bo),
      prec.left(4, $.ju_bo),
      // Sequences with BO
      prec.left(3, seq($.joi, $.bo)),
      prec.left(3, seq($.ceo, $.bo)),
      prec.left(3, seq($.ce, $.bo)),
      prec.left(3, seq($.jek, $.bo)),
      prec.left(3, seq($.ja, $.bo)),
      prec.left(3, seq($.jo, $.bo)),
      prec.left(3, seq($.ju, $.bo)),
      // Plain connectives: JOI-family > JEK-family
      prec.left(2, $.joi),
      prec.left(2, $.ceo),
      prec.left(2, $.ce),
      prec.left(1, $.jek),
      prec.left(1, $.ja),
      prec.left(1, $.jo),
      prec.left(1, $.ju)
    ),

  // i-prefixed statement chains (sentence joiners)
  i_statement: $ => seq($.i_prefix, $.statement),
  i_prefix: $ => choice($.i, $.i_bo, $.i_jek, $.i_joi, $.i_ja, $.i_jo, $.i_ju, $.i_ce, $.i_ceo),

    // Shells: basic placeholders
    sumti: $ => $.word,  // TODO: refine with proper sumti structure
    selbri: $ => $.word,  // TODO: refine with brivla/gismu/etc.

    // Quotes and parentheticals
    quote: $ => seq($.lu, repeat1($.word), $.lihU),
    parenthetical: $ => seq($.to, repeat1($._unit), $.toi),

    // Free modifier
    free_modifier: $ => seq($.sei, repeat1($.word), $.seu),

    // Relative clause: VUhO ... VUhU
    relative_clause: $ => seq($.vuhO, repeat1($._unit), $.vuhU),

    // Tokens (now externals)
    // word: $ => token(/[A-Za-z0-9.'-]+/),
    // lu: $ => 'lu',
    // lihU: $ => "li'u",
    // to: $ => 'to',
    // toi: $ => 'toi',
    // sei: $ => 'sei',
    // seu: $ => "se'u",
    // vuhO: $ => 'vuhO',
    // vuhU: $ => 'vuhU',
    // joi: $ => 'joi',
    // jek: $ => 'jek',
  }
});
