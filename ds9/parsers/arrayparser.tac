%{
%}

#include string.tin

%start command

%token MASK_
%token NEW_
%token RGB_

%%

command : array 
 | array {yyclearin; YYACCEPT} STRING_
 ;

array : opts {ArrayCmdLoad {}}
 | opts STRING_ {ArrayCmdLoad $2}
# backward compatibility
 | RGB_ STRING_ {ArrayCmdLoadRGB $2}
 | NEW_ RGB_ STRING_ {CreateRGBFrame; ArrayCmdLoadRGB $3}
 ;

opts :
 | NEW_ {CreateFrame}
 | MASK_ {ArrayCmdSet load,layer mask}
 ;

%%

proc array::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
