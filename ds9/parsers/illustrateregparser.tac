%{
%}

#include def.tin

#include coordsys.tin

#include yesno.tin
#include numeric.tin
#include string.tin

%start start

%token HASH_
%token DEBUG_
%token VERSION_
%token GLOBAL_

%token COLOR_
%token WIDTH_
%token FILL_
%token DASH_
%token FONT_

%token CIRCLE_
%token ELLIPSE_
%token BOX_
%token POLYGON_
%token LINE_
%token TEXT_

%token WCS_

%%

#include yesno.trl
#include numeric.trl

start : commands
 ;

commands : commands command
 | command
 ;

command : DEBUG_ yesno
 | VERSION_ {puts "DS9 Regions File 4.2"}
 | shape
 ;

shape : CIRCLE_ bp numeric sp numeric sp numeric ep
 {IllustrateCreateCircle $3 $5 $7 red 0 1 0}
 | ELLIPSE_ bp numeric sp numeric sp numeric sp numeric bp
 {IllustrateCreateEllipse $3 $5 $7 $9 red 0 1 0}
 | BOX_ bp numeric sp numeric sp numeric sp numeric bp
 {IllustrateCreateBox $3 $5 $7 $9 red 0 1 0}
 | POLYGON_ bp numeric sp numeric sp numeric sp numeric bp
 {IllustrateCreatePolygon $3 $5 $7 $9 red 0 1 0}
 | LINE_ bp numeric sp numeric sp numeric sp numeric bp
 {IllustrateCreateLine $3 $5 $7 $9 red 1 0}
 | TEXT_ bp numeric sp numeric bp STRING_
 {IllustrateCreateText $3 $5 $7 red helvetica 12 normal roman}
 ;

global : global globalProperty
 | globalProperty
 ;

globalProperty : COLOR_ STRING_ {set globalColor $2}
 | WIDTH_ INT_ {set globalWidth $2}
 | FILL_ yesno {set globalFill $2}
 | DASH_ yesno {set globalDash $2}
 ;

local : local localProperty
 | localProperty
 ;

localProperty : COLOR_ STRING_ {set localColor $2}
 | WIDTH_ INT_ {set localWidth $2}
 | FILL_ yesno {set localFill $2}
 | DASH_ yesno {set localDash $2}
 ;

sp :
 | ','
 ;

bp :
 | '('
 ;
 
ep :
 | ')'
 ;

coordSystem : IMAGE_
 | PHYSICAL_
 | DETECTOR_
 | AMPLIFIER_
 | WCS_
 ;

%%
