// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __projection_h__
#define __projection_h__

#include "baseline.h"

class Projection : public BaseLine {
 private:
  double width;
  Vector p3; // used for bbox
  Vector p4;

 private:
  void renderX(Drawable, Coord::InternalSystem, RenderMode);
  GC renderXGC(RenderMode);

  void renderPS(PSColorSpace);
  void renderPSGC(PSColorSpace);

#ifdef __WIN32
  void renderWIN32();
  void renderWIN32GC();
#endif

  void updateHandles();
  void calcAllBBox();

 public:
  Projection(const Projection&);
  Projection(Base* p, const Vector& ptr1, const Vector& ptr2, 
	     double wd,
	     const char* clr, int* dsh,
	     int wth, const char* fnt, const char* txt, 
	     unsigned short prop, const char* cmt,
	     const List<Tag>& tg, const List<CallBack>& cb);

  Marker* dup() {return new Projection(*this);}
  int isIn(const Vector&);

  void updateCoords(const Matrix&);

  void edit(const Vector&, int);

  void analysis(AnalysisTask, int);
  void analysisPlot2d(char*, char*, char*, char*, 
		      Coord::CoordSystem, Coord::SkyFrame, 
		      Marker::AnalysisMethod);

  void set(const Vector&, const Vector&, double);
  void setWidth(double);
  double getWidth() {return width;}

  void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int, int);
  void listXML(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
};

#endif
