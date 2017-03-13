// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __basefill_h__
#define __basefill_h__

#include "vector.h"
#include "base.h"

class BaseFill {
 protected:
  int fill_;

 protected:
  void doit();

 public:
  BaseFill();
  BaseFill(int);
  BaseFill(const BaseFill& a);

  void fill(int ff) {fill_ = ff;}
  int getFill() {return fill_;}
};

class BaseFillEllipse : public BaseFill {
 protected:
  void renderXCircleDraw(Display*, Drawable, GC, Vector&, Vector&, int, int);
  void renderPSCircleDraw(Base*, Vector&, double, float, float);
  void renderPSEllipseArcDraw(Base*, Vector&, Vector&, Vector&, 
			      Vector&, Vector&);

 public:
  BaseFillEllipse();
  BaseFillEllipse(int);
  BaseFillEllipse(const BaseFillEllipse& a);
};

#endif
