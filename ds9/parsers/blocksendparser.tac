%{
%}
#include def.tin

%start blocksend

%token LOCK_

%%

blocksend : {BlockSendCmd}
 | LOCK_ {ProcessSendCmdYesNo block lock}
 ;

%%

proc blocksend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
