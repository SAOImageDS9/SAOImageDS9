%{
%}
#include def.tin

#include font.tin

%start illustratesend

%token COLOR_
%token DASH_
%token FILL_
%token SHAPE_
%token SHOW_
%token WIDTH_

%%

illustratesend : SHAPE_ {ProcessSendCmdGet illustrate shape}
 | COLOR_ {ProcessSendCmdGet illustrate color}
 | FILL_ {ProcessSendCmdYesNo illustrate fill}
 | WIDTH_ {ProcessSendCmdGet illustrate width}
 | DASH_ {ProcessSendCmdYesNo illustrate dash}
 | FONT_ {ProcessSendCmdGet illustrate font}
 | FONTSIZE_ {ProcessSendCmdGet illustrate font,size}
 | FONTWEIGHT_ {ProcessSendCmdGet illustrate font,weight}
 | FONTSLANT_ {ProcessSendCmdGet illustrate font,slant}
 | SHOW_ {ProcessSendCmdGet illustrate show}
 ;

%%

proc illustratesend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
