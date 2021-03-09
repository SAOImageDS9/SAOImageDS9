// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __ellipse_h__
#define __ellipse_h__

#include "baseellipse.h"

class Ellipse : public BaseEllipse {
 protected:
  int fill_;

 protected:
  void renderXArcDraw(Drawable, GC, Vector&, Vector&, int, int, RenderMode);
  void renderXBezierDraw(Drawable, GC, RenderMode);

  void renderPSDraw();

#ifdef __WIN32
  void renderWIN32Draw();
#endif

public:
  Ellipse(Base* p, const Vector& ctr, const Vector& r, double ang, int fill);
  Ellipse(Base* p, const Vector& ctr,
	  const Vector& r, double ang, int fill,
	  const char* clr, int* dsh,
	  int wth, const char* fnt, const char* txt, 
	  unsigned short prop, const char* cmt, 
	  const List<Tag>& tg, const List<CallBack>& cb);
  Ellipse(const Ellipse&);

  virtual Marker* dup() {return new Ellipse(*this);}
  void edit(const Vector&, int);

  void fill(int ff) {fill_ = ff;}
  int getFill() {return fill_;}

  void analysis(AnalysisTask, int);
  void analysisHistogram(char*, char*, int);
  void analysisPlot3d(char*, char*, Coord::CoordSystem,
		      Marker::AnalysisMethod);
  void analysisStats(Coord::CoordSystem, Coord::SkyFrame sky);

  void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int, int);
  virtual void listPost(ostream&, int, int);
  void listXML(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  virtual void listCiao(ostream&, Coord::CoordSystem, int);
  virtual void listSAOtng(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);
  virtual void listPros(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);
  virtual void listSAOimage(ostream&, int);
};

#endif


