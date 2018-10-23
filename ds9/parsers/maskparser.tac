%{
%}
#include def.tin

#include coordsys.tin
#include wcssys.tin
#include numeric.tin
#include string.tin

%start command

%token CLEAR_
%token CLOSE_
%token COLOR_
%token MARK_
%token OPEN_
%token SYSTEM_
%token TRANSPARENCY_

%%

#include coordsys.trl
#include wcssys.trl
#include numeric.trl

command : mask 
 | mask {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

mask : {global parse; set parse(result) mask}
 | OPEN_ {MaskDialog}
 | CLOSE_ {MaskDestroyDialog}
 | CLEAR_ {MaskClear}
 | COLOR_ STRING_ {ProcessCmdSet mask color $2 MaskColor}
 | MARK_ INT_ {ProcessCmdSet mask mark $2 MaskMark}
 | SYSTEM_ system
 | TRANSPARENCY_ numeric {ProcessCmdSet mask transparency $2 MaskTransparency}
 ;

system : coordsys {ProcessCmdSet mask system $1 MaskSystem}
 | wcssys {ProcessCmdSet mask system $1 MaskSystem}
 ;

%%

proc mask::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
