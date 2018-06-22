%{
%}
#include def.tin

%start pagesetupsend

%token ORIENT_
%token SCALE_
%token SIZE_

%%

pagesetupsend : ORIENT_ {ProcessSendCmdGet ps orient}
 | SCALE_  {ProcessSendCmdGet ps scale}
 | SIZE_  {ProcessSendCmdGet ps size}
 ;

%%

proc pagesetupsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
