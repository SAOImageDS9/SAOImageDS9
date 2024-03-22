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

urlfits: STRING_ {LoadURLFitsCmd $1}
 | NEW_ STRING_ {LoadURLFits $2 {} {} 1}
 | MASK_ STRING_ {LoadURLFits $2 mask {} 0}
 | SLICE_ STRING_ {LoadURLFits $2 {} slice 0}
 | MASK_ SLICE_ STRING_ {LoadURLFits $3 mask slice 0}
;

%%

proc urlfits::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
