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
%token CAP_
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
%token DISCRETE_
%token DUPLICATE_
%token ERROR_
%token FILE_
%token FILENAME_
%token FILL_
%token FILLCOLOR_
%token FLAT_
%token FLIP_
%token FONT_
%token FORMAT_
%token GRAPH_
%token GRAY_
%token GRID_
%token GROOVE_
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
%token RAISED_
%token RANGE_
%token RELIEF_
%token RGB_
%token RIGHT_
%token SAVE_
%token SAVECONFIG_
%token SCALE_
%token SCATTER_
%token SCROSS_
%token SELECT_
%token SHAPE_
%token SHOW_
%token SIZE_
%token SLANT_
%token SMOOTH_
%token SOLID_
%token SPLUS_
%token SQUARE_
%token STACKED_
%token STATS_
%token STEP_
%token STYLE_
%token SUNKEN_
%token TABLOID_
%token TITLE_
%token TOP_
%token TRIANGLE_
%token TYPE_
%token VIEW_
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

plotCmd : DATA_ dim #

 | LOAD_ load
 | SAVE_ STRING_ {PlotCmdSave $2}
 | CLEAR_ {global cvarname; PlotClearData $cvarname}
 | DUPLICATE_ duplicate
 | STATS_ yesno {PlotCmdSet stats $2 PlotStats}
 | LIST_ yesno {PlotCmdSet list $2 PlotList}
 | LOADCONFIG_ STRING_ {PlotCmdLoadConfig $2}
 | SAVECONFIG_ STRING_ {PlotCmdSaveConfig $2}
 | PAGESETUP_ pagesetup #
 | PRINT_ print #
 | CLOSE_ {global cvarname; PlotDestroy $cvarname}

 | MODE_ mode {PlotCmdSet mode $2 PlotChangeMode}

 | AXIS_ axis
 | LEGEND_ legend
 | FONT_ fontt
 | TITLE_ title
 | BARMODE_ barmode {PlotCmdUpdateGraph bar,mode $2}

 | SHOW_ yesno {PlotCmdUpdateElement show $2}
 | COLOR_ color
 | FILL_ yesno {PlotCmdUpdateElement fill $2}
 | FILLCOLOR_ STRING_ {PlotCmdUpdateElement fill,color $2}
 | ERROR_ errorr
 | NAME_ STRING_ {PlotCmdUpdateElement name $2}
 | SHAPE_ shape
 | RELIEF_ relief {PlotCmdUpdateElement bar,relief $2}
 | SMOOTH_ smooth {PlotCmdUpdateElement smooth $2}
 | WIDTH_ INT_ {PlotCmdUpdateElement width $2}
 | DASH_ yesno {PlotCmdUpdateElement dash $2}

 | SELECT_ INT_

 # backward compatibility
 | GRAPH_ oldgraph
 | LINE_ oldline
 | VIEW_ oldview
 ;

new : line
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

axis : xy GRID_ yesno {PlotCmdUpdateGraph "axis,$1,grid" $3}
 | xy LOG_ yesno {PlotCmdUpdateGraph $1 "axis,$1,log" $3}
 | xy FLIP_ yesno {PlotCmdUpdateGraph $1 "axis,$1,flip" $3}
 | xy AUTO_ yesno {PlotCmdUpdateGraph $1 "axis,$1,auto" $3}
 | xy MIN_ numeric {PlotCmdUpdateGraph $1 "axis,$1,min" $3}
 | xy MAX_ numeric {PlotCmdUpdateGraph $1 "axis,$1,max" $3}
 | xy FORMAT_ STRING_ {PlotCmdUpdateGraph $1 "axis,$1,format" $3}
 ;

legend : yesno {PlotCmdUpdateGraph legend $1}
 | POSITION_ legendPos {PlotCmdUpdateGraph "legend,position" $2}
 ;
 
legendPos : RIGHT_ {set _ right}
 | LEFT_ {set _ left}
 | TOP_ {set _ top}
 | BOTTOM_ {set _ bottom}
 ;

fontt : fontType FONT_ font {PlotCmdUpdateGraph "$1,family" $3}
 | fontType FONTSIZE_ INT_ {PlotCmdUpdateGraph "$1,size" $3}
 | fontType FONTWEIGHT_ fontWeight {PlotCmdUpdateGraph "$1,weight" $3}
 | fontType FONTSLANT_ fontSlant {PlotCmdUpdateGraph "$1,slant" $3}
 | fontType FONTSTYLE_ fontStyle {PlotCmdFontStyle $1 $3}
 | fontType SIZE_ INT_ {PlotCmdUpdateGraph "$1,size" $3}
 | fontType WEIGHT_ fontWeight {PlotCmdUpdateGraph "$1,weight" $3}
 | fontType SLANT_ fontSlant {PlotCmdUpdateGraph "$1,slant" $3}
 | fontType STYLE_ fontStyle {PlotCmdFontStyle $1 $3}
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

color : STRING_ {PlotCmdUpdateElement color $1}
# backward compatiabilty
 | dummy1 STRING_ {PlotCmdUpdateElement color $2}
 ;

dummy1 : DISCRETE_
 | LINE_
 | STEP_
 | QUADRATIC_
 | BAR_
 | ERROR_
 ; 

errorr : yesno {PlotCmdUpdateElement error $1}
 | CAP_ yesno {PlotCmdUpdateElement error,cap $2}
 | COLOR_ STRING_ {PlotCmdUpdateElement error,color $2}
 | WIDTH_ INT_ {PlotCmdUpdateElement error,width $2}
 ;

shape : shapes {PlotCmdUpdateElement shape,symbol $1}
 | FILL_ yesno {PlotCmdUpdateElement shape,file $2}
 | COLOR_ STRING_ {PlotCmdUpdateElement shape,color $2}
 ;

shapes : CIRCLE_ {set _ circle}
 | SQUARE_ {set _ square}
 | DIAMOND_ {set _ diamond}
 | PLUS_ {set _ plus}
 | SPLUS_ {set _ splus}
 | SCROSS_ {set _ scross}
 | TRIANGLE_ {set _ triangle}
 | ARROW_ {set _ arrow}
 ;

relief : FLAT_ {set _ flat}
 | SUNKEN_ {set _ sunken}
 | RAISED_ {set _ raised}
 | SOLID_ {set _ solid}
 | GROOVE_ {set _ groove}
 ;

smooth : STEP_ {set _ step}
 | LINEAR_ {set _ linear}
 | CUBIC_ {set _ cubic}
 | QUADRATIC_ {set _ quadratic}
 | CATROM_ {set _ catrom}
 ;

# backward compatibility
oldgraph : GRID_
 | LOG_
 | FLIP_
 | FORMAT_
 | RANGE_
 | LABELS_
 | TYPE_
 | SCALE_
 ;

# backward compatibility
oldline : DISCRETE_ shapes {PlotCmdUpdateElement shape,symbol $2}
 | dummy2 WIDTH_ INT_ {PlotCmdUpdateElement width $3}
 | dummy2 DASH_ yesno {PlotCmdUpdateElement dash $3}
 | dummy2 STYLE_ yesno {PlotCmdUpdateElement error $3}
 ;

dummy2 : LINE_
 | STEP_
 | QUADRATIC_
 | ERROR_
 ; 

# backward compatibility
oldview : DISCRETE_ yesno {PlotCmdUpdateElement show $2}
 | LINE_ yesno {PlotCmdUpdateElement show $2; PlotCmdUpdateElement smooth linear}
 | STEP_ yesno {PlotCmdUpdateElement show $2; PlotCmdUpdateElement smooth step}
 | QUADRATIC_ yesno {PlotCmdUpdateElement show $2; PlotCmdUpdateElement smooth quadratic}
 | ERROR_ yesno {PlotCmdUpdateElement error $2}
 ;

%%

proc plot::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
