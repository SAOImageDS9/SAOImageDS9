// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tk.h>

#include "fitsmask.h"
#include "base.h"
#include "fitsimage.h"

FitsMask::FitsMask(Base* p, FitsImage* fits, char* clr, int mrk) 
  : parent_(p), mask_(fits)
{
  current_ = mask_;
  mptr_ = current_;
  colorName_ = dupstr(clr);
  color_ = parent_->getXColor(colorName_);
  parent_->encodeTrueColor(color_, trueColor_);
  mark_ = mrk;

  next_ = NULL;
  previous_ = NULL;
}

FitsMask::~FitsMask()
{
  if (colorName_)
    delete [] colorName_;

  FitsImage* ptr = mask_;
  while (ptr) {
    // better not have more that one slice
    FitsImage* sptr = ptr->nextSlice();
    while (sptr) {
      FitsImage* stmp = sptr->nextSlice();
      delete sptr;
      sptr = stmp;
    }

    FitsImage* tmp = ptr->nextMosaic();
    delete ptr;
    ptr = tmp;
  }
}

void FitsMask::nextMosaic() {
  if (mptr_) 
    mptr_ = mptr_->nextMosaic();
}

