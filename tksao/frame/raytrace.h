// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __raytrace_h__
#define __raytrace_h__

#include "list.h"
#include "vector3d.h"

class RayTrace {
 public:
  double az_;
  double el_;
  int width_;
  int height_;
  Matrix3d mm_;
  BBox3d bb_;
  float* zbuf_;
  unsigned char* mkzbuf_;

  RayTrace* next_;
  RayTrace* previous_;

 public:
  RayTrace();
  RayTrace(double, double, int, int, Matrix3d, BBox3d);
  ~RayTrace();

  RayTrace* previous() {return previous_;}
  void setPrevious(RayTrace* r) {previous_ = r;}
  RayTrace* next() {return next_;}
  void setNext(RayTrace* r) {next_ = r;}
};

#endif
