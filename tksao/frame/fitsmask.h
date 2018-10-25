// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsmask_h__
#define __fitsmask_h__

#include "util.h"

class Base;
class Context;

class FitsMask {
 private:
  Context* context_;
  Matrix mm_;

  char* colorName_;
  XColor* color_;
  char trueColor_[4];

  int mark_;

 protected:
  FitsMask* previous_;
  FitsMask* next_;

 public:
  FitsMask(Base*, char*, int);
  virtual ~FitsMask();

  Context* context() {return context_;}
  Matrix& mm() {return mm_;}
  XColor* color() {return color_;}
  char* trueColor() {return trueColor_;}
  int mark() {return mark_;}

  FitsMask* previous() {return previous_;}
  void setPrevious(FitsMask* m) {previous_ = m;}
  FitsMask* next() {return next_;}
  void setNext(FitsMask* m) {next_ = m;}
};

#endif

