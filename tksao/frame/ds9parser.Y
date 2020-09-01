// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

%pure-parser
%parse-param {Base* fr}
%lex-param {mkFlexLexer* ll}
%parse-param {mkFlexLexer* ll}

%{
#define YYDEBUG 1

#define FITSPTR (fr->findFits(globalTile))
#define DISCARD_(x) {yyclearin; mkDiscard(x);}

#include <math.h>
#include <string.h>
#include <iostream>

#include "base.h"
#include "fitsimage.h"
#include "basemarker.h"
#include "point.h"

#undef yyFlexLexer
#define yyFlexLexer mkFlexLexer
#include <FlexLexer.h>

extern int mklex(void*, mkFlexLexer*);
extern void mkerror(Base*, mkFlexLexer*, const char*);
extern void mkDiscard(int);

static Coord::CoordSystem globalWCS;

static Coord::CoordSystem globalSystem;
static Coord::CoordSystem localSystem;
static Coord::SkyFrame globalSky;
static Coord::SkyFrame localSky;

static int globalTile;

static unsigned short globalProps;
static unsigned short localProps;

static int globalDash[2];
static int localDash[2];

static int globalWidth;
static int localWidth;

static char globalColor[32];
static char localColor[32];

static char globalFont[32];
static char localFont[32];

static char globalText[80];
static char localText[80];

static char localComment[80];

static int globalFill;
static int localFill;

static int globalLine1;
static int localLine1;
static int globalLine2;
static int localLine2;

static int globalVector;
static int localVector;

static int globalComposite;
static int localComposite;

static int globalPoint;
static int localPoint;
static int globalPointSize;
static int localPointSize;

static double globalTextAngle;
static double localTextAngle;
static int globalTextRotate;
static int localTextRotate;

static Coord::CoordSystem globalRulerCoordSystem;
static Coord::CoordSystem localRulerCoordSystem;
static Coord::SkyFrame globalRulerSkyFrame;
static Coord::SkyFrame localRulerSkyFrame;
static Coord::CoordSystem globalRulerDistSystem;
static Coord::CoordSystem localRulerDistSystem;
static Coord::DistFormat globalRulerDistFormat;
static Coord::DistFormat localRulerDistFormat;
static char globalRulerDistSpec[32];
static char localRulerDistSpec[32];

static Coord::CoordSystem globalCompassCoordSystem;
static Coord::SkyFrame globalCompassSkyFrame;
static char globalCompassNorth[80];
static char globalCompassEast[80];
static int globalCompassNArrow;
static int globalCompassEArrow;
static Coord::CoordSystem localCompassCoordSystem;
static Coord::SkyFrame localCompassSkyFrame;
static char localCompassNorth[80];
static char localCompassEast[80];
static int localCompassNArrow;
static int localCompassEArrow;

static int localCpanda;
static int localEpanda;
static int localBpanda;

static List<Vertex> polylist;
static List<Tag> taglist;
static List<CallBack> cblist;

static double aAnnuli[MAXANNULI];
static Vector aVector[MAXANNULI];
static int aNum;
static int aNumsao;
static int aStatus;
static int cStatus;
static Vector aCenter;
static double aAngles[MAXANGLES];
static int aAngNum;
static double aAngle;
static unsigned short aProps;
static char aColor[16];
static int aWidth;
static int aDash[2];
static char aFont[32];
static char aText[80];
static char aComment[80];

static void setProps(unsigned short* props, unsigned short prop, int value);
static Coord::CoordSystem checkWCSSystem();
static Coord::SkyFrame checkWCSSky();
%}

%union {
#define MKBUFSIZE 2048
  double real;
  int integer;
  char str[MKBUFSIZE];
  double vector[3];
}

%type <real> numeric
%type <integer> yesno

%type <real> angle
%type <real> optangle
%type <real> value
%type <vector> vvalue
%type <real> sexagesimal
%type <real> hms
%type <real> dms
%type <vector> coord
%type <integer> coordSystem
%type <integer> wcsSystem
%type <integer> skyFrame
%type <integer> skyDist
%type <integer> property
%type <integer> callBack
%type <integer> pointShape
%type <integer> numberof

%token <integer> INT
%token <real> REAL
%token <str> STRING

%token <real> ANGDEGREE
%token <real> ANGRADIAN
%token <real> ARCMINUTE
%token <real> ARCSECOND
%token <real> PHYCOORD
%token <real> IMGCOORD

%token <str> SEXSTR
%token <str> HMSSTR
%token <str> DMSSTR

%token EOF_

%token AMPLIFIER_
%token ANNULUS_
%token ARCMIN_
%token ARCSEC_
%token ARROW_
%token B1950_
%token BACKGROUND_
%token BEGIN_
%token BOX_
%token BOXCIRCLE_
%token BPANDA_
%token CALLBACK_
%token CIRCLE_
%token CIRCLE3D_
%token COLOR_
%token COMPASS_
%token COMPOSITE_
%token CPANDA_
%token CROSS_
%token DASH_
%token DASHLIST_
%token DEBUG_
%token DEGREES_
%token DELETE_
%token DETECTOR_
%token DIAMOND_
%token ECLIPTIC_
%token EDIT_
%token ELLIPSE_
%token END_
%token EPANDA_
%token FALSE_
%token FIELD_
%token FILL_
%token FIXED_
%token FK4_
%token FK5_
%token FORMAT_
%token FONT_
%token GALACTIC_
%token GLOBAL_
%token HIGHLITE_
%token ICRS_
%token IGNORE_
%token IMAGE_
%token INCLUDE_
%token J2000_
%token KEY_
%token LINE_
%token LINEAR_
%token MOVE_
%token N_
%token NO_
%token OFF_
%token ON_
%token PHYSICAL_
%token PIE_
%token PIXELS_
%token POINT_
%token POLYGON_
%token PROJECTION_
%token PROPERTY_
%token ROTATE_
%token ROTBOX_
%token RULER_
%token SEGMENT_
%token SELECT_
%token SOURCE_
%token TAG_
%token TEXT_
%token TEXTANGLE_
%token TEXTROTATE_
%token TILE_
%token TRUE_
%token VECTOR_
%token VERSION_
%token UNHIGHLITE_
%token UNSELECT_
%token UPDATE_
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
%token WCS0_
%token WIDTH_
%token X_
%token Y_
%token YES_

%%

start	: initGlobal commands postLocal
	;

commands: commands command terminator
	| command terminator
	;

command : /* empty */
	| DEBUG_ debug
	| VERSION_ {cerr << "DS9 Regions File 3.2" << endl;}

	| GLOBAL_ global comment
	| TILE_ INT {globalTile = $2;}

	| coordSystem {globalSystem=(Coord::CoordSystem)$1;} comment
	| skyFrame {globalSystem=globalWCS; globalSky=(Coord::SkyFrame)$1;} comment
	| LINEAR_ {globalSystem=globalWCS; globalSky=Coord::FK5;} comment

	| initLocal shape
	| initLocal include shape
	| initLocal '#' hash
	;

hash	: nonshape
	| include nonshape
	| TILE_ INT {globalTile = $2;}
        | {DISCARD_(1);} STRING
	;

comment : /* empty */
        | '#' {DISCARD_(1);} STRING
	;

shapeComment : /* empty */ postLocal
        | '#' {DISCARD_(1);} STRING postLocal {strncpy(localComment,$3,80);}
	| '#' local postLocal
	| '#' local {DISCARD_(1);} STRING postLocal {strncpy(localComment,$4,80);}
	;

nonshapeComment : /* empty */ postLocal
        | {DISCARD_(1);} STRING postLocal {strncpy(localComment,$2,80);}
	| local postLocal
	| local {DISCARD_(1);} STRING postLocal {strncpy(localComment,$3,80);}
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

bp	: /* empty */
	| '('
	;

ep	: /* emtpy */
	| ')'
	;

conjunction : /* empty */ {cStatus = 0;}
	| '|' {cStatus = 1;}
	| '|' '|' {cStatus = 1;}
	;

optangle: /* empty */ {$$ = fr->mapAngleToRef(0,localSystem,localSky);}
	| angle {$$ = $1;}
	;

angle	: numeric
        {$$ = fr->mapAngleToRef(zeroTWOPI(degToRad($1)),localSystem,localSky);}
        | ANGDEGREE
	{$$ = fr->mapAngleToRef(zeroTWOPI(degToRad($1)),localSystem,localSky);}
	| ANGRADIAN {$$ = fr->mapAngleToRef($1,localSystem,localSky);}
	;

value	: numeric {$$ = FITSPTR->mapLenToRef($1, localSystem, Coord::DEGREE);}
	| PHYCOORD {$$ = FITSPTR->mapLenToRef($1, Coord::PHYSICAL);}
	| IMGCOORD {$$ = FITSPTR->mapLenToRef($1, Coord::IMAGE);}
	| ANGDEGREE {$$ = FITSPTR->mapLenToRef($1, checkWCSSystem(), Coord::DEGREE);}
	| ARCMINUTE {$$ = FITSPTR->mapLenToRef($1, checkWCSSystem(), Coord::ARCMIN);}
	| ARCSECOND {$$ = FITSPTR->mapLenToRef($1, checkWCSSystem(), Coord::ARCSEC);}
	;

vvalue	: numeric sp numeric 
	{
	  Vector r = FITSPTR->mapLenToRef(Vector($1,$3), localSystem, Coord::DEGREE);
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	| PHYCOORD sp PHYCOORD 
	{
	  Vector r = FITSPTR->mapLenToRef(Vector($1,$3), Coord::PHYSICAL);
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	| IMGCOORD sp IMGCOORD 
	{
	  Vector r = FITSPTR->mapLenToRef(Vector($1,$3), Coord::IMAGE);
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	| ANGDEGREE sp ANGDEGREE
	{
	  Vector r=FITSPTR->mapLenToRef(Vector($1,$3),checkWCSSystem(),Coord::DEGREE);
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	| ARCMINUTE sp ARCMINUTE 
	{
	  Vector r=FITSPTR->mapLenToRef(Vector($1,$3),checkWCSSystem(),Coord::ARCMIN);
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	| ARCSECOND sp ARCSECOND 
	{
	  Vector r=FITSPTR->mapLenToRef(Vector($1,$3),checkWCSSystem(),Coord::ARCSEC);
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	;

numberof: N_ '=' INT {$$ = $3;}
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
	| hms sp dms
        {
	  Vector r = FITSPTR->mapToRef(Vector($1,$3),
	  checkWCSSystem(), checkWCSSky());
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	| dms sp dms
        {
	  Vector r = FITSPTR->mapToRef(Vector($1,$3),
	  checkWCSSystem(), checkWCSSky());
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
	| IMGCOORD sp IMGCOORD
	{
	  Vector r = FITSPTR->mapToRef(Vector($1,$3), Coord::IMAGE);
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	| PHYCOORD sp PHYCOORD
	{
	  Vector r = FITSPTR->mapToRef(Vector($1,$3), Coord::PHYSICAL);
	  $$[0] = r[0];
	  $$[1] = r[1];
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
	| WCS0_ {$$ = Coord::WCS0;}
	;

skyFrame : FK4_ {$$ = Coord::FK4;}
	| B1950_ {$$ = Coord::FK4;}
	| FK5_ {$$ = Coord::FK5;}
	| J2000_ {$$ = Coord::FK5;}
	| ICRS_ {$$ = Coord::ICRS;}
	| GALACTIC_ {$$ = Coord::GALACTIC;}
	| ECLIPTIC_ {$$ = Coord::ECLIPTIC;}
	;

skyDist : DEGREES_ {$$=Coord::DEGREE;}
	| ARCMIN_ {$$=Coord::ARCMIN;}
	| ARCSEC_ {$$=Coord::ARCSEC;}
	;

property : SELECT_ {$$ = Marker::SELECT;}
	| HIGHLITE_ {$$ = Marker::HIGHLITE;}
	| DASH_ {$$ = Marker::DASH;}
	| FIXED_ {$$ = Marker::FIXED;}
	| EDIT_ {$$ = Marker::EDIT;}
	| MOVE_  {$$ = Marker::MOVE;}
	| ROTATE_ {$$ = Marker::ROTATE;}
	| DELETE_ {$$ = Marker::DELETE;}
	| INCLUDE_ {$$ = Marker::INCLUDE;}
	| SOURCE_ {$$ = Marker::SOURCE;}
	;

callBack : SELECT_ {$$ = CallBack::SELECTCB;}
	| UNSELECT_ {$$ = CallBack::UNSELECTCB;}
	| HIGHLITE_ {$$ = CallBack::HIGHLITECB;}
	| UNHIGHLITE_ {$$ = CallBack::UNHIGHLITECB;}
	| BEGIN_ MOVE_  {$$ = CallBack::MOVEBEGINCB;}
	| MOVE_  {$$ = CallBack::MOVECB;}
	| END_ MOVE_  {$$ = CallBack::MOVEENDCB;}
	| BEGIN_ EDIT_ {$$ = CallBack::EDITBEGINCB;}
	| EDIT_ {$$ = CallBack::EDITCB;}
	| END_ EDIT_ {$$ = CallBack::EDITENDCB;}
	| BEGIN_ ROTATE_ {$$ = CallBack::ROTATEBEGINCB;}
	| ROTATE_ {$$ = CallBack::ROTATECB;}
	| END_ ROTATE_ {$$ = CallBack::ROTATEENDCB;}
	| DELETE_ {$$ = CallBack::DELETECB;}
	| TEXT_ {$$ = CallBack::TEXTCB;}
	| COLOR_ {$$ = CallBack::COLORCB;}
	| WIDTH_ {$$ = CallBack::LINEWIDTHCB;}
	| PROPERTY_ {$$ = CallBack::PROPERTYCB;}
	| FONT_ {$$ = CallBack::FONTCB;}
	| KEY_ {$$ = CallBack::KEYCB;}
	| UPDATE_ {$$ = CallBack::UPDATECB;}
	;

global	: global sp globalProperty
	| globalProperty
	;

globalProperty : property '=' yesno 
	{
	  setProps(&globalProps,$1,$3);
	  setProps(&localProps,$1,$3);
	}
	| COLOR_ '=' STRING 
	{
	  strncpy(globalColor,$3,16);
	  strncpy(localColor,$3,16);
	}
	| DASHLIST_ '=' INT INT 
	{
	  globalDash[0] = localDash[0] =$3;
	  globalDash[1] = localDash[1] =$4;
        }
	| WIDTH_ '=' INT {globalWidth = localWidth = $3;}
	| FONT_ '=' STRING 
	{
	  strncpy(globalFont,$3,32);
	  strncpy(localFont,$3,32);
	}
	| TEXT_ '=' STRING 
	{
	  strncpy(globalText,$3,80);
	  strncpy(localText,$3,80);
	}
	| DASH_
	{
	  setProps(&globalProps,Marker::DASH,1);
	  setProps(&localProps,Marker::DASH,1);
	}
	| SOURCE_
	{
	  setProps(&globalProps,Marker::SOURCE,1);
	  setProps(&localProps,Marker::SOURCE,1);
	}
	| BACKGROUND_
	{
	  setProps(&globalProps,Marker::SOURCE,0);
	  setProps(&localProps,Marker::SOURCE,0);
	}
	| POINT_ '=' pointShape {globalPoint = localPoint = $3;}
	| POINT_ '=' pointShape INT 
	{
	  globalPoint = localPoint = $3;
	  globalPointSize = localPointSize = $4;
	}
        | FILL_ '=' INT
	{
	  globalFill = localFill = $3;
	}
	| LINE_ '=' INT INT 
	{
	  globalLine1 = localLine1 = $3;
	  globalLine2 = localLine2 = $4;
	}
	| VECTOR_ '=' INT {globalVector = localVector = $3;}
	| COMPOSITE_ '=' INT
	{
	  globalComposite = localComposite = $3;
	}
	| RULER_ '=' globalRuler {}
        | FORMAT_ '=' STRING {strncpy(globalRulerDistSpec,$3,32);}
	| COMPASS_ '=' globalCompass STRING STRING INT INT
	{
	  strncpy(globalCompassNorth,$4,80);
	  strncpy(globalCompassEast,$5,80);
	  strncpy(localCompassNorth,$4,80);
	  strncpy(localCompassEast,$5,80);
	  globalCompassNArrow = localCompassNArrow = $6;
	  globalCompassEArrow = localCompassEArrow = $7;
	}
	| TEXTANGLE_ '=' angle {globalTextAngle = localTextAngle = $3;}
	| TEXTROTATE_ '=' INT {globalTextRotate = localTextRotate = $3;}
	| WCS_ '=' wcsSystem {globalWCS = (Coord::CoordSystem)$3;}
	;

globalRuler : coordSystem skyFrame coordSystem skyDist
	{
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)$1;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)$2;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)$3;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)$4;
	}
	| coordSystem coordSystem
	{
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)$1;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)$2;
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	}
	| coordSystem skyDist
	{
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)$1;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)$2;
	}
	| skyFrame coordSystem
	{
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)$1;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)$2;
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	}
	| skyFrame skyDist
	{
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)$1;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)$2;
	}
	| LINEAR_ coordSystem
	{
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)$2;
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	}
	| LINEAR_ skyDist
	{
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)$2;
	}
	| skyDist
	{
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::IMAGE;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	}
	| PIXELS_
	{
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::IMAGE;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::IMAGE;
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	}
	;

globalCompass : coordSystem skyFrame
	{
	  globalCompassCoordSystem = localCompassCoordSystem = (Coord::CoordSystem)$1;
	  globalCompassSkyFrame = localCompassSkyFrame = (Coord::SkyFrame)$2;
	}
	| coordSystem
	{
	  globalCompassCoordSystem = localCompassCoordSystem = (Coord::CoordSystem)$1;
	  globalCompassSkyFrame = localCompassSkyFrame = Coord::FK5;
	}
	| skyFrame
	{
	  globalCompassCoordSystem = localCompassCoordSystem = Coord::WCS;
	  globalCompassSkyFrame = localCompassSkyFrame = (Coord::SkyFrame)$1;
	}
	| LINEAR_
	{
	  globalCompassCoordSystem = localCompassCoordSystem = Coord::WCS;
	  globalCompassSkyFrame = localCompassSkyFrame = Coord::FK5;
	}
	;

initGlobal:{
	  // global properties
	  globalSystem = Coord::PHYSICAL;
	  globalWCS = fr->getWCSSystem();
	  globalSky = fr->getWCSSkyFrame();
	  globalTile = 1;
	  globalProps =
	    Marker::SELECT | Marker::EDIT | Marker::MOVE |
	    Marker::ROTATE | Marker::DELETE | Marker::HIGHLITE |
	    Marker::INCLUDE | Marker::SOURCE;
	  strcpy(globalColor,"green");
	  globalDash[0] = 8;
	  globalDash[1] = 3;
          globalWidth = 1;
	  strcpy(globalFont,"helvetica 10 normal roman");
	  strcpy(globalText,"");

	  // unique properties
	  globalFill = 0;
	  globalLine1 = 0;
	  globalLine2 = 0;
	  globalVector = 1;
	  globalComposite = 1;
	  globalRulerCoordSystem = Coord::PHYSICAL;
	  globalRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = Coord::PHYSICAL;
	  globalRulerDistFormat = Coord::DEGREE;
	  globalRulerDistSpec[0] = '\0';
	  globalCompassCoordSystem = Coord::PHYSICAL;
	  globalCompassSkyFrame = Coord::FK5;
	  strcpy(globalCompassNorth,"N");
	  strcpy(globalCompassEast,"E");
	  globalCompassNArrow = 1;
	  globalCompassEArrow = 1;
	  globalPoint = Point::BOXCIRCLE;
	  globalPointSize = POINTSIZE;
	  globalTextAngle=0;
	  globalTextRotate=1;

	  aStatus = 0;
	  cStatus = 0;
	} 
	;

local	: local sp localProperty
	| localProperty
	;

localProperty : property '=' yesno {setProps(&localProps,$1,$3);}
	| COLOR_ '=' STRING {
	  if (!fr->useMarkerColor())
	    strncpy(localColor,$3,16);
	  }
	| DASHLIST_ '=' INT INT 
	{
	  localDash[0] =$3;
	  localDash[1] =$4;
        }
	| WIDTH_ '=' INT {localWidth = $3;}
	| FONT_ '=' STRING {strncpy(localFont,$3,32);}
	| TEXT_ '=' STRING {strncpy(localText,$3,80);}
	| TAG_ '=' STRING {taglist.append(new Tag($3));}
	| CALLBACK_ '=' callBack STRING STRING {cblist.append(
	    new CallBack(fr->getInterp(),(CallBack::Type)$3,$4,$5));}
	| DASH_ {setProps(&localProps,Marker::DASH,1);}
	| SOURCE_ {setProps(&localProps,Marker::SOURCE,1);}
	| BACKGROUND_ {setProps(&localProps,Marker::SOURCE,0);}

	| POINT_ '=' pointShape {localPoint = $3;}
	| POINT_ '=' pointShape INT {localPoint = $3; localPointSize = $4;}
        | FILL_ '=' INT {localFill=$3;}
	| LINE_ '=' INT INT {localLine1=$3; localLine2=$4;}
	| VECTOR_ '=' INT {localVector=$3;}
	| COMPOSITE_ '=' INT {localComposite=$3;}
	| RULER_ '=' localRuler
        | FORMAT_ '=' STRING {strncpy(localRulerDistSpec,$3,32);}
	| COMPASS_ '=' localCompass STRING STRING INT INT
	{
	  strncpy(localCompassNorth,$4,80);
	  strncpy(localCompassEast,$5,80);
	  localCompassNArrow = $6;
	  localCompassEArrow = $7;
	}
	| TEXTANGLE_ '=' angle {localTextAngle=$3;}
	| TEXTROTATE_ '=' INT {localTextRotate=$3;}
	| CPANDA_ '=' localCpanda
	| EPANDA_ '=' localEpanda
	| BPANDA_ '=' localBpanda
	;

localRuler : coordSystem skyFrame coordSystem skyDist
	{
	  localRulerCoordSystem = (Coord::CoordSystem)$1;
	  localRulerSkyFrame = (Coord::SkyFrame)$2;
	  localRulerDistSystem = (Coord::CoordSystem)$3;
	  localRulerDistFormat = (Coord::DistFormat)$4;
	}
	| coordSystem coordSystem
	{
	  localRulerCoordSystem = (Coord::CoordSystem)$1;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = (Coord::CoordSystem)$2;
	  localRulerDistFormat = Coord::DEGREE;
	}
	| coordSystem skyDist
	{
	  localRulerCoordSystem = (Coord::CoordSystem)$1;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)$2;
	}
	| skyFrame coordSystem
	{
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = (Coord::SkyFrame)$1;
	  localRulerDistSystem = (Coord::CoordSystem)$2;
	  localRulerDistFormat = Coord::DEGREE;
	}
	| skyFrame skyDist
	{
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = (Coord::SkyFrame)$1;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)$2;
	}
	| LINEAR_ coordSystem
	{
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = (Coord::CoordSystem)$2;
	  localRulerDistFormat = Coord::DEGREE;
	}
	| LINEAR_ skyDist
	{
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)$2;
	}
	| skyDist
	{
	  localRulerCoordSystem = Coord::IMAGE;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)$1;
	}
	| PIXELS_
	{
	  localRulerCoordSystem = Coord::IMAGE;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::IMAGE;
	  localRulerDistFormat = Coord::DEGREE;
	}
	;

localCompass : coordSystem skyFrame
	{
	  localCompassCoordSystem = (Coord::CoordSystem)$1;
	  localCompassSkyFrame = (Coord::SkyFrame)$2;
	}
	| coordSystem
	{
	  localCompassCoordSystem = (Coord::CoordSystem)$1;
	  localCompassSkyFrame = Coord::FK5;
	}
	| skyFrame
	{
	  localCompassCoordSystem = Coord::WCS;
	  localCompassSkyFrame = (Coord::SkyFrame)$1;
	}
	| LINEAR_
	{
	  localCompassCoordSystem = Coord::WCS;
	  localCompassSkyFrame = Coord::FK5;
	}
	;

localCpanda: {aNum=0; aAngNum=0;} '(' aAngs ')' '(' aRads ')' {localCpanda = 2;}
	| IGNORE_ {localCpanda=0;}
	;

localEpanda: {aNum=0; aAngNum=0, aAngle=0;} 
	  '(' aAngs ')' '(' vRads ')' '(' angle ')' {aAngle=$9;localEpanda=2;}
	| IGNORE_ {localEpanda=0;}
	;

localBpanda: {aNum=0; aAngNum=0, aAngle=0;} 
	  '(' aAngs ')' '(' vRads ')' '(' angle ')' {aAngle=$9;localBpanda=2;}
	| IGNORE_ {localBpanda=0;}
	;

initLocal : {
	  // reset maperr flag
	  maperr = 0;

	  // needed for annulus, ellipse annulus, and box annulus
	  aNum = 2;

	  // composite (previous conjunction found?)
	  if (!cStatus) fr->resetCompositeMarker();

	  // global properties
	  localSystem = globalSystem;
	  localSky = globalSky;
	  localProps = globalProps;
	  if (fr->useMarkerColor())
	    strcpy(localColor,fr->markerColor());
	  else
	    strcpy(localColor,globalColor);
	  localDash[0] = globalDash[0];
	  localDash[1] = globalDash[1];
	  localWidth = globalWidth;
	  strcpy(localFont,globalFont);
	  strcpy(localText,globalText);
	  strcpy(localComment,"");
	  taglist.deleteAll();
	  cblist.deleteAll();

	  // unique properties
	  localFill = globalFill;
	  localLine1 = globalLine1;
	  localLine2 = globalLine2;
	  localVector = globalVector;
	  localComposite = globalComposite;
	  localPoint = globalPoint;
	  localPointSize = globalPointSize;
	  localRulerCoordSystem = globalRulerCoordSystem;
	  localRulerSkyFrame = globalRulerSkyFrame;
	  localRulerDistSystem = globalRulerDistSystem;
	  localRulerDistFormat = globalRulerDistFormat;
	  strncpy(localRulerDistSpec,globalRulerDistSpec,32);
	  localCompassCoordSystem = globalCompassCoordSystem;
	  localCompassSkyFrame = globalCompassSkyFrame;
	  strncpy(localCompassNorth,globalCompassNorth,80);
	  strncpy(localCompassEast,globalCompassEast,80);
	  localCompassNArrow = globalCompassNArrow;
	  localCompassEArrow = globalCompassEArrow;
	  localTextAngle = globalTextAngle;
	  localTextRotate = globalTextRotate;
	  localCpanda = 1;
	  localEpanda = 1;
	  localBpanda = 1;
	}
	;

pointShape : CIRCLE_ {$$ = Point::CIRCLE;}
	| BOX_ {$$ = Point::BOX;}
	| DIAMOND_ {$$ = Point::DIAMOND;}
	| CROSS_ {$$ = Point::CROSS;}
	| X_ {$$ = Point::EX;}
	| ARROW_ {$$ = Point::ARROW;}
	| BOXCIRCLE_ {$$ = Point::BOXCIRCLE;}
	;

include	: '+' {setProps(&localProps, Marker::INCLUDE, 1);}
	| '-' {setProps(&localProps, Marker::INCLUDE, 0);}
	;

nonshape : VECTOR_ bp coord sp value sp angle ep conjunction nonshapeComment
	{
	  fr->createVectCmd(Vector($3),
	  $5,$7,
	  localVector,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| SEGMENT_ {polylist.deleteAll();} bp polyNodes ep conjunction 
	    nonshapeComment
	{
	  fr->createSegmentCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| TEXT_ bp coord ep conjunction nonshapeComment
	{
	  fr->createTextCmd(Vector($3),
	  localTextAngle,localTextRotate,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| RULER_ bp coord sp coord ep conjunction nonshapeComment
	{
	  fr->createRulerCmd(Vector($3),
	  Vector($5),
   	  localRulerCoordSystem, localRulerSkyFrame,
	  localRulerDistSystem, localRulerDistFormat, localRulerDistSpec,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| COMPASS_ bp coord sp value ep conjunction nonshapeComment
	{
	  fr->createCompassCmd(Vector($3), 
	  $5,
	  localCompassNorth, localCompassEast, 
	  localCompassNArrow, localCompassEArrow,
   	  localCompassCoordSystem, localCompassSkyFrame,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| PROJECTION_ bp coord sp coord sp value ep conjunction nonshapeComment
	{
	  fr->createProjectionCmd(Vector($3), 
	  Vector($5),
	  $7,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| CIRCLE3D_ bp coord sp value ep conjunction nonshapeComment
	{
	  // backward compatibility
	  fr->createCircleCmd(Vector($3),
	  $5, localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| COMPOSITE_ bp coord sp optangle ep conjunction nonshapeComment
	{
	  fr->createCompositeCmd(Vector($3),
	  $5, localComposite,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	;

shape	: CIRCLE_ bp coord sp value ep conjunction shapeComment
	{
	  fr->createCircleCmd(Vector($3),
	  $5, localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| CIRCLE3D_ bp coord sp value ep conjunction shapeComment
	{
	  // backwards compatibility
	  fr->createCircleCmd(Vector($3),
          $5, localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| ELLIPSE_ bp coord sp vvalue sp optangle ep conjunction shapeComment
	{
	  // for ellipse annulus
	  aStatus = 1;
	  aCenter = Vector($3);
	  aAngles[0] = $7;
	  aVector[0] = Vector($5);
	  aNumsao = 1;
	  strncpy(aColor,localColor,16);
	  aDash[0] = localDash[0];
	  aDash[1] = localDash[1];
	  aWidth = localWidth;
	  strncpy(aFont,localFont,32);
	  strncpy(aText,localText,80);
	  strncpy(aComment,localComment,80);
	  aProps = localProps;

	  fr->createEllipseCmd(Vector($3),
	  Vector($5),
	  $7, localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| BOX_ bp coord sp vvalue sp optangle ep conjunction shapeComment
	{
	  // for box annulus
	  aStatus = 3;
	  aCenter = Vector($3);
	  aAngles[0] = $7;
	  aVector[0] = Vector($5);
	  aNumsao = 1;
	  strncpy(aColor,localColor,16);
	  aDash[0] = localDash[0];
	  aDash[1] = localDash[1];
	  aWidth = localWidth;
	  strncpy(aFont,localFont,32);
	  strncpy(aText,localText,80);
	  strncpy(aComment,localComment,80);
	  aProps = localProps;

	  fr->createBoxCmd(Vector($3),
	  Vector($5),
	  $7, localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| ROTBOX_ bp coord sp vvalue sp optangle ep conjunction shapeComment
	{
	  // backwards compatibility
	  fr->createBoxCmd(Vector($3),
	  Vector($5),
	  $7, localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| POLYGON_ {polylist.deleteAll();} bp polyNodes ep conjunction 
	    shapeComment
	{
	  fr->createPolygonCmd(polylist, localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| SEGMENT_ {polylist.deleteAll();} bp polyNodes ep conjunction 
	    shapeComment
	{
	  fr->createSegmentCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}

	| LINE_ bp coord sp coord ep conjunction shapeComment
	{
	  fr->createLineCmd(Vector($3),
	  Vector($5),
	  localLine1,localLine2,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| VECTOR_ bp coord sp value sp angle ep conjunction shapeComment
	{
	  fr->createVectCmd(Vector($3),
	  $5,$7,
	  localVector,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
 	| TEXT_ bp coord ep conjunction shapeComment
	{
	  fr->createTextCmd(Vector($3),
	   localTextAngle,localTextRotate,
	   localColor,localDash,localWidth,localFont,
	   localText,localProps,localComment,taglist,cblist);
	}
	| TEXT_ bp coord sp STRING ep {strncpy(localText,$5,80);} conjunction 
	    shapeComment
	{
	  fr->createTextCmd(Vector($3),
	  localTextAngle,localTextRotate,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| POINT_ bp coord ep conjunction shapeComment 
	{
	  fr->createPointCmd(Vector($3), 
	  (Point::PointShape)localPoint, localPointSize, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| CIRCLE_ POINT_ bp coord ep conjunction shapeComment
	{
	  // backwards compatibility
	  fr->createPointCmd(Vector($4), Point::CIRCLE, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| BOX_ POINT_ bp coord ep conjunction shapeComment
	{
	  // backwards compatibility
	  fr->createPointCmd(Vector($4), Point::BOX, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| DIAMOND_ POINT_ bp coord ep conjunction shapeComment
	{
	  // backwards compatibility
	  fr->createPointCmd(Vector($4), Point::DIAMOND, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| CROSS_ POINT_ bp coord ep conjunction shapeComment
	{
	  // backwards compatibility
	  fr->createPointCmd(Vector($4), Point::CROSS, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| X_ POINT_ bp coord ep conjunction shapeComment
	{
	  // backwards compatibility
	  fr->createPointCmd(Vector($4), Point::EX, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| ARROW_ POINT_ bp coord ep conjunction shapeComment
	{
	  // backwards compatibility
	  fr->createPointCmd(Vector($4), Point::ARROW, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| BOXCIRCLE_ POINT_ bp coord ep conjunction shapeComment
	{
	  // backwards compatibility
	  fr->createPointCmd(Vector($4), Point::BOXCIRCLE, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| RULER_ bp coord sp coord ep conjunction shapeComment
	{
	  fr->createRulerCmd(Vector($3),
	  Vector($5),
   	  localRulerCoordSystem, localRulerSkyFrame,
          localRulerDistSystem, localRulerDistFormat, localRulerDistSpec,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| COMPASS_ bp coord sp value ep conjunction shapeComment
	{
	  fr->createCompassCmd(Vector($3), 
	  $5,
	  localCompassNorth, localCompassEast, 
	  localCompassNArrow, localCompassEArrow,
   	  localCompassCoordSystem, localCompassSkyFrame,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| PROJECTION_ bp coord sp coord sp value ep conjunction shapeComment
	{
	  fr->createProjectionCmd(Vector($3),
	  Vector($5),
	  $7,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| ANNULUS_ bp coord sp value sp value ep conjunction shapeComment
	{
	  fr->createAnnulusCmd(Vector($3),
	  $5,$7,1,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| ANNULUS_ bp coord sp value sp value sp aRads ep conjunction 
	    shapeComment
	{
	  aAnnuli[0] = $5;
	  aAnnuli[1] = $7;
	  fr->createAnnulusCmd(Vector($3),
	    aNum,aAnnuli,
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	}
	| ANNULUS_ bp coord sp value sp value sp numberof ep conjunction 
	    shapeComment
	{
	  fr->createAnnulusCmd(Vector($3),
	  $5,$7,$9,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	| ELLIPSE_ bp coord sp vvalue sp vvalue sp optangle ep conjunction 
	    shapeComment
	{
	  // prefered syntax
	  fr->createEllipseAnnulusCmd(Vector($3),
	    Vector($5),Vector($7),1,
	    $9,
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	}
	| ELLIPSE_ bp coord sp vvalue sp vvalue sp 
	    numberof sp optangle ep conjunction shapeComment
	{
	  // prefered syntax
	  fr->createEllipseAnnulusCmd(Vector($3),
	    Vector($5),Vector($7),$9,
	    $11,
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	}
	| ELLIPSE_ bp coord sp vvalue sp vvalue sp
	    vRads sp optangle ep conjunction shapeComment
	{
	  // prefered syntax
	  aVector[0] = Vector($5);
	  aVector[1] = Vector($7);
	  fr->createEllipseAnnulusCmd(Vector($3),
	    aNum,aVector,
	    $11,
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	}
	| ELLIPSE_ bp coord sp vvalue sp optangle ep '&' '!' 
	  ELLIPSE_ bp coord sp vvalue sp optangle ep
	{	
	  // backwards compatibility
	  // old saoimage syntax
	  aStatus = 2;
	  aVector[aNumsao++] = Vector($5);
	}
	| BOX_ bp coord sp vvalue sp vvalue sp optangle ep conjunction 
	    shapeComment
	{
	  // prefered syntax
	  fr->createBoxAnnulusCmd(Vector($3),
	    Vector($5),Vector($7),1,
	    $9,
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	}
	| BOX_ bp coord sp vvalue sp vvalue sp 
	    vRads sp optangle ep conjunction shapeComment
	{
	  // prefered syntax
	  aVector[0] = Vector($5);
	  aVector[1] = Vector($7);
	  fr->createBoxAnnulusCmd(Vector($3),
	    aNum,aVector,
	    $11,
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	}
	| BOX_ bp coord sp vvalue sp vvalue sp 
	    numberof sp optangle ep conjunction shapeComment
	{
	  // prefered syntax
	  fr->createBoxAnnulusCmd(Vector($3),
	    Vector($5),Vector($7),$9,
	    $11,
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	}
	| BOX_ bp coord sp vvalue sp optangle ep '&' '!' 
	  BOX_ bp coord sp vvalue sp optangle ep
	{	
	  // backwards compatibility
          // old saoimage syntax
	  aStatus = 4;
	  aVector[aNumsao++] = Vector($5);
	}

	| CPANDA_ bp coord sp angle sp angle sp INT sp 
	    value sp value sp INT ep conjunction shapeComment
	{
	  switch (localCpanda) {
	  case 0: /* ignore it */
	    break;
	  case 1: /* normal cpanda */
	    fr->createCpandaCmd(Vector($3),
	      $5,$7,$9,
	      $11,$13,$15,
	      localColor,localDash,localWidth,localFont,
	      localText,localProps,localComment,taglist,cblist);
	    break;
	  case 2: /* one of our special pandas */
	    fr->createCpandaCmd(Vector($3),
	      aAngNum,aAngles,
	      aNum,aAnnuli,
	      localColor,localDash,localWidth,localFont,
	      localText,localProps,localComment,taglist,cblist);
	    break;
	  }
	}
	| EPANDA_ bp coord sp angle sp angle sp INT sp 
	    vvalue sp vvalue sp INT sp optangle ep conjunction shapeComment
	{
	  switch (localEpanda) {
	  case 0: /* ignore it */
	    break;
	  case 1: /* normal epanda */
	    fr->createEpandaCmd(Vector($3),
	      $5,$7,$9,
	      Vector($11),Vector($13),$15,
	      $17,
	      localColor,localDash,localWidth,localFont,
	      localText,localProps,localComment,taglist,cblist);
	    break;
	  case 2: /* one of our special pandas */
	    fr->createEpandaCmd(Vector($3),
	      aAngNum,aAngles,
	      aNum,aVector,
	      aAngle,
	      localColor,localDash,localWidth,localFont,
	      localText,localProps,localComment,taglist,cblist);
	    break;
	  }
	}
	| BPANDA_ bp coord sp angle sp angle sp INT sp 
	    vvalue sp vvalue sp INT sp optangle ep conjunction shapeComment
	{
	  switch (localBpanda) {
	  case 0: /* ignore it */
	    break;
	  case 1: /* normal bpanda */
	    fr->createBpandaCmd(Vector($3),
	      $5,$7,$9,
	      Vector($11),Vector($13),$15,
	      $17,
	      localColor,localDash,localWidth,localFont,
	      localText,localProps,localComment,taglist,cblist);
	    break;
	  case 2: /* one of our special pandas */
	    fr->createBpandaCmd(Vector($3),
	      aAngNum,aAngles,
	      aNum,aVector,
	      aAngle,
	      localColor,localDash,localWidth,localFont,
	      localText,localProps,localComment,taglist,cblist);
	    break;
	  }
	}

	| PIE_ bp coord sp angle sp angle ep conjunction shapeComment
	| PIE_ bp coord sp angle sp angle sp aAngs ep conjunction shapeComment
	| PIE_ bp coord sp angle sp angle sp numberof ep conjunction 
	    shapeComment
	| FIELD_ bp ep conjunction shapeComment

	| COMPOSITE_ bp coord sp optangle ep conjunction shapeComment
	{
	  fr->createCompositeCmd(Vector($3),
	  $5, localComposite,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	}
	;

polyNodes : polyNodes sp polyNode
	| polyNode
	;

polyNode : coord {polylist.append(new Vertex($1));}
	;

aRads	: aRads sp aRad
	| aRad
	;

aRad	: value 
	{
	  if (aNum < MAXANNULI)
	    aAnnuli[aNum++] = $1;
	}
	;

aAngs	: aAngs sp aAng
	| aAng
	;

aAng	: angle 
	{
	  if (aAngNum < MAXANGLES)
	    aAngles[aAngNum++] = $1;
	}
	;

vRads	: vRads sp vRad
	| vRad
	;

vRad	: value sp value {aVector[aNum++] = Vector($1,$3);}
	;

postLocal : /* empty */
	{
	  // old style annulus
	  switch (aStatus) {
	  case 0: // do nothing
	    break;
	  case 1: // we found just an ellipse, do nothing
	    break;
	  case 2: // ok we have an ellipse annulus
	    fr->markerDeleteLastCmd(); // delete the previous ellipse
	    fr->createEllipseAnnulusCmd(aCenter,
	      aNumsao,aVector,
	      aAngles[0],
	      aColor,aDash,aWidth,aFont,aText,aProps,aComment,taglist,cblist);
	    break;
	  case 3: // we found just a box, do nothing
	    break;
	  case 4: // ok, we have a box annulus
	    fr->markerDeleteLastCmd(); // delete the previous box
	    fr->createBoxAnnulusCmd(aCenter,
	      aNumsao,aVector,
	      aAngles[0],
	      aColor,aDash,aWidth,aFont,aText,aProps,aComment,taglist,cblist);
	    break;
	  }
	  aStatus = 0;
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

