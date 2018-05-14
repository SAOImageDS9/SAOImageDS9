%{
%}

#include string.tin

%start command

%%

command : restore 
 | restore {yyclearin; YYACCEPT} STRING_
 ;

restore : STRING_ {RestoreCmd $1}
 ;

%%

proc restore::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
