// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __ellipseannulus_h__
#define __ellipseannulus_h__

#include "baseellipse.h"

class EllipseAnnulus : public BaseEllipse {
public:
  EllipseAnnulus(Base* p, const Vector& ctr, 
		 const Vector& r, 
		 double ang, 
		 const char* clr, int* dsh,
		 int wth, const char* fnt, const char* txt, 
		 unsigned short prop, const char* cmt, 
		 const List<Tag>& tg, const List<CallBack>& cb);
  EllipseAnnulus(Base* p, const Vector& ctr, 
		 const Vector& inner, const Vector& outer, int num, 
		 double ang);
  EllipseAnnulus(Base* p, const Vector& ctr, 
		 const Vector& inner, const Vector& outer, int num, 
		 double ang, 
		 const char* clr, int* dsh,
		 int wth, const char* fnt, const char* txt, 
		 unsigned short prop, const char* cmt, 
		 const List<Tag>& tg, const List<CallBack>& cb);
  EllipseAnnulus(Base* p, const Vector& ctr,
		 int an, Vector* r,
		 double ang, 
		 const char* clr, int* dsh,
		 int wth, const char* fnt, const char* txt, 
		 unsigned short prop, const char* cmt, 
		 const List<Tag>& tg, const List<CallBack>& cb);
  EllipseAnnulus(const EllipseAnnulus&);

  Marker* dup() {return new EllipseAnnulus(*this);}
  void edit(const Vector&, int);
  void editEnd();

  int addAnnuli(const Vector&);

  void analysis(AnalysisTask, int);
  void analysisRadial(char*, char*, char*, Coord::CoordSystem sys);
  void analysisStats(Coord::CoordSystem, Coord::SkyFrame sky);

  void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int, int);
  void listXML(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void listPros(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);
  void listSAOimage(ostream&, int);
};

#endif


