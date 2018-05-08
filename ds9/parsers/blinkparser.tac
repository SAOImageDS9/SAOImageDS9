%{
%}

#include yesno.tin
#include numeric.tin
#include string.tin

%start command

%token INTERVAL_

%%

#include yesno.trl
#include numeric.trl

command : blink 
 | blink {yyclearin; YYACCEPT} STRING_
 ;

blink : {CurrentCmdSet display blink DisplayMode}
 | yes {CurrentCmdSet display blink DisplayMode}
 | no {CurrentCmdSet display single DisplayMode}
 | INTERVAL_ numeric {BlinkCmdSet interval [expr int($2*1000)] DisplayMode}
 ;

%%

proc blink::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
