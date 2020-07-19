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
%token HISTOGRAM_
%token IMAGE_
%token LOAD_
%token OPEN_
%token PLOT_

%token LINE_
%token BAR_
%token SCATTER_

%token NEW_
%token OVER_

%%

#include numeric.trl

command : prism
 | prism {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;


prism : {PrismDialog prism}
 | OPEN_ {PrismDialog prism}
 | STRING_ {PrismCmdLoad $1}
 | LOAD_ STRING_ {PrismCmdLoad $2}
 | CLOSE_ {ProcessCmdCVAR0 PrismDestroy}
 | CLEAR_ {ProcessCmdCVAR0 PrismClear}
 | EXT_ ext
 | IMAGE_ {ProcessCmdCVAR0 PrismImage}
 | PLOT_ plot
 | HISTOGRAM_ histogram
 | CURRENT_ STRING_ {PrismCmdRef $2}
 ;

ext : INT_ {PrismCmdExt $1}
 | STRING_ {PrismCmdExtName $1}
 ;

histogram : cols INT_ mode {ProcessCmdCVAR3 bar,col $1 bar,num $2 plot,mode $3 PrismHistogramGenerate}
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

%%

proc prism::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
