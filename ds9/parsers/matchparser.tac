%{
%}

#include matchlock.tin
#include coordsys.tin
#include wcssys.tin
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
%token SCALE_
%token SCALELIMITS_
%token SLICE_
%token SMOOTH_

%%

#include matchlock.trl
#include coordsys.trl
#include wcssys.trl

command : match 
 | match {yyclearin; YYACCEPT} STRING_
 ;

match : FRAME_ match {MatchFrameCurrent $2}
 | CROSSHAIR_ match {MatchCrosshairCurrent $2}
 | CROP_ match {MatchCropCurrent $2}
 | SLICE_ matchslice {MatchCubeCurrent $2}
 | BIN_ {MatchBinCurrent}
 | AXES_ {MatchAxesCurrent}
 | SCALE_ {MatchScaleCurrent}
 | SCALELIMITS_ {MatchScaleLimitsCurrent}
 | COLORBAR_ {MatchColorCurrent}
 | BLOCK_ {MatchBlockCurrent}
 | SMOOTH_ {MatchSmoothCurrent}
 | 3D_ {Match3DCurrent}
 ;

%%

proc match::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
