// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorscaletrue8_h__
#define __colorscaletrue8_h__

#include "colorscale.h"
#include "truecolor8.h"

class LinearScaleTrueColor8 :
public virtual ColorScale, 
public LinearScale {
public:
  LinearScaleTrueColor8(int, unsigned char*, int);
};

class LogScaleTrueColor8 :
public virtual ColorScale, 
public LogScale {
public:
  LogScaleTrueColor8(int, unsigned char*, int, double);
};

class PowScaleTrueColor8 :
public virtual ColorScale, 
public PowScale {
public:
  PowScaleTrueColor8(int, unsigned char*, int, double);
};

class SqrtScaleTrueColor8 :
public virtual ColorScale, 
public SqrtScale {
public:
  SqrtScaleTrueColor8(int, unsigned char*, int);
};

class SquaredScaleTrueColor8 :
public virtual ColorScale, 
public SquaredScale {
public:
  SquaredScaleTrueColor8(int, unsigned char*, int);
};

class AsinhScaleTrueColor8 :
public virtual ColorScale, 
public AsinhScale {
public:
  AsinhScaleTrueColor8(int, unsigned char*, int);
};

class SinhScaleTrueColor8 :
public virtual ColorScale, 
public SinhScale {
public:
  SinhScaleTrueColor8(int, unsigned char*, int);
};

class IISScaleTrueColor8 :
public virtual ColorScale, 
public IISScale {
public:
  IISScaleTrueColor8(unsigned char*, int);
};

class HistEquScaleTrueColor8 :
public virtual ColorScale, 
public HistEquScale {
public:
  HistEquScaleTrueColor8(int, unsigned char*, int, double*, int);
};

#endif
