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

command : blink 
 | blink {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

blink : {ProcessCmdSet current display blink DisplayMode}
 | yes {ProcessCmdSet current display blink DisplayMode}
 | no {ProcessCmdSet current display single DisplayMode}
 | INTERVAL_ numeric {ProcessCmdSet blink interval [expr int($2*1000)] DisplayMode}
 ;

%%

proc blink::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
