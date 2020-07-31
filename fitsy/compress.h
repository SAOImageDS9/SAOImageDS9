// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitscompress_h__
#define __fitscompress_h__

#include "file.h"

class FitsCompress : public FitsFile {
 public:
  enum QuantMethod {NONE,NODITHER,SUBDITHER1,SUBDITHER2};

 protected:
  int bitpix_;
  char* type_;
  int width_;
  int height_;
  int depth_;
  int ww_;
  int hh_;
  int dd_;
  double bscale_;
  double bzero_;
  unsigned int blank_;
  char* zmaskcmp_;
  
  size_t tilesize_;
  size_t size_;

  FitsColumn* gzcompress_;
  FitsColumn* compress_;
  FitsColumn* uncompress_;
  FitsColumn* null_;
  FitsColumn* zscale_;
  FitsColumn* zzero_;
  FitsColumn* zblank_;

  int hasScaling_;
  int hasBlank_;

  QuantMethod quantize_;
  int quantOffset_;

  int numRandom_;
  float* random_;
  int randSeed_;
  int randNext_;

 protected:
  int initHeader(FitsFile*);
  void initRandom(int);

  double unquantize(double, double, double);
  double unquantizeZero(double, double, double);

 public:
  FitsCompress(FitsFile*);
  virtual ~FitsCompress();
};

template<class T>
class FitsCompressm : public FitsCompress {
 private:
  int inflate(FitsFile*);
  void swapBytes();

 protected:
  T swap(T* ptr);

 protected:
  void uncompress(FitsFile* fits);
  int gzcompressed(T*, char*, char*, int, int, int, int, int, int);
  virtual int compressed(T*, char*, char*, int, int, int, int, int, int) =0;
  int uncompressed(T*, char*, char*, int, int, int, int, int, int);

  T getValue(char*, double, double, int);
  T getValue(short*, double, double, int);
  T getValue(int*, double, double, int);
  T getValue(long long*, double, double, int);
  T getValue(float*, double, double, int);
  T getValue(double*, double, double, int);

 public:
  FitsCompressm(FitsFile*);
};

class FitsPostNext : public FitsFile {
public:
  FitsPostNext(FitsFile* prev);
};

#endif

