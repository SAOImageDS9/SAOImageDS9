%{
%}

#include matchlock.tin
#include coords.tin
#include numeric.tin
#include string.tin

%start command

%%

#include matchlock.trl
#include coords.trl
#include numeric.trl

command : crosshair 
 | crosshair {yyclearin; YYACCEPT} STRING_
 ;

crosshair : MATCH_ match {MatchCrosshairCurrent $2}
 | LOCK_ lock {ProcessCmdSet crosshair lock $2 LockCrosshairCurrent}
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

%%

proc crosshair::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
