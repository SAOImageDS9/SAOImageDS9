// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

%pure-parser
%parse-param {Context* ct}
%lex-param {ctFlexLexer* ll}
%parse-param {ctFlexLexer* ll}

%{
#define YYDEBUG 1

#define FITSPTR (ct->parent_->findFits())
#define DISCARD_(x) {yyclearin; ctDiscard(x);}

#include <math.h>
#include <string.h>
#include <iostream>

#include "util.h"
#include "base.h"
#include "context.h"
#include "fitsimage.h"
#include "contour.h"

#undef yyFlexLexer
#define yyFlexLexer ctFlexLexer
#include <FlexLexer.h>

extern int ctlex(void*, ctFlexLexer*);
extern void cterror(Context*, ctFlexLexer*, const char*);
extern void ctDiscard(int);

static Coord::CoordSystem globalWCS;
static Coord::CoordSystem globalSystem;
static Coord::SkyFrame globalSky;

static ContourLevel* cl;
static Contour* cc;
// the last coord could not be placed on the image (e.g. the far side
// of a SIN projection)
static int nodeBad;
// and where it is on the sky (in degrees), for HEALPix windows
static Vector nodeSky;
static Coord::CoordSystem nodeSys;
static Coord::SkyFrame nodeSkyFrame;

static double localLevel;
static char globalColor[16];
static char localColor[16];
static int globalWidth;
static int localWidth;
static int globalDash;
static int localDash;
static int globalDashList[2];
static int localDashList[2];

static Coord::CoordSystem checkWCSSystem();
static Coord::SkyFrame checkWCSSky();
static void mapNode(Context*, double*, const Vector&, Coord::CoordSystem,
		    Coord::SkyFrame);

%}

%union {
#define CTBUFSIZE 2048
  double real;
  int integer;
  char str[CTBUFSIZE];
  double vector[3];
}

%type <real> numeric
%type <integer> yesno

%type <real> sexagesimal
%type <real> hms
%type <real> dms
%type <vector> coord
%type <integer> coordSystem
%type <integer> wcsSystem
%type <integer> skyFrame

%token <integer> INT
%token <real> REAL
%token <str> STRING

%token <real> ANGDEGREE
%token <real> PHYCOORD
%token <real> IMGCOORD

%token <str> SEXSTR
%token <str> HMSSTR
%token <str> DMSSTR

%token EOF_

%token AMPLIFIER_
%token B1950_
%token COLOR_
%token DASH_
%token DASHLIST_
%token DEBUG_
%token DETECTOR_
%token ECLIPTIC_
%token FALSE_
%token FK4_
%token FK5_
%token GALACTIC_
%token GLOBAL_
%token ICRS_
%token IMAGE_
%token J2000_
%token LEVEL_
%token LEVELS_
%token LINEAR_
%token N_
%token NO_
%token OFF_
%token ON_
%token PHYSICAL_
%token TRUE_
%token VERSION_
%token WCS_
%token WCSA_
%token WCSB_
%token WCSC_
%token WCSD_
%token WCSE_
%token WCSF_
%token WCSG_
%token WCSH_
%token WCSI_
%token WCSJ_
%token WCSK_
%token WCSL_
%token WCSM_
%token WCSN_
%token WCSO_
%token WCSP_
%token WCSQ_
%token WCSR_
%token WCSS_
%token WCST_
%token WCSU_
%token WCSV_
%token WCSW_
%token WCSX_
%token WCSY_
%token WCSZ_
%token WIDTH_
%token Y_
%token YES_

%%

start	: initGlobal initLocal commands
	;

commands: commands command terminator
	| command terminator
	;

command : /* blank line */
	{
	  ct->auxNativeEnd();
	  if (cc && cl) {
	    cl->lcontour().append(cc);
	    cc =NULL;
	  }
	}
        | DEBUG_ debug
	| VERSION_ {cerr << "DS9 Contour File 7.5" << endl;}

	| GLOBAL_ global comment
	| coordSystem comment
	{
	  globalSystem=(Coord::CoordSystem)$1;
	} 
	| skyFrame comment
	{
	  globalSystem=globalWCS;
	  globalSky=(Coord::SkyFrame)$1;
	}
	| LINEAR_ comment
	{
	  globalSystem=globalWCS;
	  globalSky=Coord::ICRS;
	} 
        | LEVELS_ '=' '(' levels ')'
        | LEVEL_ '=' numeric {localLevel = $3} initLocal comment newcl
        | LEVEL_ '=' numeric {localLevel = $3} initLocal local comment newcl
	| '(' comment
	{
	  ct->auxNativeEnd();
	  if (cl)
	    cc = new Contour(cl);
	}
	| nodes
	| ')' comment
	{
	  ct->auxNativeEnd();
	  if (cc && cl) {
	    cl->lcontour().append(cc);
	    cc =NULL;
	  }
	}
	| '#' {DISCARD_(1);} STRING
	;

levels  : levels sp numeric
        | numeric
        ;

newcl   :
        {
	  ct->auxNativeEnd();
	  if (cl)
	    ct->contourAppendAux(cl);
	  cl = new ContourLevel(ct->parent_, localLevel, localColor, localWidth, localDash, localDashList);
        }
        ;

nodes   : nodes sp node
	| node
	;

node    : coord comment
        {
	  if (!cl)
	    cl = new ContourLevel(ct->parent_, localLevel, localColor, localWidth, localDash, localDashList);
	  // the sky position, even if the image can't place it
	  ct->auxNativeNode(cl, nodeSky, nodeSys, nodeSkyFrame);

	  // a vertex that can't be placed breaks the line there. it used
	  // to come back as image (0,0), drawing a spike to the corner.
	  if (nodeBad) {
	    if (cc) {
	      if (cc->lvertex().count() >= 2)
		cl->lcontour().append(cc);
	      else
		delete cc;
	      cc =NULL;
	    }
	  }
	  else {
	    if (!cc)
	      cc = new Contour(cl);
	    cc->lvertex().append(new Vertex($1));
	  }
        }
	;

comment : /* empty */
        | '#' {DISCARD_(1);} STRING
	;

terminator: '\n'
	| ';'
	| EOF_ 
        {
	  if (cl) {
	    ct->contourAppendAux(cl);
	    cl =NULL;
	  }
	  YYACCEPT;
	}
	;

numeric	: REAL {$$=$1;}
	| INT {$$=$1;}
	;

debug	: ON_ {yydebug=1;}
	| OFF_ {yydebug=0;}
	;

yesno	: INT {$$=($1 ? 1 : 0);}

	| YES_ {$$=1;}
	| Y_ {$$=1;}
	| ON_ {$$=1;}
	| TRUE_ {$$=1;}

	| NO_ {$$=0;}
	| N_ {$$=0;}
	| OFF_ {$$=0;}
	| FALSE_ {$$=0;}
	;

sp	: /* empty */
	| ','
	;

sexagesimal: SEXSTR {$$ = parseSEXStr($1);}
	;

hms	: HMSSTR {$$ = parseHMSStr($1);}
	;

dms	: DMSSTR {$$ = parseDMSStr($1);}
	;

initGlobal: {
          cl = NULL;
	  cc = NULL;
	  globalSystem = Coord::WCS;
	  globalWCS = ct->contourWCSSystem();
	  globalSky = ct->contourWCSSkyFrame();
	  strcpy(globalColor,"green");
	  globalDash = 0;
	  globalDashList[0] = 8;
	  globalDashList[1] = 3;
          globalWidth = 1;
	} 
	;

initLocal: {
	  strcpy(localColor,globalColor);
	  localDash = globalDash;
	  localDashList[0] = globalDashList[0];
	  localDashList[1] = globalDashList[1];
          localWidth = globalWidth;
	} 
	;

coordSystem :IMAGE_ {$$ = Coord::IMAGE;}
	| PHYSICAL_ {$$ = Coord::PHYSICAL;}
	| DETECTOR_ {$$ = Coord::DETECTOR;}
	| AMPLIFIER_ {$$ = Coord::AMPLIFIER;}
	| wcsSystem {$$ = $1; globalWCS = (Coord::CoordSystem)$1;}
	;

wcsSystem : WCS_ {$$ = Coord::WCS;}
	| WCSA_ {$$ = Coord::WCSA;}
	| WCSB_ {$$ = Coord::WCSB;}
	| WCSC_ {$$ = Coord::WCSC;}
	| WCSD_ {$$ = Coord::WCSD;}
	| WCSE_ {$$ = Coord::WCSE;}
	| WCSF_ {$$ = Coord::WCSF;}
	| WCSG_ {$$ = Coord::WCSG;}
	| WCSH_ {$$ = Coord::WCSH;}
	| WCSI_ {$$ = Coord::WCSI;}
	| WCSJ_ {$$ = Coord::WCSJ;}
	| WCSK_ {$$ = Coord::WCSK;}
	| WCSL_ {$$ = Coord::WCSL;}
	| WCSM_ {$$ = Coord::WCSM;}
	| WCSN_ {$$ = Coord::WCSN;}
	| WCSO_ {$$ = Coord::WCSO;}
	| WCSP_ {$$ = Coord::WCSP;}
	| WCSQ_ {$$ = Coord::WCSQ;}
	| WCSR_ {$$ = Coord::WCSR;}
	| WCSS_ {$$ = Coord::WCSS;}
	| WCST_ {$$ = Coord::WCST;}
	| WCSU_ {$$ = Coord::WCSU;}
	| WCSV_ {$$ = Coord::WCSV;}
	| WCSW_ {$$ = Coord::WCSW;}
	| WCSX_ {$$ = Coord::WCSX;}
	| WCSY_ {$$ = Coord::WCSY;}
	| WCSZ_ {$$ = Coord::WCSZ;}
	;

skyFrame : FK4_ {$$ = Coord::FK4;}
	| B1950_ {$$ = Coord::FK4;}
	| FK5_ {$$ = Coord::FK5;}
	| J2000_ {$$ = Coord::FK5;}
	| ICRS_ {$$ = Coord::ICRS;}
	| GALACTIC_ {$$ = Coord::GALACTIC;}
	| ECLIPTIC_ {$$ = Coord::ECLIPTIC;}
	;

global	: global sp globalProperty
	| globalProperty
	;

globalProperty : COLOR_ '=' STRING {strncpy(globalColor,$3,16);}
        | DASH_ '=' yesno {globalDash = $3;}
	| DASHLIST_ '=' INT INT {globalDashList[0] =$3; globalDashList[1] =$4;}
	| WCS_ '=' wcsSystem {globalWCS = (Coord::CoordSystem)$3;}
	| WIDTH_ '=' INT {globalWidth = $3;}
	;

local	: local sp localProperty
	| localProperty
	;

localProperty : COLOR_ '=' STRING {strncpy(localColor,$3,16);}
        | DASH_ '=' yesno {localDash = $3;}
	| DASHLIST_ '=' INT INT {localDashList[0] =$3; localDashList[1] =$4;}
	| WIDTH_ '=' INT {localWidth = $3;}
	;

coord	: sexagesimal sp sexagesimal
	{
	  Coord::CoordSystem sys = checkWCSSystem();
	  Coord::SkyFrame sky = checkWCSSky();
	  if (sky == Coord::GALACTIC || sky == Coord::ECLIPTIC) 
	    mapNode(ct, $$, Vector($1,$3), sys, sky);
	  else
	    mapNode(ct, $$, Vector($1*360./24.,$3), sys, sky);
	}
	| hms sp dms
        {
	  mapNode(ct, $$, Vector($1,$3), checkWCSSystem(), checkWCSSky());
	}
	| dms sp dms
        {
	  mapNode(ct, $$, Vector($1,$3), checkWCSSystem(), checkWCSSky());
	}
	| numeric sp numeric 
	{
	  mapNode(ct, $$, Vector($1,$3), globalSystem, globalSky);
	}
	| ANGDEGREE sp ANGDEGREE
	{
	  mapNode(ct, $$, Vector($1,$3), checkWCSSystem(), checkWCSSky());
	}
	| IMGCOORD sp IMGCOORD
	{
	  mapNode(ct, $$, Vector($1,$3), Coord::IMAGE, Coord::ICRS);
	}
	| PHYCOORD sp PHYCOORD
	{
	  mapNode(ct, $$, Vector($1,$3), Coord::PHYSICAL, Coord::ICRS);
	}
	;
%%

static Coord::CoordSystem checkWCSSystem()
{
  switch (globalSystem) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
    return Coord::WCS;
  default:
   return globalSystem;
  }
}

static Coord::SkyFrame checkWCSSky()
{
  switch (globalSystem) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
    return Coord::ICRS;
  default:
   return globalSky;
  }
}

// map one vertex to REF, and note whether it could be placed
static void mapNode(Context* ct, double* vv, const Vector& in,
		    Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  nodeSky = in;
  nodeSys = sys;
  nodeSkyFrame = sky;

  maperr =0;
  Vector rr = FITSPTR->mapToRef(in, sys, sky);
  nodeBad = maperr || !isfinite(rr[0]) || !isfinite(rr[1]);
  vv[0] = rr[0];
  vv[1] = rr[1];
  vv[2] = rr[2];
}
