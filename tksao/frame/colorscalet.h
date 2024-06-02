// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorscalet_h__
#define __colorscalet_h__

class ColorScaleT {
protected:
  int size_;
  unsigned char* psColors_;

public:
  ColorScaleT(int);
  virtual ~ColorScaleT();

  int size() {return size_;}
  const unsigned char* psColors() {return psColors_;}
};

class LinearScaleT : public virtual ColorScaleT {
public:
  LinearScaleT(int, unsigned char*, int);
};

class LogScaleT : public virtual ColorScaleT {
public:
  LogScaleT(int, unsigned char*, int, double);
};

class PowScaleT : public virtual ColorScaleT {
public:
  PowScaleT(int, unsigned char*, int, double);
};

class SqrtScaleT : public virtual ColorScaleT {
public:
  SqrtScaleT(int, unsigned char*, int);
};

class SquaredScaleT : public virtual ColorScaleT {
public:
  SquaredScaleT(int, unsigned char*, int);
};

class AsinhScaleT : public virtual ColorScaleT {
public:
  AsinhScaleT(int, unsigned char*, int);
};

class SinhScaleT : public virtual ColorScaleT {
public:
  SinhScaleT(int, unsigned char*, int);
};

class HistEquScaleT : public virtual ColorScaleT {
public:
  HistEquScaleT(int, unsigned char*, int, double*, int);
};

#endif
