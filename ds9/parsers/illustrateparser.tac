%{
	set globalColor cyan
	set globalFill 0
	set globalDash 0
	set globalWidth 1
	set globalFont "helvetica 12 normal roman"
	set globalText {}
%}

#include def.tin

#include coordsys.tin

#include yesno.tin
#include numeric.tin
#include string.tin

%start commands

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

commands : commands command
 | command
 ;

command : DEBUG_
 | VERSION_ {puts "DS9 Regions File 4.2"}
 | GLOBAL_ global
 | coordSystem
 | initLocal shape
 ;

global : global globalProperty
 | globalProperty
 ;

globalProperty : COLOR_ STRING_ {set globalColor $2}
 | WIDTH_ INT_ {set globalWidth $2}
 | FILL_ yesno {set globalFill $2}
 | DASH_ yesno {set globalDash $2}
 | FONT_ STRING_ {set globalFont $2}
 | TEXT_ STRING_ {set globalText $2}
 ;

local : local localProperty
 | localProperty
 ;

localProperty : COLOR_ STRING_ {set localColor $2}
 | WIDTH_ INT_ {set localWidth $2}
 | FILL_ yesno {set localFill $2}
 | DASH_ yesno {set localDash $2}
 | FONT_ STRING_ {set localFont $2}
 | TEXT_ STRING_ {set localText $2}
 ;

initLocal: {set localColor $globalColor; set localWidth $globalWidth; set localFill $globalFill; set localDash $globalDash; set localFont $globalFont; set localText $globalText}
 ;

shape : CIRCLE_ numeric numeric numeric comment {IllustrateCreateCircle $2 $3 $4 $localColor $localFill $localWidth $localDash}
 | ELLIPSE_ numeric numeric numeric numeric comment {}
 | BOX_ numeric numeric numeric numeric comment {}
 | POLYGON_ {set coords {}} coords comment {}
 | LINE_ numeric numeric numeric numeric comment {}
 | TEXT_ numeric numeric comment {}
 ;

coords : coords coord
 | coord
 ;

coord : numeric numeric {lappend coords $1 $2}
 ;

comment : HASH_ local
 ;

coordSystem : IMAGE_
 | PHYSICAL_
 | DETECTOR_
 | AMPLIFIER_
 | WCS_
 ;

%%
