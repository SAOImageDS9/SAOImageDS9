%{
%}

#include string.tin

%start command

%token NEW_

%%

command : mosaicimagewfpc2 
 | mosaicimagewfpc2 {yyclearin; YYACCEPT} STRING_
 ;

mosaicimagewfpc2 : opts {MosaicImageWFPC2CmdLoad {}}
 | opts STRING_ {MosaicImageWFPC2CmdLoad $2}
 ;

opts :
 | NEW_ {CreateFrame}
 ;

%%

proc mosaicimagewfpc2::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
