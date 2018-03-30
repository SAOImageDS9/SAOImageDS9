%{
%}

#include skyframe.tin
#include coords.tin
#include numeric.tin
#include string.tin

%start command

%token LOCK_
%token MATCH_
%token NONE_

%%

#include skyframe.trl
#include coords.trl
#include numeric.trl

command : crosshair 
 | crosshair {yyclearin; YYACCEPT} STRING_
 ;

crosshair : MATCH_ match {MatchCrosshairCurrent $2}
 | LOCK_ lock {CrosshairCmdSet lock $2 LockCrosshairCurrent}
 | numeric numeric {CrosshairTo $1 $2 physical fk5}
 | numeric numeric coordsys {CrosshairTo $1 $2 $3 fk5}
 | numeric numeric wcssys {CrosshairTo $1 $2 $3 fk5}
 | numeric numeric skyframe {CrosshairTo $1 $2 wcs $3}
 | numeric numeric wcssys skyframe {CrosshairTo $1 $2 $3 $4}
 | SEXSTR_ SEXSTR_ {CrosshairTo $1 $2 wcs fk5}
 | SEXSTR_ SEXSTR_ wcssys {CrosshairTo $1 $2 $3 fk5}
 | SEXSTR_ SEXSTR_ skyframe {CrosshairTo $1 $2 wcs $3}
 | SEXSTR_ SEXSTR_ wcssys skyframe {CrosshairTo $1 $2 $3 $4}
 ;

match : coordsys {set _ $1}
 | wcssys {set _ $1}
 ;

lock : coordsys {set _ $1}
 | wcssys {set _ $1}
 | NONE_  {set _ none}
 ;

%%

proc crosshair::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
