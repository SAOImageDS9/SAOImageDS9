%{
%}
#include def.tin

#include int.tin
#include string.tin

%start command

%%

command : cursor 
 | cursor {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

cursor : INT_ INT_ {CursorCmd $1 $2}
 ;

%%

proc cursor::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
