// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorscaletrue32_h__
#define __colorscaletrue32_h__

#include "colorscale.h"
#include "truecolor24.h"

class LinearScaleTrueColor32 :
public virtual ColorScale, 
public LinearScale {
public:
  LinearScaleTrueColor32(int, unsigned char*, int);
};

class LogScaleTrueColor32 :
public virtual ColorScale, 
public LogScale {
public:
  LogScaleTrueColor32(int, unsigned char*, int, double);
};

class PowScaleTrueColor32 :
public virtual ColorScale, 
public PowScale {
public:
  PowScaleTrueColor32(int, unsigned char*, int, double);
};

class SqrtScaleTrueColor32 :
public virtual ColorScale, 
public SqrtScale {
public:
  SqrtScaleTrueColor32(int, unsigned char*, int);
};

class SquaredScaleTrueColor32 :
public virtual ColorScale, 
public SquaredScale {
public:
  SquaredScaleTrueColor32(int, unsigned char*, int);
};

class AsinhScaleTrueColor32 :
public virtual ColorScale, 
public AsinhScale {
public:
  AsinhScaleTrueColor32(int, unsigned char*, int);
};

class SinhScaleTrueColor32 :
public virtual ColorScale, 
public SinhScale {
public:
  SinhScaleTrueColor32(int, unsigned char*, int);
};

class IISScaleTrueColor32 :
public virtual ColorScale, 
public IISScale {
public:
  IISScaleTrueColor32(unsigned char*, int);
};

class HistEquScaleTrueColor32 :
public virtual ColorScale, 
public HistEquScale {
public:
  HistEquScaleTrueColor32(int, unsigned char*, int, double*, int);
};

#endif
