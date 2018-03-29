%{
%}

#include yesno.tin
#include font.tin
#include numeric.tin
#include string.tin

%start command

%token A4_
%token ALIGNED_
%token ARROW_
%token AUTO_
%token AXIS_
%token BAR_
%token BARMODE_
%token BOTTOM_
%token CATROM_
%token CIRCLE_
%token CLEAR_
%token CLOSE_
%token COLOR_
%token COMMAND_
%token CUBIC_
%token DASH_
%token DATA_
%token DESTINATION_
%token DIAMOND_
%token DUPLICATE_
%token ERROR_
%token FILE_
%token FILENAME_
%token FILL_
%token FLIP_
%token FONT_
%token FORMAT_
%token GRAY_
%token GRID_
%token LABELS_
%token LANDSCAPE_
%token LEFT_
%token LEGAL_
%token LEGEND_
%token LEGENDTITLE_
%token LETTER_
%token LINE_
%token LINEAR_
%token LIST_
%token LOAD_
%token LOADCONFIG_
%token LOG_
%token MAX_
%token MIN_
%token MODE_
%token NAME_
%token NEW_
%token NORMAL_
%token NUMBERS_
%token ORIENT_
%token OVERLAP_
%token PAGESETUP_
%token PLUS_
%token POINTER_
%token PORTRAIT_
%token POSITION_
%token POSTER_
%token PRINT_
%token PRINTER_
%token QUADRATIC_
%token RGB_
%token RIGHT_
%token SAVE_
%token SAVECONFIG_
%token SCATTER_
%token SCROSS_
%token SELECT_
%token SHAPE_
%token SHOW_
%token SIZE_
%token SLANT_
%token SMOOTH_
%token SPLUS_
%token SQUARE_
%token STACKED_
%token STATS_
%token STEP_
%token STYLE_
%token TABLOID_
%token TITLE_
%token TOP_
%token TRIANGLE_
%token WEIGHT_
%token WIDTH_
%token ZOOM_

%token XY_
%token XYEX_
%token XYEY_
%token XYEXEY_

%%

#include yesno.trl
#include font.trl
#include numeric.trl

command : plot
 | plot {yyclearin; YYACCEPT} STRING_
 ;

plot : new
 | NEW_ new
 | {PlotCmdCheck} plotCmd
 | STRING_ {PlotCmdRef $1}
 | STRING_ {PlotCmdRef $1} plotCmd
 ;

plotCmd : DATA_ dim

 | LOAD_ load
 | SAVE_ STRING_ {PlotCmdSave $2}
 | CLEAR_ {global cvarname; PlotClearData $cvarname}
 | DUPLICATE_ duplicate
 | STATS_ yesno {PlotCmdStats $2}
 | LIST_ yesno {PlotCmdList $2}
 | LOADCONFIG_ STRING_ {PlotCmdLoadConfig $2}
 | SAVECONFIG_ STRING_ {PlotCmdSaveConfig $2}
 | PAGESETUP_ pagesetup
 | PRINT_ print
 | CLOSE_ {global cvarname; PlotDestroy $cvarname}

 | MODE_ mode {PlotCmdMode $2}

 | AXIS_ axis
 | LEGEND_ legend
 | FONT_ fontt
 | TITLE_ title
 | BARMODE_ barmode

 | SHOW_ yesno
 | SHAPE_ shape
 | SMOOTH_ smooth
 | COLOR_ STRING_
 | WIDTH_ INT_
 | DASH_ yesno
 | ERROR_ errorr
 | NAME_ STRING_

 | SELECT_ INT_
 ;

new : line
 | LINE_ line
 | BAR_ bar
 | SCATTER_ scatter
 ;
 
line : {PlotCmdLine {} {} {} {} xy}
 ;

bar : {PlotCmdBar {} {} {} {} xy}
 ;

scatter : {PlotCmdScatter {} {} {} {} xy}
 ;

dim : XY_ {set _ xy}
 | XYEX_ {set _ xyex}
 | XYEY_ {set _ xyey}
 | XYEXEY_ {set _ xyexey}
 ;

xy : 'x' {set _x}
 | 'X' {set _ x}
 | 'y' {set _ y}
 | 'Y' {set _ y}
 ;

load : STRING_ {PlotCmdLoad $1 xy}
 | STRING_ dim  {PlotCmdLoad $1 $2}
 ;
 
duplicate : {global cvarname; PlotDupData $cvarname 1}
 | INT_ {global cvarname; PlotDupData $cvarname $1}
 ;

pagesetup : ORIENT_ pageOrient {global ps; set ps(orient) $2}
 | SIZE_ pageSize {global ps; set ps(size) $2}
 ;

pageOrient : PORTRAIT_ {set _ portrait}
 | LANDSCAPE_ {set _ landscape}
 ;
 
pageSize : LETTER_ {set _ letter}
 | LEGAL_ {set _ legal}
 | TABLOID_ {set _ tabloid}
 | POSTER_ {set _ poster}
 | A4_ {set _ a4}
 ;
 
print : DESTINATION_ printDest {global ps; set ps(dest) $2}
 | COMMAND_ STRING_ {global ps; set ps(cmd) $2}
 | FILENAME_ STRING_ {global ps; set ps(filename) $2}
 | COLOR_ printColor {global ps; set ps(color) $2}
 ;

printDest : PRINTER_ {set _ printer}
 | FILE_ {set _ file}
 ;

printColor : RGB_ {set _ rgb}
 | GRAY_ {set _ gray}
 ;
 
mode : POINTER_ {set _ pointer}
 | ZOOM_ {set _ zoom}
 ;

axis : xy GRID_ yesno {PlotCmdPlot "axis,$1,grid" $3}
 | xy LOG_ yesno {PlotCmdPlot $1 "axis,$1,log" $3}
 | xy FLIP_ yesno {PlotCmdPlot $1 "axis,$1,flip" $3}
 | xy AUTO_ yesno {PlotCmdPlot $1 "axis,$1,auto" $3}
 | xy MIN_ numeric {PlotCmdPlot $1 "axis,$1,min" $3}
 | xy MAX_ numeric {PlotCmdPlot $1 "axis,$1,max" $3}
 | xy FORMAT_ STRING_ {PlotCmdPlot $1 "axis,$1,format" $3}
 ;

legend : yesno {PlotCmdPlot legend $1}
 | POSITION_ legendPos {PlotCmdPlot "legend,position" $2}
 ;
 
legendPos : RIGHT_ {set _ right}
 | LEFT_ {set _ left}
 | TOP_ {set _ top}
 | BOTTOM_ {set _ bottom}
 ;

fontt : fontType FONT_ font {PlotCmdPlot "$1,family" $3}
 | fontType FONTSIZE_ INT_ {PlotCmdPlot "$1,size" $3}
 | fontType FONTWEIGHT_ fontWeight {PlotCmdPlot "$1,weight" $3}
 | fontType FONTSLANT_ fontSlant {PlotCmdPlot "$1,slant" $3}
 | fontType FONTSTYLE_ fontStyle
 | fontType SIZE_ INT_ {PlotCmdPlot "$1,size" $3}
 | fontType WEIGHT_ fontWeight {PlotCmdPlot "$1,weight" $3}
 | fontType SLANT_ fontSlant {PlotCmdPlot "$1,slant" $3}
 | fontType STYLE_ fontStyle
 ;

fontType : TITLE_ {set _ graph,title}
 | LABELS_ {set _ axis,title}
 | NUMBERS_ {set _ axis,numbers}
 | LEGEND_ {set _ legend,font}
 | LEGENDTITLE_ {set _ legend,title}
 ;

title : STRING_
 | xy STRING_
 ;

barmode : NORMAL_ {set _ normal}
 | STACKED_ {set _ stacked}
 | ALIGNED_ {set _ aligned}
 | OVERLAP_ {set _ overlap}
 ;

shape : shapeShape
 | FILL_ yesno
 | COLOR_ STRING_
 ;

shapeShape : CIRCLE_ {set _ circle}
 | SQUARE_ {set _ square}
 | DIAMOND_ {set _ diamond}
 | PLUS_ {set _ plus}
 | SPLUS_ {set _ splus}
 | SCROSS_ {set _ scross}
 | TRIANGLE_ {set _ triangle}
 | ARROW_ {set _ arrow}
 ;

smooth : STEP_ {set _ step}
 | LINEAR_ {set _ linear}
 | CUBIC_ {set _ cubic}
 | QUADRATIC_ {set _ quadratic}
 | CATROM_ {set _ catrom}
 ;

errorr : yesno
 | COLOR_ STRING_
 | WIDTH_ INT_
 ;

%%

proc plot::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
