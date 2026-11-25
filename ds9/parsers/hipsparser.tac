%{
%}
#include def.tin

#include yesno.tin
#include string.tin

%start command

%token NEW_
%token CANCEL_
%token CLOSE_
%token COVERAGE_
# get-only words (hipssendparser.tac): not a HiPS to load
%token LIST_
%token STATUS_

%%

#include yesno.trl

command : hips 
 | hips {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

hips : opts STRING_ {HiPSCmdLoad $2}
 | CANCEL_ {HiPSCancelCmd}
 | CLOSE_ {HiPSCloseCmd}
 | COVERAGE_ {HiPSCoverageCmd 1}
 | COVERAGE_ yesno {HiPSCoverageCmd $2}
 ;

opts :
 | NEW_ {CreateFrame}
 ;

%%

proc hips::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
