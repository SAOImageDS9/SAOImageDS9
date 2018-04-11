%{
%}

#include yesno.tin
#include font.tin
#include coords.tin
#include skyframe.tin
#include numeric.tin
#include string.tin

%start command

%token ANALYSIS_
%token AXES_
%token BORDER_
%token COLOR_
%token CLOSE_
%token DASH_
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

grid : yesno {GridCmdSet view $1 GridUpdateCurrent}
 | OPEN_ {GridDialog}
 | CLOSE_ {GridDestroyDialog}
 # backward compatible
 | TYPE_ type {GridUpdateCurrent}
 | SYSTEM_ system {GridCmdSet system $2 GridUpdateCurrent}
 | SKYFRAME_ skyframe {GridCmdSet sky $2 GridUpdateCurrent}
 | SKYFORMAT_ skyformat {GridCmdSet skyformat $2 GridUpdateCurrent}
 | GRID_ gridgrid {GridUpdateCurrent}
 | FORMAT1_ STRING_ {GridCmdSet format1 $2 GridUpdateCurrent}
 | FORMAT2_ STRING_ {GridCmdSet format2 $2 GridUpdateCurrent}
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

type : typegrid {GridCmdSet type $1}
 | AXES_ interiortype {GridCmdSet axes,type $2}
 | NUMERICS_ interiortype {GridCmdSet numlab,type $2}
 ;

system : coordsys {set _ $1}
 | wcssys {set _ $1}
 ;

gridgrid : yesno {GridCmdSet grid $1}
 | COLOR_ STRING_ {GridCmdSet grid,color $2}
 | WIDTH_ INT_ {GridCmdSet grid,width $2}
 | DASH_ yesno {GridCmdSet grid,style $2}
 # backward compatible
 | STYLE_ INT_ {GridCmdSet grid,style $2}
 | GAP1_ numeric {GridCmdSet grid,gap1 $2}
 | GAP2_ numeric {GridCmdSet grid,gap2 $2}
 | GAP3_ numeric {GridCmdSet grid,gap3 $2}
 ;

axes : yesno {GridCmdSet axes $1}
 | COLOR_ STRING_ {GridCmdSet axes,color $2}
 | WIDTH_ INT_ {GridCmdSet axes,width $2}
 | DASH_ yesno {GridCmdSet axes,style $2}
 # backward compatible
 | STYLE_ INT_ {GridCmdSet axes,style $2}
 | TYPE_ interiortype {GridCmdSet axes,type $2}
 | ORIGIN_ origin {GridCmdSet axes,origin $2}
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

tickmarks : yesno {GridCmdSet tick $1}
 | COLOR_ STRING_ {GridCmdSet tick,color $2}
 | WIDTH_ INT_ {GridCmdSet tick,width $2}
 | DASH_ yesno {GridCmdSet tick,style $2}
 # backward compatible
 | STYLE_ INT_ {GridCmdSet tick,style $2}
 ;

border : yesno {GridCmdSet border $1}
 | COLOR_ STRING_ {GridCmdSet border,color $2}
 | WIDTH_ INT_ {GridCmdSet border,width $2}
 | DASH_ yesno {GridCmdSet border,style $2}
 # backward compatible
 | STYLE_ INT_ {GridCmdSet border,style $2}
 ;

numerics : yesno {GridCmdSet numlab $1}
 | FONT_ font {GridCmdSet numlab,font $2}
 | FONTSIZE_ INT_ {GridCmdSet numlab,size $2}
 | FONTWEIGHT_ fontWeight {GridCmdSet numlab,weight $2}
 | FONTSLANT_ fontSlant {GridCmdSet numlab,slant $2}
 | FONTSTYLE_ fontStyle {GridCmdFontStyle numlab $2}
 | COLOR_ STRING_ {GridCmdSet numlab,color $2}
 | GAP1_ numeric {GridCmdSet numlab,gap1 $2}
 | GAP2_ numeric {GridCmdSet numlab,gap2 $2}
 | GAP3_ numeric {GridCmdSet numlab,gap3 $2}
 | TYPE_ interiortype {GridCmdSet numlab,type $2}
 | VERTICAL_ yesno {GridCmdSet numlab,vertical $2}
 ;

title : yesno {GridCmdSet title $1}
 | TEXT_ STRING_ {GridCmdSet title,text $2}
 | DEF_ yesno {GridCmdSet title,def $2}
 | GAP_ numeric {GridCmdSet title,gap $2}
 | FONT_ font {GridCmdSet title,font $2}
 | FONTSIZE_ INT_ {GridCmdSet title,size $2}
 | FONTWEIGHT_ fontWeight {GridCmdSet title,weight $2}
 | FONTSLANT_ fontSlant {GridCmdSet title,slant $2}
 | FONTSTYLE_ fontStyle {GridCmdFontStyle title $2}
 | COLOR_ STRING_ {GridCmdSet title,color $2}
 ; 

labels : yesno {GridCmdSet textlab $1}
 | TEXT1_ STRING_ {GridCmdSet textlab,text1 $2}
 | TEXT2_ STRING_ {GridCmdSet textlab,text2 $2}
 | DEF1_ yesno {GridCmdSet textlab,def1 $2}
 | DEF2_ yesno {GridCmdSet textlab,def2 $2}
 | GAP1_ numeric {GridCmdSet textlab,gap1 $2}
 | GAP2_ numeric {GridCmdSet textlab,gap2 $2}
 | FONT_ font {GridCmdSet textlab,font $2}
 | FONTSIZE_ INT_ {GridCmdSet textlab,size $2}
 | FONTWEIGHT_ fontWeight {GridCmdSet textlab,weight $2}
 | FONTSLANT_ fontSlant {GridCmdSet textlab,slant $2}
 | FONTSTYLE_ fontStyle {GridCmdFontStyle textlab $2}
 | COLOR_ STRING_ {GridCmdSet textlab,color $2}
 ; 

view : GRID_ yesno {GridCmdSet grid $1}
 | AXES_ viewaxes
 | TITLE_ yesno {GridCmdSet title $2}
 | BORDER_ yesno {GridCmdSet border $2}
 | VERTICAL_ yesno {GridCmdSet numlab,vertical $2}
 ;
 
viewaxes : yesno {GridCmdSet axes $1}
 | NUMBERS_ yesno {GridCmdSet numlab $2}
 | TICKMARKS_ yesno {GridCmdSet tick $2}
 | LABELS_ yesno {GridCmdSet textlab $2}
 ;

%%

proc grid::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
