%{
%}
#include def.tin

#include numeric.tin
#include string.tin

%start command

%token BLEND_
%token BOTTOM_
%token COLOR_
%token CREATE_
%token DARKEN_
%token DELETE_
%token DOWN_
%token HIDE_
%token LAYERNO_
%token LIGHTEN_
%token SCREEN_
%token SHOW_
%token SOURCE_
%token TOP_
%token TRANSPARENCY_
%token UP_

%%

#include numeric.trl

command : layer
 | layer {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

layer : {MultiColorLayerCreateCmd}
 | CREATE_ {MultiColorLayerCreateCmd}
 | INT_ {MultiColorLayerNoCmd $1}
 | LAYERNO_ INT_ {MultiColorLayerNoCmd $2}
 | layerref COLOR_ STRING_ {MultiColorLayerColorCmd $1 $3}
 | layerref BLEND_ blend {MultiColorLayerBlendCmd $1 $3}
 | layerref TRANSPARENCY_ numeric {MultiColorLayerTransparencyCmd $1 $3}
 | layerref SHOW_ {MultiColorLayerViewCmd $1 1}
 | layerref HIDE_ {MultiColorLayerViewCmd $1 0}
 | layerref DELETE_ {MultiColorLayerOrderCmd $1 delete}
 | layerref UP_ {MultiColorLayerOrderCmd $1 up}
 | layerref DOWN_ {MultiColorLayerOrderCmd $1 down}
 | layerref TOP_ {MultiColorLayerOrderCmd $1 top}
 | layerref BOTTOM_ {MultiColorLayerOrderCmd $1 bottom}
 ;

layerref : {set _ 0}
 | INT_ {set _ $1}
 ;

blend : SOURCE_ {set _ source}
 | SCREEN_ {set _ screen}
 | DARKEN_ {set _ darken}
 | LIGHTEN_ {set _ lighten}
 ;

%%

proc layer::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
