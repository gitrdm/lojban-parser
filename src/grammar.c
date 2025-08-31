/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0






/* First part of user prologue.  */
#line 369 "grammar/grammar.y"

# include "lojban.h"

#line 62 "src/grammar.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "grammar.h"

/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_A_501 = 3,                      /* A_501  */
  YYSYMBOL_BAI_502 = 4,                    /* BAI_502  */
  YYSYMBOL_BAhE_503 = 5,                   /* BAhE_503  */
  YYSYMBOL_BE_504 = 6,                     /* BE_504  */
  YYSYMBOL_BEI_505 = 7,                    /* BEI_505  */
  YYSYMBOL_BEhO_506 = 8,                   /* BEhO_506  */
  YYSYMBOL_BIhI_507 = 9,                   /* BIhI_507  */
  YYSYMBOL_BO_508 = 10,                    /* BO_508  */
  YYSYMBOL_BRIVLA_509 = 11,                /* BRIVLA_509  */
  YYSYMBOL_BU_511 = 12,                    /* BU_511  */
  YYSYMBOL_BY_513 = 13,                    /* BY_513  */
  YYSYMBOL_CAhA_514 = 14,                  /* CAhA_514  */
  YYSYMBOL_CAI_515 = 15,                   /* CAI_515  */
  YYSYMBOL_CEI_516 = 16,                   /* CEI_516  */
  YYSYMBOL_CEhE_517 = 17,                  /* CEhE_517  */
  YYSYMBOL_CMENE_518 = 18,                 /* CMENE_518  */
  YYSYMBOL_CO_519 = 19,                    /* CO_519  */
  YYSYMBOL_COI_520 = 20,                   /* COI_520  */
  YYSYMBOL_CU_521 = 21,                    /* CU_521  */
  YYSYMBOL_CUhE_522 = 22,                  /* CUhE_522  */
  YYSYMBOL_DAhO_524 = 23,                  /* DAhO_524  */
  YYSYMBOL_DOI_525 = 24,                   /* DOI_525  */
  YYSYMBOL_DOhU_526 = 25,                  /* DOhU_526  */
  YYSYMBOL_FA_527 = 26,                    /* FA_527  */
  YYSYMBOL_FAhA_528 = 27,                  /* FAhA_528  */
  YYSYMBOL_FAhO_529 = 28,                  /* FAhO_529  */
  YYSYMBOL_FEhE_530 = 29,                  /* FEhE_530  */
  YYSYMBOL_FEhU_531 = 30,                  /* FEhU_531  */
  YYSYMBOL_FIhO_532 = 31,                  /* FIhO_532  */
  YYSYMBOL_FOI_533 = 32,                   /* FOI_533  */
  YYSYMBOL_FUhE_535 = 33,                  /* FUhE_535  */
  YYSYMBOL_FUhO_536 = 34,                  /* FUhO_536  */
  YYSYMBOL_GA_537 = 35,                    /* GA_537  */
  YYSYMBOL_GEhU_538 = 36,                  /* GEhU_538  */
  YYSYMBOL_GI_539 = 37,                    /* GI_539  */
  YYSYMBOL_GIhA_541 = 38,                  /* GIhA_541  */
  YYSYMBOL_GOI_542 = 39,                   /* GOI_542  */
  YYSYMBOL_GOhA_543 = 40,                  /* GOhA_543  */
  YYSYMBOL_GUhA_544 = 41,                  /* GUhA_544  */
  YYSYMBOL_I_545 = 42,                     /* I_545  */
  YYSYMBOL_JA_546 = 43,                    /* JA_546  */
  YYSYMBOL_JAI_547 = 44,                   /* JAI_547  */
  YYSYMBOL_JOI_548 = 45,                   /* JOI_548  */
  YYSYMBOL_KEhE_550 = 46,                  /* KEhE_550  */
  YYSYMBOL_KE_551 = 47,                    /* KE_551  */
  YYSYMBOL_KEI_552 = 48,                   /* KEI_552  */
  YYSYMBOL_KI_554 = 49,                    /* KI_554  */
  YYSYMBOL_KOhA_555 = 50,                  /* KOhA_555  */
  YYSYMBOL_KU_556 = 51,                    /* KU_556  */
  YYSYMBOL_KUhO_557 = 52,                  /* KUhO_557  */
  YYSYMBOL_LA_558 = 53,                    /* LA_558  */
  YYSYMBOL_LAU_559 = 54,                   /* LAU_559  */
  YYSYMBOL_LAhE_561 = 55,                  /* LAhE_561  */
  YYSYMBOL_LE_562 = 56,                    /* LE_562  */
  YYSYMBOL_LEhU_565 = 57,                  /* LEhU_565  */
  YYSYMBOL_LI_566 = 58,                    /* LI_566  */
  YYSYMBOL_LIhU_567 = 59,                  /* LIhU_567  */
  YYSYMBOL_LOhO_568 = 60,                  /* LOhO_568  */
  YYSYMBOL_LOhU_569 = 61,                  /* LOhU_569  */
  YYSYMBOL_LU_571 = 62,                    /* LU_571  */
  YYSYMBOL_LUhU_573 = 63,                  /* LUhU_573  */
  YYSYMBOL_ME_574 = 64,                    /* ME_574  */
  YYSYMBOL_MEhU_575 = 65,                  /* MEhU_575  */
  YYSYMBOL_MOhI_577 = 66,                  /* MOhI_577  */
  YYSYMBOL_NA_578 = 67,                    /* NA_578  */
  YYSYMBOL_NAI_581 = 68,                   /* NAI_581  */
  YYSYMBOL_NAhE_583 = 69,                  /* NAhE_583  */
  YYSYMBOL_NIhO_584 = 70,                  /* NIhO_584  */
  YYSYMBOL_NOI_585 = 71,                   /* NOI_585  */
  YYSYMBOL_NU_586 = 72,                    /* NU_586  */
  YYSYMBOL_NUhI_587 = 73,                  /* NUhI_587  */
  YYSYMBOL_NUhU_588 = 74,                  /* NUhU_588  */
  YYSYMBOL_PEhE_591 = 75,                  /* PEhE_591  */
  YYSYMBOL_PU_592 = 76,                    /* PU_592  */
  YYSYMBOL_RAhO_593 = 77,                  /* RAhO_593  */
  YYSYMBOL_ROI_594 = 78,                   /* ROI_594  */
  YYSYMBOL_SA_595 = 79,                    /* SA_595  */
  YYSYMBOL_SE_596 = 80,                    /* SE_596  */
  YYSYMBOL_SEI_597 = 81,                   /* SEI_597  */
  YYSYMBOL_SEhU_598 = 82,                  /* SEhU_598  */
  YYSYMBOL_SI_601 = 83,                    /* SI_601  */
  YYSYMBOL_SOI_602 = 84,                   /* SOI_602  */
  YYSYMBOL_SU_603 = 85,                    /* SU_603  */
  YYSYMBOL_TAhE_604 = 86,                  /* TAhE_604  */
  YYSYMBOL_TEI_605 = 87,                   /* TEI_605  */
  YYSYMBOL_TO_606 = 88,                    /* TO_606  */
  YYSYMBOL_TOI_607 = 89,                   /* TOI_607  */
  YYSYMBOL_TUhE_610 = 90,                  /* TUhE_610  */
  YYSYMBOL_TUhU_611 = 91,                  /* TUhU_611  */
  YYSYMBOL_UI_612 = 92,                    /* UI_612  */
  YYSYMBOL_VA_613 = 93,                    /* VA_613  */
  YYSYMBOL_VAU_614 = 94,                   /* VAU_614  */
  YYSYMBOL_VEhA_615 = 95,                  /* VEhA_615  */
  YYSYMBOL_VIhA_616 = 96,                  /* VIhA_616  */
  YYSYMBOL_VUhO_617 = 97,                  /* VUhO_617  */
  YYSYMBOL_XI_618 = 98,                    /* XI_618  */
  YYSYMBOL_Y_619 = 99,                     /* Y_619  */
  YYSYMBOL_ZAhO_621 = 100,                 /* ZAhO_621  */
  YYSYMBOL_ZEhA_622 = 101,                 /* ZEhA_622  */
  YYSYMBOL_ZEI_623 = 102,                  /* ZEI_623  */
  YYSYMBOL_ZI_624 = 103,                   /* ZI_624  */
  YYSYMBOL_ZIhE_625 = 104,                 /* ZIhE_625  */
  YYSYMBOL_ZO_626 = 105,                   /* ZO_626  */
  YYSYMBOL_ZOI_627 = 106,                  /* ZOI_627  */
  YYSYMBOL_ZOhU_628 = 107,                 /* ZOhU_628  */
  YYSYMBOL_BIhE_650 = 108,                 /* BIhE_650  */
  YYSYMBOL_BOI_651 = 109,                  /* BOI_651  */
  YYSYMBOL_FUhA_655 = 110,                 /* FUhA_655  */
  YYSYMBOL_GAhO_656 = 111,                 /* GAhO_656  */
  YYSYMBOL_JOhI_657 = 112,                 /* JOhI_657  */
  YYSYMBOL_KUhE_658 = 113,                 /* KUhE_658  */
  YYSYMBOL_MAI_661 = 114,                  /* MAI_661  */
  YYSYMBOL_MAhO_662 = 115,                 /* MAhO_662  */
  YYSYMBOL_MOI_663 = 116,                  /* MOI_663  */
  YYSYMBOL_MOhE_664 = 117,                 /* MOhE_664  */
  YYSYMBOL_NAhU_665 = 118,                 /* NAhU_665  */
  YYSYMBOL_NIhE_666 = 119,                 /* NIhE_666  */
  YYSYMBOL_NUhA_667 = 120,                 /* NUhA_667  */
  YYSYMBOL_PA_672 = 121,                   /* PA_672  */
  YYSYMBOL_PEhO_673 = 122,                 /* PEhO_673  */
  YYSYMBOL_TEhU_675 = 123,                 /* TEhU_675  */
  YYSYMBOL_VEI_677 = 124,                  /* VEI_677  */
  YYSYMBOL_VEhO_678 = 125,                 /* VEhO_678  */
  YYSYMBOL_VUhU_679 = 126,                 /* VUhU_679  */
  YYSYMBOL_any_words_697 = 127,            /* any_words_697  */
  YYSYMBOL_any_word_698 = 128,             /* any_word_698  */
  YYSYMBOL_anything_699 = 129,             /* anything_699  */
  YYSYMBOL_lexer_A_905 = 130,              /* lexer_A_905  */
  YYSYMBOL_lexer_B_910 = 131,              /* lexer_B_910  */
  YYSYMBOL_lexer_C_915 = 132,              /* lexer_C_915  */
  YYSYMBOL_lexer_D_916 = 133,              /* lexer_D_916  */
  YYSYMBOL_lexer_E_925 = 134,              /* lexer_E_925  */
  YYSYMBOL_lexer_F_930 = 135,              /* lexer_F_930  */
  YYSYMBOL_lexer_G_935 = 136,              /* lexer_G_935  */
  YYSYMBOL_lexer_H_940 = 137,              /* lexer_H_940  */
  YYSYMBOL_lexer_I_945 = 138,              /* lexer_I_945  */
  YYSYMBOL_lexer_J_950 = 139,              /* lexer_J_950  */
  YYSYMBOL_lexer_K_955 = 140,              /* lexer_K_955  */
  YYSYMBOL_lexer_L_960 = 141,              /* lexer_L_960  */
  YYSYMBOL_lexer_M_965 = 142,              /* lexer_M_965  */
  YYSYMBOL_lexer_N_966 = 143,              /* lexer_N_966  */
  YYSYMBOL_lexer_O_970 = 144,              /* lexer_O_970  */
  YYSYMBOL_lexer_P_980 = 145,              /* lexer_P_980  */
  YYSYMBOL_lexer_Q_985 = 146,              /* lexer_Q_985  */
  YYSYMBOL_lexer_R_990 = 147,              /* lexer_R_990  */
  YYSYMBOL_lexer_S_995 = 148,              /* lexer_S_995  */
  YYSYMBOL_lexer_T_1000 = 149,             /* lexer_T_1000  */
  YYSYMBOL_lexer_U_1005 = 150,             /* lexer_U_1005  */
  YYSYMBOL_lexer_V_1010 = 151,             /* lexer_V_1010  */
  YYSYMBOL_lexer_W_1015 = 152,             /* lexer_W_1015  */
  YYSYMBOL_lexer_X_1020 = 153,             /* lexer_X_1020  */
  YYSYMBOL_lexer_Y_1025 = 154,             /* lexer_Y_1025  */
  YYSYMBOL_YYACCEPT = 155,                 /* $accept  */
  YYSYMBOL_toplevel = 156,                 /* toplevel  */
  YYSYMBOL_text_0 = 157,                   /* text_0  */
  YYSYMBOL_text_A_1 = 158,                 /* text_A_1  */
  YYSYMBOL_text_B_2 = 159,                 /* text_B_2  */
  YYSYMBOL_text_C_3 = 160,                 /* text_C_3  */
  YYSYMBOL_paragraphs_4 = 161,             /* paragraphs_4  */
  YYSYMBOL_paragraph_10 = 162,             /* paragraph_10  */
  YYSYMBOL_statement_11 = 163,             /* statement_11  */
  YYSYMBOL_statement_A_12 = 164,           /* statement_A_12  */
  YYSYMBOL_statement_B_13 = 165,           /* statement_B_13  */
  YYSYMBOL_statement_C_14 = 166,           /* statement_C_14  */
  YYSYMBOL_fragment_20 = 167,              /* fragment_20  */
  YYSYMBOL_prenex_30 = 168,                /* prenex_30  */
  YYSYMBOL_free_modifier_32 = 169,         /* free_modifier_32  */
  YYSYMBOL_free_modifier_A_33 = 170,       /* free_modifier_A_33  */
  YYSYMBOL_discursive_bridi_34 = 171,      /* discursive_bridi_34  */
  YYSYMBOL_vocative_35 = 172,              /* vocative_35  */
  YYSYMBOL_parenthetical_36 = 173,         /* parenthetical_36  */
  YYSYMBOL_sentence_40 = 174,              /* sentence_40  */
  YYSYMBOL_subsentence_41 = 175,           /* subsentence_41  */
  YYSYMBOL_bridi_tail_50 = 176,            /* bridi_tail_50  */
  YYSYMBOL_bridi_tail_A_51 = 177,          /* bridi_tail_A_51  */
  YYSYMBOL_bridi_tail_B_52 = 178,          /* bridi_tail_B_52  */
  YYSYMBOL_bridi_tail_C_53 = 179,          /* bridi_tail_C_53  */
  YYSYMBOL_gek_sentence_54 = 180,          /* gek_sentence_54  */
  YYSYMBOL_tail_terms_71 = 181,            /* tail_terms_71  */
  YYSYMBOL_terms_80 = 182,                 /* terms_80  */
  YYSYMBOL_terms_A_81 = 183,               /* terms_A_81  */
  YYSYMBOL_terms_B_82 = 184,               /* terms_B_82  */
  YYSYMBOL_term_83 = 185,                  /* term_83  */
  YYSYMBOL_modifier_84 = 186,              /* modifier_84  */
  YYSYMBOL_term_set_85 = 187,              /* term_set_85  */
  YYSYMBOL_sumti_90 = 188,                 /* sumti_90  */
  YYSYMBOL_sumti_A_91 = 189,               /* sumti_A_91  */
  YYSYMBOL_sumti_B_92 = 190,               /* sumti_B_92  */
  YYSYMBOL_sumti_C_93 = 191,               /* sumti_C_93  */
  YYSYMBOL_sumti_D_94 = 192,               /* sumti_D_94  */
  YYSYMBOL_sumti_E_95 = 193,               /* sumti_E_95  */
  YYSYMBOL_sumti_F_96 = 194,               /* sumti_F_96  */
  YYSYMBOL_sumti_G_97 = 195,               /* sumti_G_97  */
  YYSYMBOL_description_110 = 196,          /* description_110  */
  YYSYMBOL_sumti_tail_111 = 197,           /* sumti_tail_111  */
  YYSYMBOL_sumti_tail_A_112 = 198,         /* sumti_tail_A_112  */
  YYSYMBOL_relative_clauses_121 = 199,     /* relative_clauses_121  */
  YYSYMBOL_relative_clause_122 = 200,      /* relative_clause_122  */
  YYSYMBOL_selbri_130 = 201,               /* selbri_130  */
  YYSYMBOL_selbri_A_131 = 202,             /* selbri_A_131  */
  YYSYMBOL_selbri_B_132 = 203,             /* selbri_B_132  */
  YYSYMBOL_selbri_C_133 = 204,             /* selbri_C_133  */
  YYSYMBOL_selbri_D_134 = 205,             /* selbri_D_134  */
  YYSYMBOL_selbri_E_135 = 206,             /* selbri_E_135  */
  YYSYMBOL_selbri_F_136 = 207,             /* selbri_F_136  */
  YYSYMBOL_GUhEK_selbri_137 = 208,         /* GUhEK_selbri_137  */
  YYSYMBOL_tanru_unit_150 = 209,           /* tanru_unit_150  */
  YYSYMBOL_tanru_unit_A_151 = 210,         /* tanru_unit_A_151  */
  YYSYMBOL_tanru_unit_B_152 = 211,         /* tanru_unit_B_152  */
  YYSYMBOL_linkargs_160 = 212,             /* linkargs_160  */
  YYSYMBOL_links_161 = 213,                /* links_161  */
  YYSYMBOL_quantifier_300 = 214,           /* quantifier_300  */
  YYSYMBOL_MEX_310 = 215,                  /* MEX_310  */
  YYSYMBOL_MEX_A_311 = 216,                /* MEX_A_311  */
  YYSYMBOL_MEX_B_312 = 217,                /* MEX_B_312  */
  YYSYMBOL_MEX_C_313 = 218,                /* MEX_C_313  */
  YYSYMBOL_rp_expression_330 = 219,        /* rp_expression_330  */
  YYSYMBOL_rp_operand_332 = 220,           /* rp_operand_332  */
  YYSYMBOL_operator_370 = 221,             /* operator_370  */
  YYSYMBOL_operator_A_371 = 222,           /* operator_A_371  */
  YYSYMBOL_operator_B_372 = 223,           /* operator_B_372  */
  YYSYMBOL_MEX_operator_374 = 224,         /* MEX_operator_374  */
  YYSYMBOL_operand_381 = 225,              /* operand_381  */
  YYSYMBOL_operand_A_382 = 226,            /* operand_A_382  */
  YYSYMBOL_operand_B_383 = 227,            /* operand_B_383  */
  YYSYMBOL_operand_C_385 = 228,            /* operand_C_385  */
  YYSYMBOL_anaphora_400 = 229,             /* anaphora_400  */
  YYSYMBOL_cmene_404 = 230,                /* cmene_404  */
  YYSYMBOL_cmene_A_405 = 231,              /* cmene_A_405  */
  YYSYMBOL_bridi_valsi_407 = 232,          /* bridi_valsi_407  */
  YYSYMBOL_bridi_valsi_A_408 = 233,        /* bridi_valsi_A_408  */
  YYSYMBOL_para_mark_410 = 234,            /* para_mark_410  */
  YYSYMBOL_indicators_411 = 235,           /* indicators_411  */
  YYSYMBOL_indicators_A_412 = 236,         /* indicators_A_412  */
  YYSYMBOL_indicator_413 = 237,            /* indicator_413  */
  YYSYMBOL_DOI_415 = 238,                  /* DOI_415  */
  YYSYMBOL_COI_416 = 239,                  /* COI_416  */
  YYSYMBOL_COI_A_417 = 240,                /* COI_A_417  */
  YYSYMBOL_JOIK_EK_421 = 241,              /* JOIK_EK_421  */
  YYSYMBOL_JOIK_JEK_422 = 242,             /* JOIK_JEK_422  */
  YYSYMBOL_XI_424 = 243,                   /* XI_424  */
  YYSYMBOL_NU_425 = 244,                   /* NU_425  */
  YYSYMBOL_NU_A_426 = 245,                 /* NU_A_426  */
  YYSYMBOL_MOhE_427 = 246,                 /* MOhE_427  */
  YYSYMBOL_NIhE_428 = 247,                 /* NIhE_428  */
  YYSYMBOL_NAhU_429 = 248,                 /* NAhU_429  */
  YYSYMBOL_MAhO_430 = 249,                 /* MAhO_430  */
  YYSYMBOL_JOhI_431 = 250,                 /* JOhI_431  */
  YYSYMBOL_quote_arg_432 = 251,            /* quote_arg_432  */
  YYSYMBOL_quote_arg_A_433 = 252,          /* quote_arg_A_433  */
  YYSYMBOL_ZOI_quote_434 = 253,            /* ZOI_quote_434  */
  YYSYMBOL_ZO_quote_435 = 254,             /* ZO_quote_435  */
  YYSYMBOL_LOhU_quote_436 = 255,           /* LOhU_quote_436  */
  YYSYMBOL_FIhO_437 = 256,                 /* FIhO_437  */
  YYSYMBOL_PEhO_438 = 257,                 /* PEhO_438  */
  YYSYMBOL_BIhE_439 = 258,                 /* BIhE_439  */
  YYSYMBOL_SEI_440 = 259,                  /* SEI_440  */
  YYSYMBOL_FUhA_441 = 260,                 /* FUhA_441  */
  YYSYMBOL_BEI_442 = 261,                  /* BEI_442  */
  YYSYMBOL_CO_443 = 262,                   /* CO_443  */
  YYSYMBOL_CEI_444 = 263,                  /* CEI_444  */
  YYSYMBOL_NA_445 = 264,                   /* NA_445  */
  YYSYMBOL_BE_446 = 265,                   /* BE_446  */
  YYSYMBOL_TUhE_447 = 266,                 /* TUhE_447  */
  YYSYMBOL_LIhU_gap_448 = 267,             /* LIhU_gap_448  */
  YYSYMBOL_gap_450 = 268,                  /* gap_450  */
  YYSYMBOL_front_gap_451 = 269,            /* front_gap_451  */
  YYSYMBOL_MEX_gap_452 = 270,              /* MEX_gap_452  */
  YYSYMBOL_KEI_gap_453 = 271,              /* KEI_gap_453  */
  YYSYMBOL_TUhU_gap_454 = 272,             /* TUhU_gap_454  */
  YYSYMBOL_VAU_gap_456 = 273,              /* VAU_gap_456  */
  YYSYMBOL_DOhU_gap_457 = 274,             /* DOhU_gap_457  */
  YYSYMBOL_FEhU_gap_458 = 275,             /* FEhU_gap_458  */
  YYSYMBOL_SEhU_gap_459 = 276,             /* SEhU_gap_459  */
  YYSYMBOL_NUhU_gap_460 = 277,             /* NUhU_gap_460  */
  YYSYMBOL_BOI_gap_461 = 278,              /* BOI_gap_461  */
  YYSYMBOL_sub_gap_462 = 279,              /* sub_gap_462  */
  YYSYMBOL_LUhU_gap_463 = 280,             /* LUhU_gap_463  */
  YYSYMBOL_GEhU_gap_464 = 281,             /* GEhU_gap_464  */
  YYSYMBOL_MEhU_gap_465 = 282,             /* MEhU_gap_465  */
  YYSYMBOL_KEhE_gap_466 = 283,             /* KEhE_gap_466  */
  YYSYMBOL_BEhO_gap_467 = 284,             /* BEhO_gap_467  */
  YYSYMBOL_TOI_gap_468 = 285,              /* TOI_gap_468  */
  YYSYMBOL_KUhO_gap_469 = 286,             /* KUhO_gap_469  */
  YYSYMBOL_left_bracket_470 = 287,         /* left_bracket_470  */
  YYSYMBOL_right_bracket_gap_471 = 288,    /* right_bracket_gap_471  */
  YYSYMBOL_LOhO_gap_472 = 289,             /* LOhO_gap_472  */
  YYSYMBOL_TEhU_gap_473 = 290,             /* TEhU_gap_473  */
  YYSYMBOL_right_br_no_free_474 = 291,     /* right_br_no_free_474  */
  YYSYMBOL_NUhA_475 = 292,                 /* NUhA_475  */
  YYSYMBOL_MOI_476 = 293,                  /* MOI_476  */
  YYSYMBOL_ME_477 = 294,                   /* ME_477  */
  YYSYMBOL_JAI_478 = 295,                  /* JAI_478  */
  YYSYMBOL_BO_479 = 296,                   /* BO_479  */
  YYSYMBOL_SE_480 = 297,                   /* SE_480  */
  YYSYMBOL_FA_481 = 298,                   /* FA_481  */
  YYSYMBOL_NAhE_482 = 299,                 /* NAhE_482  */
  YYSYMBOL_qualifier_483 = 300,            /* qualifier_483  */
  YYSYMBOL_NOI_484 = 301,                  /* NOI_484  */
  YYSYMBOL_GOI_485 = 302,                  /* GOI_485  */
  YYSYMBOL_subscript_486 = 303,            /* subscript_486  */
  YYSYMBOL_ZIhE_487 = 304,                 /* ZIhE_487  */
  YYSYMBOL_LE_488 = 305,                   /* LE_488  */
  YYSYMBOL_LI_489 = 306,                   /* LI_489  */
  YYSYMBOL_mod_head_490 = 307,             /* mod_head_490  */
  YYSYMBOL_tag_491 = 308,                  /* tag_491  */
  YYSYMBOL_ZOhU_492 = 309,                 /* ZOhU_492  */
  YYSYMBOL_KE_493 = 310,                   /* KE_493  */
  YYSYMBOL_PEhE_494 = 311,                 /* PEhE_494  */
  YYSYMBOL_CEhE_495 = 312,                 /* CEhE_495  */
  YYSYMBOL_NUhI_496 = 313,                 /* NUhI_496  */
  YYSYMBOL_VUhO_497 = 314,                 /* VUhO_497  */
  YYSYMBOL_SOI_498 = 315,                  /* SOI_498  */
  YYSYMBOL_LA_499 = 316,                   /* LA_499  */
  YYSYMBOL_utterance_ordinal_801 = 317,    /* utterance_ordinal_801  */
  YYSYMBOL_EK_802 = 318,                   /* EK_802  */
  YYSYMBOL_EK_BO_803 = 319,                /* EK_BO_803  */
  YYSYMBOL_EK_KE_804 = 320,                /* EK_KE_804  */
  YYSYMBOL_JEK_805 = 321,                  /* JEK_805  */
  YYSYMBOL_JOIK_806 = 322,                 /* JOIK_806  */
  YYSYMBOL_GEK_807 = 323,                  /* GEK_807  */
  YYSYMBOL_GUhEK_808 = 324,                /* GUhEK_808  */
  YYSYMBOL_NAhE_BO_809 = 325,              /* NAhE_BO_809  */
  YYSYMBOL_NA_KU_810 = 326,                /* NA_KU_810  */
  YYSYMBOL_I_BO_811 = 327,                 /* I_BO_811  */
  YYSYMBOL_number_812 = 328,               /* number_812  */
  YYSYMBOL_GIhEK_BO_813 = 329,             /* GIhEK_BO_813  */
  YYSYMBOL_GIhEK_KE_814 = 330,             /* GIhEK_KE_814  */
  YYSYMBOL_tense_modal_815 = 331,          /* tense_modal_815  */
  YYSYMBOL_GIK_816 = 332,                  /* GIK_816  */
  YYSYMBOL_lerfu_string_817 = 333,         /* lerfu_string_817  */
  YYSYMBOL_GIhEK_818 = 334,                /* GIhEK_818  */
  YYSYMBOL_I_819 = 335,                    /* I_819  */
  YYSYMBOL_I_JEK_820 = 336,                /* I_JEK_820  */
  YYSYMBOL_JEK_BO_821 = 337,               /* JEK_BO_821  */
  YYSYMBOL_JOIK_BO_822 = 338,              /* JOIK_BO_822  */
  YYSYMBOL_JOIK_KE_823 = 339,              /* JOIK_KE_823  */
  YYSYMBOL_PA_MOI_824 = 340                /* PA_MOI_824  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;



#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif
#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#ifdef __cplusplus
  typedef bool yybool;
# define yytrue true
# define yyfalse false
#else
  /* When we move to stdbool, get rid of the various casts to yybool.  */
  typedef signed char yybool;
# define yytrue 1
# define yyfalse 0
#endif

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify Clang and ICC.  */
# define YYLONGJMP(Env, Val)                    \
 do {                                           \
   longjmp (Env, Val);                          \
   YY_ASSERT (0);                               \
 } while (yyfalse)
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (defined __cplusplus \
      && ((201103 <= __cplusplus && !(__GNUC__ == 4 && __GNUC_MINOR__ == 7)) \
          || (defined _MSC_VER && 1900 <= _MSC_VER)))
#  define _Noreturn [[noreturn]]
# elif ((!defined __cplusplus || defined __clang__) \
        && (201112 <= (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) \
            || (!defined __STRICT_ANSI__ \
                && (4 < __GNUC__ + (7 <= __GNUC_MINOR__) \
                    || (defined __apple_build_version__ \
                        ? 6000000 <= __apple_build_version__ \
                        : 3 < __clang_major__ + (5 <= __clang_minor__))))))
   /* _Noreturn works as-is.  */
# elif (2 < __GNUC__ + (8 <= __GNUC_MINOR__) || defined __clang__ \
        || 0x5110 <= __SUNPRO_C)
#  define _Noreturn __attribute__ ((__noreturn__))
# elif 1200 <= (defined _MSC_VER ? _MSC_VER : 0)
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  226
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3842

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  155
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  186
/* YYNRULES -- Number of rules.  */
#define YYNRULES  475
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  686
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 7
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   1026

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
       2,    12,     2,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     2,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,     2,    33,    34,    35,    36,    37,
       2,    38,    39,    40,    41,    42,    43,    44,    45,     2,
      46,    47,    48,     2,    49,    50,    51,    52,    53,    54,
       2,    55,    56,     2,     2,    57,    58,    59,    60,    61,
       2,    62,     2,    63,    64,    65,     2,    66,    67,     2,
       2,    68,     2,    69,    70,    71,    72,    73,    74,     2,
       2,    75,    76,    77,    78,    79,    80,    81,    82,     2,
       2,    83,    84,    85,    86,    87,    88,    89,     2,     2,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       2,   100,   101,   102,   103,   104,   105,   106,   107,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     108,   109,     2,     2,     2,   110,   111,   112,   113,     2,
       2,   114,   115,   116,   117,   118,   119,   120,     2,     2,
       2,     2,   121,   122,     2,   123,     2,   124,   125,   126,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   127,   128,   129,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,   130,     2,     2,     2,     2,
     131,     2,     2,     2,     2,   132,   133,     2,     2,     2,
       2,     2,     2,     2,     2,   134,     2,     2,     2,     2,
     135,     2,     2,     2,     2,   136,     2,     2,     2,     2,
     137,     2,     2,     2,     2,   138,     2,     2,     2,     2,
     139,     2,     2,     2,     2,   140,     2,     2,     2,     2,
     141,     2,     2,     2,     2,   142,   143,     2,     2,     2,
     144,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     145,     2,     2,     2,     2,   146,     2,     2,     2,     2,
     147,     2,     2,     2,     2,   148,     2,     2,     2,     2,
     149,     2,     2,     2,     2,   150,     2,     2,     2,     2,
     151,     2,     2,     2,     2,   152,     2,     2,     2,     2,
     153,     2,     2,     2,     2,   154,     2
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   375,   375,   378,   380,   382,   384,   386,   388,   391,
     393,   396,   398,   400,   402,   404,   407,   410,   412,   414,
     417,   419,   421,   423,   425,   428,   430,   433,   435,   437,
     440,   442,   444,   447,   449,   451,   454,   456,   458,   460,
     462,   464,   466,   468,   470,   473,   476,   478,   481,   483,
     485,   487,   489,   492,   494,   496,   498,   500,   503,   505,
     507,   509,   511,   513,   515,   517,   519,   521,   524,   527,
     529,   531,   534,   536,   539,   541,   544,   546,   549,   551,
     554,   556,   559,   561,   563,   566,   568,   571,   573,   576,
     578,   581,   583,   586,   588,   590,   592,   595,   597,   600,
     602,   605,   607,   610,   612,   614,   617,   619,   622,   624,
     626,   629,   631,   634,   636,   638,   640,   643,   645,   648,
     650,   652,   654,   656,   658,   660,   662,   665,   667,   670,
     672,   674,   676,   679,   681,   683,   685,   687,   690,   692,
     695,   697,   700,   702,   705,   707,   710,   712,   715,   717,
     720,   722,   724,   727,   729,   731,   734,   736,   738,   740,
     743,   746,   748,   751,   753,   756,   758,   760,   762,   764,
     766,   768,   770,   772,   774,   777,   779,   782,   784,   787,
     789,   792,   794,   796,   799,   801,   804,   806,   808,   811,
     813,   816,   819,   821,   824,   826,   828,   831,   833,   835,
     837,   840,   842,   845,   847,   849,   851,   853,   855,   858,
     860,   862,   865,   867,   870,   872,   874,   877,   879,   881,
     883,   885,   887,   889,   892,   894,   896,   899,   901,   904,
     906,   909,   911,   914,   916,   918,   920,   923,   925,   927,
     930,   932,   935,   937,   940,   942,   944,   946,   948,   950,
     952,   955,   957,   959,   962,   964,   967,   969,   972,   974,
     976,   979,   981,   983,   985,   988,   990,   993,   995,   998,
    1000,  1002,  1004,  1007,  1009,  1012,  1014,  1017,  1019,  1022,
    1024,  1027,  1029,  1032,  1034,  1037,  1039,  1041,  1043,  1046,
    1049,  1052,  1055,  1057,  1060,  1062,  1065,  1067,  1070,  1072,
    1075,  1077,  1080,  1082,  1085,  1087,  1090,  1092,  1095,  1097,
    1100,  1102,  1105,  1107,  1110,  1112,  1115,  1117,  1119,  1122,
    1124,  1127,  1129,  1131,  1134,  1136,  1138,  1141,  1143,  1145,
    1148,  1150,  1152,  1155,  1157,  1160,  1162,  1164,  1167,  1169,
    1172,  1174,  1176,  1179,  1181,  1183,  1186,  1188,  1191,  1193,
    1195,  1198,  1200,  1202,  1205,  1207,  1209,  1212,  1214,  1216,
    1219,  1221,  1223,  1226,  1228,  1231,  1233,  1235,  1238,  1240,
    1243,  1245,  1247,  1250,  1252,  1254,  1257,  1259,  1261,  1264,
    1266,  1269,  1271,  1274,  1276,  1279,  1281,  1284,  1286,  1289,
    1291,  1294,  1296,  1299,  1301,  1304,  1306,  1309,  1311,  1313,
    1316,  1318,  1321,  1323,  1326,  1328,  1330,  1333,  1335,  1338,
    1340,  1343,  1345,  1348,  1350,  1353,  1355,  1358,  1360,  1363,
    1365,  1368,  1370,  1373,  1375,  1378,  1380,  1383,  1385,  1388,
    1390,  1393,  1395,  1398,  1401,  1403,  1406,  1408,  1411,  1413,
    1416,  1419,  1422,  1424,  1427,  1429,  1432,  1434,  1437,  1439,
    1442,  1444,  1447,  1450,  1452,  1455,  1457,  1460,  1462,  1464,
    1467,  1469,  1472,  1475,  1477,  1480,  1482,  1485,  1487,  1490,
    1492,  1495,  1497,  1500,  1502,  1505
};
#endif

#define YYPACT_NINF (-550)
#define YYTABLE_NINF (-194)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1909,  1099,  1099,  -550,    43,  -550,   121,  -550,  -550,  1099,
    1099,   306,  -550,  1099,   143,  1099,  1099,  1099,  1099,  1099,
    1099,  1099,   130,  1909,  1099,  1099,  1909,  1099,   924,  1099,
     844,  1099,  1099,  1099,  1099,  1909,  1099,   191,  1099,  -550,
     145,   148,  1099,  1099,  -550,  1099,  -550,  -550,  1099,  1099,
    1099,  1099,  1099,  -550,  1099,  -550,  1099,  1099,  1099,  -550,
     290,   284,  -550,  -550,  -550,  -550,   -14,  -550,   176,  -550,
     215,  -550,  2931,  2197,  1099,  -550,  -550,  -550,  -550,  -550,
     163,  -550,   199,  -550,  1651,   271,   344,  -550,  -550,  -550,
    -550,   279,   354,  -550,   162,  -550,   193,  -550,  -550,   264,
    -550,  2530,  -550,  -550,  1574,   198,  -550,   203,  -550,    96,
    -550,   375,  -550,  -550,  3426,  -550,  2197,   516,  -550,  1099,
    2435,  2053,   306,  -550,  1768,   383,  -550,  2316,   -24,  2709,
    -550,  -550,  1099,  -550,  -550,  -550,  3547,  3153,  3570,  3093,
    3570,  2316,  2686,   304,  3696,  1737,   656,  -550,  1756,  3594,
    3153,  3570,  -550,  3302,  2686,  1263,   782,  1756,  3570,  3696,
    3256,  -550,  -550,  1099,  1099,  3153,  3547,  -550,  -550,  2316,
      36,  -550,    36,  -550,  2316,  2316,  -550,  -550,  -550,  -550,
    -550,  -550,  -550,   306,  -550,  -550,  -550,  -550,  -550,  -550,
    -550,  -550,  -550,   332,   139,  -550,  -550,  -550,  -550,  -550,
    -550,  -550,  1099,  -550,  -550,  -550,  -550,  -550,    48,  -550,
    -550,  -550,  -550,   275,  -550,  -550,  -550,  -550,  -550,  -550,
    -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,  2435,  2435,
    2931,  2931,  -550,  2931,  2828,  3426,  3093,  -550,  -550,  1099,
    3093,  3093,  1099,  3093,  -550,  1099,  1099,  1099,  -550,   271,
    3093,  -550,   827,  -550,  1099,   244,  1099,  3570,  1099,   193,
    1099,  1099,  3696,  -550,  3696,  1099,  3696,  1099,  1099,  3696,
    3696,   264,  1099,   193,  -550,  2530,  -550,   244,  3696,  1099,
     198,  1756,  1756,  1756,  1099,  1756,  1756,  1099,  1099,   656,
    1756,  -550,  -550,   170,  3547,   827,  -550,  -550,  -550,  -550,
    -550,  -550,  2197,  -550,  -550,  -550,    93,  3504,   299,   299,
    -550,  -550,  -550,  -550,  2686,    47,    47,  3153,  -550,   125,
     337,  -550,   288,  3050,    77,   827,   406,  -550,  -550,   827,
    3153,   394,    76,  1099,  1099,  1099,  1099,  1099,  1099,  1099,
    1099,  -550,   257,  -550,   315,  2293,  -550,   203,  -550,  -550,
     354,  -550,   162,  3696,  3547,  3547,  2686,  2908,   441,   571,
     304,   304,   571,   441,   571,   441,    36,  -550,    82,  -550,
     656,  1142,  -550,  -550,  -550,    85,  3667,    51,   201,  1831,
     170,  -550,  3461,   193,  3380,   840,  -550,  1099,  -550,  -550,
    -550,    44,  2316,  3093,   768,  2567,  3570,  2025,   170,  1455,
    -550,  -550,  -550,   269,   269,   269,  -550,  -550,  1099,  -550,
    -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,
    -550,   297,  -550,  -550,  -550,  -550,  3050,  -550,  -550,   247,
    2530,  -550,  2530,  -550,  -550,  -550,  -550,  -550,  3570,  -550,
    -550,  -550,   264,  -550,  -550,  -550,   247,  -550,   247,  -550,
    -550,  -550,  -550,  -550,  -550,  -550,   269,  -550,  -550,  -550,
     768,  -550,  -550,  -550,  -550,  -550,  -550,  -550,   193,  -550,
    -550,   299,   299,   108,  -550,   108,  -550,   423,  -550,  -550,
    -550,  -550,  -550,  -550,  1099,  -550,  -550,  -550,  1099,  -550,
      77,  3547,  -550,  -550,  -550,  -550,  -550,  1099,   314,  -550,
    -550,  1099,  -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,
    -550,  -550,  1099,  2293,  -550,  1099,   441,  -550,  2606,   441,
     441,   441,   441,   571,   571,   571,   571,   571,    15,    15,
      15,   497,  2174,  2293,   952,   571,  -550,  -550,  -550,    85,
     151,   269,   269,  -550,  -550,  1099,   313,  -550,  -550,  1099,
    -550,    85,  -550,  1099,  -550,  -550,  1099,  -550,  -550,  3461,
    -550,  -550,   264,  -550,   193,  -550,  1099,  -550,  -550,  -550,
      76,   247,    57,    52,  -550,  1099,  -550,  -550,  1099,  -550,
    2567,    77,  -550,  -550,  -550,  1099,  3153,  3696,  1756,  -550,
    -550,  2530,  -550,  -550,   344,  -550,  -550,  -550,   264,   108,
    -550,   108,  -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,
    -550,    77,  -550,  -550,  -550,  -550,  -550,  -550,  2293,  -550,
    1099,  -550,  -550,  -550,   151,  -550,  -550,  -550,   247,   247,
    -550,  -550,  -550,  1099,  -550,  -550,  -550,  -550,  -550,  2606,
    -550,  3624,  -550,  -550,   571,   251,  -550,  1099,  -550,  -550,
    -550,  -550,  -550,  -550,   264,  -550,  -550,  -550,    57,  -550,
    -550,   269,  -550,  -550,  2530,  -550,  -550,  -550,  -550,  -550,
    -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,   198,  -550,
    -550,  -550,  3570,  -550,  2567,  -550
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      17,   310,   302,   233,   245,   229,   256,   249,   251,   393,
     292,     0,   250,   402,   235,   387,   419,   224,   431,   397,
     409,   411,     0,    17,   385,   308,    17,   395,   237,   400,
     269,   425,   391,   298,   429,    17,   312,   244,   265,   248,
       0,     0,   381,   368,   433,   434,   440,   441,   442,   444,
     446,   448,   450,   452,   457,   462,   463,   465,   467,   475,
       0,     0,     3,    10,    15,    16,    18,    20,    25,    27,
      30,    21,    44,    17,    46,    50,    48,    49,    33,    69,
      74,    76,    78,    80,     0,    87,    89,    91,    94,    95,
      93,   101,   103,   106,   108,   111,   113,   117,   125,    41,
     138,     0,   143,   144,   146,   148,   150,   153,   158,   156,
     161,   163,    43,    42,    39,   121,    17,   227,   165,   231,
      17,    17,   240,   242,     0,   252,   254,    17,     0,     0,
     267,   126,   283,   285,   286,   287,     0,     0,     0,    37,
       0,    17,     0,     0,     0,     0,     0,   414,     0,     0,
       0,     0,    51,     0,     0,     0,   413,     0,     0,     0,
       0,    52,    36,   263,   261,     0,     0,   399,    96,    17,
       0,   415,     0,    38,    17,    17,   234,   311,   303,   247,
     257,   394,   293,   241,   403,   236,   388,   420,   225,   432,
     398,   410,   412,     0,     0,   386,   309,     8,   396,   238,
     239,   401,   270,   271,   426,   392,   299,   430,     0,   313,
     246,   266,   290,     0,   382,   369,   435,   443,   445,   447,
     449,   451,   458,   464,   466,   468,     1,     2,     0,    24,
      29,    32,    26,     0,     0,     0,     0,     5,    47,   455,
       0,     0,   453,     0,   332,   319,   330,   417,    71,    88,
       0,    40,   413,    45,   421,     0,   423,     0,   427,     0,
     438,   473,     0,   258,     0,   259,     0,   436,   471,     0,
       0,   114,   407,     0,    81,     0,    86,   413,     0,   304,
     149,     0,     0,     0,   469,     0,     0,   389,   306,     0,
       0,   164,   118,     0,     0,     0,     6,   230,   228,   232,
      14,     4,    17,   243,   334,   333,     0,     0,     0,     0,
      67,   253,   255,     9,     0,     0,     0,     0,    72,     0,
       0,   284,     0,     0,     0,   413,   177,    84,   145,     0,
       0,     0,     0,   300,   281,   279,   273,   277,   275,   294,
     203,   217,     0,   181,   184,     0,   194,   197,   201,   186,
     209,   212,   214,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   172,     0,   169,
       0,     0,   167,   159,   173,     0,     0,     0,     0,     0,
       0,   129,     0,   133,     0,     0,   318,   316,    98,    97,
     142,     0,    17,     0,     0,     0,     0,     0,     0,     0,
     122,   264,   262,     0,    93,     0,    13,   345,   343,   179,
     226,    11,    12,   291,   315,   314,   288,   272,   364,   363,
      68,     0,    19,    22,    23,    28,     0,    31,   456,     0,
       0,   454,     0,   320,   331,   418,    70,   422,     0,   424,
      92,   428,   102,   439,   474,   107,     0,   260,     0,   437,
     472,   109,   110,   408,   139,    85,     0,   305,   147,   151,
       0,   470,   154,   155,   390,   307,   162,   157,   115,     7,
      66,     0,     0,     0,    58,     0,    62,     0,   347,   346,
     404,   406,    73,   326,   324,   174,   268,   337,   335,   459,
       0,     0,   339,   338,    53,   178,   362,   360,     0,   175,
     329,   327,    34,   301,   282,   280,   274,   278,   276,   295,
     204,   372,   370,     0,   180,   296,     0,   189,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   183,     0,   192,   205,   206,     0,
       0,     0,     0,   218,   356,   354,   170,   168,   350,   348,
     119,     0,   367,   365,   141,   353,   351,   140,   131,     0,
     128,   130,   134,   137,   135,   375,   373,   124,   317,   416,
       0,     0,     0,     0,   359,   357,   166,   342,   340,    99,
       0,     0,    54,   127,   123,   460,     0,     0,     0,   344,
     289,     0,    77,    79,    90,   104,   105,   152,   116,     0,
      60,     0,    64,    59,    63,   380,   379,   405,   325,   336,
      57,     0,   361,   176,   328,   371,   182,   297,     0,   323,
     321,   190,   187,   195,     0,   200,   199,   213,     0,     0,
     215,   216,   378,   376,   220,   219,   208,   207,   221,     0,
     193,     0,   223,   202,     0,     0,   355,   383,   171,   349,
     120,   366,   352,   132,   136,   374,    35,    83,     0,   358,
     341,     0,    55,   461,     0,   112,   160,    75,    61,    65,
      56,   185,   322,   196,   210,   211,   377,   188,   191,   222,
     198,   384,     0,    82,     0,   100
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -550,  -550,   316,   -34,  -109,   311,   204,  -550,    13,  -550,
     156,  -550,   208,   -70,   426,  -550,  -550,  -550,  -550,  -123,
    -125,   -74,  -550,  -145,  -550,  -106,  -419,   -22,   -79,     2,
     -93,  -550,  -550,   241,  -550,  -550,    66,  -149,  -550,  -550,
     -52,  -550,   289,  -308,   -56,   175,  1294,   -33,   171,  -137,
     -97,   135,  -289,   317,  -550,   183,   -91,   362,    18,   631,
    -101,  -467,  -328,  -319,   120,   122,  -253,  -296,  -159,  -122,
    -340,  -550,    27,  -154,  -550,   -90,  -550,  -550,  -550,    53,
    -550,   486,   -30,  -550,  -550,   374,   152,   262,  -550,  -550,
     184,  -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,
    -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,    41,
    -550,   353,  -550,  -249,   188,  -127,  -550,   -55,   -48,  -294,
    -550,  -346,  -549,  -144,   212,  -449,  -550,  -550,   -49,    31,
    -550,  -550,   402,  -550,  -550,   -36,  -550,  -550,  -550,  -550,
    -550,  -550,   985,  -550,   747,  1019,  -550,  -550,  -550,  -550,
    -550,  -550,  -550,   902,  -550,   721,  -550,  -550,  -550,  -550,
    -550,  -550,  -550,   -89,   179,   187,  -550,   -84,     0,  1049,
    -550,  -550,   476,   427,  -550,  -550,   180,  -342,   206,   481,
     507,   506,   229,   -98,   -62,  -550
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
     403,    79,    80,    81,    82,    83,   274,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   380,   381,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   235,
     342,   343,   344,   518,   640,   641,   345,   346,   347,   348,
     349,   350,   351,   352,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   262,   127,   128,   129,
     130,   353,   354,   355,   356,   357,   131,   132,   133,   134,
     135,   136,   358,   516,   137,   359,   138,   281,   289,   294,
     140,   141,   416,   389,   250,   622,   485,   502,   276,   310,
     489,   494,   579,   409,   480,   550,   557,   546,   576,   499,
     420,   554,   142,   514,   567,   634,   607,   143,   648,   144,
     145,   290,   146,   147,   148,   149,   150,   151,   152,   273,
     153,   154,   155,   156,   253,   157,   255,   257,   158,   259,
     159,   160,   161,   162,   269,   264,   163,   164,   278,   166,
     167,   168,   169,   170,   243,   240,   171,   587,   172,   173,
     174,   175,   285,   270,   520,   176
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     165,   467,   233,   263,   319,   249,   318,   280,   265,   286,
     248,   592,   470,   593,   474,   476,   632,   517,   313,   536,
     394,   367,   539,   165,   541,   377,   165,   318,   410,   517,
     266,   661,   332,   327,   309,   165,   251,   407,   532,   237,
     271,   139,   318,   283,   468,   326,   616,   331,   478,   418,
     234,   582,   552,   385,   369,   372,    28,   374,   378,   317,
     406,   586,   292,   588,   139,   411,   412,   139,   307,   542,
     400,   558,   165,   165,   561,    10,   139,   500,   492,   275,
     317,   200,   296,   544,   165,   232,   548,   301,    10,   513,
     642,   561,   303,   376,   304,   317,   430,   382,   432,    16,
      43,   379,   650,   553,   399,   533,   287,   234,   379,   304,
     540,   179,   288,   236,   139,   323,   165,    53,   305,   228,
     165,   165,    55,   390,    25,   236,   483,   165,   234,   165,
     327,   560,   513,   305,    57,   685,   395,   419,   633,   330,
     414,   165,   364,   234,   610,   408,   460,   545,   549,   583,
     165,   671,   574,   303,   364,   249,   479,   139,   396,   493,
     248,   139,   139,   233,   440,   165,   429,   501,   139,   165,
     236,   386,   667,   484,   165,   165,   436,   600,   602,   603,
     236,   604,   139,   292,   628,   629,    46,    47,    54,   180,
     621,   236,   482,    48,   318,   536,   249,   575,   415,   644,
     645,    54,   555,   442,   621,   517,   236,   318,   426,   426,
     139,   234,   272,   477,   639,   139,   139,   472,   283,   390,
     185,   387,   543,   623,   513,   625,   626,   455,   165,   165,
     165,   165,    13,   165,   165,   662,   330,   556,   537,   538,
     330,   330,   423,   330,   249,   683,   232,   317,   574,   522,
     330,   653,   473,   475,   527,   531,   394,   193,   511,   210,
     317,   263,   390,   618,    29,   670,   265,   624,   469,   139,
     139,   236,   236,   212,   236,   236,   213,   236,   513,   374,
     547,   236,   236,   570,   236,    46,    47,   571,   525,   487,
     226,   236,   390,   575,   267,   234,   390,   280,    16,   666,
     304,   536,   165,   261,    16,   668,   239,   669,   234,   584,
      56,   621,   227,   268,   364,   496,   249,   165,   488,   682,
      27,     4,   497,   559,   305,    58,    27,   562,   445,     7,
     165,    32,    46,    47,   316,   451,   452,    32,    13,   194,
      12,   242,   197,   139,   495,   364,   254,   249,   366,   498,
     261,   208,   248,   284,   268,    52,   364,   364,   236,   364,
     366,   256,   364,   280,   364,   306,   335,   282,   272,   337,
      29,   236,   335,    27,   580,   337,   258,   340,    46,    47,
     591,     1,   512,   340,    32,   368,   425,   427,   678,   413,
     375,   320,   165,   330,    49,   496,   388,   595,    37,   596,
     397,     2,   497,     6,   421,    39,   404,   311,   275,    30,
     275,   597,   598,     2,   585,   599,   601,   459,   391,   335,
     462,   463,   337,   515,   605,   590,   165,   177,   178,   647,
     340,   300,   422,   139,   572,   181,   182,   424,   665,   184,
     594,   186,   187,   188,   189,   190,   191,   192,   454,   398,
     195,   196,   458,   198,   199,   201,   203,   204,   205,   206,
     207,   664,   209,   318,   211,   373,   327,   236,   214,   215,
      16,   216,   466,   291,   217,   218,   219,   220,   221,   534,
     222,   535,   223,   224,   225,    45,   680,   260,    16,    47,
     679,   643,    27,   635,   636,   637,   638,   183,   632,   312,
     238,   249,   523,    32,   486,   446,   261,   448,   654,   392,
      27,   491,   677,   364,   391,   656,   317,   438,   364,   456,
     366,    32,   657,   364,   364,   364,   364,   364,   481,   613,
     314,   526,   364,   364,   297,   364,     6,   524,   335,   391,
       8,   337,   282,   298,    16,   299,   231,   302,   606,   340,
     627,   366,   571,   630,   631,   315,   335,   391,   321,   337,
      49,   241,   366,   366,   234,   366,    27,   340,   366,   275,
     366,   569,   330,   229,   230,   673,   521,    32,    49,   674,
     675,     0,     0,     0,     0,     0,   165,   391,     0,   401,
     402,   391,     0,     0,   528,     0,     0,    33,     0,     0,
      34,     0,     0,     0,    35,   249,     0,   519,     0,     0,
       0,     0,   335,   572,    38,   337,     0,   551,   364,     0,
     633,     0,     0,   340,     0,   563,    19,   236,   417,     0,
       0,   114,     0,   391,    49,     0,     0,   404,   581,   364,
       0,   364,   275,     0,   364,     0,    44,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,   114,   330,     0,
     684,     0,     0,     0,     0,   428,   114,     3,   431,     0,
       0,   433,   434,   435,     0,     0,     0,     0,     0,     0,
     437,     0,   439,   334,   441,     0,   443,   444,   336,     0,
     338,   447,     0,   449,   450,    43,    14,     0,   453,   572,
      15,     0,     0,    16,   114,   457,     0,    48,     0,    50,
     461,     0,    53,   464,   465,     0,     0,    55,     0,   366,
      24,     0,     0,     0,   366,    27,     0,     0,    30,   366,
     366,   366,   366,   366,     0,     0,    32,     0,   366,   366,
       0,   366,     0,     0,     0,     0,     0,   114,     0,     0,
       0,   114,   114,     0,     0,     0,     0,     0,   114,   503,
     504,   505,   506,   507,   508,   509,   510,     0,     0,   574,
       0,     0,   114,   341,     0,   519,    42,     0,     0,     3,
       0,     0,     0,     0,   384,   341,     0,     0,     0,     0,
       0,   384,     0,     3,     0,   519,     0,     0,     0,     0,
     114,     0,   519,     0,     0,   114,   114,     0,    14,     0,
      59,     0,    15,   568,   575,    16,     0,     0,     0,     0,
       0,     0,    14,     0,   366,     0,    15,     0,     0,    16,
       0,     0,    24,     0,   589,   391,     0,    27,     3,     0,
      30,   565,     0,     0,     0,   366,    24,   366,    32,    25,
     366,    27,     0,     0,    30,     0,     0,     0,     0,   114,
     114,     0,    32,   363,     6,     0,     0,    14,     8,     0,
       0,    15,    36,     0,    16,   363,     0,   393,     0,     0,
     519,     0,     0,     0,     0,     0,   519,    16,    42,   361,
     361,    24,   370,   370,    25,   370,    27,     0,     0,    30,
     566,   361,    42,     0,     0,    49,     0,    32,     0,    27,
     608,     0,   202,     0,   609,     0,    46,    47,     0,    49,
      32,     0,    59,   612,     0,    33,     0,   614,    34,     0,
       0,     0,    35,   114,     0,     0,    59,     0,   615,     0,
     519,   617,    38,     0,     6,   341,     0,    42,     8,     0,
       0,     0,     0,     0,     0,   335,     0,     0,   337,     0,
       0,    46,    47,     0,    49,     0,   340,     0,     0,     0,
       0,   646,     0,   393,    44,   649,   341,    49,     0,   651,
       0,    59,   652,     0,     0,     0,   252,   341,   341,     0,
     341,     0,   655,   341,    28,   341,     0,     0,     0,     0,
       0,   659,     0,   277,   660,    33,     0,  -193,    34,     0,
     384,   663,    35,   384,     0,     0,   295,     0,     0,     0,
       0,     0,    38,   114,     0,     0,   295,     0,     0,     0,
     384,   252,     0,     0,     0,   363,   370,     0,   295,   325,
     277,   329,   277,     0,     0,     0,   672,   371,     0,     0,
     393,     0,   252,   277,    44,   295,     0,     0,     0,   676,
     277,   361,   295,   363,  -193,     0,   363,   252,   295,  -193,
       0,  -193,     0,   681,     0,     0,  -193,   363,   363,   363,
       0,     0,     0,     0,   363,     0,   363,     0,  -193,   361,
    -193,     0,   361,  -193,     0,     0,     0,     0,  -193,     0,
       0,     0,     0,   361,   361,   361,   363,   361,   361,     0,
     361,     0,   361,     0,     0,     0,     0,   370,   370,     6,
       0,     0,     0,     8,     0,     0,     0,   360,   360,     0,
       0,     0,   361,     0,     0,     0,   252,   295,   329,   360,
       0,     0,   329,   329,   341,   329,     0,     0,     0,   341,
       0,     0,   329,     3,   341,   341,   341,   341,   341,   277,
       0,   362,     0,   341,   341,     0,   341,     0,     0,     0,
       0,     0,     0,   362,     0,     0,     0,   277,     0,     0,
      33,     0,    14,    34,     0,     0,    15,    35,     0,    16,
     384,   365,     0,     0,     0,     0,   295,    38,   363,     0,
       0,     0,     0,   365,     0,     0,    24,     0,     0,   295,
       0,    27,     0,     0,    30,     0,     0,     0,     0,   252,
       0,     0,    32,     0,   361,   325,     0,     0,     0,    44,
       0,     0,   252,     0,   363,     0,     0,   363,     0,   363,
     363,   363,   363,   363,     0,     0,     0,     0,     0,   341,
       0,     0,   363,   363,   363,     0,   295,   295,     0,     0,
     361,     0,    42,   361,   386,   361,   361,   361,   361,   361,
     341,     0,   341,     0,     0,   341,    46,    47,   361,   361,
     361,   295,     0,     0,   295,     0,   295,     0,     0,     0,
       0,     0,     0,     0,   658,   573,    59,   277,   277,   360,
       0,   295,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    17,   387,     0,    18,     0,    19,    20,
       0,    21,     0,     0,    22,    23,     0,   360,   252,     0,
     360,     0,   277,   362,   277,     0,     0,     0,     0,   363,
     277,   360,   360,   360,     0,   360,   360,     0,   360,     0,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     363,     0,   363,   365,   362,   361,   363,     0,    40,    41,
     360,     0,     0,     0,     0,   362,   362,     0,   362,     0,
       0,   362,     0,   362,     0,     0,   361,    43,   361,     0,
       0,   365,   361,   295,   365,     0,     0,     0,     0,    48,
       0,    50,     0,     0,    53,   365,   365,   365,   293,    55,
       0,     0,   365,     0,   365,     0,     0,     0,   308,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     322,   324,     0,   328,   365,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   383,     0,     0,
       0,     0,     0,     0,   383,     0,     0,     0,     0,     0,
     405,   295,   360,     0,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     5,   573,     0,     0,     0,     0,     0,
       0,     0,   277,     0,     0,     0,    10,     0,   252,     0,
       0,     0,     0,   277,     0,    14,     0,     0,   360,    15,
       0,   360,    16,   360,   360,   360,   360,   360,     0,     0,
       0,     0,     0,     0,     0,     0,   360,   360,   360,    24,
       0,     0,    25,     0,    27,     0,   365,    30,     0,   293,
     328,     0,   362,     0,     0,    32,     0,   362,     0,     0,
       0,     0,   362,   362,   362,   362,   362,     0,     0,     0,
       0,   362,   362,     0,   362,     0,     0,     0,     0,   272,
     573,     0,   365,     0,     0,   365,   277,   365,   365,   365,
     365,   365,     0,     0,     0,    42,     0,     0,     0,    43,
     365,   365,   365,     0,   277,     3,   277,     0,   328,     0,
       0,     0,    49,   279,     0,     0,    53,     0,     0,    54,
       0,   471,     0,   360,     0,     0,     0,     0,     0,    59,
       0,     0,     0,     0,    14,     0,     0,   490,    15,     0,
       0,    16,     0,     0,   360,     0,   360,     0,     0,     0,
     360,     0,     0,     0,     0,     0,     0,   362,    24,     0,
       0,     0,     0,    27,     0,     0,    30,     0,   529,   530,
       0,     0,   244,     0,    32,     0,     0,     0,   362,     0,
     362,     0,     3,   362,     0,     0,     0,   365,     0,     0,
       0,     0,   245,   383,     0,     0,   383,     9,   564,     0,
       0,     0,    10,     0,     0,     0,     0,     0,   365,     0,
     365,    14,     0,   383,    42,    15,     0,     0,    16,     0,
       0,    17,     0,     0,    18,     0,    19,    20,     0,    21,
       0,    49,    22,    23,     0,    24,     0,     0,    25,     0,
      27,     0,     0,    30,    31,     0,     0,     0,    59,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   246,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     0,    40,    41,   247,     0,
       0,     0,     0,     0,     0,     0,     0,     3,    10,   304,
       0,    42,     0,     0,     0,    43,     0,    14,     0,     3,
       0,    15,     0,     0,    16,   611,     5,    48,    49,    50,
      51,     0,    53,   305,     0,    54,    14,    55,     0,    10,
      15,    24,     0,    16,     0,    59,    27,    13,    14,    30,
       0,     0,    15,     0,     0,    16,     0,    32,    17,     0,
      24,    18,     0,    19,    20,    27,    21,     0,    30,    22,
      23,     0,    24,     0,     0,    25,    32,    27,     0,    29,
      30,     0,     3,     0,     0,     0,     0,     0,    32,     0,
       0,     0,     0,   383,     0,     0,     0,    42,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     0,
      13,    14,     0,    40,    41,    15,    42,     0,    16,     0,
       0,    54,     0,     0,     0,     0,     0,     0,    42,     0,
       0,    59,    43,    49,     0,    24,     0,     0,    25,     0,
      27,     0,    29,    30,    48,    49,    50,     0,     0,    53,
      59,    32,    54,     0,    55,     1,     2,     0,     0,     0,
       3,     0,    59,     0,     4,     0,     0,     5,     0,     6,
       0,     0,     7,     8,     0,     9,     0,     0,     0,     0,
      10,     0,    11,    12,     0,     0,     0,     0,    13,    14,
       0,    42,     0,    15,     0,    43,    16,     0,     0,    17,
       0,     0,    18,     0,    19,    20,     0,    21,    49,     0,
      22,    23,    53,    24,     0,    54,    25,    26,    27,    28,
      29,    30,    31,     0,     0,    59,     0,     0,     0,    32,
      33,     0,     0,    34,     0,     0,     0,    35,     0,    36,
       0,    37,     0,     0,     0,     0,     0,    38,    39,     0,
       0,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   492,     0,     0,    42,
       0,     0,     0,    43,     0,     0,     0,     0,     0,    44,
      45,     0,     0,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,    54,     0,    55,    56,    57,    58,     1,
       2,     0,     0,    59,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     6,     0,    17,     0,     8,    18,     9,
      19,    20,     0,    21,    10,     0,    22,    23,     0,     0,
       0,     0,    13,    14,     0,     0,     0,    15,     0,     0,
      16,     0,     0,    17,     0,     0,    18,   493,    19,    20,
       0,    21,     0,     0,    22,    23,     0,    24,     0,     0,
      25,     0,    27,    28,    29,    30,    31,     0,     0,     0,
      40,    41,     0,    32,    33,     0,     0,    34,     0,     0,
       0,    35,     0,    36,     0,     0,     0,     0,     0,    43,
       0,    38,     0,     0,     0,     0,     0,     0,    40,    41,
       0,    48,     0,    50,     0,     0,    53,     0,     0,     0,
       0,    55,     0,    42,     0,   632,     0,    43,     0,     0,
       0,     0,     0,    44,    45,     0,     0,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,    54,     0,    55,
      56,    57,    58,     1,     2,     0,     0,    59,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,     0,     9,     0,     0,     0,     0,    10,    19,
       0,     0,     0,     0,     0,     0,    13,    14,     0,     0,
       0,    15,     0,    27,    16,     0,     0,    17,     0,     0,
      18,     0,    19,    20,    32,    21,     0,     0,    22,    23,
       0,    24,     0,     0,    25,     0,    27,    28,    29,    30,
      31,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,   334,    36,     0,   335,
       0,   336,   337,   338,     0,     0,   339,   633,    43,     0,
     340,     0,    40,    41,     0,     0,     0,     0,     0,     0,
      48,    49,    50,     0,     0,    53,     0,    42,     0,     0,
      55,    43,     1,     2,     0,     0,     0,     3,    45,     0,
       0,    46,    47,    48,    49,    50,    51,    52,    53,     0,
      16,    54,     9,    55,    56,    57,    58,    10,    19,     0,
       0,    59,     0,     0,     0,    13,    14,     0,     0,     0,
      15,     0,    27,    16,     0,     0,    17,     0,     0,    18,
       0,    19,    20,    32,    21,     0,     0,    22,    23,     0,
      24,     0,     0,    25,     0,    27,    28,    29,    30,    31,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,   334,    36,     0,   335,     0,
     336,   337,   338,     0,     0,   339,     0,    43,     0,   340,
       0,    40,    41,     0,     0,     0,     0,    46,    47,    48,
      49,    50,     0,     0,    53,     0,    42,     0,     0,    55,
      43,     1,     2,     0,     0,   261,     3,    45,     0,     0,
       0,     0,    48,    49,    50,    51,    52,    53,     0,     0,
      54,     9,    55,    56,    57,    58,    10,     0,     0,     0,
      59,     0,     0,     0,    13,    14,     0,     0,     0,    15,
       0,     0,    16,     0,     0,    17,     0,     0,    18,     0,
      19,    20,     0,    21,     0,     0,    22,    23,     0,    24,
       0,     0,    25,     0,    27,     0,    29,    30,    31,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,   244,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,     9,     0,     0,    43,
       0,    10,     0,     0,     0,     0,    45,     0,   577,     0,
       0,    48,    49,    50,    51,     0,    53,     0,     0,    54,
      17,    55,    56,    18,     0,    19,    20,     0,    21,    59,
       0,    22,    23,     9,     0,     0,     0,     0,    10,     0,
       0,     0,     0,    31,     0,     0,     0,   619,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
      18,     0,    19,    20,   246,    21,     0,     0,    22,    23,
       0,     0,     0,     0,     0,    40,    41,     0,     0,     0,
      31,   578,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,    43,     0,     0,     0,     0,     0,
       0,    19,     0,     0,     0,     0,    48,     0,    50,    51,
       0,    53,    40,    41,    54,    27,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,    50,    51,     0,    53,     0,
       0,    54,     0,    55,     0,     0,     0,     0,   334,   620,
       3,   335,     0,   336,   337,   338,     0,     0,   339,     0,
      43,     0,   340,    16,     0,     9,     0,     0,     0,     0,
      10,    19,    48,    49,    50,     0,     0,    53,     0,    14,
       0,     0,    55,    15,     0,    27,    16,     0,     0,    17,
       0,     0,    18,     0,    19,    20,    32,    21,     0,     0,
      22,    23,     0,    24,     0,     0,    25,     0,    27,     0,
       0,    30,    31,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     0,   333,     0,   334,     0,
       0,   335,     0,   336,   337,   338,     0,     0,   339,     0,
      43,     0,   340,     0,    40,    41,     0,     0,     0,     0,
       0,     0,    48,    49,    50,     0,     0,    53,     0,    42,
       0,     0,    55,    43,     0,     0,     0,     0,     0,     3,
       0,     0,     0,    46,    47,    48,    49,    50,    51,   245,
      53,     0,     0,    54,     9,    55,     0,     0,     0,    10,
       0,     0,     0,    59,     0,     0,     0,     0,    14,     0,
       0,     0,    15,     0,     0,    16,     0,     0,    17,     0,
       0,    18,     0,    19,    20,     0,    21,     0,     0,    22,
      23,     0,    24,     0,     0,    25,     0,    27,     0,     0,
      30,    31,     0,     0,     0,     0,     0,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,   247,     0,     0,     0,     0,
       0,     0,     3,     0,     0,     0,     0,     0,    42,     0,
       0,     0,    43,     0,     0,    16,     0,     9,     0,     0,
       0,     0,    10,    19,    48,    49,    50,    51,     0,    53,
       0,    14,    54,     0,    55,    15,     0,    27,    16,     0,
       0,    17,    59,     0,    18,     0,    19,    20,    32,    21,
       0,     0,    22,    23,     0,    24,     0,     0,    25,     0,
      27,     0,     0,    30,    31,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
     334,    36,     0,   335,     0,   336,   337,   338,     0,     0,
     339,     0,    43,     0,   340,     0,    40,    41,     0,     0,
       0,     0,     0,     0,    48,    49,    50,     0,     0,    53,
       0,    42,     0,     0,    55,    43,     0,     0,     0,     0,
       0,     3,     0,     0,     0,     0,     0,    48,    49,    50,
      51,   245,    53,     0,     0,    54,     9,    55,     0,     0,
       0,    10,     0,     0,     0,    59,     0,     0,     0,     0,
      14,     0,     0,     0,    15,     0,     0,    16,     0,     0,
      17,     0,     0,    18,     3,    19,    20,     0,    21,     0,
       0,    22,    23,     0,    24,     0,     0,    25,     0,    27,
       0,     0,    30,    31,    10,     0,     0,     0,     0,     0,
      32,     0,     0,    14,     0,     0,     0,    15,     0,     0,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    41,    24,     0,     0,
      25,     0,    27,     0,     3,    30,     0,     0,     0,     0,
      42,     0,     0,    32,    43,     0,     0,     0,     0,     9,
       0,     0,     0,     0,    10,     0,    48,    49,    50,    51,
       0,    53,     0,    14,    54,     0,    55,    15,     0,     0,
      16,     0,     0,    17,    59,     0,    18,     0,    19,    20,
       0,    21,     0,    42,    22,    23,     0,    24,     0,     0,
      25,     0,    27,     0,     0,    30,    31,     0,     0,    48,
      49,     0,     0,    32,     0,     0,     0,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,     3,     0,     0,
       0,     0,     0,    42,     5,     0,     0,    43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     0,    48,
      49,    50,    51,     0,    53,    13,    14,    54,     0,    55,
      15,     0,     0,    16,     0,     0,    17,    59,     0,    18,
       0,    19,    20,     3,    21,     0,     0,    22,    23,     0,
      24,     0,     0,    25,     0,    27,     0,    29,    30,     0,
       0,     0,     0,    10,     0,     0,    32,     0,     0,     0,
       0,    13,    14,     0,     0,     0,    15,     0,     0,    16,
       0,     0,    17,     0,     0,    18,     0,    19,    20,     0,
      21,    40,    41,    22,    23,     0,    24,     0,     0,    25,
       0,    27,     0,    29,    30,     0,    42,     0,     0,     0,
      43,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     0,    49,    50,     0,     0,    53,     0,     0,
      54,     0,    55,     0,     0,     0,     0,    40,    41,     0,
      59,    10,     0,     0,     0,     0,     0,     0,     0,     0,
      14,     0,    42,     0,    15,     0,    43,    16,     0,     0,
      17,     0,     0,    18,     0,    19,    20,     3,    21,    49,
      50,    22,    23,    53,    24,     0,    54,    25,    55,    27,
       0,     0,    30,     0,     0,     0,    59,    10,     0,     0,
      32,     0,     0,     0,     0,     0,    14,     0,     0,     0,
      15,     0,     3,    16,     0,     0,    17,     0,     0,    18,
       0,    19,    20,     0,    21,    40,    41,    22,    23,     0,
      24,     0,    10,    25,     0,    27,     0,     0,    30,     0,
      42,    14,     0,     0,    43,    15,    32,     0,    16,     0,
       0,     0,     0,     0,     0,     3,    48,    49,    50,     0,
       0,    53,     5,     0,    54,    24,    55,     0,    25,     0,
      27,    40,    41,    30,    59,    10,     0,     0,     0,     0,
       0,    32,     0,     0,    14,     0,    42,     0,    15,     0,
       0,    16,     0,     0,     0,     0,     0,     0,     3,     0,
       0,     0,     0,    49,    50,   272,     0,     0,    24,     0,
      54,    25,    55,    27,     0,     0,    30,     0,    10,     0,
      59,    42,     0,     0,    32,    43,     0,    14,     0,     0,
       0,    15,     0,     0,    16,     0,     9,     0,    49,     0,
       0,    10,    53,     0,     0,    54,     0,     0,   272,     0,
       0,    24,     0,     0,    25,    59,    27,     0,     0,    30,
      17,     0,     0,    18,    42,    19,    20,    32,    21,     0,
       0,    22,    23,    13,     0,     0,     0,     0,     0,     0,
       0,    49,     0,    31,    17,     0,     0,    18,    54,    19,
      20,     0,    21,     0,     0,    22,    23,     0,    59,     0,
       0,     0,     0,     0,     0,    29,     0,    42,     0,     0,
       0,    16,     0,     0,     0,    40,    41,     0,     0,    19,
       0,     0,     0,     0,    49,     0,     0,     0,     0,     0,
       0,    54,     0,    27,    43,     0,     0,     0,     0,    40,
      41,    59,     0,     0,    32,     0,    48,     0,    50,    51,
       0,    53,     0,     0,    54,     0,    55,    17,    43,     0,
      18,     0,    19,    20,     0,    21,     0,     0,    22,    23,
      48,     0,    50,     0,     0,    53,   334,     0,     0,   335,
      55,   336,   337,   338,     0,     0,    17,     0,    43,    18,
     340,    19,    20,     0,    21,     0,     0,    22,    23,     0,
      48,    49,    50,     0,     0,    53,     0,     0,     0,     0,
      55,   272,    40,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    41,    48,     0,    50,     0,     0,    53,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,    50,     0,     0,    53,     0,     0,
       0,     0,    55
};

static const yytype_int16 yycheck[] =
{
       0,   290,    72,    92,   129,    84,   129,   104,    92,   107,
      84,   430,   306,   432,   308,   309,     1,   345,   127,   359,
     157,   143,   362,    23,   364,   150,    26,   150,   172,   357,
      92,   580,   141,   139,   124,    35,    84,     1,   357,    73,
      96,     0,   165,   105,   293,   138,   513,   140,     1,     1,
      72,   397,     1,   154,   145,   146,    70,   148,   151,   129,
     169,   403,   114,   405,    23,   174,   175,    26,   124,   365,
     160,   379,    72,    73,   382,    31,    35,     1,     1,   101,
     150,    28,   116,     1,    84,    72,     1,   121,    31,   342,
     539,   399,   122,   149,     1,   165,   241,   153,   243,    47,
     124,   153,   551,    52,   160,   358,    10,   129,   160,     1,
     363,    68,    16,    72,    73,   137,   116,   141,    25,    66,
     120,   121,   146,   156,    67,    84,     1,   127,   150,   129,
     236,   380,   385,    25,   148,   684,   158,    89,   123,   139,
       1,   141,   142,   165,   490,   109,   283,    65,    63,   398,
     150,   618,     1,   183,   154,   234,   109,   116,   158,    82,
     234,   120,   121,   233,   257,   165,   240,    91,   127,   169,
     129,     1,   591,    48,   174,   175,   250,   471,   472,   473,
     139,   475,   141,   235,   524,   525,   134,   135,   144,    68,
     518,   150,   317,   136,   317,   535,   275,    46,    59,   541,
     542,   144,     1,   259,   532,   533,   165,   330,   230,   231,
     169,   233,   104,   314,   533,   174,   175,   307,   280,   252,
      77,    51,   366,   519,   477,   521,   522,   275,   228,   229,
     230,   231,    39,   233,   234,   581,   236,    36,   360,   361,
     240,   241,   229,   243,   323,   664,   233,   317,     1,   347,
     250,   559,   308,   309,   352,   356,   393,   127,     1,    68,
     330,   350,   295,   516,    71,   611,   350,   520,   302,   228,
     229,   230,   231,   128,   233,   234,   128,   236,   531,   370,
     371,   240,   241,   392,   243,   134,   135,   393,   350,     1,
       0,   250,   325,    46,   132,   317,   329,   394,    47,   588,
       1,   641,   302,   152,    47,   599,   143,   601,   330,   399,
     147,   639,    28,   151,   314,     1,   395,   317,    30,   661,
      69,    15,     8,   379,    25,   149,    69,   383,   262,    23,
     330,    80,   134,   135,   128,   269,   270,    80,    39,    23,
      34,   142,    26,   302,   326,   345,    75,   426,   142,   331,
     152,    35,   426,   150,   151,   140,   356,   357,   317,   359,
     154,    17,   362,   460,   364,   124,   115,   105,   104,   118,
      71,   330,   115,    69,   396,   118,    97,   126,   134,   135,
     429,     6,   125,   126,    80,   144,   230,   231,   641,    57,
     149,   129,   392,   393,   137,     1,   155,   446,    92,   448,
     159,     7,     8,    20,   129,    99,   165,    24,   430,    72,
     432,   460,   468,     7,   145,   471,   472,   282,   156,   115,
     285,   286,   118,   108,     1,   128,   426,     1,     2,   116,
     126,   120,   228,   392,   393,     9,    10,   229,   587,    13,
     438,    15,    16,    17,    18,    19,    20,    21,   273,   160,
      24,    25,   281,    27,    28,    29,    30,    31,    32,    33,
      34,   586,    36,   586,    38,   148,   572,   426,    42,    43,
      47,    45,   289,   111,    48,    49,    50,    51,    52,   359,
      54,   359,    56,    57,    58,   131,   645,   133,    47,   135,
     644,   540,    69,   529,   530,   531,   532,    11,     1,   125,
      74,   580,   350,    80,   320,   264,   152,   266,   564,   156,
      69,   323,   639,   513,   252,   570,   586,   255,   518,   278,
     314,    80,   571,   523,   524,   525,   526,   527,   316,   498,
     128,   352,   532,   533,    18,   535,    20,   350,   115,   277,
      24,   118,   280,   117,    47,   119,    70,   121,   125,   126,
     523,   345,   658,   526,   527,   128,   115,   295,   132,   118,
     137,    80,   356,   357,   586,   359,    69,   126,   362,   591,
     364,   391,   572,    66,    68,   624,   347,    80,   137,   628,
     629,    -1,    -1,    -1,    -1,    -1,   586,   325,    -1,   163,
     164,   329,    -1,    -1,   353,    -1,    -1,    81,    -1,    -1,
      84,    -1,    -1,    -1,    88,   684,    -1,   345,    -1,    -1,
      -1,    -1,   115,   572,    98,   118,    -1,   376,   618,    -1,
     123,    -1,    -1,   126,    -1,   384,    55,   586,   202,    -1,
      -1,     0,    -1,   371,   137,    -1,    -1,   396,   397,   639,
      -1,   641,   664,    -1,   644,    -1,   130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    26,   658,    -1,
     682,    -1,    -1,    -1,    -1,   239,    35,    11,   242,    -1,
      -1,   245,   246,   247,    -1,    -1,    -1,    -1,    -1,    -1,
     254,    -1,   256,   112,   258,    -1,   260,   261,   117,    -1,
     119,   265,    -1,   267,   268,   124,    40,    -1,   272,   658,
      44,    -1,    -1,    47,    73,   279,    -1,   136,    -1,   138,
     284,    -1,   141,   287,   288,    -1,    -1,   146,    -1,   513,
      64,    -1,    -1,    -1,   518,    69,    -1,    -1,    72,   523,
     524,   525,   526,   527,    -1,    -1,    80,    -1,   532,   533,
      -1,   535,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      -1,   120,   121,    -1,    -1,    -1,    -1,    -1,   127,   333,
     334,   335,   336,   337,   338,   339,   340,    -1,    -1,     1,
      -1,    -1,   141,   142,    -1,   513,   120,    -1,    -1,    11,
      -1,    -1,    -1,    -1,   153,   154,    -1,    -1,    -1,    -1,
      -1,   160,    -1,    11,    -1,   533,    -1,    -1,    -1,    -1,
     169,    -1,   540,    -1,    -1,   174,   175,    -1,    40,    -1,
     154,    -1,    44,   387,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,   618,    -1,    44,    -1,    -1,    47,
      -1,    -1,    64,    -1,   408,   573,    -1,    69,    11,    -1,
      72,     1,    -1,    -1,    -1,   639,    64,   641,    80,    67,
     644,    69,    -1,    -1,    72,    -1,    -1,    -1,    -1,   228,
     229,    -1,    80,   142,    20,    -1,    -1,    40,    24,    -1,
      -1,    44,    90,    -1,    47,   154,    -1,   156,    -1,    -1,
     618,    -1,    -1,    -1,    -1,    -1,   624,    47,   120,   142,
     143,    64,   145,   146,    67,   148,    69,    -1,    -1,    72,
      60,   154,   120,    -1,    -1,   137,    -1,    80,    -1,    69,
     484,    -1,    68,    -1,   488,    -1,   134,   135,    -1,   137,
      80,    -1,   154,   497,    -1,    81,    -1,   501,    84,    -1,
      -1,    -1,    88,   302,    -1,    -1,   154,    -1,   512,    -1,
     678,   515,    98,    -1,    20,   314,    -1,   120,    24,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,   118,    -1,
      -1,   134,   135,    -1,   137,    -1,   126,    -1,    -1,    -1,
      -1,   545,    -1,   252,   130,   549,   345,   137,    -1,   553,
      -1,   154,   556,    -1,    -1,    -1,    84,   356,   357,    -1,
     359,    -1,   566,   362,    70,   364,    -1,    -1,    -1,    -1,
      -1,   575,    -1,   101,   578,    81,    -1,    55,    84,    -1,
     379,   585,    88,   382,    -1,    -1,   114,    -1,    -1,    -1,
      -1,    -1,    98,   392,    -1,    -1,   124,    -1,    -1,    -1,
     399,   129,    -1,    -1,    -1,   314,   289,    -1,   136,   137,
     138,   139,   140,    -1,    -1,    -1,   620,   145,    -1,    -1,
     329,    -1,   150,   151,   130,   153,    -1,    -1,    -1,   633,
     158,   314,   160,   342,   112,    -1,   345,   165,   166,   117,
      -1,   119,    -1,   647,    -1,    -1,   124,   356,   357,   358,
      -1,    -1,    -1,    -1,   363,    -1,   365,    -1,   136,   342,
     138,    -1,   345,   141,    -1,    -1,    -1,    -1,   146,    -1,
      -1,    -1,    -1,   356,   357,   358,   385,   360,   361,    -1,
     363,    -1,   365,    -1,    -1,    -1,    -1,   370,   371,    20,
      -1,    -1,    -1,    24,    -1,    -1,    -1,   142,   143,    -1,
      -1,    -1,   385,    -1,    -1,    -1,   234,   235,   236,   154,
      -1,    -1,   240,   241,   513,   243,    -1,    -1,    -1,   518,
      -1,    -1,   250,    11,   523,   524,   525,   526,   527,   257,
      -1,   142,    -1,   532,   533,    -1,   535,    -1,    -1,    -1,
      -1,    -1,    -1,   154,    -1,    -1,    -1,   275,    -1,    -1,
      81,    -1,    40,    84,    -1,    -1,    44,    88,    -1,    47,
     559,   142,    -1,    -1,    -1,    -1,   294,    98,   477,    -1,
      -1,    -1,    -1,   154,    -1,    -1,    64,    -1,    -1,   307,
      -1,    69,    -1,    -1,    72,    -1,    -1,    -1,    -1,   317,
      -1,    -1,    80,    -1,   477,   323,    -1,    -1,    -1,   130,
      -1,    -1,   330,    -1,   513,    -1,    -1,   516,    -1,   518,
     519,   520,   521,   522,    -1,    -1,    -1,    -1,    -1,   618,
      -1,    -1,   531,   532,   533,    -1,   354,   355,    -1,    -1,
     513,    -1,   120,   516,     1,   518,   519,   520,   521,   522,
     639,    -1,   641,    -1,    -1,   644,   134,   135,   531,   532,
     533,   379,    -1,    -1,   382,    -1,   384,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   573,   393,   154,   395,   396,   314,
      -1,   399,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    53,    -1,    55,    56,
      -1,    58,    -1,    -1,    61,    62,    -1,   342,   426,    -1,
     345,    -1,   430,   314,   432,    -1,    -1,    -1,    -1,   618,
     438,   356,   357,   358,    -1,   360,   361,    -1,   363,    -1,
     365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     639,    -1,   641,   314,   345,   618,   645,    -1,   105,   106,
     385,    -1,    -1,    -1,    -1,   356,   357,    -1,   359,    -1,
      -1,   362,    -1,   364,    -1,    -1,   639,   124,   641,    -1,
      -1,   342,   645,   491,   345,    -1,    -1,    -1,    -1,   136,
      -1,   138,    -1,    -1,   141,   356,   357,   358,   114,   146,
      -1,    -1,   363,    -1,   365,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,    -1,   139,   385,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,
     166,   559,   477,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    18,   572,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   580,    -1,    -1,    -1,    31,    -1,   586,    -1,
      -1,    -1,    -1,   591,    -1,    40,    -1,    -1,   513,    44,
      -1,   516,    47,   518,   519,   520,   521,   522,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   531,   532,   533,    64,
      -1,    -1,    67,    -1,    69,    -1,   477,    72,    -1,   235,
     236,    -1,   513,    -1,    -1,    80,    -1,   518,    -1,    -1,
      -1,    -1,   523,   524,   525,   526,   527,    -1,    -1,    -1,
      -1,   532,   533,    -1,   535,    -1,    -1,    -1,    -1,   104,
     658,    -1,   513,    -1,    -1,   516,   664,   518,   519,   520,
     521,   522,    -1,    -1,    -1,   120,    -1,    -1,    -1,   124,
     531,   532,   533,    -1,   682,    11,   684,    -1,   294,    -1,
      -1,    -1,   137,    19,    -1,    -1,   141,    -1,    -1,   144,
      -1,   307,    -1,   618,    -1,    -1,    -1,    -1,    -1,   154,
      -1,    -1,    -1,    -1,    40,    -1,    -1,   323,    44,    -1,
      -1,    47,    -1,    -1,   639,    -1,   641,    -1,    -1,    -1,
     645,    -1,    -1,    -1,    -1,    -1,    -1,   618,    64,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    72,    -1,   354,   355,
      -1,    -1,     1,    -1,    80,    -1,    -1,    -1,   639,    -1,
     641,    -1,    11,   644,    -1,    -1,    -1,   618,    -1,    -1,
      -1,    -1,    21,   379,    -1,    -1,   382,    26,   384,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,   639,    -1,
     641,    40,    -1,   399,   120,    44,    -1,    -1,    47,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    56,    -1,    58,
      -1,   137,    61,    62,    -1,    64,    -1,    -1,    67,    -1,
      69,    -1,    -1,    72,    73,    -1,    -1,    -1,   154,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    31,     1,
      -1,   120,    -1,    -1,    -1,   124,    -1,    40,    -1,    11,
      -1,    44,    -1,    -1,    47,   491,    18,   136,   137,   138,
     139,    -1,   141,    25,    -1,   144,    40,   146,    -1,    31,
      44,    64,    -1,    47,    -1,   154,    69,    39,    40,    72,
      -1,    -1,    44,    -1,    -1,    47,    -1,    80,    50,    -1,
      64,    53,    -1,    55,    56,    69,    58,    -1,    72,    61,
      62,    -1,    64,    -1,    -1,    67,    80,    69,    -1,    71,
      72,    -1,    11,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,   559,    -1,    -1,    -1,   120,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,   105,   106,    44,   120,    -1,    47,    -1,
      -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,
      -1,   154,   124,   137,    -1,    64,    -1,    -1,    67,    -1,
      69,    -1,    71,    72,   136,   137,   138,    -1,    -1,   141,
     154,    80,   144,    -1,   146,     6,     7,    -1,    -1,    -1,
      11,    -1,   154,    -1,    15,    -1,    -1,    18,    -1,    20,
      -1,    -1,    23,    24,    -1,    26,    -1,    -1,    -1,    -1,
      31,    -1,    33,    34,    -1,    -1,    -1,    -1,    39,    40,
      -1,   120,    -1,    44,    -1,   124,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    55,    56,    -1,    58,   137,    -1,
      61,    62,   141,    64,    -1,   144,    67,    68,    69,    70,
      71,    72,    73,    -1,    -1,   154,    -1,    -1,    -1,    80,
      81,    -1,    -1,    84,    -1,    -1,    -1,    88,    -1,    90,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,   120,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,   130,
     131,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,    -1,    -1,   144,    -1,   146,   147,   148,   149,     6,
       7,    -1,    -1,   154,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    50,    -1,    24,    53,    26,
      55,    56,    -1,    58,    31,    -1,    61,    62,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    44,    -1,    -1,
      47,    -1,    -1,    50,    -1,    -1,    53,    82,    55,    56,
      -1,    58,    -1,    -1,    61,    62,    -1,    64,    -1,    -1,
      67,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
     105,   106,    -1,    80,    81,    -1,    -1,    84,    -1,    -1,
      -1,    88,    -1,    90,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,
      -1,   136,    -1,   138,    -1,    -1,   141,    -1,    -1,    -1,
      -1,   146,    -1,   120,    -1,     1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,   130,   131,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,   141,    -1,    -1,   144,    -1,   146,
     147,   148,   149,     6,     7,    -1,    -1,   154,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    26,    -1,    -1,    -1,    -1,    31,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    44,    -1,    69,    47,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    56,    80,    58,    -1,    -1,    61,    62,
      -1,    64,    -1,    -1,    67,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    90,    -1,   115,
      -1,   117,   118,   119,    -1,    -1,   122,   123,   124,    -1,
     126,    -1,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,   138,    -1,    -1,   141,    -1,   120,    -1,    -1,
     146,   124,     6,     7,    -1,    -1,    -1,    11,   131,    -1,
      -1,   134,   135,   136,   137,   138,   139,   140,   141,    -1,
      47,   144,    26,   146,   147,   148,   149,    31,    55,    -1,
      -1,   154,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,
      44,    -1,    69,    47,    -1,    -1,    50,    -1,    -1,    53,
      -1,    55,    56,    80,    58,    -1,    -1,    61,    62,    -1,
      64,    -1,    -1,    67,    -1,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    90,    -1,   115,    -1,
     117,   118,   119,    -1,    -1,   122,    -1,   124,    -1,   126,
      -1,   105,   106,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,    -1,   141,    -1,   120,    -1,    -1,   146,
     124,     6,     7,    -1,    -1,   152,    11,   131,    -1,    -1,
      -1,    -1,   136,   137,   138,   139,   140,   141,    -1,    -1,
     144,    26,   146,   147,   148,   149,    31,    -1,    -1,    -1,
     154,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    44,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    53,    -1,
      55,    56,    -1,    58,    -1,    -1,    61,    62,    -1,    64,
      -1,    -1,    67,    -1,    69,    -1,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    26,    -1,    -1,   124,
      -1,    31,    -1,    -1,    -1,    -1,   131,    -1,     1,    -1,
      -1,   136,   137,   138,   139,    -1,   141,    -1,    -1,   144,
      50,   146,   147,    53,    -1,    55,    56,    -1,    58,   154,
      -1,    61,    62,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    56,    94,    58,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,   105,   106,    -1,    -1,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,   136,    -1,   138,   139,
      -1,   141,   105,   106,   144,    69,   146,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,   138,   139,    -1,   141,    -1,
      -1,   144,    -1,   146,    -1,    -1,    -1,    -1,   112,   113,
      11,   115,    -1,   117,   118,   119,    -1,    -1,   122,    -1,
     124,    -1,   126,    47,    -1,    26,    -1,    -1,    -1,    -1,
      31,    55,   136,   137,   138,    -1,    -1,   141,    -1,    40,
      -1,    -1,   146,    44,    -1,    69,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    55,    56,    80,    58,    -1,    -1,
      61,    62,    -1,    64,    -1,    -1,    67,    -1,    69,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,   112,    -1,
      -1,   115,    -1,   117,   118,   119,    -1,    -1,   122,    -1,
     124,    -1,   126,    -1,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,   136,   137,   138,    -1,    -1,   141,    -1,   120,
      -1,    -1,   146,   124,    -1,    -1,    -1,    -1,    -1,    11,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,    21,
     141,    -1,    -1,   144,    26,   146,    -1,    -1,    -1,    31,
      -1,    -1,    -1,   154,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    56,    -1,    58,    -1,    -1,    61,
      62,    -1,    64,    -1,    -1,    67,    -1,    69,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,   120,    -1,
      -1,    -1,   124,    -1,    -1,    47,    -1,    26,    -1,    -1,
      -1,    -1,    31,    55,   136,   137,   138,   139,    -1,   141,
      -1,    40,   144,    -1,   146,    44,    -1,    69,    47,    -1,
      -1,    50,   154,    -1,    53,    -1,    55,    56,    80,    58,
      -1,    -1,    61,    62,    -1,    64,    -1,    -1,    67,    -1,
      69,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    90,    -1,   115,    -1,   117,   118,   119,    -1,    -1,
     122,    -1,   124,    -1,   126,    -1,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,   136,   137,   138,    -1,    -1,   141,
      -1,   120,    -1,    -1,   146,   124,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    -1,    -1,    -1,   136,   137,   138,
     139,    21,   141,    -1,    -1,   144,    26,   146,    -1,    -1,
      -1,    31,    -1,    -1,    -1,   154,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,
      50,    -1,    -1,    53,    11,    55,    56,    -1,    58,    -1,
      -1,    61,    62,    -1,    64,    -1,    -1,    67,    -1,    69,
      -1,    -1,    72,    73,    31,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,    64,    -1,    -1,
      67,    -1,    69,    -1,    11,    72,    -1,    -1,    -1,    -1,
     120,    -1,    -1,    80,   124,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    31,    -1,   136,   137,   138,   139,
      -1,   141,    -1,    40,   144,    -1,   146,    44,    -1,    -1,
      47,    -1,    -1,    50,   154,    -1,    53,    -1,    55,    56,
      -1,    58,    -1,   120,    61,    62,    -1,    64,    -1,    -1,
      67,    -1,    69,    -1,    -1,    72,    73,    -1,    -1,   136,
     137,    -1,    -1,    80,    -1,    -1,    -1,   144,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,   120,    18,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,   136,
     137,   138,   139,    -1,   141,    39,    40,   144,    -1,   146,
      44,    -1,    -1,    47,    -1,    -1,    50,   154,    -1,    53,
      -1,    55,    56,    11,    58,    -1,    -1,    61,    62,    -1,
      64,    -1,    -1,    67,    -1,    69,    -1,    71,    72,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    50,    -1,    -1,    53,    -1,    55,    56,    -1,
      58,   105,   106,    61,    62,    -1,    64,    -1,    -1,    67,
      -1,    69,    -1,    71,    72,    -1,   120,    -1,    -1,    -1,
     124,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    -1,   137,   138,    -1,    -1,   141,    -1,    -1,
     144,    -1,   146,    -1,    -1,    -1,    -1,   105,   106,    -1,
     154,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,   120,    -1,    44,    -1,   124,    47,    -1,    -1,
      50,    -1,    -1,    53,    -1,    55,    56,    11,    58,   137,
     138,    61,    62,   141,    64,    -1,   144,    67,   146,    69,
      -1,    -1,    72,    -1,    -1,    -1,   154,    31,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    -1,    11,    47,    -1,    -1,    50,    -1,    -1,    53,
      -1,    55,    56,    -1,    58,   105,   106,    61,    62,    -1,
      64,    -1,    31,    67,    -1,    69,    -1,    -1,    72,    -1,
     120,    40,    -1,    -1,   124,    44,    80,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    11,   136,   137,   138,    -1,
      -1,   141,    18,    -1,   144,    64,   146,    -1,    67,    -1,
      69,   105,   106,    72,   154,    31,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    40,    -1,   120,    -1,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,   137,   138,   104,    -1,    -1,    64,    -1,
     144,    67,   146,    69,    -1,    -1,    72,    -1,    31,    -1,
     154,   120,    -1,    -1,    80,   124,    -1,    40,    -1,    -1,
      -1,    44,    -1,    -1,    47,    -1,    26,    -1,   137,    -1,
      -1,    31,   141,    -1,    -1,   144,    -1,    -1,   104,    -1,
      -1,    64,    -1,    -1,    67,   154,    69,    -1,    -1,    72,
      50,    -1,    -1,    53,   120,    55,    56,    80,    58,    -1,
      -1,    61,    62,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,    -1,    73,    50,    -1,    -1,    53,   144,    55,
      56,    -1,    58,    -1,    -1,    61,    62,    -1,   154,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,   120,    -1,    -1,
      -1,    47,    -1,    -1,    -1,   105,   106,    -1,    -1,    55,
      -1,    -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,
      -1,   144,    -1,    69,   124,    -1,    -1,    -1,    -1,   105,
     106,   154,    -1,    -1,    80,    -1,   136,    -1,   138,   139,
      -1,   141,    -1,    -1,   144,    -1,   146,    50,   124,    -1,
      53,    -1,    55,    56,    -1,    58,    -1,    -1,    61,    62,
     136,    -1,   138,    -1,    -1,   141,   112,    -1,    -1,   115,
     146,   117,   118,   119,    -1,    -1,    50,    -1,   124,    53,
     126,    55,    56,    -1,    58,    -1,    -1,    61,    62,    -1,
     136,   137,   138,    -1,    -1,   141,    -1,    -1,    -1,    -1,
     146,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,   136,    -1,   138,    -1,    -1,   141,    -1,
      -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,    -1,   138,    -1,    -1,   141,    -1,    -1,
      -1,    -1,   146
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     6,     7,    11,    15,    18,    20,    23,    24,    26,
      31,    33,    34,    39,    40,    44,    47,    50,    53,    55,
      56,    58,    61,    62,    64,    67,    68,    69,    70,    71,
      72,    73,    80,    81,    84,    88,    90,    92,    98,    99,
     105,   106,   120,   124,   130,   131,   134,   135,   136,   137,
     138,   139,   140,   141,   144,   146,   147,   148,   149,   154,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   176,
     177,   178,   179,   180,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   242,   243,   244,
     245,   251,   252,   253,   254,   255,   256,   259,   261,   264,
     265,   266,   287,   292,   294,   295,   297,   298,   299,   300,
     301,   302,   303,   305,   306,   307,   308,   310,   313,   315,
     316,   317,   318,   321,   322,   323,   324,   325,   326,   327,
     328,   331,   333,   334,   335,   336,   340,   169,   169,    68,
      68,   169,   169,   236,   169,    77,   169,   169,   169,   169,
     169,   169,   169,   127,   157,   169,   169,   157,   169,   169,
     234,   169,    68,   169,   169,   169,   169,   169,   157,   169,
      68,   169,   128,   128,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,     0,    28,   234,   335,
     336,   327,   163,   168,   182,   214,   264,   158,   169,   143,
     330,   334,   142,   329,     1,    21,    94,   107,   176,   183,
     269,   273,   308,   309,    75,   311,    17,   312,    97,   314,
     133,   152,   241,   318,   320,   322,   339,   132,   151,   319,
     338,   199,   104,   304,   181,   182,   273,   308,   323,    19,
     205,   262,   242,   339,   150,   337,   338,    10,    16,   263,
     296,   212,   195,   201,   264,   308,   158,    18,   169,   169,
     160,   158,   169,   237,     1,    25,   188,   199,   201,   230,
     274,    24,   240,   159,   287,   328,   333,   168,   174,   175,
     242,   169,   201,   182,   201,   308,   185,   180,   201,   308,
     323,   185,   159,   110,   112,   115,   117,   118,   119,   122,
     126,   214,   215,   216,   217,   221,   222,   223,   224,   225,
     226,   227,   228,   246,   247,   248,   249,   250,   257,   260,
     297,   299,   300,   310,   323,   324,   333,   224,   188,   211,
     299,   308,   211,   208,   211,   188,   199,   175,   185,   195,
     197,   198,   199,   201,   214,   215,     1,    51,   188,   268,
     202,   242,   266,   310,   204,   182,   323,   188,   197,   199,
     230,   169,   169,   175,   188,   201,   159,     1,   109,   278,
     278,   159,   159,    57,     1,    59,   267,   169,     1,    89,
     285,   129,   161,   163,   167,   165,   182,   165,   169,   176,
     178,   169,   178,   169,   169,   169,   176,   169,   242,   169,
     185,   169,   199,   169,   169,   191,   188,   169,   188,   169,
     169,   191,   191,   169,   200,   273,   188,   169,   203,   206,
     204,   169,   206,   206,   169,   169,   210,   207,   268,   158,
     274,   201,   230,   199,   274,   199,   274,   215,     1,   109,
     279,   279,   175,     1,    48,   271,   245,     1,    30,   275,
     201,   269,     1,    82,   276,   213,     1,     8,   213,   284,
       1,    91,   272,   169,   169,   169,   169,   169,   169,   169,
     169,     1,   125,   221,   288,   108,   258,   217,   218,   242,
     339,   337,   338,   241,   320,   339,   319,   338,   188,   201,
     201,   215,   218,   221,   219,   220,   225,   224,   224,   225,
     221,   225,   222,   278,     1,    65,   282,   211,     1,    63,
     280,   188,     1,    52,   286,     1,    36,   281,   198,   199,
     268,   198,   199,   188,   201,     1,    60,   289,   169,   331,
     159,   180,   264,   308,     1,    46,   283,     1,    74,   277,
     182,   188,   276,   268,   230,   145,   332,   332,   332,   169,
     128,   283,   181,   181,   184,   283,   283,   283,   199,   199,
     274,   199,   274,   274,   274,     1,   125,   291,   169,   169,
     276,   201,   169,   284,   169,   169,   216,   169,   221,     1,
     113,   217,   270,   222,   221,   222,   222,   227,   225,   225,
     227,   227,     1,   123,   290,   290,   290,   290,   290,   218,
     219,   220,   280,   283,   332,   332,   169,   116,   293,   169,
     280,   169,   169,   198,   199,   169,   272,   283,   310,   169,
     169,   277,   276,   169,   175,   192,   207,   181,   274,   274,
     276,   216,   169,   283,   283,   283,   169,   270,   221,   228,
     223,   169,   332,   181,   182,   277
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   155,   156,   157,   157,   157,   157,   157,   157,   158,
     158,   159,   159,   159,   159,   159,   160,   160,   161,   161,
     162,   162,   162,   162,   162,   163,   163,   164,   164,   164,
     165,   165,   165,   166,   166,   166,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   168,   169,   169,   170,   170,
     170,   170,   170,   171,   171,   171,   171,   171,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   173,   174,
     174,   174,   175,   175,   176,   176,   177,   177,   178,   178,
     179,   179,   180,   180,   180,   181,   181,   182,   182,   183,
     183,   184,   184,   185,   185,   185,   185,   186,   186,   187,
     187,   188,   188,   189,   189,   189,   190,   190,   191,   191,
     191,   192,   192,   193,   193,   193,   193,   194,   194,   195,
     195,   195,   195,   195,   195,   195,   195,   196,   196,   197,
     197,   197,   197,   198,   198,   198,   198,   198,   199,   199,
     200,   200,   201,   201,   202,   202,   203,   203,   204,   204,
     205,   205,   205,   206,   206,   206,   207,   207,   207,   207,
     208,   209,   209,   210,   210,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   212,   212,   213,   213,   214,
     214,   215,   215,   215,   216,   216,   217,   217,   217,   218,
     218,   219,   220,   220,   221,   221,   221,   222,   222,   222,
     222,   223,   223,   224,   224,   224,   224,   224,   224,   225,
     225,   225,   226,   226,   227,   227,   227,   228,   228,   228,
     228,   228,   228,   228,   229,   229,   229,   230,   230,   231,
     231,   232,   232,   233,   233,   233,   233,   234,   234,   234,
     235,   235,   236,   236,   237,   237,   237,   237,   237,   237,
     237,   238,   238,   238,   239,   239,   240,   240,   241,   241,
     241,   242,   242,   242,   242,   243,   243,   244,   244,   245,
     245,   245,   245,   246,   246,   247,   247,   248,   248,   249,
     249,   250,   250,   251,   251,   252,   252,   252,   252,   253,
     254,   255,   256,   256,   257,   257,   258,   258,   259,   259,
     260,   260,   261,   261,   262,   262,   263,   263,   264,   264,
     265,   265,   266,   266,   267,   267,   268,   268,   268,   269,
     269,   270,   270,   270,   271,   271,   271,   272,   272,   272,
     273,   273,   273,   274,   274,   275,   275,   275,   276,   276,
     277,   277,   277,   278,   278,   278,   279,   279,   280,   280,
     280,   281,   281,   281,   282,   282,   282,   283,   283,   283,
     284,   284,   284,   285,   285,   286,   286,   286,   287,   287,
     288,   288,   288,   289,   289,   289,   290,   290,   290,   291,
     291,   292,   292,   293,   293,   294,   294,   295,   295,   296,
     296,   297,   297,   298,   298,   299,   299,   300,   300,   300,
     301,   301,   302,   302,   303,   303,   303,   304,   304,   305,
     305,   306,   306,   307,   307,   308,   308,   309,   309,   310,
     310,   311,   311,   312,   312,   313,   313,   314,   314,   315,
     315,   316,   316,   317,   318,   318,   319,   319,   320,   320,
     321,   322,   323,   323,   324,   324,   325,   325,   326,   326,
     327,   327,   328,   329,   329,   330,   330,   331,   331,   331,
     332,   332,   333,   334,   334,   335,   335,   336,   336,   337,
     337,   338,   338,   339,   339,   340
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     2,     3,     2,     2,
       1,     2,     2,     2,     2,     1,     1,     0,     1,     3,
       1,     1,     3,     3,     2,     1,     2,     1,     3,     2,
       1,     3,     2,     1,     3,     4,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     2,     1,     2,     1,     1,
       1,     1,     1,     3,     3,     4,     5,     4,     3,     4,
       4,     5,     3,     4,     4,     5,     3,     2,     3,     1,
       3,     2,     1,     2,     1,     5,     1,     4,     1,     4,
       1,     2,     5,     4,     2,     2,     1,     1,     2,     1,
       4,     1,     3,     1,     1,     1,     1,     2,     2,     3,
       7,     1,     3,     1,     4,     4,     1,     3,     1,     3,
       3,     1,     4,     1,     2,     3,     4,     1,     2,     3,
       4,     1,     2,     3,     3,     1,     1,     3,     3,     1,
       2,     2,     3,     1,     2,     2,     3,     2,     1,     3,
       3,     3,     2,     1,     1,     2,     1,     3,     1,     2,
       1,     3,     4,     1,     3,     3,     1,     3,     1,     2,
       4,     1,     3,     1,     2,     1,     3,     2,     3,     2,
       3,     4,     2,     2,     3,     3,     4,     2,     3,     2,
       3,     1,     3,     2,     1,     4,     1,     3,     4,     1,
       2,     3,     1,     1,     1,     3,     4,     1,     4,     3,
       3,     1,     3,     1,     2,     2,     2,     3,     3,     1,
       4,     4,     1,     3,     1,     3,     3,     1,     2,     3,
       3,     3,     4,     3,     1,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     2,     1,     2,     2,
       1,     2,     1,     2,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     2,     1,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     3,     1,
       2,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     1,     1,     3,     4,
       2,     3,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     2,     1,     1,
       2,     1,     2,     1,     1,     2,     1,     1,     2,     1,
       1,     2,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     2,     1,     1,     2,     1,     1,     1,     1,     2,
       1,     1,     2,     1,     1,     2,     1,     1,     2,     1,
       1,     2,     1,     1,     1,     1,     2,     1,     1,     2,
       1,     2,     1,     1,     2,     1,     1,     2,     1,     1,
       1,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     2,     1,     2,     3,     4,     3,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     3,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     1,     2,     1,     2,     1,     2,     3,
       1,     2,     1,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const yytype_int8 yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const yytype_int8 yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const yytype_int8 yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0
};



YYSTYPE yylval;

int yynerrs;
int yychar;

enum { YYENOMEM = -2 };

typedef enum { yyok, yyaccept, yyabort, yyerr, yynomem } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif

/** State numbers. */
typedef int yy_state_t;

/** Rule numbers. */
typedef int yyRuleNum;

/** Item references. */
typedef short yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState
{
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yyval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yy_state_t yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  YYPTRDIFF_T yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  nonterminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yyval;
  } yysemantics;
};

struct yyGLRStateSet
{
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  YYPTRDIFF_T yysize;
  YYPTRDIFF_T yycapacity;
};

struct yySemanticOption
{
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  YYPTRDIFF_T yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

_Noreturn static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

_Noreturn static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

/** Accessing symbol of state YYSTATE.  */
static inline yysymbol_kind_t
yy_accessing_symbol (yy_state_t yystate)
{
  return YY_CAST (yysymbol_kind_t, yystos[yystate]);
}

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "A_501", "BAI_502",
  "BAhE_503", "BE_504", "BEI_505", "BEhO_506", "BIhI_507", "BO_508",
  "BRIVLA_509", "BU_511", "BY_513", "CAhA_514", "CAI_515", "CEI_516",
  "CEhE_517", "CMENE_518", "CO_519", "COI_520", "CU_521", "CUhE_522",
  "DAhO_524", "DOI_525", "DOhU_526", "FA_527", "FAhA_528", "FAhO_529",
  "FEhE_530", "FEhU_531", "FIhO_532", "FOI_533", "FUhE_535", "FUhO_536",
  "GA_537", "GEhU_538", "GI_539", "GIhA_541", "GOI_542", "GOhA_543",
  "GUhA_544", "I_545", "JA_546", "JAI_547", "JOI_548", "KEhE_550",
  "KE_551", "KEI_552", "KI_554", "KOhA_555", "KU_556", "KUhO_557",
  "LA_558", "LAU_559", "LAhE_561", "LE_562", "LEhU_565", "LI_566",
  "LIhU_567", "LOhO_568", "LOhU_569", "LU_571", "LUhU_573", "ME_574",
  "MEhU_575", "MOhI_577", "NA_578", "NAI_581", "NAhE_583", "NIhO_584",
  "NOI_585", "NU_586", "NUhI_587", "NUhU_588", "PEhE_591", "PU_592",
  "RAhO_593", "ROI_594", "SA_595", "SE_596", "SEI_597", "SEhU_598",
  "SI_601", "SOI_602", "SU_603", "TAhE_604", "TEI_605", "TO_606",
  "TOI_607", "TUhE_610", "TUhU_611", "UI_612", "VA_613", "VAU_614",
  "VEhA_615", "VIhA_616", "VUhO_617", "XI_618", "Y_619", "ZAhO_621",
  "ZEhA_622", "ZEI_623", "ZI_624", "ZIhE_625", "ZO_626", "ZOI_627",
  "ZOhU_628", "BIhE_650", "BOI_651", "FUhA_655", "GAhO_656", "JOhI_657",
  "KUhE_658", "MAI_661", "MAhO_662", "MOI_663", "MOhE_664", "NAhU_665",
  "NIhE_666", "NUhA_667", "PA_672", "PEhO_673", "TEhU_675", "VEI_677",
  "VEhO_678", "VUhU_679", "any_words_697", "any_word_698", "anything_699",
  "lexer_A_905", "lexer_B_910", "lexer_C_915", "lexer_D_916",
  "lexer_E_925", "lexer_F_930", "lexer_G_935", "lexer_H_940",
  "lexer_I_945", "lexer_J_950", "lexer_K_955", "lexer_L_960",
  "lexer_M_965", "lexer_N_966", "lexer_O_970", "lexer_P_980",
  "lexer_Q_985", "lexer_R_990", "lexer_S_995", "lexer_T_1000",
  "lexer_U_1005", "lexer_V_1010", "lexer_W_1015", "lexer_X_1020",
  "lexer_Y_1025", "$accept", "toplevel", "text_0", "text_A_1", "text_B_2",
  "text_C_3", "paragraphs_4", "paragraph_10", "statement_11",
  "statement_A_12", "statement_B_13", "statement_C_14", "fragment_20",
  "prenex_30", "free_modifier_32", "free_modifier_A_33",
  "discursive_bridi_34", "vocative_35", "parenthetical_36", "sentence_40",
  "subsentence_41", "bridi_tail_50", "bridi_tail_A_51", "bridi_tail_B_52",
  "bridi_tail_C_53", "gek_sentence_54", "tail_terms_71", "terms_80",
  "terms_A_81", "terms_B_82", "term_83", "modifier_84", "term_set_85",
  "sumti_90", "sumti_A_91", "sumti_B_92", "sumti_C_93", "sumti_D_94",
  "sumti_E_95", "sumti_F_96", "sumti_G_97", "description_110",
  "sumti_tail_111", "sumti_tail_A_112", "relative_clauses_121",
  "relative_clause_122", "selbri_130", "selbri_A_131", "selbri_B_132",
  "selbri_C_133", "selbri_D_134", "selbri_E_135", "selbri_F_136",
  "GUhEK_selbri_137", "tanru_unit_150", "tanru_unit_A_151",
  "tanru_unit_B_152", "linkargs_160", "links_161", "quantifier_300",
  "MEX_310", "MEX_A_311", "MEX_B_312", "MEX_C_313", "rp_expression_330",
  "rp_operand_332", "operator_370", "operator_A_371", "operator_B_372",
  "MEX_operator_374", "operand_381", "operand_A_382", "operand_B_383",
  "operand_C_385", "anaphora_400", "cmene_404", "cmene_A_405",
  "bridi_valsi_407", "bridi_valsi_A_408", "para_mark_410",
  "indicators_411", "indicators_A_412", "indicator_413", "DOI_415",
  "COI_416", "COI_A_417", "JOIK_EK_421", "JOIK_JEK_422", "XI_424",
  "NU_425", "NU_A_426", "MOhE_427", "NIhE_428", "NAhU_429", "MAhO_430",
  "JOhI_431", "quote_arg_432", "quote_arg_A_433", "ZOI_quote_434",
  "ZO_quote_435", "LOhU_quote_436", "FIhO_437", "PEhO_438", "BIhE_439",
  "SEI_440", "FUhA_441", "BEI_442", "CO_443", "CEI_444", "NA_445",
  "BE_446", "TUhE_447", "LIhU_gap_448", "gap_450", "front_gap_451",
  "MEX_gap_452", "KEI_gap_453", "TUhU_gap_454", "VAU_gap_456",
  "DOhU_gap_457", "FEhU_gap_458", "SEhU_gap_459", "NUhU_gap_460",
  "BOI_gap_461", "sub_gap_462", "LUhU_gap_463", "GEhU_gap_464",
  "MEhU_gap_465", "KEhE_gap_466", "BEhO_gap_467", "TOI_gap_468",
  "KUhO_gap_469", "left_bracket_470", "right_bracket_gap_471",
  "LOhO_gap_472", "TEhU_gap_473", "right_br_no_free_474", "NUhA_475",
  "MOI_476", "ME_477", "JAI_478", "BO_479", "SE_480", "FA_481", "NAhE_482",
  "qualifier_483", "NOI_484", "GOI_485", "subscript_486", "ZIhE_487",
  "LE_488", "LI_489", "mod_head_490", "tag_491", "ZOhU_492", "KE_493",
  "PEhE_494", "CEhE_495", "NUhI_496", "VUhO_497", "SOI_498", "LA_499",
  "utterance_ordinal_801", "EK_802", "EK_BO_803", "EK_KE_804", "JEK_805",
  "JOIK_806", "GEK_807", "GUhEK_808", "NAhE_BO_809", "NA_KU_810",
  "I_BO_811", "number_812", "GIhEK_BO_813", "GIhEK_KE_814",
  "tense_modal_815", "GIK_816", "lerfu_string_817", "GIhEK_818", "I_819",
  "I_JEK_820", "JEK_BO_821", "JOIK_BO_822", "JOIK_KE_823", "PA_MOI_824", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yysymbol_kind_t
yylhsNonterm (yyRuleNum yyrule)
{
  return YY_CAST (yysymbol_kind_t, yyr1[yyrule]);
}

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YY_FPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_FPRINTF_

# define YY_FPRINTF_(Args)                      \
  do {                                          \
    YYFPRINTF Args;                             \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)

# define YY_DPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_DPRINTF_

# define YY_DPRINTF_(Args)                      \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)





/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YY_FPRINTF ((stderr, "%s ", Title));                            \
        yy_symbol_print (stderr, Kind, Value);        \
        YY_FPRINTF ((stderr, "\n"));                                    \
      }                                                                 \
  } while (0)

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule);

# define YY_REDUCE_PRINT(Args)          \
  do {                                  \
    if (yydebug)                        \
      yy_reduce_print Args;             \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

static void yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YY_DPRINTF(Args) do {} while (yyfalse)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_REDUCE_PRINT(Args)

#endif /* !YYDEBUG */



/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yyval = s->yysemantics.yyval;
      else
        /* The effect of using yyval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}


/** If yychar is empty, fetch the next token.  */
static inline yysymbol_kind_t
yygetToken (int *yycharp)
{
  yysymbol_kind_t yytoken;
  if (*yycharp == YYEMPTY)
    {
      YY_DPRINTF ((stderr, "Reading a token\n"));
      *yycharp = yylex ();
    }
  if (*yycharp <= YYEOF)
    {
      *yycharp = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YY_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (*yycharp);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }
  return yytoken;
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT, yynomem for YYNOMEM.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyrule, int yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp, YYPTRDIFF_T yyk,
              YYSTYPE* yyvalp)
{
  const yybool yynormal YY_ATTRIBUTE_UNUSED = yystackp->yysplitPoint == YY_NULLPTR;
  int yylow = 1;
  YY_USE (yyvalp);
  YY_USE (yyk);
  YY_USE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYNOMEM
# define YYNOMEM return yynomem
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, (N), yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yyval;
  /* If yyk == -1, we are running a deferred action on a temporary
     stack.  In that case, YY_REDUCE_PRINT must not play with YYFILL,
     so pretend the stack is "normal". */
  YY_REDUCE_PRINT ((yynormal || yyk == -1, yyvsp, yyk, yyrule));
  switch (yyrule)
    {
  case 2: /* toplevel: text_0 FAhO_529  */
#line 376 "grammar/grammar.y"
                           { (*yyvalp) = toplevel(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval); }
#line 3090 "src/grammar.c"
    break;

  case 3: /* text_0: text_A_1  */
#line 379 "grammar/grammar.y"
                           { (*yyvalp) = node1(10000, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3096 "src/grammar.c"
    break;

  case 4: /* text_0: indicators_411 text_A_1  */
#line 381 "grammar/grammar.y"
                           { (*yyvalp) = node2(10000, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3102 "src/grammar.c"
    break;

  case 5: /* text_0: free_modifier_32 text_A_1  */
#line 383 "grammar/grammar.y"
                           { (*yyvalp) = node2(10000, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3108 "src/grammar.c"
    break;

  case 6: /* text_0: cmene_404 text_A_1  */
#line 385 "grammar/grammar.y"
                           { (*yyvalp) = node2(10000, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3114 "src/grammar.c"
    break;

  case 7: /* text_0: indicators_411 free_modifier_32 text_A_1  */
#line 387 "grammar/grammar.y"
                           { (*yyvalp) = node3(10000, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3120 "src/grammar.c"
    break;

  case 8: /* text_0: NAI_581 text_0  */
#line 389 "grammar/grammar.y"
                           { (*yyvalp) = node2(10000, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3126 "src/grammar.c"
    break;

  case 9: /* text_A_1: JOIK_JEK_422 text_B_2  */
#line 392 "grammar/grammar.y"
                           { (*yyvalp) = node2(1, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3132 "src/grammar.c"
    break;

  case 10: /* text_A_1: text_B_2  */
#line 394 "grammar/grammar.y"
                           { (*yyvalp) = node1(1, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3138 "src/grammar.c"
    break;

  case 11: /* text_B_2: I_819 text_B_2  */
#line 397 "grammar/grammar.y"
                           { (*yyvalp) = node2(2, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3144 "src/grammar.c"
    break;

  case 12: /* text_B_2: I_JEK_820 text_B_2  */
#line 399 "grammar/grammar.y"
                           { (*yyvalp) = node2(2, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3150 "src/grammar.c"
    break;

  case 13: /* text_B_2: I_BO_811 text_B_2  */
#line 401 "grammar/grammar.y"
                           { (*yyvalp) = node2(2, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3156 "src/grammar.c"
    break;

  case 14: /* text_B_2: para_mark_410 text_C_3  */
#line 403 "grammar/grammar.y"
                           { (*yyvalp) = node2(2, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3162 "src/grammar.c"
    break;

  case 15: /* text_B_2: text_C_3  */
#line 405 "grammar/grammar.y"
                           { (*yyvalp) = node1(2, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3168 "src/grammar.c"
    break;

  case 16: /* text_C_3: paragraphs_4  */
#line 408 "grammar/grammar.y"
                           { (*yyvalp) = node1(3, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3174 "src/grammar.c"
    break;

  case 17: /* text_C_3: %empty  */
#line 410 "grammar/grammar.y"
                           { (*yyvalp) = elidable(FAhO_529); }
#line 3180 "src/grammar.c"
    break;

  case 18: /* paragraphs_4: paragraph_10  */
#line 413 "grammar/grammar.y"
                           { (*yyvalp) = node1(4, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3186 "src/grammar.c"
    break;

  case 19: /* paragraphs_4: paragraph_10 para_mark_410 paragraphs_4  */
#line 415 "grammar/grammar.y"
                           { (*yyvalp) = node3(4, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3192 "src/grammar.c"
    break;

  case 20: /* paragraph_10: statement_11  */
#line 418 "grammar/grammar.y"
                           { (*yyvalp) = node1(10, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3198 "src/grammar.c"
    break;

  case 21: /* paragraph_10: fragment_20  */
#line 420 "grammar/grammar.y"
                           { (*yyvalp) = node1(10, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3204 "src/grammar.c"
    break;

  case 22: /* paragraph_10: paragraph_10 I_819 statement_11  */
#line 422 "grammar/grammar.y"
                           { (*yyvalp) = node3(10, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3210 "src/grammar.c"
    break;

  case 23: /* paragraph_10: paragraph_10 I_819 fragment_20  */
#line 424 "grammar/grammar.y"
                           { (*yyvalp) = node3(10, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3216 "src/grammar.c"
    break;

  case 24: /* paragraph_10: paragraph_10 I_819  */
#line 426 "grammar/grammar.y"
                           { (*yyvalp) = node2(10, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3222 "src/grammar.c"
    break;

  case 25: /* statement_11: statement_A_12  */
#line 429 "grammar/grammar.y"
                           { (*yyvalp) = node1(11, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3228 "src/grammar.c"
    break;

  case 26: /* statement_11: prenex_30 statement_11  */
#line 431 "grammar/grammar.y"
                           { (*yyvalp) = node2(11, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3234 "src/grammar.c"
    break;

  case 27: /* statement_A_12: statement_B_13  */
#line 434 "grammar/grammar.y"
                           { (*yyvalp) = node1(12, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3240 "src/grammar.c"
    break;

  case 28: /* statement_A_12: statement_A_12 I_JEK_820 statement_B_13  */
#line 436 "grammar/grammar.y"
                           { (*yyvalp) = node3(12, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3246 "src/grammar.c"
    break;

  case 29: /* statement_A_12: statement_A_12 I_JEK_820  */
#line 438 "grammar/grammar.y"
                           { (*yyvalp) = node2(12, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3252 "src/grammar.c"
    break;

  case 30: /* statement_B_13: statement_C_14  */
#line 441 "grammar/grammar.y"
                           { (*yyvalp) = node1(13, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3258 "src/grammar.c"
    break;

  case 31: /* statement_B_13: statement_C_14 I_BO_811 statement_B_13  */
#line 443 "grammar/grammar.y"
                           { (*yyvalp) = node3(13, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3264 "src/grammar.c"
    break;

  case 32: /* statement_B_13: statement_C_14 I_BO_811  */
#line 445 "grammar/grammar.y"
                           { (*yyvalp) = node2(13, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3270 "src/grammar.c"
    break;

  case 33: /* statement_C_14: sentence_40  */
#line 448 "grammar/grammar.y"
                           { (*yyvalp) = node1(14, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3276 "src/grammar.c"
    break;

  case 34: /* statement_C_14: TUhE_447 text_B_2 TUhU_gap_454  */
#line 450 "grammar/grammar.y"
                           { (*yyvalp) = node3(14, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3282 "src/grammar.c"
    break;

  case 35: /* statement_C_14: tag_491 TUhE_447 text_B_2 TUhU_gap_454  */
#line 452 "grammar/grammar.y"
                           { (*yyvalp) = node4(14, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3288 "src/grammar.c"
    break;

  case 36: /* fragment_20: EK_802  */
#line 455 "grammar/grammar.y"
                           { (*yyvalp) = node1(20, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3294 "src/grammar.c"
    break;

  case 37: /* fragment_20: NA_445  */
#line 457 "grammar/grammar.y"
                           { (*yyvalp) = node1(20, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3300 "src/grammar.c"
    break;

  case 38: /* fragment_20: GIhEK_818  */
#line 459 "grammar/grammar.y"
                           { (*yyvalp) = node1(20, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3306 "src/grammar.c"
    break;

  case 39: /* fragment_20: quantifier_300  */
#line 461 "grammar/grammar.y"
                           { (*yyvalp) = node1(20, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3312 "src/grammar.c"
    break;

  case 40: /* fragment_20: terms_80 VAU_gap_456  */
#line 463 "grammar/grammar.y"
                           { (*yyvalp) = node2(20, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3318 "src/grammar.c"
    break;

  case 41: /* fragment_20: relative_clauses_121  */
#line 465 "grammar/grammar.y"
                           { (*yyvalp) = node1(20, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3324 "src/grammar.c"
    break;

  case 42: /* fragment_20: links_161  */
#line 467 "grammar/grammar.y"
                           { (*yyvalp) = node1(20, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3330 "src/grammar.c"
    break;

  case 43: /* fragment_20: linkargs_160  */
#line 469 "grammar/grammar.y"
                           { (*yyvalp) = node1(20, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3336 "src/grammar.c"
    break;

  case 44: /* fragment_20: prenex_30  */
#line 471 "grammar/grammar.y"
                           { (*yyvalp) = node1(20, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3342 "src/grammar.c"
    break;

  case 45: /* prenex_30: terms_80 ZOhU_492  */
#line 474 "grammar/grammar.y"
                           { (*yyvalp) = node2(30, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3348 "src/grammar.c"
    break;

  case 46: /* free_modifier_32: free_modifier_A_33  */
#line 477 "grammar/grammar.y"
                           { (*yyvalp) = node1(32, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3354 "src/grammar.c"
    break;

  case 47: /* free_modifier_32: free_modifier_A_33 free_modifier_32  */
#line 479 "grammar/grammar.y"
                           { (*yyvalp) = node2(32, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3360 "src/grammar.c"
    break;

  case 48: /* free_modifier_A_33: vocative_35  */
#line 482 "grammar/grammar.y"
                           { (*yyvalp) = node1(33, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3366 "src/grammar.c"
    break;

  case 49: /* free_modifier_A_33: parenthetical_36  */
#line 484 "grammar/grammar.y"
                           { (*yyvalp) = node1(33, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3372 "src/grammar.c"
    break;

  case 50: /* free_modifier_A_33: discursive_bridi_34  */
#line 486 "grammar/grammar.y"
                           { (*yyvalp) = node1(33, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3378 "src/grammar.c"
    break;

  case 51: /* free_modifier_A_33: subscript_486  */
#line 488 "grammar/grammar.y"
                           { (*yyvalp) = node1(33, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3384 "src/grammar.c"
    break;

  case 52: /* free_modifier_A_33: utterance_ordinal_801  */
#line 490 "grammar/grammar.y"
                           { (*yyvalp) = node1(33, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3390 "src/grammar.c"
    break;

  case 53: /* discursive_bridi_34: SEI_440 selbri_130 SEhU_gap_459  */
#line 493 "grammar/grammar.y"
                           { (*yyvalp) = node3(34, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3396 "src/grammar.c"
    break;

  case 54: /* discursive_bridi_34: SOI_498 sumti_90 SEhU_gap_459  */
#line 495 "grammar/grammar.y"
                           { (*yyvalp) = node3(34, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3402 "src/grammar.c"
    break;

  case 55: /* discursive_bridi_34: SOI_498 sumti_90 sumti_90 SEhU_gap_459  */
#line 497 "grammar/grammar.y"
                           { (*yyvalp) = node4(34, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3408 "src/grammar.c"
    break;

  case 56: /* discursive_bridi_34: SEI_440 terms_80 front_gap_451 selbri_130 SEhU_gap_459  */
#line 499 "grammar/grammar.y"
                           { (*yyvalp) = node5(34, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3414 "src/grammar.c"
    break;

  case 57: /* discursive_bridi_34: SEI_440 terms_80 selbri_130 SEhU_gap_459  */
#line 501 "grammar/grammar.y"
                           { (*yyvalp) = node4(34, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3420 "src/grammar.c"
    break;

  case 58: /* vocative_35: DOI_415 selbri_130 DOhU_gap_457  */
#line 504 "grammar/grammar.y"
                           { (*yyvalp) = node3(35, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3426 "src/grammar.c"
    break;

  case 59: /* vocative_35: DOI_415 selbri_130 relative_clauses_121 DOhU_gap_457  */
#line 506 "grammar/grammar.y"
                           { (*yyvalp) = node4(35, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3432 "src/grammar.c"
    break;

  case 60: /* vocative_35: DOI_415 relative_clauses_121 selbri_130 DOhU_gap_457  */
#line 508 "grammar/grammar.y"
                           { (*yyvalp) = node4(35, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3438 "src/grammar.c"
    break;

  case 61: /* vocative_35: DOI_415 relative_clauses_121 selbri_130 relative_clauses_121 DOhU_gap_457  */
#line 510 "grammar/grammar.y"
                           { (*yyvalp) = node5(35, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3444 "src/grammar.c"
    break;

  case 62: /* vocative_35: DOI_415 cmene_404 DOhU_gap_457  */
#line 512 "grammar/grammar.y"
                           { (*yyvalp) = node3(35, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3450 "src/grammar.c"
    break;

  case 63: /* vocative_35: DOI_415 cmene_404 relative_clauses_121 DOhU_gap_457  */
#line 514 "grammar/grammar.y"
                           { (*yyvalp) = node4(35, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3456 "src/grammar.c"
    break;

  case 64: /* vocative_35: DOI_415 relative_clauses_121 cmene_404 DOhU_gap_457  */
#line 516 "grammar/grammar.y"
                           { (*yyvalp) = node4(35, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3462 "src/grammar.c"
    break;

  case 65: /* vocative_35: DOI_415 relative_clauses_121 cmene_404 relative_clauses_121 DOhU_gap_457  */
#line 518 "grammar/grammar.y"
                           { (*yyvalp) = node5(35, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3468 "src/grammar.c"
    break;

  case 66: /* vocative_35: DOI_415 sumti_90 DOhU_gap_457  */
#line 520 "grammar/grammar.y"
                           { (*yyvalp) = node3(35, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3474 "src/grammar.c"
    break;

  case 67: /* vocative_35: DOI_415 DOhU_gap_457  */
#line 522 "grammar/grammar.y"
                           { (*yyvalp) = node2(35, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3480 "src/grammar.c"
    break;

  case 68: /* parenthetical_36: TO_606 text_0 TOI_gap_468  */
#line 525 "grammar/grammar.y"
                           { (*yyvalp) = node3(36, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3486 "src/grammar.c"
    break;

  case 69: /* sentence_40: bridi_tail_50  */
#line 528 "grammar/grammar.y"
                           { (*yyvalp) = node1(40, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3492 "src/grammar.c"
    break;

  case 70: /* sentence_40: terms_80 front_gap_451 bridi_tail_50  */
#line 530 "grammar/grammar.y"
                           { (*yyvalp) = node3(40, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3498 "src/grammar.c"
    break;

  case 71: /* sentence_40: terms_80 bridi_tail_50  */
#line 532 "grammar/grammar.y"
                           { (*yyvalp) = node2(40, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3504 "src/grammar.c"
    break;

  case 72: /* subsentence_41: sentence_40  */
#line 535 "grammar/grammar.y"
                           { (*yyvalp) = node1(41, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3510 "src/grammar.c"
    break;

  case 73: /* subsentence_41: prenex_30 subsentence_41  */
#line 537 "grammar/grammar.y"
                           { (*yyvalp) = node2(41, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3516 "src/grammar.c"
    break;

  case 74: /* bridi_tail_50: bridi_tail_A_51  */
#line 540 "grammar/grammar.y"
                           { (*yyvalp) = node1(50, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3522 "src/grammar.c"
    break;

  case 75: /* bridi_tail_50: bridi_tail_A_51 GIhEK_KE_814 bridi_tail_50 KEhE_gap_466 tail_terms_71  */
#line 542 "grammar/grammar.y"
                           { (*yyvalp) = node5(50, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3528 "src/grammar.c"
    break;

  case 76: /* bridi_tail_A_51: bridi_tail_B_52  */
#line 545 "grammar/grammar.y"
                           { (*yyvalp) = node1(51, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3534 "src/grammar.c"
    break;

  case 77: /* bridi_tail_A_51: bridi_tail_A_51 GIhEK_818 bridi_tail_B_52 tail_terms_71  */
#line 547 "grammar/grammar.y"
                           { (*yyvalp) = node4(51, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3540 "src/grammar.c"
    break;

  case 78: /* bridi_tail_B_52: bridi_tail_C_53  */
#line 550 "grammar/grammar.y"
                           { (*yyvalp) = node1(52, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3546 "src/grammar.c"
    break;

  case 79: /* bridi_tail_B_52: bridi_tail_C_53 GIhEK_BO_813 bridi_tail_B_52 tail_terms_71  */
#line 552 "grammar/grammar.y"
                           { (*yyvalp) = node4(52, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3552 "src/grammar.c"
    break;

  case 80: /* bridi_tail_C_53: gek_sentence_54  */
#line 555 "grammar/grammar.y"
                           { (*yyvalp) = node1(53, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3558 "src/grammar.c"
    break;

  case 81: /* bridi_tail_C_53: selbri_130 tail_terms_71  */
#line 557 "grammar/grammar.y"
                           { (*yyvalp) = node2(53, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3564 "src/grammar.c"
    break;

  case 82: /* gek_sentence_54: GEK_807 subsentence_41 GIK_816 subsentence_41 tail_terms_71  */
#line 560 "grammar/grammar.y"
                           { (*yyvalp) = node5(54, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3570 "src/grammar.c"
    break;

  case 83: /* gek_sentence_54: tag_491 KE_493 gek_sentence_54 KEhE_gap_466  */
#line 562 "grammar/grammar.y"
                           { (*yyvalp) = node4(54, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3576 "src/grammar.c"
    break;

  case 84: /* gek_sentence_54: NA_445 gek_sentence_54  */
#line 564 "grammar/grammar.y"
                           { (*yyvalp) = node2(54, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3582 "src/grammar.c"
    break;

  case 85: /* tail_terms_71: terms_80 VAU_gap_456  */
#line 567 "grammar/grammar.y"
                           { (*yyvalp) = node2(71, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3588 "src/grammar.c"
    break;

  case 86: /* tail_terms_71: VAU_gap_456  */
#line 569 "grammar/grammar.y"
                           { (*yyvalp) = node1(71, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3594 "src/grammar.c"
    break;

  case 87: /* terms_80: terms_A_81  */
#line 572 "grammar/grammar.y"
                           { (*yyvalp) = node1(80, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3600 "src/grammar.c"
    break;

  case 88: /* terms_80: terms_80 terms_A_81  */
#line 574 "grammar/grammar.y"
                           { (*yyvalp) = node2(80, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3606 "src/grammar.c"
    break;

  case 89: /* terms_A_81: terms_B_82  */
#line 577 "grammar/grammar.y"
                           { (*yyvalp) = node1(81, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3612 "src/grammar.c"
    break;

  case 90: /* terms_A_81: terms_A_81 PEhE_494 JOIK_JEK_422 terms_B_82  */
#line 579 "grammar/grammar.y"
                           { (*yyvalp) = node4(81, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3618 "src/grammar.c"
    break;

  case 91: /* terms_B_82: term_83  */
#line 582 "grammar/grammar.y"
                           { (*yyvalp) = node1(82, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3624 "src/grammar.c"
    break;

  case 92: /* terms_B_82: terms_B_82 CEhE_495 term_83  */
#line 584 "grammar/grammar.y"
                           { (*yyvalp) = node3(82, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3630 "src/grammar.c"
    break;

  case 93: /* term_83: sumti_90  */
#line 587 "grammar/grammar.y"
                           { (*yyvalp) = node1(83, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3636 "src/grammar.c"
    break;

  case 94: /* term_83: modifier_84  */
#line 589 "grammar/grammar.y"
                           { (*yyvalp) = node1(83, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3642 "src/grammar.c"
    break;

  case 95: /* term_83: term_set_85  */
#line 591 "grammar/grammar.y"
                           { (*yyvalp) = node1(83, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3648 "src/grammar.c"
    break;

  case 96: /* term_83: NA_KU_810  */
#line 593 "grammar/grammar.y"
                           { (*yyvalp) = node1(83, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3654 "src/grammar.c"
    break;

  case 97: /* modifier_84: mod_head_490 gap_450  */
#line 596 "grammar/grammar.y"
                           { (*yyvalp) = node2(84, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3660 "src/grammar.c"
    break;

  case 98: /* modifier_84: mod_head_490 sumti_90  */
#line 598 "grammar/grammar.y"
                           { (*yyvalp) = node2(84, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3666 "src/grammar.c"
    break;

  case 99: /* term_set_85: NUhI_496 terms_80 NUhU_gap_460  */
#line 601 "grammar/grammar.y"
                           { (*yyvalp) = node3(85, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3672 "src/grammar.c"
    break;

  case 100: /* term_set_85: NUhI_496 GEK_807 terms_80 NUhU_gap_460 GIK_816 terms_80 NUhU_gap_460  */
#line 603 "grammar/grammar.y"
                           { (*yyvalp) = node7(85, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3678 "src/grammar.c"
    break;

  case 101: /* sumti_90: sumti_A_91  */
#line 606 "grammar/grammar.y"
                           { (*yyvalp) = node1(90, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3684 "src/grammar.c"
    break;

  case 102: /* sumti_90: sumti_A_91 VUhO_497 relative_clauses_121  */
#line 608 "grammar/grammar.y"
                           { (*yyvalp) = node3(90, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3690 "src/grammar.c"
    break;

  case 103: /* sumti_A_91: sumti_B_92  */
#line 611 "grammar/grammar.y"
                           { (*yyvalp) = node1(91, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3696 "src/grammar.c"
    break;

  case 104: /* sumti_A_91: sumti_B_92 EK_KE_804 sumti_90 KEhE_gap_466  */
#line 613 "grammar/grammar.y"
                           { (*yyvalp) = node4(91, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3702 "src/grammar.c"
    break;

  case 105: /* sumti_A_91: sumti_B_92 JOIK_KE_823 sumti_90 KEhE_gap_466  */
#line 615 "grammar/grammar.y"
                           { (*yyvalp) = node4(91, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3708 "src/grammar.c"
    break;

  case 106: /* sumti_B_92: sumti_C_93  */
#line 618 "grammar/grammar.y"
                           { (*yyvalp) = node1(92, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3714 "src/grammar.c"
    break;

  case 107: /* sumti_B_92: sumti_B_92 JOIK_EK_421 sumti_C_93  */
#line 620 "grammar/grammar.y"
                           { (*yyvalp) = node3(92, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3720 "src/grammar.c"
    break;

  case 108: /* sumti_C_93: sumti_D_94  */
#line 623 "grammar/grammar.y"
                           { (*yyvalp) = node1(93, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3726 "src/grammar.c"
    break;

  case 109: /* sumti_C_93: sumti_D_94 EK_BO_803 sumti_C_93  */
#line 625 "grammar/grammar.y"
                           { (*yyvalp) = node3(93, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3732 "src/grammar.c"
    break;

  case 110: /* sumti_C_93: sumti_D_94 JOIK_BO_822 sumti_C_93  */
#line 627 "grammar/grammar.y"
                           { (*yyvalp) = node3(93, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3738 "src/grammar.c"
    break;

  case 111: /* sumti_D_94: sumti_E_95  */
#line 630 "grammar/grammar.y"
                           { (*yyvalp) = node1(94, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3744 "src/grammar.c"
    break;

  case 112: /* sumti_D_94: GEK_807 sumti_90 GIK_816 sumti_D_94  */
#line 632 "grammar/grammar.y"
                           { (*yyvalp) = node4(94, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3750 "src/grammar.c"
    break;

  case 113: /* sumti_E_95: sumti_F_96  */
#line 635 "grammar/grammar.y"
                           { (*yyvalp) = node1(95, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3756 "src/grammar.c"
    break;

  case 114: /* sumti_E_95: sumti_F_96 relative_clauses_121  */
#line 637 "grammar/grammar.y"
                           { (*yyvalp) = node2(95, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3762 "src/grammar.c"
    break;

  case 115: /* sumti_E_95: quantifier_300 selbri_130 gap_450  */
#line 639 "grammar/grammar.y"
                           { (*yyvalp) = node3(95, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3768 "src/grammar.c"
    break;

  case 116: /* sumti_E_95: quantifier_300 selbri_130 gap_450 relative_clauses_121  */
#line 641 "grammar/grammar.y"
                           { (*yyvalp) = node4(95, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3774 "src/grammar.c"
    break;

  case 117: /* sumti_F_96: sumti_G_97  */
#line 644 "grammar/grammar.y"
                           { (*yyvalp) = node1(96, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3780 "src/grammar.c"
    break;

  case 118: /* sumti_F_96: quantifier_300 sumti_G_97  */
#line 646 "grammar/grammar.y"
                           { (*yyvalp) = node2(96, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3786 "src/grammar.c"
    break;

  case 119: /* sumti_G_97: qualifier_483 sumti_90 LUhU_gap_463  */
#line 649 "grammar/grammar.y"
                           { (*yyvalp) = node3(97, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3792 "src/grammar.c"
    break;

  case 120: /* sumti_G_97: qualifier_483 relative_clauses_121 sumti_90 LUhU_gap_463  */
#line 651 "grammar/grammar.y"
                           { (*yyvalp) = node4(97, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3798 "src/grammar.c"
    break;

  case 121: /* sumti_G_97: anaphora_400  */
#line 653 "grammar/grammar.y"
                           { (*yyvalp) = node1(97, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3804 "src/grammar.c"
    break;

  case 122: /* sumti_G_97: LA_499 cmene_404  */
#line 655 "grammar/grammar.y"
                           { (*yyvalp) = node2(97, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3810 "src/grammar.c"
    break;

  case 123: /* sumti_G_97: LA_499 relative_clauses_121 cmene_404  */
#line 657 "grammar/grammar.y"
                           { (*yyvalp) = node3(97, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3816 "src/grammar.c"
    break;

  case 124: /* sumti_G_97: LI_489 MEX_310 LOhO_gap_472  */
#line 659 "grammar/grammar.y"
                           { (*yyvalp) = node3(97, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3822 "src/grammar.c"
    break;

  case 125: /* sumti_G_97: description_110  */
#line 661 "grammar/grammar.y"
                           { (*yyvalp) = node1(97, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3828 "src/grammar.c"
    break;

  case 126: /* sumti_G_97: quote_arg_432  */
#line 663 "grammar/grammar.y"
                           { (*yyvalp) = node1(97, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3834 "src/grammar.c"
    break;

  case 127: /* description_110: LA_499 sumti_tail_111 gap_450  */
#line 666 "grammar/grammar.y"
                           { (*yyvalp) = node3(110, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3840 "src/grammar.c"
    break;

  case 128: /* description_110: LE_488 sumti_tail_111 gap_450  */
#line 668 "grammar/grammar.y"
                           { (*yyvalp) = node3(110, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3846 "src/grammar.c"
    break;

  case 129: /* sumti_tail_111: sumti_tail_A_112  */
#line 671 "grammar/grammar.y"
                           { (*yyvalp) = node1(111, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3852 "src/grammar.c"
    break;

  case 130: /* sumti_tail_111: relative_clauses_121 sumti_tail_A_112  */
#line 673 "grammar/grammar.y"
                           { (*yyvalp) = node2(111, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3858 "src/grammar.c"
    break;

  case 131: /* sumti_tail_111: sumti_G_97 sumti_tail_A_112  */
#line 675 "grammar/grammar.y"
                           { (*yyvalp) = node2(111, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3864 "src/grammar.c"
    break;

  case 132: /* sumti_tail_111: sumti_G_97 relative_clauses_121 sumti_tail_A_112  */
#line 677 "grammar/grammar.y"
                           { (*yyvalp) = node3(111, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3870 "src/grammar.c"
    break;

  case 133: /* sumti_tail_A_112: selbri_130  */
#line 680 "grammar/grammar.y"
                           { (*yyvalp) = node1(112, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3876 "src/grammar.c"
    break;

  case 134: /* sumti_tail_A_112: selbri_130 relative_clauses_121  */
#line 682 "grammar/grammar.y"
                           { (*yyvalp) = node2(112, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3882 "src/grammar.c"
    break;

  case 135: /* sumti_tail_A_112: quantifier_300 selbri_130  */
#line 684 "grammar/grammar.y"
                           { (*yyvalp) = node2(112, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3888 "src/grammar.c"
    break;

  case 136: /* sumti_tail_A_112: quantifier_300 selbri_130 relative_clauses_121  */
#line 686 "grammar/grammar.y"
                           { (*yyvalp) = node3(112, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3894 "src/grammar.c"
    break;

  case 137: /* sumti_tail_A_112: quantifier_300 sumti_90  */
#line 688 "grammar/grammar.y"
                           { (*yyvalp) = node2(112, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3900 "src/grammar.c"
    break;

  case 138: /* relative_clauses_121: relative_clause_122  */
#line 691 "grammar/grammar.y"
                           { (*yyvalp) = node1(121, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3906 "src/grammar.c"
    break;

  case 139: /* relative_clauses_121: relative_clauses_121 ZIhE_487 relative_clause_122  */
#line 693 "grammar/grammar.y"
                           { (*yyvalp) = node3(121, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3912 "src/grammar.c"
    break;

  case 140: /* relative_clause_122: GOI_485 term_83 GEhU_gap_464  */
#line 696 "grammar/grammar.y"
                           { (*yyvalp) = node3(122, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3918 "src/grammar.c"
    break;

  case 141: /* relative_clause_122: NOI_484 subsentence_41 KUhO_gap_469  */
#line 698 "grammar/grammar.y"
                           { (*yyvalp) = node3(122, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3924 "src/grammar.c"
    break;

  case 142: /* selbri_130: tag_491 selbri_A_131  */
#line 701 "grammar/grammar.y"
                           { (*yyvalp) = node2(130, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3930 "src/grammar.c"
    break;

  case 143: /* selbri_130: selbri_A_131  */
#line 703 "grammar/grammar.y"
                           { (*yyvalp) = node1(130, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3936 "src/grammar.c"
    break;

  case 144: /* selbri_A_131: selbri_B_132  */
#line 706 "grammar/grammar.y"
                           { (*yyvalp) = node1(131, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3942 "src/grammar.c"
    break;

  case 145: /* selbri_A_131: NA_445 selbri_130  */
#line 708 "grammar/grammar.y"
                           { (*yyvalp) = node2(131, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3948 "src/grammar.c"
    break;

  case 146: /* selbri_B_132: selbri_C_133  */
#line 711 "grammar/grammar.y"
                           { (*yyvalp) = node1(132, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3954 "src/grammar.c"
    break;

  case 147: /* selbri_B_132: selbri_C_133 CO_443 selbri_B_132  */
#line 713 "grammar/grammar.y"
                           { (*yyvalp) = node3(132, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3960 "src/grammar.c"
    break;

  case 148: /* selbri_C_133: selbri_D_134  */
#line 716 "grammar/grammar.y"
                           { (*yyvalp) = node1(133, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3966 "src/grammar.c"
    break;

  case 149: /* selbri_C_133: selbri_C_133 selbri_D_134  */
#line 718 "grammar/grammar.y"
                           { (*yyvalp) = node2(133, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3972 "src/grammar.c"
    break;

  case 150: /* selbri_D_134: selbri_E_135  */
#line 721 "grammar/grammar.y"
                           { (*yyvalp) = node1(134, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3978 "src/grammar.c"
    break;

  case 151: /* selbri_D_134: selbri_D_134 JOIK_JEK_422 selbri_E_135  */
#line 723 "grammar/grammar.y"
                           { (*yyvalp) = node3(134, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3984 "src/grammar.c"
    break;

  case 152: /* selbri_D_134: selbri_D_134 JOIK_KE_823 selbri_C_133 KEhE_gap_466  */
#line 725 "grammar/grammar.y"
                           { (*yyvalp) = node4(134, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3990 "src/grammar.c"
    break;

  case 153: /* selbri_E_135: selbri_F_136  */
#line 728 "grammar/grammar.y"
                           { (*yyvalp) = node1(135, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 3996 "src/grammar.c"
    break;

  case 154: /* selbri_E_135: selbri_F_136 JEK_BO_821 selbri_E_135  */
#line 730 "grammar/grammar.y"
                           { (*yyvalp) = node3(135, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4002 "src/grammar.c"
    break;

  case 155: /* selbri_E_135: selbri_F_136 JOIK_BO_822 selbri_E_135  */
#line 732 "grammar/grammar.y"
                           { (*yyvalp) = node3(135, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4008 "src/grammar.c"
    break;

  case 156: /* selbri_F_136: tanru_unit_150  */
#line 735 "grammar/grammar.y"
                           { (*yyvalp) = node1(136, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4014 "src/grammar.c"
    break;

  case 157: /* selbri_F_136: tanru_unit_150 BO_479 selbri_F_136  */
#line 737 "grammar/grammar.y"
                           { (*yyvalp) = node3(136, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4020 "src/grammar.c"
    break;

  case 158: /* selbri_F_136: GUhEK_selbri_137  */
#line 739 "grammar/grammar.y"
                           { (*yyvalp) = node1(136, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4026 "src/grammar.c"
    break;

  case 159: /* selbri_F_136: NAhE_482 GUhEK_selbri_137  */
#line 741 "grammar/grammar.y"
                           { (*yyvalp) = node2(136, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4032 "src/grammar.c"
    break;

  case 160: /* GUhEK_selbri_137: GUhEK_808 selbri_130 GIK_816 selbri_F_136  */
#line 744 "grammar/grammar.y"
                           { (*yyvalp) = node4(137, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4038 "src/grammar.c"
    break;

  case 161: /* tanru_unit_150: tanru_unit_A_151  */
#line 747 "grammar/grammar.y"
                           { (*yyvalp) = node1(150, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4044 "src/grammar.c"
    break;

  case 162: /* tanru_unit_150: tanru_unit_150 CEI_444 tanru_unit_A_151  */
#line 749 "grammar/grammar.y"
                           { (*yyvalp) = node3(150, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4050 "src/grammar.c"
    break;

  case 163: /* tanru_unit_A_151: tanru_unit_B_152  */
#line 752 "grammar/grammar.y"
                           { (*yyvalp) = node1(151, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4056 "src/grammar.c"
    break;

  case 164: /* tanru_unit_A_151: tanru_unit_B_152 linkargs_160  */
#line 754 "grammar/grammar.y"
                           { (*yyvalp) = node2(151, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4062 "src/grammar.c"
    break;

  case 165: /* tanru_unit_B_152: bridi_valsi_407  */
#line 757 "grammar/grammar.y"
                           { (*yyvalp) = node1(152, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4068 "src/grammar.c"
    break;

  case 166: /* tanru_unit_B_152: KE_493 selbri_C_133 KEhE_gap_466  */
#line 759 "grammar/grammar.y"
                           { (*yyvalp) = node3(152, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4074 "src/grammar.c"
    break;

  case 167: /* tanru_unit_B_152: SE_480 tanru_unit_B_152  */
#line 761 "grammar/grammar.y"
                           { (*yyvalp) = node2(152, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4080 "src/grammar.c"
    break;

  case 168: /* tanru_unit_B_152: JAI_478 tag_491 tanru_unit_B_152  */
#line 763 "grammar/grammar.y"
                           { (*yyvalp) = node3(152, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4086 "src/grammar.c"
    break;

  case 169: /* tanru_unit_B_152: JAI_478 tanru_unit_B_152  */
#line 765 "grammar/grammar.y"
                           { (*yyvalp) = node2(152, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4092 "src/grammar.c"
    break;

  case 170: /* tanru_unit_B_152: ME_477 sumti_90 MEhU_gap_465  */
#line 767 "grammar/grammar.y"
                           { (*yyvalp) = node3(152, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4098 "src/grammar.c"
    break;

  case 171: /* tanru_unit_B_152: ME_477 sumti_90 MEhU_gap_465 MOI_476  */
#line 769 "grammar/grammar.y"
                           { (*yyvalp) = node4(152, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4104 "src/grammar.c"
    break;

  case 172: /* tanru_unit_B_152: NUhA_475 MEX_operator_374  */
#line 771 "grammar/grammar.y"
                           { (*yyvalp) = node2(152, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4110 "src/grammar.c"
    break;

  case 173: /* tanru_unit_B_152: NAhE_482 tanru_unit_B_152  */
#line 773 "grammar/grammar.y"
                           { (*yyvalp) = node2(152, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4116 "src/grammar.c"
    break;

  case 174: /* tanru_unit_B_152: NU_425 subsentence_41 KEI_gap_453  */
#line 775 "grammar/grammar.y"
                           { (*yyvalp) = node3(152, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4122 "src/grammar.c"
    break;

  case 175: /* linkargs_160: BE_446 term_83 BEhO_gap_467  */
#line 778 "grammar/grammar.y"
                           { (*yyvalp) = node3(160, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4128 "src/grammar.c"
    break;

  case 176: /* linkargs_160: BE_446 term_83 links_161 BEhO_gap_467  */
#line 780 "grammar/grammar.y"
                           { (*yyvalp) = node4(160, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4134 "src/grammar.c"
    break;

  case 177: /* links_161: BEI_442 term_83  */
#line 783 "grammar/grammar.y"
                           { (*yyvalp) = node2(161, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4140 "src/grammar.c"
    break;

  case 178: /* links_161: BEI_442 term_83 links_161  */
#line 785 "grammar/grammar.y"
                           { (*yyvalp) = node3(161, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4146 "src/grammar.c"
    break;

  case 179: /* quantifier_300: number_812 BOI_gap_461  */
#line 788 "grammar/grammar.y"
                           { (*yyvalp) = node2(300, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4152 "src/grammar.c"
    break;

  case 180: /* quantifier_300: left_bracket_470 MEX_310 right_bracket_gap_471  */
#line 790 "grammar/grammar.y"
                           { (*yyvalp) = node3(300, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4158 "src/grammar.c"
    break;

  case 181: /* MEX_310: MEX_A_311  */
#line 793 "grammar/grammar.y"
                           { (*yyvalp) = node1(310, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4164 "src/grammar.c"
    break;

  case 182: /* MEX_310: MEX_310 operator_370 MEX_A_311  */
#line 795 "grammar/grammar.y"
                           { (*yyvalp) = node3(310, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4170 "src/grammar.c"
    break;

  case 183: /* MEX_310: FUhA_441 rp_expression_330  */
#line 797 "grammar/grammar.y"
                           { (*yyvalp) = node2(310, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4176 "src/grammar.c"
    break;

  case 184: /* MEX_A_311: MEX_B_312  */
#line 800 "grammar/grammar.y"
                           { (*yyvalp) = node1(311, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4182 "src/grammar.c"
    break;

  case 185: /* MEX_A_311: MEX_B_312 BIhE_439 operator_370 MEX_A_311  */
#line 802 "grammar/grammar.y"
                           { (*yyvalp) = node4(311, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4188 "src/grammar.c"
    break;

  case 186: /* MEX_B_312: operand_381  */
#line 805 "grammar/grammar.y"
                           { (*yyvalp) = node1(312, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4194 "src/grammar.c"
    break;

  case 187: /* MEX_B_312: operator_370 MEX_C_313 MEX_gap_452  */
#line 807 "grammar/grammar.y"
                           { (*yyvalp) = node3(312, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4200 "src/grammar.c"
    break;

  case 188: /* MEX_B_312: PEhO_438 operator_370 MEX_C_313 MEX_gap_452  */
#line 809 "grammar/grammar.y"
                           { (*yyvalp) = node4(312, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4206 "src/grammar.c"
    break;

  case 189: /* MEX_C_313: MEX_B_312  */
#line 812 "grammar/grammar.y"
                           { (*yyvalp) = node1(313, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4212 "src/grammar.c"
    break;

  case 190: /* MEX_C_313: MEX_C_313 MEX_B_312  */
#line 814 "grammar/grammar.y"
                           { (*yyvalp) = node2(313, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4218 "src/grammar.c"
    break;

  case 191: /* rp_expression_330: rp_operand_332 rp_operand_332 operator_370  */
#line 817 "grammar/grammar.y"
                           { (*yyvalp) = node3(330, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4224 "src/grammar.c"
    break;

  case 192: /* rp_operand_332: operand_381  */
#line 820 "grammar/grammar.y"
                           { (*yyvalp) = node1(332, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4230 "src/grammar.c"
    break;

  case 193: /* rp_operand_332: rp_expression_330  */
#line 822 "grammar/grammar.y"
                           { (*yyvalp) = node1(332, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4236 "src/grammar.c"
    break;

  case 194: /* operator_370: operator_A_371  */
#line 825 "grammar/grammar.y"
                           { (*yyvalp) = node1(370, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4242 "src/grammar.c"
    break;

  case 195: /* operator_370: operator_370 JOIK_JEK_422 operator_A_371  */
#line 827 "grammar/grammar.y"
                           { (*yyvalp) = node3(370, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4248 "src/grammar.c"
    break;

  case 196: /* operator_370: operator_370 JOIK_KE_823 operator_370 KEhE_gap_466  */
#line 829 "grammar/grammar.y"
                           { (*yyvalp) = node4(370, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4254 "src/grammar.c"
    break;

  case 197: /* operator_A_371: operator_B_372  */
#line 832 "grammar/grammar.y"
                           { (*yyvalp) = node1(371, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4260 "src/grammar.c"
    break;

  case 198: /* operator_A_371: GUhEK_808 operator_A_371 GIK_816 operator_B_372  */
#line 834 "grammar/grammar.y"
                           { (*yyvalp) = node4(371, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4266 "src/grammar.c"
    break;

  case 199: /* operator_A_371: operator_B_372 JOIK_BO_822 operator_A_371  */
#line 836 "grammar/grammar.y"
                           { (*yyvalp) = node3(371, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4272 "src/grammar.c"
    break;

  case 200: /* operator_A_371: operator_B_372 JEK_BO_821 operator_A_371  */
#line 838 "grammar/grammar.y"
                           { (*yyvalp) = node3(371, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4278 "src/grammar.c"
    break;

  case 201: /* operator_B_372: MEX_operator_374  */
#line 841 "grammar/grammar.y"
                           { (*yyvalp) = node1(372, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4284 "src/grammar.c"
    break;

  case 202: /* operator_B_372: KE_493 operator_370 KEhE_gap_466  */
#line 843 "grammar/grammar.y"
                           { (*yyvalp) = node3(372, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4290 "src/grammar.c"
    break;

  case 203: /* MEX_operator_374: VUhU_679  */
#line 846 "grammar/grammar.y"
                           { (*yyvalp) = node1(374, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4296 "src/grammar.c"
    break;

  case 204: /* MEX_operator_374: VUhU_679 free_modifier_32  */
#line 848 "grammar/grammar.y"
                           { (*yyvalp) = node2(374, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4302 "src/grammar.c"
    break;

  case 205: /* MEX_operator_374: SE_480 MEX_operator_374  */
#line 850 "grammar/grammar.y"
                           { (*yyvalp) = node2(374, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4308 "src/grammar.c"
    break;

  case 206: /* MEX_operator_374: NAhE_482 MEX_operator_374  */
#line 852 "grammar/grammar.y"
                           { (*yyvalp) = node2(374, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4314 "src/grammar.c"
    break;

  case 207: /* MEX_operator_374: MAhO_430 MEX_310 TEhU_gap_473  */
#line 854 "grammar/grammar.y"
                           { (*yyvalp) = node3(374, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4320 "src/grammar.c"
    break;

  case 208: /* MEX_operator_374: NAhU_429 selbri_130 TEhU_gap_473  */
#line 856 "grammar/grammar.y"
                           { (*yyvalp) = node3(374, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4326 "src/grammar.c"
    break;

  case 209: /* operand_381: operand_A_382  */
#line 859 "grammar/grammar.y"
                           { (*yyvalp) = node1(381, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4332 "src/grammar.c"
    break;

  case 210: /* operand_381: operand_A_382 EK_KE_804 operand_381 KEhE_gap_466  */
#line 861 "grammar/grammar.y"
                           { (*yyvalp) = node4(381, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4338 "src/grammar.c"
    break;

  case 211: /* operand_381: operand_A_382 JOIK_KE_823 operand_381 KEhE_gap_466  */
#line 863 "grammar/grammar.y"
                           { (*yyvalp) = node4(381, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4344 "src/grammar.c"
    break;

  case 212: /* operand_A_382: operand_B_383  */
#line 866 "grammar/grammar.y"
                           { (*yyvalp) = node1(382, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4350 "src/grammar.c"
    break;

  case 213: /* operand_A_382: operand_A_382 JOIK_EK_421 operand_B_383  */
#line 868 "grammar/grammar.y"
                           { (*yyvalp) = node3(382, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4356 "src/grammar.c"
    break;

  case 214: /* operand_B_383: operand_C_385  */
#line 871 "grammar/grammar.y"
                           { (*yyvalp) = node1(383, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4362 "src/grammar.c"
    break;

  case 215: /* operand_B_383: operand_C_385 EK_BO_803 operand_B_383  */
#line 873 "grammar/grammar.y"
                           { (*yyvalp) = node3(383, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4368 "src/grammar.c"
    break;

  case 216: /* operand_B_383: operand_C_385 JOIK_BO_822 operand_B_383  */
#line 875 "grammar/grammar.y"
                           { (*yyvalp) = node3(383, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4374 "src/grammar.c"
    break;

  case 217: /* operand_C_385: quantifier_300  */
#line 878 "grammar/grammar.y"
                           { (*yyvalp) = node1(385, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4380 "src/grammar.c"
    break;

  case 218: /* operand_C_385: lerfu_string_817 BOI_gap_461  */
#line 880 "grammar/grammar.y"
                           { (*yyvalp) = node2(385, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4386 "src/grammar.c"
    break;

  case 219: /* operand_C_385: NIhE_428 selbri_130 TEhU_gap_473  */
#line 882 "grammar/grammar.y"
                           { (*yyvalp) = node3(385, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4392 "src/grammar.c"
    break;

  case 220: /* operand_C_385: MOhE_427 sumti_90 TEhU_gap_473  */
#line 884 "grammar/grammar.y"
                           { (*yyvalp) = node3(385, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4398 "src/grammar.c"
    break;

  case 221: /* operand_C_385: JOhI_431 MEX_C_313 TEhU_gap_473  */
#line 886 "grammar/grammar.y"
                           { (*yyvalp) = node3(385, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4404 "src/grammar.c"
    break;

  case 222: /* operand_C_385: GEK_807 operand_381 GIK_816 operand_C_385  */
#line 888 "grammar/grammar.y"
                           { (*yyvalp) = node4(385, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4410 "src/grammar.c"
    break;

  case 223: /* operand_C_385: qualifier_483 operand_381 LUhU_gap_463  */
#line 890 "grammar/grammar.y"
                           { (*yyvalp) = node3(385, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4416 "src/grammar.c"
    break;

  case 224: /* anaphora_400: KOhA_555  */
#line 893 "grammar/grammar.y"
                           { (*yyvalp) = node1(400, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4422 "src/grammar.c"
    break;

  case 225: /* anaphora_400: KOhA_555 free_modifier_32  */
#line 895 "grammar/grammar.y"
                           { (*yyvalp) = node2(400, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4428 "src/grammar.c"
    break;

  case 226: /* anaphora_400: lerfu_string_817 BOI_gap_461  */
#line 897 "grammar/grammar.y"
                           { (*yyvalp) = node2(400, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4434 "src/grammar.c"
    break;

  case 227: /* cmene_404: cmene_A_405  */
#line 900 "grammar/grammar.y"
                           { (*yyvalp) = node1(404, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4440 "src/grammar.c"
    break;

  case 228: /* cmene_404: cmene_A_405 free_modifier_32  */
#line 902 "grammar/grammar.y"
                           { (*yyvalp) = node2(404, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4446 "src/grammar.c"
    break;

  case 229: /* cmene_A_405: CMENE_518  */
#line 905 "grammar/grammar.y"
                           { (*yyvalp) = node1(405, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4452 "src/grammar.c"
    break;

  case 230: /* cmene_A_405: cmene_A_405 CMENE_518  */
#line 907 "grammar/grammar.y"
                           { (*yyvalp) = node2(405, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4458 "src/grammar.c"
    break;

  case 231: /* bridi_valsi_407: bridi_valsi_A_408  */
#line 910 "grammar/grammar.y"
                           { (*yyvalp) = node1(407, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4464 "src/grammar.c"
    break;

  case 232: /* bridi_valsi_407: bridi_valsi_A_408 free_modifier_32  */
#line 912 "grammar/grammar.y"
                           { (*yyvalp) = node2(407, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4470 "src/grammar.c"
    break;

  case 233: /* bridi_valsi_A_408: BRIVLA_509  */
#line 915 "grammar/grammar.y"
                           { (*yyvalp) = node1(408, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4476 "src/grammar.c"
    break;

  case 234: /* bridi_valsi_A_408: PA_MOI_824  */
#line 917 "grammar/grammar.y"
                           { (*yyvalp) = node1(408, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4482 "src/grammar.c"
    break;

  case 235: /* bridi_valsi_A_408: GOhA_543  */
#line 919 "grammar/grammar.y"
                           { (*yyvalp) = node1(408, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4488 "src/grammar.c"
    break;

  case 236: /* bridi_valsi_A_408: GOhA_543 RAhO_593  */
#line 921 "grammar/grammar.y"
                           { (*yyvalp) = node2(408, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4494 "src/grammar.c"
    break;

  case 237: /* para_mark_410: NIhO_584  */
#line 924 "grammar/grammar.y"
                           { (*yyvalp) = node1(410, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4500 "src/grammar.c"
    break;

  case 238: /* para_mark_410: NIhO_584 free_modifier_32  */
#line 926 "grammar/grammar.y"
                           { (*yyvalp) = node2(410, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4506 "src/grammar.c"
    break;

  case 239: /* para_mark_410: NIhO_584 para_mark_410  */
#line 928 "grammar/grammar.y"
                           { (*yyvalp) = node2(410, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4512 "src/grammar.c"
    break;

  case 240: /* indicators_411: indicators_A_412  */
#line 931 "grammar/grammar.y"
                           { (*yyvalp) = node1(411, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4518 "src/grammar.c"
    break;

  case 241: /* indicators_411: FUhE_535 indicators_A_412  */
#line 933 "grammar/grammar.y"
                           { (*yyvalp) = node2(411, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4524 "src/grammar.c"
    break;

  case 242: /* indicators_A_412: indicator_413  */
#line 936 "grammar/grammar.y"
                           { (*yyvalp) = node1(412, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4530 "src/grammar.c"
    break;

  case 243: /* indicators_A_412: indicators_A_412 indicator_413  */
#line 938 "grammar/grammar.y"
                           { (*yyvalp) = node2(412, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4536 "src/grammar.c"
    break;

  case 244: /* indicator_413: UI_612  */
#line 941 "grammar/grammar.y"
                           { (*yyvalp) = node1(413, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4542 "src/grammar.c"
    break;

  case 245: /* indicator_413: CAI_515  */
#line 943 "grammar/grammar.y"
                           { (*yyvalp) = node1(413, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4548 "src/grammar.c"
    break;

  case 246: /* indicator_413: UI_612 NAI_581  */
#line 945 "grammar/grammar.y"
                           { (*yyvalp) = node2(413, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4554 "src/grammar.c"
    break;

  case 247: /* indicator_413: CAI_515 NAI_581  */
#line 947 "grammar/grammar.y"
                           { (*yyvalp) = node2(413, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4560 "src/grammar.c"
    break;

  case 248: /* indicator_413: Y_619  */
#line 949 "grammar/grammar.y"
                           { (*yyvalp) = node1(413, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4566 "src/grammar.c"
    break;

  case 249: /* indicator_413: DAhO_524  */
#line 951 "grammar/grammar.y"
                           { (*yyvalp) = node1(413, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4572 "src/grammar.c"
    break;

  case 250: /* indicator_413: FUhO_536  */
#line 953 "grammar/grammar.y"
                           { (*yyvalp) = node1(413, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4578 "src/grammar.c"
    break;

  case 251: /* DOI_415: DOI_525  */
#line 956 "grammar/grammar.y"
                           { (*yyvalp) = node1(415, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4584 "src/grammar.c"
    break;

  case 252: /* DOI_415: COI_416  */
#line 958 "grammar/grammar.y"
                           { (*yyvalp) = node1(415, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4590 "src/grammar.c"
    break;

  case 253: /* DOI_415: COI_416 DOI_525  */
#line 960 "grammar/grammar.y"
                           { (*yyvalp) = node2(415, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4596 "src/grammar.c"
    break;

  case 254: /* COI_416: COI_A_417  */
#line 963 "grammar/grammar.y"
                           { (*yyvalp) = node1(416, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4602 "src/grammar.c"
    break;

  case 255: /* COI_416: COI_416 COI_A_417  */
#line 965 "grammar/grammar.y"
                           { (*yyvalp) = node2(416, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4608 "src/grammar.c"
    break;

  case 256: /* COI_A_417: COI_520  */
#line 968 "grammar/grammar.y"
                           { (*yyvalp) = node1(417, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4614 "src/grammar.c"
    break;

  case 257: /* COI_A_417: COI_520 NAI_581  */
#line 970 "grammar/grammar.y"
                           { (*yyvalp) = node2(417, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4620 "src/grammar.c"
    break;

  case 258: /* JOIK_EK_421: EK_802  */
#line 973 "grammar/grammar.y"
                           { (*yyvalp) = node1(421, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4626 "src/grammar.c"
    break;

  case 259: /* JOIK_EK_421: JOIK_806  */
#line 975 "grammar/grammar.y"
                           { (*yyvalp) = node1(421, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4632 "src/grammar.c"
    break;

  case 260: /* JOIK_EK_421: JOIK_806 free_modifier_32  */
#line 977 "grammar/grammar.y"
                           { (*yyvalp) = node2(421, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4638 "src/grammar.c"
    break;

  case 261: /* JOIK_JEK_422: JOIK_806  */
#line 980 "grammar/grammar.y"
                           { (*yyvalp) = node1(422, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4644 "src/grammar.c"
    break;

  case 262: /* JOIK_JEK_422: JOIK_806 free_modifier_32  */
#line 982 "grammar/grammar.y"
                           { (*yyvalp) = node2(422, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4650 "src/grammar.c"
    break;

  case 263: /* JOIK_JEK_422: JEK_805  */
#line 984 "grammar/grammar.y"
                           { (*yyvalp) = node1(422, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4656 "src/grammar.c"
    break;

  case 264: /* JOIK_JEK_422: JEK_805 free_modifier_32  */
#line 986 "grammar/grammar.y"
                           { (*yyvalp) = node2(422, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4662 "src/grammar.c"
    break;

  case 265: /* XI_424: XI_618  */
#line 989 "grammar/grammar.y"
                           { (*yyvalp) = node1(424, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4668 "src/grammar.c"
    break;

  case 266: /* XI_424: XI_618 free_modifier_32  */
#line 991 "grammar/grammar.y"
                           { (*yyvalp) = node2(424, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4674 "src/grammar.c"
    break;

  case 267: /* NU_425: NU_A_426  */
#line 994 "grammar/grammar.y"
                           { (*yyvalp) = node1(425, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4680 "src/grammar.c"
    break;

  case 268: /* NU_425: NU_425 JOIK_JEK_422 NU_A_426  */
#line 996 "grammar/grammar.y"
                           { (*yyvalp) = node3(425, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4686 "src/grammar.c"
    break;

  case 269: /* NU_A_426: NU_586  */
#line 999 "grammar/grammar.y"
                           { (*yyvalp) = node1(426, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4692 "src/grammar.c"
    break;

  case 270: /* NU_A_426: NU_586 NAI_581  */
#line 1001 "grammar/grammar.y"
                           { (*yyvalp) = node2(426, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4698 "src/grammar.c"
    break;

  case 271: /* NU_A_426: NU_586 free_modifier_32  */
#line 1003 "grammar/grammar.y"
                           { (*yyvalp) = node2(426, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4704 "src/grammar.c"
    break;

  case 272: /* NU_A_426: NU_586 NAI_581 free_modifier_32  */
#line 1005 "grammar/grammar.y"
                           { (*yyvalp) = node3(426, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4710 "src/grammar.c"
    break;

  case 273: /* MOhE_427: MOhE_664  */
#line 1008 "grammar/grammar.y"
                           { (*yyvalp) = node1(427, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4716 "src/grammar.c"
    break;

  case 274: /* MOhE_427: MOhE_664 free_modifier_32  */
#line 1010 "grammar/grammar.y"
                           { (*yyvalp) = node2(427, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4722 "src/grammar.c"
    break;

  case 275: /* NIhE_428: NIhE_666  */
#line 1013 "grammar/grammar.y"
                           { (*yyvalp) = node1(428, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4728 "src/grammar.c"
    break;

  case 276: /* NIhE_428: NIhE_666 free_modifier_32  */
#line 1015 "grammar/grammar.y"
                           { (*yyvalp) = node2(428, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4734 "src/grammar.c"
    break;

  case 277: /* NAhU_429: NAhU_665  */
#line 1018 "grammar/grammar.y"
                           { (*yyvalp) = node1(429, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4740 "src/grammar.c"
    break;

  case 278: /* NAhU_429: NAhU_665 free_modifier_32  */
#line 1020 "grammar/grammar.y"
                           { (*yyvalp) = node2(429, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4746 "src/grammar.c"
    break;

  case 279: /* MAhO_430: MAhO_662  */
#line 1023 "grammar/grammar.y"
                           { (*yyvalp) = node1(430, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4752 "src/grammar.c"
    break;

  case 280: /* MAhO_430: MAhO_662 free_modifier_32  */
#line 1025 "grammar/grammar.y"
                           { (*yyvalp) = node2(430, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4758 "src/grammar.c"
    break;

  case 281: /* JOhI_431: JOhI_657  */
#line 1028 "grammar/grammar.y"
                           { (*yyvalp) = node1(431, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4764 "src/grammar.c"
    break;

  case 282: /* JOhI_431: JOhI_657 free_modifier_32  */
#line 1030 "grammar/grammar.y"
                           { (*yyvalp) = node2(431, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4770 "src/grammar.c"
    break;

  case 283: /* quote_arg_432: quote_arg_A_433  */
#line 1033 "grammar/grammar.y"
                           { (*yyvalp) = node1(432, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4776 "src/grammar.c"
    break;

  case 284: /* quote_arg_432: quote_arg_A_433 free_modifier_32  */
#line 1035 "grammar/grammar.y"
                           { (*yyvalp) = node2(432, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4782 "src/grammar.c"
    break;

  case 285: /* quote_arg_A_433: ZOI_quote_434  */
#line 1038 "grammar/grammar.y"
                           { (*yyvalp) = node1(433, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4788 "src/grammar.c"
    break;

  case 286: /* quote_arg_A_433: ZO_quote_435  */
#line 1040 "grammar/grammar.y"
                           { (*yyvalp) = node1(433, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4794 "src/grammar.c"
    break;

  case 287: /* quote_arg_A_433: LOhU_quote_436  */
#line 1042 "grammar/grammar.y"
                           { (*yyvalp) = node1(433, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4800 "src/grammar.c"
    break;

  case 288: /* quote_arg_A_433: LU_571 text_0 LIhU_gap_448  */
#line 1044 "grammar/grammar.y"
                           { (*yyvalp) = node3(433, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4806 "src/grammar.c"
    break;

  case 289: /* ZOI_quote_434: ZOI_627 any_word_698 anything_699 any_word_698  */
#line 1047 "grammar/grammar.y"
                           { (*yyvalp) = node4(434, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4812 "src/grammar.c"
    break;

  case 290: /* ZO_quote_435: ZO_626 any_word_698  */
#line 1050 "grammar/grammar.y"
                           { (*yyvalp) = node2(435, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4818 "src/grammar.c"
    break;

  case 291: /* LOhU_quote_436: LOhU_569 any_words_697 LEhU_565  */
#line 1053 "grammar/grammar.y"
                           { (*yyvalp) = node3(436, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4824 "src/grammar.c"
    break;

  case 292: /* FIhO_437: FIhO_532  */
#line 1056 "grammar/grammar.y"
                           { (*yyvalp) = node1(437, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4830 "src/grammar.c"
    break;

  case 293: /* FIhO_437: FIhO_532 free_modifier_32  */
#line 1058 "grammar/grammar.y"
                           { (*yyvalp) = node2(437, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4836 "src/grammar.c"
    break;

  case 294: /* PEhO_438: PEhO_673  */
#line 1061 "grammar/grammar.y"
                           { (*yyvalp) = node1(438, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4842 "src/grammar.c"
    break;

  case 295: /* PEhO_438: PEhO_673 free_modifier_32  */
#line 1063 "grammar/grammar.y"
                           { (*yyvalp) = node2(438, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4848 "src/grammar.c"
    break;

  case 296: /* BIhE_439: BIhE_650  */
#line 1066 "grammar/grammar.y"
                           { (*yyvalp) = node1(439, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4854 "src/grammar.c"
    break;

  case 297: /* BIhE_439: BIhE_650 free_modifier_32  */
#line 1068 "grammar/grammar.y"
                           { (*yyvalp) = node2(439, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4860 "src/grammar.c"
    break;

  case 298: /* SEI_440: SEI_597  */
#line 1071 "grammar/grammar.y"
                           { (*yyvalp) = node1(440, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4866 "src/grammar.c"
    break;

  case 299: /* SEI_440: SEI_597 free_modifier_32  */
#line 1073 "grammar/grammar.y"
                           { (*yyvalp) = node2(440, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4872 "src/grammar.c"
    break;

  case 300: /* FUhA_441: FUhA_655  */
#line 1076 "grammar/grammar.y"
                           { (*yyvalp) = node1(441, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4878 "src/grammar.c"
    break;

  case 301: /* FUhA_441: FUhA_655 free_modifier_32  */
#line 1078 "grammar/grammar.y"
                           { (*yyvalp) = node2(441, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4884 "src/grammar.c"
    break;

  case 302: /* BEI_442: BEI_505  */
#line 1081 "grammar/grammar.y"
                           { (*yyvalp) = node1(442, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4890 "src/grammar.c"
    break;

  case 303: /* BEI_442: BEI_505 free_modifier_32  */
#line 1083 "grammar/grammar.y"
                           { (*yyvalp) = node2(442, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4896 "src/grammar.c"
    break;

  case 304: /* CO_443: CO_519  */
#line 1086 "grammar/grammar.y"
                           { (*yyvalp) = node1(443, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4902 "src/grammar.c"
    break;

  case 305: /* CO_443: CO_519 free_modifier_32  */
#line 1088 "grammar/grammar.y"
                           { (*yyvalp) = node2(443, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4908 "src/grammar.c"
    break;

  case 306: /* CEI_444: CEI_516  */
#line 1091 "grammar/grammar.y"
                           { (*yyvalp) = node1(444, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4914 "src/grammar.c"
    break;

  case 307: /* CEI_444: CEI_516 free_modifier_32  */
#line 1093 "grammar/grammar.y"
                           { (*yyvalp) = node2(444, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4920 "src/grammar.c"
    break;

  case 308: /* NA_445: NA_578  */
#line 1096 "grammar/grammar.y"
                           { (*yyvalp) = node1(445, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4926 "src/grammar.c"
    break;

  case 309: /* NA_445: NA_578 free_modifier_32  */
#line 1098 "grammar/grammar.y"
                           { (*yyvalp) = node2(445, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4932 "src/grammar.c"
    break;

  case 310: /* BE_446: BE_504  */
#line 1101 "grammar/grammar.y"
                           { (*yyvalp) = node1(446, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4938 "src/grammar.c"
    break;

  case 311: /* BE_446: BE_504 free_modifier_32  */
#line 1103 "grammar/grammar.y"
                           { (*yyvalp) = node2(446, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4944 "src/grammar.c"
    break;

  case 312: /* TUhE_447: TUhE_610  */
#line 1106 "grammar/grammar.y"
                           { (*yyvalp) = node1(447, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4950 "src/grammar.c"
    break;

  case 313: /* TUhE_447: TUhE_610 free_modifier_32  */
#line 1108 "grammar/grammar.y"
                           { (*yyvalp) = node2(447, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4956 "src/grammar.c"
    break;

  case 314: /* LIhU_gap_448: LIhU_567  */
#line 1111 "grammar/grammar.y"
                           { (*yyvalp) = node1(448, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4962 "src/grammar.c"
    break;

  case 315: /* LIhU_gap_448: error  */
#line 1113 "grammar/grammar.y"
                           { (*yyvalp) = elidable(LIhU_567); yyerrok; }
#line 4968 "src/grammar.c"
    break;

  case 316: /* gap_450: KU_556  */
#line 1116 "grammar/grammar.y"
                           { (*yyvalp) = node1(450, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4974 "src/grammar.c"
    break;

  case 317: /* gap_450: KU_556 free_modifier_32  */
#line 1118 "grammar/grammar.y"
                           { (*yyvalp) = node2(450, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4980 "src/grammar.c"
    break;

  case 318: /* gap_450: error  */
#line 1120 "grammar/grammar.y"
                           { (*yyvalp) = elidable(KU_556); yyerrok; }
#line 4986 "src/grammar.c"
    break;

  case 319: /* front_gap_451: CU_521  */
#line 1123 "grammar/grammar.y"
                           { (*yyvalp) = node1(451, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4992 "src/grammar.c"
    break;

  case 320: /* front_gap_451: CU_521 free_modifier_32  */
#line 1125 "grammar/grammar.y"
                           { (*yyvalp) = node2(451, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 4998 "src/grammar.c"
    break;

  case 321: /* MEX_gap_452: KUhE_658  */
#line 1128 "grammar/grammar.y"
                           { (*yyvalp) = node1(452, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5004 "src/grammar.c"
    break;

  case 322: /* MEX_gap_452: KUhE_658 free_modifier_32  */
#line 1130 "grammar/grammar.y"
                           { (*yyvalp) = node2(452, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5010 "src/grammar.c"
    break;

  case 323: /* MEX_gap_452: error  */
#line 1132 "grammar/grammar.y"
                           { (*yyvalp) = elidable(KUhE_658); yyerrok; }
#line 5016 "src/grammar.c"
    break;

  case 324: /* KEI_gap_453: KEI_552  */
#line 1135 "grammar/grammar.y"
                           { (*yyvalp) = node1(453, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5022 "src/grammar.c"
    break;

  case 325: /* KEI_gap_453: KEI_552 free_modifier_32  */
#line 1137 "grammar/grammar.y"
                           { (*yyvalp) = node2(453, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5028 "src/grammar.c"
    break;

  case 326: /* KEI_gap_453: error  */
#line 1139 "grammar/grammar.y"
                           { (*yyvalp) = elidable(KEI_552); yyerrok; }
#line 5034 "src/grammar.c"
    break;

  case 327: /* TUhU_gap_454: TUhU_611  */
#line 1142 "grammar/grammar.y"
                           { (*yyvalp) = node1(454, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5040 "src/grammar.c"
    break;

  case 328: /* TUhU_gap_454: TUhU_611 free_modifier_32  */
#line 1144 "grammar/grammar.y"
                           { (*yyvalp) = node2(454, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5046 "src/grammar.c"
    break;

  case 329: /* TUhU_gap_454: error  */
#line 1146 "grammar/grammar.y"
                           { (*yyvalp) = elidable(TUhU_611); yyerrok; }
#line 5052 "src/grammar.c"
    break;

  case 330: /* VAU_gap_456: VAU_614  */
#line 1149 "grammar/grammar.y"
                           { (*yyvalp) = node1(456, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5058 "src/grammar.c"
    break;

  case 331: /* VAU_gap_456: VAU_614 free_modifier_32  */
#line 1151 "grammar/grammar.y"
                           { (*yyvalp) = node2(456, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5064 "src/grammar.c"
    break;

  case 332: /* VAU_gap_456: error  */
#line 1153 "grammar/grammar.y"
                           { (*yyvalp) = elidable(VAU_614); yyerrok; }
#line 5070 "src/grammar.c"
    break;

  case 333: /* DOhU_gap_457: DOhU_526  */
#line 1156 "grammar/grammar.y"
                           { (*yyvalp) = node1(457, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5076 "src/grammar.c"
    break;

  case 334: /* DOhU_gap_457: error  */
#line 1158 "grammar/grammar.y"
                           { (*yyvalp) = elidable(DOhU_526); yyerrok; }
#line 5082 "src/grammar.c"
    break;

  case 335: /* FEhU_gap_458: FEhU_531  */
#line 1161 "grammar/grammar.y"
                           { (*yyvalp) = node1(458, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5088 "src/grammar.c"
    break;

  case 336: /* FEhU_gap_458: FEhU_531 free_modifier_32  */
#line 1163 "grammar/grammar.y"
                           { (*yyvalp) = node2(458, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5094 "src/grammar.c"
    break;

  case 337: /* FEhU_gap_458: error  */
#line 1165 "grammar/grammar.y"
                           { (*yyvalp) = elidable(FEhU_531); yyerrok; }
#line 5100 "src/grammar.c"
    break;

  case 338: /* SEhU_gap_459: SEhU_598  */
#line 1168 "grammar/grammar.y"
                           { (*yyvalp) = node1(459, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5106 "src/grammar.c"
    break;

  case 339: /* SEhU_gap_459: error  */
#line 1170 "grammar/grammar.y"
                           { (*yyvalp) = elidable(SEhU_598); yyerrok; }
#line 5112 "src/grammar.c"
    break;

  case 340: /* NUhU_gap_460: NUhU_588  */
#line 1173 "grammar/grammar.y"
                           { (*yyvalp) = node1(460, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5118 "src/grammar.c"
    break;

  case 341: /* NUhU_gap_460: NUhU_588 free_modifier_32  */
#line 1175 "grammar/grammar.y"
                           { (*yyvalp) = node2(460, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5124 "src/grammar.c"
    break;

  case 342: /* NUhU_gap_460: error  */
#line 1177 "grammar/grammar.y"
                           { (*yyvalp) = elidable(NUhU_588); yyerrok; }
#line 5130 "src/grammar.c"
    break;

  case 343: /* BOI_gap_461: BOI_651  */
#line 1180 "grammar/grammar.y"
                           { (*yyvalp) = node1(461, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5136 "src/grammar.c"
    break;

  case 344: /* BOI_gap_461: BOI_651 free_modifier_32  */
#line 1182 "grammar/grammar.y"
                           { (*yyvalp) = node2(461, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5142 "src/grammar.c"
    break;

  case 345: /* BOI_gap_461: error  */
#line 1184 "grammar/grammar.y"
                           { (*yyvalp) = elidable(BOI_651); yyerrok; }
#line 5148 "src/grammar.c"
    break;

  case 346: /* sub_gap_462: BOI_651  */
#line 1187 "grammar/grammar.y"
                           { (*yyvalp) = node1(462, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5154 "src/grammar.c"
    break;

  case 347: /* sub_gap_462: error  */
#line 1189 "grammar/grammar.y"
                           { (*yyvalp) = elidable(BOI_651); yyerrok; }
#line 5160 "src/grammar.c"
    break;

  case 348: /* LUhU_gap_463: LUhU_573  */
#line 1192 "grammar/grammar.y"
                           { (*yyvalp) = node1(463, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5166 "src/grammar.c"
    break;

  case 349: /* LUhU_gap_463: LUhU_573 free_modifier_32  */
#line 1194 "grammar/grammar.y"
                           { (*yyvalp) = node2(463, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5172 "src/grammar.c"
    break;

  case 350: /* LUhU_gap_463: error  */
#line 1196 "grammar/grammar.y"
                           { (*yyvalp) = elidable(LUhU_573); yyerrok; }
#line 5178 "src/grammar.c"
    break;

  case 351: /* GEhU_gap_464: GEhU_538  */
#line 1199 "grammar/grammar.y"
                           { (*yyvalp) = node1(464, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5184 "src/grammar.c"
    break;

  case 352: /* GEhU_gap_464: GEhU_538 free_modifier_32  */
#line 1201 "grammar/grammar.y"
                           { (*yyvalp) = node2(464, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5190 "src/grammar.c"
    break;

  case 353: /* GEhU_gap_464: error  */
#line 1203 "grammar/grammar.y"
                           { (*yyvalp) = elidable(GEhU_538); yyerrok; }
#line 5196 "src/grammar.c"
    break;

  case 354: /* MEhU_gap_465: MEhU_575  */
#line 1206 "grammar/grammar.y"
                           { (*yyvalp) = node1(465, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5202 "src/grammar.c"
    break;

  case 355: /* MEhU_gap_465: MEhU_575 free_modifier_32  */
#line 1208 "grammar/grammar.y"
                           { (*yyvalp) = node2(465, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5208 "src/grammar.c"
    break;

  case 356: /* MEhU_gap_465: error  */
#line 1210 "grammar/grammar.y"
                           { (*yyvalp) = elidable(MEhU_575); yyerrok; }
#line 5214 "src/grammar.c"
    break;

  case 357: /* KEhE_gap_466: KEhE_550  */
#line 1213 "grammar/grammar.y"
                           { (*yyvalp) = node1(466, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5220 "src/grammar.c"
    break;

  case 358: /* KEhE_gap_466: KEhE_550 free_modifier_32  */
#line 1215 "grammar/grammar.y"
                           { (*yyvalp) = node2(466, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5226 "src/grammar.c"
    break;

  case 359: /* KEhE_gap_466: error  */
#line 1217 "grammar/grammar.y"
                           { (*yyvalp) = elidable(KEhE_550); yyerrok; }
#line 5232 "src/grammar.c"
    break;

  case 360: /* BEhO_gap_467: BEhO_506  */
#line 1220 "grammar/grammar.y"
                           { (*yyvalp) = node1(467, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5238 "src/grammar.c"
    break;

  case 361: /* BEhO_gap_467: BEhO_506 free_modifier_32  */
#line 1222 "grammar/grammar.y"
                           { (*yyvalp) = node2(467, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5244 "src/grammar.c"
    break;

  case 362: /* BEhO_gap_467: error  */
#line 1224 "grammar/grammar.y"
                           { (*yyvalp) = elidable(BEhO_506); yyerrok; }
#line 5250 "src/grammar.c"
    break;

  case 363: /* TOI_gap_468: TOI_607  */
#line 1227 "grammar/grammar.y"
                           { (*yyvalp) = node1(468, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5256 "src/grammar.c"
    break;

  case 364: /* TOI_gap_468: error  */
#line 1229 "grammar/grammar.y"
                           { (*yyvalp) = elidable(TOI_607); yyerrok; }
#line 5262 "src/grammar.c"
    break;

  case 365: /* KUhO_gap_469: KUhO_557  */
#line 1232 "grammar/grammar.y"
                           { (*yyvalp) = node1(469, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5268 "src/grammar.c"
    break;

  case 366: /* KUhO_gap_469: KUhO_557 free_modifier_32  */
#line 1234 "grammar/grammar.y"
                           { (*yyvalp) = node2(469, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5274 "src/grammar.c"
    break;

  case 367: /* KUhO_gap_469: error  */
#line 1236 "grammar/grammar.y"
                           { (*yyvalp) = elidable(KUhO_557); yyerrok; }
#line 5280 "src/grammar.c"
    break;

  case 368: /* left_bracket_470: VEI_677  */
#line 1239 "grammar/grammar.y"
                           { (*yyvalp) = node1(470, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5286 "src/grammar.c"
    break;

  case 369: /* left_bracket_470: VEI_677 free_modifier_32  */
#line 1241 "grammar/grammar.y"
                           { (*yyvalp) = node2(470, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5292 "src/grammar.c"
    break;

  case 370: /* right_bracket_gap_471: VEhO_678  */
#line 1244 "grammar/grammar.y"
                           { (*yyvalp) = node1(471, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5298 "src/grammar.c"
    break;

  case 371: /* right_bracket_gap_471: VEhO_678 free_modifier_32  */
#line 1246 "grammar/grammar.y"
                           { (*yyvalp) = node2(471, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5304 "src/grammar.c"
    break;

  case 372: /* right_bracket_gap_471: error  */
#line 1248 "grammar/grammar.y"
                           { (*yyvalp) = elidable(VEhO_678); yyerrok; }
#line 5310 "src/grammar.c"
    break;

  case 373: /* LOhO_gap_472: LOhO_568  */
#line 1251 "grammar/grammar.y"
                           { (*yyvalp) = node1(472, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5316 "src/grammar.c"
    break;

  case 374: /* LOhO_gap_472: LOhO_568 free_modifier_32  */
#line 1253 "grammar/grammar.y"
                           { (*yyvalp) = node2(472, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5322 "src/grammar.c"
    break;

  case 375: /* LOhO_gap_472: error  */
#line 1255 "grammar/grammar.y"
                           { (*yyvalp) = elidable(LOhO_568); yyerrok; }
#line 5328 "src/grammar.c"
    break;

  case 376: /* TEhU_gap_473: TEhU_675  */
#line 1258 "grammar/grammar.y"
                           { (*yyvalp) = node1(473, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5334 "src/grammar.c"
    break;

  case 377: /* TEhU_gap_473: TEhU_675 free_modifier_32  */
#line 1260 "grammar/grammar.y"
                           { (*yyvalp) = node2(473, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5340 "src/grammar.c"
    break;

  case 378: /* TEhU_gap_473: error  */
#line 1262 "grammar/grammar.y"
                           { (*yyvalp) = elidable(TEhU_675); yyerrok; }
#line 5346 "src/grammar.c"
    break;

  case 379: /* right_br_no_free_474: VEhO_678  */
#line 1265 "grammar/grammar.y"
                           { (*yyvalp) = node1(474, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5352 "src/grammar.c"
    break;

  case 380: /* right_br_no_free_474: error  */
#line 1267 "grammar/grammar.y"
                           { (*yyvalp) = elidable(VEhO_678); yyerrok; }
#line 5358 "src/grammar.c"
    break;

  case 381: /* NUhA_475: NUhA_667  */
#line 1270 "grammar/grammar.y"
                           { (*yyvalp) = node1(475, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5364 "src/grammar.c"
    break;

  case 382: /* NUhA_475: NUhA_667 free_modifier_32  */
#line 1272 "grammar/grammar.y"
                           { (*yyvalp) = node2(475, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5370 "src/grammar.c"
    break;

  case 383: /* MOI_476: MOI_663  */
#line 1275 "grammar/grammar.y"
                           { (*yyvalp) = node1(476, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5376 "src/grammar.c"
    break;

  case 384: /* MOI_476: MOI_663 free_modifier_32  */
#line 1277 "grammar/grammar.y"
                           { (*yyvalp) = node2(476, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5382 "src/grammar.c"
    break;

  case 385: /* ME_477: ME_574  */
#line 1280 "grammar/grammar.y"
                           { (*yyvalp) = node1(477, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5388 "src/grammar.c"
    break;

  case 386: /* ME_477: ME_574 free_modifier_32  */
#line 1282 "grammar/grammar.y"
                           { (*yyvalp) = node2(477, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5394 "src/grammar.c"
    break;

  case 387: /* JAI_478: JAI_547  */
#line 1285 "grammar/grammar.y"
                           { (*yyvalp) = node1(478, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5400 "src/grammar.c"
    break;

  case 388: /* JAI_478: JAI_547 free_modifier_32  */
#line 1287 "grammar/grammar.y"
                           { (*yyvalp) = node2(478, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5406 "src/grammar.c"
    break;

  case 389: /* BO_479: BO_508  */
#line 1290 "grammar/grammar.y"
                           { (*yyvalp) = node1(479, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5412 "src/grammar.c"
    break;

  case 390: /* BO_479: BO_508 free_modifier_32  */
#line 1292 "grammar/grammar.y"
                           { (*yyvalp) = node2(479, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5418 "src/grammar.c"
    break;

  case 391: /* SE_480: SE_596  */
#line 1295 "grammar/grammar.y"
                           { (*yyvalp) = node1(480, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5424 "src/grammar.c"
    break;

  case 392: /* SE_480: SE_596 free_modifier_32  */
#line 1297 "grammar/grammar.y"
                           { (*yyvalp) = node2(480, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5430 "src/grammar.c"
    break;

  case 393: /* FA_481: FA_527  */
#line 1300 "grammar/grammar.y"
                           { (*yyvalp) = node1(481, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5436 "src/grammar.c"
    break;

  case 394: /* FA_481: FA_527 free_modifier_32  */
#line 1302 "grammar/grammar.y"
                           { (*yyvalp) = node2(481, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5442 "src/grammar.c"
    break;

  case 395: /* NAhE_482: NAhE_583  */
#line 1305 "grammar/grammar.y"
                           { (*yyvalp) = node1(482, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5448 "src/grammar.c"
    break;

  case 396: /* NAhE_482: NAhE_583 free_modifier_32  */
#line 1307 "grammar/grammar.y"
                           { (*yyvalp) = node2(482, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5454 "src/grammar.c"
    break;

  case 397: /* qualifier_483: LAhE_561  */
#line 1310 "grammar/grammar.y"
                           { (*yyvalp) = node1(483, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5460 "src/grammar.c"
    break;

  case 398: /* qualifier_483: LAhE_561 free_modifier_32  */
#line 1312 "grammar/grammar.y"
                           { (*yyvalp) = node2(483, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5466 "src/grammar.c"
    break;

  case 399: /* qualifier_483: NAhE_BO_809  */
#line 1314 "grammar/grammar.y"
                           { (*yyvalp) = node1(483, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5472 "src/grammar.c"
    break;

  case 400: /* NOI_484: NOI_585  */
#line 1317 "grammar/grammar.y"
                           { (*yyvalp) = node1(484, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5478 "src/grammar.c"
    break;

  case 401: /* NOI_484: NOI_585 free_modifier_32  */
#line 1319 "grammar/grammar.y"
                           { (*yyvalp) = node2(484, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5484 "src/grammar.c"
    break;

  case 402: /* GOI_485: GOI_542  */
#line 1322 "grammar/grammar.y"
                           { (*yyvalp) = node1(485, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5490 "src/grammar.c"
    break;

  case 403: /* GOI_485: GOI_542 free_modifier_32  */
#line 1324 "grammar/grammar.y"
                           { (*yyvalp) = node2(485, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5496 "src/grammar.c"
    break;

  case 404: /* subscript_486: XI_424 number_812 sub_gap_462  */
#line 1327 "grammar/grammar.y"
                           { (*yyvalp) = node3(486, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5502 "src/grammar.c"
    break;

  case 405: /* subscript_486: XI_424 left_bracket_470 MEX_310 right_br_no_free_474  */
#line 1329 "grammar/grammar.y"
                           { (*yyvalp) = node4(486, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5508 "src/grammar.c"
    break;

  case 406: /* subscript_486: XI_424 lerfu_string_817 sub_gap_462  */
#line 1331 "grammar/grammar.y"
                           { (*yyvalp) = node3(486, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5514 "src/grammar.c"
    break;

  case 407: /* ZIhE_487: ZIhE_625  */
#line 1334 "grammar/grammar.y"
                           { (*yyvalp) = node1(487, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5520 "src/grammar.c"
    break;

  case 408: /* ZIhE_487: ZIhE_625 free_modifier_32  */
#line 1336 "grammar/grammar.y"
                           { (*yyvalp) = node2(487, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5526 "src/grammar.c"
    break;

  case 409: /* LE_488: LE_562  */
#line 1339 "grammar/grammar.y"
                           { (*yyvalp) = node1(488, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5532 "src/grammar.c"
    break;

  case 410: /* LE_488: LE_562 free_modifier_32  */
#line 1341 "grammar/grammar.y"
                           { (*yyvalp) = node2(488, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5538 "src/grammar.c"
    break;

  case 411: /* LI_489: LI_566  */
#line 1344 "grammar/grammar.y"
                           { (*yyvalp) = node1(489, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5544 "src/grammar.c"
    break;

  case 412: /* LI_489: LI_566 free_modifier_32  */
#line 1346 "grammar/grammar.y"
                           { (*yyvalp) = node2(489, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5550 "src/grammar.c"
    break;

  case 413: /* mod_head_490: tag_491  */
#line 1349 "grammar/grammar.y"
                           { (*yyvalp) = node1(490, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5556 "src/grammar.c"
    break;

  case 414: /* mod_head_490: FA_481  */
#line 1351 "grammar/grammar.y"
                           { (*yyvalp) = node1(490, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5562 "src/grammar.c"
    break;

  case 415: /* tag_491: tense_modal_815  */
#line 1354 "grammar/grammar.y"
                           { (*yyvalp) = node1(491, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5568 "src/grammar.c"
    break;

  case 416: /* tag_491: tag_491 JOIK_JEK_422 tense_modal_815  */
#line 1356 "grammar/grammar.y"
                           { (*yyvalp) = node3(491, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5574 "src/grammar.c"
    break;

  case 417: /* ZOhU_492: ZOhU_628  */
#line 1359 "grammar/grammar.y"
                           { (*yyvalp) = node1(492, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5580 "src/grammar.c"
    break;

  case 418: /* ZOhU_492: ZOhU_628 free_modifier_32  */
#line 1361 "grammar/grammar.y"
                           { (*yyvalp) = node2(492, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5586 "src/grammar.c"
    break;

  case 419: /* KE_493: KE_551  */
#line 1364 "grammar/grammar.y"
                           { (*yyvalp) = node1(493, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5592 "src/grammar.c"
    break;

  case 420: /* KE_493: KE_551 free_modifier_32  */
#line 1366 "grammar/grammar.y"
                           { (*yyvalp) = node2(493, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5598 "src/grammar.c"
    break;

  case 421: /* PEhE_494: PEhE_591  */
#line 1369 "grammar/grammar.y"
                           { (*yyvalp) = node1(494, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5604 "src/grammar.c"
    break;

  case 422: /* PEhE_494: PEhE_591 free_modifier_32  */
#line 1371 "grammar/grammar.y"
                           { (*yyvalp) = node2(494, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5610 "src/grammar.c"
    break;

  case 423: /* CEhE_495: CEhE_517  */
#line 1374 "grammar/grammar.y"
                           { (*yyvalp) = node1(495, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5616 "src/grammar.c"
    break;

  case 424: /* CEhE_495: CEhE_517 free_modifier_32  */
#line 1376 "grammar/grammar.y"
                           { (*yyvalp) = node2(495, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5622 "src/grammar.c"
    break;

  case 425: /* NUhI_496: NUhI_587  */
#line 1379 "grammar/grammar.y"
                           { (*yyvalp) = node1(496, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5628 "src/grammar.c"
    break;

  case 426: /* NUhI_496: NUhI_587 free_modifier_32  */
#line 1381 "grammar/grammar.y"
                           { (*yyvalp) = node2(496, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5634 "src/grammar.c"
    break;

  case 427: /* VUhO_497: VUhO_617  */
#line 1384 "grammar/grammar.y"
                           { (*yyvalp) = node1(497, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5640 "src/grammar.c"
    break;

  case 428: /* VUhO_497: VUhO_617 free_modifier_32  */
#line 1386 "grammar/grammar.y"
                           { (*yyvalp) = node2(497, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5646 "src/grammar.c"
    break;

  case 429: /* SOI_498: SOI_602  */
#line 1389 "grammar/grammar.y"
                           { (*yyvalp) = node1(498, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5652 "src/grammar.c"
    break;

  case 430: /* SOI_498: SOI_602 free_modifier_32  */
#line 1391 "grammar/grammar.y"
                           { (*yyvalp) = node2(498, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5658 "src/grammar.c"
    break;

  case 431: /* LA_499: LA_558  */
#line 1394 "grammar/grammar.y"
                           { (*yyvalp) = node1(499, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5664 "src/grammar.c"
    break;

  case 432: /* LA_499: LA_558 free_modifier_32  */
#line 1396 "grammar/grammar.y"
                           { (*yyvalp) = node2(499, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5670 "src/grammar.c"
    break;

  case 433: /* utterance_ordinal_801: lexer_A_905  */
#line 1399 "grammar/grammar.y"
                           { (*yyvalp) = node1(801, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5676 "src/grammar.c"
    break;

  case 434: /* EK_802: lexer_B_910  */
#line 1402 "grammar/grammar.y"
                           { (*yyvalp) = node1(802, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5682 "src/grammar.c"
    break;

  case 435: /* EK_802: lexer_B_910 free_modifier_32  */
#line 1404 "grammar/grammar.y"
                           { (*yyvalp) = node2(802, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5688 "src/grammar.c"
    break;

  case 436: /* EK_BO_803: lexer_C_915  */
#line 1407 "grammar/grammar.y"
                           { (*yyvalp) = node1(803, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5694 "src/grammar.c"
    break;

  case 437: /* EK_BO_803: lexer_C_915 free_modifier_32  */
#line 1409 "grammar/grammar.y"
                           { (*yyvalp) = node2(803, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5700 "src/grammar.c"
    break;

  case 438: /* EK_KE_804: lexer_D_916  */
#line 1412 "grammar/grammar.y"
                           { (*yyvalp) = node1(804, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5706 "src/grammar.c"
    break;

  case 439: /* EK_KE_804: lexer_D_916 free_modifier_32  */
#line 1414 "grammar/grammar.y"
                           { (*yyvalp) = node2(804, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5712 "src/grammar.c"
    break;

  case 440: /* JEK_805: lexer_E_925  */
#line 1417 "grammar/grammar.y"
                           { (*yyvalp) = node1(805, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5718 "src/grammar.c"
    break;

  case 441: /* JOIK_806: lexer_F_930  */
#line 1420 "grammar/grammar.y"
                           { (*yyvalp) = node1(806, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5724 "src/grammar.c"
    break;

  case 442: /* GEK_807: lexer_G_935  */
#line 1423 "grammar/grammar.y"
                           { (*yyvalp) = node1(807, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5730 "src/grammar.c"
    break;

  case 443: /* GEK_807: lexer_G_935 free_modifier_32  */
#line 1425 "grammar/grammar.y"
                           { (*yyvalp) = node2(807, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5736 "src/grammar.c"
    break;

  case 444: /* GUhEK_808: lexer_H_940  */
#line 1428 "grammar/grammar.y"
                           { (*yyvalp) = node1(808, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5742 "src/grammar.c"
    break;

  case 445: /* GUhEK_808: lexer_H_940 free_modifier_32  */
#line 1430 "grammar/grammar.y"
                           { (*yyvalp) = node2(808, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5748 "src/grammar.c"
    break;

  case 446: /* NAhE_BO_809: lexer_I_945  */
#line 1433 "grammar/grammar.y"
                           { (*yyvalp) = node1(809, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5754 "src/grammar.c"
    break;

  case 447: /* NAhE_BO_809: lexer_I_945 free_modifier_32  */
#line 1435 "grammar/grammar.y"
                           { (*yyvalp) = node2(809, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5760 "src/grammar.c"
    break;

  case 448: /* NA_KU_810: lexer_J_950  */
#line 1438 "grammar/grammar.y"
                           { (*yyvalp) = node1(810, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5766 "src/grammar.c"
    break;

  case 449: /* NA_KU_810: lexer_J_950 free_modifier_32  */
#line 1440 "grammar/grammar.y"
                           { (*yyvalp) = node2(810, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5772 "src/grammar.c"
    break;

  case 450: /* I_BO_811: lexer_K_955  */
#line 1443 "grammar/grammar.y"
                           { (*yyvalp) = node1(811, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5778 "src/grammar.c"
    break;

  case 451: /* I_BO_811: lexer_K_955 free_modifier_32  */
#line 1445 "grammar/grammar.y"
                           { (*yyvalp) = node2(811, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5784 "src/grammar.c"
    break;

  case 452: /* number_812: lexer_L_960  */
#line 1448 "grammar/grammar.y"
                           { (*yyvalp) = node1(812, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5790 "src/grammar.c"
    break;

  case 453: /* GIhEK_BO_813: lexer_M_965  */
#line 1451 "grammar/grammar.y"
                           { (*yyvalp) = node1(813, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5796 "src/grammar.c"
    break;

  case 454: /* GIhEK_BO_813: lexer_M_965 free_modifier_32  */
#line 1453 "grammar/grammar.y"
                           { (*yyvalp) = node2(813, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5802 "src/grammar.c"
    break;

  case 455: /* GIhEK_KE_814: lexer_N_966  */
#line 1456 "grammar/grammar.y"
                           { (*yyvalp) = node1(814, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5808 "src/grammar.c"
    break;

  case 456: /* GIhEK_KE_814: lexer_N_966 free_modifier_32  */
#line 1458 "grammar/grammar.y"
                           { (*yyvalp) = node2(814, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5814 "src/grammar.c"
    break;

  case 457: /* tense_modal_815: lexer_O_970  */
#line 1461 "grammar/grammar.y"
                           { (*yyvalp) = node1(815, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5820 "src/grammar.c"
    break;

  case 458: /* tense_modal_815: lexer_O_970 free_modifier_32  */
#line 1463 "grammar/grammar.y"
                           { (*yyvalp) = node2(815, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5826 "src/grammar.c"
    break;

  case 459: /* tense_modal_815: FIhO_437 selbri_130 FEhU_gap_458  */
#line 1465 "grammar/grammar.y"
                           { (*yyvalp) = node3(815, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5832 "src/grammar.c"
    break;

  case 460: /* GIK_816: lexer_P_980  */
#line 1468 "grammar/grammar.y"
                           { (*yyvalp) = node1(816, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5838 "src/grammar.c"
    break;

  case 461: /* GIK_816: lexer_P_980 free_modifier_32  */
#line 1470 "grammar/grammar.y"
                           { (*yyvalp) = node2(816, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5844 "src/grammar.c"
    break;

  case 462: /* lerfu_string_817: lexer_Q_985  */
#line 1473 "grammar/grammar.y"
                           { (*yyvalp) = node1(817, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5850 "src/grammar.c"
    break;

  case 463: /* GIhEK_818: lexer_R_990  */
#line 1476 "grammar/grammar.y"
                           { (*yyvalp) = node1(818, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5856 "src/grammar.c"
    break;

  case 464: /* GIhEK_818: lexer_R_990 free_modifier_32  */
#line 1478 "grammar/grammar.y"
                           { (*yyvalp) = node2(818, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5862 "src/grammar.c"
    break;

  case 465: /* I_819: lexer_S_995  */
#line 1481 "grammar/grammar.y"
                           { (*yyvalp) = node1(819, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5868 "src/grammar.c"
    break;

  case 466: /* I_819: lexer_S_995 free_modifier_32  */
#line 1483 "grammar/grammar.y"
                           { (*yyvalp) = node2(819, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5874 "src/grammar.c"
    break;

  case 467: /* I_JEK_820: lexer_T_1000  */
#line 1486 "grammar/grammar.y"
                           { (*yyvalp) = node1(820, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5880 "src/grammar.c"
    break;

  case 468: /* I_JEK_820: lexer_T_1000 free_modifier_32  */
#line 1488 "grammar/grammar.y"
                           { (*yyvalp) = node2(820, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5886 "src/grammar.c"
    break;

  case 469: /* JEK_BO_821: lexer_U_1005  */
#line 1491 "grammar/grammar.y"
                           { (*yyvalp) = node1(821, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5892 "src/grammar.c"
    break;

  case 470: /* JEK_BO_821: lexer_U_1005 free_modifier_32  */
#line 1493 "grammar/grammar.y"
                           { (*yyvalp) = node2(821, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5898 "src/grammar.c"
    break;

  case 471: /* JOIK_BO_822: lexer_V_1010  */
#line 1496 "grammar/grammar.y"
                           { (*yyvalp) = node1(822, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5904 "src/grammar.c"
    break;

  case 472: /* JOIK_BO_822: lexer_V_1010 free_modifier_32  */
#line 1498 "grammar/grammar.y"
                           { (*yyvalp) = node2(822, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5910 "src/grammar.c"
    break;

  case 473: /* JOIK_KE_823: lexer_W_1015  */
#line 1501 "grammar/grammar.y"
                           { (*yyvalp) = node1(823, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5916 "src/grammar.c"
    break;

  case 474: /* JOIK_KE_823: lexer_W_1015 free_modifier_32  */
#line 1503 "grammar/grammar.y"
                           { (*yyvalp) = node2(823, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5922 "src/grammar.c"
    break;

  case 475: /* PA_MOI_824: lexer_Y_1025  */
#line 1506 "grammar/grammar.y"
                           { (*yyvalp) = node1(824, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 5928 "src/grammar.c"
    break;


#line 5932 "src/grammar.c"

      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yylhsNonterm (yyrule), yyvalp, yylocp);

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYNOMEM
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YY_USE (yy0);
  YY_USE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yy_accessing_symbol (yys->yylrState),
                &yys->yysemantics.yyval);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YY_FPRINTF ((stderr, "%s unresolved", yymsg));
          else
            YY_FPRINTF ((stderr, "%s incomplete", yymsg));
          YY_SYMBOL_PRINT ("", yy_accessing_symbol (yys->yylrState), YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh);
        }
    }
}

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yy_state_t yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yy_state_t yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yyn) \
  0

/** The action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline int
yygetLRActions (yy_state_t yystate, yysymbol_kind_t yytoken, const short** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yytoken == YYSYMBOL_YYerror)
    {
      // This is the error token.
      *yyconflicts = yyconfl;
      return 0;
    }
  else if (yyisDefaultedState (yystate)
           || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyconflicts = yyconfl;
      return -yydefact[yystate];
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return yytable[yyindex];
    }
  else
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return 0;
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yy_state_t
yyLRgotoState (yy_state_t yystate, yysymbol_kind_t yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YY_ASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates
    = YY_CAST (yyGLRState**,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yystates[0]));
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds
    = YY_CAST (yybool*,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yylookaheadNeeds[0]));
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  memset (yyset->yylookaheadNeeds,
          0,
          YY_CAST (YYSIZE_T, yyset->yycapacity) * sizeof yyset->yylookaheadNeeds[0]);
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, YYPTRDIFF_T yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yysize)
                         * sizeof yystackp->yynextFree[0]));
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS, YYTOITEMS, YYX, YYTYPE)                   \
  &((YYTOITEMS)                                                         \
    - ((YYFROMITEMS) - YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX))))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  YYPTRDIFF_T yynewSize;
  YYPTRDIFF_T yyn;
  YYPTRDIFF_T yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yynewSize)
                         * sizeof yynewItems[0]));
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*YY_REINTERPRET_CAST (yybool *, yyp0))
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YY_DPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  YYPTRDIFF_T yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            YY_DPRINTF ((stderr, "Removing dead stacks.\n"));
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            YY_DPRINTF ((stderr, "Rename stack %ld -> %ld.\n",
                        YY_CAST (long, yyi), YY_CAST (long, yyj)));
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
            YYPTRDIFF_T yyposn,
            YYSTYPE* yyvalp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyval = *yyvalp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
                 YYPTRDIFF_T yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YY_ASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if YYDEBUG

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule)
{
  int yynrhs = yyrhsLength (yyrule);
  int yyi;
  YY_FPRINTF ((stderr, "Reducing stack %ld by rule %d (line %d):\n",
               YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YY_FPRINTF ((stderr, "   $%d = ", yyi + 1));
      yy_symbol_print (stderr,
                       yy_accessing_symbol (yyvsp[yyi - yynrhs + 1].yystate.yylrState),
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yyval                       );
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YY_FPRINTF ((stderr, " (unresolved)"));
      YY_FPRINTF ((stderr, "\n"));
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs
        = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yytops.yystates[yyk]);
      YY_ASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp, yyk,
                           yyvalp);
    }
  else
    {
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yyGLRState* yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      int yyi;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyk, yyvalp);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  YYPTRDIFF_T yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yyval;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yyval);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        YY_DPRINTF ((stderr,
                     "Parse on stack %ld rejected by rule %d (line %d).\n",
                     YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
      if (yyflag != yyok)
        return yyflag;
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yyval);
    }
  else
    {
      YYPTRDIFF_T yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yy_state_t yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YY_DPRINTF ((stderr,
                   "Reduced stack %ld by rule %d (line %d); action deferred.  "
                   "Now in state %d.\n",
                   YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule],
                   yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YY_DPRINTF ((stderr, "Merging stack %ld into stack %ld.\n",
                                 YY_CAST (long, yyk), YY_CAST (long, yyi)));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static YYPTRDIFF_T
yysplitStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YY_ASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yycapacity <= yystackp->yytops.yysize)
    {
      YYPTRDIFF_T state_size = YYSIZEOF (yystackp->yytops.yystates[0]);
      YYPTRDIFF_T half_max_capacity = YYSIZE_MAXIMUM / 2 / state_size;
      if (half_max_capacity < yystackp->yytops.yycapacity)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      {
        yyGLRState** yynewStates
          = YY_CAST (yyGLRState**,
                     YYREALLOC (yystackp->yytops.yystates,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewStates[0])));
        if (yynewStates == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yystates = yynewStates;
      }

      {
        yybool* yynewLookaheadNeeds
          = YY_CAST (yybool*,
                     YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewLookaheadNeeds[0])));
        if (yynewLookaheadNeeds == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
      }
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize - 1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       0 < yyn;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yyval = yys0->yysemantics.yyval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yyval = yys1->yysemantics.yyval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YY_ASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, -1, yyvalp);
    yychar = yychar_current;
    yylval = yylval_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, empty>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1));
  else
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, tokens %ld .. %ld>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1, YY_CAST (long, yys->yyposn + 1),
                 YY_CAST (long, yyx->yystate->yyposn)));
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YY_FPRINTF ((stderr, "%*s%s <empty>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState))));
          else
            YY_FPRINTF ((stderr, "%*s%s <tokens %ld .. %ld>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState)),
                         YY_CAST (long, yystates[yyi-1]->yyposn + 1),
                         YY_CAST (long, yystates[yyi]->yyposn)));
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1)
{
  YY_USE (yyx0);
  YY_USE (yyx1);

#if YYDEBUG
  YY_FPRINTF ((stderr, "Ambiguity detected.\n"));
  YY_FPRINTF ((stderr, "Option 1,\n"));
  yyreportTree (yyx0, 2);
  YY_FPRINTF ((stderr, "\nOption 2,\n"));
  yyreportTree (yyx1, 2);
  YY_FPRINTF ((stderr, "\n"));
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yyval;
  YYRESULTTAG yyflag;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              return yyreportAmbiguity (yybest, yyp);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YY_ASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yyval);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yyval_other;
                yyflag = yyresolveAction (yyp, yystackp, &yyval_other);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yy_accessing_symbol (yys->yylrState),
                                &yyval);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yyval, &yyval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yyval);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yyval = yyval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             ));
    }
  return yyok;
}

/** Called when returning to deterministic operation to clean up the extra
 * stacks. */
static void
yycompressStack (yyGLRStack* yystackp)
{
  /* yyr is the state after the split point.  */
  yyGLRState *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  {
    yyGLRState *yyp, *yyq;
    for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
         yyp != yystackp->yysplitPoint;
         yyr = yyp, yyp = yyq, yyq = yyp->yypred)
      yyp->yypred = yyr;
  }

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk,
                   YYPTRDIFF_T yyposn)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yy_state_t yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YY_DPRINTF ((stderr, "Stack %ld Entering state %d\n",
                   YY_CAST (long, yyk), yystate));

      YY_ASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule]);
          if (yyflag == yyerr)
            {
              YY_DPRINTF ((stderr,
                           "Stack %ld dies "
                           "(predicate failure or explicit user error).\n",
                           YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yysymbol_kind_t yytoken = yygetToken (&yychar);
          const short* yyconflicts;
          const int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;

          for (/* nothing */; *yyconflicts; yyconflicts += 1)
            {
              YYRESULTTAG yyflag;
              YYPTRDIFF_T yynewStack = yysplitStack (yystackp, yyk);
              YY_DPRINTF ((stderr, "Splitting off stack %ld from %ld.\n",
                           YY_CAST (long, yynewStack), YY_CAST (long, yyk)));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts]);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn));
              else if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yynewStack)));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction]);
              if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr,
                               "Stack %ld dies "
                               "(predicate failure or explicit user error).\n",
                               YY_CAST (long, yyk)));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}






static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState != 0)
    return;
  yyerror (YY_("syntax error"));
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yysymbol_kind_t yytoken;
        int yyj;
        if (yychar == YYEOF)
          yyFail (yystackp, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval);
            yychar = YYEMPTY;
          }
        yytoken = yygetToken (&yychar);
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  {
    YYPTRDIFF_T yyk;
    for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
      if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
        break;
    if (yyk >= yystackp->yytops.yysize)
      yyFail (yystackp, YY_NULLPTR);
    for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
      yymarkStackDeleted (yystackp, yyk);
    yyremoveDeletes (yystackp);
    yycompressStack (yystackp);
  }

  /* Pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      int yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYSYMBOL_YYerror;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYSYMBOL_YYerror
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              int yyaction = yytable[yyj];
              YY_SYMBOL_PRINT ("Shifting", yy_accessing_symbol (yyaction),
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yyaction,
                          yys->yyposn, &yylval);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, YY_NULLPTR);
}

#define YYCHK1(YYE)                             \
  do {                                          \
    switch (YYE) {                              \
    case yyok:     break;                       \
    case yyabort:  goto yyabortlab;             \
    case yyaccept: goto yyacceptlab;            \
    case yyerr:    goto yyuser_error;           \
    case yynomem:  goto yyexhaustedlab;         \
    default:       goto yybuglab;               \
    }                                           \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  YYPTRDIFF_T yyposn;

  YY_DPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode. */
      while (yytrue)
        {
          yy_state_t yystate = yystack.yytops.yystates[0]->yylrState;
          YY_DPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyRuleNum yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {
                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
            }
          else
            {
              yysymbol_kind_t yytoken = yygetToken (&yychar);
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
              if (*yyconflicts)
                /* Enter nondeterministic mode.  */
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {
                  /* Issue an error message unless the scanner already
                     did. */
                  if (yychar != YYerror)
                    yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
            }
        }

      /* Nondeterministic mode. */
      while (yytrue)
        {
          yysymbol_kind_t yytoken_to_shift;
          YYPTRDIFF_T yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yyreportSyntaxError (&yystack);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              yy_state_t yystate = yystack.yytops.yystates[yys]->yylrState;
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken_to_shift,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YY_DPRINTF ((stderr, "On stack %ld, ", YY_CAST (long, yys)));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval);
              YY_DPRINTF ((stderr, "Stack %ld now in state %d\n",
                           YY_CAST (long, yys),
                           yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;

 yybuglab:
  YY_ASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturnlab;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;

 yyreturnlab:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          YYPTRDIFF_T yysize = yystack.yytops.yysize;
          YYPTRDIFF_T yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                    if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
/* Print *YYS and its predecessors. */
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YY_FPRINTF ((stderr, " -> "));
    }
  YY_FPRINTF ((stderr, "%d@%ld", yys->yylrState, YY_CAST (long, yys->yyposn)));
}

/* Print YYS (possibly NULL) and its predecessors. */
static void
yypstates (yyGLRState* yys)
{
  if (yys == YY_NULLPTR)
    YY_FPRINTF ((stderr, "<null>"));
  else
    yy_yypstack (yys);
  YY_FPRINTF ((stderr, "\n"));
}

/* Print the stack #YYK.  */
static void
yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

/* Print all the stacks.  */
static void
yypdumpstack (yyGLRStack* yystackp)
{
#define YYINDEX(YYX)                                                    \
  YY_CAST (long,                                                        \
           ((YYX)                                                       \
            ? YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX)) - yystackp->yyitems \
            : -1))

  yyGLRStackItem* yyp;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YY_FPRINTF ((stderr, "%3ld. ",
                   YY_CAST (long, yyp - yystackp->yyitems)));
      if (*YY_REINTERPRET_CAST (yybool *, yyp))
        {
          YY_ASSERT (yyp->yystate.yyisState);
          YY_ASSERT (yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Res: %d, LR State: %d, posn: %ld, pred: %ld",
                       yyp->yystate.yyresolved, yyp->yystate.yylrState,
                       YY_CAST (long, yyp->yystate.yyposn),
                       YYINDEX (yyp->yystate.yypred)));
          if (! yyp->yystate.yyresolved)
            YY_FPRINTF ((stderr, ", firstVal: %ld",
                         YYINDEX (yyp->yystate.yysemantics.yyfirstVal)));
        }
      else
        {
          YY_ASSERT (!yyp->yystate.yyisState);
          YY_ASSERT (!yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Option. rule: %d, state: %ld, next: %ld",
                       yyp->yyoption.yyrule - 1,
                       YYINDEX (yyp->yyoption.yystate),
                       YYINDEX (yyp->yyoption.yynext)));
        }
      YY_FPRINTF ((stderr, "\n"));
    }

  YY_FPRINTF ((stderr, "Tops:"));
  {
    YYPTRDIFF_T yyi;
    for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
      YY_FPRINTF ((stderr, "%ld: %ld; ", YY_CAST (long, yyi),
                   YYINDEX (yystackp->yytops.yystates[yyi])));
    YY_FPRINTF ((stderr, "\n"));
  }
#undef YYINDEX
}
#endif

#undef yylval
#undef yychar
#undef yynerrs




