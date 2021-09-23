%{
%}
#include def.tin

#include yesno.tin
#include fonts.tin
#include numeric.tin
#include string.tin

%start command

%token CLOSE_
%token GRID_
%token HORIZONTAL_
%token OPEN_
%token VERTICAL_

%%

#include yesno.trl
#include fonts.trl
#include numeric.trl

command : graph
 | graph {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

graph : OPEN_ {GraphDialog}
 | CLOSE_ {GraphDestroyDialog}
 | type GRID_ yesno {ProcessCmdSet graph $1,grid $3 UpdateGraphsGrid}
 ;

type : HORIZONTAL_ {set _ horz}
 | VERTICAL_ {set _ vert}
 ;

%%

proc graph::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
