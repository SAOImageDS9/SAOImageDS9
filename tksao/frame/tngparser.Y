// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

%pure-parser
%parse-param {Base* fr}
%lex-param {tngFlexLexer* ll}
%parse-param {tngFlexLexer* ll}

%{
#define YYDEBUG 1

#define FITSPTR (fr->findFits())
#define DISCARD_(x) {yyclearin; tngDiscard(x);}

#include <math.h>
#include <string.h>
#include <iostream>

#include "base.h"
#include "fitsimage.h"
#include "basemarker.h"

#undef yyFlexLexer
#define yyFlexLexer tngFlexLexer
#include <FlexLexer.h>

extern int tnglex(void*, tngFlexLexer*);
extern void tngerror(Base*, tngFlexLexer*, const char*);
extern void tngDiscard(int);

static Coord::CoordSystem globalSystem;
static Coord::SkyFrame globalSky;
static Coord::CoordSystem localSystem;
static Coord::SkyFrame localSky;

static unsigned short globalProps;
static unsigned short localProps;

static char globalColor[32];
static char localColor[32];

static int dash[] = {8,3};
static int fill_ =0;

static char globalFont[32];

static char globalText[80];
static char localText[80];

static char localComment[80];

static List<Vertex> polylist;
static List<Tag> taglist;
static List<CallBack> cblist;

static void setProps(unsigned short* props, unsigned short prop, int value);
static Coord::CoordSystem checkWCSSystem();
static Coord::SkyFrame checkWCSSky();
%}

%union {
#define TNGBUFSIZE 2048
  double real;
  int integer;
  char str[TNGBUFSIZE];
  double vector[3];
}

%type <real> numeric

%type <real> angle
%type <real> optangle
%type <real> value
%type <vector> vvalue
%type <real> sexagesimal
%type <vector> coord
%type <integer> skyFrame

%token <integer> INT
%token <real> REAL
%token <str> STRING

%token <real> ANGDEGREE

%token <str> SEXSTR

%token EOF_

%token B1950_
%token BACKGROUND_
%token BOX_
%token BLACK_
%token BLUE_
%token CIRCLE_
%token CYAN_
%token DATE_
%token DEBUG_
%token DEGREES_
%token ECLIPTIC_
%token ELLIPSE_
%token FILENAME_
%token FK4_
%token FK5_
%token FORMAT_
%token GALACTIC_
%token GREEN_
%token HMS_
%token ICRS_
%token J2000_
%token LINE_
%token MAGENTA_
%token OFF_
%token ON_
%token PHYSICAL_
%token PIXELS_
%token POINT_
%token POLYGON_
%token RED_
%token SOURCE_
%token TEXT_
%token VERSION_
%token WHITE_
%token YELLOW_

%%

start	: initGlobal commands
	;

commands: commands command terminator
	| command terminator
	;

command : /* empty */
	| DEBUG_ debug
	| VERSION_ {cerr << "SAOtng" << endl;}
	| initLocal include shape
	| generalComment
	;

terminator: '\n'
	| ';'
	| EOF_ {YYACCEPT;}
	;

numeric	: REAL {$$=$1;}
	| INT {$$=$1;}
	;

debug	: ON_ {yydebug=1;}
	| OFF_ {yydebug=0;}
	;

sp	: /* empty */
	| ','
	;

bp	: /* empty */
	| '('
	;

ep	: /* emtpy */
	| ')'
	;

optangle: /* empty */ {$$ = 0;}
	| angle {$$ = $1;}
	;

angle	: numeric {$$ = zeroTWOPI(degToRad($1));} /* assume degree */
        | ANGDEGREE {$$ = zeroTWOPI(degToRad($1));}
	;

value	: numeric {$$ = FITSPTR->mapLenToRef($1,Coord::IMAGE);}
	;

vvalue	: numeric sp numeric 
	{
	  Vector r = FITSPTR->mapLenToRef(Vector($1,$3), Coord::IMAGE);
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	;

sexagesimal: SEXSTR {$$ = parseSEXStr($1);}
	;

coord	: sexagesimal sp sexagesimal
	{
	  Vector r;
	  Coord::CoordSystem sys = checkWCSSystem();
	  Coord::SkyFrame sky = checkWCSSky();
	  if (sky == Coord::GALACTIC || sky == Coord::ECLIPTIC) 
	    r = FITSPTR->mapToRef(Vector($1,$3), sys, sky);
	  else
	    r = FITSPTR->mapToRef(Vector($1*360./24.,$3), sys, sky);

	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	| numeric sp numeric 
	{
	  Vector r = FITSPTR->mapToRef(Vector($1,$3), localSystem, localSky);
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	| ANGDEGREE sp ANGDEGREE
	{
	  Vector r = FITSPTR->mapToRef(Vector($1,$3),
	    checkWCSSystem(), checkWCSSky());
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	;

skyFrame : FK4_ {$$ = Coord::FK4;}
	| B1950_ {$$ = Coord::FK4;}
	| FK5_ {$$ = Coord::FK5;}
	| J2000_ {$$ = Coord::FK5;}
	| ICRS_ {$$ = Coord::ICRS;}
	| GALACTIC_ {$$ = Coord::GALACTIC;}
	| ECLIPTIC_ {$$ = Coord::ECLIPTIC;}
	;

initGlobal:{
	  // global properties
	  globalSystem = Coord::IMAGE;
	  globalSky = Coord::FK5;
	  globalProps =
	    Marker::SELECT | Marker::EDIT | Marker::MOVE |
	    Marker::ROTATE | Marker::DELETE | Marker::HIGHLITE |
	    Marker::INCLUDE | Marker::SOURCE;
	  strcpy(globalColor,"green");
	  strcpy(globalFont,"helvetica 10 normal roman");
	  strcpy(globalText,"");
	} 
	;

initLocal : {
	  // reset maperr flag
	  maperr =0;

	  // global properties
	  localSystem = globalSystem;
	  localSky = globalSky;
	  localProps = globalProps;
	  if (fr->useMarkerColor())
	    strcpy(localColor,fr->markerColor());
	  else
	    strcpy(localColor,globalColor);
	  strcpy(localText,globalText);
	  strcpy(localComment,"");

	  strcpy(globalText,"");
	}
	;

include	: /* empty */ {setProps(&localProps, Marker::INCLUDE, 1);}
	| '+' {setProps(&localProps, Marker::INCLUDE, 1);}
	| '-' {setProps(&localProps, Marker::INCLUDE, 0);}
	;

shape	: CIRCLE_ bp coord sp value ep shapeComment
        {fr->createCircleCmd(Vector($3), $5, fill_,
	    localColor,dash,1,globalFont,localText,
	    localProps,localComment,taglist,cblist);}

	| ELLIPSE_ bp coord sp vvalue sp optangle ep shapeComment
	{fr->createEllipseCmd(Vector($3), Vector($5), $7, fill_,
	    localColor,dash,1,globalFont,localText,
	    localProps,localComment,taglist,cblist);}

	| BOX_ bp coord sp vvalue sp optangle ep shapeComment
	{fr->createBoxCmd(Vector($3), Vector($5), $7, fill_,
	    localColor,dash,1,globalFont,localText,
	    localProps,localComment,taglist,cblist);}

	| LINE_ bp coord sp coord ep shapeComment
	{fr->createLineCmd(Vector($3),
	    Vector($5),
	    0,0,
	    localColor,dash,1,globalFont,localText,
	    localProps,localComment,taglist,cblist);}

	| POINT_ bp coord ep shapeComment
	{fr->createPointCmd(Vector($3), Point::BOXCIRCLE, POINTSIZE, 
	    localColor,dash,1,globalFont,localText,
	    localProps,localComment,taglist,cblist);}

	| TEXT_ bp coord sp STRING ep {strncpy(localText,$5,80);} shapeComment
	{fr->createTextCmd(Vector($3),
	    0, 1,
	    localColor,dash,1,globalFont,localText,
	    localProps,localComment,taglist,cblist);}

	| POLYGON_ {polylist.deleteAll();} bp polyNodes ep shapeComment
	{fr->createPolygonCmd(polylist, fill_,
	    localColor,dash,1,globalFont,localText,
	    localProps,localComment,taglist,cblist);} 
	;

polyNodes : polyNodes sp polyNode
	| polyNode
	;

polyNode : coord {polylist.append(new Vertex($1));}
	;

generalComment : '#' FORMAT_ ':' tngFormat
        | '#' FILENAME_ ':' {DISCARD_(0);} STRING
	| '#' DATE_ ':' {DISCARD_(0);} STRING
	| '#' {DISCARD_(1);} STRING {strncpy(globalText,$3,80);}
	;

shapeComment : /* empty */
	| '#' WHITE_ {strcpy(localColor,"white");}
	| '#' BLACK_ {strcpy(localColor,"black");}
	| '#' RED_ {strcpy(localColor,"red");}
	| '#' GREEN_ {strcpy(localColor,"green");}
	| '#' BLUE_ {strcpy(localColor,"blue");}
	| '#' CYAN_ {strcpy(localColor,"cyan");}
	| '#' MAGENTA_ {strcpy(localColor,"magenta");}
	| '#' YELLOW_ {strcpy(localColor,"yellow");}
	| '#' SOURCE_ 
	{
	  strcpy(localColor,"green");
	  setProps(&localProps,Marker::SOURCE,1);
	}
	| '#' BACKGROUND_ 
	{
	  strcpy(localColor,"red");
	  setProps(&localProps,Marker::SOURCE,0);
	}
        | '#' {DISCARD_(1);} STRING {strncpy(localComment,$3,80);}
	;

tngFormat : HMS_ tngWCS
	| DEGREES_ tngWCS
	| PIXELS_ {globalSystem = localSystem = Coord::IMAGE;}
	| PIXELS_ '(' PHYSICAL_ ')' {globalSystem = localSystem = Coord::IMAGE;}
	;

tngWCS	: /* empty */
	  {
	    globalSystem = localSystem = Coord::WCS;
	    globalSky = localSky = Coord::FK5;
	  }
	| '(' skyFrame ')' 
	  {
	    globalSystem = localSystem = Coord::WCS;
	    globalSky = localSky = (Coord::SkyFrame)$2;
	  }
	;

%%

static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

static Coord::CoordSystem checkWCSSystem()
{
  switch (localSystem) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
    return Coord::WCS;
  default:
    return localSystem;
  }
}

static Coord::SkyFrame checkWCSSky()
{
  switch (localSystem) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
    return Coord::FK5;
  default:
   return localSky;
  }
}
