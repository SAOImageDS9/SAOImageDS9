%{
%}
#include def.tin

%start masksend

%token BLEND_
%token COLOR_
%token MARK_
%token RANGE_
%token SYSTEM_
%token TRANSPARENCY_

%%

masksend : COLOR_ {ProcessSendCmdGet mask color}
 | MARK_ {ProcessSendCmdGet mask mark}
 | RANGE_ {ProcessSendCmdGet2 mask low high}
 | SYSTEM_ {ProcessSendCmdGet mask system}
 | TRANSPARENCY_ {ProcessSendCmdGet mask transparency}
 | BLEND_ {ProcessSendCmdGet mask blend}
 ;

%%

proc masksend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
