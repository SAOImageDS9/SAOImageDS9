// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitshist_h__
#define __fitshist_h__

#include "vector.h"
#include "file.h"

class FitsHist : public FitsFile {
 public:
  enum Function {SUM, AVERAGE};

 private:
  int width_;
  int height_;
  int depth_;
  size_t size_;

  FitsColumn* xcol_;
  FitsColumn* ycol_;
  FitsColumn* zcol_;

  void* fitsy_;
  void* filter_;

  int initHeader(FitsFile*);
  int screenKeyword(const char*);
  void initLTMV(Matrix&);
  void initWCS(FitsFile*, Matrix&, Vector);
  void mapWCSMatrix(FitsHead*, char* w, const char* out, const char* in, 
		    Vector);
  void mapWCSReal(FitsHead* head, const char* out, const char* in);
  void mapWCSReal(FitsHead* head, char* w, const char* out, const char* in);
  void mapWCSReal(FitsHead*, char* w, 
		  const char* out, const char* prim, const char* alt, 
		  Matrix);
  void mapWCSString(FitsHead*, char* w, const char* out, const char* prim);
  void mapWCSString(FitsHead*, char* w, 
		    const char* out, const char* prim, const char* alt);
  void mapWCSVector(FitsHead*, char* w, const char* out, const char* in);
  void initFilter(FitsFile*);
  void deleteFilter();
  void bin(FitsFile*, Matrix&, Function, Vector);
  void swap();

 public:
  FitsHist(FitsFile* src, int width, int height, int depth, 
	   Matrix& m, Function func, Vector block);
  ~FitsHist();
};

class FitsHistNext : public FitsFile {
public:
  FitsHistNext(FitsFile* prev);
};

#endif
