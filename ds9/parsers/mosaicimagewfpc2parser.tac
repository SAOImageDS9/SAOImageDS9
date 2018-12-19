%{
%}
#include def.tin

#include string.tin

%start command

%token MASK_
%token NEW_

%%

# XPA/SAMP only
command : mosaicimagewfpc2 
 ;

mosaicimagewfpc2 : opts {MosaicImageWFPC2CmdLoad {} $1}
 | opts STRING_ {MosaicImageWFPC2CmdLoad $2 $1}
 ;

opts :
 | NEW_ {CreateFrame; set _ {}}
 | MASK_ {set _ mask}
 ;

%%

proc mosaicimagewfpc2::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
