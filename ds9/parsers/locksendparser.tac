%{
%}
#include def.tin

%start locksend

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

locksend : FRAME_ {ProcessSendCmdGet panzoom lock}
 | CROSSHAIR_ {ProcessSendCmdGet crosshair lock}
 | CROP_ {ProcessSendCmdGet crop lock}
 | SLICE_ {ProcessSendCmdGet cube lock}
 | BIN_ {ProcessSendCmdYesNo bin lock}
 | AXES_ {ProcessSendCmdYesNo cube lock,axes}
 | SCALE_ {ProcessSendCmdYesNo scale lock}
 | SCALELIMITS_ {ProcessSendCmdYesNo scale lock,limits}
 | COLORBAR_ {ProcessSendCmdYesNo colorbar lock}
 | BLOCK_ {ProcessSendCmdYesNo block lock}
 | SMOOTH_ {ProcessSendCmdYesNo smooth lock}
 | 3D_ {ProcessSendCmdYesNo threed lock}
 ;

%%

proc locksend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
