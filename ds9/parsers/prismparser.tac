%{
%}
#include def.tin

#include reader.tin
#include numeric.tin
#include string.tin

%start command

%token CLEAR_
%token CLOSE_
%token CURRENT_
%token EXPORT_
%token EXT_
%token FIRST_
%token GOTO_
%token HISTOGRAM_
%token IMAGE_
%token IMPORT_
%token LAST_
%token LOAD_
%token MODE_
%token NEXT_
%token OPEN_
%token PLOT_
%token PREV_

%token NEWPLOT_
%token NEWGRAPH_
%token OVERPLOT_

%token XY_
%token XYEX_
%token XYEY_
%token XYEXEY_

%token VOT_
%token XML_

%%

#include numeric.trl

command : prism
 | prism {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

prism : {PrismDialogLoad prism}
 | OPEN_ {PrismDialogLoad prism}
 | STRING_ {PrismCmdLoad $1}
 | LOAD_ STRING_ {ProcessCmdCVAROpt PrismLoad $2}

 | IMPORT_ reader STRING_ {PrismCmdImport $3 $2}
 | EXPORT_ writer STRING_ {TBLCmdSave $3 $2}

 | CLOSE_ {ProcessCmdCVAR0 PrismDestroy}
 | CLEAR_ {ProcessCmdCVAR0 PrismClear}
 | EXT_ ext
 | IMAGE_ {ProcessCmdCVAR0 PrismImage}
 | MODE_ mode
 | PLOT_ plot
 | HISTOGRAM_ histogram
 | CURRENT_ STRING_ {PrismCmdRef $2}

 | FIRST_ {ProcessCmdCVAR0 PrismTableFirst}
 | NEXT_ {ProcessCmdCVAR0 PrismTableNext}
 | PREV_ {ProcessCmdCVAR0 PrismTablePrev}
 | LAST_ {ProcessCmdCVAR0 PrismTableLast}
 | GOTO_ INT_ {ProcessCmdCVAR goto $2 PrismTableGoto}
 ;

ext : INT_ {PrismCmdExt $1}
 | STRING_ {PrismCmdExtName $1}
 ;

histogram : cols INT_ {ProcessCmdCVAR3 col $1 bar,num $2 bar,minmax 0 PrismHistogramGenerate}
 | cols INT_ numeric numeric {ProcessCmdCVAR5 col $1 bar,num $2 bar,min $3 bar,max $4 bar,minmax 1 PrismHistogramGenerate}
 ;

plot : cols cols XY_ {ProcessCmdCVAR4 xx $1 yy $2 xerr {} yerr {} PrismPlotGenerate}
 | cols cols cols XYEX_ {ProcessCmdCVAR4 xx $1 yy $2 xerr $3 yerr {} PrismPlotGenerate}
 | cols cols cols XYEY_ {ProcessCmdCVAR4 xx $1 yy $2 xerr {} yerr $3 PrismPlotGenerate}
 | cols cols cols cols XYEXEY_ {ProcessCmdCVAR4 xx $1 yy $2 xerr $3 yerr $4 PrismPlotGenerate} ;

mode : NEWPLOT_ {ProcessCmdCVAR mode newplot}
 | NEWGRAPH_ {ProcessCmdCVAR mode newgraph}
 | OVERPLOT_ {ProcessCmdCVAR mode newdataset}
 ;
 
cols : STRING_ {set _ $1}
 | colsxyz {set _ $1}
 ;

colsxyz : 'x' {set _ $1}
 | 'X' {set _ $1}
 | 'y' {set _ $1}
 | 'Y' {set _ $1}
 | 'z' {set _ $1}
 | 'Z' {set _ $1}
 ;

reader : VOT_ {set _ VOTRead}
 | XML_ {set _ VOTRead}
 | RDB_ {set _ starbase_read}
 | SB_ {set _ starbase_read}
 | STARBASE_ {set _ starbase_read}
 | CSV_ {set _ TSVRead}
 | TSV_ {set _ TSVRead}
 ;

writer : VOT_ {set _ VOTWrite}
 | XML_ {set _ VOTWrite}
 | RDB_ {set _ starbase_write}
 | SB_ {set _ starbase_write}
 | STARBASE_ {set _ starbase_write}
 | CSV_ {set _ TSVWrite}
 | TSV_ {set _ TSVWrite}
 ;

%%

proc prism::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
