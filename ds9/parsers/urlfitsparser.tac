%{
%}
#include def.tin

#include string.tin

%start command

%token MASK_
%token NEW_
%token SLICE_

%%

# XPA/SAMP only
command : urlfits 
 ;

urlfits: new STRING_ {LoadURLFits $2 {} {} 1}
 | new MASK_ STRING_ {LoadURLFits $3 mask {} 0}
 | new SLICE_ STRING_ {LoadURLFits $3 {} slice 0}
 | new MASK_ SLICE_ STRING_ {LoadURLFits $4 mask slice 0}
;

new :
 | NEW_ {CreateFrame}
 ;
 
%%

proc urlfits::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
