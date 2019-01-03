%{
%}
#include def.tin

#include yesno.tin
#include int.tin
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

#include yes-no.trl

command : tile 
 | tile {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

tile: {ProcessCmdSet current display tile DisplayMode}
 | yes {ProcessCmdSet current display tile DisplayMode}
 | no {ProcessCmdSet current display single DisplayMode}
 | MODE_ tileMode {ProcessCmdSet tile mode $2 DisplayMode}
 | GRID_ tileGrid
 | COLUMN_ {ProcessCmdSet tile mode column DisplayMode}
 | ROW_ {ProcessCmdSet tile mode row DisplayMode}
 ;

tileMode : GRID_ {set _ grid}
 | COLUMN_ {set _ column}
 | ROW_ {set _ row}
 ;

tileGrid : {ProcessCmdSet tile mode grid DisplayMode}
 | MODE_ tileGridMode {ProcessCmdSet tile grid,mode $2 DisplayMode}
 | DIRECTION_ tileGridDir {ProcessCmdSet tile grid,dir $2 DisplayMode}
 | LAYOUT_ INT_ INT_ {ProcessCmdSet tile grid,col $2; ProcessCmdSet tile grid,row $3; ProcessCmdSet tile grid,mode manual DisplayMode}
 | GAP_ INT_ {ProcessCmdSet tile grid,gap $2 DisplayMode}
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
