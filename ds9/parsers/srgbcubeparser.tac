%{
%}
#include def.tin

#include string.tin

%start command

%token NEW_

%%

# XPA/SAMP only
command : srgbcube 
 ;

srgbcube : opts STRING_ STRING_ {LoadSRGBCubeFile $2 $3}
 ;

opts :
 | NEW_ {CreateRGBFrame}
 ;

%%

proc srgbcube::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
