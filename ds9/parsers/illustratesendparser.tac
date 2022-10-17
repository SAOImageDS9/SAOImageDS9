%{
%}
#include def.tin

%start illustratesend

%token COLOR_
%token DASH_
%token FILL_
%token SHAPE_
%token SHOW_
%token WIDTH_

%%

illustratesend : {IllustrateCmdSend}
 | SHAPE_ {ProcessSendCmdGet illustrate shape}
 | COLOR_ {ProcessSendCmdGet illustrate color}
 | FILL_ {ProcessSendCmdYesNo illustrate fill}
 | WIDTH_ {ProcessSendCmdGet illustrate width}
 | DASH_ {ProcessSendCmdYesNo illustrate dash}
 | SHOW_ {ProcessSendCmdYesNo illustrate show}
 ;

%%

proc illustratesend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
