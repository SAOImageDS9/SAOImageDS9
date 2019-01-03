%{
%}
#include def.tin

#include yesno.tin
#include coordsys.tin
#include wcssys.tin
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
#include coordsys.trl
#include wcssys.trl

command : view 
 | view {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

view : layout
 | LAYOUT_ layout
 | KEYVALUE_ STRING_ {ProcessCmdSet view info,keyvalue $2 UpdateView}
 | INFO_ yesno {ProcessCmdSet view info $2 UpdateView}
 | PANNER_ yesno {ProcessCmdSet view panner $2 UpdateView}
 | MAGNIFIER_ yesno {ProcessCmdSet view magnifier $2 UpdateView}
 | BUTTONS_ yesno {ProcessCmdSet view buttons $2 UpdateView}
 | COLORBAR_ yesno {ProcessCmdSet view colorbar $2 UpdateView}

# backward compatible
 | COLORBARNUMERICS_ yesno {ColorbarCmdSet numerics $2 UpdateView}

 | GRAPH_ orient yesno {ProcessCmdSet view graph,$2 $3 UpdateView}

# backward compatible
 | HORZGRAPH_ yesno {ProcessCmdSet view graph,horz $2 UpdateView}
 | VERTGRAPH_ yesno {ProcessCmdSet view graph,vert $2 UpdateView}

 | FILENAME_ yesno {ProcessCmdSet view info,filename $2 UpdateView}
 | OBJECT_ yesno {ProcessCmdSet view info,object $2 UpdateView}
 | KEYWORD_ yesno {ProcessCmdSet view info,keyword $2 UpdateView}
 | MINMAX_ yesno {ProcessCmdSet view info,minmax $2 UpdateView}
 | LOWHIGH_ yesno {ProcessCmdSet view info,lowhigh $2 UpdateView}
 | UNITS_ yesno {ProcessCmdSet view info,bunit $2 UpdateView}
 | coordsys yesno {ProcessCmdSet view info,$1 $2 UpdateView}
 | wcssys yesno {ProcessCmdSet view info,$1 $2 UpdateView}
 | FRAME_ yesno {ProcessCmdSet view info,frame $2 UpdateView}
 | RED_ yesno {ProcessCmdSet rgb red $2 RGBView}
 | GREEN_ yesno {ProcessCmdSet rgb green $2 RGBView}
 | BLUE_ yesno {ProcessCmdSet rgb blue $2 RGBView}
 ;

layout : HORIZONTAL_ {ProcessCmdSet view layout horizontal ViewHorzCmd}
 | VERTICAL_ {ProcessCmdSet view layout vertical ViewVertCmd}
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
