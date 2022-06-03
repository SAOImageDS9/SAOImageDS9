%{
%}
#include def.tin

#include yesno.tin
#include numeric.tin
#include string.tin

%start command

%token INTERVAL_

%%

#include yes-no.trl
#include numeric.trl

command : fade 
 | fade {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

fade : {ProcessCmdSet current display fade DisplayMode}
 | yes {ProcessCmdSet current display fade DisplayMode}
 | no {ProcessCmdSet current display single DisplayMode}
 | INTERVAL_ numeric {ProcessCmdSet fade interval [expr int($2*1000.)] DisplayMode}
 ;

%%

proc fade::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
