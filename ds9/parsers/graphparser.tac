%{
%}
#include def.tin

#include yesno.tin
#include fonts.tin
#include int.tin
#include string.tin

%start command

%token AVERAGE_
%token CLOSE_
%token GRID_
%token LOG_
%token METHOD_
%token OPEN_
%token SIZE_
%token SUM_
%token THICKNESS_

%%

#include yesno.trl
#include fonts.trl

command : graph
 | graph {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

graph : OPEN_ {GraphDialog}
 | CLOSE_ {GraphDestroyDialog}
 | GRID_ yesno {ProcessCmdSet graph grid $2 UpdateGraphsGrid}
 | LOG_ yesno {ProcessCmdSet graph log $2 UpdateGraphsGrid}
 | METHOD_ method {ProcessCmdSet graph method $2 UpdateGraphsMethod}
 | FONT_ font {ProcessCmdSet graph font $2 UpdateGraphsFont}
 | FONTSIZE_ INT_ {ProcessCmdSet graph font,size $2 UpdateGraphsFont}
 | FONTWEIGHT_ fontWeight {ProcessCmdSet graph font,weight $2 UpdateGraphsFont}
 | FONTSLANT_ fontSlant {ProcessCmdSet graph font,slant $2 UpdateGraphsFont}
 | SIZE_ INT_ {ProcessCmdSet graph size $2 LayoutFrames}
 | THICKNESS_ INT_ {ProcessCmdSet graph thick $2 LayoutFrames}
 ;

method : AVERAGE_ {set _ average}
 | SUM_ {set _ sum}
 ;

%%

proc graph::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
