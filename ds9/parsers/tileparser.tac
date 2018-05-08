%{
%}

#include yesno.tin
#include numeric.tin
#include string.tin

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
#include numeric.trl

command : tile 
 | tile {yyclearin; YYACCEPT} STRING_
 ;

tile: {CurrentCmdSet display tile DisplayMode}
 | yes {CurrentCmdSet display tile DisplayMode}
 | no {CurrentCmdSet display single DisplayMode}
 | MODE_ tileMode {TileCmdSet mode $2 DisplayMode}
 | GRID_ tileGrid
 | COLUMN_ {TileCmdSet mode column DisplayMode}
 | ROW_ {TileCmdSet mode row DisplayMode}
 ;

tileMode : GRID_ {set _ grid}
 | COLUMN_ {set _ column}
 | ROW_ {set _ row}
 ;

tileGrid : {TileCmdSet mode grid DisplayMode}
 | MODE_ tileGridMode {TileCmdSet grid,mode $2 DisplayMode}
 | DIRECTION_ tileGridDir {TileCmdSet grid,dir $2 DisplayMode}
 | LAYOUT_ INT_ INT_ {TileCmdSet grid,col $2; TileCmdSet grid,row $3; TileCmdSetgrid,mode manual DisplayMode}
 | GAP_ INT_ {TileCmdSet grid,gap $2 DisplayMode}
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
