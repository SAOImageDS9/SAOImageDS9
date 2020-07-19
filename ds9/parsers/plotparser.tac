
%{
%}
#include def.tin

#include yesno.tin
#include fonts.tin
#include numeric.tin
#include string.tin

%start command

%token A4_
%token ADD_
%token ALIGNED_
%token ARROW_
%token AUTO_
%token AXESNUMBERS_
%token AXESTITLE_
%token AXIS_
%token BACKGROUND_
%token BAR_
%token BARMODE_
%token BOTTOM_
%token CAP_
%token CATROM_
%token CIRCLE_
%token CLEAR_
%token CLOSE_
%token COLOR_
%token COLUMN_
%token COMMAND_
%token CROSS_
%token CUBIC_
%token CURRENT_
%token DASH_
%token DATA_
%token DATASET_
%token DELETE_
%token DESTINATION_
%token DIAMOND_
%token DISCRETE_
%token DUP_
%token DUPLICATE_
%token ERROR_
%token ERRORBAR_
%token EXPORT_
%token FAMILY_
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
%token LAYOUT_
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
%token NONE_
%token NORMAL_
%token NUMBERS_
%token ORIENT_
%token ORIENTATION_
%token OVERLAP_
%token PAGE_
%token PAGESETUP_
%token PAGESIZE_
%token PALETTE_
%token PLOTAREA_
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
%token ROW_
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
%token STATISTICS_
%token STDIN_
%token STEP_
%token STRIP_
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

%token LINEARLINEAR_
%token LOGLINEAR_
%token LINEARLOG_
%token LOGLOG_

%token XAXIS_
%token YAXIS_

%token GIF_
%token TIFF_
%token JPEG_
%token PNG_

%token NONE_
%token PACKBITS_
%token DEFLATE_

%%

#include yesno.trl
#include fonts.trl
#include numeric.trl

command : plot
 | plot {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

 plot : plotCmd
 | LINE_ line
 | BAR_ {PlotCmdNew {}; PlotCmdBar {} {} {} xy}
 | SCATTER_ {PlotCmdNew {}; PlotCmdScatter {} {} {} xy}
# parse error command line
 | {PlotCmdNew {}; PlotCmdLine {} {} {} xy}
 | NEW_ NAME_ STRING_ {PlotCmdNew $3} new
 | NEW_ {PlotCmdNew {}} new
 ;

line : {PlotCmdNew {}; PlotCmdLine {} {} {} xy}
 # backward compatibility
 | oldLine
 ;
 
new : newLine
 | LINE_ newLine
 | BAR_ newBar
 | SCATTER_ newScatter
 ;
 
newLine : STRING_ STRING_ STRING_ dim {PlotCmdLine $1 $2 $3 $4}
# parse error command line
 | {PlotCmdLine {} {} {} xy}
# xpa only
 | STDIN_ {PlotCmdAnalysisPlotStdin line}
# backward compatibility
 | STRING_ STRING_ STRING_ INT_ {PlotCmdLine $1 $2 $3 $4}
 ;

newBar : STRING_ STRING_ STRING_ dim {PlotCmdBar $1 $2 $3 $4}
# parse error command line
 | {PlotCmdBar {} {} {} xy}
# xpa only
 | STDIN_ {PlotCmdAnalysisPlotStdin bar}
# backward compatibility
 | STRING_ STRING_ STRING_ INT_ {PlotCmdBar $1 $2 $3 $4}
 ;

newScatter : STRING_ STRING_ STRING_ dim  {PlotCmdScatter $1 $2 $3 $4}
# parse error command line
 | {PlotCmdScatter {} {} {} xy}
# xpa only
 | STDIN_ {PlotCmdAnalysisPlotStdin scatter}
 # backward compatibility
 | STRING_ STRING_ STRING_ INT_  {PlotCmdScatter $1 $2 $3 $4}
 ;

xy : 'x' {set _ x}
 | 'X' {set _ x}
 | 'y' {set _ y}
 | 'Y' {set _ y}
 ;

# backward compatibility
xyaxis : XAXIS_ {set _ x}
 | YAXIS_ {set _ y}
 ;

dim : XY_ {set _ xy}
 | XYEX_ {set _ xyex}
 | XYEY_ {set _ xyey}
 | XYEXEY_ {set _ xyexey}
 ;

plotCmd : LOAD_ load
 | SAVE_ STRING_ {PlotCmdSave $2}
 | CURRENT_ STRING_ {PlotCmdRef $2}
 # xpa/samp only
 | DATA_ dim {PlotCmdData $2}

 | EXPORT_ export
 | LOADCONFIG_ STRING_ {PlotCmdLoadConfig $2}
 | SAVECONFIG_ STRING_ {PlotCmdSaveConfig $2}
 | PAGESETUP_ pagesetup
 # backward compatibility
 | PAGE_ pagesetup
 | PRINT_ print
 | CLOSE_ {ProcessCmdCVAR0 PlotDestroy}

 # Edit Menu
 | MODE_ mode {ProcessCmdCVAR mode $2 PlotChangeMode}

 # Canvas Menu
 | ADD_ GRAPH_ graph {ProcessCmdCVAROpt PlotAddGraph $3}
 | SELECT_ GRAPH_ INT_ {ProcessCmdCVAR graph,current $3 PlotCurrentGraph}
 | DELETE_ GRAPH_ {ProcessCmdCVAR0 PlotDeleteGraphCurrent}
 | LAYOUT_ layout {ProcessCmdCVAR layout $2 PlotChangeLayout}
 | LAYOUT_ STRIP_ SCALE_ numeric
   {ProcessCmdCVAR layout,strip,scale $4 PlotChangeLayout}
 | FONT_ fontt
 | BACKGROUND_ STRING_ {ProcessCmdCVAR background $2 PlotUpdateCanvas}
 # backward compatibility
 | BARMODE_ barmode

 # Graph Menu
 | SELECT_ DATASET_ INT_ {ProcessCmdCVAR graph,ds,current $3 PlotCurrentDataSet}
 # backward compatibility
 | SELECT_ INT_ {ProcessCmdCVAR graph,ds,current $2 PlotCurrentDataSet}
 # backward compatibility
 | DATASET_ INT_ {ProcessCmdCVAR graph,ds,current $2 PlotCurrentDataSet}
 | DUPLICATE_ duplicate
 | DUP_ duplicate
 | DELETE_ DATASET_ {ProcessCmdCVAR0 PlotDeleteDataSetCurrent}
 # backward compatibility
 | CLEAR_ {ProcessCmdCVAR0 PlotDeleteDataSetAll}
 | STATISTICS_ yesno {ProcessCmdCVAR stats $2 PlotStats}
 # backward compatibility
 | STATS_ yesno {ProcessCmdCVAR stats $2 PlotStats}
 | LIST_ yesno {ProcessCmdCVAR list $2 PlotList}
 | AXIS_ axis
 | LEGEND_ legend
 | TITLE_ title

 # Data
 | SHOW_ yesno {PlotCmdUpdateElement graph,ds,show $2}
 | SHAPE_ shape
 | SMOOTH_ smooth {PlotCmdUpdateElement graph,ds,smooth $2}
 | COLOR_ color
 | WIDTH_ INT_ {PlotCmdUpdateElement graph,ds,width $2}
 | DASH_ yesno {PlotCmdUpdateElement graph,ds,dash $2}
 | FILL_ yesno {PlotCmdUpdateElement graph,ds,fill $2}
 | FILLCOLOR_ STRING_ {PlotCmdUpdateElement graph,ds,fill,color $2}
 | ERROR_ errorr
 # backward compatibility
 | ERRORBAR_ errorr
 # backward compatibility
 | RELIEF_ relief
 | NAME_ STRING_ {ProcessCmdCVAROpt PlotDataSetName $2}

 # backward compatibility
 | GRAPH_ oldGraph
 # backward compatibility
 | VIEW_ oldView
 ;

# File Menu params
load : STRING_ {PlotCmdLoad $1 xy}
 | STRING_ dim  {PlotCmdLoad $1 $2}
 ;
 
export : STRING_ {PlotCmdExport [ExtToFormat $1] $1}
 | STRING_ exportOps {PlotCmdExport [ExtToFormat $1] $1}
 | exportExt STRING_ {PlotCmdExport $1 $2}
 | exportExt STRING_ exportOps {PlotCmdExport $1 $2}
 ;

exportExt : GIF_ {set _ gif}
 | TIFF_ {set _ tiff}
 | JPEG_ {set _ jpeg}
 | PNG_ {set _ png}
 ;

exportOps : NONE_ {ProcessCmdSet iap tiff,compress none}
 | JPEG_ {ProcessCmdSet iap tiff,compress jpeg}
 | PACKBITS_ {ProcessCmdSet iap tiff,compress packbits}
 | DEFLATE_ {ProcessCmdSet iap tiff,compress deflate}
 | numeric {ProcessCmdSet iap jpeg,quality $1}
 ;

pagesetup : ORIENT_ pageOrient {ProcessCmdSet ps orient $2}
 | ORIENTATION_ pageOrient {ProcessCmdSet ps orient $2}
 | PAGESIZE_ pageSize {ProcessCmdSet ps size $2}
 | SIZE_ pageSize {ProcessCmdSet ps size $2}
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
 
print : {ProcessCmdCVAR0 PlotPostScript}
 | DESTINATION_ printDest {ProcessCmdSet ps dest $2}
 | COMMAND_ STRING_ {ProcessCmdSet ps cmd $2}
 | FILENAME_ STRING_ {ProcessCmdSet ps filename $2}
 | PALETTE_ printColor {ProcessCmdSet ps color $2}
 | COLOR_ printColor {ProcessCmdSet ps color $2}
 ;

printDest : PRINTER_ {set _ printer}
 | FILE_ {set _ file}
 ;

printColor : RGB_ {set _ rgb}
 | GRAY_ {set _ gray}
 ;
 
# Edit Menu params
mode : POINTER_ {set _ pointer}
 | ZOOM_ {set _ zoom}
 ;

# Canvas Menu params
graph : {set _ line}
 | LINE_ {set _ line}
 | BAR_ {set _ bar}
 | SCATTER_ {set _ scatter}
 ;

layout: ROW_ {set _ row}
 | COLUMN_ {set _ column}
 | GRID_ {set _ grid}
 | STRIP_ {set _ strip}
 ;

fontt : fontType FONT_ font {ProcessCmdCVAR "$1,family" $3 PlotUpdateCanvas}
# backward compatibility
 | fontType FAMILY_ font {ProcessCmdCVAR "$1,family" $3 PlotUpdateCanvas}
 | fontType FONTSIZE_ INT_ {ProcessCmdCVAR "$1,size" $3 PlotUpdateCanvas}
 | fontType FONTWEIGHT_ fontWeight {ProcessCmdCVAR "$1,weight" $3 PlotUpdateCanvas}
 | fontType FONTSLANT_ fontSlant {ProcessCmdCVAR "$1,slant" $3 PlotUpdateCanvas}
# backward compatibility
 | fontType FONTSTYLE_ fontStyle {PlotCmdFontStyle $1 $3}
 | fontType SIZE_ INT_ {ProcessCmdCVAR "$1,size" $3 PlotUpdateCanvas}
 | fontType WEIGHT_ fontWeight {ProcessCmdCVAR "$1,weight" $3 PlotUpdateCanvas}
 | fontType SLANT_ fontSlant {ProcessCmdCVAR "$1,slant" $3 PlotUpdateCanvas}
 | fontType STYLE_ fontStyle {PlotCmdFontStyle $1 $3}
 ;

fontType : TITLE_ {set _ graph,title}
 | LABELS_ {set _ axis,title}
 # backward compatibility
 | AXESTITLE_ {set _ axis,title}
 | NUMBERS_ {set _ axis,font}
 # backward compatibility
 | AXESNUMBERS_ {set _ axis,font}
 | LEGEND_ {set _ legend,font}
 | LEGENDTITLE_ {set _ legend,title}
 ;

# backward compatibility
barmode : NORMAL_ {set _ normal}
 | STACKED_ {set _ stacked}
 | ALIGNED_ {set _ aligned}
 | OVERLAP_ {set _ overlap}
 ;

# Graph Menu parmas
duplicate : {global cvarname; PlotDupDataSet $cvarname}
# backward compatibility
 | INT_ {global cvarname; PlotDupDataSet $cvarname}
 ;

axis : xy GRID_ yesno {ProcessCmdCVAR "graph,axis,$1,grid" $3 PlotChangeAxis}
 | xy LOG_ yesno {ProcessCmdCVAR "graph,axis,$1,log" $3 PlotChangeAxis}
 | xy FLIP_ yesno {ProcessCmdCVAR "graph,axis,$1,flip" $3 PlotChangeAxis}
 | xy AUTO_ yesno {ProcessCmdCVAR "graph,axis,$1,auto" $3 PlotChangeAxis}
 | xy MIN_ numeric {ProcessCmdCVAR "graph,axis,$1,min" $3 PlotChangeAxis}
 | xy MAX_ numeric {ProcessCmdCVAR "graph,axis,$1,max" $3 PlotChangeAxis}
 | xy FORMAT_ STRING_ {ProcessCmdCVAR "graph,axis,$1,format" $3 PlotChangeAxis}
 ;

legend : yesno {ProcessCmdCVAR graph,legend $1 PlotChangeLegend}
 | POSITION_ legendPos {ProcessCmdCVAR graph,legend,position $2 PlotChangeLegend}
 ;
 
legendPos : RIGHT_ {set _ right}
 | LEFT_ {set _ left}
 | TOP_ {set _ top}
 | BOTTOM_ {set _ bottom}
 | PLOTAREA_ {set _ plotarea}
 ;

# backward compatibility
relief : FLAT_ {set _ flat}
 | SUNKEN_ {set _ sunken}
 | RAISED_ {set _ raised}
 | SOLID_ {set _ solid}
 | GROOVE_ {set _ groove}
 ;

title : STRING_ {ProcessCmdCVAR graph,title $1 PlotChangeTitle}
 | xy STRING_ {ProcessCmdCVAR "graph,axis,$1,title" $2 PlotChangeTitle}
 | xyaxis STRING_ {ProcessCmdCVAR "graph,axis,$1,title" $2 PlotChangeTitle}
 | LEGEND_ STRING_ {ProcessCmdCVAR graph,legend,title $2 PlotChangeTitle}
 ;

# Data Menu params
shape : shapes {PlotCmdUpdateElement graph,ds,shape,symbol $1}
 | FILL_ yesno {PlotCmdUpdateElement graph,ds,shape,file $2}
 | COLOR_ STRING_ {PlotCmdUpdateElement graph,ds,shape,color $2}
 ;

shapes : NONE_ {set _ none}
 | CIRCLE_ {set _ circle}
 | SQUARE_ {set _ square}
 | DIAMOND_ {set _ diamond}
 | PLUS_ {set _ plus}
 | SPLUS_ {set _ splus}
 | SCROSS_ {set _ scross}
 | TRIANGLE_ {set _ triangle}
 | ARROW_ {set _ arrow}
 # backward compatibility
 | CROSS_ {set _ scross}
 ;

smooth : STEP_ {set _ step}
 | LINEAR_ {set _ linear}
 | CUBIC_ {set _ cubic}
 | QUADRATIC_ {set _ quadratic}
 | CATROM_ {set _ catrom}
 ;

color : STRING_ {PlotCmdUpdateElement graph,ds,color $1}
# backward compatiabilty
 | dummy1 STRING_ {PlotCmdUpdateElement graph,ds,color $2}
 ;

dummy1 : DISCRETE_
 | LINE_
 | STEP_
 | QUADRATIC_
 | BAR_
 | ERROR_
 | ERRORBAR_
 ; 

errorr : yesno {PlotCmdUpdateElement graph,ds,error $1}
 | CAP_ yesno {PlotCmdUpdateElement graph,ds,error,cap $2}
 | COLOR_ STRING_ {PlotCmdUpdateElement graph,ds,error,color $2}
 | WIDTH_ INT_ {PlotCmdUpdateElement graph,ds,error,width $2}
 ;

# Really old stuff
# backward compatibility
oldGraph : GRID_ oldGraphGrid
 | LOG_ xy yesno {ProcessCmdCVAR "graph,axis,$2,log" $3 PlotChangeAxis}
 | FLIP_ xy yesno {ProcessCmdCVAR "graph,axis,$2,flip" $3 PlotChangeAxis}
 | FORMAT_ xy STRING_ {ProcessCmdCVAR "graph,axis,$2,format" $3 PlotChangeAxis}
 | RANGE_ oldGraphRange
 | LABELS_ oldGraphLabels
 | TYPE_ oldGraphType
 | SCALE_ oldGraphScale
 ;

oldGraphGrid : xy yesno {ProcessCmdCVAR "graph,axis,$1,grid" $2 PlotChangeAxis}
 | yesno {ProcessCmdCVAR graph,axis,x,grid $1; ProcessCmdCVAR graph,axis,y,grid $1 PlotChangeAxis}
 ;

oldGraphRange : xy AUTO_ yesno {ProcessCmdCVAR "graph,axis,$1,auto" $3 PlotChangeAxis}
 | xy MIN_ numeric {ProcessCmdCVAR "graph,axis,$1,min" $3 PlotChangeAxis}
 | xy MAX_ numeric {ProcessCmdCVAR "graph,axis,$1,max" $3 PlotChangeAxis}
 ;

oldGraphLabels : TITLE_ STRING_ {ProcessCmdCVAR graph,title $2 PlotChangeAxis}
 | xyaxis STRING_ {ProcessCmdCVAR "graph,axis,$1,title" $2 PlotChangeAxis}
 | LEGEND_ STRING_ {ProcessCmdCVAR graph,legend,title $2 PlotChangeLegend}
 ;

oldGraphType : LINE_
 | BAR_
 ;

oldGraphScale : LINEARLINEAR_ {ProcessCmdCVAR "graph,axis,x,log" 0; ProcessCmdCVAR "graph,axis,y,log" 0 PlotChangeAxis}
 | LINEARLOG_ {ProcessCmdCVAR "graph,axis,x,log" 0; ProcessCmdCVAR "graph,axis,y,log" 1 PlotChangeAxis}
 | LOGLINEAR_ {ProcessCmdCVAR "graph,axis,x,log" 1; ProcessCmdCVAR "graph,axis,y,log" 0 PlotChangeAxis}
 | LOGLOG_ {ProcessCmdCVAR "graph,axis,x,log" 1; ProcessCmdCVAR "graph,axis,y,log" 1 PlotChangeAxis}
 ;

# backward compatibility
oldLine : DISCRETE_ shapes {PlotCmdUpdateElement graph,ds,shape,symbol $2}
 | dummy2 WIDTH_ INT_ {PlotCmdUpdateElement graph,ds,width $3}
 | dummy2 DASH_ yesno {PlotCmdUpdateElement graph,ds,dash $3}
 | dummy2 STYLE_ INT_ {PlotCmdUpdateElement graph,ds,error $3}
 ;

dummy2 : LINE_
 | LINEAR_
 | STEP_
 | QUADRATIC_
 | ERROR_
 | ERRORBAR_
 ; 

# backward compatibility
oldView : DISCRETE_ yesno {PlotCmdUpdateElement graph,ds,show $2}
 | LINE_ yesno {PlotCmdUpdateElement graph,ds,show $2; PlotCmdUpdateElement graph,ds,smooth linear}
 | STEP_ yesno {PlotCmdUpdateElement graph,ds,show $2; PlotCmdUpdateElement graph,ds,smooth step}
 | QUADRATIC_ yesno {PlotCmdUpdateElement graph,ds,show $2; PlotCmdUpdateElement graph,ds,smooth quadratic}
 | ERROR_ yesno {PlotCmdUpdateElement graph,ds,error $2}
 | ERRORBAR_ yesno {PlotCmdUpdateElement graph,ds,error $2}
 ;

%%

proc plot::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
