%{
%}
#include def.tin

%start vosend

%token CONNECT_
%token DELAY_
%token INTERNAL_
%token METHOD_
%token SERVER_

%%

vosend : {VOSendCmdConnect 1}
 | METHOD_ {ProcessSendCmdGet pvo method}
 | SERVER_ {ProcessSendCmdGet pvo server}
 | INTERNAL_ {ProcessSendCmdYesNo pvo hv}
 | DELAY_ {ProcessSendCmdGet pvo delay}
 | CONNECT_ {VOSendCmdConnect}
 ;

%%

proc vosend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
