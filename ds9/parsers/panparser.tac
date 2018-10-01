%{
%}
#include def.tin

#include coordsys.tin
#include wcssys.tin
#include skyframe.tin
#include skyformat.tin
#include numeric.tin
#include sexstr.tin
#include string.tin

%start command

%token CLOSE_
%token OPEN_
%token TO_

%%

#include coordsys.trl
#include wcssys.trl
#include skyframe.trl
#include numeric.trl

command : pan
| pan {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
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
# backward compatibility
 | numeric numeric wcssys DEGREES_ {Pan $1 $2 $3 fk5}
 | numeric numeric skyframe DEGREES_ {Pan $1 $2 wcs $3}
 | numeric numeric wcssys skyframe DEGREES_ {Pan $1 $2 $3 $4}
 | SEXSTR_ SEXSTR_ SEXAGESIMAL_ {Pan $1 $2 wcs fk5}
 | SEXSTR_ SEXSTR_ wcssys SEXAGESIMAL_ {Pan $1 $2 $3 fk5}
 | SEXSTR_ SEXSTR_ skyframe SEXAGESIMAL_ {Pan $1 $2 wcs $3}
 | SEXSTR_ SEXSTR_ wcssys skyframe SEXAGESIMAL_ {Pan $1 $2 $3 $4}
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
# backward compatibility
 | numeric numeric wcssys DEGREES_ {PanTo $1 $2 $3 fk5}
 | numeric numeric skyframe DEGREES_ {PanTo $1 $2 wcs $3}
 | numeric numeric wcssys skyframe DEGREES_ {PanTo $1 $2 $3 $4}
 | SEXSTR_ SEXSTR_ SEXAGESIMAL_ {PanTo $1 $2 wcs fk5}
 | SEXSTR_ SEXSTR_ wcssys SEXAGESIMAL_ {PanTo $1 $2 $3 fk5}
 | SEXSTR_ SEXSTR_ skyframe SEXAGESIMAL_ {PanTo $1 $2 wcs $3}
 | SEXSTR_ SEXSTR_ wcssys skyframe SEXAGESIMAL_ {PanTo $1 $2 $3 $4}
 ;

%%

proc pan::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
