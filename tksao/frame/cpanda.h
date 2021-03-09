// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __cpanda_h__
#define __cpanda_h__

#include "baseellipse.h"

class Cpanda : public BaseEllipse {
 private:
  void renderX(Drawable, Coord::InternalSystem, RenderMode);
  void renderPS(PSColorSpace);
#ifdef __WIN32
  void renderWIN32();
#endif

  void updateHandles();

  void listA(ostream&, Coord::CoordSystem, Coord::SkyFrame,
	     Coord::SkyFormat, int, int);
  void listB(ostream&, Coord::CoordSystem, Coord::SkyFrame,
	     Coord::SkyFormat, int, int);

  int isIn(const Vector& vv, Coord::InternalSystem sys, int nn, int aa);

 public:
  Cpanda(const Cpanda&);
  Cpanda(Base* p, const Vector& ctr, 
	 double a1, double a2, int an,
	 double r1, double r2, int rn,
	 const char* clr, int* dsh,
	 int wth, const char* fnt, const char* txt, 
	 unsigned short prop, const char* cmt, 
	 const List<Tag>& tg, const List<CallBack>& cb);

  Cpanda(Base* p, const Vector& ctr, 
	 int an, double* a,
	 int rn, double* r,
	 const char* clr, int* dsh,
	 int wth, const char* fnt, const char* txt, 
	 unsigned short prop, const char* cmt, 
	 const List<Tag>& tg, const List<CallBack>& cb);

  Marker* dup() {return new Cpanda(*this);}

  void edit(const Vector&, int);
  void editEnd();

  void rotateBegin() {}
  void rotate(const Vector& v, int h) {}
  void rotateEnd() {}

  int addAnnuli(const Vector&);
  int addAngles(const Vector&);
  void setAnglesAnnuli(double, double, int, Vector, Vector, int);
  void setAnglesAnnuli(const double*, int, const Vector*, int);
  void deleteAnglesAnnuli(int h);

  void analysis(AnalysisTask, int);
  void analysisPanda(char*, char*, char*, Coord::CoordSystem sys, int);
  void analysisStats(Coord::CoordSystem, Coord::SkyFrame sky);

  void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat,
	    int, int);
  void listXML(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void listCiao(ostream&, Coord::CoordSystem, int);

  // special composite funtionality
  void setComposite(const Matrix&, double);
};

#endif
