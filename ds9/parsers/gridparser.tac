%{
%}

#include yesno.tin
#include font.tin
#include coords.tin
#include skyframe.tin
#include skyformat.tin
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
%token VIEW_
%token WIDTH_

%token LLL_
%token LLU_
%token LUL_
%token LUU_
%token ULL_
%token ULU_
%token UUL_
%token UUU_

%%

#include yesno.trl
#include font.trl
#include coords.trl
#include skyframe.trl
#include skyformat.trl
#include numeric.trl

command : grid 
 | grid {yyclearin; YYACCEPT} STRING_
 ;

typegrid : ANALYSIS_ {set _ analysis}
 | PUBLICATION_ {set _ publication}
 ;

interiortype : INTERIOR_ {set _ interior}
 | EXTERIOR_ {set _ exterior}
 ;

grid : yesno {global grid; set grid(view) $1; GridUpdateCurrent}
 | OPEN_ {GridDialog}
 | CLOSE_ {GridDestroyDialog}
 # backward compatible
 | TYPE_ type {GridUpdateCurrent}
 | SYSTEM_ system {global grid; set grid(system) $2; GridUpdateCurrent}
 | SKYFRAME_ skyframe {global grid; set grid(sky) $2; GridUpdateCurrent}
 | SKYFORMAT_ skyformat {global grid; set grid(skyformat) $2; GridUpdateCurrent}
 | GRID_ gridgrid {GridUpdateCurrent}
 | FORMAT1_ STRING_ {global grid; set grid(format1) $2; GridUpdateCurrent}
 | FORMAT2_ STRING_ {global grid; set grid(format2) $2; GridUpdateCurrent}
 | AXES_ axes {GridUpdateCurrent}
 | TICKMARKS_ tickmarks {GridUpdateCurrent}
 | BORDER_ border {GridUpdateCurrent}
 | NUMERICS_ numerics {GridUpdateCurrent}
 | TITLE_ title {GridUpdateCurrent}
 | LABELS_ labels {GridUpdateCurrent}
 | VIEW_ view {GridUpdateCurrent}
 | RESET_ {GridResetDialog}
 | LOAD_ STRING_ {FileLast gridfbox $2; GridLoad $2}
 | SAVE_ STRING_ {FileLast gridfbox $2; GridSave $2}
 ;

type : typegrid {global grid; set grid(type) $1}
 | AXES_ interiortype {global grid; set grid(axes,type) $2}
 | NUMERICS_ interiortype {global grid; set grid(numlab,type) $2}
 ;

system : coordsys {set _ $1}
 | wcssys {set _ $1}
 ;

gridgrid : yesno {global grid; set grid(grid) $1}
 | COLOR_ STRING_ {global grid; set grid(grid,color) $2}
 | WIDTH_ INT_ {global grid; set grid(grid,color) $2}
 | STYLE_ INT_ {global grid; set grid(grid,style) $2}
 | GAP1_ numeric {global grid; set grid(grid,gap1) $2}
 | GAP2_ numeric {global grid; set grid(grid,gap2) $2}
 | GAP3_ numeric {global grid; set grid(grid,gap3) $2}
 ;

axes : yesno {global grid; set grid(axes) $1}
 | COLOR_ STRING_ {global grid; set grid(axes,color) $2}
 | WIDTH_ INT_ {global grid; set grid(axes,color) $2}
 | STYLE_ INT_ {global grid; set grid(axes,style) $2}
 | TYPE_ interiortype {global grid; set grid(axes,type) $2}
 | ORIGIN_ origin {global grid; set grid(axes,origin) $2}
 ;
 
origin : LLL_ {set _ lll}
 | LLU_ {set _ llu}
 | LUL_ {set _ lul}
 | LUU_ {set _ luu}
 | ULL_ {set _ ull}
 | ULU_ {set _ ulu}
 | UUL_ {set _ uul}
 | UUU_ {set _ uuu}
 ;

tickmarks : yesno {global grid; set grid(tick) $1}
 | COLOR_ STRING_ {global grid; set grid(tick,color) $2}
 | WIDTH_ INT_ {global grid; set grid(tick,color) $2}
 | STYLE_ INT_ {global grid; set grid(tick,style) $2}
 ;

border : yesno {global grid; set grid(border) $1}
 | COLOR_ STRING_ {global grid; set grid(border,color) $2}
 | WIDTH_ INT_ {global grid; set grid(border,color) $2}
 | STYLE_ INT_ {global grid; set grid(border,style) $2}
 ;

numerics : yesno {global grid; set grid(numlab) $1}
 | FONT_ font {global grid; set grid(numlab,font) $2}
 | FONTSIZE_ INT_ {global grid; set grid(numlab,size) $2}
 | FONTWEIGHT_ fontweight {global grid; set grid(numlab,weight) $2}
 | FONTSLANT_ fontslant {global grid; set grid(numlab,slant) $2}
 | FONTSTYLE_ numlabfontstyle
 | COLOR_ STRING_ {global grid; set grid(numlab,color) $2}
 | GAP1_ numeric {global grid; set grid(numlab,gap1) $2}
 | GAP2_ numeric {global grid; set grid(numlab,gap2) $2}
 | GAP3_ numeric {global grid; set grid(numlab,gap3) $2}
 | TYPE_ interiortype {global grid; set grid(numlab,type) $2}
 | VERTICAL_ yesno {global grid; set grid(numlab,vertical) $2}
 ;

numlabfontstyle : NORMAL_  {global grid; set grid(numlab,weight) normal; set grid(numlab,slant) roman}
 | BOLD_ {global grid; set grid(numlab,weight) bold; set grid(numlab,slant) roman}
 | ITALIC_ {global grid; set grid(numlab,weight) normal; set grid(numlab,slant) italic}
 ;

title : yesno {global grid; set grid(title) $1}
 | TEXT_ STRING_ {global grid; set grid(title,text) $2}
 | DEF_ yesno {global grid; set grid(title,def) $2}
 | GAP_ numeric {global grid; set grid(title,gap) $2}
 | FONT_ font {global grid; set grid(title,font) $2}
 | FONTSIZE_ INT_ {global grid; set grid(title,size) $2}
 | FONTWEIGHT_ fontweight {global grid; set grid(title,weight) $2}
 | FONTSLANT_ fontslant {global grid; set grid(title,slant) $2}
 | FONTSTYLE_ titlefontstyle
 | COLOR_ STRING_ {global grid; set grid(title,color) $2}
 ; 

titlefontstyle : NORMAL_  {global grid; set grid(title,weight) normal; set grid(title,slant) roman}
 | BOLD_ {global grid; set grid(title,weight) bold; set grid(title,slant) roman}
 | ITALIC_ {global grid; set grid(title,weight) normal; set grid(title,slant) italic}
 ;

labels : yesno {global grid; set grid(textlab) $1}
 | TEXT1_ STRING_ {global grid; set grid(textlab,text1) $2}
 | TEXT2_ STRING_ {global grid; set grid(textlab,text2) $2}
 | DEF1_ yesno {global grid; set grid(textlab,def1) $2}
 | DEF2_ yesno {global grid; set grid(textlab,def2) $2}
 | GAP1_ numeric {global grid; set grid(textlab,gap1) $2}
 | GAP2_ numeric {global grid; set grid(textlab,gap2) $2}
 | FONT_ font {global grid; set grid(textlab,font) $2}
 | FONTSIZE_ INT_ {global grid; set grid(textlab,size) $2}
 | FONTWEIGHT_ fontweight {global grid; set grid(textlab,weight) $2}
 | FONTSLANT_ fontslant {global grid; set grid(textlab,slant) $2}
 | FONTSTYLE_ labelsfontstyle
 | COLOR_ STRING_ {global grid; set grid(textlab,color) $2}
 ; 

labelsfontstyle : NORMAL_  {global grid; set grid(textlab,weight) normal; set grid(textlab,slant) roman}
 | BOLD_ {global grid; set grid(textlab,weight) bold; set grid(textlab,slant) roman}
 | ITALIC_ {global grid; set grid(textlab,weight) normal; set grid(textlab,slant) italic}
 ;

view : GRID_ yesno {global grid; set grid(grid) $1}
 | AXES_ viewaxes
 | TITLE_ yesno {global grid; set grid(title) $2}
 | BORDER_ yesno {global grid; set grid(border) $2}
 | VERTICAL_ yesno {global grid; set grid(numlab,vertical) $2}
 ;
 
viewaxes : yesno {global grid; set grid(axes) $1}
 | NUMBERS_ yesno {global grid; set grid(numlab) $2}
 | TICKMARKS_ yesno {global grid; set grid(tick) $2}
 | LABELS_ yesno {global grid; set grid(textlab) $2}
 ;

%%

proc grid::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
