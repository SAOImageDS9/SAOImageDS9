%{
%}

#include coords.tin
#include string.tin

%start command

%token MASK_
%token NEW_

%%

#include coords.trl

command : mosaicimagewcs 
 | mosaicimagewcs {yyclearin; YYACCEPT} STRING_
 ;

mosaicimagewcs : sys opts {MosaicImageWCSCmdLoad {} $2 $1}
 | sys opts STRING_ {MosaicImageWCSCmdLoad $3 $2 $1}
 ;

sys : {set _ wcs}
 | wcssys {set _ $1}
 ;

opts :
 | NEW_ {CreateFrame; set _ {}}
 | MASK_ {set _ mask}
 ;

%%

proc mosaicimagewcs::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
