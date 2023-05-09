%{
%}
#include def.tin

%start xpasend

%token CONNECT_
%token INFO_

%%

xpasend : {ProcessSendCmd XPAInfoResult}
 | INFO_ {ProcessSendCmd XPAInfoResult}
 | CONNECT_ {ProcessXPASendCmdConnect}
 ;

%%

proc xpasend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
