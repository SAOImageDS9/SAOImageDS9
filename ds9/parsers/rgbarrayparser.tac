%{
%}

#include string.tin

%start command

%token NEW_

%%

command : rgbarray 
 | rgbarray {yyclearin; YYACCEPT} STRING_
 ;

rgbarray : opts {RGBArrayCmdLoad {}}
 | opts STRING_ {RGBArrayCmdLoad $2}
 ;

opts :
 | NEW_ {CreateRGBFrame}
 ;

%%

proc rgbarray::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
