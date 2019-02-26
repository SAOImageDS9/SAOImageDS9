%{
%}
#include def.tin

#include yesno.tin
#include string.tin

%start command

%token PAN_
%token REGIONS_
%token SCALE_

%%

#include yesno.trl

command : preserve 
 | preserve {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

preserve : PAN_ yesno {ProcessCmdSet panzoom preserve $2 PreservePan}
 | REGIONS_ yesno {ProcessCmdSet marker preserve $2 MarkerPreserve}
# backward compatibility
 | SCALE_ yesno
 ;

%%

proc preserve::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
