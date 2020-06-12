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

prism : {PrismDialog prism}
 | OPEN_ {PrismDialog prism}
 | LOAD_ STRING_ {PrismCmdLoad $2}
 | {if {![PrismCmdCheck]} {plot::YYABORT}} prismCmd
 | STRING_ {if {![PrismCmdRef $1]} {plot::YYABORT}} prismCmd
 ;

prismCmd : CLOSE_ {ProcessCmdCVAR0 PrismDestroy}
 | CLEAR_ {ProcessCmdCVAR0 PrismClear}
 ;

%%

proc prism::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
