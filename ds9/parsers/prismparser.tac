%{
%}
#include def.tin

#include yesno.tin
#include numeric.tin
#include string.tin

%start command

%token CLEAR_
%token CLOSE_
%token CURRENT_
%token LOAD_
%token OPEN_

%%

#include yesno.trl
#include numeric.trl

command : prism
 | prism {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

prism : {PrismDialog prism}
 | OPEN_ {PrismDialog prism}
 | STRING_ {PrismCmdLoad $1}
 | LOAD_ STRING_ {PrismCmdCVAR0 PrismdLoad $2}
 | CLOSE_ {ProcessCmdCVAR0 PrismDestroy}
 | CLEAR_ {ProcessCmdCVAR0 PrismClear}
 | CURRENT_ STRING_ {PrismCmdRef $2}
 ;

%%

proc prism::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
