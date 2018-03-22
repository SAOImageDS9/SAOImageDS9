%{
%}

#include skyformat.tin
#include skyframe.tin
#include coords.tin
#include numeric.tin
#include string.tin

%start command

%token 3D_
%token CLOSE_
%token LOCK_
%token MATCH_
%token NONE_
%token OPEN_
%token RESET_

%%

#include skyformat.trl
#include skyframe.trl
#include coords.trl
#include numeric.trl

command : crop
| crop {yyclearin; YYACCEPT} STRING_
;

crop : OPEN_ {CropDialog}
 | CLOSE_ {CropDestroyDialog}
 | MATCH_ match {MatchCropCurrent $2}
 | LOCK_ lock {CropCmdLock $2}
 | RESET_ {CropReset}
 | 3D_ 3d

 | numeric numeric numeric numeric {global current; $current(frame) crop center $1 $2 physical fk5 $3 $4 physical degrees}
 | numeric numeric numeric numeric coordsys {global current; $current(frame) crop center $1 $2 $5 fk5 $3 $4 $5 degrees}

 | numeric numeric numeric numeric wcssys {global current; $current(frame) crop center $1 $2 $5 fk5 $3 $4 $5 degrees}
 | numeric numeric numeric numeric wcssys skyformat {global current; $current(frame) crop center $1 $2 $5 fk5 $3 $4 $5 $6}
 | numeric numeric numeric numeric skyframe {global current; $current(frame) crop center $1 $2 wcs $5 $3 $4 wcs degrees}
 | numeric numeric numeric numeric skyframe skyformat {global current; $current(frame) crop center $1 $2 wcs $5 $3 $4 wcs $6}
 | numeric numeric numeric numeric wcssys skyframe {global current; $current(frame) crop center $1 $2 $5 $6 $3 $4 $5 degrees}
 | numeric numeric numeric numeric wcssys skyframe skyformat {global current; $current(frame) crop center $1 $2 $5 $6 $3 $4 $5 $7}

 | SEXSTR_ SEXSTR_ numeric numeric {global current; $current(frame) crop center $1 $2 wcs fk5 $3 $4 wcs degrees}
 | SEXSTR_ SEXSTR_ numeric numeric wcssys {global current; $current(frame) crop center $1 $2 $5 fk5 $3 $4 $5 degrees}
 | SEXSTR_ SEXSTR_ numeric numeric wcssys skyformat {global current; $current(frame) crop center $1 $2 $5 fk5 $3 $4 $5 $6}
 | SEXSTR_ SEXSTR_ numeric numeric skyframe {global current; $current(frame) crop center $1 $2 wcs $5 $3 $4 wcs degrees}
 | SEXSTR_ SEXSTR_ numeric numeric skyframe skyformat {global current; $current(frame) crop center $1 $2 wcs $5 $3 $4 wcs $6}
 | SEXSTR_ SEXSTR_ numeric numeric wcssys skyframe {global current; $current(frame) crop center $1 $2 $5 $6 $3 $4 $5 degrees}
 | SEXSTR_ SEXSTR_ numeric numeric wcssys skyframe skyformat {global current; $current(frame) crop center $1 $2 $5 $6 $3 $4 $5 $7}
 ;

match : coordsys {set _ $1}
 | wcssys {set _ $1}
 ;

lock : coordsys {set _ $1}
 | wcssys {set _ $1}
 | NONE_ {set _ none}
 ;

3d : numeric numeric {global current; $current(frame) crop 3d $1 $2 image}
 | numeric numeric coordsys {global current; $current(frame) crop 3d $1 $2 $3}
 | numeric numeric wcssys {global current; $current(frame) crop 3d $1 $2 $3}
 ;

%%

proc crop::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
