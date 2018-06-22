%{
%}
#include def.tin

#include string.tin

%start nressend

%token NAME_
%token SERVER_
%token SKYFORMAT_

%%

nressend : {ProcessSendCmdGet dnres name}
 | NAME_ {ProcessSendCmdGet dnres name}
 | SERVER_ {ProcessSendCmdGet pnres server}
 | SKYFORMAT_ {ProcessSendCmdGet dnres skyformat}
 | STRING_ {NRESSendCmd $1}
 ;

%%

proc nressend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
