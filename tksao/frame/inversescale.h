// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __inversescale_h__
#define __inversescale_h__

#include "vector.h"

class InverseScale {
 protected:
  double* level_;
  int size_;

 public:
  InverseScale(int);
  InverseScale(int, double*);
  virtual ~InverseScale();

  int size() {return size_;}
  double* level() {return level_;}
  double level(int ii) {return level_[ii];}

  friend ostream& operator<<(ostream&, const InverseScale&);
};

class LinearInverseScale : public InverseScale {
public:
  LinearInverseScale(int, double, double);
};

class LogInverseScale : public InverseScale {
public:
  LogInverseScale(int, double, double, double);
};

class PowInverseScale : public InverseScale {
public:
  PowInverseScale(int, double, double, double);
};

class SqrtInverseScale : public InverseScale {
public:
  SqrtInverseScale(int, double, double);
};

class SquaredInverseScale : public InverseScale {
public:
  SquaredInverseScale(int, double, double);
};

class AsinhInverseScale : public InverseScale {
public:
  AsinhInverseScale(int, double, double);
};

class SinhInverseScale : public InverseScale {
public:
  SinhInverseScale(int, double, double);
};

class HistEquInverseScale : public InverseScale {
public:
  HistEquInverseScale(int, double, double, double*, int);
};

class IISInverseScale : public InverseScale {
public:
  IISInverseScale(int, double, double, Vector&);
};

#endif
