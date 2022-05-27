%{
%}
#include def.tin

%start fadesend

%token INTERVAL_

%%

fadesend : {FadeSendCmd}
 | INTERVAL_ {FadeSendCmdInterval}
 ;

%%

proc fadesend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
