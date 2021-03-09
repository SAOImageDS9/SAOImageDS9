// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __line_h__
#define __line_h__

#include "baseline.h"

class Line : public BaseLine {
protected:
  int p1Arrow;
  int p2Arrow;

protected:
  void renderX(Drawable, Coord::InternalSystem, RenderMode);
  void renderPS(PSColorSpace);
#ifdef __WIN32
  void renderWIN32();
#endif

  void updateHandles();

public:
  Line(Base* p, const Vector& ptr1, const Vector& ptr2);
  Line(Base* p, const Vector& ptr1,
       const Vector& ptr2,
       int a1, int a2,
       const char* clr, int* dsh,
       int wth, const char* fnt, const char* txt,
       unsigned short prop, const char* cmt, 
       const List<Tag>& tg, const List<CallBack>& cb);
  Line(const Line&);

  virtual Marker* dup() {return new Line(*this);}

  void setArrows(int,int);
  int getP1Arrow() {return p1Arrow;}
  int getP2Arrow() {return p2Arrow;}

  void analysis(AnalysisTask, int);
  void analysisPlot2d(char*, char*, char*, char*, 
		      Coord::CoordSystem, Coord::SkyFrame, 
		      Marker::AnalysisMethod);

  virtual void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int, int);
  virtual void listXML(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  virtual void listPost(ostream&, int, int);
  void listSAOtng(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);
};

#endif
