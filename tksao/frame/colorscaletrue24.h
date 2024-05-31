// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorscaletrue24_h__
#define __colorscaletrue24_h__

#include "colorscale.h"
#include "truecolor24.h"

class LinearScaleTrueColor24 :
public virtual ColorScale, 
public LinearScale {
public:
  LinearScaleTrueColor24(int, unsigned char*, int);
};

class LogScaleTrueColor24 :
public virtual ColorScale, 
public LogScale {
public:
  LogScaleTrueColor24(int, unsigned char*, int, double);
};

class PowScaleTrueColor24 :
public virtual ColorScale, 
public PowScale {
public:
  PowScaleTrueColor24(int, unsigned char*, int, double);
};

class SqrtScaleTrueColor24 :
public virtual ColorScale, 
public SqrtScale {
public:
  SqrtScaleTrueColor24(int, unsigned char*, int);
};

class SquaredScaleTrueColor24 :
public virtual ColorScale, 
public SquaredScale {
public:
  SquaredScaleTrueColor24(int, unsigned char*, int);
};

class AsinhScaleTrueColor24 :
public virtual ColorScale, 
public AsinhScale {
public:
  AsinhScaleTrueColor24(int, unsigned char*, int);
};

class SinhScaleTrueColor24 :
public virtual ColorScale, 
public SinhScale {
public:
  SinhScaleTrueColor24(int, unsigned char*, int);
};

class IISScaleTrueColor24 :
public virtual ColorScale, 
public IISScale {
public:
  IISScaleTrueColor24(unsigned char*, int);
};

class HistEquScaleTrueColor24 :
public virtual ColorScale, 
public HistEquScale {
public:
  HistEquScaleTrueColor24(int, unsigned char*, int, double*, int);
};

#endif
