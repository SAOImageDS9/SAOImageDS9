%{
%}
#include def.tin

#include wcssys.tin
#include yesno.tin
#include string.tin

%start command

%token AXES_
%token BIN_
%token BLOCK_
%token CHANNEL_
%token CLOSE_
%token COLORBAR_
%token CROP_
%token HUE_
%token LOCK_
%token OPEN_
%token SATURATION_
%token SCALE_
%token SCALELIMITS_
%token SLICE_
%token SMOOTH_
%token SYSTEM_
%token VALUE_
%token VIEW_

%%

#include wcssys.trl
#include yesno.trl

command : hsv 
 | hsv {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

hsv : {CreateHSVFrame}
 | OPEN_ {}
 | CLOSE_ {HSVDestroyDialog}
 | channel {ProcessCmdSet current hsv $1 HSVChannel}
 | CHANNEL_ channel {ProcessCmdSet current hsv $2 HSVChannel}
 | LOCK_ lock yesno {ProcessCmdSet hsv $2 $3}
 | SYSTEM_ wcssys {ProcessCmdSet hsv system $2 HSVSystem}
 | VIEW_ channel yesno {ProcessCmdSet hsv $2 $3 HSVView}
 ;

channel : HUE_ {set _ hue}
 | SATURATION_ {set _ saturation}
 | VALUE_ {set _ value}
 ;

lock : WCS_ {set _ lock,wcs}
 | CROP_ {set _ lock,crop}
 | SLICE_ {set _ lock,slice}
 | BIN_ {set _ lock,bin}
 | AXES_ {set _ lock,axes}
 | SCALE_ {set _ lock,scale}
 | SCALELIMITS_ {set _ lock,scalelimits}
 | COLORBAR_ {set _ lock,colorbar}
 | BLOCK_ {set _ lock,block}
 | SMOOTH_ {set _ lock,smooth}
 ;

%%

proc hsv::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
