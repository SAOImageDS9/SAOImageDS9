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
%token LIGHTNESS_
%token LOCK_
%token OPEN_
%token SATURATION_
%token SCALE_
%token SCALELIMITS_
%token SLICE_
%token SMOOTH_
%token SYSTEM_
%token VIEW_

%%

#include wcssys.trl
#include yesno.trl

command : hls 
 | hls {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

hls : {CreateHLSFrame}
 | OPEN_ {}
 | CLOSE_ {HLSDestroyDialog}
 | channel {ProcessCmdSet current hls $1 HLSChannel}
 | CHANNEL_ channel {ProcessCmdSet current hls $2 HLSChannel}
 | LOCK_ lock yesno {ProcessCmdSet hls $2 $3}
 | SYSTEM_ wcssys {ProcessCmdSet hls system $2 HLSSystem}
 | VIEW_ channel yesno {ProcessCmdSet hls $2 $3 HLSView}
 ;

channel : HUE_ {set _ hue}
 | LIGHTNESS_ {set _ lightness}
 | SATURATION_ {set _ saturation}
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

proc hls::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
