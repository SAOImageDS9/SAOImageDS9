// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colortag.h"
#include "colorbar.h"

ColorTag::ColorTag(Colorbar* p, int b, int e, const char* clr) 
  : parent_(p), start_(b), stop_(e)
{
  id_ = parent_->ctagid();

  colorname_ = dupstr(clr);
  color_ = parent_->getXColor(colorname_);

  next_ =NULL;
  previous_ =NULL;
}

ColorTag::~ColorTag()
{
  if (colorname_)
    delete [] colorname_;
}

void ColorTag::move(int xx, int yy)
{
  int aa = start_+xx;
  int bb = stop_+yy;

  if (aa>=bb-20)
    bb = aa+20;

  if (bb>parent_->colorCount) {
    bb = parent_->colorCount;
    aa = parent_->colorCount - (stop_-start_);
  }

  if (aa<0) {
    aa = 0;
    bb = stop_-start_;
  }

  start_ =aa;
  stop_ =bb;
}

void ColorTag::set(int start, int stop, const char* color)
{
  start_ = start;
  stop_ = stop;
  if (colorname_)
    delete [] colorname_;
  colorname_ = dupstr(color);
  color_ = parent_->getXColor(colorname_);
}

void ColorTag::width(int size)
{
  int aa = start_-size/2;
  int bb = stop_+size/2;

  if (bb>parent_->colorCount) {
    bb = parent_->colorCount;
    aa = parent_->colorCount - size;
  }

  if (aa<0) {
    aa = 0;
    bb = size;
  }

  start_ =aa;
  stop_ =bb;
}
