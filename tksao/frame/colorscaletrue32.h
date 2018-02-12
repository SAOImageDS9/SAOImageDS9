// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorscaletrue32_h__
#define __colorscaletrue32_h__

#include "colorscale.h"
#include "truecolor24.h"

class ColorScaleTrueColor32 : public virtual ColorScale, public TrueColor24 {
 public:
  ColorScaleTrueColor32(int, Visual*, int);
  virtual ~ColorScaleTrueColor32();
};

class LinearScaleTrueColor32 :
public virtual ColorScale, 
public LinearScale, 
public ColorScaleTrueColor32 {
public:
  LinearScaleTrueColor32(int, unsigned char*, int, Visual*, int);
};

class LogScaleTrueColor32 :
public virtual ColorScale, 
public LogScale, 
public ColorScaleTrueColor32 {
public:
  LogScaleTrueColor32(int, unsigned char*, int, double, Visual*, int);
};

class PowScaleTrueColor32 :
public virtual ColorScale, 
public PowScale, 
public ColorScaleTrueColor32 {
public:
  PowScaleTrueColor32(int, unsigned char*, int, double, Visual*, int);
};

class SqrtScaleTrueColor32 :
public virtual ColorScale, 
public SqrtScale, 
public ColorScaleTrueColor32 {
public:
  SqrtScaleTrueColor32(int, unsigned char*, int, Visual*, int);
};

class SquaredScaleTrueColor32 :
public virtual ColorScale, 
public SquaredScale, 
public ColorScaleTrueColor32 {
public:
  SquaredScaleTrueColor32(int, unsigned char*, int, Visual*, int);
};

class AsinhScaleTrueColor32 :
public virtual ColorScale, 
public AsinhScale, 
public ColorScaleTrueColor32 {
public:
  AsinhScaleTrueColor32(int, unsigned char*, int, Visual*, int);
};

class SinhScaleTrueColor32 :
public virtual ColorScale, 
public SinhScale, 
public ColorScaleTrueColor32 {
public:
  SinhScaleTrueColor32(int, unsigned char*, int, Visual*, int);
};

class IISScaleTrueColor32 :
public virtual ColorScale, 
public IISScale, 
public ColorScaleTrueColor32 {
public:
  IISScaleTrueColor32(unsigned char*, int, Visual*, int);
};

class HistEquScaleTrueColor32 :
public virtual ColorScale, 
public HistEquScale, 
public ColorScaleTrueColor32 {
public:
  HistEquScaleTrueColor32(int, unsigned char*, int, double*, int, Visual*, int);
};

#endif
