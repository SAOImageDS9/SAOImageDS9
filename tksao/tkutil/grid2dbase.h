// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __grid2dbase_h__
#define __grid2dbase_h__

#include "gridbase.h"

class Grid2dBase : public GridBase {
 public:
  Grid2dBase(Widget*);
  Grid2dBase(Widget*, const char*);
  virtual ~Grid2dBase();

  int gLine(int n, float* x, float* y);
  int gQch(float*, float*);
  int gMark(int, const float*, const float*, int) {return 1;}
  int gText(const char* txt, float x, float y, const char* just, 
	    float upx, float upy);
  int gTxExt(const char*, float, float, const char*, 
	      float, float, float*, float*);
  int gScales(float *alpha, float *beta);
};

#endif
