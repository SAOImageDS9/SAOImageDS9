// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsmask_h__
#define __fitsmask_h__

#include "vector.h"

class Base;
class Context;

class FitsMask {
 public:
  enum MaskType {ZERO, NONZERO, NaN, NONNaN, RANGE};
  enum MaskBlend {SOURCE, SCREEN, DARKEN, LIGHTEN};

 private:
  Context* context_;
  Matrix mm_;

  char* colorName_;

  MaskType mark_;
  double low_;
  double high_;

 protected:
  FitsMask* previous_;
  FitsMask* next_;

 public:
  FitsMask(Base*, char*, MaskType, double, double);
  virtual ~FitsMask();

  Context* context() {return context_;}
  Matrix& mm() {return mm_;}
  char* colorName() {return colorName_;}
  MaskType mark() {return mark_;}
  double low() {return low_;}
  double high() {return high_;}

  FitsMask* previous() {return previous_;}
  void setPrevious(FitsMask* m) {previous_ = m;}
  FitsMask* next() {return next_;}
  void setNext(FitsMask* m) {next_ = m;}
};

#endif

