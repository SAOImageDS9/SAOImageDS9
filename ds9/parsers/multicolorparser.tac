%{
%}
#include def.tin

#include coordsys.tin
#include wcssys.tin
#include string.tin

%start command

%token SYSTEM_

%%

#include coordsys.trl
#include wcssys.trl

command : multicolor
 | multicolor {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

multicolor :
 | SYSTEM_ system {ProcessCmdSet multicolor system $2 MultiColorSystem}
 ;

system : coordsys {set _ $1}
 | wcssys {set _ $1}
 ;

%%

proc multicolor::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
