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
  $.zio,      // ZIO (zi'o)
  $.ceu,      // CEU (ce'u)
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
  $.digits,   // DIGITS (raw decimal digits)
  $.pi,       // PI
  $.kio,      // KIO (ki'o)
  $.mau,      // MAU (ma'u)
  $.niu,      // NIU (ni'u)
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
  $.by_unit,  // BY unit (single lerfu word)
  $.lahe,     // LAhE (la'e)
  $.lee,      // LE'e (le'e)
  $.loe,      // LO'e (lo'e)
  $.lehi,     // LE'i (le'i)
  $.lohi,     // LO'i (lo'i)
  $.lea,      // LE'a (le'a)
  $.leo,      // LE'o (le'o)
  $.loa,      // LO'a (lo'a)
  $.loo,      // LO'o (lo'o)
  // 900-series audit additions (forethought/connective families)
  $.ge,       // GE (forethought GEK)
  $.ga,       // GA
  $.go,       // GO
  $.gu,       // GU
  $.gi,       // GI (separator for forethought)
  $.giha,     // GIhA (gi'a/gi'e/gi'o/gi'u)
  $.bihi,     // BIhI (interval connectives)
  $.gaho,     // GAhO (interval bracket marker)
  $.se,       // SE
  $.na,       // NA
  $.nai,      // NAI
  ],
  conflicts: $ => [
    [$.quote, $.statement],
  [$.parenthetical, $.statement],
  [$.tanru_unit],
  [$.tanru_atom],
  [$.by]
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
  $.forethought,
      $.quote,
      $.parenthetical,
      $.free_modifier,
      $.relative_clause,
      $.mex
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
  prec.left(2, $.bihi_mod),
  prec.left(2, seq($.gaho, $.bihi_mod, $.gaho)),
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
      seq($.lee, $.sumti_tail), // le'e + selbri
      seq($.loe, $.sumti_tail), // lo'e + selbri
  seq($.lehi, $.sumti_tail), // le'i + selbri
  seq($.lohi, $.sumti_tail), // lo'i + selbri
  seq($.lea, $.sumti_tail), // le'a + selbri (exhaustive family coverage)
  seq($.leo, $.sumti_tail), // le'o + selbri (exhaustive family coverage)
  seq($.loa, $.sumti_tail), // lo'a + selbri (parallel coverage)
  seq($.loo, $.sumti_tail), // lo'o + selbri (parallel coverage)
      seq($.lahe, $.sumti_base), // la'e + (basic sumti)
  $.mi,                    // mi
  $.do,                    // do
  $.ti,                    // ti
  $.ta,                    // ta
  $.tu,                    // tu
  $.da,                    // da
  $.ko,                    // ko
  $.mio,                   // mi'o
  $.maa,                   // ma'a
  $.by,                    // lerfu-string (sequence of BY units)
  $.zio,                   // zi'o
  $.ceu,                   // ce'u
      $.word                   // fallback until we add more
    ),

  // Minimal tail for le/lo for this step
    sumti_tail: $ => $.selbri,

  // Tanru: minimal support with KE/KEhE grouping and BO binding; allow subscripts (XI ... (BOI)?) attached to units
    tanru_unit: $ => seq($.tanru_atom, repeat($.subscript)),
    tanru_atom: $ => choice(
      prec.right(1, seq($.ke, $.selbri, optional($.kehe))),
      $.brivla,
      $.by,
      $.word
    ),
  selbri: $ => prec.left(1, seq(
    $.tanru_unit,
    repeat(choice(
      seq($.bo, $.tanru_unit),
  seq($.gihek, $.tanru_unit)
    ))
  )),

  // Lerfu: by is one or more BY units (prefer grouping to the right to avoid ambiguity)
  by: $ => prec.right(1, repeat1($.by_unit)),

  // Subscript: XI number (BOI)? — we do not enforce BOI outside subscript
  subscript: $ => seq($.xi, $.number, optional($.boi)),

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

  // Mekso: li number ((MEX_OPERATOR number)*) (BOI)?
  mex: $ => seq($.li, $.number, repeat(seq($.mex_operator, $.number)), optional($.boi)),

  // Forethought logical connectives (minimal): GE/GA/GO/GU statement GI statement
  forethought: $ => seq(choice($.ge, $.ga, $.go, $.gu), $.statement, $.gi, $.statement),

  // Grammar-level number formation to minimize scanner logic
  // number := (mau|niu)+? ((digits (kio digits)* (pi digits)? ) | (pi digits))
  number: $ => seq(
    optional(repeat1(choice($.mau, $.niu))),
    choice(
      seq($.digits, repeat(seq($.kio, $.digits)), optional(seq($.pi, $.digits))),
      seq($.pi, $.digits)
    )
  ),

  // GIhEK/JOIK modifiers
  gihek_prefix: $ => choice(seq($.na, $.se), $.na, $.se),
  gihek: $ => seq(optional($.gihek_prefix), $.giha, optional($.nai)),
  bihi_mod: $ => seq(optional($.se), $.bihi, optional($.nai)),
  }
});
