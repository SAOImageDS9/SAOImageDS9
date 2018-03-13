%{
%}

#include yesno.tin
#include base.tin

%start command

%token AUTOMATIC_
%token COLUMN_
%token DIRECTION_
%token GAP_
%token GRID_
%token LAYOUT_
%token MANUAL_
%token MODE_
%token ROW_

%%

#include yesno.trl
#include base.trl


yes : YES_ {set _ 1}
 | ON_ {set _ 1}
 | TRUE_ {set _ 1}
 ;

no : NO_ {set _ 0}
 | OFF_ {set _ 0}
 | FALSE_ {set _ 0}
 ;

command : tile 
 | tile {yyclearin; YYACCEPT} STRING_
 ;

tile: {global current; set current(display) tile; DisplayMode}
 | yes {global current; set current(display) tile; DisplayMode}
 | no {global current; set current(display) single; DisplayMode}
 | MODE_ tileMode {global tile; set tile(mode) $2; DisplayMode}
 | GRID_ tileGrid
 | COLUMN_ {global tile; set tile(mode) column; DisplayMode}
 | ROW_ {global tile; set tile(mode) row; DisplayMode}
 ;

tileMode : GRID_ {set _ grid}
 | COLUMN_ {set _ column}
 | ROW_ {set _ row}
 ;

tileGrid : {global tile; set tile(mode) grid; DisplayMode}
 | MODE_ tileGridMode {global tile; set tile(grid,mode) $2; DisplayMode}
 | DIRECTION_ tileGridDir {global tile; set tile(grid,dir) $2; DisplayMode}
 | LAYOUT_ INT_ INT_ {global tile; set tile(grid,col) $2; set tile(grid,row) $3; set tile(grid,mode) manual; DisplayMode}
 | GAP_ INT_ {global tile; set tile(grid,gap) $2; DisplayMode}
 ;

tileGridMode : AUTOMATIC_ {set _ automatic}
 | MANUAL_ {set _ manual}
 ;

tileGridDir : 'x' {set _ x}
 | 'X' {set _ x}
 | 'y' {set _ y}
 | 'Y' {set _ y}
 ;

%%

proc tile::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
