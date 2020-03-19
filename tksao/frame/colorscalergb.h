// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorscalergb_h__
#define __colorscalergb_h__

class ColorScaleRGB {
protected:
  int size_;
  unsigned char* psColors_;

public:
  ColorScaleRGB(int);
  virtual ~ColorScaleRGB();

  int size() {return size_;}
  const unsigned char* psColors() {return psColors_;}
};

class LinearScaleRGB : public virtual ColorScaleRGB {
public:
  LinearScaleRGB(int, int, unsigned char*, int);
};

class LogScaleRGB : public virtual ColorScaleRGB {
public:
  LogScaleRGB(int, int, unsigned char*, int, double);
};

class PowScaleRGB : public virtual ColorScaleRGB {
public:
  PowScaleRGB(int, int, unsigned char*, int, double);
};

class SqrtScaleRGB : public virtual ColorScaleRGB {
public:
  SqrtScaleRGB(int, int, unsigned char*, int);
};

class SquaredScaleRGB : public virtual ColorScaleRGB {
public:
  SquaredScaleRGB(int, int, unsigned char*, int);
};

class AsinhScaleRGB : public virtual ColorScaleRGB {
public:
  AsinhScaleRGB(int, int, unsigned char*, int);
};

class SinhScaleRGB : public virtual ColorScaleRGB {
public:
  SinhScaleRGB(int, int, unsigned char*, int);
};

class HistEquScaleRGB : public virtual ColorScaleRGB {
public:
  HistEquScaleRGB(int, int, unsigned char*, int, double*, int);
};

#endif
