// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "tkutil.h"
#include "colormap.h"

static int squenceID = 1;

// ColorMapInfo

ColorMapInfo::ColorMapInfo(Colorbar* p) : parent_(p)
{
  id = squenceID++;
  name =NULL;
  fileName =NULL;
  next_ =NULL;
  previous_ =NULL;
}

ColorMapInfo::~ColorMapInfo()
{
  if (name)
    delete [] name;

  if (fileName)
    delete [] fileName;
}

void ColorMapInfo::setName(const char* n)
{
  if (name)
    delete [] name;

  name = dupstr(n);
}

void ColorMapInfo::setFileName(const char* n)
{
  if (fileName)
    delete [] fileName;

  fileName = dupstr(n);
}
