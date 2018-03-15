%{
%}

#include yesno.tin
#include coords.tin
#include string.tin

%start command

%token BLUE_
%token BUTTONS_
%token COLORBAR_
%token COLORBARNUMERICS_
%token FILENAME_
%token FRAME_
%token GRAPH_
%token GREEN_
%token HORIZONTAL_
%token HORZGRAPH_
%token INFO_
%token KEYVALUE_
%token KEYWORD_
%token LAYOUT_
%token LOWHIGH_
%token MAGNIFIER_
%token MINMAX_
%token OBJECT_
%token PANNER_
%token RED_
%token UNITS_
%token VERTICAL_
%token VERTGRAPH_

%%

#include yesno.trl
#include coords.trl

command : view 
 | view {yyclearin; YYACCEPT} STRING_
 ;


view : layout
 | LAYOUT_ layout
 | INFO_ yesno {global view; set view(info) $2; UpdateView}
 | PANNER_ yesno {global view; set view(panner) $2; UpdateView}
 | MAGNIFIER_ yesno {global view; set view(magnifier) $2; UpdateView}
 | BUTTONS_ yesno {global view; set view(buttons) $2; UpdateView}
 | COLORBAR_ yesno {global view; set view(colorbar) $2; UpdateView}
 # backward compatible
 | COLORBARNUMERICS_ yesno {global colorbar; set colorbar(numerics) $2; UpdateView}
 | GRAPH_ graph
 # backward compatible
 | HORZGRAPH_ yesno {global view; set view(graph,horz) $2; UpdateView}
 # backward compatible
 | VERTGRAPH_ yesno {global view; set view(graph,vert) $2; UpdateView}
 | FILENAME_ yesno {global view; set view(info,filename) $2; UpdateView}
 | OBJECT_ yesno {global view; set view(info,object) $2; UpdateView}
 | KEYWORD_ yesno {global view; set view(info,keyword) $2; UpdateView}
 | KEYVALUE_ STRING_ {global view; set view(info,keyvalue) $2; UpdateView}
 | MINMAX_ yesno {global view; set view(info,minmax) $2; UpdateView}
 | LOWHIGH_ yesno {global view; set view(info,lowhigh) $2; UpdateView}
 | UNITS_ yesno {global view; set view(info,units) $2; UpdateView}
 | coordsys yesno {global view; set view(info,$1) $2; UpdateView}
 | wcssys yesno {global view; set view(info,$1) $2; UpdateView}
 | FRAME_ yesno {global view; set view(info,frame) $2; UpdateView}
 | RED_ yesno {global rgb; set rgb(red) $2; RGBView}
 | GREEN_ yesno {global rgb; set rgb(green) $2; RGBView}
 | BLUE_ yesno {global rgb; set rgb(blue) $2; RGBView}
 ;

layout : HORIZONTAL_ {global view; set view(layout) horizontal; ViewHorzCmd}
 | VERTICAL_ {global view; set view(layout) vertical; ViewVertCmd}
 ;
 
graph : HORIZONTAL_ yesno {global view; set view(graph,horz) $2; UpdateView}
 | VERTICAL_ yesno {global view; set view(graph,vert) $2; UpdateView}
 ;

%%

proc view::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
