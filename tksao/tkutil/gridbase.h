// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __gridbase_h__
#define __gridbase_h__

#include <tk.h>

#include "widget.h"
#include "vector.h"

class Widget;
class Attribute;

class GridBase {
 public:
  enum RenderMode {X11, PS, MACOSX, GWIN32};

 protected:
  Widget* parent_;
  char* option_;

  RenderMode renderMode_;
  Attribute* line_;
  Attribute* text_;

  GC gridGC_;
  Pixmap pixmap_;

  Matrix matrix_;
  PSColorSpace mode_;

 protected:
  int x11Line(int n, float* x, float* y);
  int x11Text(const char*, float, float, const char*, Vector);

  int psLine(int n, float* x, float* y);
  int psText(const char*, float, float, const char*, Vector);
  void psColor(Attribute*);

#ifdef MAC_OSX_TK
  int macosxLine(int n, float* x, float* y);
  int macosxText(const char*, float, float, const char*, Vector);
#endif

#ifdef __WIN32
  int win32Line(int n, float* x, float* y);
  int win32Text(const char*, float, float, const char*, Vector);
#endif

  double calcTextAngle(const char*, Vector);
  Matrix calcTextPos(const Vector&, double, const char*, 
		     const char*, Vector, Tk_Font);

 public:  
  GridBase(Widget*);
  GridBase(Widget*, const char*);
  virtual ~GridBase();

  int gAttr(int attr, double value, double* old, int prim);
  int gCap(int, int);
  int gFlush() {return 1;}

  const char* option() {return option_;}
};

#endif
