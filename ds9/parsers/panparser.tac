%{
%}

%start command

#include coords.tin
#include base.tin

%token CLOSE_
%token OPEN_
%token TO_

%%

#include coords.trl
#include base.trl

command : pan
| pan {yyclearin; YYACCEPT} STRING_
;

pan : OPEN_ {PanZoomDialog}
 | CLOSE_ {PanZoomDestroyDialog}
 | TO_ panto
 | numeric numeric {Pan $1 $2 physical fk5}
 | numeric numeric coordsys {Pan $1 $2 $3 fk5}
 | numeric numeric wcssys {Pan $1 $2 $3 fk5}
 | numeric numeric skyframe {Pan $1 $2 wcs $3}
 | numeric numeric wcssys skyframe {Pan $1 $2 $3 $4}
 | SEXSTR_ SEXSTR_ {Pan $1 $2 wcs fk5}
 | SEXSTR_ SEXSTR_ wcssys {Pan $1 $2 $3 fk5}
 | SEXSTR_ SEXSTR_ skyframe {Pan $1 $2 wcs $3}
 | SEXSTR_ SEXSTR_ wcssys skyframe {Pan $1 $2 $3 $4}
 ;

panto : numeric numeric {PanTo $1 $2 physical fk5}
 | numeric numeric coordsys {PanTo $1 $2 $3 fk5}
 | numeric numeric wcssys {PanTo $1 $2 $3 fk5}
 | numeric numeric skyframe {PanTo $1 $2 wcs $3}
 | numeric numeric wcssys skyframe {PanTo $1 $2 $3 $4}
 | SEXSTR_ SEXSTR_ {PanTo $1 $2 wcs fk5}
 | SEXSTR_ SEXSTR_ wcssys {PanTo $1 $2 $3 fk5}
 | SEXSTR_ SEXSTR_ skyframe {PanTo $1 $2 wcs $3}
 | SEXSTR_ SEXSTR_ wcssys skyframe {PanTo $1 $2 $3 $4}
 ;

%%

proc pan::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     
     Error "$msg: [lindex $yy_current_buffer [expr $yycnt-1]]"
}
