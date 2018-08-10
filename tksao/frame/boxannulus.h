// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __boxannulus_h__
#define __boxannulus_h__

#include "basebox.h"

class BoxAnnulus : public BaseBox {
public:
  BoxAnnulus(Base* p, const Vector& ctr,
	     const Vector& s, 
	     double ang,
	     const char* clr, int* dsh,
	     int wth, const char* fnt, const char* txt, 
	     unsigned short prop, const char* cmt,
	     const List<Tag>& tg, const List<CallBack>& cb);
  BoxAnnulus(Base* p, const Vector& ctr,
	     const Vector& inner, const Vector& outer, int num,
	     double ang);
  BoxAnnulus(Base* p, const Vector& ctr,
	     const Vector& inner, const Vector& outer, int num,
	     double ang,
	     const char* clr, int* dsh,
	     int wth, const char* fnt, const char* txt, 
	     unsigned short prop, const char* cmt,
	     const List<Tag>& tg, const List<CallBack>& cb);
  BoxAnnulus(Base* p, const Vector& ctr, 
	     int an, Vector* s,
	     double ang, 
	     const char* clr, int* dsh,
	     int wth, const char* fnt, const char* txt,
	     unsigned short prop, const char* cmt,
	     const List<Tag>& tg, const List<CallBack>& cb);
  BoxAnnulus(const BoxAnnulus&);

  Marker* dup() {return new BoxAnnulus(*this);}
  void editBegin(int);
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
