%{
%}

#include yesno.tin
#include base.tin

%start command

%token CONTRAST_
%token SAMPLE_
%token LINE_

%%

#include yesno.trl
#include base.trl

command : zscale
 | zscale {yyclearin; YYACCEPT} STRING_
 ;

zscale : yesno {global scale; set scale(mode) zscale; ChangeScaleMode}
 | CONTRAST_ {global zscale; set zscale(contrast) zscale; ChangeZScale}
 | SAMPLE_ {global zscale; set zscale(sample) zscale; ChangeZScale}
 | LINE_ {global zscale; set zscale(line) zscale; ChangeZScale}
 ;

%%

proc zscale::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
