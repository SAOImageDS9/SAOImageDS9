%{
%}
#include def.tin

#include string.tin

%start command

%token NEW_

%%

# XPA/SAMP only
command : rgbarray 
 ;

rgbarray : opts {RGBArrayCmdLoad {}}
 | opts STRING_ {RGBArrayCmdLoad $2}
 ;

opts :
 | NEW_ {CreateRGBFrame}
 ;

%%

package provide DS9 1.0

proc rgbarray::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
