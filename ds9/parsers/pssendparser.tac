%{
%}
#include def.tin

%start pssend

%token COLOR_
%token COMMAND_
%token DESTINATION_
%token FILENAME_
%token INTERPOLATE_
%token LEVEL_
%token RESOLUTION_

%%

pssend : DESTINATION_ {ProcessSendCmdGet ps dest}
 | COMMAND_ {ProcessSendCmdGet ps cmd}
 | FILENAME_ {ProcessSendCmdGet ps filename}
 | COLOR_ {ProcessSendCmdGet ps color}
 | LEVEL_ {ProcessSendCmdGet ps level}
 | RESOLUTION_ {ProcessSendCmdGet ps resolution}
#backward compatibility
 | INTERPOLATE_ {global ps; $parse(proc) $parse(id) "0\n"}
 ;

%%

proc pssend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
