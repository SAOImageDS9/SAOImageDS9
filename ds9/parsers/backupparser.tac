%{
%}
#include def.tin

#include string.tin

%start command

%%

command : backup 
 | backup {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

backup : STRING_ {FileLast backupfbox $1; Backup $1}
 ;

%%

proc backup::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
