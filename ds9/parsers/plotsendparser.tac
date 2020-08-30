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
 | MODE_ {ProcessSendCmdCVARGet mode}

# Canvas Menu
 | CURRENT_ GRAPH_ {ProcessSendCmdCVARGet graph,current}
 # backward compatibility
 | SELECT_ GRAPH_ {ProcessSendCmdCVARGet graph,current}
 | LAYOUT_ {ProcessSendCmdCVARGet canvas,layout}
 | LAYOUT_ STRIP_ SCALE_ {ProcessSendCmdCVARGet canvas,layout,strip,scale}
 | FOREGROUND_ {ProcessSendCmdCVARGet canvas,foreground}
 | BACKGROUND_ {ProcessSendCmdCVARGet canvas,background}
 | GRID_ COLOR_ {ProcessSendCmdCVARGet canvas,grid,color}
 | THEME_ {ProcessSendCmdCVARGetYesNo canvas,theme}
 | FONT_ fontt

# Graph Menu
 | CURRENT_ DATASET_ {ProcessSendCmdCVARGet graph,ds,current}
 # backward compatibility
 | SELECT_ DATASET_ {ProcessSendCmdCVARGet graph,ds,current}
 # backward compatibility
 | SELECT_ {ProcessSendCmdCVARGet graph,ds,current}
 # backward compatibility
 | DATASET_ {ProcessSendCmdCVARGet graph,ds,current}
 | STATISTICS_ {ProcessSendCmdCVAR PlotStatsGenerate}
 | LIST_ {ProcessSendCmdCVAR PlotListGenerate}
 | AXIS_ axis
 | LEGEND_ legend
 | TITLE_ title

# Data Menu
 | SHOW_ {ProcessSendCmdCVARGetYesNo graph,ds,show}
 | NAME_ {ProcessSendCmdCVARGet graph,ds,name}
 ;
 
line : SMOOTH_ {ProcessSendCmdCVARGet graph,ds,line,smooth}
 | COLOR_ {ProcessSendCmdCVARGet graph,ds,line,color}
 | WIDTH_ {ProcessSendCmdCVARGet graph,ds,line,width}
 | DASH_ {ProcessSendCmdCVARGetYesNo graph,ds,line,dash}
 | FILL_ {ProcessSendCmdCVARGetYesNo graph,ds,line,fill}
 | FILL_ COLOR_ {ProcessSendCmdCVARGet graph,ds,line,fill,color}
 | SHAPE_ lineshape
 ;

lineshape : {ProcessSendCmdCVARGet graph,ds,line,shape,symbol}
 | SYMBOL_ {ProcessSendCmdCVARGet graph,ds,line,shape,symbol}
 | COLOR_ {ProcessSendCmdCVARGet graph,ds,line,shape,color}
 | FILL_ {ProcessSendCmdCVARGetYesNo graph,ds,line,shape,fill}
 ;

bar : BORDER_ COLOR_ {ProcessSendCmdCVARGet graph,ds,bar,border,color}
 | BORDER_ WIDTH_ {ProcessSendCmdCVARGet graph,ds,bar,border,width}
 | FILL_ {ProcessSendCmdCVARGetYesNo graph,ds,bar,fill}
 | COLOR_ {ProcessSendCmdCVARGet graph,ds,bar,color}
 | WIDTH_ {ProcessSendCmdCVARGet graph,ds,bar,width}
 ;

scatter : {ProcessSendCmdCVARGet graph,ds,scatter,symbol}
 | SYMBOL_ {ProcessSendCmdCVARGet graph,ds,scatter,symbol}
 | COLOR_ {ProcessSendCmdCVARGet graph,ds,scatter,color}
 | FILL_ {ProcessSendCmdCVARGetYesNo graph,ds,scatter,fill}
 ;

errorr : {ProcessSendCmdCVARGetYesNo graph,ds,error}
 | CAP_ {ProcessSendCmdCVARGetYesNo graph,ds,error,cap}
 | COLOR_ {ProcessSendCmdCVARGet graph,ds,error,color}
 | WIDTH_ {ProcessSendCmdCVARGet graph,ds,error,width}
 ;

fontt : fontType FONT_ {ProcessSendCmdCVARGet "$1,family"}
# backward compatibility
 | fontType FAMILY_ {ProcessSendCmdCVARGet "$1,family"}
 | fontType FONTSIZE_ {ProcessSendCmdCVARGet "$1,size"}
 | fontType FONTWEIGHT_ {ProcessSendCmdCVARGet "$1,weight"}
 | fontType FONTSLANT_ {ProcessSendCmdCVARGet "$1,slant"}
# backward compatibility
 | fontType FONTSTYLE_ {ProcessSendCmdCVARGet "$1,weight"}
 | fontType SIZE_ {ProcessSendCmdCVARGet "$1,size"}
 | fontType WEIGHT_ {ProcessSendCmdCVARGet "$1,weight"}
 | fontType SLANT_ {ProcessSendCmdCVARGet "$1,slant"}
 | fontType STYLE_ {ProcessSendCmdCVARGet "$1,weight"}
 ;

fontType : TITLE_ {set _ canvas,title}
 | LABELS_ {set _ canvas,axis,title}
 | NUMBERS_ {set _ canvas,axis,font}
 | LEGEND_ {set _ canvas,legend,font}
 | LEGEND_ TITLE_ {set _ canvas,legend,title}
 ;

axis : xy GRID_ {ProcessSendCmdCVARGetYesNo "graph,axis,$1,grid"}
 | xy LOG_ {ProcessSendCmdCVARGetYesNo "graph,axis,$1,log"}
 | xy FLIP_ {ProcessSendCmdCVARGetYesNo "graph,axis,$1,flip"}
 | xy AUTO_ {ProcessSendCmdCVARGetYesNo "graph,axis,$1,auto"}
 | xy MIN_ {ProcessSendCmdCVARGet "graph,axis,$1,min"}
 | xy MAX_ {ProcessSendCmdCVARGet "graph,axis,$1,max"}
 | xy FORMAT_ {ProcessSendCmdCVARGet "graph,axis,$1,format"}
 ;

legend : {ProcessSendCmdCVARGetYesNo graph,legend}
 | POSITION_ {ProcessSendCmdCVARGet graph,legend,position}
 ;
 
title : {ProcessSendCmdCVARGet graph,title}
 | xy {ProcessSendCmdCVARGet "graph,axis,$1,title"}
# backward compatibility
 | xyaxis {ProcessSendCmdCVARGet "graph,axis,$1,title"}
 | LEGEND_ {ProcessSendCmdCVARGet graph,legend,title}
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
