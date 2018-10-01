%{
%}
#include def.tin

#include string.tin

%start command

%%

command : bg 
 | bg {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

bg : STRING_ {ProcessCmdSet pds9 bg $1 PrefsBgColor}
 ;

%%

proc bg::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
