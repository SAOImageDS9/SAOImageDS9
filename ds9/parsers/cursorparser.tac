%{
%}

#include numeric.tin
#include string.tin

%start command

%%

#include numeric.trl

command : cursor 
 | cursor {yyclearin; YYACCEPT} STRING_
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
