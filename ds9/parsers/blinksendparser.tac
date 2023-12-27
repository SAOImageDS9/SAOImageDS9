%{
%}
#include def.tin

%start blinksend

%token INTERVAL_

%%

blinksend : {BlinkSendCmd}
 | INTERVAL_ {BlinkSendCmdInterval}
 ;

%%

package provide DS9 1.0

proc blinksend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
