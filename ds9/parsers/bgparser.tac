%{
%}

#include string.tin

%start command

%%

command : bg 
 | bg {yyclearin; YYACCEPT} STRING_
 ;

bg : STRING_ {pds9CmdSet bg $1 PrefsBgColor}
 ;

%%

proc bg::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
