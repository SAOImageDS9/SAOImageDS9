%{
%}
#include def.tin

#include numeric.tin
#include string.tin

%start command

%token CLEAR_
%token CLOSE_
%token CURRENT_
%token EXT_
%token FIRST_
%token GOTO_
%token HISTOGRAM_
%token IMAGE_
%token IMPORT_
%token LAST_
%token LOAD_
%token NEXT_
%token OPEN_
%token PLOT_
%token PREV_

%token LINE_
%token BAR_
%token SCATTER_

%token NEW_
%token OVER_

%token VOT_
%token XML_
%token SB_
%token STARBASE_
%token RDB_
%token CSV_
%token TSV_

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
 | CLOSE_ {ProcessCmdCVAR0 PrismDestroy}
 | CLEAR_ {ProcessCmdCVAR0 PrismClear}
 | EXT_ ext
 | IMAGE_ {ProcessCmdCVAR0 PrismImage}
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

histogram : cols INT_ {ProcessCmdCVAR3 bar,col $1 bar,num $2 bar,minmax 0 PrismHistogramGenerate}
 | cols INT_ numeric numeric {ProcessCmdCVAR5 bar,col $1 bar,num $2 bar,min $3 bar,max $4 bar,minmax 1 PrismHistogramGenerate}
 ;

plot : cols cols type mode {ProcessCmdCVAR6 xx $1 yy $2 xerr {} yerr {} plot,type $3 plot,mode $4 PrismPlotGenerate}
 | cols cols cols type mode {ProcessCmdCVAR6 xx $1 yy $2 xerr {} yerr $3 plot,type $4 plot,mode $5 PrismPlotGenerate}
 | cols cols cols cols type mode {ProcessCmdCVAR6 xx $1 yy $2 xerr $3 yerr $4 plot,type $5 plot,mode $6 PrismPlotGenerate} ;

type : LINE_ {set _ line}
 | BAR_ {set _ bar}
 | SCATTER_ {set _ scatter}
 ;

mode : NEW_ {set _ newplot}
 | OVER_ {set _ overplot}
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

reader : XML_ {set _ VOTRead}
 | VOT_ {set _ VOTRead}
 | RDB_ {set _ starbase_read}
 | SB_ {set _ starbase_read}
 | STARBASE_ {set _ starbase_read}
 | CSV_ {set _ TSVRead}
 | TSV_ {set _ TSVRead}
 ;
 
%%

proc prism::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
