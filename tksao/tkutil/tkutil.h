// Copyright (C) 1999-2020
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

// important note: needs to be included first as X11 defs are here

#ifndef __tkutil_h__
#define __tkutil_h__

#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <float.h>
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

#endif
