%{
%}
#include def.tin

#include wcssys.tin
#include string.tin

%start command

%token MASK_
%token NEW_

%%

#include wcssys.trl

# XPA/SAMP only
command : smosaicwcs 
 ;

smosaicwcs : opts sys STRING_ STRING_ {LoadSMosaicWCSFile $3 $4 $2 $1}
 ;

sys : {set _ wcs}
 | wcssys {set _ $1}
 ;

opts :
 | NEW_ {CreateFrame; set _ {}}
 | MASK_ {set _ mask}
 ;

%%

proc smosaicwcs::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
