%{
%}
#include def.tin

#include coordsys.tin
#include wcssys.tin
#include yesno.tin
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

%token NONE_

%%

#include coordsys.trl
#include wcssys.trl
#include yesno.trl

command : lock 
 | lock {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

lock : FRAME_ lock {ProcessCmdSet panzoom lock $2 LockFrameCurrent}
 | CROSSHAIR_ lock {ProcessCmdSet crosshair lock $2 LockCrosshairCurrent}
 | CROP_ lock {ProcessCmdSet crop lock $2 LockCropCurrent}
 | SLICE_ lockslice {ProcessCmdSet cube lock $2 LockCubeCurrent}
 | BIN_ yesno {ProcessCmdSet bin lock $2 LockBinCurrent}
 | AXES_ yesno {ProcessCmdSet cube lock,axes $2 LockAxesCurrent}
 | SCALE_ yesno {ProcessCmdSet scale lock $2 LockScaleCurrent}
 | SCALELIMITS_ yesno {ProcessCmdSet scale lock,limits $2 LockScaleLimitsCurrent}
 | COLORBAR_ yesno {ProcessCmdSet colorbar lock $2 LockColorCurrent}
 | BLOCK_ yesno {ProcessCmdSet block lock $2 LockBlockCurrent}
 | SMOOTH_ yesno {ProcessCmdSet smooth lock $2 LockSmoothCurrent}
 | 3D_ yesno {ProcessCmdSet threed lock $2 Lock3DCurrent}
 ;

lock : coordsys {set _ $1}
 | wcssys {set _ $1}
 | NONE_  {set _ none}
 ;

lockslice : {set _ image}
 | IMAGE_ {set _ image}
 | wcssys {set _ $1}
 | NONE_ {set _ none}
 ;

%%

proc lock::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
