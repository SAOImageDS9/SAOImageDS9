%{
%}
#include def.tin

#include numeric.tin
#include string.tin

%start command

%token ORIENT_
%token SCALE_
%token SIZE_

%token PORTRAIT_
%token LANDSCAPE_

%token LETTER_
%token LEGAL_
%token TABLOID_
%token POSTER_
%token A4_

%%

#include numeric.trl

command : pagesetup 
 | pagesetup {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

pagesetup : ORIENT_ orient {ProcessCmdSet ps orient $2}
 | SCALE_ numeric {ProcessCmdSet ps scale $2}
 | SIZE_ size {ProcessCmdSet ps size $2}
 ;

orient : PORTRAIT_ {set _ portrait}
 | LANDSCAPE_ {set _ landscape}
 ;

size : LETTER_ {set _ letter}
 | LEGAL_ {set _ legal}
 | TABLOID_ {set _ tabloid}
 | POSTER_ {set _ poster}
 | A4_ {set _ a4}
 ;

%%

proc pagesetup::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
