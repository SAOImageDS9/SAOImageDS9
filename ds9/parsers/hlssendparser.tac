%{
%}
#include def.tin

%start hlssend

%token AXES_
%token BIN_
%token BLOCK_
%token CHANNEL_
%token COLORBAR_
%token CROP_
%token HUE_
%token LOCK_
%token SATURATION_
%token SCALE_
%token SCALELIMITS_
%token SLICE_
%token SMOOTH_
%token SYSTEM_
%token VALUE_
%token VIEW_
%token WCS_

%%

hlssend : CHANNEL_ {ProcessSendCmdGet current hls}
 | LOCK_ lock {ProcessSendCmdYesNo hls lock,$2}
 | SYSTEM_ {ProcessSendCmdGet hls system}
 | VIEW_ view {ProcessSendCmdYesNo hls $2}
 ;

lock : WCS_ {set _ wcs}
 | CROP_ {set _ crop}
 | SLICE_ {set _ slice}
 | BIN_ {set _ bin}
 | AXES_ {set _ axes}
 | SCALE_ {set _ scale}
 | SCALELIMITS_ {set _ scalelimits}
 | COLORBAR_ {set _ colorbar}
 | BLOCK_ {set _ block}
 | SMOOTH_ {set _ smooth}
 ;

view : HUE_ {set _ hue}
 | SATURATION_ {set _ saturation}
 | VALUE_ {set _ value}
 ;

%%

proc hlssend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
