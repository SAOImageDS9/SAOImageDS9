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
command : mosaicwcs 
 ;

mosaicwcs : opts sys {MosaicWCSCmdLoad {} $1 $2}
 | opts sys STRING_ {MosaicWCSCmdLoad $3 $1 $2}
 ;

sys : {set _ wcs}
 | wcssys {set _ $1}
 ;

opts :
 | NEW_ {CreateFrame; set _ {}}
 | MASK_ {set _ mask}
 ;

%%

proc mosaicwcs::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
