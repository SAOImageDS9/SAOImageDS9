// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsmask_h__
#define __fitsmask_h__

#include "util.h"

class Base;
class FitsImage;

class FitsMask {
 private:
  Base* parent_;

  FitsImage* mask_;
  FitsImage* current_;
  FitsImage* mptr_;

  char* colorName_;
  XColor* color_;
  char trueColor_[4];

  int mark_;

 protected:
  FitsMask* previous_;
  FitsMask* next_;

 public:
  FitsMask(Base*, FitsImage*, char*, int);
  virtual ~FitsMask();

  FitsImage* mask() {return mask_;}
  FitsImage* current() {return current_;}
  FitsImage* mptr() {return mptr_;}
  XColor* color() {return color_;}
  char* trueColor() {return trueColor_;}
  int mark() {return mark_;}

  void initMosaic() {mptr_ = current_;}
  void nextMosaic();
  void nextSlice();

  FitsMask* previous() {return previous_;}
  void setPrevious(FitsMask* m) {previous_ = m;}
  FitsMask* next() {return next_;}
  void setNext(FitsMask* m) {next_ = m;}
};

#endif

