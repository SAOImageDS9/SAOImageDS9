// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tk.h>

#include "vect.h"
#include "fitsimage.h"

Vect::Vect(Base* p, const Vector& pt, double mag, double ang)
  : Line(p, pt, pt)
{
  strcpy(type_,"vector");
  p2 = Vector(mag,0) * Rotate(ang) * FlipY() * Translate(p1);
  updateBBox();
}

Vect::Vect(Base* p, const Vector& pt,
	   double mag, double ang,
	   int arr,
	   const char* clr, int* dsh,
	   int wth, const char* fnt, const char* txt, 
	   unsigned short prop, const char* cmt, 
	   const List<Tag>& tg, const List<CallBack>& cb) 
  : Line(p, pt, pt, 0, arr, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  strcpy(type_,"vector");
  p2 = Vector(mag,0) * Rotate(ang) * FlipY() * Translate(p1);
  updateBBox();
}

Vect::Vect(Base* p, const Vector& ptr1,
	   const Vector& ptr2,
	   int arr,
	   const char* clr, int* dsh,
	   int wth, const char* fnt, const char* txt, 
	   unsigned short prop, const char* cmt, 
	   const List<Tag>& tg, const List<CallBack>& cb) 
  : Line(p, ptr1, ptr2, 0, arr, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  strcpy(type_,"vector");
}

void Vect::setPoints(const Vector& pt, double mag, double ang)
{
  p1 = pt;
  p2 = Vector(mag,0) * Rotate(ang) * FlipY() * Translate(p1);
  updateBBox();

  doCallBack(CallBack::EDITCB);
}

// list

void Vect::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky, 
		Coord::SkyFormat format, int conj, int strip)
{
  if (!strip) {
    FitsImage* ptr = parent->findFits(sys,center);
    listPre(str, sys, sky, ptr, strip, 1);

    switch (sys) {
    case Coord::IMAGE:
    case Coord::PHYSICAL:
    case Coord::DETECTOR:
    case Coord::AMPLIFIER:
      listNonCel(ptr, str, sys);
      break;
    default:
      if (ptr->hasWCSCel(sys)) {
	listRADEC(ptr,p1,sys,sky,format);
	double rr = ptr->mapLenFromRef((p2-p1).length(),sys,Coord::ARCSEC);
	double aa = parent->mapAngleFromRef((p2-p1).angle(),sys,sky);
	str << type_ << '(' << ra << ',' << dec << ',' 
	    << setprecision(3) << fixed << rr << '"' << ',';
	str.unsetf(ios_base::floatfield);
	str << setprecision(8) << radToDeg(aa) << ')';
      }
      else
	listNonCel(ptr, str, sys);
    }

    if (conj)
      str << " ||";

    str << " vector=" << p2Arrow;
    listProperties(str, 0);
  }
}

void Vect::listNonCel(FitsImage* ptr, ostream& str, Coord::CoordSystem sys)
{
  Vector v1 = ptr->mapFromRef(p1,sys);
  double rr = ptr->mapLenFromRef((p2-p1).length(),sys);
  double aa = parent->mapAngleFromRef((p2-p1).angle(),sys);
  str << type_ << '(' << setprecision(8) << v1 << ','
      << rr << ',' << radToDeg(aa) << ')';
}

void Vect::listXML(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky, 
		   Coord::SkyFormat format)
{
  FitsImage* ptr = parent->findFits(sys,center);
  double rr = ptr->mapLenFromRef((p2-p1).length(),sys,Coord::ARCSEC);
  
  XMLRowInit();
  XMLRow(XMLSHAPE,type_);

  XMLRowPoint(ptr,sys,sky,format,p1);
  
  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    XMLRow(XMLR,rr,8);
    break;
  default:
    if (ptr->hasWCS(sys)) {
      if (ptr->hasWCSCel(sys))
	XMLRowARCSEC(XMLR,rr);
      else
	XMLRow(XMLR,rr,8);
    }
    break;
  }

  XMLRowAng(sys,sky);
  XMLRow(XMLPARAM,p2Arrow);

  XMLRowProps(ptr,sys);
  XMLRowEnd(str);
}
