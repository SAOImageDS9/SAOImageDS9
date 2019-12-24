%{
%}
#include def.tin

#include yesno.tin
#include wcssys.tin
#include skyframe.tin
#include skyformat.tin
#include int.tin
#include string.tin

%start command

%token ALIGN_
%token APPEND_
%token CLOSE_
%token LOAD_
%token OPEN_
%token REPLACE_
%token RESET_
%token SAVE_
%token SKY_
%token SKYFORMAT_
%token SYSTEM_

%%

#include yesno.trl
#include wcssys.trl
#include skyframe.trl
#include skyformat.trl

command : wcs 
 | wcs {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

wcs : OPEN_ {WCSDialog}
 | CLOSE_ {WCSDestroyDialog}
 | wcssys {ProcessCmdSet wcs system $1 UpdateWCS}
 | SYSTEM_ wcssys {ProcessCmdSet wcs system $2 UpdateWCS}
 | skyframe {ProcessCmdSet wcs sky $1 UpdateWCS}
 | SKY_ skyframe {ProcessCmdSet wcs sky $2 UpdateWCS}
 | skyformat {ProcessCmdSet wcs skyformat $1 UpdateWCS}
 | SKYFORMAT_ skyformat {ProcessCmdSet wcs skyformat $2 UpdateWCS}
 | ALIGN_ yesno {ProcessCmdSet current align $2 AlignWCSFrame}
 | LOAD_ STRING_ {WCSCmdLoadFn replace 1 $2}
 | SAVE_ STRING_ {WCSSaveFile $2}
 | RESET_ {WCSCmdReset 1}
 # backward compatible
 | RESET_ INT_ {WCSCmdReset $2}
 # backward compatible
 | REPLACE_ replace
 # backward compatible
 | APPEND_ append
 ;

replace : {WCSCmdLoad replace 1}
 | INT_ {WCSCmdLoad replace $1}
 | STRING_ {WCSCmdLoadFn replace 1 $1}
 | INT_ STRING_ {WCSCmdLoadFn replace $1 $2}
 ;
 
append : {WCSCmdLoad append 1}
 | INT_ {WCSCmdLoad append $1}
 | STRING_ {WCSCmdLoadFn append 1 $1}
 | INT_ STRING_ {WCSCmdLoadFn append $1 $2}
 ;

%%

proc wcs::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
