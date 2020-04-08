// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "coord.h"
#include "fitsimage.h"

// Error in mapping
int maperr= 0;

int sexSign;     // used by parser and lex to indicate sign of dms or hms

double zeroTWOPI(double aa)
{
  if (isnan(aa) || isinf(aa) || (aa == -DBL_MAX) || (aa == DBL_MAX))
    return NAN;

  double rr = aa;
  if (rr>0)
    while (rr>=M_TWOPI)
      rr -= M_TWOPI;
  else
    while (rr<0)
      rr += M_TWOPI;
  return rr;
}

double m180To180(double aa)
{
  if (isnan(aa) || isinf(aa) || (aa == -DBL_MAX) || (aa == DBL_MAX))
    return NAN;

  // incoming 0-360
  double rr = aa;
  if (rr>180)
    rr -= 360;
  return rr;
}

double radToDeg(double aa)
{
  return 180.*aa/M_PI;
}

double degToRad(double aa)
{
  return  M_PI*aa/180.;
}

double dmsToDegree(int sign, int degree, int min, double sec)
{
  // sign is needed because of -00 vs +00
  return double(sign) * (abs(degree) + (min/60.) + (sec/60./60.));
}

double parseSEXStr(const char* d)
{
  char* dms = dupstr(d); // its going to get clobbered
  char* ptr = dms;

  int sign = 1;
  int degree = atoi(strtok(ptr,":"));
  int minute = atoi(strtok(NULL,":"));
  float sec = atof(strtok(NULL,":"));

  // assumes the minus sign is the first char
  if (degree != 0)
    sign = degree>0 ? 1 : -1;
  else
    sign = d[0] == '-' ? -1 : 1;

  delete [] dms;

  return dmsToDegree(sign,abs(degree),minute,sec);
}

double parseHMSStr(const char* str)
{
  char* hms = dupstr(str); // its going to get clobbered
  char* ptr = hms;

  int sign = 1;
  int hour = atoi(strtok(ptr,"h"));
  int minute = atoi(strtok(NULL,"m"));
  float second = atof(strtok(NULL,"s"));

  // assumes the minus sign is the first char
  if (hour != 0)
    sign = hour>0 ? 1 : -1;
  else
    sign = str[0] == '-' ? -1 : 1;

  delete [] hms;

  return dmsToDegree(sign,abs(hour),minute,second)/24.*360.;
}

double parseDMSStr(const char* str)
{
  char* dms = dupstr(str); // its going to get clobbered
  char* ptr = dms;

  int sign = 1;
  int degree = atoi(strtok(ptr,"d"));
  int minute = atoi(strtok(NULL,"m"));
  float sec = atof(strtok(NULL,"s"));

  // assumes the minus sign is the first char
  if (degree != 0)
    sign = degree>0 ? 1 : -1;
  else
    sign = str[0] == '-' ? -1 : 1;

  delete [] dms;

  return dmsToDegree(sign,abs(degree),minute,sec);
}

// Coord

Coord coord;

static const char* coordSystemStr_[] = {
    "data",
    "image",
    "physical",
    "amplifier",
    "detector",
    "wcs",
    "wcsa",
    "wcsb",
    "wcsc",
    "wcsd",
    "wcse",
    "wcsf",
    "wcsg",
    "wcsh",
    "wcsi",
    "wcsj",
    "wcsk",
    "wcsl",
    "wcsm",
    "wcsn",
    "wcso",
    "wcsp",
    "wcsq",
    "wcsr",
    "wcss",
    "wcst",
    "wcsu",
    "wcsv",
    "wcsw",
    "wcsx",
    "wcsy",
    "wcsz"
  };

static const char* skyFrameStr_[] = { 
    "fk4",
    "fk5",
    "icrs",
    "galactic",
    "ecliptic",
    "gappt"
  };

static const char* skyFormatStr_[] = { 
    "degrees",
    "sexagesimal",
  };

static const char* skyDistStr_[] = {
    "degrees",
    "arcmin",
    "arcsec"
  };

const char* Coord::coordSystemStr(int ii)
{
  return coordSystemStr_[ii];
}

const char* Coord::skyFrameStr(int ii)
{
  return skyFrameStr_[ii];
}

const char* Coord::skyFormatStr(int ii)
{
  return skyFormatStr_[ii];
}

const char* Coord::skyDistStr(int ii)
{
  return skyDistStr_[ii];
}

void Coord::listCoordSystem(ostream& str, CoordSystem sys, SkyFrame sky, 
			    FitsImage* ptr)
{
  
  switch (sys) {
  case IMAGE:
    str << "image";
    return;
  case PHYSICAL:
    str << "physical";
    return;
  case DETECTOR:
    str << "detector";
    return;
  case AMPLIFIER:
    str << "amplifier";
    return;
  default:
    if (ptr->hasWCSCel(sys)) {
      switch (sky) {
      case FK4:
	str << "fk4";
	return;
      case FK5:
	str << "fk5";
	return;
      case ICRS:
	str << "icrs";
	return;
      case GALACTIC:
	str << "galactic";
	return;
      case ECLIPTIC:
	str << "ecliptic";
	return;
      }
    }
    else {
      str << "wcs";
      if (sys > WCS)
	str << (char)(sys-WCS+'`');
    }
    return;
  }
}

void Coord::listDistSystem(ostream& str, CoordSystem sys, DistFormat format, 
			   FitsImage* ptr)
{
  switch (sys) {
  case IMAGE:
    str << "image";
    return;
  case PHYSICAL:
    str << "physical";
    return;
  case DETECTOR:
    str << "detector";
    return;
  case AMPLIFIER:
    str << "amplifier";
    return;
  default:
    if (ptr->hasWCSCel(sys)) {
      switch (format) {
      case DEGREE:
	str << "degrees";
	return;
      case ARCMIN:
	str << "arcmin";
	return;
      case ARCSEC:
	str << "arcsec";
	return;
      }
    }
    else
      str << "pixels";

    return;
  }
}

 void Coord::listProsCoordSystem(ostream& str, CoordSystem sys, SkyFrame sky)
{
  switch (sys) {
  case IMAGE:
    str << "logical";
    return;
  case PHYSICAL:
    str << "physical";
    return;
  case DETECTOR:
    str << "detector";
    return;
  case AMPLIFIER:
    str << "amplifier";
    return;
  default:
    switch (sky) {
    case FK4:
      str << "b1950";
      return;
    case FK5:
      str << "j2000";
      return;
    case ICRS:
      str << "icrs";
      return;
    case GALACTIC:
      str << "galactic";
      return;
    case ECLIPTIC:
      str << "ecliptic";
      return;
    }
  }
}

 void Coord::strToCoordSystem(const char* str, CoordSystem wcssys, 
			      CoordSystem* sys, SkyFrame* sky)
{
  if (!str) {
    *sys = PHYSICAL;
    *sky = FK5;
  }
  else if (STRCMP(str,"image",5)) {
    *sys = IMAGE;
    *sky = FK5;
    }
  else if (STRCMP(str,"physical",8)) {
    *sys = PHYSICAL;
    *sky = FK5;
  }
  else if (STRCMP(str,"amplifier",9)) {
    *sys = AMPLIFIER;
    *sky = FK5;
  }
  else if (STRCMP(str,"detector",9)) {
    *sys = DETECTOR;
    *sky = FK5;
  }
  else if (STRCMP(str,"fk4",3)) {
    *sys = wcssys;
    *sky = FK4;
  }
  else if (STRCMP(str,"fk5",3)) {
    *sys = wcssys;
    *sky = FK5;
  }
  else if (STRCMP(str,"icrs",4)) {
    *sys = wcssys;
    *sky = ICRS;
  }
  else if (STRCMP(str,"galactic",8)) {
    *sys = wcssys;
    *sky = GALACTIC;
  }
  else if (STRCMP(str,"ecliptic",8)) {
    *sys = wcssys;
    *sky = ECLIPTIC;
  }
  else if (STRCMP(str,"wcs",3)) {
    *sys = wcssys;
    *sky = FK5;
  }
  else if (STRCMP(str,"linear",6)) {
    *sys = wcssys;
    *sky = FK5;
  }
  else {
    *sys = PHYSICAL;
    *sky = FK5;
  }
}

void Coord::strToSkyFormat(const char* str, SkyFormat* format)
{
  if (!str)
    *format = DEGREES;
  else if (STRCMP(str,"degrees",7))
    *format = DEGREES;
  else if (STRCMP(str,"degree",6))
    *format = DEGREES;
  else if (STRCMP(str,"deg",3))
    *format = DEGREES;
  else if (STRCMP(str,"hms",3))
    *format = SEXAGESIMAL;
  else if (STRCMP(str,"h:m:s",5))
    *format = SEXAGESIMAL;
  else if (STRCMP(str,"\"h:m:s\"",7))
    *format = SEXAGESIMAL;
  else if (STRCMP(str,"dms",3))
    *format = SEXAGESIMAL;
  else if (STRCMP(str,"d:m:s",5))
    *format = SEXAGESIMAL;
  else if (STRCMP(str,"\"d:m:s\"",7))
    *format = SEXAGESIMAL;
  else
    *format = DEGREES;
}

void Coord::strToDistFormat(const char* str, DistFormat* dist)
{
  if (!str)
    *dist = DEGREE;
  else if (STRCMP(str,"degrees",7))
    *dist = DEGREE;
  else if (STRCMP(str,"degree",6))
    *dist = DEGREE;
  else if (STRCMP(str,"deg",3))
    *dist = DEGREE;
  else if (STRCMP(str,"arcminute",9))
    *dist = ARCMIN;
  else if (STRCMP(str,"arcmin",6))
    *dist = ARCMIN;
  else if (STRCMP(str,"arcsecond",9))
    *dist = ARCSEC;
  else if (STRCMP(str,"arcsec",6))
    *dist = ARCSEC;
  else
    *dist = DEGREE;
}

 void Coord::strToAngleFormat(const char* str, AngleFormat* format)
{
  if (!str)
    *format = DEG;
  else if (STRCMP(str,"degrees",7))
    *format = DEG;
  else if (STRCMP(str,"degree",6))
    *format = DEG;
  else if (STRCMP(str,"deg",3))
    *format = DEG;
  else if (STRCMP(str,"radian",6))
    *format = RAD;
  else if (STRCMP(str,"rad",3))
    *format = RAD;
  else
    *format = DEG;
}

void Coord::strToDistSystem(const char* str, CoordSystem wcssys, 
			    CoordSystem* sys, DistFormat* dist)
{
  if (!str) {
    *sys = PHYSICAL;
    *dist = DEGREE;
  }
  else if (STRCMP(str,"image",5)) {
    *sys = IMAGE;
    *dist = DEGREE;
    }
  else if (STRCMP(str,"physical",8)) {
    *sys = PHYSICAL;
    *dist = DEGREE;
  }
  else if (STRCMP(str,"amplifier",9)) {
    *sys = AMPLIFIER;
    *dist = DEGREE;
  }
  else if (STRCMP(str,"detector",8)) {
    *sys = DETECTOR;
    *dist = DEGREE;
  }
  else if (STRCMP(str,"degrees",7)) {
    *sys = wcssys;
    *dist = DEGREE;
  }
  else if (STRCMP(str,"arcmin",6)) {
    *sys = wcssys;
    *dist = ARCMIN;
  }
  else if (STRCMP(str,"arcsec",6)) {
    *sys = wcssys;
    *dist = ARCSEC;
  }
  else if (STRCMP(str,"pixels",6)) {
    *sys = PHYSICAL;
    *dist = DEGREE;
  }
  else {
    *sys = PHYSICAL;
    *dist = DEGREE;
  }
}
