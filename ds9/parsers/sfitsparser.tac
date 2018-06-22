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
command : sfits 
 ;

sfits: new STRING_ STRING_ {LoadSFitsFile $2 $3 {} {}}
 | new MASK_ STRING_ STRING_ {LoadSFitsFile $3 $4 mask {}}
 | new SLICE_ STRING_ STRING_ {LoadSFitsFile $3 $4 {} slice}
 | new MASK_ SLICE_ STRING_ STRING_ {LoadSFitsFile $4 $5 mask slice}
;

new :
 | NEW_ {CreateFrame}
 ;
 
%%

proc sfits::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
