%{
%}

%token INT_
%token REAL_
%token STRING_

%start command

%token CLOSE_
%token IN_
%token FIT_
%token OPEN_
%token OUT_
%token TO_

%%

command : zoom
 | zoom {yyclearin; YYACCEPT} STRING_
 ;

numeric	: INT_ {set _ $1}
 | REAL_ {set _ $1}
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

     Error "$msg: [lindex yy_current_buffer [expr $yycnt-1]]"
}
