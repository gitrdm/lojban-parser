%glr-parser
%start toplevel

%{
# include "lojban.h"
%}

%%

toplevel                :  text_0  FAhO_529
                           { $$ = toplevel($1); }
                        ;
