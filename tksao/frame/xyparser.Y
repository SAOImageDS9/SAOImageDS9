// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

%pure-parser
%parse-param {Base* fr}
%lex-param {xyFlexLexer* ll}
%parse-param {xyFlexLexer* ll}

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
#define yyFlexLexer xyFlexLexer
#include <FlexLexer.h>

extern int xylex(void*, xyFlexLexer*);
extern void xyerror(Base*, xyFlexLexer*, const char*);

static char color[32];
static int dash[] = {8,3};
//static int fill_ =0;
static const char *font = "helvetica 10 normal roman";
static const char *text = "";

static Coord::CoordSystem globalSystem;
static Coord::SkyFrame globalSky;
static Coord::CoordSystem localSystem;
static Coord::SkyFrame localSky;

static List<Tag> taglist;
static List<CallBack> cblist;
%}

%union {
#define XYBUFSIZE 2048
  double real;
  int integer;
  char str[XYBUFSIZE];
  double vector[3];
}

%type <real> numeric

%type <real> sexagesimal
%type <real> hms
%type <real> dms
%type <vector> coord
%type <integer> coordSystem
%type <integer> skyFrame

%token <integer> INT
%token <real> REAL

%token <real> ANGDEGREE

%token <str> SEXSTR
%token <str> HMSSTR
%token <str> DMSSTR

%token EOF_

%token AMPLIFIER_
%token B1950_
%token CCD_
%token DEBUG_
%token DETECTOR_
%token ECLIPTIC_
%token FK4_
%token FK5_
%token GALACTIC_
%token ICRS_
%token IMAGE_
%token J2000_
%token LOGICAL_
%token OFF_
%token ON_
%token PHYSICAL_
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

%%

start	: {
  strcpy(color, fr->markerColor());
  globalSystem = fr->xySystem(); 
  globalSky = fr->xySky();
 } commands
	;

commands: commands command terminator
	| command terminator
	;

command : /* empty */
	| DEBUG_ debug
	| VERSION_ {cerr << "X Y Format 1.0" << endl;}
	| coordSystem {globalSystem = (Coord::CoordSystem)$1;}
	| coordSystem skyFrame 
	  {globalSystem = (Coord::CoordSystem)$1; globalSky = (Coord::SkyFrame)$2;}
	| {localSystem = globalSystem; localSky = globalSky; maperr = 0;} shape comment
	;

comment	: /* empty */
	| junks
	;

junks	: junks junk
	| junk
	;

junk	:  numeric {}
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

sexagesimal: SEXSTR {$$ = parseSEXStr($1);}
	;

hms	: HMSSTR {$$ = parseHMSStr($1);}
	;

dms	: DMSSTR {$$ = parseDMSStr($1);}
	;

coord	: sexagesimal sp sexagesimal
	{
	  Vector r;
	  if (localSky == Coord::GALACTIC || localSky == Coord::ECLIPTIC) 
	    r = FITSPTR->mapToRef(Vector($1,$3),localSystem,localSky);
	  else
	    r = FITSPTR->mapToRef(Vector($1*360./24.,$3),localSystem,localSky);
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	| hms sp dms
        {
	  Vector r = FITSPTR->mapToRef(Vector($1,$3),localSystem,localSky);
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	| dms sp dms
        {
	  Vector r = FITSPTR->mapToRef(Vector($1,$3),localSystem,localSky);
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	| numeric sp numeric 
	{
	  Vector r = FITSPTR->mapToRef(Vector($1,$3),localSystem,localSky);
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	| ANGDEGREE sp ANGDEGREE
	{
	  Vector r = FITSPTR->mapToRef(Vector($1,$3),localSystem,localSky);
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	;

coordSystem : IMAGE_ {$$ = Coord::IMAGE;}
	| LOGICAL_ {$$ = Coord::IMAGE;}
	| PHYSICAL_ {$$ = Coord::PHYSICAL;}
	| CCD_ {$$ = Coord::PHYSICAL;}
	| AMPLIFIER_ {$$ = Coord::AMPLIFIER;}
	| DETECTOR_ {$$ = Coord::DETECTOR;}
	| WCS_ {$$ = Coord::WCS;}
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

shape	: coord {fr->createPointCmd(Vector($1), Point::BOXCIRCLE, POINTSIZE, 
	    color,dash,1,font,text,
	    Marker::SELECT | Marker::EDIT | Marker::MOVE | Marker::ROTATE | 
	    Marker::DELETE | Marker::HIGHLITE | 
	    Marker::INCLUDE | Marker::SOURCE,
	    "",taglist,cblist);
	}
	;

%%
