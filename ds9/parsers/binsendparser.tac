%{
%}
#include def.tin

%start binsend

%token ABOUT_
%token BUFFERSIZE_
%token COLS_
%token DEPTH_
%token FACTOR_
%token FILTER_
%token FUNCTION_
%token LOCK_

%%

binsend : LOCK_ {ProcessSendCmdYesNo bin lock}
 | ABOUT_ {ProcessSendCmdCurrent "get bin cursor"}
 | BUFFERSIZE_ {ProcessSendCmdGet bin buffersize}
 | COLS_ {ProcessSendCmdCurrent "get bin cols"}
 | FACTOR_ {ProcessSendCmdGet bin factor}
 | DEPTH_ {ProcessSendCmdGet bin depth}
 | FILTER_ {ProcessSendCmdCurrent "get bin filter"}
 | FUNCTION_ {ProcessSendCmdGet bin function}
 ;

%%

proc binsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
