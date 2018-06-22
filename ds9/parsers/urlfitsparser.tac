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

urlfits: new STRING_ {LoadURLFits $2 {} {}}
 | new MASK_ STRING_ {LoadURLFits $3 mask {}}
 | new SLICE_ STRING_ {LoadURLFits $3 {} slice}
 | new MASK_ SLICE_ STRING_ {LoadURLFits $4 mask slice}
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
