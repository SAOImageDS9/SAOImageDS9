%{
%}
#include def.tin

#include font.tin
#include string.tin

%start plotsend

%token AUTO_
%token AXIS_
%token AXESNUMBERS_
%token AXESTITLE_
%token BACKGROUND_
%token BARMODE_
%token CAP_
%token COLOR_
%token DASH_
%token DATASET_
%token ERROR_
%token ERRORBAR_
%token FAMILY_
%token FILL_
%token FILLCOLOR_
%token FLIP_
%token FORMAT_
%token GRAPH_
%token GRID_
%token LABELS_
%token LAYOUT_
%token LEGEND_
%token LEGENDTITLE_
%token LIST_
%token LOG_
%token MAX_
%token MIN_
%token MODE_
%token NUMBERS_
%token NAME_
%token POSITION_
%token RELIEF_
%token SCALE_
%token SELECT_
%token SHAPE_
%token SHOW_
%token SIZE_
%token SLANT_
%token SMOOTH_
%token STATS_
%token STATISTICS_
%token STRIP_
%token STYLE_
%token TITLE_
%token WEIGHT_
%token WIDTH_
%token XAXIS_
%token YAXIS_

%%

plotsend : {ProcessSendCmdGet iap plots}
 | STATS_ {ProcessSendCmdCVAR PlotStatsGenerate}
 # backward compatibility
 | STATISTICS_ {ProcessSendCmdCVAR PlotStatsGenerate}
 | LIST_ {ProcessSendCmdCVAR PlotListGenerate}
 | MODE_ {ProcessSendCmdCVARGet mode}
 | AXIS_ axis
 | BACKGROUND_ {ProcessSendCmdCVARGet background}
 | LEGEND_ legend
 | FONT_ fontt
 | TITLE_ title
 # backward compatibility
 | BARMODE_ {ProcessSendCmdTxt normal}
 | SHOW_ {ProcessSendCmdCVARYesNo graph,ds,show}
 | COLOR_ {ProcessSendCmdCVARGet graph,ds,color}
 | FILL_ {ProcessSendCmdCVARGet graph,ds,fill}
 | FILLCOLOR_ {ProcessSendCmdCVARGet graph,ds,fill,color}
 | ERROR_ errorr
 # backward compatibility
 | ERRORBAR_ errorr
 | NAME_ {ProcessSendCmdCVARGet graph,ds,name}
 | SHAPE_ shape
 # backward compatibility
 | RELIEF_ {ProcessSendCmdTxt flat}
 | SMOOTH_ {ProcessSendCmdCVARGet graph,ds,smooth}
 | WIDTH_ {ProcessSendCmdCVARGet graph,ds,width}
 | DASH_ {ProcessSendCmdCVARYesNo graph,ds,dash}
 | LAYOUT_ {ProcessSendCmdCVARGet layout}
 | LAYOUT_ STRIP_ SCALE_ {ProcessSendCmdCVARGet layout,strip,scale}
 | SELECT_ select
 # backward compatibility
 | DATASET_ {ProcessSendCmdCVARGet graph,ds,current}
 ;
 
select : DATASET_ {ProcessSendCmdCVARGet graph,ds,current}
 | GRAPH_ {ProcessSendCmdCVARGet graph,current}
 # backward compatibility
 | {ProcessSendCmdCVARGet graph,ds,current}
 ;

axis : xy GRID_ {ProcessSendCmdCVARYesNo "graph,axis,$1,grid"}
 | xy LOG_ {ProcessSendCmdCVARYesNo "graph,axis,$1,log"}
 | xy FLIP_ {ProcessSendCmdCVARYesNo "graph,axis,$1,flip"}
 | xy AUTO_ {ProcessSendCmdCVARYesNo "graph,axis,$1,auto"}
 | xy MIN_ {ProcessSendCmdCVARGet "graph,axis,$1,min"}
 | xy MAX_ {ProcessSendCmdCVARGet "graph,axis,$1,max"}
 | xy FORMAT_ {ProcessSendCmdCVARGet "graph,axis,$1,format"}
 ;

legend : {ProcessSendCmdCVARYesNo graph,legend}
 | POSITION_ {ProcessSendCmdCVARGet graph,legend,position}
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

title : {ProcessSendCmdCVARGet graph,title}
 | xy {ProcessSendCmdCVARGet "graph,axis,$1,title"}
 | xyaxis {ProcessSendCmdCVARGet "graph,axis,$1,title"}
 | LEGEND_ {ProcessSendCmdCVARGet graph,legend,title}
 ;

errorr : {ProcessSendCmdCVARYesNo graph,ds,error}
 | CAP_ {ProcessSendCmdCVARYesNo graph,ds,error,cap}
 | COLOR_ {ProcessSendCmdCVARGet graph,ds,error,color}
 | WIDTH_ {ProcessSendCmdCVARGet graph,ds,error,width}
 ;

shape : {ProcessSendCmdCVARGet graph,ds,shape,symbol}
 | FILL_ {ProcessSendCmdCVARYesNo graph,ds,shape,fill}
 | COLOR_ {ProcessSendCmdCVARGet graph,ds,shape,color}
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

%%

proc plotsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
