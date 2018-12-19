// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tk.h>

#include "fitsmask.h"
#include "base.h"
#include "context.h"

FitsMask::FitsMask(Base* pp, char* clr, MaskType mm, double ll, double hh)
  : mark_(mm), low_(ll), high_(hh)
{
  context_ = new Context();
  context_->parent(pp);

  colorName_ = dupstr(clr);
  color_ = pp->getXColor(colorName_);
  pp->encodeTrueColor(color_, trueColor_);

  next_ = NULL;
  previous_ = NULL;
}

FitsMask::~FitsMask()
{
  if (colorName_)
    delete [] colorName_;

  if (context_) {
    context_->unload();
    delete context_;
  }
}

