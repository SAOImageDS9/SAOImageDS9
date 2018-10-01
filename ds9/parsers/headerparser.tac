%{
%}
#include def.tin

#include int.tin
#include string.tin

%start command

%token CLOSE_
%token SAVE_

%%

command : header 
 | header {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;


header : display 
 | CLOSE_ close {CloseHeaderCmd $2}
 | SAVE_ save
 ;

display : {DisplayHeaderCmd 1}
 | INT_ {DisplayHeaderCmd $1}
 ;
 
close : {set _ 1}
 | INT_ {set _ $1}
 ;

save : STRING_ {SaveHeaderCmd 1 $1}
 | INT_ STRING_ {SaveHeaderCmd $1 $2}
 ;

%%

proc header::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
