%{
%}
#include def.tin

%start zscalesend

%token CONTRAST_
%token SAMPLE_
%token LINE_

%%

zscalesend : CONTRAST_ {ProcessSendCmdGet zscale contrast}
 | SAMPLE_ {ProcessSendCmdGet zscale sample}
 | LINE_ {ProcessSendCmdGet zscale line}
 ;

%%

proc zscalesend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
