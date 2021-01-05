// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

%pure-parser
%parse-param {Base* fr}
%lex-param {ciaoFlexLexer* ll}
%parse-param {ciaoFlexLexer* ll}

%{
#define YYDEBUG 1

#define FITSPTR (fr->findFits())

#include <math.h>
#include <string.h>
#include <iostream>

#include "base.h"
#include "fitsimage.h"
#include "basemarker.h"

#undef yyFlexLexer
#define yyFlexLexer ciaoFlexLexer
#include <FlexLexer.h>

extern int ciaolex(void*, ciaoFlexLexer*);
extern void ciaoerror(Base*, ciaoFlexLexer*, const char*);

static char color[32];
static int dash[] = {8,3};
static int fill_ =0;
static const char *font = "helvetica 10 normal roman";
static const char *text = "";
static unsigned short props;

static List<Vertex> polylist;
static List<Tag> taglist;
static List<CallBack> cblist;

static void setProps(unsigned short* props, unsigned short prop, int value);
%}

%union {
#define CIAOBUFSIZE 2048
  double real;
  int integer;
  char str[CIAOBUFSIZE];
  double vector[3];
}

%type <real> numeric

%type <real> angle
%type <real> value
%type <vector> vvalue
%type <real> sexagesimal
%type <real> hms
%type <real> dms
%type <vector> coord

%token <integer> INT
%token <real> REAL

%token <real> ANGDEGREE
%token <real> ARCMINUTE
%token <real> ARCSECOND

%token <str> SEXSTR
%token <str> HMSSTR
%token <str> DMSSTR

%token EOF_

%token ANNULUS_
%token BOX_
%token CIRCLE_
%token DEBUG_
%token ELLIPSE_
%token FIELD_
%token OFF_
%token ON_
%token PIE_
%token POINT_
%token POLYGON_
%token RECTANGLE_
%token REGION_
%token ROTBOX_
%token SECTOR_
%token VERSION_

%%

start	: {
  strcpy(color, fr->markerColor());
 } commands
	;

commands: commands command terminator
	| command terminator
	;

command : /* empty */
	| DEBUG_ debug
	| VERSION_ {cerr << "CIAO Regions File 1.0" << endl;}
	| init include shape
	;

terminator: ep
	| '\n'
	| EOF_ {YYACCEPT;}
	;

include	: /* empty */
	| '*' /* AND */
	| '&' /* AND */
	| '|' /* OR */
	| '+' /* OR */
	| '-' /* NOT */ {setProps(&props, Marker::INCLUDE, 0);}
	| '!''*' /* NOT */ {setProps(&props, Marker::INCLUDE, 0);}
	| '!' /* NOT */ {setProps(&props, Marker::INCLUDE, 0);}
	;

numeric	: REAL {$$=$1;}
	| INT {$$=$1;}
	;

debug	: ON_ {yydebug=1;}
	| OFF_ {yydebug=0;}
	;

sp	: ','
	;

bp	: '('
	;

ep	: ')'
	;

init:	{
	  // reset maperr flag
	  maperr =0;

	  props =
	    Marker::SELECT | Marker::EDIT | Marker::MOVE |
	    Marker::ROTATE | Marker::DELETE | Marker::HIGHLITE |
	    Marker::INCLUDE | Marker::SOURCE;
	}
	;

angle	: numeric {$$ = zeroTWOPI(degToRad($1));}
	;

value	: numeric {$$ = FITSPTR->mapLenToRef($1, Coord::PHYSICAL);}
	| ANGDEGREE {$$ = FITSPTR->mapLenToRef($1, Coord::WCS, Coord::DEGREE);}
	| ARCMINUTE {$$ = FITSPTR->mapLenToRef($1, Coord::WCS, Coord::ARCMIN);}
	| ARCSECOND {$$ = FITSPTR->mapLenToRef($1, Coord::WCS, Coord::ARCSEC);}
	;

vvalue	: numeric sp numeric 
	{
	  Vector rr = FITSPTR->mapLenToRef(Vector($1,$3), Coord::PHYSICAL);
	  $$[0] = rr[0];
	  $$[1] = rr[1];
	  $$[2] = rr[2];
	}
	| ANGDEGREE sp ANGDEGREE
	{
	  Vector rr= FITSPTR->mapLenToRef(Vector($1,$3), Coord::WCS,Coord::DEGREE);
	  $$[0] = rr[0];
	  $$[1] = rr[1];
	  $$[2] = rr[2];
	}
	| ARCMINUTE sp ARCMINUTE 
	{
	  Vector rr = FITSPTR->mapLenToRef(Vector($1,$3), Coord::WCS, Coord::ARCMIN);
	  $$[0] = rr[0];
	  $$[1] = rr[1];
	  $$[2] = rr[2];
	}
	| ARCSECOND sp ARCSECOND 
	{
	  Vector rr = FITSPTR->mapLenToRef(Vector($1,$3), Coord::WCS, Coord::ARCSEC);
	  $$[0] = rr[0];
	  $$[1] = rr[1];
	  $$[2] = rr[2];
	}
	;

sexagesimal: SEXSTR {$$ = parseSEXStr($1);}
	;

hms	: HMSSTR {$$ = parseHMSStr($1);}
	;

dms	: DMSSTR {$$ = parseDMSStr($1);}
	;

coord	: numeric sp numeric 
	{
	  Vector rr = FITSPTR->mapToRef(Vector($1,$3), Coord::PHYSICAL);
	  $$[0] = rr[0];
	  $$[1] = rr[1];
	  $$[2] = rr[2];
	}
        | sexagesimal sp sexagesimal
	{
	  Vector rr = FITSPTR->mapToRef(Vector($1*360./24.,$3), Coord::WCS,Coord::FK5);
	  $$[0] = rr[0];
	  $$[1] = rr[1];
	  $$[2] = rr[2];
	}
	| hms sp dms
        {
	  Vector rr = FITSPTR->mapToRef(Vector($1,$3), Coord::WCS, Coord::FK5);
	  $$[0] = rr[0];
	  $$[1] = rr[1];
	  $$[2] = rr[2];
	}
	| ANGDEGREE sp ANGDEGREE
	{
	  Vector rr = FITSPTR->mapToRef(Vector($1,$3), Coord::WCS, Coord::FK5);
	  $$[0] = rr[0];
	  $$[1] = rr[1];
	  $$[2] = rr[2];
	}
	;

shape	: ANNULUS_ bp coord sp value sp value
        {
	  fr->createAnnulusCmd(Vector($3), $5, $7, 1,
	  color,dash,1,font,text,props,NULL,taglist,cblist);
	}
	| BOX_ bp coord sp vvalue
	{
	  fr->createBoxCmd(Vector($3), $5, 0, fill_,
	  color,dash,1,font,text,props,NULL,taglist,cblist);
	}
	| BOX_ rotbox
        | CIRCLE_ bp coord sp value
	{
	  fr->createCircleCmd(Vector($3), $5, fill_,
	  color,dash,1,font,text,props,NULL,taglist,cblist);
	}
        | ELLIPSE_ bp coord sp vvalue sp angle
	{
	  fr->createEllipseCmd(Vector($3), Vector($5), $7, fill_,
	  color,dash,1,font,text,props,NULL,taglist,cblist);
	}
        | FIELD_ bp {/* not supported */}
	| PIE_ bp coord sp value sp value sp angle sp angle
	{
	  fr->createCpandaCmd(Vector($3), $9, $11, 1, $5, $7, 1,
	  color,dash,1,font,text,props,NULL,taglist,cblist);
	}
	| POINT_ bp coord 
	{
	  fr->createPointCmd(Vector($3), Point::BOXCIRCLE, POINTSIZE, 
	  color,dash,1,font,text,props,NULL,taglist,cblist);
	}
	| POLYGON_ {polylist.deleteAll();} bp polyNodes
	{
	  fr->createPolygonCmd(polylist, fill_,
	  color,dash,1,font,text,props,NULL,taglist,cblist);
	} 
        | RECTANGLE_ bp coord sp coord
	{ 
	  Vector cc = (Vector($5)-Vector($3))/2.+Vector($3);
	  Vector wh = Vector($5)-Vector($3);
	  fr->createBoxCmd(cc, wh, 0, fill_,
	  color,dash,1,font,text,props,NULL,taglist,cblist);
	}
        | REGION_ bp {/* not supported */}
	| ROTBOX_ rotbox
	| SECTOR_ bp coord sp angle sp angle {/* not supported */}
	;

rotbox  : bp coord sp vvalue sp angle
	{
	  fr->createBoxCmd(Vector($2), Vector($4), $6, fill_,
	  color,dash,1,font,text,props,NULL,taglist,cblist);
	}
        ;

polyNodes : polyNodes sp polyNode
	| polyNode
	;

polyNode : coord {polylist.append(new Vertex($1));}
	;

%%

static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}
