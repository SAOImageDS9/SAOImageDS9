%{
%}

#include coords.tin
#include numeric.tin
#include string.tin

%start command

%token 3D_
%token AXES_
%token BIN_
%token BLOCK_
%token COLORBAR_
%token CROP_
%token CROSSHAIR_
%token FRAME_
%token NONE_
%token SCALE_
%token SCALELIMITS_
%token SLICE_
%token SMOOTH_

%%

#include coords.trl
#include numeric.trl

command : match 
 | match {yyclearin; YYACCEPT} STRING_
 ;

match : FRAME_ coordnone {MatchFrameCurrent $2}
 | CROSSHAIR_ coordnone {MatchCrosshairCurrent $2}
 | CROP_ coordnone {MatchCropCurrent $2}
 | SLICE_ slice {MatchCubeCurrent $2}
 | BIN_ {MatchBinCurrent}
 | AXES_ {MatchAxesCurrent}
 | SCALE_ {MatchScaleCurrent}
 | SCALELIMITS_ {MatchScaleLimitsCurrent}
 | COLORBAR_ {MatchColorCurrent}
 | BLOCK_ {MatchBlockCurrent}
 | SMOOTH_ {MatchSmoothCurrent}
 | 3D_ {Match3DCurrent}
 ;

coordnone : coordsys {set _ $1}
 | wcssys {set _ $1}
 | NONE_  {set _ none}
 ;

slice : IMAGE_ {set _ image}
 | wcssys {set _ $1}
 | NONE_ {set _ none}
 ;

%%

proc match::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
