%{
%}
#include def.tin

#include font.tin

%start plotsend

%token AUTO_
%token AXIS_
%token BACKGROUND_
%token BAR_
%token BORDER_
%token CAP_
%token COLOR_
%token CURRENT_
%token DASH_
%token DATASET_
%token ERROR_
%token FAMILY_
%token FILL_
%token FLIP_
%token FOREGROUND_
%token FORMAT_
%token GRAPH_
%token GRID_
%token LABELS_
%token LAYOUT_
%token LEGEND_
%token LINE_
%token LIST_
%token LOG_
%token MAX_
%token MIN_
%token MODE_
%token NUMBERS_
%token NAME_
%token POSITION_
%token SCALE_
%token SCATTER_
%token SELECT_
%token SHAPE_
%token SHOW_
%token SIZE_
%token SLANT_
%token SMOOTH_
%token STATISTICS_
%token STRIP_
%token STYLE_
%token SYMBOL_
%token THEME_
%token TITLE_
%token WEIGHT_
%token WIDTH_
%token XAXIS_
%token YAXIS_

%%

plotsend : {ProcessSendCmdGet iap plots}
 | line
 | LINE_ line
 | BAR_ bar
 | SCATTER_ scatter
 | ERROR_ errorr
 | CURRENT_ {PlotSendCmdRef}
 
# Edit Menu
 | MODE_ {PlotSendCmdCVARGet mode}

# Canvas Menu
 | CURRENT_ GRAPH_ {PlotSendCmdCVARGet graph,current}
 # backward compatibility
 | SELECT_ GRAPH_ {PlotSendCmdCVARGet graph,current}
 | LAYOUT_ {PlotSendCmdCVARGet canvas,layout}
 | LAYOUT_ STRIP_ SCALE_ {PlotSendCmdCVARGet canvas,layout,strip,scale}
 | FOREGROUND_ {PlotSendCmdCVARGet canvas,foreground}
 | BACKGROUND_ {PlotSendCmdCVARGet canvas,background}
 | GRID_ COLOR_ {PlotSendCmdCVARGet canvas,grid,color}
 | THEME_ {PlotSendCmdCVARGetYesNo canvas,theme}
 | FONT_ fontt

# Graph Menu
 | CURRENT_ DATASET_ {PlotSendCmdCVARGet graph,ds,current}
 # backward compatibility
 | SELECT_ DATASET_ {PlotSendCmdCVARGet graph,ds,current}
 # backward compatibility
 | SELECT_ {PlotSendCmdCVARGet graph,ds,current}
 # backward compatibility
 | DATASET_ {PlotSendCmdCVARGet graph,ds,current}
 | STATISTICS_ {PlotSendCmdCVAR PlotStatsGenerate}
 | LIST_ {PlotSendCmdCVAR PlotListGenerate}
 | AXIS_ axis
 | LEGEND_ legend
 | TITLE_ title

# Data Menu
 | SHOW_ {PlotSendCmdCVARGetYesNo graph,ds,show}
 | NAME_ {PlotSendCmdCVARGet graph,ds,name}
 ;
 
line : SMOOTH_ {PlotSendCmdCVARGet graph,ds,line,smooth}
 | COLOR_ {PlotSendCmdCVARGet graph,ds,line,color}
 | WIDTH_ {PlotSendCmdCVARGet graph,ds,line,width}
 | DASH_ {PlotSendCmdCVARGetYesNo graph,ds,line,dash}
 | FILL_ {PlotSendCmdCVARGetYesNo graph,ds,line,fill}
 | FILL_ COLOR_ {PlotSendCmdCVARGet graph,ds,line,fill,color}
 | SHAPE_ lineshape
 ;

lineshape : {PlotSendCmdCVARGet graph,ds,line,shape,symbol}
 | SHAPE_ {PlotSendCmdCVARGet graph,ds,line,shape,symbol}
 | SYMBOL_ {PlotSendCmdCVARGet graph,ds,line,shape,symbol}
 | SIZE_ {PlotSendCmdCVARGet graph,ds,line,shape,size}
 | COLOR_ {PlotSendCmdCVARGet graph,ds,line,shape,color}
 | FILL_ {PlotSendCmdCVARGetYesNo graph,ds,line,shape,fill}
 ;

bar : BORDER_ COLOR_ {PlotSendCmdCVARGet graph,ds,bar,border,color}
 | BORDER_ WIDTH_ {PlotSendCmdCVARGet graph,ds,bar,border,width}
 | FILL_ {PlotSendCmdCVARGetYesNo graph,ds,bar,fill}
 | COLOR_ {PlotSendCmdCVARGet graph,ds,bar,color}
 | WIDTH_ {PlotSendCmdCVARGet graph,ds,bar,width}
 ;

scatter : {PlotSendCmdCVARGet graph,ds,scatter,shape,symbol}
 | SHAPE_ {PlotSendCmdCVARGet graph,ds,scatter,shape,symbol}
 | SYMBOL_ {PlotSendCmdCVARGet graph,ds,scatter,shape,symbol}
 | SIZE_ {PlotSendCmdCVARGet graph,ds,scatter,shape,size}
 | COLOR_ {PlotSendCmdCVARGet graph,ds,scatter,shape,color}
 | FILL_ {PlotSendCmdCVARGetYesNo graph,ds,scatter,shape,fill}
 ;

errorr : {PlotSendCmdCVARGetYesNo graph,ds,error}
 | CAP_ {PlotSendCmdCVARGetYesNo graph,ds,error,cap}
 | COLOR_ {PlotSendCmdCVARGet graph,ds,error,color}
 | WIDTH_ {PlotSendCmdCVARGet graph,ds,error,width}
 ;

fontt : fontType FONT_ {PlotSendCmdCVARGet "$1,family"}
# backward compatibility
 | fontType FAMILY_ {PlotSendCmdCVARGet "$1,family"}
 | fontType FONTSIZE_ {PlotSendCmdCVARGet "$1,size"}
 | fontType FONTWEIGHT_ {PlotSendCmdCVARGet "$1,weight"}
 | fontType FONTSLANT_ {PlotSendCmdCVARGet "$1,slant"}
# backward compatibility
 | fontType FONTSTYLE_ {PlotSendCmdCVARGet "$1,weight"}
 | fontType SIZE_ {PlotSendCmdCVARGet "$1,size"}
 | fontType WEIGHT_ {PlotSendCmdCVARGet "$1,weight"}
 | fontType SLANT_ {PlotSendCmdCVARGet "$1,slant"}
 | fontType STYLE_ {PlotSendCmdCVARGet "$1,weight"}
 ;

fontType : TITLE_ {set _ canvas,title}
 | LABELS_ {set _ canvas,axis,title}
 | NUMBERS_ {set _ canvas,axis,font}
 | LEGEND_ {set _ canvas,legend,font}
 | LEGEND_ TITLE_ {set _ canvas,legend,title}
 ;

axis : xy GRID_ {PlotSendCmdCVARGetYesNo "graph,axis,$1,grid"}
 | xy LOG_ {PlotSendCmdCVARGetYesNo "graph,axis,$1,log"}
 | xy FLIP_ {PlotSendCmdCVARGetYesNo "graph,axis,$1,flip"}
 | xy AUTO_ {PlotSendCmdCVARGetYesNo "graph,axis,$1,auto"}
 | xy MIN_ {PlotSendCmdCVARGet "graph,axis,$1,min"}
 | xy MAX_ {PlotSendCmdCVARGet "graph,axis,$1,max"}
 | xy FORMAT_ {PlotSendCmdCVARGet "graph,axis,$1,format"}
 ;

legend : {PlotSendCmdCVARGetYesNo graph,legend}
 | POSITION_ {PlotSendCmdCVARGet graph,legend,position}
 ;
 
title : {PlotSendCmdCVARGet graph,title}
 | xy {PlotSendCmdCVARGet "graph,axis,$1,title"}
# backward compatibility
 | xyaxis {PlotSendCmdCVARGet "graph,axis,$1,title"}
 | LEGEND_ {PlotSendCmdCVARGet graph,legend,title}
 ;

xy : 'x' {set _ x}
 | 'X' {set _ x}
 | 'y' {set _ y}
 | 'Y' {set _ y}
 ;

xyaxis : XAXIS_ {set _ x}
 | YAXIS_ {set _ y}
 ;

%%

proc plotsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
