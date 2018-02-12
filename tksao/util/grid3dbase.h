// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __grid3dbase_h__
#define __grid3dbase_h__

#include <tk.h>

#include "gridbase.h"
#include "vector3d.h"

class Grid3dBase : public GridBase {
 protected:
  Matrix3d mx_;
  Matrix3d rx_;

  Matrix3d calcTextPos(const Vector3d&, const char*, const char*, Tk_Font);

 public:  
  Grid3dBase(Widget*);
  Grid3dBase(Widget*, const char*);
  virtual ~Grid3dBase();

  int gLine(int n, float* x, float* y, float* z);
  int gQch(float* ch);
  int gMark(int n, float* x, float* y, float* z, int type, float* norm)
  {return 1;}
  int gText(const char* txt, float* ref, const char* just, float* up, 
	    float* norm);
  int gTxExt(const char* txt, float* ref, const char* just, float* up, 
	     float* norm, float* xb, float* yb, float* zb, float* bl);
};

#endif
