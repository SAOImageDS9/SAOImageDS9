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

cubesend : {ProcessSendCmdCurrent "get fits slice"}
 | LOCK_ {ProcessSendCmdGet cube lock}
 | INTERVAL_ {BlinkSendCmdInterval}
 | AXES_ order
 | ORDER_ order
# backward compatibility
 | AXIS_ {ProcessSendCmdTxt "2"}
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
