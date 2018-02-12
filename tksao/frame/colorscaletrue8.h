// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorscaletrue8_h__
#define __colorscaletrue8_h__

#include "colorscale.h"
#include "truecolor8.h"

class ColorScaleTrueColor8 : public virtual ColorScale, public TrueColor8 {
public:
  ColorScaleTrueColor8(int, Visual*);
  virtual ~ColorScaleTrueColor8();
};

class LinearScaleTrueColor8 :
public virtual ColorScale, 
public LinearScale, 
public ColorScaleTrueColor8 {
public:
  LinearScaleTrueColor8(int, unsigned char*, int, Visual*);
};

class LogScaleTrueColor8 :
public virtual ColorScale, 
public LogScale, 
public ColorScaleTrueColor8 {
public:
  LogScaleTrueColor8(int, unsigned char*, int, double, Visual*);
};

class PowScaleTrueColor8 :
public virtual ColorScale, 
public PowScale, 
public ColorScaleTrueColor8 {
public:
  PowScaleTrueColor8(int, unsigned char*, int, double, Visual*);
};

class SqrtScaleTrueColor8 :
public virtual ColorScale, 
public SqrtScale, 
public ColorScaleTrueColor8 {
public:
  SqrtScaleTrueColor8(int, unsigned char*, int, Visual*);
};

class SquaredScaleTrueColor8 :
public virtual ColorScale, 
public SquaredScale, 
public ColorScaleTrueColor8 {
public:
  SquaredScaleTrueColor8(int, unsigned char*, int, Visual*);
};

class AsinhScaleTrueColor8 :
public virtual ColorScale, 
public AsinhScale, 
public ColorScaleTrueColor8 {
public:
  AsinhScaleTrueColor8(int, unsigned char*, int, Visual*);
};

class SinhScaleTrueColor8 :
public virtual ColorScale, 
public SinhScale, 
public ColorScaleTrueColor8 {
public:
  SinhScaleTrueColor8(int, unsigned char*, int, Visual*);
};

class IISScaleTrueColor8 :
public virtual ColorScale, 
public IISScale, 
public ColorScaleTrueColor8 {
public:
  IISScaleTrueColor8(unsigned char*, int, Visual*);
};

class HistEquScaleTrueColor8 :
public virtual ColorScale, 
public HistEquScale, 
public ColorScaleTrueColor8 {
public:
  HistEquScaleTrueColor8(int, unsigned char*, int, double*, int, Visual*);
};

#endif
