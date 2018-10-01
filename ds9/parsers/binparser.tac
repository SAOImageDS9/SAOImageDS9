%{
%}
#include def.tin

#include yesno.tin
#include numeric.tin
#include string.tin

%start command

%token ABOUT_
%token AVERAGE_
%token BUFFERSIZE_
%token CENTER_
%token CLEAR_
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
#include numeric.trl

command : bin
 | bin {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

bin : OPEN_ {BinDialog}
 | CLOSE_ {BinDestroyDialog}
 | MATCH_ {MatchBinCurrent}
 | LOCK_ yesno {ProcessCmdSet bin lock $2 LockBinCurrent}
 | ABOUT_ about
 | BUFFERSIZE_ INT_ {ProcessCmdSet bin buffersize $2 ChangeBinBufferSize}
 | COLS_ cols cols {BinCols \"$2\" \"$3\" \"\"}
 | COLSZ_ cols cols cols {BinCols \"$2\" \"$3\" \"$4\"}
 | FACTOR_ factor
 | DEPTH_ INT_ {ProcessCmdSet bin depth $2 ChangeBinDepth}
 | FILTER_ filter {BinFilter $2}
 | FUNCTION_ function {ProcessCmdSet bin function $2 ChangeBinFunction}
 | IN_ {Bin .5 .5}
 | OUT_ {Bin 2 2}
 | TO_ to
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

about : numeric numeric {BinAbout $1 $2}
 | CENTER_ {BinAboutCenter}
 ;

factor : numeric {ProcessCmdSet bin factor "$1 $1" ChangeBinFactor}
 | numeric numeric {ProcessCmdSet bin factor "$1 $2" ChangeBinFactor}
 ;

filter : CLEAR_ {set _ {}}
 | STRING_ {set _ $1}
 ;

function: AVERAGE_ {set _ average}
 | SUM_ {set _ sum}
 ;

to: factor
 | FIT_ {BinToFit}
 ;

%%

proc bin::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
