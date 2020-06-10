%{
%}
#include def.tin

#include yesno.tin
#include numeric.tin
#include string.tin

%start command

%token CLEAR_
%token CLOSE_
%token LOAD_
%token OPEN_

%%

#include yesno.trl
#include numeric.trl

command : prism
 | prism {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

prism : {PrismDialog}
 | OPEN_ {PrismDialog}
 | CLOSE_ {PrismDestroyDialog}
 | LOAD_ STRING_ {PrismDialog; PrismLoad $2}
 | CLEAR_ {PrismDialog; PrismClear}
 ;

%%

proc prism::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
