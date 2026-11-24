// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#ifndef __colorscale_h__
#define __colorscale_h__

#include "ghs.h"

// 0 background (white)
// 1-200 data, 1 lowerlimit 200 upperlimit
// 201 cursor color (white)
// 202-217 colors 
#define IISMIN 1
#define IISMAX 200
#define IISCOLORS 201
#define IISSIZE 218

class ColorScale {
public:
  int size_;
  unsigned char* psColors_;  // rgb

public:
  ColorScale(int);
  virtual ~ColorScale();

  int size() {return size_;}
  const unsigned char* psColors() {return psColors_;}
};

class LinearScale : public virtual ColorScale {
public:
  LinearScale(int, unsigned char*, int);
};

class LogScale : public virtual ColorScale {
public:
  LogScale(int, unsigned char*, int, double);
};

class PowScale : public virtual ColorScale {
public:
  PowScale(int, unsigned char*, int, double);
};

class SqrtScale : public virtual ColorScale {
public:
  SqrtScale(int, unsigned char*, int);
};

class SquaredScale : public virtual ColorScale {
public:
  SquaredScale(int, unsigned char*, int);
};

class AsinhScale : public virtual ColorScale {
public:
  AsinhScale(int, unsigned char*, int);
};

// GHS needs a much finer table than SCALESIZE: with minmax limits on wide
// range data the sky can be narrower than one SCALESIZE step
#define GHSSCALESIZE (1<<20)

class GhsScale : public virtual ColorScale {
public:
  GhsScale(unsigned char*, int, const GhsParams&, double, double);
};

class SinhScale : public virtual ColorScale {
public:
  SinhScale(int, unsigned char*, int);
};

class IISScale : public virtual ColorScale {
public:
  IISScale(unsigned char*, int);
};

class HistEquScale : public virtual ColorScale {
public:
  HistEquScale(int, unsigned char*, int, double*, int);
};

#endif
