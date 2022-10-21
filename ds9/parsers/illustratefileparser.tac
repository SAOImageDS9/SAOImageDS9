%{
%}

#include def.tin

#include fonts.tin
#include yesno.tin
#include numeric.tin
#include string.tin

%start start

%token HASH_
%token VERSION_
%token GLOBAL_

%token ANGLE_
%token COLOR_
%token WIDTH_
%token FILL_
%token DASH_
%token JUSTIFY_

%token CIRCLE_
%token ELLIPSE_
%token BOX_
%token POLYGON_
%token LINE_
%token TEXT_
%token IMAGE_

%token LEFT_
%token CENTER_
%token RIGHT_

%%

#include fonts.trl
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
 {IllustrateLineCreate $3 $5 $7 $9 $illustratefile::localColor $illustratefile::localWidth $illustratefile::localDash $illustratefile::localLine1 $illustratefile::localLine2}
 | TEXT_ bp numeric sp numeric sp STRING_ ep comment
 {IllustrateTextCreate $3 $5 $7 $illustratefile::localColor $illustratefile::localFont $illustratefile::localFontSize $illustratefile::localFontWeight $illustratefile::localFontSlant $illustratefile::localAngle $illustratefile::localJustify} comment
 | TEXT_ bp numeric sp numeric bp HASH_ TEXT_ eq STRING_ local
 {IllustrateTextCreate $3 $5 $10 $illustratefile::localColor $illustratefile::localFont $illustratefile::localFontSize $illustratefile::localFontWeight $illustratefile::localFontSlant $illustratefile::localAngle $illustratefile::localJustify}
 | IMAGE_ bp numeric sp numeric sp STRING_ ep bare {IllustrateImageCreate $3 $5 $7}
 ;

coords : coords coord
 | coord
 ;

coord : numeric sp numeric {lappend illustratefile::coords $1 $3}
 |
 ;

comment :
 | HASH_ discard
 | HASH_ local
 ;

bare :
 | HASH_ discard
 ;

global : global globalProperty
 | globalProperty
 ;

globalProperty : COLOR_ eq STRING_ {set illustratefile::globalColor $3}
 | FILL_ eq yesno {set illustratefile::globalFill $3}
 | WIDTH_ eq numeric {set illustratefile::globalWidth $3}
 | DASH_ eq yesno {set illustratefile::globalDash $3}

 | FONT_ eq font {set illustratefile::globalFont $3}
 | FONTSIZE_ eq INT_ {set illustratefile::globalFontSize $3}
 | FONTWEIGHT_ eq fontWeight {set illustratefile::globalFontWeight $3}
 | FONTSLANT_ eq fontSlant {set illustratefile::globalFontSlant $3}
 | LINE_ eq INT_ INT_
 {set illustratefile::globalLine1 $3; set illustratefile::globalLine2 $4;}
 | ANGLE_ eq numeric {set illustratefile::globalAngle $3}
 | JUSTIFY_ eq justify {set illustratefile::globalJustify $3}
 ;

local : local localProperty
 | localProperty
 ;

localProperty : COLOR_ eq STRING_ {set illustratefile::localColor $3}
 | FILL_ eq yesno {set illustratefile::localFill $3}
 | WIDTH_ eq numeric {set illustratefile::localWidth $3}
 | DASH_ eq yesno {set illustratefile::localDash $3}

 | FONT_ eq font {set illustratefile::localFont $3}
 | FONTSIZE_ eq INT_ {set illustratefile::localFontSize $3}
 | FONTWEIGHT_ eq fontWeight {set illustratefile::localFontWeight $3}
 | FONTSLANT_ eq fontSlant {set illustratefile::localFontSlant $3}
 | LINE_ eq INT_ INT_
 {set illustratefile::localLine1 $3; set illustratefile::localLine2 $4;}
 | ANGLE_ eq numeric {set illustratefile::localAngle $3}
 | JUSTIFY_ eq justify {set illustratefile::localJustify $3}
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
 
justify : LEFT_ {set _ left}
 | CENTER_ {set _ center}
 | RIGHT_ {set _ right}
 ;

discard : discard anything
 | anything
 ;

anything : STRING_
 | numeric
 | VERSION_
 ;

%%

namespace eval illustratefile {
     variable globalColor
     variable globalFill
     variable globalWidth
     variable globalDash

     variable globalFont
     variable globalFontSize
     variable globalFontWeight
     variable globalFontSlant
     variable globalLine1
     variable globalLine2
     variable globalAngle

     variable localColor
     variable localFill
     variable localWidth
     variable localDash

     variable localFont
     variable localFontSize
     variable localFontWeight
     variable localFontSlant
     variable localLine1
     variable localLine2
     variable localAngle
     variable localJustify
}

proc illustratefile::initGlobal {} {
     variable globalColor cyan
     variable globalFill 0
     variable globalWidth 1
     variable globalDash 0

     variable globalFont helvetica
     variable globalFontSize 12
     variable globalFontWeight normal
     variable globalFontSlant roman
     variable globalLine1 0
     variable globalLine2 0
     variable globalAngle 0
     variable globalJustify left
}

proc illustratefile::initLocal {} {
     variable coords {}

     variable globalColor
     variable globalFill
     variable globalWidth
     variable globalDash

     variable globalFont
     variable globalFontSize
     variable globalFontWeight
     variable globalFontSlant
     variable globalLine1
     variable globalLine2
     variable globalAngle
     variable globalJustify

     variable localColor $globalColor
     variable localFill $globalFill
     variable localWidth $globalWidth
     variable localDash $globalDash

     variable localFont $globalFont
     variable localFontSize $globalFontSize
     variable localFontWeight $globalFontWeight
     variable localFontSlant $globalFontSlant
     variable localLine1 $globalLine1
     variable localLine2 $globalLine2
     variable localAngle $globalAngle
     variable localJustify $globalJustify
}
