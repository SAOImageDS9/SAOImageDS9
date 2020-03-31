// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __coord_h__
#define __coord_h__

#include <string.h>
#include <math.h>

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#define STRCMP(which,str,cnt) (!strncmp(toConstLower(which), str, cnt) && strlen(which)==cnt)

#ifndef __CYGWIN__
static const double M_TWOPI = 2*M_PI;
#endif
static const double M_THREEPI = 3*M_PI;
static const double M_FOURPI = 4*M_PI;

extern int maperr;

extern double zeroTWOPI(double);
extern double m180To180(double);
extern double degToRad(double);
extern double radToDeg(double);

extern double dmsToDegree(int, int, int, double);
extern double parseSEXStr(const char*);
extern double parseHMSStr(const char*);
extern double parseDMSStr(const char*);

class FitsImage;

class Coord {
 public:
  enum InternalSystem {WINDOW, CANVAS, WIDGET, USER, REF, 
		       PANNER, MAGNIFIER, PS};

  enum CoordSystem {DATA, IMAGE, PHYSICAL, AMPLIFIER, DETECTOR, WCS, 
		    WCSA, WCSB, WCSC, WCSD, WCSE, WCSF, WCSG, WCSH, WCSI,
		    WCSJ, WCSK, WCSL, WCSM, WCSN, WCSO, WCSP, WCSQ, WCSR,
		    WCSS, WCST, WCSU, WCSV, WCSW, WCSX, WCSY, WCSZ, WCS0=5};

  enum SkyFrame {FK4, FK5, ICRS, GALACTIC, ECLIPTIC};

  enum AxisSystem {RA,DEC,GLON,GLAT,ELON,ELAT,LINEAR};

  enum SkyFormat {DEGREES, SEXAGESIMAL};
  enum DistFormat {DEGREE, ARCMIN, ARCSEC};
  enum AngleFormat {DEG, RAD};
  enum Orientation {NORMAL, XX, YY, XY};

  public:
  void listCoordSystem(ostream&, CoordSystem, SkyFrame, FitsImage*);
  void listDistSystem(ostream&, CoordSystem, DistFormat, FitsImage*);
  void listProsCoordSystem(ostream&, CoordSystem, SkyFrame);

  void strToCoordSystem(const char*, CoordSystem, CoordSystem*, SkyFrame*);
  void strToSkyFormat(const char*, SkyFormat*);
  void strToDistFormat(const char*, DistFormat*);
  void strToDistSystem(const char*, CoordSystem, CoordSystem*, DistFormat*);
  void strToAngleFormat(const char*, AngleFormat*);

  const char* coordSystemStr(int ii);
  const char* skyFrameStr(int ii);
  const char* skyFormatStr(int ii);
  const char* skyDistStr(int ii);
};

extern Coord coord;

#endif
