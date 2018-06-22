%{
%}
#include def.tin

%start cubesend

%token AXIS_
%token AXES_
%token INTERVAL_
%token LOCK_
%token ORDER_

%%

cubesend : {global cube; ProcessSendCmdCurrent "get fits slice $cube(axis)"}
 | LOCK_ {ProcessSendCmdGet cube lock}
 | INTERVAL_ {BlinkSendCmdInterval}
 | AXIS_ {ProcessSendCmdGet cube axis}
 | AXES_ order
 | ORDER_ order
 ;

order : {ProcessSendCmdGet cube axes}
 | LOCK_ {ProcessSendCmdYesNo cube lock,axes}
 ;

%%

proc cubesend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
