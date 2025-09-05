/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Skeleton interface for Bison GLR parsers in C

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

#ifndef YY_YY_SRC_GRAMMAR_H_INCLUDED
# define YY_YY_SRC_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 1026,                /* "invalid token"  */
    A_501 = 501,                   /* A_501  */
    BAI_502 = 502,                 /* BAI_502  */
    BAhE_503 = 503,                /* BAhE_503  */
    BE_504 = 504,                  /* BE_504  */
    BEI_505 = 505,                 /* BEI_505  */
    BEhO_506 = 506,                /* BEhO_506  */
    BIhI_507 = 507,                /* BIhI_507  */
    BO_508 = 508,                  /* BO_508  */
    BRIVLA_509 = 509,              /* BRIVLA_509  */
    BU_511 = 511,                  /* BU_511  */
    BY_513 = 513,                  /* BY_513  */
    CAhA_514 = 514,                /* CAhA_514  */
    CAI_515 = 515,                 /* CAI_515  */
    CEI_516 = 516,                 /* CEI_516  */
    CEhE_517 = 517,                /* CEhE_517  */
    CMENE_518 = 518,               /* CMENE_518  */
    CO_519 = 519,                  /* CO_519  */
    COI_520 = 520,                 /* COI_520  */
    CU_521 = 521,                  /* CU_521  */
    CUhE_522 = 522,                /* CUhE_522  */
    DAhO_524 = 524,                /* DAhO_524  */
    DOI_525 = 525,                 /* DOI_525  */
    DOhU_526 = 526,                /* DOhU_526  */
    FA_527 = 527,                  /* FA_527  */
    FAhA_528 = 528,                /* FAhA_528  */
    FAhO_529 = 529,                /* FAhO_529  */
    FEhE_530 = 530,                /* FEhE_530  */
    FEhU_531 = 531,                /* FEhU_531  */
    FIhO_532 = 532,                /* FIhO_532  */
    FOI_533 = 533,                 /* FOI_533  */
    FUhE_535 = 535,                /* FUhE_535  */
    FUhO_536 = 536,                /* FUhO_536  */
    GA_537 = 537,                  /* GA_537  */
    GEhU_538 = 538,                /* GEhU_538  */
    GI_539 = 539,                  /* GI_539  */
    GIhA_541 = 541,                /* GIhA_541  */
    GOI_542 = 542,                 /* GOI_542  */
    GOhA_543 = 543,                /* GOhA_543  */
    GUhA_544 = 544,                /* GUhA_544  */
    I_545 = 545,                   /* I_545  */
    JA_546 = 546,                  /* JA_546  */
    JAI_547 = 547,                 /* JAI_547  */
    JOI_548 = 548,                 /* JOI_548  */
    KEhE_550 = 550,                /* KEhE_550  */
    KE_551 = 551,                  /* KE_551  */
    KEI_552 = 552,                 /* KEI_552  */
    KI_554 = 554,                  /* KI_554  */
    KOhA_555 = 555,                /* KOhA_555  */
    KU_556 = 556,                  /* KU_556  */
    KUhO_557 = 557,                /* KUhO_557  */
    LA_558 = 558,                  /* LA_558  */
    LAU_559 = 559,                 /* LAU_559  */
    LAhE_561 = 561,                /* LAhE_561  */
    LE_562 = 562,                  /* LE_562  */
    LEhU_565 = 565,                /* LEhU_565  */
    LI_566 = 566,                  /* LI_566  */
    LIhU_567 = 567,                /* LIhU_567  */
    LOhO_568 = 568,                /* LOhO_568  */
    LOhU_569 = 569,                /* LOhU_569  */
    LU_571 = 571,                  /* LU_571  */
    LUhU_573 = 573,                /* LUhU_573  */
    ME_574 = 574,                  /* ME_574  */
    MEhU_575 = 575,                /* MEhU_575  */
    MOhI_577 = 577,                /* MOhI_577  */
    NA_578 = 578,                  /* NA_578  */
    NAI_581 = 581,                 /* NAI_581  */
    NAhE_583 = 583,                /* NAhE_583  */
    NIhO_584 = 584,                /* NIhO_584  */
    NOI_585 = 585,                 /* NOI_585  */
    NU_586 = 586,                  /* NU_586  */
    NUhI_587 = 587,                /* NUhI_587  */
    NUhU_588 = 588,                /* NUhU_588  */
    PEhE_591 = 591,                /* PEhE_591  */
    PU_592 = 592,                  /* PU_592  */
    RAhO_593 = 593,                /* RAhO_593  */
    ROI_594 = 594,                 /* ROI_594  */
    SA_595 = 595,                  /* SA_595  */
    SE_596 = 596,                  /* SE_596  */
    SEI_597 = 597,                 /* SEI_597  */
    SEhU_598 = 598,                /* SEhU_598  */
    SI_601 = 601,                  /* SI_601  */
    SOI_602 = 602,                 /* SOI_602  */
    SU_603 = 603,                  /* SU_603  */
    TAhE_604 = 604,                /* TAhE_604  */
    TEI_605 = 605,                 /* TEI_605  */
    TO_606 = 606,                  /* TO_606  */
    TOI_607 = 607,                 /* TOI_607  */
    TUhE_610 = 610,                /* TUhE_610  */
    TUhU_611 = 611,                /* TUhU_611  */
    UI_612 = 612,                  /* UI_612  */
    VA_613 = 613,                  /* VA_613  */
    VAU_614 = 614,                 /* VAU_614  */
    VEhA_615 = 615,                /* VEhA_615  */
    VIhA_616 = 616,                /* VIhA_616  */
    VUhO_617 = 617,                /* VUhO_617  */
    XI_618 = 618,                  /* XI_618  */
    Y_619 = 619,                   /* Y_619  */
    ZAhO_621 = 621,                /* ZAhO_621  */
    ZEhA_622 = 622,                /* ZEhA_622  */
    ZEI_623 = 623,                 /* ZEI_623  */
    ZI_624 = 624,                  /* ZI_624  */
    ZIhE_625 = 625,                /* ZIhE_625  */
    ZO_626 = 626,                  /* ZO_626  */
    ZOI_627 = 627,                 /* ZOI_627  */
    ZOhU_628 = 628,                /* ZOhU_628  */
    BIhE_650 = 650,                /* BIhE_650  */
    BOI_651 = 651,                 /* BOI_651  */
    FUhA_655 = 655,                /* FUhA_655  */
    GAhO_656 = 656,                /* GAhO_656  */
    JOhI_657 = 657,                /* JOhI_657  */
    KUhE_658 = 658,                /* KUhE_658  */
    MAI_661 = 661,                 /* MAI_661  */
    MAhO_662 = 662,                /* MAhO_662  */
    MOI_663 = 663,                 /* MOI_663  */
    MOhE_664 = 664,                /* MOhE_664  */
    NAhU_665 = 665,                /* NAhU_665  */
    NIhE_666 = 666,                /* NIhE_666  */
    NUhA_667 = 667,                /* NUhA_667  */
    PA_672 = 672,                  /* PA_672  */
    PEhO_673 = 673,                /* PEhO_673  */
    TEhU_675 = 675,                /* TEhU_675  */
    VEI_677 = 677,                 /* VEI_677  */
    VEhO_678 = 678,                /* VEhO_678  */
    VUhU_679 = 679,                /* VUhU_679  */
    any_words_697 = 697,           /* any_words_697  */
    any_word_698 = 698,            /* any_word_698  */
    anything_699 = 699,            /* anything_699  */
    lexer_A_905 = 905,             /* lexer_A_905  */
    lexer_B_910 = 910,             /* lexer_B_910  */
    lexer_C_915 = 915,             /* lexer_C_915  */
    lexer_D_916 = 916,             /* lexer_D_916  */
    lexer_E_925 = 925,             /* lexer_E_925  */
    lexer_F_930 = 930,             /* lexer_F_930  */
    lexer_G_935 = 935,             /* lexer_G_935  */
    lexer_H_940 = 940,             /* lexer_H_940  */
    lexer_I_945 = 945,             /* lexer_I_945  */
    lexer_J_950 = 950,             /* lexer_J_950  */
    lexer_K_955 = 955,             /* lexer_K_955  */
    lexer_L_960 = 960,             /* lexer_L_960  */
    lexer_M_965 = 965,             /* lexer_M_965  */
    lexer_N_966 = 966,             /* lexer_N_966  */
    lexer_O_970 = 970,             /* lexer_O_970  */
    lexer_P_980 = 980,             /* lexer_P_980  */
    lexer_Q_985 = 985,             /* lexer_Q_985  */
    lexer_R_990 = 990,             /* lexer_R_990  */
    lexer_S_995 = 995,             /* lexer_S_995  */
    lexer_T_1000 = 1000,           /* lexer_T_1000  */
    lexer_U_1005 = 1005,           /* lexer_U_1005  */
    lexer_V_1010 = 1010,           /* lexer_V_1010  */
    lexer_W_1015 = 1015,           /* lexer_W_1015  */
    lexer_X_1020 = 1020,           /* lexer_X_1020  */
    lexer_Y_1025 = 1025            /* lexer_Y_1025  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_GRAMMAR_H_INCLUDED  */
