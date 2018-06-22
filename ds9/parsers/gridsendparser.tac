%{
%}
#include def.tin

#include font.tin

%start gridsend

%token AXES_
%token BORDER_
%token COLOR_
%token DASH_
%token DEF_
%token DEF1_
%token DEF2_
%token FORMAT1_
%token FORMAT2_
%token GAP_
%token GAP1_
%token GAP2_
%token GAP3_
%token GRID_
%token LABELS_
%token NUMBERS_
%token NUMERICS_
%token ORIGIN_
%token SKYFRAME_
%token SKYFORMAT_
%token STYLE_
%token SYSTEM_
%token TEXT_
%token TEXT1_
%token TEXT2_
%token TICKMARKS_
%token TITLE_
%token TYPE_
%token VERTICAL_
%token WIDTH_
%token VIEW_

%%

gridsend : {ProcessSendCmdYesNo grid view}
 | TYPE_ type
 | SYSTEM_ {ProcessSendCmdGet grid system}
 | SKYFRAME_ {ProcessSendCmdGet grid sky}
 | SKYFORMAT_ {ProcessSendCmdGet grid skyformat}
 | GRID_ grid
 | AXES_ axes
 | FORMAT1_ {ProcessSendCmdGet grid format1}
 | FORMAT2_ {ProcessSendCmdGet grid format2}
 | TICKMARKS_ tickmarks
 | BORDER_ border
 | NUMERICS_ numerics
 | TITLE_ title
 | LABELS_ labels
# backward compatibility
 | VIEW_ view
 ;

type : {ProcessSendCmdGet grid type}
# backward compatibility
 | AXES_ {ProcessSendCmdGet grid axis,type}
# backward compatibility
 | NUMERICS_ {ProcessSendCmdGet grid numlab,type}
 ;

grid : {ProcessSendCmdYesNo grid grid}
 | COLOR_ {ProcessSendCmdGet grid grid,color}
 | WIDTH_ {ProcessSendCmdGet grid grid,width}
 | DASH_ {ProcessSendCmdYesNo grid grid,style}
 | STYLE_ {ProcessSendCmdGet grid grid,style}
 | GAP1_ {ProcessSendCmdGet grid grid,gap1}
 | GAP2_ {ProcessSendCmdGet grid grid,gap2}
 | GAP3_ {ProcessSendCmdGet grid grid,gap3}
 ;

axes: {ProcessSendCmdYesNo grid axes}
 | COLOR_ {ProcessSendCmdGet grid axes,color}
 | WIDTH_ {ProcessSendCmdGet grid axes,width}
 | DASH_ {ProcessSendCmdYesNo grid axes,style}
# backward compatibility
 | STYLE_ {ProcessSendCmdGet grid axes,style}
 | TYPE_ {ProcessSendCmdGet grid axes,type}
 | ORIGIN_ {ProcessSendCmdGet grid axes,origin}
 ;

tickmarks : {ProcessSendCmdYesNo grid tick}
 | COLOR_ {ProcessSendCmdGet grid tick,color}
 | WIDTH_ {ProcessSendCmdGet grid tick,width}
 | DASH_ {ProcessSendCmdYesNo grid tick,style}
# backward compatibility
 | STYLE_ {ProcessSendCmdGet grid tick,style}
 ;

border : {ProcessSendCmdYesNo grid border}
 | COLOR_ {ProcessSendCmdGet grid border,color}
 | WIDTH_ {ProcessSendCmdGet grid border,width}
 | DASH_ {ProcessSendCmdYesNo grid border,style}
# backward compatibility
 | STYLE_ {ProcessSendCmdGet grid border,style}
 ;

numerics : {ProcessSendCmdYesNo grid numlab}
 | FONT_ {ProcessSendCmdGet grid numlab,font}
 | FONTSIZE_ {ProcessSendCmdGet grid numlab,size}
 | FONTWEIGHT_ {ProcessSendCmdGet grid numlab,weight}
 | FONTSLANT_ {ProcessSendCmdGet grid numlab,slant}
# backward compatibility
 | FONTSTYLE_ {ProcessSendCmdGet grid numlab,weight}
 | COLOR_ {ProcessSendCmdGet grid numlab,color}
 | GAP1_ {ProcessSendCmdGet grid numlab,gap1}
 | GAP2_ {ProcessSendCmdGet grid numlab,gap2}
 | GAP3_ {ProcessSendCmdGet grid numlab,gap3}
 | TYPE_ {ProcessSendCmdGet grid numlab,type}
 | VERTICAL_ {ProcessSendCmdGet grid numlab,vertical}
 ;

title : {ProcessSendCmdYesNo grid title}
 | TEXT_ {ProcessSendCmdGet grid title,text}
 | DEF_ {ProcessSendCmdYesNo grid title,def}
 | GAP_ {ProcessSendCmdGet grid title,gap}
 | FONT_ {ProcessSendCmdGet grid title,font}
 | FONTSIZE_ {ProcessSendCmdGet grid title,size}
 | FONTWEIGHT_ {ProcessSendCmdGet grid title,weight}
 | FONTSLANT_ {ProcessSendCmdGet grid title,slant}
# backward compatibility
 | FONTSTYLE_ {ProcessSendCmdGet grid title,weight}
 | COLOR_ {ProcessSendCmdGet grid title,color}
 ;

labels : {ProcessSendCmdYesNo grid textlab}
 | TEXT1_ {ProcessSendCmdGet grid textlab,text1}
 | TEXT2_ {ProcessSendCmdGet grid textlab,text2}
 | DEF1_ {ProcessSendCmdYesNo grid textlab,def1}
 | DEF2_ {ProcessSendCmdYesNo grid textlab,def2}
 | GAP1_ {ProcessSendCmdGet grid textlab,gap1}
 | GAP2_ {ProcessSendCmdGet grid textlab,gap2}
 | FONT_ {ProcessSendCmdGet grid textlab,font}
 | FONTSIZE_ {ProcessSendCmdGet grid textlab,size}
 | FONTWEIGHT_ {ProcessSendCmdGet grid textlab,weight}
 | FONTSLANT_ {ProcessSendCmdGet grid textlab,slant}
# backward compatibility
 | FONTSTYLE_ {ProcessSendCmdGet grid textlab,weight}
 | COLOR_ {ProcessSendCmdGet grid textlab,color}
 ;

view : GRID_ {ProcessSendCmdYesNo grid grid}
 | AXES_ viewaxes
 | TITLE_ {ProcessSendCmdYesNo grid title}
 | BORDER_ {ProcessSendCmdYesNo grid border}
 | VERTICAL_ {ProcessSendCmdYesNo grid numlab,vertical}
 ;

viewaxes : {ProcessSendCmdYesNo grid axes}
 | NUMBERS_ {ProcessSendCmdYesNo grid numlab}
 | TICKMARKS_ {ProcessSendCmdYesNo grid tick}
 | LABELS_ {ProcessSendCmdYesNo grid textlab}
 ;

%%

proc gridsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
