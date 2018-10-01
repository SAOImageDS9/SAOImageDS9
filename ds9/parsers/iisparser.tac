%{
%}
#include def.tin

#include int.tin
#include string.tin

%start command

%token FILENAME_

%%

command : iis 
 | iis {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

iis : FILENAME_ STRING_ {IISCmd $2}
 | FILENAME_ STRING_ INT_ {IISCmd $2 $3}
 ;

%%

proc iis::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
