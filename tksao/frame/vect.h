// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __vect_h__
#define __vect_h__

#include "line.h"

class Vect : public Line {
public:
  Vect(Base* p, const Vector& pt,
       double mag, double ang);
  Vect(Base* p, const Vector& pt,
       double mag, double ang,
       int arr,
       const char* clr, int* dsh,
       int wth, const char* fnt, const char* txt, 
       unsigned short prop, const char* cmt, 
       const List<Tag>& tg, const List<CallBack>& cb);
  Vect(Base* p, const Vector& ptr1,
       const Vector& ptr2,
       int arr,
       const char* clr, int* dsh,
       int wth, const char* fnt, const char* txt, 
       unsigned short prop, const char* cmt, 
       const List<Tag>& tg, const List<CallBack>& cb);

  virtual Marker* dup() {return new Vect(*this);}

  int getArrow() {return p2Arrow;}
  void setArrow(int w) {p2Arrow = w ? 1 : 0;}

  void setPoints(const Vector& pt, double mag, double ang);

  void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int, int);
  void listXML(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void listSAOtng(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int) {}
};

#endif
