// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

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

#include "fuzzy.h"
#include "vector.h"
#include "vector3d.h"

#ifndef PATH_MAX
#define PATH_MAX 1024
#endif

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

static const char psFonts[12][32] = {
  {"Helvetica"},
  {"Helvetica-Oblique"},
  {"Helvetica-Bold"},
  {"Helvetica-BoldOblique"},

  {"Times-Roman"},
  {"Times-Italic"},
  {"Times-Bold"},
  {"Times-BoldItalic"},

  {"Courier"},
  {"Courier-Oblique"},
  {"Courier-Bold"},
  {"Courier-BoldOblique"}
};

#ifndef __CYGWIN__
static const double M_TWOPI = 2*M_PI;
#endif
static const double M_THREEPI = 3*M_PI;
static const double M_FOURPI = 4*M_PI;

extern int maperr;

extern int lsb();

extern void swap2(char* src, char* dest);
extern void swap4(char* src, char* dest);
extern void swap8(char* src, char* dest);

// defined in ds9.C
extern void internalError(const char*);

extern char* dupstr(const char*);
extern char* trim(const char*);
extern char* toLower(const char*);
extern char* toUpper(const char*);
extern char* toConstLower(const char*);
extern char* toConstUpper(const char*);

extern double zeroTWOPI(double);
extern double zero360(double);
extern double m180To180(double);
extern double degToRad(double);
extern double radToDeg(double);

extern Vector zeroTWOPI(const Vector&);
extern Vector zero360(const Vector&);
extern Vector degToRad(const Vector&);
extern Vector radToDeg(const Vector&);

extern Vector3d zeroTWOPI(const Vector3d&);
extern Vector3d zero360(const Vector3d&);
extern Vector3d degToRad(const Vector3d&);
extern Vector3d radToDeg(const Vector3d&);

extern int parseSection(char*, Vector*, Vector*);

extern double dmsToDegree(int, int, int, double);
extern double parseSEXStr(const char*);
extern double parseHMSStr(const char*);
extern double parseDMSStr(const char*);

extern double RGB2Gray(double, double, double);
extern unsigned char RGB2Gray(unsigned char, unsigned char, unsigned char);
extern void RGB2CMYK(unsigned char, unsigned char, unsigned char,
		     unsigned char*, unsigned char*, unsigned char*, 
		     unsigned char*);
extern void RGB2CMYK(unsigned short, unsigned short, unsigned short,
		     unsigned short*, unsigned short*, unsigned short*, 
		     unsigned short*);
extern ostream& psColorGray(XColor*, ostream&);
extern ostream& psColorRGB(XColor*, ostream&);
extern ostream& psColorCMYK(XColor*, ostream&);

extern char* psQuote(const char*);

extern const char* psFontName(const char*);
extern int psFontSize(const char*);
extern const char* psFontName(const char*, const char*, const char*);

extern int fCompare(const void*, const void*);
extern int dCompare(const void*, const void*);

#ifndef NEWWCS
extern Vector mapLen(const Vector& v, const Matrix& mx);
#endif

#endif
