// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

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

    str << type_ << '(';
    switch (sys) {
    case Coord::IMAGE:
    case Coord::PHYSICAL:
    case Coord::DETECTOR:
    case Coord::AMPLIFIER:
      ptr->listFromRef(str,p1,sys);
      str << ',';
      ptr->listLenFromRef(str,(p2-p1).length(),sys);
      str << ',';
      parent->listAngleFromRef(str,(p2-p1).angle(),sys);
      break;
    default:
      ptr->listFromRef(str,p1,sys,sky,format);
      str << ',';
      ptr->listLenFromRef(str,(p2-p1).length(),sys,Coord::ARCSEC);
      if (ptr->hasWCSCel(sys))
	str << '"';
      str << ',';
      parent->listAngleFromRef(str,(p2-p1).angle(),sys,sky);
      break;
    }
    str << ')';
    
    if (conj)
      str << " ||";

    str << " vector=" << p2Arrow;
    listProperties(str, 0);
  }
}

void Vect::listXML(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky, 
		   Coord::SkyFormat format)
{
  FitsImage* ptr = parent->findFits(sys,center);
  
  XMLRowInit();
  XMLRow(XMLSHAPE,type_);

  XMLRowPoint(ptr,sys,sky,format,p1);
  
  ostringstream pstr;
  ptr->listLenFromRef(pstr,(p2-p1).length(),sys,Coord::ARCSEC);
  XMLRow(XMLR,(char*)pstr.str().c_str());

  XMLRowAng(sys,sky);
  XMLRow(XMLPARAM,p2Arrow);

  XMLRowProps(ptr,sys);
  XMLRowEnd(str);
}
