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
%token BLUE_
%token CHANNEL_
%token CLOSE_
%token COLORBAR_
%token CROP_
%token GREEN_
%token LOCK_
%token OPEN_
%token RED_
%token SCALE_
%token SCALELIMITS_
%token SLICE_
%token SMOOTH_
%token SYSTEM_
%token VIEW_

%%

#include wcssys.trl
#include yesno.trl

command : rgb 
 | rgb {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

rgb : {CreateRGBFrame}
 | OPEN_ {}
 | CLOSE_ {RGBDestroyDialog}
 | channel {ProcessCmdSet current rgb $1 RGBChannel}
 | CHANNEL_ channel {ProcessCmdSet current rgb $2 RGBChannel}
 | LOCK_ lock yesno {ProcessCmdSet rgb $2 $3}
 | SYSTEM_ wcssys {ProcessCmdSet rgb system $2 RGBSystem}
 | VIEW_ channel yesno {ProcessCmdSet rgb $2 $3 RGBView}
 ;

channel : RED_ {set _ red}
 | GREEN_ {set _ green}
 | BLUE_ {set _ blue}
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

proc rgb::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
