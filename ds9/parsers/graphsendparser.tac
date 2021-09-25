%{
%}
#include def.tin

#include font.tin

%start graphsend

%token GRID_
%token LOG_
%token METHOD_
%token SIZE_
%token THICKNESS_

%%

graphsend : GRID_ {ProcessSendCmdYesNo graph grid}
 | FONT_ {ProcessSendCmdGet graph font}
 | FONTSIZE_ {ProcessSendCmdGet graph font,size}
 | FONTWEIGHT_ {ProcessSendCmdGet graph font,weight}
 | FONTSLANT_ {ProcessSendCmdGet graph font,slant}
 | LOG_ {ProcessSendCmdYesNo graph log}
 | METHOD_ {ProcessSendCmdGet graph method}
 | SIZE_ {ProcessSendCmdGet graph size}
 | THICKNESS_ {ProcessSendCmdGet graph thick}
 ;

%%

proc graphsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
