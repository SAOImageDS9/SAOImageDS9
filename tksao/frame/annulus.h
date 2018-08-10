// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __annulus_h__
#define __annulus_h__

#include "baseellipse.h"

class Annulus : public BaseEllipse {
 public:
  Annulus(Base* p, const Vector& ctr, double inner, double outer, int num);
  Annulus(Base* p, const Vector& ctr, 
	  double inner, double outer, int num,
	  const char* clr, int* dsh, 
	  int wth, const char* fnt, const char* txt, 
	  unsigned short prop, const char* cmt, 
	  const List<Tag>& tg, const List<CallBack>& cb);
  Annulus(Base* p, const Vector& ctr, 
	  int rn, double* r,
	  const char* clr, int* dsh, 
	  int wth, const char* fnt, const char* txt, 
	  unsigned short prop, const char* cmt, 
	  const List<Tag>& tg, const List<CallBack>& cb);
  Annulus(const Annulus&);

  Marker* dup() {return new Annulus(*this);}
  void edit(const Vector&, int);
  void editEnd();

  int addAnnuli(const Vector&);

  void rotateBegin() {}
  void rotate(const Vector& v, int h) {}
  void rotateEnd() {}

  void analysis(AnalysisTask, int);
  void analysisRadial(char*, char*, char*, Coord::CoordSystem sys);
  void analysisStats(Coord::CoordSystem, Coord::SkyFrame sky);

  void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int, int);
  void listXML(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void listCiao(ostream&, Coord::CoordSystem, int);
  void listPros(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);
  void listSAOimage(ostream&, int);

  // special composite funtionality
  void setComposite(const Matrix&, double);
};

#endif
