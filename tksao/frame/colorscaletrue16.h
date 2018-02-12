// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorscaletrue16_h__
#define __colorscaletrue16_h__

#include "colorscale.h"
#include "truecolor16.h"

class ColorScaleTrueColor16 : public virtual ColorScale, public TrueColor16 {
public:
  ColorScaleTrueColor16(int, Visual*, int);
  virtual ~ColorScaleTrueColor16();
};

class LinearScaleTrueColor16 :
public virtual ColorScale, 
public LinearScale, 
public ColorScaleTrueColor16 {
public:
  LinearScaleTrueColor16(int, unsigned char*, int, Visual*, int);
};

class LogScaleTrueColor16 :
public virtual ColorScale, 
public LogScale, 
public ColorScaleTrueColor16 {
public:
  LogScaleTrueColor16(int, unsigned char*, int, double, Visual*, int);
};

class PowScaleTrueColor16 :
public virtual ColorScale, 
public PowScale, 
public ColorScaleTrueColor16 {
public:
  PowScaleTrueColor16(int, unsigned char*, int, double, Visual*, int);
};

class SqrtScaleTrueColor16 :
public virtual ColorScale, 
public SqrtScale, 
public ColorScaleTrueColor16 {
public:
  SqrtScaleTrueColor16(int, unsigned char*, int, Visual*, int);
};

class SquaredScaleTrueColor16 :
public virtual ColorScale, 
public SquaredScale, 
public ColorScaleTrueColor16 {
public:
  SquaredScaleTrueColor16(int, unsigned char*, int, Visual*, int);
};

class AsinhScaleTrueColor16 :
public virtual ColorScale, 
public AsinhScale, 
public ColorScaleTrueColor16 {
public:
  AsinhScaleTrueColor16(int, unsigned char*, int, Visual*, int);
};

class SinhScaleTrueColor16 :
public virtual ColorScale, 
public SinhScale, 
public ColorScaleTrueColor16 {
public:
  SinhScaleTrueColor16(int, unsigned char*, int, Visual*, int);
};

class IISScaleTrueColor16 :
public virtual ColorScale, 
public IISScale, 
public ColorScaleTrueColor16 {
public:
  IISScaleTrueColor16(unsigned char*, int, Visual*, int);
};

class HistEquScaleTrueColor16 :
public virtual ColorScale, 
public HistEquScale, 
public ColorScaleTrueColor16 {
public:
  HistEquScaleTrueColor16(int, unsigned char*, int, double*, int, Visual*, int);
};

#endif
