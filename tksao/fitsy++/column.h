// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitscolumn_h__
#define __fitscolumn_h__

#include "vector.h"

class FitsHead;

class FitsColumn {
protected:
  int index_;        // col number 1 to n
  int width_;        // overall width of field in chars
  int offset_;       // offset in chars from start of row
  char type_;        // type

  char* tform_;
  char* ttype_;
  char* tunit_;
  float tscal_;
  float tzero_;

  int tnull_;
  int hastnull_;

  float tlmin_;
  float tlmax_;
  int hastlmin_;
  int hastlmax_;

  double min_;
  double max_;
  int validmm_;

  char buf_[128];

  char keybuf[9];
  char* keycat(const char*, int);

public:
  FitsColumn(FitsHead*, int, int);
  virtual ~FitsColumn();

  int width() {return width_;}
  int offset() {return offset_;}
  int index() {return index_;}

  const char* tform() {return tform_;}
  const char* ttype() {return ttype_;}
  const char* tunit() {return tunit_;}
  float tscal() {return tscal_;}
  float tzero() {return tzero_;}
  int tnull() {return tnull_;}
  float tlmin() {return tlmin_;}
  float tlmax() {return tlmax_;}

  int hasscaling() {return tscal_ != 1 || tzero_ != 0;}
  int hastnull() {return hastnull_;}

  virtual double value(const char* ptr, int i =0) {return 0;}
  virtual char* str(const char* ptr, int i =0) {return NULL;}
  virtual Vector dimension() {return Vector();}
  virtual int repeat() {return 1;}

  void setMin(double m) {min_=m;}
  void setMax(double m) {max_=m;}

  double getMin() {return min_;}
  double getMax() {return max_;}

  int hasMinMax() {return min_ != -DBL_MAX ? 1 : 0;}
  int hasTLMinTLMax() {return hastlmin_ && hastlmax_;}
};

// FitsAsciiColumn

class FitsAsciiColumn : public FitsColumn {
public:
  FitsAsciiColumn(FitsHead*, int, int);

  char* str(const char* ptr, int i =0);
};

class FitsAsciiColumnStr : public FitsAsciiColumn {
public:
  FitsAsciiColumnStr(FitsHead*, int, int);
};

class FitsAsciiColumnA : public FitsAsciiColumn {
private:
  int prec_;

public:
  FitsAsciiColumnA(FitsHead*, int, int);

  double value(const char*, int i =0);
};

template<class T>
class FitsAsciiColumnT : public FitsAsciiColumnA {
public:
  FitsAsciiColumnT(FitsHead*, int, int);

  Vector dimension();
};

// FitsBinColumn

class FitsBinColumn : public FitsColumn {
protected:
  char* tdisp_;
  int repeat_;           // repeat count
  
public:
  FitsBinColumn(FitsHead*, int, int);
  ~FitsBinColumn();

  int repeat() {return repeat_;}
};

class FitsBinColumnStr : public FitsBinColumn {
public:
  FitsBinColumnStr(FitsHead*, int, int);

  char* str(const char* ptr, int i =0);
};

class FitsBinColumnLogical : public FitsBinColumn {
public:
  FitsBinColumnLogical(FitsHead*, int, int);

  double value(const char* ptr, int i =0) 
  {return (*(ptr+offset_+i) == 'T') ? 1 : 0;}
  char* str(const char* ptr, int i =0);
};

class FitsBinColumnArray : public FitsBinColumn {
 protected:
  int byteswap_;
  char ptype_;
  int psize_;
  int pmax_;
  char* abuf_;

  virtual int swap(const char* ptr, int i =0) =0;

public:
  FitsBinColumnArray(FitsHead*, int, int);
  virtual ~FitsBinColumnArray();  

  virtual void* get(const char* heap, const char* ptr, int* cnt);
};

class FitsBinColumnArrayP : public FitsBinColumnArray {
 protected:
  int swap(const char* ptr, int i =0);

public:
  FitsBinColumnArrayP(FitsHead*, int, int);
};

class FitsBinColumnArrayQ : public FitsBinColumnArray {
 protected:
  int swap(const char* ptr, int i =0);

public:
  FitsBinColumnArrayQ(FitsHead*, int, int);
};

class FitsBinColumnBit : public FitsBinColumn {
public:
  FitsBinColumnBit(FitsHead*, int, int);
};

class FitsBinColumnB : public FitsBinColumn {
protected:
  int byteswap_;

public:
  FitsBinColumnB(FitsHead*, int, int);
};

template<class T>
class FitsBinColumnT : public FitsBinColumnB {
private:
  T swap(T*);

public:
  FitsBinColumnT(FitsHead*, int, int);

  double value(const char*, int i =0);
  char* str(const char* ptr, int i =0);
  Vector dimension();
};

#endif
