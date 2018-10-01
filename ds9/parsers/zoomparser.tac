%{
%}
#include def.tin

#include numeric.tin
#include string.tin

%start command

%token CLOSE_
%token IN_
%token FIT_
%token OPEN_
%token OUT_
%token TO_

%%

#include numeric.trl

command : zoom 
 | zoom {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

zoom : OPEN_ {PanZoomDialog}
 | CLOSE_ {PanZoomDestroyDialog}
 | IN_ {Zoom 2 2}
 | OUT_ {Zoom .5 .5}
 | TO_ zoomTo
 | numeric {Zoom $1 $1}
 | numeric numeric {Zoom $1 $2}
 ;

zoomTo: FIT_ {ZoomToFit}
 | numeric {ZoomTo $1 $1}
 | numeric numeric {ZoomTo $1 $2}
 ;

%%

proc zoom::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
