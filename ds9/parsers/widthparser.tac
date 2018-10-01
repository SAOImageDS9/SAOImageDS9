%{
%}
#include def.tin

#include int.tin
#include string.tin

%start command

%%

command : width 
 | width {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

width : INT_ {ProcessCmdSet canvas width $1 UpdateView}
 ;

%%

proc width::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
