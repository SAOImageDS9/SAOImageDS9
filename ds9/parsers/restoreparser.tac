%{
%}
#include def.tin

#include string.tin

%start command

%%

command : restore 
 | restore {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

restore : STRING_ {FileLast backupfbox $1; Restore $1}
 ;

%%

proc restore::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
