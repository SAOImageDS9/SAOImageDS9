%{

%}

%token INT_
%token REAL_
%token STRING_

%token FOOCMD_

%token CLOSE_
%token FIT_
%token IN_
%token OPEN_
%token OUT_
%token TO_

%%

commands : commands command
 | command
 ;

int : INT_ {set _ $1}
 ;

command : FOOCMD_ zoom
 ;

numeric	: int {set _ $1}
 | REAL_ {set _ $1}
 ;

zoom : STRING_ {puts "ZOOM $1"}
 | numeric {puts "ZOOM $1"}
 | numeric numeric {puts "ZOOM $1 $2"}
 | OPEN_ {puts "ZOOM open"}
 | CLOSE_ {puts "ZOOM close"}
 | IN_ {puts "ZOOM in"}
 | OUT_ {puts "ZOOM out"}
 | TO_ zoomTo
 ;

zoomTo: FIT_ {puts "ZOOM to fit"}
 | numeric {puts "ZOOM to $1"}
 | numeric numeric {puts "ZOOM to $1 $2"}
 ;

%%

proc yyerror {s} {
     puts stderr "parse error:"
     puts stderr "$::yy_buffer"
     puts stderr [format "%*s" $::yy_index ^]
}
