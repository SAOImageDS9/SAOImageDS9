// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colormap.h"
#include "colorbar.h"

// ColorMapInfo

ColorMapInfo::ColorMapInfo(Colorbar* p) : parent_(p)
{
  id_ = parent_->cmapid();

  name_ =NULL;
  filename_ =NULL;
  next_ =NULL;
  previous_ =NULL;
}

ColorMapInfo::~ColorMapInfo()
{
  if (name_)
    delete [] name_;

  if (filename_)
    delete [] filename_;
}

void ColorMapInfo::setName(const char* n)
{
  if (name_)
    delete [] name_;

  name_ = dupstr(n);
}

void ColorMapInfo::setFileName(const char* n)
{
  if (filename_)
    delete [] filename_;

  filename_ = dupstr(n);
}


