%{
%}
#include def.tin

#include coordsys.tin
#include wcssys.tin
#include yesno.tin
#include string.tin

%start command

%token BIN_
%token BLOCK_
%token COLORBAR_
%token CROP_
%token LOCK_
%token SCALE_
%token SCALELIMITS_
%token SLICE_
%token SMOOTH_
%token SYSTEM_

%%

#include coordsys.trl
#include wcssys.trl
#include yesno.trl

command : multicolor
 | multicolor {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

multicolor :
 | LOCK_ lock yesno {ProcessCmdSet multicolor $2 $3}
 | SYSTEM_ system {ProcessCmdSet multicolor system $2 MultiColorSystem}
 ;

lock : WCS_ {set _ lock,wcs}
 | CROP_ {set _ lock,crop}
 | SLICE_ {set _ lock,slice}
 | BIN_ {set _ lock,bin}
 | SCALE_ {set _ lock,scale}
 | SCALELIMITS_ {set _ lock,scalelimits}
 | COLORBAR_ {set _ lock,colorbar}
 | BLOCK_ {set _ lock,block}
 | SMOOTH_ {set _ lock,smooth}
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
