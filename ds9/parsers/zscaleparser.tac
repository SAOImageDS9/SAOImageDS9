%{
%}

#include yesno.tin
#include numeric.tin
#include string.tin

%start command

%token CONTRAST_
%token SAMPLE_
%token LINE_

%%

#include yesno.trl
#include numeric.trl

command : zscale
 | zscale {yyclearin; YYACCEPT} STRING_
 ;

zscale : yesno {ScaleCmdSet mode zscale ChangeScaleMode}
 | CONTRAST_ numeric {ZscaleCmdSet contrast $2 ChangeZScale}
 | SAMPLE_ INT_ {ZscaleCmdSet sample $2 ChangeZScale}
 | LINE_ INT_ {ZscaleCmdSet line $2 ChangeZScale}
 ;

%%

proc zscale::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
