%{
%}

#include int.tin

%start iissend

%token FILENAME_

%%

iissend : {ProcessSendCmdCurrent frame "get iis file name 1"}
 | INT_ {ProcessSendCmdCurrent frame "get iis file name $1"}
 | FILENAME_ {ProcessSendCmdCurrent frame "get iis file name 1"}
 | FILENAME_ INT_ {ProcessSendCmdCurrent frame "get iis file name $2"}
 ;

%%

proc iissend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
