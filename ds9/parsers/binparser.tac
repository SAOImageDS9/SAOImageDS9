%{
%}

#include yesno.tin
#include base.tin

%start command

%token ABOUT_
%token AVERAGE_
%token BUFFERSIZE_
%token CENTER_
%token CLOSE_
%token COLS_
%token COLSZ_
%token DEPTH_
%token FACTOR_
%token FILTER_
%token FIT_
%token FUNCTION_
%token IN_
%token LOCK_
%token MATCH_
%token OPEN_
%token OUT_
%token SUM_
%token TO_

%%

#include yesno.trl
#include base.trl

command : bin
 | bin {yyclearin; YYACCEPT} CMD_
 ;

bin : CLOSE_ {BinDestroyDialog}
 | OPEN_ {BinDialog}
 | MATCH_ {MatchBinCurrent}
 | LOCK_ yesno {global bin; set bin(lock) $2; LockBinCurrent}
 | ABOUT_ binAbout
 | BUFFERSIZE_ INT_ {global bin; set bin(buffersize) $2; ChangeBinBufferSize}
 | COLS_ cols cols {BinCols \"$2\" \"$3\" \"\"}
 | COLSZ_ cols cols cols {BinCols \"$2\" \"$3\" \"$4\"}
 | FACTOR_ binFactor
 | DEPTH_ INT_ {global bin; set bin(depth) $2; ChangeBinDepth}
 | FILTER_ binFilter
 | FUNCTION_ binFunction {global bin; set bin(function) $2; ChangeBinFunction}
 | IN_ {Bin .5 .5}
 | OUT_ {Bin 2 2}
 | TO_ binTo
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

binAbout : numeric numeric {BinAbout $1 $2}
 | CENTER_ {BinAboutCenter}
 ;

binFactor : numeric {global bin; set bin(factor) "$1 $1"; ChangeBinFactor}
 | numeric numeric {global bin; set bin(factor) "$1 $2"; ChangeBinFactor}
 ;

binFilter : {BinFilter {}}
 | STRING_ {BinFilter $1}
 ;

binFunction: AVERAGE_ {set _ average}
 | SUM_ {set _ sum}
 ;

binTo: binFactor
 | FIT_ {BinToFit}
 ;

%%

proc bin::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
