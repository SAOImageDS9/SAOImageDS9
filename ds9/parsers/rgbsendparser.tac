%{
%}
#include def.tin

%start rgbsend

%token AXES_
%token BIN_
%token BLOCK_
%token BLUE_
%token CHANNEL_
%token COLORBAR_
%token CROP_
%token GREEN_
%token LOCK_
%token RED_
%token SCALE_
%token SCALELIMITS_
%token SLICE_
%token SMOOTH_
%token SYSTEM_
%token VIEW_
%token WCS_

%%

rgbsend : CHANNEL_ {ProcessSendCmdGet current rgb}
 | LOCK_ lock {ProcessSendCmdYesNo rgb lock,$2}
 | SYSTEM_ {ProcessSendCmdGet rgb system}
 | VIEW_ view {ProcessSendCmdYesNo rgb $2}
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

view : RED_ {set _ red}
 | GREEN_ {set _ green}
 | BLUE_ {set _ blue}
 ;

%%

proc rgbsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
