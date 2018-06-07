%{
%}

#include matchlock.tin
#include coords.tin
#include numeric.tin
#include string.tin

%start command

%token 3D_
%token CLOSE_
%token OPEN_
%token RESET_

%%

#include matchlock.trl
#include coords.trl
#include numeric.trl

command : crop
| crop {yyclearin; YYACCEPT} STRING_
;

crop : OPEN_ {CropDialog}
 | CLOSE_ {CropDestroyDialog}
 | MATCH_ match {MatchCropCurrent $2}
 | LOCK_ lock {ProcessCmdSet crop lock $2 LockCropCurrent}
 | RESET_ {CropReset}
 | 3D_ 3d

 | numeric numeric numeric numeric {ProcessCmdCurrent frame "crop center $1 $2 physical fk5 $3 $4 physical degrees"}
 | numeric numeric numeric numeric coordsys {ProcessCmdCurrent frame "crop center $1 $2 $5 fk5 $3 $4 $5 degrees"}

 | numeric numeric numeric numeric wcssys {ProcessCmdCurrent frame "crop center $1 $2 $5 fk5 $3 $4 $5 degrees"}
 | numeric numeric numeric numeric wcssys rformat {ProcessCmdCurrent frame "crop center $1 $2 $5 fk5 $3 $4 $5 $6"}
 | numeric numeric numeric numeric skyframe {ProcessCmdCurrent frame "crop center $1 $2 wcs $5 $3 $4 wcs degrees"}
 | numeric numeric numeric numeric skyframe rformat {ProcessCmdCurrent frame "crop center $1 $2 wcs $5 $3 $4 wcs $6"}
 | numeric numeric numeric numeric wcssys skyframe {ProcessCmdCurrent frame "crop center $1 $2 $5 $6 $3 $4 $5 degrees"}
 | numeric numeric numeric numeric wcssys skyframe rformat {ProcessCmdCurrent frame "crop center $1 $2 $5 $6 $3 $4 $5 $7"}

 | SEXSTR_ SEXSTR_ numeric numeric {ProcessCmdCurrent frame "crop center $1 $2 wcs fk5 $3 $4 wcs degrees"}
 | SEXSTR_ SEXSTR_ numeric numeric wcssys {ProcessCmdCurrent frame "crop center $1 $2 $5 fk5 $3 $4 $5 degrees"}
 | SEXSTR_ SEXSTR_ numeric numeric wcssys rformat {ProcessCmdCurrent frame "crop center $1 $2 $5 fk5 $3 $4 $5 $6"}
 | SEXSTR_ SEXSTR_ numeric numeric skyframe {ProcessCmdCurrent frame "crop center $1 $2 wcs $5 $3 $4 wcs degrees"}
 | SEXSTR_ SEXSTR_ numeric numeric skyframe rformat {ProcessCmdCurrent frame "crop center $1 $2 wcs $5 $3 $4 wcs $6"}
 | SEXSTR_ SEXSTR_ numeric numeric wcssys skyframe {ProcessCmdCurrent frame "crop center $1 $2 $5 $6 $3 $4 $5 degrees"}
 | SEXSTR_ SEXSTR_ numeric numeric wcssys skyframe rformat {ProcessCmdCurrent frame "crop center $1 $2 $5 $6 $3 $4 $5 $7"}
 ;

3d : numeric numeric {ProcessCmdCurrent frame "crop 3d $1 $2 image"}
 | numeric numeric coordsys {ProcessCmdCurrent frame "crop 3d $1 $2 $3"}
 | numeric numeric wcssys {ProcessCmdCurrent frame "crop 3d $1 $2 $3"}
 ;

%%

proc crop::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
