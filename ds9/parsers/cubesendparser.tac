%{
%}
#include def.tin

#include wcssys.tin

%start cubesend

%token AXIS_
%token AXES_
%token INTERVAL_
%token IMAGE_
%token LOCK_
%token ORDER_

%%

#include wcssys.trl

cubesend : {CubeSendCmdCurrent "get fits slice"}
 | IMAGE_ {CubeSendCmdCurrent "get fits slice"}
 | wcssys {CubeSendCmdCurrent "get fits slice from image $1"}
 | LOCK_ {ProcessSendCmdGet cube lock}
 | INTERVAL_ {BlinkSendCmdInterval}
 | AXES_ order
 | ORDER_ order
 | AXIS_ {CubeSendCmdAxis}
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
