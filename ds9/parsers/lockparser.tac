%{
%}

#include matchlock.tin
#include coords.tin
#include yesno.tin
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
%token SCALE_
%token SCALELIMITS_
%token SLICE_
%token SMOOTH_

%%

#include matchlock.trl
#include coords.trl
#include yesno.trl
#include numeric.trl

command : lock 
 | lock {yyclearin; YYACCEPT} STRING_
 ;

lock : FRAME_ lock {PanZoomCmdSet lock $2 LockFrameCurrent}
 | CROSSHAIR_ lock {CrosshairCmdSet lock $2 LockCrosshairCurrent}
 | CROP_ lock {CropCmdSet lock $2 LockCropCurrent}
 | SLICE_ lockslice {CubeCmdSet lock $2 LockCubeCurrent}
 | BIN_ yesno {BinCmdSet lock $2 LockBinCurrent}
 | AXES_ yesno {CubeCmdSet lock,axes $2 LockAxesCurrent}
 | SCALE_ yesno {ScaleCmdSet lock $2 LockScaleCurrent}
 | SCALELIMITS_ yesno {ScaleCmdSet lock,limits $2 LockScaleLimitsCurrent}
 | COLORBAR_ yesno {ColorbarCmdSet lock $2 LockColorCurrent}
 | BLOCK_ yesno {BlockCmdSet lock $2 LockBlockCurrent}
 | SMOOTH_ yesno {SmoothCmdSet lock $2 LockSmoothCurrent}
 | 3D_ yesno {ThreedCmdSet lock $2 Lock3DCurrent}
 ;

%%

proc lock::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
