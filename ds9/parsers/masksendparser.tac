%{
%}
#include def.tin

%start masksend

%token COLOR_
%token MARK_
%token SYSTEM_
%token TRANSPARENCY_

%%

masksend : COLOR_ {ProcessSendCmdGet mask color}
 | MARK_ {ProcessSendCmdGet mask mark}
 | SYSTEM_ {ProcessSendCmdGet mask system}
 | TRANSPARENCY_  {ProcessSendCmdGet mask transparency}
 ;

%%

proc masksend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
