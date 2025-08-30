/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 368 "grammar.y"

# include "lojban.h"

#line 75 "src/grammar.c"

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


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   374,   374,   377,   379,   381,   383,   385,   387,   390,
     392,   395,   397,   399,   401,   403,   406,   409,   411,   413,
     416,   418,   420,   422,   424,   427,   429,   432,   434,   436,
     439,   441,   443,   446,   448,   450,   453,   455,   457,   459,
     461,   463,   465,   467,   469,   472,   475,   477,   480,   482,
     484,   486,   488,   491,   493,   495,   497,   499,   502,   504,
     506,   508,   510,   512,   514,   516,   518,   520,   523,   526,
     528,   530,   533,   535,   538,   540,   543,   545,   548,   550,
     553,   555,   558,   560,   562,   565,   567,   570,   572,   575,
     577,   580,   582,   585,   587,   589,   591,   594,   596,   599,
     601,   604,   606,   609,   611,   613,   616,   618,   621,   623,
     625,   628,   630,   633,   635,   637,   639,   642,   644,   647,
     649,   651,   653,   655,   657,   659,   661,   664,   666,   669,
     671,   673,   675,   678,   680,   682,   684,   686,   689,   691,
     694,   696,   699,   701,   704,   706,   709,   711,   714,   716,
     719,   721,   723,   726,   728,   730,   733,   735,   737,   739,
     742,   745,   747,   750,   752,   755,   757,   759,   761,   763,
     765,   767,   769,   771,   773,   776,   778,   781,   783,   786,
     788,   791,   793,   795,   798,   800,   803,   805,   807,   810,
     812,   815,   818,   820,   823,   825,   827,   830,   832,   834,
     836,   839,   841,   844,   846,   848,   850,   852,   854,   857,
     859,   861,   864,   866,   869,   871,   873,   876,   878,   880,
     882,   884,   886,   888,   891,   893,   895,   898,   900,   903,
     905,   908,   910,   913,   915,   917,   919,   922,   924,   926,
     929,   931,   934,   936,   939,   941,   943,   945,   947,   949,
     951,   954,   956,   958,   961,   963,   966,   968,   971,   973,
     975,   978,   980,   982,   984,   987,   989,   992,   994,   997,
     999,  1001,  1003,  1006,  1008,  1011,  1013,  1016,  1018,  1021,
    1023,  1026,  1028,  1031,  1033,  1036,  1038,  1040,  1042,  1045,
    1048,  1051,  1054,  1056,  1059,  1061,  1064,  1066,  1069,  1071,
    1074,  1076,  1079,  1081,  1084,  1086,  1089,  1091,  1094,  1096,
    1099,  1101,  1104,  1106,  1109,  1111,  1114,  1116,  1118,  1121,
    1123,  1126,  1128,  1130,  1133,  1135,  1137,  1140,  1142,  1144,
    1147,  1149,  1151,  1154,  1156,  1159,  1161,  1163,  1166,  1168,
    1171,  1173,  1175,  1178,  1180,  1182,  1185,  1187,  1190,  1192,
    1194,  1197,  1199,  1201,  1204,  1206,  1208,  1211,  1213,  1215,
    1218,  1220,  1222,  1225,  1227,  1230,  1232,  1234,  1237,  1239,
    1242,  1244,  1246,  1249,  1251,  1253,  1256,  1258,  1260,  1263,
    1265,  1268,  1270,  1273,  1275,  1278,  1280,  1283,  1285,  1288,
    1290,  1293,  1295,  1298,  1300,  1303,  1305,  1308,  1310,  1312,
    1315,  1317,  1320,  1322,  1325,  1327,  1329,  1332,  1334,  1337,
    1339,  1342,  1344,  1347,  1349,  1352,  1354,  1357,  1359,  1362,
    1364,  1367,  1369,  1372,  1374,  1377,  1379,  1382,  1384,  1387,
    1389,  1392,  1394,  1397,  1400,  1402,  1405,  1407,  1410,  1412,
    1415,  1418,  1421,  1423,  1426,  1428,  1431,  1433,  1436,  1438,
    1441,  1443,  1446,  1449,  1451,  1454,  1456,  1459,  1461,  1463,
    1466,  1468,  1471,  1474,  1476,  1479,  1481,  1484,  1486,  1489,
    1491,  1494,  1496,  1499,  1501,  1504
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

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

#define YYPACT_NINF (-550)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-194)

#define yytable_value_is_error(Yyn) \
  0

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


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
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

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






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


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* toplevel: text_0 FAhO_529  */
#line 375 "grammar.y"
                           { yyval = toplevel(yyvsp[-1]); }
#line 2682 "src/grammar.c"
    break;

  case 3: /* text_0: text_A_1  */
#line 378 "grammar.y"
                           { yyval = node1(10000, yyvsp[0]); }
#line 2688 "src/grammar.c"
    break;

  case 4: /* text_0: indicators_411 text_A_1  */
#line 380 "grammar.y"
                           { yyval = node2(10000, yyvsp[-1], yyvsp[0]); }
#line 2694 "src/grammar.c"
    break;

  case 5: /* text_0: free_modifier_32 text_A_1  */
#line 382 "grammar.y"
                           { yyval = node2(10000, yyvsp[-1], yyvsp[0]); }
#line 2700 "src/grammar.c"
    break;

  case 6: /* text_0: cmene_404 text_A_1  */
#line 384 "grammar.y"
                           { yyval = node2(10000, yyvsp[-1], yyvsp[0]); }
#line 2706 "src/grammar.c"
    break;

  case 7: /* text_0: indicators_411 free_modifier_32 text_A_1  */
#line 386 "grammar.y"
                           { yyval = node3(10000, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2712 "src/grammar.c"
    break;

  case 8: /* text_0: NAI_581 text_0  */
#line 388 "grammar.y"
                           { yyval = node2(10000, yyvsp[-1], yyvsp[0]); }
#line 2718 "src/grammar.c"
    break;

  case 9: /* text_A_1: JOIK_JEK_422 text_B_2  */
#line 391 "grammar.y"
                           { yyval = node2(1, yyvsp[-1], yyvsp[0]); }
#line 2724 "src/grammar.c"
    break;

  case 10: /* text_A_1: text_B_2  */
#line 393 "grammar.y"
                           { yyval = node1(1, yyvsp[0]); }
#line 2730 "src/grammar.c"
    break;

  case 11: /* text_B_2: I_819 text_B_2  */
#line 396 "grammar.y"
                           { yyval = node2(2, yyvsp[-1], yyvsp[0]); }
#line 2736 "src/grammar.c"
    break;

  case 12: /* text_B_2: I_JEK_820 text_B_2  */
#line 398 "grammar.y"
                           { yyval = node2(2, yyvsp[-1], yyvsp[0]); }
#line 2742 "src/grammar.c"
    break;

  case 13: /* text_B_2: I_BO_811 text_B_2  */
#line 400 "grammar.y"
                           { yyval = node2(2, yyvsp[-1], yyvsp[0]); }
#line 2748 "src/grammar.c"
    break;

  case 14: /* text_B_2: para_mark_410 text_C_3  */
#line 402 "grammar.y"
                           { yyval = node2(2, yyvsp[-1], yyvsp[0]); }
#line 2754 "src/grammar.c"
    break;

  case 15: /* text_B_2: text_C_3  */
#line 404 "grammar.y"
                           { yyval = node1(2, yyvsp[0]); }
#line 2760 "src/grammar.c"
    break;

  case 16: /* text_C_3: paragraphs_4  */
#line 407 "grammar.y"
                           { yyval = node1(3, yyvsp[0]); }
#line 2766 "src/grammar.c"
    break;

  case 17: /* text_C_3: %empty  */
#line 409 "grammar.y"
                           { yyval = elidable(FAhO_529); }
#line 2772 "src/grammar.c"
    break;

  case 18: /* paragraphs_4: paragraph_10  */
#line 412 "grammar.y"
                           { yyval = node1(4, yyvsp[0]); }
#line 2778 "src/grammar.c"
    break;

  case 19: /* paragraphs_4: paragraph_10 para_mark_410 paragraphs_4  */
#line 414 "grammar.y"
                           { yyval = node3(4, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2784 "src/grammar.c"
    break;

  case 20: /* paragraph_10: statement_11  */
#line 417 "grammar.y"
                           { yyval = node1(10, yyvsp[0]); }
#line 2790 "src/grammar.c"
    break;

  case 21: /* paragraph_10: fragment_20  */
#line 419 "grammar.y"
                           { yyval = node1(10, yyvsp[0]); }
#line 2796 "src/grammar.c"
    break;

  case 22: /* paragraph_10: paragraph_10 I_819 statement_11  */
#line 421 "grammar.y"
                           { yyval = node3(10, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2802 "src/grammar.c"
    break;

  case 23: /* paragraph_10: paragraph_10 I_819 fragment_20  */
#line 423 "grammar.y"
                           { yyval = node3(10, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2808 "src/grammar.c"
    break;

  case 24: /* paragraph_10: paragraph_10 I_819  */
#line 425 "grammar.y"
                           { yyval = node2(10, yyvsp[-1], yyvsp[0]); }
#line 2814 "src/grammar.c"
    break;

  case 25: /* statement_11: statement_A_12  */
#line 428 "grammar.y"
                           { yyval = node1(11, yyvsp[0]); }
#line 2820 "src/grammar.c"
    break;

  case 26: /* statement_11: prenex_30 statement_11  */
#line 430 "grammar.y"
                           { yyval = node2(11, yyvsp[-1], yyvsp[0]); }
#line 2826 "src/grammar.c"
    break;

  case 27: /* statement_A_12: statement_B_13  */
#line 433 "grammar.y"
                           { yyval = node1(12, yyvsp[0]); }
#line 2832 "src/grammar.c"
    break;

  case 28: /* statement_A_12: statement_A_12 I_JEK_820 statement_B_13  */
#line 435 "grammar.y"
                           { yyval = node3(12, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2838 "src/grammar.c"
    break;

  case 29: /* statement_A_12: statement_A_12 I_JEK_820  */
#line 437 "grammar.y"
                           { yyval = node2(12, yyvsp[-1], yyvsp[0]); }
#line 2844 "src/grammar.c"
    break;

  case 30: /* statement_B_13: statement_C_14  */
#line 440 "grammar.y"
                           { yyval = node1(13, yyvsp[0]); }
#line 2850 "src/grammar.c"
    break;

  case 31: /* statement_B_13: statement_C_14 I_BO_811 statement_B_13  */
#line 442 "grammar.y"
                           { yyval = node3(13, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2856 "src/grammar.c"
    break;

  case 32: /* statement_B_13: statement_C_14 I_BO_811  */
#line 444 "grammar.y"
                           { yyval = node2(13, yyvsp[-1], yyvsp[0]); }
#line 2862 "src/grammar.c"
    break;

  case 33: /* statement_C_14: sentence_40  */
#line 447 "grammar.y"
                           { yyval = node1(14, yyvsp[0]); }
#line 2868 "src/grammar.c"
    break;

  case 34: /* statement_C_14: TUhE_447 text_B_2 TUhU_gap_454  */
#line 449 "grammar.y"
                           { yyval = node3(14, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2874 "src/grammar.c"
    break;

  case 35: /* statement_C_14: tag_491 TUhE_447 text_B_2 TUhU_gap_454  */
#line 451 "grammar.y"
                           { yyval = node4(14, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2880 "src/grammar.c"
    break;

  case 36: /* fragment_20: EK_802  */
#line 454 "grammar.y"
                           { yyval = node1(20, yyvsp[0]); }
#line 2886 "src/grammar.c"
    break;

  case 37: /* fragment_20: NA_445  */
#line 456 "grammar.y"
                           { yyval = node1(20, yyvsp[0]); }
#line 2892 "src/grammar.c"
    break;

  case 38: /* fragment_20: GIhEK_818  */
#line 458 "grammar.y"
                           { yyval = node1(20, yyvsp[0]); }
#line 2898 "src/grammar.c"
    break;

  case 39: /* fragment_20: quantifier_300  */
#line 460 "grammar.y"
                           { yyval = node1(20, yyvsp[0]); }
#line 2904 "src/grammar.c"
    break;

  case 40: /* fragment_20: terms_80 VAU_gap_456  */
#line 462 "grammar.y"
                           { yyval = node2(20, yyvsp[-1], yyvsp[0]); }
#line 2910 "src/grammar.c"
    break;

  case 41: /* fragment_20: relative_clauses_121  */
#line 464 "grammar.y"
                           { yyval = node1(20, yyvsp[0]); }
#line 2916 "src/grammar.c"
    break;

  case 42: /* fragment_20: links_161  */
#line 466 "grammar.y"
                           { yyval = node1(20, yyvsp[0]); }
#line 2922 "src/grammar.c"
    break;

  case 43: /* fragment_20: linkargs_160  */
#line 468 "grammar.y"
                           { yyval = node1(20, yyvsp[0]); }
#line 2928 "src/grammar.c"
    break;

  case 44: /* fragment_20: prenex_30  */
#line 470 "grammar.y"
                           { yyval = node1(20, yyvsp[0]); }
#line 2934 "src/grammar.c"
    break;

  case 45: /* prenex_30: terms_80 ZOhU_492  */
#line 473 "grammar.y"
                           { yyval = node2(30, yyvsp[-1], yyvsp[0]); }
#line 2940 "src/grammar.c"
    break;

  case 46: /* free_modifier_32: free_modifier_A_33  */
#line 476 "grammar.y"
                           { yyval = node1(32, yyvsp[0]); }
#line 2946 "src/grammar.c"
    break;

  case 47: /* free_modifier_32: free_modifier_A_33 free_modifier_32  */
#line 478 "grammar.y"
                           { yyval = node2(32, yyvsp[-1], yyvsp[0]); }
#line 2952 "src/grammar.c"
    break;

  case 48: /* free_modifier_A_33: vocative_35  */
#line 481 "grammar.y"
                           { yyval = node1(33, yyvsp[0]); }
#line 2958 "src/grammar.c"
    break;

  case 49: /* free_modifier_A_33: parenthetical_36  */
#line 483 "grammar.y"
                           { yyval = node1(33, yyvsp[0]); }
#line 2964 "src/grammar.c"
    break;

  case 50: /* free_modifier_A_33: discursive_bridi_34  */
#line 485 "grammar.y"
                           { yyval = node1(33, yyvsp[0]); }
#line 2970 "src/grammar.c"
    break;

  case 51: /* free_modifier_A_33: subscript_486  */
#line 487 "grammar.y"
                           { yyval = node1(33, yyvsp[0]); }
#line 2976 "src/grammar.c"
    break;

  case 52: /* free_modifier_A_33: utterance_ordinal_801  */
#line 489 "grammar.y"
                           { yyval = node1(33, yyvsp[0]); }
#line 2982 "src/grammar.c"
    break;

  case 53: /* discursive_bridi_34: SEI_440 selbri_130 SEhU_gap_459  */
#line 492 "grammar.y"
                           { yyval = node3(34, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2988 "src/grammar.c"
    break;

  case 54: /* discursive_bridi_34: SOI_498 sumti_90 SEhU_gap_459  */
#line 494 "grammar.y"
                           { yyval = node3(34, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2994 "src/grammar.c"
    break;

  case 55: /* discursive_bridi_34: SOI_498 sumti_90 sumti_90 SEhU_gap_459  */
#line 496 "grammar.y"
                           { yyval = node4(34, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3000 "src/grammar.c"
    break;

  case 56: /* discursive_bridi_34: SEI_440 terms_80 front_gap_451 selbri_130 SEhU_gap_459  */
#line 498 "grammar.y"
                           { yyval = node5(34, yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3006 "src/grammar.c"
    break;

  case 57: /* discursive_bridi_34: SEI_440 terms_80 selbri_130 SEhU_gap_459  */
#line 500 "grammar.y"
                           { yyval = node4(34, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3012 "src/grammar.c"
    break;

  case 58: /* vocative_35: DOI_415 selbri_130 DOhU_gap_457  */
#line 503 "grammar.y"
                           { yyval = node3(35, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3018 "src/grammar.c"
    break;

  case 59: /* vocative_35: DOI_415 selbri_130 relative_clauses_121 DOhU_gap_457  */
#line 505 "grammar.y"
                           { yyval = node4(35, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3024 "src/grammar.c"
    break;

  case 60: /* vocative_35: DOI_415 relative_clauses_121 selbri_130 DOhU_gap_457  */
#line 507 "grammar.y"
                           { yyval = node4(35, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3030 "src/grammar.c"
    break;

  case 61: /* vocative_35: DOI_415 relative_clauses_121 selbri_130 relative_clauses_121 DOhU_gap_457  */
#line 509 "grammar.y"
                           { yyval = node5(35, yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3036 "src/grammar.c"
    break;

  case 62: /* vocative_35: DOI_415 cmene_404 DOhU_gap_457  */
#line 511 "grammar.y"
                           { yyval = node3(35, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3042 "src/grammar.c"
    break;

  case 63: /* vocative_35: DOI_415 cmene_404 relative_clauses_121 DOhU_gap_457  */
#line 513 "grammar.y"
                           { yyval = node4(35, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3048 "src/grammar.c"
    break;

  case 64: /* vocative_35: DOI_415 relative_clauses_121 cmene_404 DOhU_gap_457  */
#line 515 "grammar.y"
                           { yyval = node4(35, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3054 "src/grammar.c"
    break;

  case 65: /* vocative_35: DOI_415 relative_clauses_121 cmene_404 relative_clauses_121 DOhU_gap_457  */
#line 517 "grammar.y"
                           { yyval = node5(35, yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3060 "src/grammar.c"
    break;

  case 66: /* vocative_35: DOI_415 sumti_90 DOhU_gap_457  */
#line 519 "grammar.y"
                           { yyval = node3(35, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3066 "src/grammar.c"
    break;

  case 67: /* vocative_35: DOI_415 DOhU_gap_457  */
#line 521 "grammar.y"
                           { yyval = node2(35, yyvsp[-1], yyvsp[0]); }
#line 3072 "src/grammar.c"
    break;

  case 68: /* parenthetical_36: TO_606 text_0 TOI_gap_468  */
#line 524 "grammar.y"
                           { yyval = node3(36, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3078 "src/grammar.c"
    break;

  case 69: /* sentence_40: bridi_tail_50  */
#line 527 "grammar.y"
                           { yyval = node1(40, yyvsp[0]); }
#line 3084 "src/grammar.c"
    break;

  case 70: /* sentence_40: terms_80 front_gap_451 bridi_tail_50  */
#line 529 "grammar.y"
                           { yyval = node3(40, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3090 "src/grammar.c"
    break;

  case 71: /* sentence_40: terms_80 bridi_tail_50  */
#line 531 "grammar.y"
                           { yyval = node2(40, yyvsp[-1], yyvsp[0]); }
#line 3096 "src/grammar.c"
    break;

  case 72: /* subsentence_41: sentence_40  */
#line 534 "grammar.y"
                           { yyval = node1(41, yyvsp[0]); }
#line 3102 "src/grammar.c"
    break;

  case 73: /* subsentence_41: prenex_30 subsentence_41  */
#line 536 "grammar.y"
                           { yyval = node2(41, yyvsp[-1], yyvsp[0]); }
#line 3108 "src/grammar.c"
    break;

  case 74: /* bridi_tail_50: bridi_tail_A_51  */
#line 539 "grammar.y"
                           { yyval = node1(50, yyvsp[0]); }
#line 3114 "src/grammar.c"
    break;

  case 75: /* bridi_tail_50: bridi_tail_A_51 GIhEK_KE_814 bridi_tail_50 KEhE_gap_466 tail_terms_71  */
#line 541 "grammar.y"
                           { yyval = node5(50, yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3120 "src/grammar.c"
    break;

  case 76: /* bridi_tail_A_51: bridi_tail_B_52  */
#line 544 "grammar.y"
                           { yyval = node1(51, yyvsp[0]); }
#line 3126 "src/grammar.c"
    break;

  case 77: /* bridi_tail_A_51: bridi_tail_A_51 GIhEK_818 bridi_tail_B_52 tail_terms_71  */
#line 546 "grammar.y"
                           { yyval = node4(51, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3132 "src/grammar.c"
    break;

  case 78: /* bridi_tail_B_52: bridi_tail_C_53  */
#line 549 "grammar.y"
                           { yyval = node1(52, yyvsp[0]); }
#line 3138 "src/grammar.c"
    break;

  case 79: /* bridi_tail_B_52: bridi_tail_C_53 GIhEK_BO_813 bridi_tail_B_52 tail_terms_71  */
#line 551 "grammar.y"
                           { yyval = node4(52, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3144 "src/grammar.c"
    break;

  case 80: /* bridi_tail_C_53: gek_sentence_54  */
#line 554 "grammar.y"
                           { yyval = node1(53, yyvsp[0]); }
#line 3150 "src/grammar.c"
    break;

  case 81: /* bridi_tail_C_53: selbri_130 tail_terms_71  */
#line 556 "grammar.y"
                           { yyval = node2(53, yyvsp[-1], yyvsp[0]); }
#line 3156 "src/grammar.c"
    break;

  case 82: /* gek_sentence_54: GEK_807 subsentence_41 GIK_816 subsentence_41 tail_terms_71  */
#line 559 "grammar.y"
                           { yyval = node5(54, yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3162 "src/grammar.c"
    break;

  case 83: /* gek_sentence_54: tag_491 KE_493 gek_sentence_54 KEhE_gap_466  */
#line 561 "grammar.y"
                           { yyval = node4(54, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3168 "src/grammar.c"
    break;

  case 84: /* gek_sentence_54: NA_445 gek_sentence_54  */
#line 563 "grammar.y"
                           { yyval = node2(54, yyvsp[-1], yyvsp[0]); }
#line 3174 "src/grammar.c"
    break;

  case 85: /* tail_terms_71: terms_80 VAU_gap_456  */
#line 566 "grammar.y"
                           { yyval = node2(71, yyvsp[-1], yyvsp[0]); }
#line 3180 "src/grammar.c"
    break;

  case 86: /* tail_terms_71: VAU_gap_456  */
#line 568 "grammar.y"
                           { yyval = node1(71, yyvsp[0]); }
#line 3186 "src/grammar.c"
    break;

  case 87: /* terms_80: terms_A_81  */
#line 571 "grammar.y"
                           { yyval = node1(80, yyvsp[0]); }
#line 3192 "src/grammar.c"
    break;

  case 88: /* terms_80: terms_80 terms_A_81  */
#line 573 "grammar.y"
                           { yyval = node2(80, yyvsp[-1], yyvsp[0]); }
#line 3198 "src/grammar.c"
    break;

  case 89: /* terms_A_81: terms_B_82  */
#line 576 "grammar.y"
                           { yyval = node1(81, yyvsp[0]); }
#line 3204 "src/grammar.c"
    break;

  case 90: /* terms_A_81: terms_A_81 PEhE_494 JOIK_JEK_422 terms_B_82  */
#line 578 "grammar.y"
                           { yyval = node4(81, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3210 "src/grammar.c"
    break;

  case 91: /* terms_B_82: term_83  */
#line 581 "grammar.y"
                           { yyval = node1(82, yyvsp[0]); }
#line 3216 "src/grammar.c"
    break;

  case 92: /* terms_B_82: terms_B_82 CEhE_495 term_83  */
#line 583 "grammar.y"
                           { yyval = node3(82, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3222 "src/grammar.c"
    break;

  case 93: /* term_83: sumti_90  */
#line 586 "grammar.y"
                           { yyval = node1(83, yyvsp[0]); }
#line 3228 "src/grammar.c"
    break;

  case 94: /* term_83: modifier_84  */
#line 588 "grammar.y"
                           { yyval = node1(83, yyvsp[0]); }
#line 3234 "src/grammar.c"
    break;

  case 95: /* term_83: term_set_85  */
#line 590 "grammar.y"
                           { yyval = node1(83, yyvsp[0]); }
#line 3240 "src/grammar.c"
    break;

  case 96: /* term_83: NA_KU_810  */
#line 592 "grammar.y"
                           { yyval = node1(83, yyvsp[0]); }
#line 3246 "src/grammar.c"
    break;

  case 97: /* modifier_84: mod_head_490 gap_450  */
#line 595 "grammar.y"
                           { yyval = node2(84, yyvsp[-1], yyvsp[0]); }
#line 3252 "src/grammar.c"
    break;

  case 98: /* modifier_84: mod_head_490 sumti_90  */
#line 597 "grammar.y"
                           { yyval = node2(84, yyvsp[-1], yyvsp[0]); }
#line 3258 "src/grammar.c"
    break;

  case 99: /* term_set_85: NUhI_496 terms_80 NUhU_gap_460  */
#line 600 "grammar.y"
                           { yyval = node3(85, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3264 "src/grammar.c"
    break;

  case 100: /* term_set_85: NUhI_496 GEK_807 terms_80 NUhU_gap_460 GIK_816 terms_80 NUhU_gap_460  */
#line 602 "grammar.y"
                           { yyval = node7(85, yyvsp[-6], yyvsp[-5], yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3270 "src/grammar.c"
    break;

  case 101: /* sumti_90: sumti_A_91  */
#line 605 "grammar.y"
                           { yyval = node1(90, yyvsp[0]); }
#line 3276 "src/grammar.c"
    break;

  case 102: /* sumti_90: sumti_A_91 VUhO_497 relative_clauses_121  */
#line 607 "grammar.y"
                           { yyval = node3(90, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3282 "src/grammar.c"
    break;

  case 103: /* sumti_A_91: sumti_B_92  */
#line 610 "grammar.y"
                           { yyval = node1(91, yyvsp[0]); }
#line 3288 "src/grammar.c"
    break;

  case 104: /* sumti_A_91: sumti_B_92 EK_KE_804 sumti_90 KEhE_gap_466  */
#line 612 "grammar.y"
                           { yyval = node4(91, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3294 "src/grammar.c"
    break;

  case 105: /* sumti_A_91: sumti_B_92 JOIK_KE_823 sumti_90 KEhE_gap_466  */
#line 614 "grammar.y"
                           { yyval = node4(91, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3300 "src/grammar.c"
    break;

  case 106: /* sumti_B_92: sumti_C_93  */
#line 617 "grammar.y"
                           { yyval = node1(92, yyvsp[0]); }
#line 3306 "src/grammar.c"
    break;

  case 107: /* sumti_B_92: sumti_B_92 JOIK_EK_421 sumti_C_93  */
#line 619 "grammar.y"
                           { yyval = node3(92, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3312 "src/grammar.c"
    break;

  case 108: /* sumti_C_93: sumti_D_94  */
#line 622 "grammar.y"
                           { yyval = node1(93, yyvsp[0]); }
#line 3318 "src/grammar.c"
    break;

  case 109: /* sumti_C_93: sumti_D_94 EK_BO_803 sumti_C_93  */
#line 624 "grammar.y"
                           { yyval = node3(93, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3324 "src/grammar.c"
    break;

  case 110: /* sumti_C_93: sumti_D_94 JOIK_BO_822 sumti_C_93  */
#line 626 "grammar.y"
                           { yyval = node3(93, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3330 "src/grammar.c"
    break;

  case 111: /* sumti_D_94: sumti_E_95  */
#line 629 "grammar.y"
                           { yyval = node1(94, yyvsp[0]); }
#line 3336 "src/grammar.c"
    break;

  case 112: /* sumti_D_94: GEK_807 sumti_90 GIK_816 sumti_D_94  */
#line 631 "grammar.y"
                           { yyval = node4(94, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3342 "src/grammar.c"
    break;

  case 113: /* sumti_E_95: sumti_F_96  */
#line 634 "grammar.y"
                           { yyval = node1(95, yyvsp[0]); }
#line 3348 "src/grammar.c"
    break;

  case 114: /* sumti_E_95: sumti_F_96 relative_clauses_121  */
#line 636 "grammar.y"
                           { yyval = node2(95, yyvsp[-1], yyvsp[0]); }
#line 3354 "src/grammar.c"
    break;

  case 115: /* sumti_E_95: quantifier_300 selbri_130 gap_450  */
#line 638 "grammar.y"
                           { yyval = node3(95, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3360 "src/grammar.c"
    break;

  case 116: /* sumti_E_95: quantifier_300 selbri_130 gap_450 relative_clauses_121  */
#line 640 "grammar.y"
                           { yyval = node4(95, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3366 "src/grammar.c"
    break;

  case 117: /* sumti_F_96: sumti_G_97  */
#line 643 "grammar.y"
                           { yyval = node1(96, yyvsp[0]); }
#line 3372 "src/grammar.c"
    break;

  case 118: /* sumti_F_96: quantifier_300 sumti_G_97  */
#line 645 "grammar.y"
                           { yyval = node2(96, yyvsp[-1], yyvsp[0]); }
#line 3378 "src/grammar.c"
    break;

  case 119: /* sumti_G_97: qualifier_483 sumti_90 LUhU_gap_463  */
#line 648 "grammar.y"
                           { yyval = node3(97, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3384 "src/grammar.c"
    break;

  case 120: /* sumti_G_97: qualifier_483 relative_clauses_121 sumti_90 LUhU_gap_463  */
#line 650 "grammar.y"
                           { yyval = node4(97, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3390 "src/grammar.c"
    break;

  case 121: /* sumti_G_97: anaphora_400  */
#line 652 "grammar.y"
                           { yyval = node1(97, yyvsp[0]); }
#line 3396 "src/grammar.c"
    break;

  case 122: /* sumti_G_97: LA_499 cmene_404  */
#line 654 "grammar.y"
                           { yyval = node2(97, yyvsp[-1], yyvsp[0]); }
#line 3402 "src/grammar.c"
    break;

  case 123: /* sumti_G_97: LA_499 relative_clauses_121 cmene_404  */
#line 656 "grammar.y"
                           { yyval = node3(97, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3408 "src/grammar.c"
    break;

  case 124: /* sumti_G_97: LI_489 MEX_310 LOhO_gap_472  */
#line 658 "grammar.y"
                           { yyval = node3(97, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3414 "src/grammar.c"
    break;

  case 125: /* sumti_G_97: description_110  */
#line 660 "grammar.y"
                           { yyval = node1(97, yyvsp[0]); }
#line 3420 "src/grammar.c"
    break;

  case 126: /* sumti_G_97: quote_arg_432  */
#line 662 "grammar.y"
                           { yyval = node1(97, yyvsp[0]); }
#line 3426 "src/grammar.c"
    break;

  case 127: /* description_110: LA_499 sumti_tail_111 gap_450  */
#line 665 "grammar.y"
                           { yyval = node3(110, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3432 "src/grammar.c"
    break;

  case 128: /* description_110: LE_488 sumti_tail_111 gap_450  */
#line 667 "grammar.y"
                           { yyval = node3(110, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3438 "src/grammar.c"
    break;

  case 129: /* sumti_tail_111: sumti_tail_A_112  */
#line 670 "grammar.y"
                           { yyval = node1(111, yyvsp[0]); }
#line 3444 "src/grammar.c"
    break;

  case 130: /* sumti_tail_111: relative_clauses_121 sumti_tail_A_112  */
#line 672 "grammar.y"
                           { yyval = node2(111, yyvsp[-1], yyvsp[0]); }
#line 3450 "src/grammar.c"
    break;

  case 131: /* sumti_tail_111: sumti_G_97 sumti_tail_A_112  */
#line 674 "grammar.y"
                           { yyval = node2(111, yyvsp[-1], yyvsp[0]); }
#line 3456 "src/grammar.c"
    break;

  case 132: /* sumti_tail_111: sumti_G_97 relative_clauses_121 sumti_tail_A_112  */
#line 676 "grammar.y"
                           { yyval = node3(111, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3462 "src/grammar.c"
    break;

  case 133: /* sumti_tail_A_112: selbri_130  */
#line 679 "grammar.y"
                           { yyval = node1(112, yyvsp[0]); }
#line 3468 "src/grammar.c"
    break;

  case 134: /* sumti_tail_A_112: selbri_130 relative_clauses_121  */
#line 681 "grammar.y"
                           { yyval = node2(112, yyvsp[-1], yyvsp[0]); }
#line 3474 "src/grammar.c"
    break;

  case 135: /* sumti_tail_A_112: quantifier_300 selbri_130  */
#line 683 "grammar.y"
                           { yyval = node2(112, yyvsp[-1], yyvsp[0]); }
#line 3480 "src/grammar.c"
    break;

  case 136: /* sumti_tail_A_112: quantifier_300 selbri_130 relative_clauses_121  */
#line 685 "grammar.y"
                           { yyval = node3(112, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3486 "src/grammar.c"
    break;

  case 137: /* sumti_tail_A_112: quantifier_300 sumti_90  */
#line 687 "grammar.y"
                           { yyval = node2(112, yyvsp[-1], yyvsp[0]); }
#line 3492 "src/grammar.c"
    break;

  case 138: /* relative_clauses_121: relative_clause_122  */
#line 690 "grammar.y"
                           { yyval = node1(121, yyvsp[0]); }
#line 3498 "src/grammar.c"
    break;

  case 139: /* relative_clauses_121: relative_clauses_121 ZIhE_487 relative_clause_122  */
#line 692 "grammar.y"
                           { yyval = node3(121, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3504 "src/grammar.c"
    break;

  case 140: /* relative_clause_122: GOI_485 term_83 GEhU_gap_464  */
#line 695 "grammar.y"
                           { yyval = node3(122, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3510 "src/grammar.c"
    break;

  case 141: /* relative_clause_122: NOI_484 subsentence_41 KUhO_gap_469  */
#line 697 "grammar.y"
                           { yyval = node3(122, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3516 "src/grammar.c"
    break;

  case 142: /* selbri_130: tag_491 selbri_A_131  */
#line 700 "grammar.y"
                           { yyval = node2(130, yyvsp[-1], yyvsp[0]); }
#line 3522 "src/grammar.c"
    break;

  case 143: /* selbri_130: selbri_A_131  */
#line 702 "grammar.y"
                           { yyval = node1(130, yyvsp[0]); }
#line 3528 "src/grammar.c"
    break;

  case 144: /* selbri_A_131: selbri_B_132  */
#line 705 "grammar.y"
                           { yyval = node1(131, yyvsp[0]); }
#line 3534 "src/grammar.c"
    break;

  case 145: /* selbri_A_131: NA_445 selbri_130  */
#line 707 "grammar.y"
                           { yyval = node2(131, yyvsp[-1], yyvsp[0]); }
#line 3540 "src/grammar.c"
    break;

  case 146: /* selbri_B_132: selbri_C_133  */
#line 710 "grammar.y"
                           { yyval = node1(132, yyvsp[0]); }
#line 3546 "src/grammar.c"
    break;

  case 147: /* selbri_B_132: selbri_C_133 CO_443 selbri_B_132  */
#line 712 "grammar.y"
                           { yyval = node3(132, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3552 "src/grammar.c"
    break;

  case 148: /* selbri_C_133: selbri_D_134  */
#line 715 "grammar.y"
                           { yyval = node1(133, yyvsp[0]); }
#line 3558 "src/grammar.c"
    break;

  case 149: /* selbri_C_133: selbri_C_133 selbri_D_134  */
#line 717 "grammar.y"
                           { yyval = node2(133, yyvsp[-1], yyvsp[0]); }
#line 3564 "src/grammar.c"
    break;

  case 150: /* selbri_D_134: selbri_E_135  */
#line 720 "grammar.y"
                           { yyval = node1(134, yyvsp[0]); }
#line 3570 "src/grammar.c"
    break;

  case 151: /* selbri_D_134: selbri_D_134 JOIK_JEK_422 selbri_E_135  */
#line 722 "grammar.y"
                           { yyval = node3(134, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3576 "src/grammar.c"
    break;

  case 152: /* selbri_D_134: selbri_D_134 JOIK_KE_823 selbri_C_133 KEhE_gap_466  */
#line 724 "grammar.y"
                           { yyval = node4(134, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3582 "src/grammar.c"
    break;

  case 153: /* selbri_E_135: selbri_F_136  */
#line 727 "grammar.y"
                           { yyval = node1(135, yyvsp[0]); }
#line 3588 "src/grammar.c"
    break;

  case 154: /* selbri_E_135: selbri_F_136 JEK_BO_821 selbri_E_135  */
#line 729 "grammar.y"
                           { yyval = node3(135, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3594 "src/grammar.c"
    break;

  case 155: /* selbri_E_135: selbri_F_136 JOIK_BO_822 selbri_E_135  */
#line 731 "grammar.y"
                           { yyval = node3(135, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3600 "src/grammar.c"
    break;

  case 156: /* selbri_F_136: tanru_unit_150  */
#line 734 "grammar.y"
                           { yyval = node1(136, yyvsp[0]); }
#line 3606 "src/grammar.c"
    break;

  case 157: /* selbri_F_136: tanru_unit_150 BO_479 selbri_F_136  */
#line 736 "grammar.y"
                           { yyval = node3(136, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3612 "src/grammar.c"
    break;

  case 158: /* selbri_F_136: GUhEK_selbri_137  */
#line 738 "grammar.y"
                           { yyval = node1(136, yyvsp[0]); }
#line 3618 "src/grammar.c"
    break;

  case 159: /* selbri_F_136: NAhE_482 GUhEK_selbri_137  */
#line 740 "grammar.y"
                           { yyval = node2(136, yyvsp[-1], yyvsp[0]); }
#line 3624 "src/grammar.c"
    break;

  case 160: /* GUhEK_selbri_137: GUhEK_808 selbri_130 GIK_816 selbri_F_136  */
#line 743 "grammar.y"
                           { yyval = node4(137, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3630 "src/grammar.c"
    break;

  case 161: /* tanru_unit_150: tanru_unit_A_151  */
#line 746 "grammar.y"
                           { yyval = node1(150, yyvsp[0]); }
#line 3636 "src/grammar.c"
    break;

  case 162: /* tanru_unit_150: tanru_unit_150 CEI_444 tanru_unit_A_151  */
#line 748 "grammar.y"
                           { yyval = node3(150, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3642 "src/grammar.c"
    break;

  case 163: /* tanru_unit_A_151: tanru_unit_B_152  */
#line 751 "grammar.y"
                           { yyval = node1(151, yyvsp[0]); }
#line 3648 "src/grammar.c"
    break;

  case 164: /* tanru_unit_A_151: tanru_unit_B_152 linkargs_160  */
#line 753 "grammar.y"
                           { yyval = node2(151, yyvsp[-1], yyvsp[0]); }
#line 3654 "src/grammar.c"
    break;

  case 165: /* tanru_unit_B_152: bridi_valsi_407  */
#line 756 "grammar.y"
                           { yyval = node1(152, yyvsp[0]); }
#line 3660 "src/grammar.c"
    break;

  case 166: /* tanru_unit_B_152: KE_493 selbri_C_133 KEhE_gap_466  */
#line 758 "grammar.y"
                           { yyval = node3(152, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3666 "src/grammar.c"
    break;

  case 167: /* tanru_unit_B_152: SE_480 tanru_unit_B_152  */
#line 760 "grammar.y"
                           { yyval = node2(152, yyvsp[-1], yyvsp[0]); }
#line 3672 "src/grammar.c"
    break;

  case 168: /* tanru_unit_B_152: JAI_478 tag_491 tanru_unit_B_152  */
#line 762 "grammar.y"
                           { yyval = node3(152, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3678 "src/grammar.c"
    break;

  case 169: /* tanru_unit_B_152: JAI_478 tanru_unit_B_152  */
#line 764 "grammar.y"
                           { yyval = node2(152, yyvsp[-1], yyvsp[0]); }
#line 3684 "src/grammar.c"
    break;

  case 170: /* tanru_unit_B_152: ME_477 sumti_90 MEhU_gap_465  */
#line 766 "grammar.y"
                           { yyval = node3(152, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3690 "src/grammar.c"
    break;

  case 171: /* tanru_unit_B_152: ME_477 sumti_90 MEhU_gap_465 MOI_476  */
#line 768 "grammar.y"
                           { yyval = node4(152, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3696 "src/grammar.c"
    break;

  case 172: /* tanru_unit_B_152: NUhA_475 MEX_operator_374  */
#line 770 "grammar.y"
                           { yyval = node2(152, yyvsp[-1], yyvsp[0]); }
#line 3702 "src/grammar.c"
    break;

  case 173: /* tanru_unit_B_152: NAhE_482 tanru_unit_B_152  */
#line 772 "grammar.y"
                           { yyval = node2(152, yyvsp[-1], yyvsp[0]); }
#line 3708 "src/grammar.c"
    break;

  case 174: /* tanru_unit_B_152: NU_425 subsentence_41 KEI_gap_453  */
#line 774 "grammar.y"
                           { yyval = node3(152, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3714 "src/grammar.c"
    break;

  case 175: /* linkargs_160: BE_446 term_83 BEhO_gap_467  */
#line 777 "grammar.y"
                           { yyval = node3(160, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3720 "src/grammar.c"
    break;

  case 176: /* linkargs_160: BE_446 term_83 links_161 BEhO_gap_467  */
#line 779 "grammar.y"
                           { yyval = node4(160, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3726 "src/grammar.c"
    break;

  case 177: /* links_161: BEI_442 term_83  */
#line 782 "grammar.y"
                           { yyval = node2(161, yyvsp[-1], yyvsp[0]); }
#line 3732 "src/grammar.c"
    break;

  case 178: /* links_161: BEI_442 term_83 links_161  */
#line 784 "grammar.y"
                           { yyval = node3(161, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3738 "src/grammar.c"
    break;

  case 179: /* quantifier_300: number_812 BOI_gap_461  */
#line 787 "grammar.y"
                           { yyval = node2(300, yyvsp[-1], yyvsp[0]); }
#line 3744 "src/grammar.c"
    break;

  case 180: /* quantifier_300: left_bracket_470 MEX_310 right_bracket_gap_471  */
#line 789 "grammar.y"
                           { yyval = node3(300, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3750 "src/grammar.c"
    break;

  case 181: /* MEX_310: MEX_A_311  */
#line 792 "grammar.y"
                           { yyval = node1(310, yyvsp[0]); }
#line 3756 "src/grammar.c"
    break;

  case 182: /* MEX_310: MEX_310 operator_370 MEX_A_311  */
#line 794 "grammar.y"
                           { yyval = node3(310, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3762 "src/grammar.c"
    break;

  case 183: /* MEX_310: FUhA_441 rp_expression_330  */
#line 796 "grammar.y"
                           { yyval = node2(310, yyvsp[-1], yyvsp[0]); }
#line 3768 "src/grammar.c"
    break;

  case 184: /* MEX_A_311: MEX_B_312  */
#line 799 "grammar.y"
                           { yyval = node1(311, yyvsp[0]); }
#line 3774 "src/grammar.c"
    break;

  case 185: /* MEX_A_311: MEX_B_312 BIhE_439 operator_370 MEX_A_311  */
#line 801 "grammar.y"
                           { yyval = node4(311, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3780 "src/grammar.c"
    break;

  case 186: /* MEX_B_312: operand_381  */
#line 804 "grammar.y"
                           { yyval = node1(312, yyvsp[0]); }
#line 3786 "src/grammar.c"
    break;

  case 187: /* MEX_B_312: operator_370 MEX_C_313 MEX_gap_452  */
#line 806 "grammar.y"
                           { yyval = node3(312, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3792 "src/grammar.c"
    break;

  case 188: /* MEX_B_312: PEhO_438 operator_370 MEX_C_313 MEX_gap_452  */
#line 808 "grammar.y"
                           { yyval = node4(312, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3798 "src/grammar.c"
    break;

  case 189: /* MEX_C_313: MEX_B_312  */
#line 811 "grammar.y"
                           { yyval = node1(313, yyvsp[0]); }
#line 3804 "src/grammar.c"
    break;

  case 190: /* MEX_C_313: MEX_C_313 MEX_B_312  */
#line 813 "grammar.y"
                           { yyval = node2(313, yyvsp[-1], yyvsp[0]); }
#line 3810 "src/grammar.c"
    break;

  case 191: /* rp_expression_330: rp_operand_332 rp_operand_332 operator_370  */
#line 816 "grammar.y"
                           { yyval = node3(330, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3816 "src/grammar.c"
    break;

  case 192: /* rp_operand_332: operand_381  */
#line 819 "grammar.y"
                           { yyval = node1(332, yyvsp[0]); }
#line 3822 "src/grammar.c"
    break;

  case 193: /* rp_operand_332: rp_expression_330  */
#line 821 "grammar.y"
                           { yyval = node1(332, yyvsp[0]); }
#line 3828 "src/grammar.c"
    break;

  case 194: /* operator_370: operator_A_371  */
#line 824 "grammar.y"
                           { yyval = node1(370, yyvsp[0]); }
#line 3834 "src/grammar.c"
    break;

  case 195: /* operator_370: operator_370 JOIK_JEK_422 operator_A_371  */
#line 826 "grammar.y"
                           { yyval = node3(370, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3840 "src/grammar.c"
    break;

  case 196: /* operator_370: operator_370 JOIK_KE_823 operator_370 KEhE_gap_466  */
#line 828 "grammar.y"
                           { yyval = node4(370, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3846 "src/grammar.c"
    break;

  case 197: /* operator_A_371: operator_B_372  */
#line 831 "grammar.y"
                           { yyval = node1(371, yyvsp[0]); }
#line 3852 "src/grammar.c"
    break;

  case 198: /* operator_A_371: GUhEK_808 operator_A_371 GIK_816 operator_B_372  */
#line 833 "grammar.y"
                           { yyval = node4(371, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3858 "src/grammar.c"
    break;

  case 199: /* operator_A_371: operator_B_372 JOIK_BO_822 operator_A_371  */
#line 835 "grammar.y"
                           { yyval = node3(371, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3864 "src/grammar.c"
    break;

  case 200: /* operator_A_371: operator_B_372 JEK_BO_821 operator_A_371  */
#line 837 "grammar.y"
                           { yyval = node3(371, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3870 "src/grammar.c"
    break;

  case 201: /* operator_B_372: MEX_operator_374  */
#line 840 "grammar.y"
                           { yyval = node1(372, yyvsp[0]); }
#line 3876 "src/grammar.c"
    break;

  case 202: /* operator_B_372: KE_493 operator_370 KEhE_gap_466  */
#line 842 "grammar.y"
                           { yyval = node3(372, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3882 "src/grammar.c"
    break;

  case 203: /* MEX_operator_374: VUhU_679  */
#line 845 "grammar.y"
                           { yyval = node1(374, yyvsp[0]); }
#line 3888 "src/grammar.c"
    break;

  case 204: /* MEX_operator_374: VUhU_679 free_modifier_32  */
#line 847 "grammar.y"
                           { yyval = node2(374, yyvsp[-1], yyvsp[0]); }
#line 3894 "src/grammar.c"
    break;

  case 205: /* MEX_operator_374: SE_480 MEX_operator_374  */
#line 849 "grammar.y"
                           { yyval = node2(374, yyvsp[-1], yyvsp[0]); }
#line 3900 "src/grammar.c"
    break;

  case 206: /* MEX_operator_374: NAhE_482 MEX_operator_374  */
#line 851 "grammar.y"
                           { yyval = node2(374, yyvsp[-1], yyvsp[0]); }
#line 3906 "src/grammar.c"
    break;

  case 207: /* MEX_operator_374: MAhO_430 MEX_310 TEhU_gap_473  */
#line 853 "grammar.y"
                           { yyval = node3(374, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3912 "src/grammar.c"
    break;

  case 208: /* MEX_operator_374: NAhU_429 selbri_130 TEhU_gap_473  */
#line 855 "grammar.y"
                           { yyval = node3(374, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3918 "src/grammar.c"
    break;

  case 209: /* operand_381: operand_A_382  */
#line 858 "grammar.y"
                           { yyval = node1(381, yyvsp[0]); }
#line 3924 "src/grammar.c"
    break;

  case 210: /* operand_381: operand_A_382 EK_KE_804 operand_381 KEhE_gap_466  */
#line 860 "grammar.y"
                           { yyval = node4(381, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3930 "src/grammar.c"
    break;

  case 211: /* operand_381: operand_A_382 JOIK_KE_823 operand_381 KEhE_gap_466  */
#line 862 "grammar.y"
                           { yyval = node4(381, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3936 "src/grammar.c"
    break;

  case 212: /* operand_A_382: operand_B_383  */
#line 865 "grammar.y"
                           { yyval = node1(382, yyvsp[0]); }
#line 3942 "src/grammar.c"
    break;

  case 213: /* operand_A_382: operand_A_382 JOIK_EK_421 operand_B_383  */
#line 867 "grammar.y"
                           { yyval = node3(382, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3948 "src/grammar.c"
    break;

  case 214: /* operand_B_383: operand_C_385  */
#line 870 "grammar.y"
                           { yyval = node1(383, yyvsp[0]); }
#line 3954 "src/grammar.c"
    break;

  case 215: /* operand_B_383: operand_C_385 EK_BO_803 operand_B_383  */
#line 872 "grammar.y"
                           { yyval = node3(383, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3960 "src/grammar.c"
    break;

  case 216: /* operand_B_383: operand_C_385 JOIK_BO_822 operand_B_383  */
#line 874 "grammar.y"
                           { yyval = node3(383, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3966 "src/grammar.c"
    break;

  case 217: /* operand_C_385: quantifier_300  */
#line 877 "grammar.y"
                           { yyval = node1(385, yyvsp[0]); }
#line 3972 "src/grammar.c"
    break;

  case 218: /* operand_C_385: lerfu_string_817 BOI_gap_461  */
#line 879 "grammar.y"
                           { yyval = node2(385, yyvsp[-1], yyvsp[0]); }
#line 3978 "src/grammar.c"
    break;

  case 219: /* operand_C_385: NIhE_428 selbri_130 TEhU_gap_473  */
#line 881 "grammar.y"
                           { yyval = node3(385, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3984 "src/grammar.c"
    break;

  case 220: /* operand_C_385: MOhE_427 sumti_90 TEhU_gap_473  */
#line 883 "grammar.y"
                           { yyval = node3(385, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3990 "src/grammar.c"
    break;

  case 221: /* operand_C_385: JOhI_431 MEX_C_313 TEhU_gap_473  */
#line 885 "grammar.y"
                           { yyval = node3(385, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 3996 "src/grammar.c"
    break;

  case 222: /* operand_C_385: GEK_807 operand_381 GIK_816 operand_C_385  */
#line 887 "grammar.y"
                           { yyval = node4(385, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 4002 "src/grammar.c"
    break;

  case 223: /* operand_C_385: qualifier_483 operand_381 LUhU_gap_463  */
#line 889 "grammar.y"
                           { yyval = node3(385, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 4008 "src/grammar.c"
    break;

  case 224: /* anaphora_400: KOhA_555  */
#line 892 "grammar.y"
                           { yyval = node1(400, yyvsp[0]); }
#line 4014 "src/grammar.c"
    break;

  case 225: /* anaphora_400: KOhA_555 free_modifier_32  */
#line 894 "grammar.y"
                           { yyval = node2(400, yyvsp[-1], yyvsp[0]); }
#line 4020 "src/grammar.c"
    break;

  case 226: /* anaphora_400: lerfu_string_817 BOI_gap_461  */
#line 896 "grammar.y"
                           { yyval = node2(400, yyvsp[-1], yyvsp[0]); }
#line 4026 "src/grammar.c"
    break;

  case 227: /* cmene_404: cmene_A_405  */
#line 899 "grammar.y"
                           { yyval = node1(404, yyvsp[0]); }
#line 4032 "src/grammar.c"
    break;

  case 228: /* cmene_404: cmene_A_405 free_modifier_32  */
#line 901 "grammar.y"
                           { yyval = node2(404, yyvsp[-1], yyvsp[0]); }
#line 4038 "src/grammar.c"
    break;

  case 229: /* cmene_A_405: CMENE_518  */
#line 904 "grammar.y"
                           { yyval = node1(405, yyvsp[0]); }
#line 4044 "src/grammar.c"
    break;

  case 230: /* cmene_A_405: cmene_A_405 CMENE_518  */
#line 906 "grammar.y"
                           { yyval = node2(405, yyvsp[-1], yyvsp[0]); }
#line 4050 "src/grammar.c"
    break;

  case 231: /* bridi_valsi_407: bridi_valsi_A_408  */
#line 909 "grammar.y"
                           { yyval = node1(407, yyvsp[0]); }
#line 4056 "src/grammar.c"
    break;

  case 232: /* bridi_valsi_407: bridi_valsi_A_408 free_modifier_32  */
#line 911 "grammar.y"
                           { yyval = node2(407, yyvsp[-1], yyvsp[0]); }
#line 4062 "src/grammar.c"
    break;

  case 233: /* bridi_valsi_A_408: BRIVLA_509  */
#line 914 "grammar.y"
                           { yyval = node1(408, yyvsp[0]); }
#line 4068 "src/grammar.c"
    break;

  case 234: /* bridi_valsi_A_408: PA_MOI_824  */
#line 916 "grammar.y"
                           { yyval = node1(408, yyvsp[0]); }
#line 4074 "src/grammar.c"
    break;

  case 235: /* bridi_valsi_A_408: GOhA_543  */
#line 918 "grammar.y"
                           { yyval = node1(408, yyvsp[0]); }
#line 4080 "src/grammar.c"
    break;

  case 236: /* bridi_valsi_A_408: GOhA_543 RAhO_593  */
#line 920 "grammar.y"
                           { yyval = node2(408, yyvsp[-1], yyvsp[0]); }
#line 4086 "src/grammar.c"
    break;

  case 237: /* para_mark_410: NIhO_584  */
#line 923 "grammar.y"
                           { yyval = node1(410, yyvsp[0]); }
#line 4092 "src/grammar.c"
    break;

  case 238: /* para_mark_410: NIhO_584 free_modifier_32  */
#line 925 "grammar.y"
                           { yyval = node2(410, yyvsp[-1], yyvsp[0]); }
#line 4098 "src/grammar.c"
    break;

  case 239: /* para_mark_410: NIhO_584 para_mark_410  */
#line 927 "grammar.y"
                           { yyval = node2(410, yyvsp[-1], yyvsp[0]); }
#line 4104 "src/grammar.c"
    break;

  case 240: /* indicators_411: indicators_A_412  */
#line 930 "grammar.y"
                           { yyval = node1(411, yyvsp[0]); }
#line 4110 "src/grammar.c"
    break;

  case 241: /* indicators_411: FUhE_535 indicators_A_412  */
#line 932 "grammar.y"
                           { yyval = node2(411, yyvsp[-1], yyvsp[0]); }
#line 4116 "src/grammar.c"
    break;

  case 242: /* indicators_A_412: indicator_413  */
#line 935 "grammar.y"
                           { yyval = node1(412, yyvsp[0]); }
#line 4122 "src/grammar.c"
    break;

  case 243: /* indicators_A_412: indicators_A_412 indicator_413  */
#line 937 "grammar.y"
                           { yyval = node2(412, yyvsp[-1], yyvsp[0]); }
#line 4128 "src/grammar.c"
    break;

  case 244: /* indicator_413: UI_612  */
#line 940 "grammar.y"
                           { yyval = node1(413, yyvsp[0]); }
#line 4134 "src/grammar.c"
    break;

  case 245: /* indicator_413: CAI_515  */
#line 942 "grammar.y"
                           { yyval = node1(413, yyvsp[0]); }
#line 4140 "src/grammar.c"
    break;

  case 246: /* indicator_413: UI_612 NAI_581  */
#line 944 "grammar.y"
                           { yyval = node2(413, yyvsp[-1], yyvsp[0]); }
#line 4146 "src/grammar.c"
    break;

  case 247: /* indicator_413: CAI_515 NAI_581  */
#line 946 "grammar.y"
                           { yyval = node2(413, yyvsp[-1], yyvsp[0]); }
#line 4152 "src/grammar.c"
    break;

  case 248: /* indicator_413: Y_619  */
#line 948 "grammar.y"
                           { yyval = node1(413, yyvsp[0]); }
#line 4158 "src/grammar.c"
    break;

  case 249: /* indicator_413: DAhO_524  */
#line 950 "grammar.y"
                           { yyval = node1(413, yyvsp[0]); }
#line 4164 "src/grammar.c"
    break;

  case 250: /* indicator_413: FUhO_536  */
#line 952 "grammar.y"
                           { yyval = node1(413, yyvsp[0]); }
#line 4170 "src/grammar.c"
    break;

  case 251: /* DOI_415: DOI_525  */
#line 955 "grammar.y"
                           { yyval = node1(415, yyvsp[0]); }
#line 4176 "src/grammar.c"
    break;

  case 252: /* DOI_415: COI_416  */
#line 957 "grammar.y"
                           { yyval = node1(415, yyvsp[0]); }
#line 4182 "src/grammar.c"
    break;

  case 253: /* DOI_415: COI_416 DOI_525  */
#line 959 "grammar.y"
                           { yyval = node2(415, yyvsp[-1], yyvsp[0]); }
#line 4188 "src/grammar.c"
    break;

  case 254: /* COI_416: COI_A_417  */
#line 962 "grammar.y"
                           { yyval = node1(416, yyvsp[0]); }
#line 4194 "src/grammar.c"
    break;

  case 255: /* COI_416: COI_416 COI_A_417  */
#line 964 "grammar.y"
                           { yyval = node2(416, yyvsp[-1], yyvsp[0]); }
#line 4200 "src/grammar.c"
    break;

  case 256: /* COI_A_417: COI_520  */
#line 967 "grammar.y"
                           { yyval = node1(417, yyvsp[0]); }
#line 4206 "src/grammar.c"
    break;

  case 257: /* COI_A_417: COI_520 NAI_581  */
#line 969 "grammar.y"
                           { yyval = node2(417, yyvsp[-1], yyvsp[0]); }
#line 4212 "src/grammar.c"
    break;

  case 258: /* JOIK_EK_421: EK_802  */
#line 972 "grammar.y"
                           { yyval = node1(421, yyvsp[0]); }
#line 4218 "src/grammar.c"
    break;

  case 259: /* JOIK_EK_421: JOIK_806  */
#line 974 "grammar.y"
                           { yyval = node1(421, yyvsp[0]); }
#line 4224 "src/grammar.c"
    break;

  case 260: /* JOIK_EK_421: JOIK_806 free_modifier_32  */
#line 976 "grammar.y"
                           { yyval = node2(421, yyvsp[-1], yyvsp[0]); }
#line 4230 "src/grammar.c"
    break;

  case 261: /* JOIK_JEK_422: JOIK_806  */
#line 979 "grammar.y"
                           { yyval = node1(422, yyvsp[0]); }
#line 4236 "src/grammar.c"
    break;

  case 262: /* JOIK_JEK_422: JOIK_806 free_modifier_32  */
#line 981 "grammar.y"
                           { yyval = node2(422, yyvsp[-1], yyvsp[0]); }
#line 4242 "src/grammar.c"
    break;

  case 263: /* JOIK_JEK_422: JEK_805  */
#line 983 "grammar.y"
                           { yyval = node1(422, yyvsp[0]); }
#line 4248 "src/grammar.c"
    break;

  case 264: /* JOIK_JEK_422: JEK_805 free_modifier_32  */
#line 985 "grammar.y"
                           { yyval = node2(422, yyvsp[-1], yyvsp[0]); }
#line 4254 "src/grammar.c"
    break;

  case 265: /* XI_424: XI_618  */
#line 988 "grammar.y"
                           { yyval = node1(424, yyvsp[0]); }
#line 4260 "src/grammar.c"
    break;

  case 266: /* XI_424: XI_618 free_modifier_32  */
#line 990 "grammar.y"
                           { yyval = node2(424, yyvsp[-1], yyvsp[0]); }
#line 4266 "src/grammar.c"
    break;

  case 267: /* NU_425: NU_A_426  */
#line 993 "grammar.y"
                           { yyval = node1(425, yyvsp[0]); }
#line 4272 "src/grammar.c"
    break;

  case 268: /* NU_425: NU_425 JOIK_JEK_422 NU_A_426  */
#line 995 "grammar.y"
                           { yyval = node3(425, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 4278 "src/grammar.c"
    break;

  case 269: /* NU_A_426: NU_586  */
#line 998 "grammar.y"
                           { yyval = node1(426, yyvsp[0]); }
#line 4284 "src/grammar.c"
    break;

  case 270: /* NU_A_426: NU_586 NAI_581  */
#line 1000 "grammar.y"
                           { yyval = node2(426, yyvsp[-1], yyvsp[0]); }
#line 4290 "src/grammar.c"
    break;

  case 271: /* NU_A_426: NU_586 free_modifier_32  */
#line 1002 "grammar.y"
                           { yyval = node2(426, yyvsp[-1], yyvsp[0]); }
#line 4296 "src/grammar.c"
    break;

  case 272: /* NU_A_426: NU_586 NAI_581 free_modifier_32  */
#line 1004 "grammar.y"
                           { yyval = node3(426, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 4302 "src/grammar.c"
    break;

  case 273: /* MOhE_427: MOhE_664  */
#line 1007 "grammar.y"
                           { yyval = node1(427, yyvsp[0]); }
#line 4308 "src/grammar.c"
    break;

  case 274: /* MOhE_427: MOhE_664 free_modifier_32  */
#line 1009 "grammar.y"
                           { yyval = node2(427, yyvsp[-1], yyvsp[0]); }
#line 4314 "src/grammar.c"
    break;

  case 275: /* NIhE_428: NIhE_666  */
#line 1012 "grammar.y"
                           { yyval = node1(428, yyvsp[0]); }
#line 4320 "src/grammar.c"
    break;

  case 276: /* NIhE_428: NIhE_666 free_modifier_32  */
#line 1014 "grammar.y"
                           { yyval = node2(428, yyvsp[-1], yyvsp[0]); }
#line 4326 "src/grammar.c"
    break;

  case 277: /* NAhU_429: NAhU_665  */
#line 1017 "grammar.y"
                           { yyval = node1(429, yyvsp[0]); }
#line 4332 "src/grammar.c"
    break;

  case 278: /* NAhU_429: NAhU_665 free_modifier_32  */
#line 1019 "grammar.y"
                           { yyval = node2(429, yyvsp[-1], yyvsp[0]); }
#line 4338 "src/grammar.c"
    break;

  case 279: /* MAhO_430: MAhO_662  */
#line 1022 "grammar.y"
                           { yyval = node1(430, yyvsp[0]); }
#line 4344 "src/grammar.c"
    break;

  case 280: /* MAhO_430: MAhO_662 free_modifier_32  */
#line 1024 "grammar.y"
                           { yyval = node2(430, yyvsp[-1], yyvsp[0]); }
#line 4350 "src/grammar.c"
    break;

  case 281: /* JOhI_431: JOhI_657  */
#line 1027 "grammar.y"
                           { yyval = node1(431, yyvsp[0]); }
#line 4356 "src/grammar.c"
    break;

  case 282: /* JOhI_431: JOhI_657 free_modifier_32  */
#line 1029 "grammar.y"
                           { yyval = node2(431, yyvsp[-1], yyvsp[0]); }
#line 4362 "src/grammar.c"
    break;

  case 283: /* quote_arg_432: quote_arg_A_433  */
#line 1032 "grammar.y"
                           { yyval = node1(432, yyvsp[0]); }
#line 4368 "src/grammar.c"
    break;

  case 284: /* quote_arg_432: quote_arg_A_433 free_modifier_32  */
#line 1034 "grammar.y"
                           { yyval = node2(432, yyvsp[-1], yyvsp[0]); }
#line 4374 "src/grammar.c"
    break;

  case 285: /* quote_arg_A_433: ZOI_quote_434  */
#line 1037 "grammar.y"
                           { yyval = node1(433, yyvsp[0]); }
#line 4380 "src/grammar.c"
    break;

  case 286: /* quote_arg_A_433: ZO_quote_435  */
#line 1039 "grammar.y"
                           { yyval = node1(433, yyvsp[0]); }
#line 4386 "src/grammar.c"
    break;

  case 287: /* quote_arg_A_433: LOhU_quote_436  */
#line 1041 "grammar.y"
                           { yyval = node1(433, yyvsp[0]); }
#line 4392 "src/grammar.c"
    break;

  case 288: /* quote_arg_A_433: LU_571 text_0 LIhU_gap_448  */
#line 1043 "grammar.y"
                           { yyval = node3(433, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 4398 "src/grammar.c"
    break;

  case 289: /* ZOI_quote_434: ZOI_627 any_word_698 anything_699 any_word_698  */
#line 1046 "grammar.y"
                           { yyval = node4(434, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 4404 "src/grammar.c"
    break;

  case 290: /* ZO_quote_435: ZO_626 any_word_698  */
#line 1049 "grammar.y"
                           { yyval = node2(435, yyvsp[-1], yyvsp[0]); }
#line 4410 "src/grammar.c"
    break;

  case 291: /* LOhU_quote_436: LOhU_569 any_words_697 LEhU_565  */
#line 1052 "grammar.y"
                           { yyval = node3(436, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 4416 "src/grammar.c"
    break;

  case 292: /* FIhO_437: FIhO_532  */
#line 1055 "grammar.y"
                           { yyval = node1(437, yyvsp[0]); }
#line 4422 "src/grammar.c"
    break;

  case 293: /* FIhO_437: FIhO_532 free_modifier_32  */
#line 1057 "grammar.y"
                           { yyval = node2(437, yyvsp[-1], yyvsp[0]); }
#line 4428 "src/grammar.c"
    break;

  case 294: /* PEhO_438: PEhO_673  */
#line 1060 "grammar.y"
                           { yyval = node1(438, yyvsp[0]); }
#line 4434 "src/grammar.c"
    break;

  case 295: /* PEhO_438: PEhO_673 free_modifier_32  */
#line 1062 "grammar.y"
                           { yyval = node2(438, yyvsp[-1], yyvsp[0]); }
#line 4440 "src/grammar.c"
    break;

  case 296: /* BIhE_439: BIhE_650  */
#line 1065 "grammar.y"
                           { yyval = node1(439, yyvsp[0]); }
#line 4446 "src/grammar.c"
    break;

  case 297: /* BIhE_439: BIhE_650 free_modifier_32  */
#line 1067 "grammar.y"
                           { yyval = node2(439, yyvsp[-1], yyvsp[0]); }
#line 4452 "src/grammar.c"
    break;

  case 298: /* SEI_440: SEI_597  */
#line 1070 "grammar.y"
                           { yyval = node1(440, yyvsp[0]); }
#line 4458 "src/grammar.c"
    break;

  case 299: /* SEI_440: SEI_597 free_modifier_32  */
#line 1072 "grammar.y"
                           { yyval = node2(440, yyvsp[-1], yyvsp[0]); }
#line 4464 "src/grammar.c"
    break;

  case 300: /* FUhA_441: FUhA_655  */
#line 1075 "grammar.y"
                           { yyval = node1(441, yyvsp[0]); }
#line 4470 "src/grammar.c"
    break;

  case 301: /* FUhA_441: FUhA_655 free_modifier_32  */
#line 1077 "grammar.y"
                           { yyval = node2(441, yyvsp[-1], yyvsp[0]); }
#line 4476 "src/grammar.c"
    break;

  case 302: /* BEI_442: BEI_505  */
#line 1080 "grammar.y"
                           { yyval = node1(442, yyvsp[0]); }
#line 4482 "src/grammar.c"
    break;

  case 303: /* BEI_442: BEI_505 free_modifier_32  */
#line 1082 "grammar.y"
                           { yyval = node2(442, yyvsp[-1], yyvsp[0]); }
#line 4488 "src/grammar.c"
    break;

  case 304: /* CO_443: CO_519  */
#line 1085 "grammar.y"
                           { yyval = node1(443, yyvsp[0]); }
#line 4494 "src/grammar.c"
    break;

  case 305: /* CO_443: CO_519 free_modifier_32  */
#line 1087 "grammar.y"
                           { yyval = node2(443, yyvsp[-1], yyvsp[0]); }
#line 4500 "src/grammar.c"
    break;

  case 306: /* CEI_444: CEI_516  */
#line 1090 "grammar.y"
                           { yyval = node1(444, yyvsp[0]); }
#line 4506 "src/grammar.c"
    break;

  case 307: /* CEI_444: CEI_516 free_modifier_32  */
#line 1092 "grammar.y"
                           { yyval = node2(444, yyvsp[-1], yyvsp[0]); }
#line 4512 "src/grammar.c"
    break;

  case 308: /* NA_445: NA_578  */
#line 1095 "grammar.y"
                           { yyval = node1(445, yyvsp[0]); }
#line 4518 "src/grammar.c"
    break;

  case 309: /* NA_445: NA_578 free_modifier_32  */
#line 1097 "grammar.y"
                           { yyval = node2(445, yyvsp[-1], yyvsp[0]); }
#line 4524 "src/grammar.c"
    break;

  case 310: /* BE_446: BE_504  */
#line 1100 "grammar.y"
                           { yyval = node1(446, yyvsp[0]); }
#line 4530 "src/grammar.c"
    break;

  case 311: /* BE_446: BE_504 free_modifier_32  */
#line 1102 "grammar.y"
                           { yyval = node2(446, yyvsp[-1], yyvsp[0]); }
#line 4536 "src/grammar.c"
    break;

  case 312: /* TUhE_447: TUhE_610  */
#line 1105 "grammar.y"
                           { yyval = node1(447, yyvsp[0]); }
#line 4542 "src/grammar.c"
    break;

  case 313: /* TUhE_447: TUhE_610 free_modifier_32  */
#line 1107 "grammar.y"
                           { yyval = node2(447, yyvsp[-1], yyvsp[0]); }
#line 4548 "src/grammar.c"
    break;

  case 314: /* LIhU_gap_448: LIhU_567  */
#line 1110 "grammar.y"
                           { yyval = node1(448, yyvsp[0]); }
#line 4554 "src/grammar.c"
    break;

  case 315: /* LIhU_gap_448: error  */
#line 1112 "grammar.y"
                           { yyval = elidable(LIhU_567); yyerrok; }
#line 4560 "src/grammar.c"
    break;

  case 316: /* gap_450: KU_556  */
#line 1115 "grammar.y"
                           { yyval = node1(450, yyvsp[0]); }
#line 4566 "src/grammar.c"
    break;

  case 317: /* gap_450: KU_556 free_modifier_32  */
#line 1117 "grammar.y"
                           { yyval = node2(450, yyvsp[-1], yyvsp[0]); }
#line 4572 "src/grammar.c"
    break;

  case 318: /* gap_450: error  */
#line 1119 "grammar.y"
                           { yyval = elidable(KU_556); yyerrok; }
#line 4578 "src/grammar.c"
    break;

  case 319: /* front_gap_451: CU_521  */
#line 1122 "grammar.y"
                           { yyval = node1(451, yyvsp[0]); }
#line 4584 "src/grammar.c"
    break;

  case 320: /* front_gap_451: CU_521 free_modifier_32  */
#line 1124 "grammar.y"
                           { yyval = node2(451, yyvsp[-1], yyvsp[0]); }
#line 4590 "src/grammar.c"
    break;

  case 321: /* MEX_gap_452: KUhE_658  */
#line 1127 "grammar.y"
                           { yyval = node1(452, yyvsp[0]); }
#line 4596 "src/grammar.c"
    break;

  case 322: /* MEX_gap_452: KUhE_658 free_modifier_32  */
#line 1129 "grammar.y"
                           { yyval = node2(452, yyvsp[-1], yyvsp[0]); }
#line 4602 "src/grammar.c"
    break;

  case 323: /* MEX_gap_452: error  */
#line 1131 "grammar.y"
                           { yyval = elidable(KUhE_658); yyerrok; }
#line 4608 "src/grammar.c"
    break;

  case 324: /* KEI_gap_453: KEI_552  */
#line 1134 "grammar.y"
                           { yyval = node1(453, yyvsp[0]); }
#line 4614 "src/grammar.c"
    break;

  case 325: /* KEI_gap_453: KEI_552 free_modifier_32  */
#line 1136 "grammar.y"
                           { yyval = node2(453, yyvsp[-1], yyvsp[0]); }
#line 4620 "src/grammar.c"
    break;

  case 326: /* KEI_gap_453: error  */
#line 1138 "grammar.y"
                           { yyval = elidable(KEI_552); yyerrok; }
#line 4626 "src/grammar.c"
    break;

  case 327: /* TUhU_gap_454: TUhU_611  */
#line 1141 "grammar.y"
                           { yyval = node1(454, yyvsp[0]); }
#line 4632 "src/grammar.c"
    break;

  case 328: /* TUhU_gap_454: TUhU_611 free_modifier_32  */
#line 1143 "grammar.y"
                           { yyval = node2(454, yyvsp[-1], yyvsp[0]); }
#line 4638 "src/grammar.c"
    break;

  case 329: /* TUhU_gap_454: error  */
#line 1145 "grammar.y"
                           { yyval = elidable(TUhU_611); yyerrok; }
#line 4644 "src/grammar.c"
    break;

  case 330: /* VAU_gap_456: VAU_614  */
#line 1148 "grammar.y"
                           { yyval = node1(456, yyvsp[0]); }
#line 4650 "src/grammar.c"
    break;

  case 331: /* VAU_gap_456: VAU_614 free_modifier_32  */
#line 1150 "grammar.y"
                           { yyval = node2(456, yyvsp[-1], yyvsp[0]); }
#line 4656 "src/grammar.c"
    break;

  case 332: /* VAU_gap_456: error  */
#line 1152 "grammar.y"
                           { yyval = elidable(VAU_614); yyerrok; }
#line 4662 "src/grammar.c"
    break;

  case 333: /* DOhU_gap_457: DOhU_526  */
#line 1155 "grammar.y"
                           { yyval = node1(457, yyvsp[0]); }
#line 4668 "src/grammar.c"
    break;

  case 334: /* DOhU_gap_457: error  */
#line 1157 "grammar.y"
                           { yyval = elidable(DOhU_526); yyerrok; }
#line 4674 "src/grammar.c"
    break;

  case 335: /* FEhU_gap_458: FEhU_531  */
#line 1160 "grammar.y"
                           { yyval = node1(458, yyvsp[0]); }
#line 4680 "src/grammar.c"
    break;

  case 336: /* FEhU_gap_458: FEhU_531 free_modifier_32  */
#line 1162 "grammar.y"
                           { yyval = node2(458, yyvsp[-1], yyvsp[0]); }
#line 4686 "src/grammar.c"
    break;

  case 337: /* FEhU_gap_458: error  */
#line 1164 "grammar.y"
                           { yyval = elidable(FEhU_531); yyerrok; }
#line 4692 "src/grammar.c"
    break;

  case 338: /* SEhU_gap_459: SEhU_598  */
#line 1167 "grammar.y"
                           { yyval = node1(459, yyvsp[0]); }
#line 4698 "src/grammar.c"
    break;

  case 339: /* SEhU_gap_459: error  */
#line 1169 "grammar.y"
                           { yyval = elidable(SEhU_598); yyerrok; }
#line 4704 "src/grammar.c"
    break;

  case 340: /* NUhU_gap_460: NUhU_588  */
#line 1172 "grammar.y"
                           { yyval = node1(460, yyvsp[0]); }
#line 4710 "src/grammar.c"
    break;

  case 341: /* NUhU_gap_460: NUhU_588 free_modifier_32  */
#line 1174 "grammar.y"
                           { yyval = node2(460, yyvsp[-1], yyvsp[0]); }
#line 4716 "src/grammar.c"
    break;

  case 342: /* NUhU_gap_460: error  */
#line 1176 "grammar.y"
                           { yyval = elidable(NUhU_588); yyerrok; }
#line 4722 "src/grammar.c"
    break;

  case 343: /* BOI_gap_461: BOI_651  */
#line 1179 "grammar.y"
                           { yyval = node1(461, yyvsp[0]); }
#line 4728 "src/grammar.c"
    break;

  case 344: /* BOI_gap_461: BOI_651 free_modifier_32  */
#line 1181 "grammar.y"
                           { yyval = node2(461, yyvsp[-1], yyvsp[0]); }
#line 4734 "src/grammar.c"
    break;

  case 345: /* BOI_gap_461: error  */
#line 1183 "grammar.y"
                           { yyval = elidable(BOI_651); yyerrok; }
#line 4740 "src/grammar.c"
    break;

  case 346: /* sub_gap_462: BOI_651  */
#line 1186 "grammar.y"
                           { yyval = node1(462, yyvsp[0]); }
#line 4746 "src/grammar.c"
    break;

  case 347: /* sub_gap_462: error  */
#line 1188 "grammar.y"
                           { yyval = elidable(BOI_651); yyerrok; }
#line 4752 "src/grammar.c"
    break;

  case 348: /* LUhU_gap_463: LUhU_573  */
#line 1191 "grammar.y"
                           { yyval = node1(463, yyvsp[0]); }
#line 4758 "src/grammar.c"
    break;

  case 349: /* LUhU_gap_463: LUhU_573 free_modifier_32  */
#line 1193 "grammar.y"
                           { yyval = node2(463, yyvsp[-1], yyvsp[0]); }
#line 4764 "src/grammar.c"
    break;

  case 350: /* LUhU_gap_463: error  */
#line 1195 "grammar.y"
                           { yyval = elidable(LUhU_573); yyerrok; }
#line 4770 "src/grammar.c"
    break;

  case 351: /* GEhU_gap_464: GEhU_538  */
#line 1198 "grammar.y"
                           { yyval = node1(464, yyvsp[0]); }
#line 4776 "src/grammar.c"
    break;

  case 352: /* GEhU_gap_464: GEhU_538 free_modifier_32  */
#line 1200 "grammar.y"
                           { yyval = node2(464, yyvsp[-1], yyvsp[0]); }
#line 4782 "src/grammar.c"
    break;

  case 353: /* GEhU_gap_464: error  */
#line 1202 "grammar.y"
                           { yyval = elidable(GEhU_538); yyerrok; }
#line 4788 "src/grammar.c"
    break;

  case 354: /* MEhU_gap_465: MEhU_575  */
#line 1205 "grammar.y"
                           { yyval = node1(465, yyvsp[0]); }
#line 4794 "src/grammar.c"
    break;

  case 355: /* MEhU_gap_465: MEhU_575 free_modifier_32  */
#line 1207 "grammar.y"
                           { yyval = node2(465, yyvsp[-1], yyvsp[0]); }
#line 4800 "src/grammar.c"
    break;

  case 356: /* MEhU_gap_465: error  */
#line 1209 "grammar.y"
                           { yyval = elidable(MEhU_575); yyerrok; }
#line 4806 "src/grammar.c"
    break;

  case 357: /* KEhE_gap_466: KEhE_550  */
#line 1212 "grammar.y"
                           { yyval = node1(466, yyvsp[0]); }
#line 4812 "src/grammar.c"
    break;

  case 358: /* KEhE_gap_466: KEhE_550 free_modifier_32  */
#line 1214 "grammar.y"
                           { yyval = node2(466, yyvsp[-1], yyvsp[0]); }
#line 4818 "src/grammar.c"
    break;

  case 359: /* KEhE_gap_466: error  */
#line 1216 "grammar.y"
                           { yyval = elidable(KEhE_550); yyerrok; }
#line 4824 "src/grammar.c"
    break;

  case 360: /* BEhO_gap_467: BEhO_506  */
#line 1219 "grammar.y"
                           { yyval = node1(467, yyvsp[0]); }
#line 4830 "src/grammar.c"
    break;

  case 361: /* BEhO_gap_467: BEhO_506 free_modifier_32  */
#line 1221 "grammar.y"
                           { yyval = node2(467, yyvsp[-1], yyvsp[0]); }
#line 4836 "src/grammar.c"
    break;

  case 362: /* BEhO_gap_467: error  */
#line 1223 "grammar.y"
                           { yyval = elidable(BEhO_506); yyerrok; }
#line 4842 "src/grammar.c"
    break;

  case 363: /* TOI_gap_468: TOI_607  */
#line 1226 "grammar.y"
                           { yyval = node1(468, yyvsp[0]); }
#line 4848 "src/grammar.c"
    break;

  case 364: /* TOI_gap_468: error  */
#line 1228 "grammar.y"
                           { yyval = elidable(TOI_607); yyerrok; }
#line 4854 "src/grammar.c"
    break;

  case 365: /* KUhO_gap_469: KUhO_557  */
#line 1231 "grammar.y"
                           { yyval = node1(469, yyvsp[0]); }
#line 4860 "src/grammar.c"
    break;

  case 366: /* KUhO_gap_469: KUhO_557 free_modifier_32  */
#line 1233 "grammar.y"
                           { yyval = node2(469, yyvsp[-1], yyvsp[0]); }
#line 4866 "src/grammar.c"
    break;

  case 367: /* KUhO_gap_469: error  */
#line 1235 "grammar.y"
                           { yyval = elidable(KUhO_557); yyerrok; }
#line 4872 "src/grammar.c"
    break;

  case 368: /* left_bracket_470: VEI_677  */
#line 1238 "grammar.y"
                           { yyval = node1(470, yyvsp[0]); }
#line 4878 "src/grammar.c"
    break;

  case 369: /* left_bracket_470: VEI_677 free_modifier_32  */
#line 1240 "grammar.y"
                           { yyval = node2(470, yyvsp[-1], yyvsp[0]); }
#line 4884 "src/grammar.c"
    break;

  case 370: /* right_bracket_gap_471: VEhO_678  */
#line 1243 "grammar.y"
                           { yyval = node1(471, yyvsp[0]); }
#line 4890 "src/grammar.c"
    break;

  case 371: /* right_bracket_gap_471: VEhO_678 free_modifier_32  */
#line 1245 "grammar.y"
                           { yyval = node2(471, yyvsp[-1], yyvsp[0]); }
#line 4896 "src/grammar.c"
    break;

  case 372: /* right_bracket_gap_471: error  */
#line 1247 "grammar.y"
                           { yyval = elidable(VEhO_678); yyerrok; }
#line 4902 "src/grammar.c"
    break;

  case 373: /* LOhO_gap_472: LOhO_568  */
#line 1250 "grammar.y"
                           { yyval = node1(472, yyvsp[0]); }
#line 4908 "src/grammar.c"
    break;

  case 374: /* LOhO_gap_472: LOhO_568 free_modifier_32  */
#line 1252 "grammar.y"
                           { yyval = node2(472, yyvsp[-1], yyvsp[0]); }
#line 4914 "src/grammar.c"
    break;

  case 375: /* LOhO_gap_472: error  */
#line 1254 "grammar.y"
                           { yyval = elidable(LOhO_568); yyerrok; }
#line 4920 "src/grammar.c"
    break;

  case 376: /* TEhU_gap_473: TEhU_675  */
#line 1257 "grammar.y"
                           { yyval = node1(473, yyvsp[0]); }
#line 4926 "src/grammar.c"
    break;

  case 377: /* TEhU_gap_473: TEhU_675 free_modifier_32  */
#line 1259 "grammar.y"
                           { yyval = node2(473, yyvsp[-1], yyvsp[0]); }
#line 4932 "src/grammar.c"
    break;

  case 378: /* TEhU_gap_473: error  */
#line 1261 "grammar.y"
                           { yyval = elidable(TEhU_675); yyerrok; }
#line 4938 "src/grammar.c"
    break;

  case 379: /* right_br_no_free_474: VEhO_678  */
#line 1264 "grammar.y"
                           { yyval = node1(474, yyvsp[0]); }
#line 4944 "src/grammar.c"
    break;

  case 380: /* right_br_no_free_474: error  */
#line 1266 "grammar.y"
                           { yyval = elidable(VEhO_678); yyerrok; }
#line 4950 "src/grammar.c"
    break;

  case 381: /* NUhA_475: NUhA_667  */
#line 1269 "grammar.y"
                           { yyval = node1(475, yyvsp[0]); }
#line 4956 "src/grammar.c"
    break;

  case 382: /* NUhA_475: NUhA_667 free_modifier_32  */
#line 1271 "grammar.y"
                           { yyval = node2(475, yyvsp[-1], yyvsp[0]); }
#line 4962 "src/grammar.c"
    break;

  case 383: /* MOI_476: MOI_663  */
#line 1274 "grammar.y"
                           { yyval = node1(476, yyvsp[0]); }
#line 4968 "src/grammar.c"
    break;

  case 384: /* MOI_476: MOI_663 free_modifier_32  */
#line 1276 "grammar.y"
                           { yyval = node2(476, yyvsp[-1], yyvsp[0]); }
#line 4974 "src/grammar.c"
    break;

  case 385: /* ME_477: ME_574  */
#line 1279 "grammar.y"
                           { yyval = node1(477, yyvsp[0]); }
#line 4980 "src/grammar.c"
    break;

  case 386: /* ME_477: ME_574 free_modifier_32  */
#line 1281 "grammar.y"
                           { yyval = node2(477, yyvsp[-1], yyvsp[0]); }
#line 4986 "src/grammar.c"
    break;

  case 387: /* JAI_478: JAI_547  */
#line 1284 "grammar.y"
                           { yyval = node1(478, yyvsp[0]); }
#line 4992 "src/grammar.c"
    break;

  case 388: /* JAI_478: JAI_547 free_modifier_32  */
#line 1286 "grammar.y"
                           { yyval = node2(478, yyvsp[-1], yyvsp[0]); }
#line 4998 "src/grammar.c"
    break;

  case 389: /* BO_479: BO_508  */
#line 1289 "grammar.y"
                           { yyval = node1(479, yyvsp[0]); }
#line 5004 "src/grammar.c"
    break;

  case 390: /* BO_479: BO_508 free_modifier_32  */
#line 1291 "grammar.y"
                           { yyval = node2(479, yyvsp[-1], yyvsp[0]); }
#line 5010 "src/grammar.c"
    break;

  case 391: /* SE_480: SE_596  */
#line 1294 "grammar.y"
                           { yyval = node1(480, yyvsp[0]); }
#line 5016 "src/grammar.c"
    break;

  case 392: /* SE_480: SE_596 free_modifier_32  */
#line 1296 "grammar.y"
                           { yyval = node2(480, yyvsp[-1], yyvsp[0]); }
#line 5022 "src/grammar.c"
    break;

  case 393: /* FA_481: FA_527  */
#line 1299 "grammar.y"
                           { yyval = node1(481, yyvsp[0]); }
#line 5028 "src/grammar.c"
    break;

  case 394: /* FA_481: FA_527 free_modifier_32  */
#line 1301 "grammar.y"
                           { yyval = node2(481, yyvsp[-1], yyvsp[0]); }
#line 5034 "src/grammar.c"
    break;

  case 395: /* NAhE_482: NAhE_583  */
#line 1304 "grammar.y"
                           { yyval = node1(482, yyvsp[0]); }
#line 5040 "src/grammar.c"
    break;

  case 396: /* NAhE_482: NAhE_583 free_modifier_32  */
#line 1306 "grammar.y"
                           { yyval = node2(482, yyvsp[-1], yyvsp[0]); }
#line 5046 "src/grammar.c"
    break;

  case 397: /* qualifier_483: LAhE_561  */
#line 1309 "grammar.y"
                           { yyval = node1(483, yyvsp[0]); }
#line 5052 "src/grammar.c"
    break;

  case 398: /* qualifier_483: LAhE_561 free_modifier_32  */
#line 1311 "grammar.y"
                           { yyval = node2(483, yyvsp[-1], yyvsp[0]); }
#line 5058 "src/grammar.c"
    break;

  case 399: /* qualifier_483: NAhE_BO_809  */
#line 1313 "grammar.y"
                           { yyval = node1(483, yyvsp[0]); }
#line 5064 "src/grammar.c"
    break;

  case 400: /* NOI_484: NOI_585  */
#line 1316 "grammar.y"
                           { yyval = node1(484, yyvsp[0]); }
#line 5070 "src/grammar.c"
    break;

  case 401: /* NOI_484: NOI_585 free_modifier_32  */
#line 1318 "grammar.y"
                           { yyval = node2(484, yyvsp[-1], yyvsp[0]); }
#line 5076 "src/grammar.c"
    break;

  case 402: /* GOI_485: GOI_542  */
#line 1321 "grammar.y"
                           { yyval = node1(485, yyvsp[0]); }
#line 5082 "src/grammar.c"
    break;

  case 403: /* GOI_485: GOI_542 free_modifier_32  */
#line 1323 "grammar.y"
                           { yyval = node2(485, yyvsp[-1], yyvsp[0]); }
#line 5088 "src/grammar.c"
    break;

  case 404: /* subscript_486: XI_424 number_812 sub_gap_462  */
#line 1326 "grammar.y"
                           { yyval = node3(486, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 5094 "src/grammar.c"
    break;

  case 405: /* subscript_486: XI_424 left_bracket_470 MEX_310 right_br_no_free_474  */
#line 1328 "grammar.y"
                           { yyval = node4(486, yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 5100 "src/grammar.c"
    break;

  case 406: /* subscript_486: XI_424 lerfu_string_817 sub_gap_462  */
#line 1330 "grammar.y"
                           { yyval = node3(486, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 5106 "src/grammar.c"
    break;

  case 407: /* ZIhE_487: ZIhE_625  */
#line 1333 "grammar.y"
                           { yyval = node1(487, yyvsp[0]); }
#line 5112 "src/grammar.c"
    break;

  case 408: /* ZIhE_487: ZIhE_625 free_modifier_32  */
#line 1335 "grammar.y"
                           { yyval = node2(487, yyvsp[-1], yyvsp[0]); }
#line 5118 "src/grammar.c"
    break;

  case 409: /* LE_488: LE_562  */
#line 1338 "grammar.y"
                           { yyval = node1(488, yyvsp[0]); }
#line 5124 "src/grammar.c"
    break;

  case 410: /* LE_488: LE_562 free_modifier_32  */
#line 1340 "grammar.y"
                           { yyval = node2(488, yyvsp[-1], yyvsp[0]); }
#line 5130 "src/grammar.c"
    break;

  case 411: /* LI_489: LI_566  */
#line 1343 "grammar.y"
                           { yyval = node1(489, yyvsp[0]); }
#line 5136 "src/grammar.c"
    break;

  case 412: /* LI_489: LI_566 free_modifier_32  */
#line 1345 "grammar.y"
                           { yyval = node2(489, yyvsp[-1], yyvsp[0]); }
#line 5142 "src/grammar.c"
    break;

  case 413: /* mod_head_490: tag_491  */
#line 1348 "grammar.y"
                           { yyval = node1(490, yyvsp[0]); }
#line 5148 "src/grammar.c"
    break;

  case 414: /* mod_head_490: FA_481  */
#line 1350 "grammar.y"
                           { yyval = node1(490, yyvsp[0]); }
#line 5154 "src/grammar.c"
    break;

  case 415: /* tag_491: tense_modal_815  */
#line 1353 "grammar.y"
                           { yyval = node1(491, yyvsp[0]); }
#line 5160 "src/grammar.c"
    break;

  case 416: /* tag_491: tag_491 JOIK_JEK_422 tense_modal_815  */
#line 1355 "grammar.y"
                           { yyval = node3(491, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 5166 "src/grammar.c"
    break;

  case 417: /* ZOhU_492: ZOhU_628  */
#line 1358 "grammar.y"
                           { yyval = node1(492, yyvsp[0]); }
#line 5172 "src/grammar.c"
    break;

  case 418: /* ZOhU_492: ZOhU_628 free_modifier_32  */
#line 1360 "grammar.y"
                           { yyval = node2(492, yyvsp[-1], yyvsp[0]); }
#line 5178 "src/grammar.c"
    break;

  case 419: /* KE_493: KE_551  */
#line 1363 "grammar.y"
                           { yyval = node1(493, yyvsp[0]); }
#line 5184 "src/grammar.c"
    break;

  case 420: /* KE_493: KE_551 free_modifier_32  */
#line 1365 "grammar.y"
                           { yyval = node2(493, yyvsp[-1], yyvsp[0]); }
#line 5190 "src/grammar.c"
    break;

  case 421: /* PEhE_494: PEhE_591  */
#line 1368 "grammar.y"
                           { yyval = node1(494, yyvsp[0]); }
#line 5196 "src/grammar.c"
    break;

  case 422: /* PEhE_494: PEhE_591 free_modifier_32  */
#line 1370 "grammar.y"
                           { yyval = node2(494, yyvsp[-1], yyvsp[0]); }
#line 5202 "src/grammar.c"
    break;

  case 423: /* CEhE_495: CEhE_517  */
#line 1373 "grammar.y"
                           { yyval = node1(495, yyvsp[0]); }
#line 5208 "src/grammar.c"
    break;

  case 424: /* CEhE_495: CEhE_517 free_modifier_32  */
#line 1375 "grammar.y"
                           { yyval = node2(495, yyvsp[-1], yyvsp[0]); }
#line 5214 "src/grammar.c"
    break;

  case 425: /* NUhI_496: NUhI_587  */
#line 1378 "grammar.y"
                           { yyval = node1(496, yyvsp[0]); }
#line 5220 "src/grammar.c"
    break;

  case 426: /* NUhI_496: NUhI_587 free_modifier_32  */
#line 1380 "grammar.y"
                           { yyval = node2(496, yyvsp[-1], yyvsp[0]); }
#line 5226 "src/grammar.c"
    break;

  case 427: /* VUhO_497: VUhO_617  */
#line 1383 "grammar.y"
                           { yyval = node1(497, yyvsp[0]); }
#line 5232 "src/grammar.c"
    break;

  case 428: /* VUhO_497: VUhO_617 free_modifier_32  */
#line 1385 "grammar.y"
                           { yyval = node2(497, yyvsp[-1], yyvsp[0]); }
#line 5238 "src/grammar.c"
    break;

  case 429: /* SOI_498: SOI_602  */
#line 1388 "grammar.y"
                           { yyval = node1(498, yyvsp[0]); }
#line 5244 "src/grammar.c"
    break;

  case 430: /* SOI_498: SOI_602 free_modifier_32  */
#line 1390 "grammar.y"
                           { yyval = node2(498, yyvsp[-1], yyvsp[0]); }
#line 5250 "src/grammar.c"
    break;

  case 431: /* LA_499: LA_558  */
#line 1393 "grammar.y"
                           { yyval = node1(499, yyvsp[0]); }
#line 5256 "src/grammar.c"
    break;

  case 432: /* LA_499: LA_558 free_modifier_32  */
#line 1395 "grammar.y"
                           { yyval = node2(499, yyvsp[-1], yyvsp[0]); }
#line 5262 "src/grammar.c"
    break;

  case 433: /* utterance_ordinal_801: lexer_A_905  */
#line 1398 "grammar.y"
                           { yyval = node1(801, yyvsp[0]); }
#line 5268 "src/grammar.c"
    break;

  case 434: /* EK_802: lexer_B_910  */
#line 1401 "grammar.y"
                           { yyval = node1(802, yyvsp[0]); }
#line 5274 "src/grammar.c"
    break;

  case 435: /* EK_802: lexer_B_910 free_modifier_32  */
#line 1403 "grammar.y"
                           { yyval = node2(802, yyvsp[-1], yyvsp[0]); }
#line 5280 "src/grammar.c"
    break;

  case 436: /* EK_BO_803: lexer_C_915  */
#line 1406 "grammar.y"
                           { yyval = node1(803, yyvsp[0]); }
#line 5286 "src/grammar.c"
    break;

  case 437: /* EK_BO_803: lexer_C_915 free_modifier_32  */
#line 1408 "grammar.y"
                           { yyval = node2(803, yyvsp[-1], yyvsp[0]); }
#line 5292 "src/grammar.c"
    break;

  case 438: /* EK_KE_804: lexer_D_916  */
#line 1411 "grammar.y"
                           { yyval = node1(804, yyvsp[0]); }
#line 5298 "src/grammar.c"
    break;

  case 439: /* EK_KE_804: lexer_D_916 free_modifier_32  */
#line 1413 "grammar.y"
                           { yyval = node2(804, yyvsp[-1], yyvsp[0]); }
#line 5304 "src/grammar.c"
    break;

  case 440: /* JEK_805: lexer_E_925  */
#line 1416 "grammar.y"
                           { yyval = node1(805, yyvsp[0]); }
#line 5310 "src/grammar.c"
    break;

  case 441: /* JOIK_806: lexer_F_930  */
#line 1419 "grammar.y"
                           { yyval = node1(806, yyvsp[0]); }
#line 5316 "src/grammar.c"
    break;

  case 442: /* GEK_807: lexer_G_935  */
#line 1422 "grammar.y"
                           { yyval = node1(807, yyvsp[0]); }
#line 5322 "src/grammar.c"
    break;

  case 443: /* GEK_807: lexer_G_935 free_modifier_32  */
#line 1424 "grammar.y"
                           { yyval = node2(807, yyvsp[-1], yyvsp[0]); }
#line 5328 "src/grammar.c"
    break;

  case 444: /* GUhEK_808: lexer_H_940  */
#line 1427 "grammar.y"
                           { yyval = node1(808, yyvsp[0]); }
#line 5334 "src/grammar.c"
    break;

  case 445: /* GUhEK_808: lexer_H_940 free_modifier_32  */
#line 1429 "grammar.y"
                           { yyval = node2(808, yyvsp[-1], yyvsp[0]); }
#line 5340 "src/grammar.c"
    break;

  case 446: /* NAhE_BO_809: lexer_I_945  */
#line 1432 "grammar.y"
                           { yyval = node1(809, yyvsp[0]); }
#line 5346 "src/grammar.c"
    break;

  case 447: /* NAhE_BO_809: lexer_I_945 free_modifier_32  */
#line 1434 "grammar.y"
                           { yyval = node2(809, yyvsp[-1], yyvsp[0]); }
#line 5352 "src/grammar.c"
    break;

  case 448: /* NA_KU_810: lexer_J_950  */
#line 1437 "grammar.y"
                           { yyval = node1(810, yyvsp[0]); }
#line 5358 "src/grammar.c"
    break;

  case 449: /* NA_KU_810: lexer_J_950 free_modifier_32  */
#line 1439 "grammar.y"
                           { yyval = node2(810, yyvsp[-1], yyvsp[0]); }
#line 5364 "src/grammar.c"
    break;

  case 450: /* I_BO_811: lexer_K_955  */
#line 1442 "grammar.y"
                           { yyval = node1(811, yyvsp[0]); }
#line 5370 "src/grammar.c"
    break;

  case 451: /* I_BO_811: lexer_K_955 free_modifier_32  */
#line 1444 "grammar.y"
                           { yyval = node2(811, yyvsp[-1], yyvsp[0]); }
#line 5376 "src/grammar.c"
    break;

  case 452: /* number_812: lexer_L_960  */
#line 1447 "grammar.y"
                           { yyval = node1(812, yyvsp[0]); }
#line 5382 "src/grammar.c"
    break;

  case 453: /* GIhEK_BO_813: lexer_M_965  */
#line 1450 "grammar.y"
                           { yyval = node1(813, yyvsp[0]); }
#line 5388 "src/grammar.c"
    break;

  case 454: /* GIhEK_BO_813: lexer_M_965 free_modifier_32  */
#line 1452 "grammar.y"
                           { yyval = node2(813, yyvsp[-1], yyvsp[0]); }
#line 5394 "src/grammar.c"
    break;

  case 455: /* GIhEK_KE_814: lexer_N_966  */
#line 1455 "grammar.y"
                           { yyval = node1(814, yyvsp[0]); }
#line 5400 "src/grammar.c"
    break;

  case 456: /* GIhEK_KE_814: lexer_N_966 free_modifier_32  */
#line 1457 "grammar.y"
                           { yyval = node2(814, yyvsp[-1], yyvsp[0]); }
#line 5406 "src/grammar.c"
    break;

  case 457: /* tense_modal_815: lexer_O_970  */
#line 1460 "grammar.y"
                           { yyval = node1(815, yyvsp[0]); }
#line 5412 "src/grammar.c"
    break;

  case 458: /* tense_modal_815: lexer_O_970 free_modifier_32  */
#line 1462 "grammar.y"
                           { yyval = node2(815, yyvsp[-1], yyvsp[0]); }
#line 5418 "src/grammar.c"
    break;

  case 459: /* tense_modal_815: FIhO_437 selbri_130 FEhU_gap_458  */
#line 1464 "grammar.y"
                           { yyval = node3(815, yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 5424 "src/grammar.c"
    break;

  case 460: /* GIK_816: lexer_P_980  */
#line 1467 "grammar.y"
                           { yyval = node1(816, yyvsp[0]); }
#line 5430 "src/grammar.c"
    break;

  case 461: /* GIK_816: lexer_P_980 free_modifier_32  */
#line 1469 "grammar.y"
                           { yyval = node2(816, yyvsp[-1], yyvsp[0]); }
#line 5436 "src/grammar.c"
    break;

  case 462: /* lerfu_string_817: lexer_Q_985  */
#line 1472 "grammar.y"
                           { yyval = node1(817, yyvsp[0]); }
#line 5442 "src/grammar.c"
    break;

  case 463: /* GIhEK_818: lexer_R_990  */
#line 1475 "grammar.y"
                           { yyval = node1(818, yyvsp[0]); }
#line 5448 "src/grammar.c"
    break;

  case 464: /* GIhEK_818: lexer_R_990 free_modifier_32  */
#line 1477 "grammar.y"
                           { yyval = node2(818, yyvsp[-1], yyvsp[0]); }
#line 5454 "src/grammar.c"
    break;

  case 465: /* I_819: lexer_S_995  */
#line 1480 "grammar.y"
                           { yyval = node1(819, yyvsp[0]); }
#line 5460 "src/grammar.c"
    break;

  case 466: /* I_819: lexer_S_995 free_modifier_32  */
#line 1482 "grammar.y"
                           { yyval = node2(819, yyvsp[-1], yyvsp[0]); }
#line 5466 "src/grammar.c"
    break;

  case 467: /* I_JEK_820: lexer_T_1000  */
#line 1485 "grammar.y"
                           { yyval = node1(820, yyvsp[0]); }
#line 5472 "src/grammar.c"
    break;

  case 468: /* I_JEK_820: lexer_T_1000 free_modifier_32  */
#line 1487 "grammar.y"
                           { yyval = node2(820, yyvsp[-1], yyvsp[0]); }
#line 5478 "src/grammar.c"
    break;

  case 469: /* JEK_BO_821: lexer_U_1005  */
#line 1490 "grammar.y"
                           { yyval = node1(821, yyvsp[0]); }
#line 5484 "src/grammar.c"
    break;

  case 470: /* JEK_BO_821: lexer_U_1005 free_modifier_32  */
#line 1492 "grammar.y"
                           { yyval = node2(821, yyvsp[-1], yyvsp[0]); }
#line 5490 "src/grammar.c"
    break;

  case 471: /* JOIK_BO_822: lexer_V_1010  */
#line 1495 "grammar.y"
                           { yyval = node1(822, yyvsp[0]); }
#line 5496 "src/grammar.c"
    break;

  case 472: /* JOIK_BO_822: lexer_V_1010 free_modifier_32  */
#line 1497 "grammar.y"
                           { yyval = node2(822, yyvsp[-1], yyvsp[0]); }
#line 5502 "src/grammar.c"
    break;

  case 473: /* JOIK_KE_823: lexer_W_1015  */
#line 1500 "grammar.y"
                           { yyval = node1(823, yyvsp[0]); }
#line 5508 "src/grammar.c"
    break;

  case 474: /* JOIK_KE_823: lexer_W_1015 free_modifier_32  */
#line 1502 "grammar.y"
                           { yyval = node2(823, yyvsp[-1], yyvsp[0]); }
#line 5514 "src/grammar.c"
    break;

  case 475: /* PA_MOI_824: lexer_Y_1025  */
#line 1505 "grammar.y"
                           { yyval = node1(824, yyvsp[0]); }
#line 5520 "src/grammar.c"
    break;


#line 5524 "src/grammar.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

