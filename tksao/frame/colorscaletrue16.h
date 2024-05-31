// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorscaletrue16_h__
#define __colorscaletrue16_h__

#include "colorscale.h"

class LinearScaleTrueColor16 :
public virtual ColorScale, 
public LinearScale {
public:
  LinearScaleTrueColor16(int, unsigned char*, int);
};

class LogScaleTrueColor16 :
public virtual ColorScale, 
public LogScale {
public:
  LogScaleTrueColor16(int, unsigned char*, int, double);
};

class PowScaleTrueColor16 :
public virtual ColorScale, 
public PowScale {
public:
  PowScaleTrueColor16(int, unsigned char*, int, double);
};

class SqrtScaleTrueColor16 :
public virtual ColorScale, 
public SqrtScale {
public:
  SqrtScaleTrueColor16(int, unsigned char*, int);
};

class SquaredScaleTrueColor16 :
public virtual ColorScale, 
public SquaredScale {
public:
  SquaredScaleTrueColor16(int, unsigned char*, int);
};

class AsinhScaleTrueColor16 :
public virtual ColorScale, 
public AsinhScale {
public:
  AsinhScaleTrueColor16(int, unsigned char*, int);
};

class SinhScaleTrueColor16 :
public virtual ColorScale, 
public SinhScale {
public:
  SinhScaleTrueColor16(int, unsigned char*, int);
};

class IISScaleTrueColor16 :
public virtual ColorScale, 
public IISScale {
public:
  IISScaleTrueColor16(unsigned char*, int);
};

class HistEquScaleTrueColor16 :
public virtual ColorScale, 
public HistEquScale {
public:
  HistEquScaleTrueColor16(int, unsigned char*, int, double*, int);
};

#endif
