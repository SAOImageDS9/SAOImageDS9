%{
%}

#include string.tin

%start command

%token MASK_
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
 | MASK_ {RGBArrayCmdSet load,layer mask}
 ;

%%

proc rgbarray::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
