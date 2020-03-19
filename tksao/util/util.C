// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tk.h>

#include "util.h"

// Error in mapping
int maperr= 0;

static char tobuf[1024];
Tcl_Interp *global_interp;

int sexSign;     // used by parser and lex to indicate sign of dms or hms

void swap2(char* src, char* dest) {
  *(dest  ) = *(src+1);
  *(dest+1) = *(src  );
}

void swap4(char* src, char* dest) {
  *(dest  ) = *(src+3);
  *(dest+1) = *(src+2);
  *(dest+2) = *(src+1);
  *(dest+3) = *(src  );
}

void swap8(char* src, char* dest) {
  *(dest  ) = *(src+7);
  *(dest+1) = *(src+6);
  *(dest+2) = *(src+5);
  *(dest+3) = *(src+4);
  *(dest+4) = *(src+3);
  *(dest+5) = *(src+2);
  *(dest+6) = *(src+1);
  *(dest+7) = *(src  );
}

int lsb()
{
  return (*(short *)"\001\000" & 0x0001);
}

void internalError(const char* msg)
{
  Tcl_SetVar2(global_interp, "ds9", "msg", msg, TCL_GLOBAL_ONLY);
  Tcl_SetVar2(global_interp, "ds9", "msg,level", "error", TCL_GLOBAL_ONLY);
}

char* dupstr(const char* str)
{
  char* copy;
  if (str) {
    copy=new char[strlen(str)+1];
    strcpy(copy,str);
  }
  else
    copy=NULL;

  return copy;
}

char* trim(const char* str)
{
  char* rr = dupstr(str);
  char* ptr = rr;
  while (ptr && *ptr)
    ptr++;
  ptr--;
  while (ptr && (*ptr == ' '))
    ptr--;
  ptr++;
  *ptr = '\0';

  return rr;
}

char* toLower(const char* str)
{
  char* rr = dupstr(str);
  char* ptr = rr;
  while (*ptr) {
    *ptr = (char)(tolower(((int)(*ptr))));
    ptr++;
  }
  return rr;
}

char* toUpper(const char* str)
{
  char* rr = dupstr(str);
  char* ptr = rr;
  while (*ptr) {
    *ptr = (char)(toupper(((int)(*ptr))));
    ptr++;
  }
  return rr;
}

char* toConstLower(const char* str)
{
  strncpy(tobuf,str,1024);
  char* ptr = tobuf;
  while (*ptr) {
    *ptr = (char)(tolower(((int)(*ptr))));
    ptr++;
  }
  return tobuf;
}

char* toConstUpper(const char* str)
{
  strncpy(tobuf,str,1024);
  char* ptr = tobuf;
  while (*ptr) {
    *ptr = (char)(toupper(((int)(*ptr))));
    ptr++;
  }
  return tobuf;
}

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

int parseSection(char* lbuf, Vector* v1, Vector* v2)
{
  double x1, y1, x2, y2;
  char d1,d2,d3,d4,d5; // dummy char
  string x(lbuf);
  istringstream str(x);
  str >> d1 >> x1 >> d2 >> x2 >> d3 >> y1 >> d4 >> y2 >> d5;

  // verify input
  if (!(d1=='[' && d2==':' && d3==',' && d4==':' && d5==']'))
    return 0;

  // it looks ok
  *v1 = Vector(x1,y1);
  *v2 = Vector(x2,y2);

  return 1;
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
