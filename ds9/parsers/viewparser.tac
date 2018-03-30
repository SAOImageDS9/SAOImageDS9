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
 | KEYVALUE_ STRING_ {ViewCmdSet info,keyvalue $2 UpdateView}
 | INFO_ yesno {ViewCmdSet info $2 UpdateView}
 | PANNER_ yesno {ViewCmdSet panner $2 UpdateView}
 | MAGNIFIER_ yesno {ViewCmdSet magnifier $2 UpdateView}
 | BUTTONS_ yesno {ViewCmdSet buttons $2 UpdateView}
 | COLORBAR_ yesno {ViewCmdSet colorbar $2 UpdateView}

# backward compatible
 | COLORBARNUMERICS_ yesno {ColorbarCmdSet numerics $2 UpdateView}

 | GRAPH_ orient yesno {ViewCmdSet graph,$1 $2 UpdateView}

# backward compatible
 | HORZGRAPH_ yesno {ViewCmdSet graph,horz $2 UpdateView}
 | VERTGRAPH_ yesno {ViewCmdSet graph,vert $2 UpdateView}

 | FILENAME_ yesno {ViewCmdSet info,filename $2 UpdateView}
 | OBJECT_ yesno {ViewCmdSet info,object $2 UpdateView}
 | KEYWORD_ yesno {ViewCmdSet info,keyword $2 UpdateView}
 | MINMAX_ yesno {ViewCmdSet info,minmax $2 UpdateView}
 | LOWHIGH_ yesno {ViewCmdSet info,lowhigh $2 UpdateView}
 | UNITS_ yesno {ViewCmdSet info,units $2 UpdateView}
 | coordsys yesno {ViewCmdSet info,$1 $2 UpdateView}
 | wcssys yesno {ViewCmdSet info,$1 $2 UpdateView}
 | FRAME_ yesno {ViewCmdSet info,frame $2 UpdateView}
 | RED_ yesno {global rgb; set rgb(red) $2; RGBView}
 | GREEN_ yesno {global rgb; set rgb(green) $2; RGBView}
 | BLUE_ yesno {global rgb; set rgb(blue) $2; RGBView}
 ;

layout : HORIZONTAL_ {ViewCmdSet layout horizontal ViewHorzCmd}
 | VERTICAL_ {ViewCmdSet layout vertical ViewVertCmd}
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
