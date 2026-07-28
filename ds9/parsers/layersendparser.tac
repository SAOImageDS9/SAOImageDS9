%{
%}
#include def.tin

%start layersend

%token BLEND_
%token COLOR_
%token COUNT_
%token INT_
%token LAYERNO_
%token TRANSPARENCY_
%token VIEW_

%%

layersend : {ProcessSendLayerCmd layerno 0}
 | COUNT_ {ProcessSendLayerCmd count 0}
 | LAYERNO_ {ProcessSendLayerCmd layerno 0}
 | layerref COLOR_ {ProcessSendLayerCmd color $1}
 | layerref BLEND_ {ProcessSendLayerCmd blend $1}
 | layerref TRANSPARENCY_ {ProcessSendLayerCmd transparency $1}
 | layerref VIEW_ {ProcessSendLayerCmd view $1}
 ;

layerref : {set _ 0}
 | INT_ {set _ $1}
 ;

%%

proc layersend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
