%{
%}
#include def.tin

#include wcssys.tin
#include skyframe.tin

%start cubesend

%token AXIS_
%token AXES_
%token INTERVAL_
%token IMAGE_
%token LOCK_
%token ORDER_

%%

#include wcssys.trl
#include skyframe.trl

cubesend : {ProcessSendCmdCurrent "get fits slice"}
 | IMAGE_ {ProcessSendCmdCurrent "get fits slice"}
 | wcssys {ProcessSendCmdCurrent "get fits slice from image $1 FK5"}
 | wcssys skyframe {ProcessSendCmdCurrent "get fits slice from image $1 $2"}
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
