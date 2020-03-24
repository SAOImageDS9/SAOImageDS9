// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tk.h>

#include "util.h"
#include "tkutil.h"

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

#if defined (MAC_OSX_TK) || (_WIN32)
#include <tkInt.h>

int XSetClipRectangles(Display *d, GC gc, int clip_x_origin, int clip_y_origin,
		       XRectangle* rectangles, int n, int ordering)
{
  TkRegion clipRgn = TkCreateRegion();

  while (n--) {
    XRectangle rect = *rectangles;

    rect.x += clip_x_origin;
    rect.y += clip_y_origin;
    TkUnionRectWithRegion(&rect, clipRgn, clipRgn);
    rectangles++;
  }
  TkSetRegion(d, gc, clipRgn);
  TkDestroyRegion(clipRgn);
  return 1;
}

#endif
