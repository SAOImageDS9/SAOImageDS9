// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorscaletrue24_h__
#define __colorscaletrue24_h__

#include "colorscale.h"
#include "truecolor24.h"

class ColorScaleTrueColor24 : public virtual ColorScale, public TrueColor24 {
public:
  ColorScaleTrueColor24(int, Visual*, int);
  virtual ~ColorScaleTrueColor24();
};

class LinearScaleTrueColor24 :
public virtual ColorScale, 
public LinearScale, 
public ColorScaleTrueColor24 {
public:
  LinearScaleTrueColor24(int, unsigned char*, int, Visual*, int);
};

class LogScaleTrueColor24 :
public virtual ColorScale, 
public LogScale, 
public ColorScaleTrueColor24 {
public:
  LogScaleTrueColor24(int, unsigned char*, int, double, Visual*, int);
};

class PowScaleTrueColor24 :
public virtual ColorScale, 
public PowScale, 
public ColorScaleTrueColor24 {
public:
  PowScaleTrueColor24(int, unsigned char*, int, double, Visual*, int);
};

class SqrtScaleTrueColor24 :
public virtual ColorScale, 
public SqrtScale, 
public ColorScaleTrueColor24 {
public:
  SqrtScaleTrueColor24(int, unsigned char*, int, Visual*, int);
};

class SquaredScaleTrueColor24 :
public virtual ColorScale, 
public SquaredScale, 
public ColorScaleTrueColor24 {
public:
  SquaredScaleTrueColor24(int, unsigned char*, int, Visual*, int);
};

class AsinhScaleTrueColor24 :
public virtual ColorScale, 
public AsinhScale, 
public ColorScaleTrueColor24 {
public:
  AsinhScaleTrueColor24(int, unsigned char*, int, Visual*, int);
};

class SinhScaleTrueColor24 :
public virtual ColorScale, 
public SinhScale, 
public ColorScaleTrueColor24 {
public:
  SinhScaleTrueColor24(int, unsigned char*, int, Visual*, int);
};

class IISScaleTrueColor24 :
public virtual ColorScale, 
public IISScale, 
public ColorScaleTrueColor24 {
public:
  IISScaleTrueColor24(unsigned char*, int, Visual*, int);
};

class HistEquScaleTrueColor24 :
public virtual ColorScale, 
public HistEquScale, 
public ColorScaleTrueColor24 {
public:
  HistEquScaleTrueColor24(int, unsigned char*, int, double*, int, Visual*, int);
};

#endif
