%{
%}

#include string.tin

%start command

%token NEW_

%%

command : rgbcube 
 | rgbcube {yyclearin; YYACCEPT} STRING_
 ;

rgbcube : opts {RGBCubeCmdLoad {}}
 | opts STRING_ {RGBCubeCmdLoad $2}
 ;

opts :
 | NEW_ {CreateRGBFrame}
 ;

%%

proc rgbcube::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
