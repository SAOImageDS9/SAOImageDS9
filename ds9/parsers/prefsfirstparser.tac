%{
%}
#include def.tin

#include yesno.tin
#include int.tin
#include string.tin

%start command

%token BGCOLOR_
%token CLEAR_
%token IRAFALIGN_
%token NANCOLOR_
%token PRECISION_
%token THREADS_

%%

#include yesno.trl

command : prefs 
 | prefs {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

prefs : yesno {ProcessCmdSet ds9 prefs $1}
 | CLEAR_
 | PRECISION_ INT_ INT_ INT_ INT_ INT_ INT_
 | BGCOLOR_ STRING_
 | NANCOLOR_ STRING_
 | THREADS_ INT_
 | IRAFALIGN_ yesno
 ;

%%

proc prefsfirst::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
