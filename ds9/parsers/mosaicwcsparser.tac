%{
%}

#include coords.tin
#include string.tin

%start command

%token MASK_
%token NEW_

%%

#include coords.trl

command : mosaicwcs 
 | mosaicwcs {yyclearin; YYACCEPT} STRING_
 ;

mosaicwcs : sys opts {MosaicWCSCmdLoad {} $2 $1}
 | sys opts STRING_ {MosaicWCSCmdLoad $3 $2 $1}
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
