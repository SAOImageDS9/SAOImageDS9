%{
%}
#include def.tin

#include yesno.tin
#include coordsys.tin
#include wcssys.tin
#include string.tin

%start command

%token ADVANCED_
%token BASIC_
%token BUTTONS_
%token COLORBAR_
%token COLORBARNUMERICS_
%token FILENAME_
%token FRAME_
%token GRAPH_
%token HORIZONTAL_
%token HORZGRAPH_
%token ICONS_
%token INFO_
%token KEYVALUE_
%token KEYWORD_
%token LAYOUT_
%token LOWHIGH_
%token MAGNIFIER_
%token MINMAX_
%token MULTI_
%token OBJECT_
%token PANNER_
%token UNITS_
%token VERTICAL_
%token VERTGRAPH_

%token RED_
%token BLUE_
%token GREEN_

%token HUE_
%token SATURATION_
%token VALUE_
%token LIGHTNESS_

%%

#include yesno.trl
#include coordsys.trl
#include wcssys.trl

command : view 
 | view {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

view : layout
 | LAYOUT_ layout
 | MULTI_ yesno {ProcessCmdSet view multi $2 LayoutFrames}
 | KEYVALUE_ STRING_ {ProcessCmdSet view info,keyvalue $2 LayoutView}
 | INFO_ yesno {ProcessCmdSet view info $2 LayoutView}
 | PANNER_ yesno {ProcessCmdSet view panner $2 LayoutView}
 | MAGNIFIER_ yesno {ProcessCmdSet view magnifier $2 LayoutView}
 | BUTTONS_ yesno {ProcessCmdSet view buttons $2 LayoutView}
 | ICONS_ yesno {ProcessCmdSet view icons $2 LayoutView}
 | COLORBAR_ yesno {ProcessCmdSet view colorbar $2 LayoutFrames}

# backward compatible
 | COLORBARNUMERICS_ yesno {ColorbarCmdSet numerics $2 LayoutFrames}

 | GRAPH_ orient yesno {ProcessCmdSet view graph,$2 $3 LayoutFrames}

# backward compatible
 | HORZGRAPH_ yesno {ProcessCmdSet view graph,horz $2 LayoutFrames}
 | VERTGRAPH_ yesno {ProcessCmdSet view graph,vert $2 LayoutFrames}

 | FILENAME_ yesno {ProcessCmdSet view info,filename $2 LayoutInfoPanel}
 | OBJECT_ yesno {ProcessCmdSet view info,object $2 LayoutInfoPanel}
 | KEYWORD_ yesno {ProcessCmdSet view info,keyword $2 LayoutInfoPanel}
 | MINMAX_ yesno {ProcessCmdSet view info,minmax $2 LayoutInfoPanel}
 | LOWHIGH_ yesno {ProcessCmdSet view info,lowhigh $2 LayoutInfoPanel}
 | UNITS_ yesno {ProcessCmdSet view info,bunit $2 LayoutInfoPanel}
 | coordsys yesno {ProcessCmdSet view info,$1 $2 LayoutInfoPanel}
 | wcssys yesno {ProcessCmdSet view info,$1 $2 LayoutInfoPanel}
 | FRAME_ yesno {ProcessCmdSet view info,frame $2 LayoutInfoPanel}

 | RED_ yesno {ProcessCmdSet rgb red $2 RGBView}
 | GREEN_ yesno {ProcessCmdSet rgb green $2 RGBView}
 | BLUE_ yesno {ProcessCmdSet rgb blue $2 RGBView}

 | HUE_ yesno {ProcessCmdSet hls hue $2 HLSView; ProcessCmdSet hsv hue $2 HSVView}
 | SATURATION_ yesno {ProcessCmdSet hls saturation $2 HLSView; ProcessCmdSet hsv hue $2 HSVView}
 | VALUE_ yesno {ProcessCmdSet hsv value $2 HSVView}
 | LIGHTNESS_ yesno {ProcessCmdSet hls lightness $2 HLSView}
 ;

layout : HORIZONTAL_ {ProcessCmdSet view layout horizontal LayoutView}
 | VERTICAL_ {ProcessCmdSet view layout vertical LayoutView}
 | BASIC_  {ProcessCmdSet view layout basic LayoutView}
 | ADVANCED_ {ProcessCmdSet view layout advanced LayoutView}
 ;
 
orient : HORIZONTAL_ {set _ horz}
 | VERTICAL_ {set _ vert}
 ;

%%

proc view::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
