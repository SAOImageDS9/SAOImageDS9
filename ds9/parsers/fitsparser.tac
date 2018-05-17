%{
%}

#include string.tin

%start command

%token MASK_
%token NEW_
%token SLICE_

%%

# XPA/SAMP only
command : fits 
 ;

fits: NEW_ {CreateFrame; FitsCmdLoad {} {} {}}
 | new STRING_ {FitsCmdLoad $2 {} {}}
 | new MASK_ STRING_ {FitsCmdLoad $3 mask {}}
 | new SLICE_ STRING_ {FitsCmdLoad $3 {} slice}
 | new MASK_ SLICE_ STRING_ {FitsCmdLoad $4 mask slice}
;

new :
 | NEW_ {CreateFrame}
 ;
 
%%

proc fits::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
