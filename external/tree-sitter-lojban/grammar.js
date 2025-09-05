// @ts-check
// Bind Tree-sitter DSL helpers from the global scope for linting/type-checking friendliness.
const { grammar, repeat, repeat1, choice, prec, seq, optional, token } = /** @type {any} */ (globalThis);

// Skeleton Tree-sitter grammar for Lojban
// See docs/proposed/tree-sitter-integration.md for scope and phases.

module.exports = grammar({
  name: 'lojban',
  externals: $ => [
  // Must match scanner.c TokenType order exactly
  $.word,     // WORD
  $.cmene,    // CMENE
  $.brivla,   // BRIVLA
  $.lu,       // LU
  $.lihU,     // LIHU
  $.to,       // TO
  $.toi,      // TOI
  $.sei,      // SEI
  $.seu,      // SEU
  $.vuhO,     // VUH_O
  $.vuhU,     // VUH_U
  $.joi,      // JOI
  $.jek,      // JEK
  $.ja,       // JA
  $.jo,       // JO
  $.ju,       // JU
  $.ce,       // CE
  $.ceo,      // CEO
  $.bo,       // BO
  $.ke,       // KE
  $.kehe,     // KEHE
  $.ku,       // KU
  $.jek_bo,   // JEK_BO
  $.joi_bo,   // JOI_BO
  $.ja_bo,    // JA_BO
  $.jo_bo,    // JO_BO
  $.ju_bo,    // JU_BO
  $.ce_bo,    // CE_BO
  $.ceo_bo,   // CEO_BO
  $.i,        // I
  $.i_bo,     // I_BO
  $.i_jek,    // I_JEK
  $.i_joi,    // I_JOI
  $.i_ja,     // I_JA
  $.i_jo,     // I_JO
  $.i_ju,     // I_JU
  $.i_ce,     // I_CE
  $.i_ceo,    // I_CEO
  // Mekso
  $.li,       // LI
  $.boi,      // BOI
  $.xi,       // XI
  $.number,   // NUMBER
  $.mex_operator, // MEX_OPERATOR
  // Sumti starters (incremental)
  $.la,       // LA
  $.le,       // LE
  $.lo,       // LO
  // Relative clause cmavo
  $.noi,      // NOI
  $.kuho,     // KUHO
  $.goi,      // GOI
  $.gehu,     // GEHU
  // Bridi separator
  $.cu,       // CU
  $.mi,       // MI
  $.do,       // DO
  $.ti,       // TI
  $.ta,       // TA
  $.tu,       // TU
  $.da,       // DA
  $.ko,       // KO
  $.mio,      // MIO (mi'o)
  $.maa,      // MAA (ma'a)
  $.by,       // BY (lerfu-string basic)
  ],
  conflicts: $ => [
    [$.quote, $.statement],
  [$.parenthetical, $.statement],
  [$.tanru_unit]
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
      optional($.cu),
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

    // Sumti (incremental)
    sumti: $ => seq(
      $.sumti_base,
      optional($.relative_clause_rc),
      optional($.ku)
    ),

    sumti_base: $ => choice(
      seq($.la, $.cmene),      // la cmene
      seq($.le, $.sumti_tail), // le + selbri
      seq($.lo, $.sumti_tail), // lo + selbri
  $.mi,                    // mi
  $.do,                    // do
  $.ti,                    // ti
  $.ta,                    // ta
  $.tu,                    // tu
  $.da,                    // da
  $.ko,                    // ko
  $.mio,                   // mi'o
  $.maa,                   // ma'a
  $.by,                    // lerfu-string (basic BY)
      $.word                   // fallback until we add more
    ),

  // Minimal tail for le/lo for this step
    sumti_tail: $ => $.selbri,

    // Tanru: minimal support with KE/KEhE grouping and BO binding
    tanru_unit: $ => choice(
      seq($.ke, $.selbri, optional($.kehe)),
      $.brivla,
      $.word
    ),
  selbri: $ => prec.left(1, seq($.tanru_unit, repeat(seq($.bo, $.tanru_unit)))),

    // Quotes and parentheticals
    quote: $ => seq($.lu, repeat1($.word), $.lihU),
    parenthetical: $ => seq($.to, repeat1($._unit), $.toi),

    // Free modifier
    free_modifier: $ => seq($.sei, repeat1($.word), $.seu),

  // Relative clause shells (kept for earlier tests)
  relative_clause: $ => seq($.vuhO, repeat1($._unit), $.vuhU),

    // Relative clauses (basic paths only)
    relative_clause_rc: $ => choice(
      seq($.noi, $.subsentence, $.kuho),     // poi/noi/voi … ku'o
      seq($.goi, $.term, $.gehu)             // goi … ge'u
    ),

  // Minimal subsentence placeholder for this phase
  subsentence: $ => choice($.statement),

    // Minimal term placeholder: treat as sumti for now
    term: $ => $.sumti,

    // Mekso (basic)
    mex: $ => seq($.li, $.number, optional($.boi)),
  }
});
