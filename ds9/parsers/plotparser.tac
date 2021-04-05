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
%token ARROW_
%token AUTO_
%token AXIS_
%token BACKGROUND_
%token BACKUP_
%token BAR_
%token BORDER_
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
%token DUPLICATE_
%token EPS_
%token ERROR_
%token EXPORT_
%token FAMILY_
%token FILE_
%token FILENAME_
%token FILL_
%token FLIP_
%token FONT_
%token FOREGROUND_
%token FORMAT_
%token GRAPH_
%token GRAY_
%token GRID_
%token GUI_
%token LABELS_
%token LANDSCAPE_
%token LAYOUT_
%token LEFT_
%token LEGAL_
%token LEGEND_
%token LETTER_
%token LINE_
%token LINEAR_
%token LIST_
%token LOAD_
%token LOG_
%token MAX_
%token MIN_
%token MODE_
%token NAME_
%token NEW_
%token NONE_
%token NUMBERS_
%token OPEN_
%token ORIENT_
%token ORIENTATION_
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
%token RESTORE_
%token RGB_
%token RIGHT_
%token ROW_
%token SAVE_
%token SCALE_
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
%token STATISTICS_
%token STDIN_
%token STEP_
%token STRIP_
%token STYLE_
%token SYMBOL_
%token TABLOID_
%token THEME_
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

%token XAXIS_
%token YAXIS_

%token GIF_
%token TIFF_
%token JPEG_
%token PNG_

%token PACKBITS_
%token DEFLATE_

# old tokens
%token DISCRETE_
%token ERRORBAR_
%token LINEARLINEAR_
%token LOGLINEAR_
%token LINEARLOG_
%token LOGLOG_
%token RANGE_
%token TYPE_
%token VIEW_

%%

#include yesno.trl
#include fonts.trl
#include numeric.trl

command : plot
 | plot {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

plot : line
 | LINE_ line
 | BAR_ bar
# backward compatibility
 | SCATTER_ scatter
 | ERROR_ errorr
 | GUI_ {ProcessCmdCVAR0 PlotGUI}
 
# File Menu
 | LOAD_ load
 | SAVE_ STRING_ {PlotCmdSave $2}
 | CURRENT_ STRING_ {PlotCmdRef $2}
 # xpa/samp only
 | DATA_ dim {PlotCmdData $2}

 | EXPORT_ export
 | BACKUP_ STRING_ {PlotCmdBackup $2}
 | RESTORE_ STRING_ {PlotCmdRestore $2}
 | PAGESETUP_ pagesetup
 | PRINT_ print
 | CLOSE_ {ProcessCmdCVAR0 PlotDestroy}
 # backward compatibility
 # used by DAX
 | STRING_ CLOSE_ {ProcessCmdCVAR0 PlotDestroy}

 # Edit Menu
 | MODE_ mode {ProcessCmdCVAR mode $2 PlotChangeMode}

 # Canvas Menu
 | ADD_ GRAPH_ graph {ProcessCmdCVAROpt PlotAddGraph $3}
 | CURRENT_ GRAPH_ INT_ {ProcessCmdCVAR graph,current $3 PlotCurrentGraph}
# backward compatibility
 | SELECT_ GRAPH_ INT_ {ProcessCmdCVAR graph,current $3 PlotCurrentGraph}
 | DELETE_ GRAPH_ {ProcessCmdCVAR0 PlotDeleteGraphCurrent}
 | LAYOUT_ layout {ProcessCmdCVAR canvas,layout $2 PlotChangeLayout}
 | LAYOUT_ STRIP_ SCALE_ numeric {ProcessCmdCVAR canvas,layout,strip,scale $4 PlotChangeLayout}
 | FONT_ fontt
 | FOREGROUND_ STRING_ {ProcessCmdCVAR canvas,foreground $2 PlotUpdateCanvasElement}
 | BACKGROUND_ STRING_ {ProcessCmdCVAR canvas,background $2 PlotUpdateAllElement}
 | GRID_ COLOR_ STRING_ {ProcessCmdCVAR canvas,grid,color $3 PlotUpdateCanvasElement}
 | THEME_ yesno {ProcessCmdCVAR canvas,theme $2 PlotUpdateAllElement}

 # Graph Menu
 | CURRENT_ DATASET_ INT_ {ProcessCmdCVAR graph,ds,current $3 PlotCurrentDataSet}
 | CURRENT_ INT_ {ProcessCmdCVAR graph,ds,current $2 PlotCurrentDataSet}
# backward compatibility
 | SELECT_ DATASET_ INT_ {ProcessCmdCVAR graph,ds,current $3 PlotCurrentDataSet}
 # backward compatibility
 | SELECT_ INT_ {ProcessCmdCVAR graph,ds,current $2 PlotCurrentDataSet}
 # backward compatibility
 | DATASET_ INT_ {ProcessCmdCVAR graph,ds,current $2 PlotCurrentDataSet}
 | DUPLICATE_ duplicate
 | DELETE_ DATASET_ {ProcessCmdCVAR0 PlotDeleteDataSetCurrent}
 # backward compatibility
 | CLEAR_ {ProcessCmdCVAR0 PlotDeleteDataSetAll}
 | STATISTICS_ yesno {ProcessCmdCVAR stats $2 PlotStats}
 | LIST_ yesno {ProcessCmdCVAR list $2 PlotList}
 | AXIS_ axis
 | LEGEND_ legend
 | TITLE_ title

 # Data Menu
 | SHOW_ yesno {PlotCmdUpdateElement graph,ds,show $2}
 | NAME_ STRING_ {ProcessCmdCVAROpt PlotDataSetName $2}

 # backward compatibility
 | GRAPH_ oldGraph
 # backward compatibility
 | VIEW_ oldView

 # backward compatibility
 # used by DAX
 | NEW_ NAME_ STRING_ STRING_ STRING_ STRING_ dim {PlotCmdNew $3; PlotCmdLine $4 $5 $6 $7}
 | NEW_ NAME_ STRING_ LINE_ STRING_ STRING_ STRING_ dim {PlotCmdNew $3; PlotCmdLine $5 $6 $7 $8}
 | NEW_ NAME_ STRING_ BAR_ STRING_ STRING_ STRING_ dim {PlotCmdNew $3; PlotCmdBar $5 $6 $7 $8}
# backward compatibility
 | NEW_ NAME_ STRING_ SCATTER_ STRING_ STRING_ STRING_ dim {PlotCmdNew $3; PlotCmdScatter $5 $6 $7 $8}
 ;

# Line
line : {PlotCmdNew {}; PlotCmdLine {} {} {} xy}
 | OPEN_ {PlotCmdNew {}; PlotCmdLine {} {} {} xy}

 | STRING_ STRING_ STRING_ dim {PlotCmdNew {}; PlotCmdLine $1 $2 $3 $4}
 | STRING_ STRING_ STRING_ INT_ {PlotCmdNew {}; PlotCmdLine $1 $2 $3 $4}
 | STRING_ STRING_ STRING_ STRING_ INT_ {PlotCmdNew $1; PlotCmdLine $2 $3 $4 $5}

 | STRING_ dim {PlotCmdNewFile $1 {}; PlotCmdLine {} {} {} $2}
 | STRING_ STRING_ dim {PlotCmdNewFile $1 $2; PlotCmdLine {} {} {} $3}
 | STRING_ STRING_ STRING_ STRING_ STRING_ dim {PlotCmdNewFile $1 $2; PlotCmdLine $3 $4 $5 $6}

# special case, is 1st arg a file? or ref?
 | STRING_ {PlotCmdNewParam1 PlotCmdLine $1}
 | STRING_ STRING_ STRING_ STRING_ dim {PlotCmdNewParam5 PlotCmdLine $1 $2 $3 $4 $5}

 | STDIN_ {PlotCmdNew {}; PlotCmdAnalysisPlotStdin line}
 | STRING_ STDIN_ {PlotCmdNew $1; PlotCmdAnalysisPlotStdin line}

 | SMOOTH_ smooth {PlotCmdUpdateElement graph,ds,line,smooth $2}
 | COLOR_ STRING_ {PlotCmdUpdateElement graph,ds,line,color $2}
 | WIDTH_ INT_ {PlotCmdUpdateElement graph,ds,line,width $2}
 | DASH_ yesno {PlotCmdUpdateElement graph,ds,line,dash $2}
 | FILL_ yesno {PlotCmdUpdateElement graph,ds,line,fill $2}
 | FILL_ COLOR_ STRING_ {PlotCmdUpdateElement graph,ds,line,fill,color $3}
 | SHAPE_ lineshape

 # backward compatibility
 # used by DAX
 | oldLine
 ;

lineshape : linesymbol {PlotCmdUpdateElement graph,ds,line,shape,symbol $1}
 | SYMBOL_ linesymbol {PlotCmdUpdateElement graph,ds,line,shape,symbol $2}
 | COLOR_ STRING_ {PlotCmdUpdateElement graph,ds,line,shape,color $2}
 | FILL_ yesno {PlotCmdUpdateElement graph,ds,line,shape,fill $2}
 ;

linesymbol : NONE_ {set _ none}
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

# Bar
bar : {PlotCmdNew {}; PlotCmdBar {} {} {} xy}
 | OPEN_ {PlotCmdNew {}; PlotCmdBar {} {} {} xy}

 | STRING_ STRING_ STRING_ dim {PlotCmdNew {}; PlotCmdBar $1 $2 $3 $4}
 | STRING_ STRING_ STRING_ INT_ {PlotCmdNew {}; PlotCmdBar $1 $2 $3 $4}
 | STRING_ STRING_ STRING_ STRING_ INT_ {PlotCmdNew $1; PlotCmdBar $2 $3 $4 $5}

 | STRING_ dim {PlotCmdNewFile $1 {}; PlotCmdBar {} {} {} $2}
 | STRING_ STRING_ dim {PlotCmdNewFile $1 $2; PlotCmdBar {} {} {} $3}
 | STRING_ STRING_ STRING_ STRING_ STRING_ dim {PlotCmdNewFile $1 $2; PlotCmdBar $3 $4 $5 $6}

# special case, is 1st arg a file? or ref?
 | STRING_ {PlotCmdNewParam1 PlotCmdBar $1}
 | STRING_ STRING_ STRING_ STRING_ dim {PlotCmdNewParam5 PlotCmdBar $1 $2 $3 $4 $5}

 | STDIN_ {PlotCmdNew {}; PlotCmdAnalysisPlotStdin bar}
 | STRING_ STDIN_ {PlotCmdNew $1; PlotCmdAnalysisPlotStdin bar}

 | BORDER_ COLOR_ STRING_ {PlotCmdUpdateElement graph,ds,bar,border,color $3}
 | BORDER_ WIDTH_ INT_ {PlotCmdUpdateElement graph,ds,bar,border,width $3}
 | FILL_ yesno {PlotCmdUpdateElement graph,ds,bar,fill $2}
 | COLOR_ STRING_ {PlotCmdUpdateElement graph,ds,bar,color $2}
 | WIDTH_ INT_ {PlotCmdUpdateElement graph,ds,bar,width $2}
 ;

# backward compatibility
# Scatter
scatter : {PlotCmdNew {}; PlotCmdScatter {} {} {} xy}
 | OPEN_ {PlotCmdNew {}; PlotCmdScatter {} {} {} xy}

 | STRING_ STRING_ STRING_ dim {PlotCmdNew {}; PlotCmdScatter $1 $2 $3 $4}
 | STRING_ STRING_ STRING_ INT_ {PlotCmdNew {}; PlotCmdScatter $1 $2 $3 $4}
 | STRING_ STRING_ STRING_ STRING_ INT_ {PlotCmdNew $1; PlotCmdScatter $2 $3 $4 $5}

 | STRING_ dim {PlotCmdNewFile $1 {}; PlotCmdScatter {} {} {} $2}
 | STRING_ STRING_ dim {PlotCmdNewFile $1 $2; PlotCmdScatter {} {} {} $3}
 | STRING_ STRING_ STRING_ STRING_ STRING_ dim {PlotCmdNewFile $1 $2; PlotCmdScatter $3 $4 $5 $6}

# special case, is 1st arg a file? or ref?
 | STRING_ {PlotCmdNewParam1 PlotCmdScatter $1}
 | STRING_ STRING_ STRING_ STRING_ dim {PlotCmdNewParam5 PlotCmdScatter $1 $2 $3 $4 $5}

 | STDIN_ {PlotCmdNew {}; PlotCmdAnalysisPlotStdin scatter}
 | STRING_ STDIN_ {PlotCmdNew $1; PlotCmdAnalysisPlotStdin scatter}

 | scattersymbol {PlotCmdUpdateElement graph,ds,scatter,symbol $1}
 | SYMBOL_ scattersymbol {PlotCmdUpdateElement graph,ds,scatter,symbol $2}
 | COLOR_ STRING_ {PlotCmdUpdateElement graph,ds,scatter,color $2}
 | FILL_ yesno {PlotCmdUpdateElement graph,ds,scatter,fill $2}
 ;

# backward compatibility
scattersymbol : CIRCLE_ {set _ circle}
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

errorr : yesno {PlotCmdUpdateElement graph,ds,error $1}
 | CAP_ yesno {PlotCmdUpdateElement graph,ds,error,cap $2}
 | COLOR_ STRING_ {PlotCmdUpdateElement graph,ds,error,color $2}
 | WIDTH_ INT_ {PlotCmdUpdateElement graph,ds,error,width $2}
 ;

load : STRING_ {PlotCmdLoad $1 xy}
 | STRING_ dim  {PlotCmdLoad $1 $2}
 ;
 
export : STRING_ {PlotCmdExport [ExtToFormat $1] $1}
 | STRING_ exportOps {PlotCmdExport [ExtToFormat $1] $1}
 | exportExt STRING_ {PlotCmdExport $1 $2}
 | exportExt STRING_ exportOps {PlotCmdExport $1 $2}
 ;

exportExt : EPS_ {set _ eps}
 | GIF_ {set _ gif}
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
 
mode : POINTER_ {set _ pointer}
 | ZOOM_ {set _ zoom}
 ;

graph : {set _ line}
 | LINE_ {set _ line}
 | BAR_ {set _ bar}
# backward compatibility
 | SCATTER_ {set _ scatter}
 ;

layout: ROW_ {set _ row}
 | COLUMN_ {set _ column}
 | GRID_ {set _ grid}
 | STRIP_ {set _ strip}
 ;

fontt : fontType FONT_ font {ProcessCmdCVAR "$1,family" $3 PlotUpdateCanvasElement}
# backward compatibility
 | fontType FAMILY_ font {ProcessCmdCVAR "$1,family" $3 PlotUpdateCanvasElement}
 | fontType FONTSIZE_ INT_ {ProcessCmdCVAR "$1,size" $3 PlotUpdateCanvasElement}
 | fontType FONTWEIGHT_ fontWeight {ProcessCmdCVAR "$1,weight" $3 PlotUpdateCanvasElement}
 | fontType FONTSLANT_ fontSlant {ProcessCmdCVAR "$1,slant" $3 PlotUpdateCanvasElement}
# backward compatibility
 | fontType FONTSTYLE_ fontStyle {PlotCmdFontStyle $1 $3}
 | fontType SIZE_ INT_ {ProcessCmdCVAR "$1,size" $3 PlotUpdateCanvasElement}
 | fontType WEIGHT_ fontWeight {ProcessCmdCVAR "$1,weight" $3 PlotUpdateCanvasElement}
 | fontType SLANT_ fontSlant {ProcessCmdCVAR "$1,slant" $3 PlotUpdateCanvasElement}
 | fontType STYLE_ fontStyle {PlotCmdFontStyle $1 $3}
 ;

fontType : TITLE_ {set _ graph,title}
 | LABELS_ {set _ canvas,axis,title}
 | NUMBERS_ {set _ canvas,axis,font}
 | LEGEND_ {set _ canvas,legend,font}
 | LEGEND_ TITLE_ {set _ canvas,legend,title}
 ;

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

title : STRING_ {ProcessCmdCVAR graph,title $1 PlotChangeTitle}
 | xy STRING_ {ProcessCmdCVAR "graph,axis,$1,title" $2 PlotChangeTitle}
# backward compatibility
 | xyaxis STRING_ {ProcessCmdCVAR "graph,axis,$1,title" $2 PlotChangeTitle}
 | LEGEND_ STRING_ {ProcessCmdCVAR graph,legend,title $2 PlotChangeTitle}
 ;

# Support
xy : 'x' {set _ x}
 | 'X' {set _ x}
 | 'y' {set _ y}
 | 'Y' {set _ y}
 ;

xyaxis : XAXIS_ {set _ x}
 | YAXIS_ {set _ y}
 ;

dim : XY_ {set _ xy}
 | XYEX_ {set _ xyex}
 | XYEY_ {set _ xyey}
 | XYEXEY_ {set _ xyexey}
 ;

# backward compatibility
# Really old stuff
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

oldLine : DISCRETE_ linesymbol {PlotCmdUpdateElement graph,ds,line,shape,symbol $2}
 | dummy2 WIDTH_ INT_ {PlotCmdUpdateElement graph,ds,line,width $3}
 | dummy2 DASH_ yesno {PlotCmdUpdateElement graph,ds,line,dash $3}
 | dummy2 STYLE_ INT_ {PlotCmdUpdateElement graph,ds,error $3}
 ;

dummy2 : STEP_
 | LINEAR_
 | QUADRATIC_
 | ERRORBAR_
 ; 

# backward compatibility
oldView : DISCRETE_ yesno {PlotCmdUpdateElement graph,ds,show $2}
 | LINE_ yesno {PlotCmdUpdateElement graph,ds,show $2; PlotCmdUpdateElement graph,ds,line,smooth linear}
 | STEP_ yesno {PlotCmdUpdateElement graph,ds,show $2; PlotCmdUpdateElement graph,ds,line,smooth step}
 | QUADRATIC_ yesno {PlotCmdUpdateElement graph,ds,show $2; PlotCmdUpdateElement graph,ds,line,smooth quadratic}
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
