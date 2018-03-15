%{
%}

#include yesno.tin
#include font.tin
#include numeric.tin
#include string.tin

%start command

%token ANALYSIS_
%token AXES_
%token BORDER_
%token COLOR_
%token CLOSE_
%token DEF_
%token DEF1_
%token DEF2_
%token EXTERIOR_
%token FORMAT1_
%token FORMAT2_
%token GAP_
%token GAP1_
%token GAP2_
%token GAP3_
%token GRID_
%token INTERIOR_
%token LABELS_
%token LOAD_
%token NUMBERS_
%token NUMERICS_
%token ORIGIN_
%token OPEN_
%token PUBLICATION_
%token RESET_
%token SAVE_
%token SKY_
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
%token VIEW_
%token WIDTH_

%%

#include yesno.trl
#include font.trl
#include numeric.trl

command : grid 
 | grid {yyclearin; YYACCEPT} STRING_
 ;

grid : yesno {global grid; set grid(view) $1; GridUpdateCurrent}
 | OPEN_ {GridDialog}
 | CLOSE_ {GridDestroyDialog}
 | TYPE_ type
 | SYSTEM_
 | SKY_
 | SKYFORMAT_
 | GRID_ gridgrid
 | AXES_ axes
 | FORMAT1_
 | FORMAT2_
 | TICKMARKS_ tickmarks
 | BORDER_ border
 | NUMERICS_ numerics
 | TITLE_ title
 | LABELS_ labels
 | VIEW_ view
 | RESET_ {GridResetDialog}
 | LOAD_ STRING_ {FileLast gridfbox $2; GridLoad $2}
 | SAVE_ STRING_ {FileLast gridfbox $2; GridSave $2}
 ;

type : typegrid {global grid; set grid(type) $1; GridUpdateCurrent}
 # backward compatible
 | AXES_ {global grid; set grid(axes,type) $1; GridUpdateCurrent}
 # backward compatible
 | NUMERICS_ {global grid; set grid(numlab,type) $1; GridUpdateCurrent}
 ;

typegrid : ANALYSIS_ {set _ analysis}
 | PUBLICATION_ {set _ publication}
 ;

gridgrid : yesno
 | COLOR_
 | WIDTH_
 | STYLE_
 | GAP1_
 | GAP2_
 | GAP3_
 ;

axes : yesno
 | COLOR_
 | WIDTH_
 | STYLE_
 | TYPE_
 | ORIGIN_
 ;
 
tickmarks : yesno
 | COLOR_
 | WIDTH_
 | STYLE_
 ;

border : yesno
 | COLOR_
 | WIDTH_
 | STYLE_
 ;

numerics : yesno
 | FONT_ font {global grid; set grid(numlab,font) $2; GridUpdateCurrent}
 | FONTSIZE_ INT_ {global grid; set grid(numlab,size) $2; GridUpdateCurrent}
 | FONTWEIGHT_ fontweight {global grid; set grid(numlab,weight) $2; GridUpdateCurrent}
 | FONTSLANT_ fontslant {global grid; set grid(numlab,slant) $2; GridUpdateCurrent}
 | FONTSTYLE_ numlabfontstyle
 | COLOR_ STRING_ {global grid; set grid(numlab,color) $2; GridUpdateCurrent}
 | GAP1_ numeric {global grid; set grid(numlab,gap1) $2; GridUpdateCurrent}
 | GAP2_ numeric {global grid; set grid(numlab,gap2) $2; GridUpdateCurrent}
 | GAP3_ numeric {global grid; set grid(numlab,gap3) $2; GridUpdateCurrent}
 | TYPE_ numlabtype {global grid; set grid(numlab,type) $2; GridUpdateCurrent}
 | VERTICAL_ yesno {global grid; set grid(numlab,vertical) $2; GridUpdateCurrent}
 ;

numlabtype : INTERIOR_ {set _ interior}
 | EXTERIOR_ {set _ exterior}
 ;

numlabfontstyle : NORMAL_  {global grid; set grid(numlab,weight) normal; set grid(numlab,slant) roman; GridUpdateCurrent}
 | BOLD_ {global grid; set grid(numlab,weight) bold; set grid(numlab,slant) roman; GridUpdateCurrent}
 | ITALIC_ {global grid; set grid(numlab,weight) normal; set grid(numlab,slant) italic; GridUpdateCurrent}
 ;

title : yesno {global grid; set grid(title) $2; GridUpdateCurrent}
 | TEXT_ STRING_ {global grid; set grid(title,text) $2; GridUpdateCurrent}
 | DEF_ yesno {global grid; set grid(title,def) $2; GridUpdateCurrent}
 | GAP_ numeric {global grid; set grid(title,gap) $2; GridUpdateCurrent}
 | FONT_ font {global grid; set grid(title,font) $2; GridUpdateCurrent}
 | FONTSIZE_ INT_ {global grid; set grid(title,size) $2; GridUpdateCurrent}
 | FONTWEIGHT_ fontweight {global grid; set grid(title,weight) $2; GridUpdateCurrent}
 | FONTSLANT_ fontslant {global grid; set grid(title,slant) $2; GridUpdateCurrent}
 | FONTSTYLE_ titlefontstyle
 | COLOR_ STRING_ {global grid; set grid(title,color) $2; GridUpdateCurrent}
 ; 

titlefontstyle : NORMAL_  {global grid; set grid(title,weight) normal; set grid(title,slant) roman; GridUpdateCurrent}
 | BOLD_ {global grid; set grid(title,weight) bold; set grid(title,slant) roman; GridUpdateCurrent}
 | ITALIC_ {global grid; set grid(title,weight) normal; set grid(title,slant) italic; GridUpdateCurrent}
 ;

labels : yesno {global grid; set grid(textlab) $2; GridUpdateCurrent}
 | TEXT1_ STRING_ {global grid; set grid(textlab,text1) $2; GridUpdateCurrent}
 | TEXT2_ STRING_ {global grid; set grid(textlab,text2) $2; GridUpdateCurrent}
 | DEF1_ yesno {global grid; set grid(textlab,def1) $2; GridUpdateCurrent}
 | DEF2_ yesno {global grid; set grid(textlab,def2) $2; GridUpdateCurrent}
 | GAP1_ numeric {global grid; set grid(textlab,gap1) $2; GridUpdateCurrent}
 | GAP2_ numeric {global grid; set grid(textlab,gap2) $2; GridUpdateCurrent}
 | FONT_ font {global grid; set grid(textlab,font) $2; GridUpdateCurrent}
 | FONTSIZE_ INT_ {global grid; set grid(textlab,size) $2; GridUpdateCurrent}
 | FONTWEIGHT_ fontweight {global grid; set grid(textlab,weight) $2; GridUpdateCurrent}
 | FONTSLANT_ fontslant {global grid; set grid(textlab,slant) $2; GridUpdateCurrent}
 | FONTSTYLE_ labelsfontstyle
 | COLOR_ STRING_ {global grid; set grid(textlab,color) $2; GridUpdateCurrent}
 ; 

labelsfontstyle : NORMAL_  {global grid; set grid(textlab,weight) normal; set grid(textlab,slant) roman; GridUpdateCurrent}
 | BOLD_ {global grid; set grid(textlab,weight) bold; set grid(textlab,slant) roman; GridUpdateCurrent}
 | ITALIC_ {global grid; set grid(textlab,weight) normal; set grid(textlab,slant) italic; GridUpdateCurrent}
 ;

view : GRID_ yesno {global grid; set grid(grid) $2; GridUpdateCurrent}
 | AXES_ viewaxes
 | TITLE_ yesno {global grid; set grid(title) $2; GridUpdateCurrent}
 | BORDER_ yesno {global grid; set grid(border) $2; GridUpdateCurrent}
 | VERTICAL_ yesno {global grid; set grid(numlab,vertical) $2; GridUpdateCurrent}
 ;
 
viewaxes : yesno {global grid; set grid(axes) $2; GridUpdateCurrent}
 | NUMBERS_ yesno {global grid; set grid(numlab) $2; GridUpdateCurrent}
 | TICKMARKS_ yesno {global grid; set grid(tick) $2; GridUpdateCurrent}
 | LABELS_ yesno {global grid; set grid(textlab) $2; GridUpdateCurrent}
 ;

%%

proc grid::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
