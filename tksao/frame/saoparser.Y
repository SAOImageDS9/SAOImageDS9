// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

%pure-parser
%parse-param {Base* fr}
%lex-param {saoFlexLexer* ll}
%parse-param {saoFlexLexer* ll}

%{
#define YYDEBUG 1

#define FITSPTR (fr->findFits())
#define DISCARD_(x) {yyclearin; saoDiscard(x);}

#include <math.h>
#include <string.h>
#include <iostream>

#include "base.h"
#include "fitsimage.h"
#include "basemarker.h"

#undef yyFlexLexer
#define yyFlexLexer saoFlexLexer
#include <FlexLexer.h>

extern int saolex(void*, saoFlexLexer*);
extern void saoerror(Base*, saoFlexLexer*, const char*);
extern void saoDiscard(int);

static unsigned short globalProps;
static unsigned short localProps;

static char color[32];
static int dash[] = {8,3};
static int fill_ =0;
static const char *font = "helvetica 10 normal roman";
static const char *text = "";

static char localComment[80];

static List<Vertex> polylist;
static List<Tag> taglist;
static List<CallBack> cblist;

static double aAnnuli[MAXANNULI];
static Vector aVector[MAXANNULI];
static int aNum;
static int aStatus;
static Vector aCenter;
static double aAngle;
static unsigned short aProps;
static char aComment[80];

static void setProps(unsigned short* props, unsigned short prop, int value);

%}

%union {
#define SAOBUFSIZE 2048
  double real;
  int integer;
  char str[SAOBUFSIZE];
  double vector[3];
}

%type <real> numeric

%type <real> angle
%type <real> optangle
%type <real> value
%type <vector> vvalue
%type <vector> coord
%type <integer> numberof

%token <integer> INT
%token <real> REAL
%token <str> STRING

%token EOF_

%token ANNULUS_
%token BOX_
%token CIRCLE_
%token DEBUG_
%token ELLIPSE_
%token N_
%token OFF_
%token ON_
%token POINT_
%token POLYGON_
%token ROTBOX_
%token VERSION_

%%

start	: {
  strcpy(color, fr->markerColor());
 } initGlobal commands processAnnulus
	;

commands: commands command terminator
	| command terminator
	;

command : /* empty */
	| DEBUG_ debug
	| VERSION_ {cerr << "SAOimage" << endl;}
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
	;

value	: numeric {$$ = FITSPTR->mapLenToRef($1, Coord::IMAGE);}
	;

vvalue	: numeric sp numeric 
	{
	  Vector r = FITSPTR->mapLenToRef(Vector($1,$3), Coord::IMAGE);
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	;

numberof: N_ '=' INT {$$ = $3;}
	;

coord	: numeric sp numeric 
	{
	  Vector r = FITSPTR->mapToRef(Vector($1,$3), Coord::IMAGE);
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	;

initGlobal:{
	  globalProps =
	    Marker::SELECT | Marker::EDIT | Marker::MOVE |
	    Marker::ROTATE | Marker::DELETE | Marker::HIGHLITE |
	    Marker::INCLUDE | Marker::SOURCE;
	} 
	;

initLocal : {
	    // reset maperr flag
	    maperr =0;

	    localProps = globalProps;
	  }
	;

include	: /* empty */ {setProps(&localProps, Marker::INCLUDE, 1);}
	| '+' {setProps(&localProps, Marker::INCLUDE, 1);}
	| '-' {setProps(&localProps, Marker::INCLUDE, 0);}
	;

shape	: CIRCLE_ bp coord sp value ep shapeComment
        {fr->createCircleCmd(Vector($3), $5, fill_,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);}
	| ANNULUS_ bp coord sp value sp value ep shapeComment
	{fr->createAnnulusCmd(Vector($3),
	    $5,$7,1,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);}
	| ANNULUS_ bp coord sp value sp value sp {aNum=2;} aRads ep
	   shapeComment
	{
	  aAnnuli[0] = $5;
	  aAnnuli[1] = $7;
	  fr->createAnnulusCmd(Vector($3),
	    aNum,aAnnuli,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);
	}
	| ANNULUS_ bp coord sp value sp value sp numberof ep shapeComment
	  {fr->createAnnulusCmd(Vector($3),
	    $5,$7,$9,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);}


	| ELLIPSE_ bp coord sp vvalue sp optangle ep shapeComment
	{
	  // for ellipse annulus
	  aStatus = 1;
	  aCenter = Vector($3);
	  aAngle = $7;
	  aVector[0] = Vector($5);
	  aNum = 1;
	  strncpy(aComment,localComment,80);
	  aProps = localProps;

	  fr->createEllipseCmd(Vector($3), Vector($5), $7, fill_,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);
	}
	| ELLIPSE_ bp coord sp vvalue sp optangle ep '&' '!' 
	  ELLIPSE_ bp coord sp vvalue sp optangle ep
	{	
	  aStatus = 2;
	  aVector[aNum++] = Vector($5);
	}

	| BOX_ bp coord sp vvalue sp optangle ep shapeComment
	{
	  // for box annulus
	  aStatus = 3;
	  aCenter = Vector($3);
	  aAngle = $7;
	  aVector[0] = Vector($5);
	  aNum = 1;
	  strncpy(aComment,localComment,80);
	  aProps = localProps;

	  fr->createBoxCmd(Vector($3), Vector($5), $7, fill_,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);
	}
	| ROTBOX_ bp coord sp vvalue sp optangle ep shapeComment
	{fr->createBoxCmd(Vector($3), Vector($5), $7, fill_,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);}
	| BOX_ bp coord sp vvalue sp optangle ep '&' '!' 
	  BOX_ bp coord sp vvalue sp optangle ep
	{	
	  aStatus = 4;
	  aVector[aNum++] = Vector($5);
	}

	| POINT_ bp coord ep shapeComment
	  {fr->createPointCmd(Vector($3), Point::BOXCIRCLE, POINTSIZE, 
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);}

	| POLYGON_ {polylist.deleteAll();} bp polyNodes ep shapeComment
	{fr->createPolygonCmd(polylist, fill_,
	      color,dash,1,font,text,localProps,localComment,taglist,cblist);} 
	;

polyNodes : polyNodes sp polyNode
	| polyNode
	;

polyNode : coord {polylist.append(new Vertex($1));}
	;

aRads	: aRads sp aRad
	| aRad
	;

aRad	: value {aAnnuli[aNum++] = $1;}
	;

processAnnulus : /* empty */
	{
	  switch (aStatus) {
	  case 0: // do nothing
	    break;
	  case 1: // we found just an ellipse, do nothing
	    break;
	  case 2: // ok we have an ellipse annulus
	    fr->markerDeleteLastCmd(); // delete the previous ellipse
	    fr->createEllipseAnnulusCmd(aCenter,
	      aNum,aVector,
	      aAngle,
	      color,dash,1,font,text,aProps,aComment,taglist,cblist);
	    break;
	  case 3: // we found just a box, do nothing
	    break;
	  case 4: // ok, we have a box annulus
	    fr->markerDeleteLastCmd(); // delete the previous box
	    fr->createBoxAnnulusCmd(aCenter,
	      aNum,aVector,
	      aAngle,
	      color,dash,1,font,text,aProps,aComment,taglist,cblist);
	    break;
	  }
	  aStatus = 0;
	}
	;

generalComment : '#' {DISCARD_(1);} STRING 
	;

shapeComment : /* empty */ processAnnulus
        | '#' {DISCARD_(0);} STRING processAnnulus 
	  {strncpy(localComment,$3,80);}
	;

%%

static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}
