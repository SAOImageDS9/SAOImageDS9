// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>

#include "raytrace.h"

RayTrace::RayTrace()
{
  az_ =0;
  el_ =0;
  width_ =0;
  height_ =0;
  zbuf_ =NULL;
  mkzbuf_ =NULL;

  next_ =NULL;
  previous_ =NULL;
}

RayTrace::RayTrace(double az, double el, int width, int height, 
		   Matrix3d mm, BBox3d bb)
{
  az_ = az;
  el_ = el;
  width_ = width;
  height_ = height;
  mm_ = mm;
  bb_ = bb;

  zbuf_ = new float[width_*height_];
  if (!zbuf_) 
    return;
  memset(zbuf_, 0, width_*height_*sizeof(float));

  mkzbuf_ = new unsigned char[width_*height_];
  if (!mkzbuf_)
    return;
  memset(mkzbuf_, 0, width_*height_);

  next_ =NULL;
  previous_ =NULL;
}

RayTrace::~RayTrace()
{
  if (zbuf_)
    delete [] zbuf_;
  if (mkzbuf_)
    delete [] mkzbuf_;
}

