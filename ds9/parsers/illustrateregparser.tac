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

 | HASH_
 | IMAGE_
 ;

shape : CIRCLE_ bp numeric sp numeric sp numeric ep comment
 {IllustrateCreateCircle $3 $5 $7 $illustratereg::localColor $illustratereg::localFill $illustratereg::localWidth $illustratereg::localDash}
 | ELLIPSE_ bp numeric sp numeric sp numeric sp numeric bp comment
 {IllustrateCreateEllipse $3 $5 $7 $9 $illustratereg::localColor $illustratereg::localFill $illustratereg::localWidth $illustratereg::localDash}
 | BOX_ bp numeric sp numeric sp numeric sp numeric bp comment
 {IllustrateCreateBox $3 $5 $7 $9 $illustratereg::localColor $illustratereg::localFill $illustratereg::localWidth $illustratereg::localDash}
 | POLYGON_ bp numeric sp numeric sp numeric sp numeric bp comment
 {IllustrateCreatePolygon $3 $5 $7 $9 $illustratereg::localColor $illustratereg::localFill $illustratereg::localWidth $illustratereg::localDash}
 | LINE_ bp numeric sp numeric sp numeric sp numeric bp comment
 {IllustrateCreateLine $3 $5 $7 $9 $illustratereg::localColor $illustratereg::localWidth $illustratereg::localDash}
 | TEXT_ bp numeric sp numeric sp STRING_ bp comment
 {IllustrateCreateText $3 $5 $7 $illustratereg::localColor $illustratereg::localFont}
 | TEXT_ bp numeric sp numeric bp HASH_ TEXT_ eq STRING_ local
 {IllustrateCreateText $3 $5 $10 $illustratereg::localColor $illustratereg::localFont}
 ;

comment :
 | HASH_ 
 | HASH_ local
 ;

global : global globalProperty
 | globalProperty
 ;

globalProperty : COLOR_ eq STRING_ {set illustratereg::globalColor $3}
 | FILL_ eq yesno {set illustratereg::globalFill $3}
 | WIDTH_ eq INT_ {set illustratereg::globalWidth $3}
 | DASH_ eq yesno {set illustratereg::globalDash $3}
 | FONT_ eq STRING_ {set illustratereg::globalFont $3}
 ;

local : local localProperty
 | localProperty
 ;

localProperty : COLOR_ eq STRING_ {set illustratereg::localColor $3}
 | FILL_ eq yesno {set illustratereg::localFill $3}
 | WIDTH_ eq INT_ {set illustratereg::localWidth $3}
 | DASH_ eq yesno {set illustratereg::localDash $3}
 | FONT_ eq STRING_ {set illustratereg::localFont $3}
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
 
%%

namespace eval illustratereg {
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

proc illustratereg::initGlobal {} {
     variable globalColor cyan
     variable globalFill 0
     variable globalWidth 1
     variable globalDash 0
     variable globalFont "helvetica 12 normal roman"
}

proc illustratereg::initLocal {} {
     variable globalColor
     variable globalFill
     variable globalWidth
     variable globalDash
     variable globalFont

     variable localColor $globalColor
     variable localFill $globalFill
     variable localWidth $globalWidth
     variable localDash $globalDash
     variable localFont $globalFont
}
