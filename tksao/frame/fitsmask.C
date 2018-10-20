// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tk.h>

#include "fitsmask.h"
#include "base.h"
#include "fitsimage.h"

FitsMask::FitsMask(Base* pp, Context* cc, char* clr, int mrk) 
  : parent_(pp), context_(cc)
{
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
}

