%{
%}

#include def.tin

#include yesno.tin
#include numeric.tin
#include string.tin

%start start

%token HASH_
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

%token IMAGE_

%%

#include yesno.trl
#include numeric.trl

start : {initGlobal} commands
 ;

commands : commands command
 | command
 ;

command : VERSION_ {puts "DS9 Illustrate File 1.0"}
 | GLOBAL_ global
 | {initLocal} shape

 | HASH_ discard
 | IMAGE_
 ;

shape : CIRCLE_ bp numeric sp numeric sp numeric ep comment
 {IllustrateCircleCreate $3 $5 $7 $illustratefile::localColor $illustratefile::localFill $illustratefile::localWidth $illustratefile::localDash}
 | ELLIPSE_ bp numeric sp numeric sp numeric sp numeric bp comment
 {IllustrateEllipseCreate $3 $5 $7 $9 $illustratefile::localColor $illustratefile::localFill $illustratefile::localWidth $illustratefile::localDash}
 | BOX_ bp numeric sp numeric sp numeric sp numeric bp comment
 {IllustrateBoxCreate $3 $5 $7 $9 $illustratefile::localColor $illustratefile::localFill $illustratefile::localWidth $illustratefile::localDash}
 | POLYGON_ bp coords bp comment
 {IllustratePolygonCreate $illustratefile::coords $illustratefile::localColor $illustratefile::localFill $illustratefile::localWidth $illustratefile::localDash}
 | LINE_ bp numeric sp numeric sp numeric sp numeric bp comment
 {IllustrateLineCreate $3 $5 $7 $9 $illustratefile::localColor $illustratefile::localWidth $illustratefile::localDash}
 | TEXT_ bp numeric sp numeric sp STRING_ bp comment
 {IllustrateTextCreate $3 $5 $7 $illustratefile::localColor $illustratefile::localFont}
 | TEXT_ bp numeric sp numeric bp HASH_ TEXT_ eq STRING_ local
 {IllustrateTextCreate $3 $5 $10 $illustratefile::localColor $illustratefile::localFont}
 ;

coords : coords coord
 | coord
 ;

coord : numeric sp numeric {lappend illustratefile::coords $1 $3}
 |
 ;

comment :
 | HASH_ 
 | HASH_ discard
 | HASH_ local
 ;

global : global globalProperty
 | globalProperty
 ;

globalProperty : COLOR_ eq STRING_ {set illustratefile::globalColor $3}
 | FILL_ eq yesno {set illustratefile::globalFill $3}
 | WIDTH_ eq INT_ {set illustratefile::globalWidth $3}
 | DASH_ eq yesno {set illustratefile::globalDash $3}
 | FONT_ eq STRING_ {set illustratefile::globalFont $3}
 ;

local : local localProperty
 | localProperty
 ;

localProperty : COLOR_ eq STRING_ {set illustratefile::localColor $3}
 | FILL_ eq yesno {set illustratefile::localFill $3}
 | WIDTH_ eq INT_ {set illustratefile::localWidth $3}
 | DASH_ eq yesno {set illustratefile::localDash $3}
 | FONT_ eq STRING_ {set illustratefile::localFont $3}
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

eq :
 | '='
 ;
 
discard : discard anything
 | anything
 ;

anything : STRING_
 | numeric
 | VERSION_
 | IMAGE_
 ;

%%

namespace eval illustratefile {
     variable globalColor
     variable globalFill
     variable globalWidth
     variable globalDash
     variable globalFont

     variable localColor
     variable localFill
     variable localWidth
     variable localDash
     variable localFont
}

proc illustratefile::initGlobal {} {
     variable globalColor cyan
     variable globalFill 0
     variable globalWidth 1
     variable globalDash 0
     variable globalFont "helvetica 12 normal roman"
}

proc illustratefile::initLocal {} {
     variable globalColor
     variable globalFill
     variable globalWidth
     variable globalDash
     variable globalFont

     variable coords {}
     variable localColor $globalColor
     variable localFill $globalFill
     variable localWidth $globalWidth
     variable localDash $globalDash
     variable localFont $globalFont
}
