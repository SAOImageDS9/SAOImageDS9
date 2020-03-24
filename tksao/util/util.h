// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

// important note: needs to be included first as X11 defs are here

#ifndef __util_h__
#define __util_h__

#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#include <math.h>

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include <X11/Xlib.h>
#include <X11/Xutil.h>

#ifdef _WIN32
#include <win32lib.h>
#endif

#ifdef MAC_OSX_TK
#include <macosxlib.h>
void XXWarpPointer(Display* display, Window src_w, Window dest_w,
		   int src_x, int src_y,
		   unsigned int src_width, unsigned int src_height,
		   int dest_x, int dest_y);
#endif

#if defined (MAC_OSX_TK) || (_WIN32)
int XSetClipRectangles(Display *d, GC gc, int clip_x_origin, int clip_y_origin,
		       XRectangle* rectangles, int n, int ordering);
#endif

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
