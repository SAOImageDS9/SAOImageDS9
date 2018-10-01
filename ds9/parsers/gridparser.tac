%{
%}
#include def.tin

#include yesno.tin
#include fonts.tin
#include coordsys.tin
#include wcssys.tin
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
#include fonts.trl
#include coordsys.trl
#include wcssys.trl
#include skyframe.trl
#include skyformat.trl
#include numeric.trl

command : grid 
 | grid {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

typegrid : ANALYSIS_ {set _ analysis}
 | PUBLICATION_ {set _ publication}
 ;

interiortype : INTERIOR_ {set _ interior}
 | EXTERIOR_ {set _ exterior}
 ;

grid : yesno {ProcessCmdSet grid view $1 GridUpdateCurrent}
 | OPEN_ {GridDialog}
 | CLOSE_ {GridDestroyDialog}
 # backward compatible
 | TYPE_ type {GridUpdateCurrent}
 | SYSTEM_ system {ProcessCmdSet grid system $2 GridUpdateCurrent}
 | SKYFRAME_ skyframe {ProcessCmdSet grid sky $2 GridUpdateCurrent}
 | SKYFORMAT_ skyformat {ProcessCmdSet grid skyformat $2 GridUpdateCurrent}
 | GRID_ gridgrid {GridUpdateCurrent}
 | FORMAT1_ STRING_ {ProcessCmdSet grid format1 $2 GridUpdateCurrent}
 | FORMAT2_ STRING_ {ProcessCmdSet grid format2 $2 GridUpdateCurrent}
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

type : typegrid {ProcessCmdSet grid type $1}
 | AXES_ interiortype {ProcessCmdSet grid axes,type $2}
 | NUMERICS_ interiortype {ProcessCmdSet grid numlab,type $2}
 ;

system : coordsys {set _ $1}
 | wcssys {set _ $1}
 ;

gridgrid : yesno {ProcessCmdSet grid grid $1}
 | COLOR_ STRING_ {ProcessCmdSet grid grid,color $2}
 | WIDTH_ INT_ {ProcessCmdSet grid grid,width $2}
 | DASH_ yesno {ProcessCmdSet grid grid,style $2}
 # backward compatible
 | STYLE_ INT_ {ProcessCmdSet grid grid,style $2}
 | GAP1_ numeric {ProcessCmdSet grid grid,gap1 $2}
 | GAP2_ numeric {ProcessCmdSet grid grid,gap2 $2}
 | GAP3_ numeric {ProcessCmdSet grid grid,gap3 $2}
 ;

axes : yesno {ProcessCmdSet grid axes $1}
 | COLOR_ STRING_ {ProcessCmdSet grid axes,color $2}
 | WIDTH_ INT_ {ProcessCmdSet grid axes,width $2}
 | DASH_ yesno {ProcessCmdSet grid axes,style $2}
 # backward compatible
 | STYLE_ INT_ {ProcessCmdSet grid axes,style $2}
 | TYPE_ interiortype {ProcessCmdSet grid axes,type $2}
 | ORIGIN_ origin {ProcessCmdSet grid axes,origin $2}
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

tickmarks : yesno {ProcessCmdSet grid tick $1}
 | COLOR_ STRING_ {ProcessCmdSet grid tick,color $2}
 | WIDTH_ INT_ {ProcessCmdSet grid tick,width $2}
 | DASH_ yesno {ProcessCmdSet grid tick,style $2}
 # backward compatible
 | STYLE_ INT_ {ProcessCmdSet grid tick,style $2}
 ;

border : yesno {ProcessCmdSet grid border $1}
 | COLOR_ STRING_ {ProcessCmdSet grid border,color $2}
 | WIDTH_ INT_ {ProcessCmdSet grid border,width $2}
 | DASH_ yesno {ProcessCmdSet grid border,style $2}
 # backward compatible
 | STYLE_ INT_ {ProcessCmdSet grid border,style $2}
 ;

numerics : yesno {ProcessCmdSet grid numlab $1}
 | FONT_ font {ProcessCmdSet grid numlab,font $2}
 | FONTSIZE_ INT_ {ProcessCmdSet grid numlab,size $2}
 | FONTWEIGHT_ fontWeight {ProcessCmdSet grid numlab,weight $2}
 | FONTSLANT_ fontSlant {ProcessCmdSet grid numlab,slant $2}
# backward compatibility
 | FONTSTYLE_ fontStyle {ProcessCmdFontStyle grid numlab $2}
 | COLOR_ STRING_ {ProcessCmdSet grid numlab,color $2}
 | GAP1_ numeric {ProcessCmdSet grid numlab,gap1 $2}
 | GAP2_ numeric {ProcessCmdSet grid numlab,gap2 $2}
 | GAP3_ numeric {ProcessCmdSet grid numlab,gap3 $2}
 | TYPE_ interiortype {ProcessCmdSet grid numlab,type $2}
 | VERTICAL_ yesno {ProcessCmdSet grid numlab,vertical $2}
 ;

title : yesno {ProcessCmdSet grid title $1}
 | TEXT_ STRING_ {ProcessCmdSet grid title,text $2}
 | DEF_ yesno {ProcessCmdSet grid title,def $2}
 | GAP_ numeric {ProcessCmdSet grid title,gap $2}
 | FONT_ font {ProcessCmdSet grid title,font $2}
 | FONTSIZE_ INT_ {ProcessCmdSet grid title,size $2}
 | FONTWEIGHT_ fontWeight {ProcessCmdSet grid title,weight $2}
 | FONTSLANT_ fontSlant {ProcessCmdSet grid title,slant $2}
# backward compatibility
 | FONTSTYLE_ fontStyle {ProcessCmdFontStyle grid title $2}
 | COLOR_ STRING_ {ProcessCmdSet grid title,color $2}
 ; 

labels : yesno {ProcessCmdSet grid textlab $1}
 | TEXT1_ STRING_ {ProcessCmdSet grid textlab,text1 $2}
 | TEXT2_ STRING_ {ProcessCmdSet grid textlab,text2 $2}
 | DEF1_ yesno {ProcessCmdSet grid textlab,def1 $2}
 | DEF2_ yesno {ProcessCmdSet grid textlab,def2 $2}
 | GAP1_ numeric {ProcessCmdSet grid textlab,gap1 $2}
 | GAP2_ numeric {ProcessCmdSet grid textlab,gap2 $2}
 | FONT_ font {ProcessCmdSet grid textlab,font $2}
 | FONTSIZE_ INT_ {ProcessCmdSet grid textlab,size $2}
 | FONTWEIGHT_ fontWeight {ProcessCmdSet grid textlab,weight $2}
 | FONTSLANT_ fontSlant {ProcessCmdSet grid textlab,slant $2}
# backward compatibility
 | FONTSTYLE_ fontStyle {ProcessCmdFontStyle grid textlab $2}
 | COLOR_ STRING_ {ProcessCmdSet grid textlab,color $2}
 ; 

view : GRID_ yesno {ProcessCmdSet grid grid $1}
 | AXES_ viewaxes
 | TITLE_ yesno {ProcessCmdSet grid title $2}
 | BORDER_ yesno {ProcessCmdSet grid border $2}
 | VERTICAL_ yesno {ProcessCmdSet grid numlab,vertical $2}
 ;
 
viewaxes : yesno {ProcessCmdSet grid axes $1}
 | NUMBERS_ yesno {ProcessCmdSet grid numlab $2}
 | TICKMARKS_ yesno {ProcessCmdSet grid tick $2}
 | LABELS_ yesno {ProcessCmdSet grid textlab $2}
 ;

%%

proc grid::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
