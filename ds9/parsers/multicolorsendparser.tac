%{
%}
#include def.tin

%start multicolorsend

%token SYSTEM_

%%

multicolorsend :
 | SYSTEM_ {ProcessSendMultiColorSystem}
 ;

%%

proc multicolorsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
