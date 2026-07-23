%{
%}
#include def.tin

%start multicolorsend

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
%token WCS_

%%

multicolorsend :
 | LOCK_ lock {ProcessSendCmdYesNo multicolor lock,$2}
 | SYSTEM_ {ProcessSendMultiColorSystem}
 ;

lock : WCS_ {set _ wcs}
 | CROP_ {set _ crop}
 | SLICE_ {set _ slice}
 | BIN_ {set _ bin}
 | SCALE_ {set _ scale}
 | SCALELIMITS_ {set _ scalelimits}
 | COLORBAR_ {set _ colorbar}
 | BLOCK_ {set _ block}
 | SMOOTH_ {set _ smooth}
 ;

%%

proc multicolorsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
