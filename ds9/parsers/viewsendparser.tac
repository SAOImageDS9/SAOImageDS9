%{
%}
#include def.tin

#include coordsys.tin
#include wcssys.tin

%start viewsend

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
%token KEYWORD_
%token KEYVALUE_
%token LAYOUT_
%token LOWHIGH_
%token MAGNIFIER_
%token MINMAX_
%token MULTI_
%token OBJECT_
%token PANNER_
%token UNITS_
%token VERTGRAPH_
%token VERTICAL_

%token RGB_
%token HLS_
%token HSV_

%token RED_
%token GREEN_
%token BLUE_

%token HUE_
%token SATURATION_
%token VALUE_
%token LIGHTNESS_

%%

#include coordsys.trl
#include wcssys.trl

viewsend: LAYOUT_ {ProcessSendCmdGet view layout}
 | MULTI_ {ProcessSendCmdYesNo view multi}
 | KEYVALUE_ {ProcessSendCmdGet view info,keyvalue}
 | INFO_ {ProcessSendCmdYesNo view info}
 | PANNER_ {ProcessSendCmdYesNo view panner}
 | MAGNIFIER_ {ProcessSendCmdYesNo view magnifier}
 | BUTTONS_ {ProcessSendCmdYesNo view buttons}
 | ICONS_ {ProcessSendCmdYesNo view icons}
 | COLORBAR_ {ProcessSendCmdYesNo view colorbar}
# backward compatibility
 | COLORBARNUMERICS_ {ProcessSendCmdYesNo colorbar numerics}
 | GRAPH_ graph
# backward compatibility
 | HORZGRAPH_ {ProcessSendCmdYesNo view graph,horz}
# backward compatibility
 | VERTGRAPH_ {ProcessSendCmdYesNo view graph,graph}

 | FILENAME_ {ProcessSendCmdYesNo view info,filename}
 | OBJECT_ {ProcessSendCmdYesNo view info,object}
 | KEYWORD_ {ProcessSendCmdYesNo view info,keyword}
 | MINMAX_ {ProcessSendCmdYesNo view info,minmax}
 | LOWHIGH_ {ProcessSendCmdYesNo view info,lowhigh}
 | UNITS_ {ProcessSendCmdYesNo view info,bunit}

 | coordsys {ProcessSendCmdYesNo view info,$1}
 | wcssys {ProcessSendCmdYesNo view info,$1}

 | FRAME_ {ProcessSendCmdYesNo view info,frame}

 | rgb
 | hsv

 | RGB_ rgb
 | HLS_ hls 
 | HSV_ hsv
 ;

rgb : RED_ {ProcessSendCmdYesNo rgb red}
 | GREEN_ {ProcessSendCmdYesNo rgb green}
 | BLUE_ {ProcessSendCmdYesNo rgb blue}
 ;

hls : HUE_ {ProcessSendCmdYesNo hls hue}
 | LIGHTNESS_ {ProcessSendCmdYesNo hls lightness}
 | SATURATION_ {ProcessSendCmdYesNo hls saturation}
 ;
 
hsv : HUE_ {ProcessSendCmdYesNo hsv hue}
 | SATURATION_ {ProcessSendCmdYesNo hsv saturation}
 | VALUE_ {ProcessSendCmdYesNo hsv value}
 ;
 
graph :
 | HORIZONTAL_ {ProcessSendCmdYesNo view graph,horz}
 | VERTICAL_ {ProcessSendCmdYesNo view graph,vert}
 ;

%%

proc viewsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
