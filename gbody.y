text_0 : text_A_1
                           { $$ = node1(10000, $1); }
                        | indicators_411 text_A_1
                           { $$ = node2(10000, $1, $2); }
                        | free_modifier_32 text_A_1
                           { $$ = node2(10000, $1, $2); }
                        | cmene_404 text_A_1
                           { $$ = node2(10000, $1, $2); }
                        | indicators_411 free_modifier_32 text_A_1
                           { $$ = node3(10000, $1, $2, $3); }
                        | NAI_581 text_0
                           { $$ = node2(10000, $1, $2); }
                        ;
text_A_1 : JOIK_JEK_422 text_B_2
                           { $$ = node2(1, $1, $2); }
                        | text_B_2
                           { $$ = node1(1, $1); }
                        ;
text_B_2 : I_819 text_B_2
                           { $$ = node2(2, $1, $2); }
                        | I_JEK_820 text_B_2
                           { $$ = node2(2, $1, $2); }
                        | I_BO_811 text_B_2
                           { $$ = node2(2, $1, $2); }
                        | para_mark_410 text_C_3
                           { $$ = node2(2, $1, $2); }
                        | text_C_3
                           { $$ = node1(2, $1); }
                        ;
text_C_3 : paragraphs_4
                           { $$ = node1(3, $1); }
                        |
                           { $$ = elidable(FAhO_529); }
                        ;
paragraphs_4 : paragraph_10
                           { $$ = node1(4, $1); }
                        | paragraph_10 para_mark_410 paragraphs_4
                           { $$ = node3(4, $1, $2, $3); }
                        ;
paragraph_10 : statement_11
                           { $$ = node1(10, $1); }
                        | fragment_20
                           { $$ = node1(10, $1); }
                        | paragraph_10 I_819 statement_11
                           { $$ = node3(10, $1, $2, $3); }
                        | paragraph_10 I_819 fragment_20
                           { $$ = node3(10, $1, $2, $3); }
                        | paragraph_10 I_819
                           { $$ = node2(10, $1, $2); }
                        ;
statement_11 : statement_A_12
                           { $$ = node1(11, $1); }
                        | prenex_30 statement_11
                           { $$ = node2(11, $1, $2); }
                        ;
statement_A_12 : statement_B_13
                           { $$ = node1(12, $1); }
                        | statement_A_12 I_JEK_820 statement_B_13
                           { $$ = node3(12, $1, $2, $3); }
                        | statement_A_12 I_JEK_820
                           { $$ = node2(12, $1, $2); }
                        ;
statement_B_13 : statement_C_14
                           { $$ = node1(13, $1); }
                        | statement_C_14 I_BO_811 statement_B_13
                           { $$ = node3(13, $1, $2, $3); }
                        | statement_C_14 I_BO_811
                           { $$ = node2(13, $1, $2); }
                        ;
statement_C_14 : sentence_40
                           { $$ = node1(14, $1); }
                        | TUhE_447 text_B_2 TUhU_gap_454
                           { $$ = node3(14, $1, $2, $3); }
                        | tag_491 TUhE_447 text_B_2 TUhU_gap_454
                           { $$ = node4(14, $1, $2, $3, $4); }
                        ;
fragment_20 : EK_802
                           { $$ = node1(20, $1); }
                        | NA_445
                           { $$ = node1(20, $1); }
                        | GIhEK_818
                           { $$ = node1(20, $1); }
                        | quantifier_300
                           { $$ = node1(20, $1); }
                        | terms_80 VAU_gap_456
                           { $$ = node2(20, $1, $2); }
                        | relative_clauses_121
                           { $$ = node1(20, $1); }
                        | links_161
                           { $$ = node1(20, $1); }
                        | linkargs_160
                           { $$ = node1(20, $1); }
                        | prenex_30
                           { $$ = node1(20, $1); }
                        ;
prenex_30 : terms_80 ZOhU_492
                           { $$ = node2(30, $1, $2); }
                        ;
free_modifier_32 : free_modifier_A_33
                           { $$ = node1(32, $1); }
                        | free_modifier_A_33 free_modifier_32
                           { $$ = node2(32, $1, $2); }
                        ;
free_modifier_A_33 : vocative_35
                           { $$ = node1(33, $1); }
                        | parenthetical_36
                           { $$ = node1(33, $1); }
                        | discursive_bridi_34
                           { $$ = node1(33, $1); }
                        | subscript_486
                           { $$ = node1(33, $1); }
                        | utterance_ordinal_801
                           { $$ = node1(33, $1); }
                        ;
discursive_bridi_34 : SEI_440 selbri_130 SEhU_gap_459
                           { $$ = node3(34, $1, $2, $3); }
                        | SOI_498 sumti_90 SEhU_gap_459
                           { $$ = node3(34, $1, $2, $3); }
                        | SOI_498 sumti_90 sumti_90 SEhU_gap_459
                           { $$ = node4(34, $1, $2, $3, $4); }
                        | SEI_440 terms_80 front_gap_451                                  selbri_130 SEhU_gap_459
                           { $$ = node5(34, $1, $2, $3, $4, $5); }
                        | SEI_440 terms_80 selbri_130 SEhU_gap_459
                           { $$ = node4(34, $1, $2, $3, $4); }
                        ;
vocative_35 : DOI_415 selbri_130 DOhU_gap_457
                           { $$ = node3(35, $1, $2, $3); }
                        | DOI_415 selbri_130                                  relative_clauses_121 DOhU_gap_457
                           { $$ = node4(35, $1, $2, $3, $4); }
                        | DOI_415 relative_clauses_121                                  selbri_130 DOhU_gap_457
                           { $$ = node4(35, $1, $2, $3, $4); }
                        | DOI_415 relative_clauses_121                                  selbri_130 relative_clauses_121 DOhU_gap_457
                           { $$ = node5(35, $1, $2, $3, $4, $5); }
                        | DOI_415 cmene_404 DOhU_gap_457
                           { $$ = node3(35, $1, $2, $3); }
                        | DOI_415 cmene_404                                  relative_clauses_121 DOhU_gap_457
                           { $$ = node4(35, $1, $2, $3, $4); }
                        | DOI_415 relative_clauses_121 cmene_404                                 DOhU_gap_457
                           { $$ = node4(35, $1, $2, $3, $4); }
                        | DOI_415 relative_clauses_121 cmene_404                                  relative_clauses_121 DOhU_gap_457
                           { $$ = node5(35, $1, $2, $3, $4, $5); }
                        | DOI_415 sumti_90 DOhU_gap_457
                           { $$ = node3(35, $1, $2, $3); }
                        | DOI_415 DOhU_gap_457
                           { $$ = node2(35, $1, $2); }
                        ;
parenthetical_36 : TO_606 text_0 TOI_gap_468
                           { $$ = node3(36, $1, $2, $3); }
                        ;
sentence_40 : bridi_tail_50
                           { $$ = node1(40, $1); }
                        | terms_80 front_gap_451 bridi_tail_50
                           { $$ = node3(40, $1, $2, $3); }
                        | terms_80 bridi_tail_50
                           { $$ = node2(40, $1, $2); }
                        ;
subsentence_41 : sentence_40
                           { $$ = node1(41, $1); }
                        | prenex_30 subsentence_41
                           { $$ = node2(41, $1, $2); }
                        ;
bridi_tail_50 : bridi_tail_A_51
                           { $$ = node1(50, $1); }
                        | bridi_tail_A_51 GIhEK_KE_814 bridi_tail_50                                  KEhE_gap_466 tail_terms_71
                           { $$ = node5(50, $1, $2, $3, $4, $5); }
                        ;
bridi_tail_A_51 : bridi_tail_B_52
                           { $$ = node1(51, $1); }
                        | bridi_tail_A_51 GIhEK_818 bridi_tail_B_52                           tail_terms_71
                           { $$ = node4(51, $1, $2, $3, $4); }
                        ;
bridi_tail_B_52 : bridi_tail_C_53
                           { $$ = node1(52, $1); }
                        | bridi_tail_C_53 GIhEK_BO_813 bridi_tail_B_52                           tail_terms_71
                           { $$ = node4(52, $1, $2, $3, $4); }
                        ;
bridi_tail_C_53 : gek_sentence_54
                           { $$ = node1(53, $1); }
                        | selbri_130 tail_terms_71
                           { $$ = node2(53, $1, $2); }
                        ;
gek_sentence_54 : GEK_807 subsentence_41                                GIK_816 subsentence_41 tail_terms_71
                           { $$ = node5(54, $1, $2, $3, $4, $5); }
                        | tag_491 KE_493 gek_sentence_54 KEhE_gap_466
                           { $$ = node4(54, $1, $2, $3, $4); }
                        | NA_445 gek_sentence_54
                           { $$ = node2(54, $1, $2); }
                        ;
tail_terms_71 : terms_80 VAU_gap_456
                           { $$ = node2(71, $1, $2); }
                        | VAU_gap_456
                           { $$ = node1(71, $1); }
                        ;
terms_80 : terms_A_81
                           { $$ = node1(80, $1); }
                        | terms_80 terms_A_81
                           { $$ = node2(80, $1, $2); }
                        ;
terms_A_81 : terms_B_82
                           { $$ = node1(81, $1); }
                        | terms_A_81 PEhE_494 JOIK_JEK_422 terms_B_82
                           { $$ = node4(81, $1, $2, $3, $4); }
                        ;
terms_B_82 : term_83
                           { $$ = node1(82, $1); }
                        | terms_B_82 CEhE_495 term_83
                           { $$ = node3(82, $1, $2, $3); }
                        ;
term_83 : sumti_90
                           { $$ = node1(83, $1); }
                        | modifier_84
                           { $$ = node1(83, $1); }
                        | term_set_85
                           { $$ = node1(83, $1); }
                        | NA_KU_810
                           { $$ = node1(83, $1); }
                        ;
modifier_84 : mod_head_490 gap_450
                           { $$ = node2(84, $1, $2); }
                        | mod_head_490 sumti_90
                           { $$ = node2(84, $1, $2); }
                        ;
term_set_85 : NUhI_496 terms_80 NUhU_gap_460
                           { $$ = node3(85, $1, $2, $3); }
                        | NUhI_496 GEK_807 terms_80 NUhU_gap_460                                GIK_816 terms_80 NUhU_gap_460
                           { $$ = node7(85, $1, $2, $3, $4, $5, $6, $7); }
                        ;
sumti_90 : sumti_A_91
                           { $$ = node1(90, $1); }
                        | sumti_A_91 VUhO_497 relative_clauses_121
                           { $$ = node3(90, $1, $2, $3); }
                        ;
sumti_A_91 : sumti_B_92
                           { $$ = node1(91, $1); }
                        | sumti_B_92 EK_KE_804 sumti_90 KEhE_gap_466
                           { $$ = node4(91, $1, $2, $3, $4); }
                        | sumti_B_92 JOIK_KE_823 sumti_90 KEhE_gap_466
                           { $$ = node4(91, $1, $2, $3, $4); }
                        ;
sumti_B_92 : sumti_C_93
                           { $$ = node1(92, $1); }
                        | sumti_B_92 JOIK_EK_421 sumti_C_93
                           { $$ = node3(92, $1, $2, $3); }
                        ;
sumti_C_93 : sumti_D_94
                           { $$ = node1(93, $1); }
                        | sumti_D_94 EK_BO_803 sumti_C_93
                           { $$ = node3(93, $1, $2, $3); }
                        | sumti_D_94 JOIK_BO_822 sumti_C_93
                           { $$ = node3(93, $1, $2, $3); }
                        ;
sumti_D_94 : sumti_E_95
                           { $$ = node1(94, $1); }
                        | GEK_807 sumti_90 GIK_816 sumti_D_94
                           { $$ = node4(94, $1, $2, $3, $4); }
                        ;
sumti_E_95 : sumti_F_96
                           { $$ = node1(95, $1); }
                        | sumti_F_96 relative_clauses_121
                           { $$ = node2(95, $1, $2); }
                        | quantifier_300 selbri_130 gap_450
                           { $$ = node3(95, $1, $2, $3); }
                        | quantifier_300 selbri_130                                gap_450 relative_clauses_121
                           { $$ = node4(95, $1, $2, $3, $4); }
                        ;
sumti_F_96 : sumti_G_97
                           { $$ = node1(96, $1); }
                        | quantifier_300 sumti_G_97
                           { $$ = node2(96, $1, $2); }
                        ;
sumti_G_97 : qualifier_483 sumti_90 LUhU_gap_463
                           { $$ = node3(97, $1, $2, $3); }
                        | qualifier_483 relative_clauses_121                                sumti_90 LUhU_gap_463
                           { $$ = node4(97, $1, $2, $3, $4); }
                        | anaphora_400
                           { $$ = node1(97, $1); }
                        | LA_499 cmene_404
                           { $$ = node2(97, $1, $2); }
                        | LA_499 relative_clauses_121 cmene_404
                           { $$ = node3(97, $1, $2, $3); }
                        | LI_489 MEX_310 LOhO_gap_472
                           { $$ = node3(97, $1, $2, $3); }
                        | description_110
                           { $$ = node1(97, $1); }
                        | quote_arg_432
                           { $$ = node1(97, $1); }
                        ;
description_110 : LA_499 sumti_tail_111 gap_450
                           { $$ = node3(110, $1, $2, $3); }
                        | LE_488 sumti_tail_111 gap_450
                           { $$ = node3(110, $1, $2, $3); }
                        ;
sumti_tail_111 : sumti_tail_A_112
                           { $$ = node1(111, $1); }
                        | relative_clauses_121 sumti_tail_A_112
                           { $$ = node2(111, $1, $2); }
                        | sumti_G_97 sumti_tail_A_112
                           { $$ = node2(111, $1, $2); }
                        | sumti_G_97 relative_clauses_121 sumti_tail_A_112
                           { $$ = node3(111, $1, $2, $3); }
                        ;
sumti_tail_A_112 : selbri_130
                           { $$ = node1(112, $1); }
                        | selbri_130 relative_clauses_121
                           { $$ = node2(112, $1, $2); }
                        | quantifier_300 selbri_130
                           { $$ = node2(112, $1, $2); }
                        | quantifier_300 selbri_130 relative_clauses_121
                           { $$ = node3(112, $1, $2, $3); }
                        | quantifier_300 sumti_90
                           { $$ = node2(112, $1, $2); }
                        ;
relative_clauses_121 : relative_clause_122
                           { $$ = node1(121, $1); }
                        | relative_clauses_121 ZIhE_487 relative_clause_122
                           { $$ = node3(121, $1, $2, $3); }
                        ;
relative_clause_122 : GOI_485 term_83 GEhU_gap_464
                           { $$ = node3(122, $1, $2, $3); }
                        | NOI_484 subsentence_41 KUhO_gap_469
                           { $$ = node3(122, $1, $2, $3); }
                        ;
selbri_130 : tag_491 selbri_A_131
                           { $$ = node2(130, $1, $2); }
                        | selbri_A_131
                           { $$ = node1(130, $1); }
                        ;
selbri_A_131 : selbri_B_132
                           { $$ = node1(131, $1); }
                        | NA_445 selbri_130
                           { $$ = node2(131, $1, $2); }
                        ;
selbri_B_132 : selbri_C_133
                           { $$ = node1(132, $1); }
                        | selbri_C_133 CO_443 selbri_B_132
                           { $$ = node3(132, $1, $2, $3); }
                        ;
selbri_C_133 : selbri_D_134
                           { $$ = node1(133, $1); }
                        | selbri_C_133 selbri_D_134
                           { $$ = node2(133, $1, $2); }
                        ;
selbri_D_134 : selbri_E_135
                           { $$ = node1(134, $1); }
                        | selbri_D_134 JOIK_JEK_422 selbri_E_135
                           { $$ = node3(134, $1, $2, $3); }
                        | selbri_D_134 JOIK_KE_823 selbri_C_133                                KEhE_gap_466
                           { $$ = node4(134, $1, $2, $3, $4); }
                        ;
selbri_E_135 : selbri_F_136
                           { $$ = node1(135, $1); }
                        | selbri_F_136 JEK_BO_821 selbri_E_135
                           { $$ = node3(135, $1, $2, $3); }
                        | selbri_F_136 JOIK_BO_822 selbri_E_135
                           { $$ = node3(135, $1, $2, $3); }
                        ;
selbri_F_136 : tanru_unit_150
                           { $$ = node1(136, $1); }
                        | tanru_unit_150 BO_479 selbri_F_136
                           { $$ = node3(136, $1, $2, $3); }
                        | GUhEK_selbri_137
                           { $$ = node1(136, $1); }
                        | NAhE_482 GUhEK_selbri_137
                           { $$ = node2(136, $1, $2); }
                        ;
GUhEK_selbri_137 : GUhEK_808 selbri_130 GIK_816 selbri_F_136
                           { $$ = node4(137, $1, $2, $3, $4); }
                        ;
tanru_unit_150 : tanru_unit_A_151
                           { $$ = node1(150, $1); }
                        | tanru_unit_150 CEI_444 tanru_unit_A_151
                           { $$ = node3(150, $1, $2, $3); }
                        ;
tanru_unit_A_151 : tanru_unit_B_152
                           { $$ = node1(151, $1); }
                        | tanru_unit_B_152 linkargs_160
                           { $$ = node2(151, $1, $2); }
                        ;
tanru_unit_B_152 : bridi_valsi_407
                           { $$ = node1(152, $1); }
                        | KE_493 selbri_C_133 KEhE_gap_466
                           { $$ = node3(152, $1, $2, $3); }
                        | SE_480 tanru_unit_B_152
                           { $$ = node2(152, $1, $2); }
                        | JAI_478 tag_491 tanru_unit_B_152
                           { $$ = node3(152, $1, $2, $3); }
                        | JAI_478 tanru_unit_B_152
                           { $$ = node2(152, $1, $2); }
                        | ME_477 sumti_90 MEhU_gap_465
                           { $$ = node3(152, $1, $2, $3); }
                        | ME_477 sumti_90 MEhU_gap_465 MOI_476
                           { $$ = node4(152, $1, $2, $3, $4); }
                        | NUhA_475 MEX_operator_374
                           { $$ = node2(152, $1, $2); }
                        | NAhE_482 tanru_unit_B_152
                           { $$ = node2(152, $1, $2); }
                        | NU_425 subsentence_41 KEI_gap_453
                           { $$ = node3(152, $1, $2, $3); }
                        ;
linkargs_160 : BE_446 term_83 BEhO_gap_467
                           { $$ = node3(160, $1, $2, $3); }
                        | BE_446 term_83 links_161 BEhO_gap_467
                           { $$ = node4(160, $1, $2, $3, $4); }
                        ;
links_161 : BEI_442 term_83
                           { $$ = node2(161, $1, $2); }
                        | BEI_442 term_83 links_161
                           { $$ = node3(161, $1, $2, $3); }
                        ;
quantifier_300 : number_812 BOI_gap_461
                           { $$ = node2(300, $1, $2); }
                        | left_bracket_470 MEX_310 right_bracket_gap_471
                           { $$ = node3(300, $1, $2, $3); }
                        ;
MEX_310 : MEX_A_311
                           { $$ = node1(310, $1); }
                        | MEX_310 operator_370 MEX_A_311
                           { $$ = node3(310, $1, $2, $3); }
                        | FUhA_441 rp_expression_330
                           { $$ = node2(310, $1, $2); }
                        ;
MEX_A_311 : MEX_B_312
                           { $$ = node1(311, $1); }
                        | MEX_B_312 BIhE_439 operator_370 MEX_A_311
                           { $$ = node4(311, $1, $2, $3, $4); }
                        ;
MEX_B_312 : operand_381
                           { $$ = node1(312, $1); }
                        | operator_370 MEX_C_313 MEX_gap_452
                           { $$ = node3(312, $1, $2, $3); }
                        | PEhO_438 operator_370 MEX_C_313 MEX_gap_452
                           { $$ = node4(312, $1, $2, $3, $4); }
                        ;
MEX_C_313 : MEX_B_312
                           { $$ = node1(313, $1); }
                        | MEX_C_313 MEX_B_312
                           { $$ = node2(313, $1, $2); }
                        ;
rp_expression_330 : rp_operand_332 rp_operand_332 operator_370
                           { $$ = node3(330, $1, $2, $3); }
                        ;
rp_operand_332 : operand_381
                           { $$ = node1(332, $1); }
                        | rp_expression_330
                           { $$ = node1(332, $1); }
                        ;
operator_370 : operator_A_371
                           { $$ = node1(370, $1); }
                        | operator_370 JOIK_JEK_422 operator_A_371
                           { $$ = node3(370, $1, $2, $3); }
                        | operator_370 JOIK_KE_823 operator_370                                KEhE_gap_466
                           { $$ = node4(370, $1, $2, $3, $4); }
                        ;
operator_A_371 : operator_B_372
                           { $$ = node1(371, $1); }
                        | GUhEK_808 operator_A_371 GIK_816 operator_B_372
                           { $$ = node4(371, $1, $2, $3, $4); }
                        | operator_B_372 JOIK_BO_822 operator_A_371
                           { $$ = node3(371, $1, $2, $3); }
                        | operator_B_372 JEK_BO_821 operator_A_371
                           { $$ = node3(371, $1, $2, $3); }
                        ;
operator_B_372 : MEX_operator_374
                           { $$ = node1(372, $1); }
                        | KE_493 operator_370 KEhE_gap_466
                           { $$ = node3(372, $1, $2, $3); }
                        ;
MEX_operator_374 : VUhU_679
                           { $$ = node1(374, $1); }
                        | VUhU_679 free_modifier_32
                           { $$ = node2(374, $1, $2); }
                        | SE_480 MEX_operator_374
                           { $$ = node2(374, $1, $2); }
                        | NAhE_482 MEX_operator_374
                           { $$ = node2(374, $1, $2); }
                        | MAhO_430 MEX_310 TEhU_gap_473
                           { $$ = node3(374, $1, $2, $3); }
                        | NAhU_429 selbri_130 TEhU_gap_473
                           { $$ = node3(374, $1, $2, $3); }
                        ;
operand_381 : operand_A_382
                           { $$ = node1(381, $1); }
                        | operand_A_382 EK_KE_804 operand_381 KEhE_gap_466
                           { $$ = node4(381, $1, $2, $3, $4); }
                        | operand_A_382 JOIK_KE_823 operand_381 KEhE_gap_466
                           { $$ = node4(381, $1, $2, $3, $4); }
                        ;
operand_A_382 : operand_B_383
                           { $$ = node1(382, $1); }
                        | operand_A_382 JOIK_EK_421 operand_B_383
                           { $$ = node3(382, $1, $2, $3); }
                        ;
operand_B_383 : operand_C_385
                           { $$ = node1(383, $1); }
                        | operand_C_385 EK_BO_803 operand_B_383
                           { $$ = node3(383, $1, $2, $3); }
                        | operand_C_385 JOIK_BO_822 operand_B_383
                           { $$ = node3(383, $1, $2, $3); }
                        ;
operand_C_385 : quantifier_300
                           { $$ = node1(385, $1); }
                        | lerfu_string_817 BOI_gap_461
                           { $$ = node2(385, $1, $2); }
                        | NIhE_428 selbri_130 TEhU_gap_473
                           { $$ = node3(385, $1, $2, $3); }
                        | MOhE_427 sumti_90 TEhU_gap_473
                           { $$ = node3(385, $1, $2, $3); }
                        | JOhI_431 MEX_C_313 TEhU_gap_473
                           { $$ = node3(385, $1, $2, $3); }
                        | GEK_807 operand_381 GIK_816 operand_C_385
                           { $$ = node4(385, $1, $2, $3, $4); }
                        | qualifier_483 operand_381 LUhU_gap_463
                           { $$ = node3(385, $1, $2, $3); }
                        ;
anaphora_400 : KOhA_555
                           { $$ = node1(400, $1); }
                        | KOhA_555 free_modifier_32
                           { $$ = node2(400, $1, $2); }
                        | lerfu_string_817 BOI_gap_461
                           { $$ = node2(400, $1, $2); }
                        ;
cmene_404 : cmene_A_405
                           { $$ = node1(404, $1); }
                        | cmene_A_405 free_modifier_32
                           { $$ = node2(404, $1, $2); }
                        ;
cmene_A_405 : CMENE_518
                           { $$ = node1(405, $1); }
                        | cmene_A_405 CMENE_518
                           { $$ = node2(405, $1, $2); }
                        ;
bridi_valsi_407 : bridi_valsi_A_408
                           { $$ = node1(407, $1); }
                        | bridi_valsi_A_408 free_modifier_32
                           { $$ = node2(407, $1, $2); }
                        ;
bridi_valsi_A_408 : BRIVLA_509
                           { $$ = node1(408, $1); }
                        | PA_MOI_824
                           { $$ = node1(408, $1); }
                        | GOhA_543
                           { $$ = node1(408, $1); }
                        | GOhA_543 RAhO_593
                           { $$ = node2(408, $1, $2); }
                        ;
para_mark_410 : NIhO_584
                           { $$ = node1(410, $1); }
                        | NIhO_584 free_modifier_32
                           { $$ = node2(410, $1, $2); }
                        | NIhO_584 para_mark_410
                           { $$ = node2(410, $1, $2); }
                        ;
indicators_411 : indicators_A_412
                           { $$ = node1(411, $1); }
                        | FUhE_535 indicators_A_412
                           { $$ = node2(411, $1, $2); }
                        ;
indicators_A_412 : indicator_413
                           { $$ = node1(412, $1); }
                        | indicators_A_412 indicator_413
                           { $$ = node2(412, $1, $2); }
                        ;
indicator_413 : UI_612
                           { $$ = node1(413, $1); }
                        | CAI_515
                           { $$ = node1(413, $1); }
                        | UI_612 NAI_581
                           { $$ = node2(413, $1, $2); }
                        | CAI_515 NAI_581
                           { $$ = node2(413, $1, $2); }
                        | Y_619
                           { $$ = node1(413, $1); }
                        | DAhO_524
                           { $$ = node1(413, $1); }
                        | FUhO_536
                           { $$ = node1(413, $1); }
                        ;
DOI_415 : DOI_525
                           { $$ = node1(415, $1); }
                        | COI_416
                           { $$ = node1(415, $1); }
                        | COI_416 DOI_525
                           { $$ = node2(415, $1, $2); }
                        ;
COI_416 : COI_A_417
                           { $$ = node1(416, $1); }
                        | COI_416 COI_A_417
                           { $$ = node2(416, $1, $2); }
                        ;
COI_A_417 : COI_520
                           { $$ = node1(417, $1); }
                        | COI_520 NAI_581
                           { $$ = node2(417, $1, $2); }
                        ;
JOIK_EK_421 : EK_802
                           { $$ = node1(421, $1); }
                        | JOIK_806
                           { $$ = node1(421, $1); }
                        | JOIK_806 free_modifier_32
                           { $$ = node2(421, $1, $2); }
                        ;
JOIK_JEK_422 : JOIK_806
                           { $$ = node1(422, $1); }
                        | JOIK_806 free_modifier_32
                           { $$ = node2(422, $1, $2); }
                        | JEK_805
                           { $$ = node1(422, $1); }
                        | JEK_805 free_modifier_32
                           { $$ = node2(422, $1, $2); }
                        ;
XI_424 : XI_618
                           { $$ = node1(424, $1); }
                        | XI_618 free_modifier_32
                           { $$ = node2(424, $1, $2); }
                        ;
NU_425 : NU_A_426
                           { $$ = node1(425, $1); }
                        | NU_425 JOIK_JEK_422 NU_A_426
                           { $$ = node3(425, $1, $2, $3); }
                        ;
NU_A_426 : NU_586
                           { $$ = node1(426, $1); }
                        | NU_586 NAI_581
                           { $$ = node2(426, $1, $2); }
                        | NU_586 free_modifier_32
                           { $$ = node2(426, $1, $2); }
                        | NU_586 NAI_581 free_modifier_32
                           { $$ = node3(426, $1, $2, $3); }
                        ;
MOhE_427 : MOhE_664
                           { $$ = node1(427, $1); }
                        | MOhE_664 free_modifier_32
                           { $$ = node2(427, $1, $2); }
                        ;
NIhE_428 : NIhE_666
                           { $$ = node1(428, $1); }
                        | NIhE_666 free_modifier_32
                           { $$ = node2(428, $1, $2); }
                        ;
NAhU_429 : NAhU_665
                           { $$ = node1(429, $1); }
                        | NAhU_665 free_modifier_32
                           { $$ = node2(429, $1, $2); }
                        ;
MAhO_430 : MAhO_662
                           { $$ = node1(430, $1); }
                        | MAhO_662 free_modifier_32
                           { $$ = node2(430, $1, $2); }
                        ;
JOhI_431 : JOhI_657
                           { $$ = node1(431, $1); }
                        | JOhI_657 free_modifier_32
                           { $$ = node2(431, $1, $2); }
                        ;
quote_arg_432 : quote_arg_A_433
                           { $$ = node1(432, $1); }
                        | quote_arg_A_433 free_modifier_32
                           { $$ = node2(432, $1, $2); }
                        ;
quote_arg_A_433 : ZOI_quote_434
                           { $$ = node1(433, $1); }
                        | ZO_quote_435
                           { $$ = node1(433, $1); }
                        | LOhU_quote_436
                           { $$ = node1(433, $1); }
                        | LU_571 text_0 LIhU_gap_448
                           { $$ = node3(433, $1, $2, $3); }
                        ;
ZOI_quote_434 : ZOI_627 any_word_698                                             anything_699 any_word_698
                           { $$ = node4(434, $1, $2, $3, $4); }
                        ;
ZO_quote_435 : ZO_626 any_word_698
                           { $$ = node2(435, $1, $2); }
                        ;
LOhU_quote_436 : LOhU_569 any_words_697 LEhU_565
                           { $$ = node3(436, $1, $2, $3); }
                        ;
FIhO_437 : FIhO_532
                           { $$ = node1(437, $1); }
                        | FIhO_532 free_modifier_32
                           { $$ = node2(437, $1, $2); }
                        ;
PEhO_438 : PEhO_673
                           { $$ = node1(438, $1); }
                        | PEhO_673 free_modifier_32
                           { $$ = node2(438, $1, $2); }
                        ;
BIhE_439 : BIhE_650
                           { $$ = node1(439, $1); }
                        | BIhE_650 free_modifier_32
                           { $$ = node2(439, $1, $2); }
                        ;
SEI_440 : SEI_597
                           { $$ = node1(440, $1); }
                        | SEI_597 free_modifier_32
                           { $$ = node2(440, $1, $2); }
                        ;
FUhA_441 : FUhA_655
                           { $$ = node1(441, $1); }
                        | FUhA_655 free_modifier_32
                           { $$ = node2(441, $1, $2); }
                        ;
BEI_442 : BEI_505
                           { $$ = node1(442, $1); }
                        | BEI_505 free_modifier_32
                           { $$ = node2(442, $1, $2); }
                        ;
CO_443 : CO_519
                           { $$ = node1(443, $1); }
                        | CO_519 free_modifier_32
                           { $$ = node2(443, $1, $2); }
                        ;
CEI_444 : CEI_516
                           { $$ = node1(444, $1); }
                        | CEI_516 free_modifier_32
                           { $$ = node2(444, $1, $2); }
                        ;
NA_445 : NA_578
                           { $$ = node1(445, $1); }
                        | NA_578 free_modifier_32
                           { $$ = node2(445, $1, $2); }
                        ;
BE_446 : BE_504
                           { $$ = node1(446, $1); }
                        | BE_504 free_modifier_32
                           { $$ = node2(446, $1, $2); }
                        ;
TUhE_447 : TUhE_610
                           { $$ = node1(447, $1); }
                        | TUhE_610 free_modifier_32
                           { $$ = node2(447, $1, $2); }
                        ;
LIhU_gap_448 : LIhU_567
                           { $$ = node1(448, $1); }
                        | error
                           { $$ = elidable(LIhU_567); yyerrok; }
                        ;
gap_450 : KU_556
                           { $$ = node1(450, $1); }
                        | KU_556 free_modifier_32
                           { $$ = node2(450, $1, $2); }
                        | error
                           { $$ = elidable(KU_556); yyerrok; }
                        ;
front_gap_451 : CU_521
                           { $$ = node1(451, $1); }
                        | CU_521 free_modifier_32
                           { $$ = node2(451, $1, $2); }
                        ;
MEX_gap_452 : KUhE_658
                           { $$ = node1(452, $1); }
                        | KUhE_658 free_modifier_32
                           { $$ = node2(452, $1, $2); }
                        | error
                           { $$ = elidable(KUhE_658); yyerrok; }
                        ;
KEI_gap_453 : KEI_552
                           { $$ = node1(453, $1); }
                        | KEI_552 free_modifier_32
                           { $$ = node2(453, $1, $2); }
                        | error
                           { $$ = elidable(KEI_552); yyerrok; }
                        ;
TUhU_gap_454 : TUhU_611
                           { $$ = node1(454, $1); }
                        | TUhU_611 free_modifier_32
                           { $$ = node2(454, $1, $2); }
                        | error
                           { $$ = elidable(TUhU_611); yyerrok; }
                        ;
VAU_gap_456 : VAU_614
                           { $$ = node1(456, $1); }
                        | VAU_614 free_modifier_32
                           { $$ = node2(456, $1, $2); }
                        | error
                           { $$ = elidable(VAU_614); yyerrok; }
                        ;
DOhU_gap_457 : DOhU_526
                           { $$ = node1(457, $1); }
                        | error
                           { $$ = elidable(DOhU_526); yyerrok; }
                        ;
FEhU_gap_458 : FEhU_531
                           { $$ = node1(458, $1); }
                        | FEhU_531 free_modifier_32
                           { $$ = node2(458, $1, $2); }
                        | error
                           { $$ = elidable(FEhU_531); yyerrok; }
                        ;
SEhU_gap_459 : SEhU_598
                           { $$ = node1(459, $1); }
                        | error
                           { $$ = elidable(SEhU_598); yyerrok; }
                        ;
NUhU_gap_460 : NUhU_588
                           { $$ = node1(460, $1); }
                        | NUhU_588 free_modifier_32
                           { $$ = node2(460, $1, $2); }
                        | error
                           { $$ = elidable(NUhU_588); yyerrok; }
                        ;
BOI_gap_461 : BOI_651
                           { $$ = node1(461, $1); }
                        | BOI_651 free_modifier_32
                           { $$ = node2(461, $1, $2); }
                        | error
                           { $$ = elidable(BOI_651); yyerrok; }
                        ;
sub_gap_462 : BOI_651
                           { $$ = node1(462, $1); }
                        | error
                           { $$ = elidable(BOI_651); yyerrok; }
                        ;
LUhU_gap_463 : LUhU_573
                           { $$ = node1(463, $1); }
                        | LUhU_573 free_modifier_32
                           { $$ = node2(463, $1, $2); }
                        | error
                           { $$ = elidable(LUhU_573); yyerrok; }
                        ;
GEhU_gap_464 : GEhU_538
                           { $$ = node1(464, $1); }
                        | GEhU_538 free_modifier_32
                           { $$ = node2(464, $1, $2); }
                        | error
                           { $$ = elidable(GEhU_538); yyerrok; }
                        ;
MEhU_gap_465 : MEhU_575
                           { $$ = node1(465, $1); }
                        | MEhU_575 free_modifier_32
                           { $$ = node2(465, $1, $2); }
                        | error
                           { $$ = elidable(MEhU_575); yyerrok; }
                        ;
KEhE_gap_466 : KEhE_550
                           { $$ = node1(466, $1); }
                        | KEhE_550 free_modifier_32
                           { $$ = node2(466, $1, $2); }
                        | error
                           { $$ = elidable(KEhE_550); yyerrok; }
                        ;
BEhO_gap_467 : BEhO_506
                           { $$ = node1(467, $1); }
                        | BEhO_506 free_modifier_32
                           { $$ = node2(467, $1, $2); }
                        | error
                           { $$ = elidable(BEhO_506); yyerrok; }
                        ;
TOI_gap_468 : TOI_607
                           { $$ = node1(468, $1); }
                        | error
                           { $$ = elidable(TOI_607); yyerrok; }
                        ;
KUhO_gap_469 : KUhO_557
                           { $$ = node1(469, $1); }
                        | KUhO_557 free_modifier_32
                           { $$ = node2(469, $1, $2); }
                        | error
                           { $$ = elidable(KUhO_557); yyerrok; }
                        ;
left_bracket_470 : VEI_677
                           { $$ = node1(470, $1); }
                        | VEI_677 free_modifier_32
                           { $$ = node2(470, $1, $2); }
                        ;
right_bracket_gap_471 : VEhO_678
                           { $$ = node1(471, $1); }
                        | VEhO_678 free_modifier_32
                           { $$ = node2(471, $1, $2); }
                        | error
                           { $$ = elidable(VEhO_678); yyerrok; }
                        ;
LOhO_gap_472 : LOhO_568
                           { $$ = node1(472, $1); }
                        | LOhO_568 free_modifier_32
                           { $$ = node2(472, $1, $2); }
                        | error
                           { $$ = elidable(LOhO_568); yyerrok; }
                        ;
TEhU_gap_473 : TEhU_675
                           { $$ = node1(473, $1); }
                        | TEhU_675 free_modifier_32
                           { $$ = node2(473, $1, $2); }
                        | error
                           { $$ = elidable(TEhU_675); yyerrok; }
                        ;
right_br_no_free_474 : VEhO_678
                           { $$ = node1(474, $1); }
                        | error
                           { $$ = elidable(VEhO_678); yyerrok; }
                        ;
NUhA_475 : NUhA_667
                           { $$ = node1(475, $1); }
                        | NUhA_667 free_modifier_32
                           { $$ = node2(475, $1, $2); }
                        ;
MOI_476 : MOI_663
                           { $$ = node1(476, $1); }
                        | MOI_663 free_modifier_32
                           { $$ = node2(476, $1, $2); }
                        ;
ME_477 : ME_574
                           { $$ = node1(477, $1); }
                        | ME_574 free_modifier_32
                           { $$ = node2(477, $1, $2); }
                        ;
JAI_478 : JAI_547
                           { $$ = node1(478, $1); }
                        | JAI_547 free_modifier_32
                           { $$ = node2(478, $1, $2); }
                        ;
BO_479 : BO_508
                           { $$ = node1(479, $1); }
                        | BO_508 free_modifier_32
                           { $$ = node2(479, $1, $2); }
                        ;
SE_480 : SE_596
                           { $$ = node1(480, $1); }
                        | SE_596 free_modifier_32
                           { $$ = node2(480, $1, $2); }
                        ;
FA_481 : FA_527
                           { $$ = node1(481, $1); }
                        | FA_527 free_modifier_32
                           { $$ = node2(481, $1, $2); }
                        ;
NAhE_482 : NAhE_583
                           { $$ = node1(482, $1); }
                        | NAhE_583 free_modifier_32
                           { $$ = node2(482, $1, $2); }
                        ;
qualifier_483 : LAhE_561
                           { $$ = node1(483, $1); }
                        | LAhE_561 free_modifier_32
                           { $$ = node2(483, $1, $2); }
                        | NAhE_BO_809
                           { $$ = node1(483, $1); }
                        ;
NOI_484 : NOI_585
                           { $$ = node1(484, $1); }
                        | NOI_585 free_modifier_32
                           { $$ = node2(484, $1, $2); }
                        ;
GOI_485 : GOI_542
                           { $$ = node1(485, $1); }
                        | GOI_542 free_modifier_32
                           { $$ = node2(485, $1, $2); }
                        ;
subscript_486 : XI_424 number_812 sub_gap_462
                           { $$ = node3(486, $1, $2, $3); }
                        | XI_424 left_bracket_470 MEX_310                                right_br_no_free_474
                           { $$ = node4(486, $1, $2, $3, $4); }
                        | XI_424 lerfu_string_817 sub_gap_462
                           { $$ = node3(486, $1, $2, $3); }
                        ;
ZIhE_487 : ZIhE_625
                           { $$ = node1(487, $1); }
                        | ZIhE_625 free_modifier_32
                           { $$ = node2(487, $1, $2); }
                        ;
LE_488 : LE_562
                           { $$ = node1(488, $1); }
                        | LE_562 free_modifier_32
                           { $$ = node2(488, $1, $2); }
                        ;
LI_489 : LI_566
                           { $$ = node1(489, $1); }
                        | LI_566 free_modifier_32
                           { $$ = node2(489, $1, $2); }
                        ;
mod_head_490 : tag_491
                           { $$ = node1(490, $1); }
                        | FA_481
                           { $$ = node1(490, $1); }
                        ;
tag_491 : tense_modal_815
                           { $$ = node1(491, $1); }
                        | tag_491 JOIK_JEK_422 tense_modal_815
                           { $$ = node3(491, $1, $2, $3); }
                        ;
ZOhU_492 : ZOhU_628
                           { $$ = node1(492, $1); }
                        | ZOhU_628 free_modifier_32
                           { $$ = node2(492, $1, $2); }
                        ;
KE_493 : KE_551
                           { $$ = node1(493, $1); }
                        | KE_551 free_modifier_32
                           { $$ = node2(493, $1, $2); }
                        ;
PEhE_494 : PEhE_591
                           { $$ = node1(494, $1); }
                        | PEhE_591 free_modifier_32
                           { $$ = node2(494, $1, $2); }
                        ;
CEhE_495 : CEhE_517
                           { $$ = node1(495, $1); }
                        | CEhE_517 free_modifier_32
                           { $$ = node2(495, $1, $2); }
                        ;
NUhI_496 : NUhI_587
                           { $$ = node1(496, $1); }
                        | NUhI_587 free_modifier_32
                           { $$ = node2(496, $1, $2); }
                        ;
VUhO_497 : VUhO_617
                           { $$ = node1(497, $1); }
                        | VUhO_617 free_modifier_32
                           { $$ = node2(497, $1, $2); }
                        ;
SOI_498 : SOI_602
                           { $$ = node1(498, $1); }
                        | SOI_602 free_modifier_32
                           { $$ = node2(498, $1, $2); }
                        ;
LA_499 : LA_558
                           { $$ = node1(499, $1); }
                        | LA_558 free_modifier_32
                           { $$ = node2(499, $1, $2); }
                        ;
utterance_ordinal_801 : lexer_A_905
                           { $$ = node1(801, $1); }
                        ;
EK_802 : lexer_B_910
                           { $$ = node1(802, $1); }
                        | lexer_B_910 free_modifier_32
                           { $$ = node2(802, $1, $2); }
                        ;
EK_BO_803 : lexer_C_915
                           { $$ = node1(803, $1); }
                        | lexer_C_915 free_modifier_32
                           { $$ = node2(803, $1, $2); }
                        ;
EK_KE_804 : lexer_D_916
                           { $$ = node1(804, $1); }
                        | lexer_D_916 free_modifier_32
                           { $$ = node2(804, $1, $2); }
                        ;
JEK_805 : lexer_E_925
                           { $$ = node1(805, $1); }
                        ;
JOIK_806 : lexer_F_930
                           { $$ = node1(806, $1); }
                        ;
GEK_807 : lexer_G_935
                           { $$ = node1(807, $1); }
                        | lexer_G_935 free_modifier_32
                           { $$ = node2(807, $1, $2); }
                        ;
GUhEK_808 : lexer_H_940
                           { $$ = node1(808, $1); }
                        | lexer_H_940 free_modifier_32
                           { $$ = node2(808, $1, $2); }
                        ;
NAhE_BO_809 : lexer_I_945
                           { $$ = node1(809, $1); }
                        | lexer_I_945 free_modifier_32
                           { $$ = node2(809, $1, $2); }
                        ;
NA_KU_810 : lexer_J_950
                           { $$ = node1(810, $1); }
                        | lexer_J_950 free_modifier_32
                           { $$ = node2(810, $1, $2); }
                        ;
I_BO_811 : lexer_K_955
                           { $$ = node1(811, $1); }
                        | lexer_K_955 free_modifier_32
                           { $$ = node2(811, $1, $2); }
                        ;
number_812 : lexer_L_960
                           { $$ = node1(812, $1); }
                        ;
GIhEK_BO_813 : lexer_M_965
                           { $$ = node1(813, $1); }
                        | lexer_M_965 free_modifier_32
                           { $$ = node2(813, $1, $2); }
                        ;
GIhEK_KE_814 : lexer_N_966
                           { $$ = node1(814, $1); }
                        | lexer_N_966 free_modifier_32
                           { $$ = node2(814, $1, $2); }
                        ;
tense_modal_815 : lexer_O_970
                           { $$ = node1(815, $1); }
                        | lexer_O_970 free_modifier_32
                           { $$ = node2(815, $1, $2); }
                        | FIhO_437 selbri_130 FEhU_gap_458
                           { $$ = node3(815, $1, $2, $3); }
                        ;
GIK_816 : lexer_P_980
                           { $$ = node1(816, $1); }
                        | lexer_P_980 free_modifier_32
                           { $$ = node2(816, $1, $2); }
                        ;
lerfu_string_817 : lexer_Q_985
                           { $$ = node1(817, $1); }
                        ;
GIhEK_818 : lexer_R_990
                           { $$ = node1(818, $1); }
                        | lexer_R_990 free_modifier_32
                           { $$ = node2(818, $1, $2); }
                        ;
I_819 : lexer_S_995
                           { $$ = node1(819, $1); }
                        | lexer_S_995 free_modifier_32
                           { $$ = node2(819, $1, $2); }
                        ;
I_JEK_820 : lexer_T_1000
                           { $$ = node1(820, $1); }
                        | lexer_T_1000 free_modifier_32
                           { $$ = node2(820, $1, $2); }
                        ;
JEK_BO_821 : lexer_U_1005
                           { $$ = node1(821, $1); }
                        | lexer_U_1005 free_modifier_32
                           { $$ = node2(821, $1, $2); }
                        ;
JOIK_BO_822 : lexer_V_1010
                           { $$ = node1(822, $1); }
                        | lexer_V_1010 free_modifier_32
                           { $$ = node2(822, $1, $2); }
                        ;
JOIK_KE_823 : lexer_W_1015
                           { $$ = node1(823, $1); }
                        | lexer_W_1015 free_modifier_32
                           { $$ = node2(823, $1, $2); }
                        ;
PA_MOI_824 : lexer_Y_1025
                           { $$ = node1(824, $1); }
                        ;
