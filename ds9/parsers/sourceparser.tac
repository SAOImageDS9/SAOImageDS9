%{
%}
#include def.tin

#include string.tin

%start command

%%

command : source 
 | source {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

source : STRING_ {SourceCmd $1}
 ;

%%

proc source::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
