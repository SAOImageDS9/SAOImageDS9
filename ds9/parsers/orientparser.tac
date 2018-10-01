%{
%}
#include def.tin

#include string.tin

%start command

%token CLOSE_
%token NONE_
%token OPEN_
%token XY_

%%

command : orient 
 | orient {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

orient : orientation {ProcessCmdSet current orient $1 ChangeOrient}
 | OPEN_ {PanZoomDialog}
 | CLOSE_ {PanZoomDestroyDialog}
 ;

orientation : NONE_ {set _ none}
 | 'x' {set _ x}
 | 'X' {set _ x}
 | 'y' {set _ y}
 | 'Y' {set _ y}
 | XY_ {set _ xy}
 ;

%%

proc orient::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
