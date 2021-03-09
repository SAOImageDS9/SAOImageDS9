// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "composite.h"
#include "fitsimage.h"

Composite::Composite(const Composite& a) : Marker(a) 
{
  members = a.members;
  global = a.global;
}

Composite::Composite(Base* p, const Vector& ctr, 
		     double ang, int gl,
		     const char* clr, int* dsh, 
		     int wth, const char* fnt, const char* txt,
		     unsigned short prop, const char* cmt,
		     const List<Tag>& tg, const List<CallBack>& cb)
  : Marker(p, ctr, ang, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  strcpy(type_, "composite");

  global = gl;

  handle = new Vector[4];
  numHandle = 4;

  updateBBox();
}

void Composite::x11(Drawable drawable, Coord::InternalSystem sys,
		    int tt, HandleMode hh)
{
  if (hh==HANDLES && renderMode != Marker::XOR)
    renderXHandles(drawable);
  if (tt)
    renderXText(drawable, sys, renderMode);

  Marker* mk=members.head();
  while (mk) {
    Marker* mm = mk->dup();
    mm->setRenderMode(renderMode);
    mm->setComposite(fwdMatrix(), angle);
    if (global)
      mm->setComposite(colorName, lineWidth, highlited);
    mm->x11(drawable, sys, tt, hh);
    delete mm;
    mk=mk->next();
  }
}

void Composite::ps(PSColorSpace mode, int tt)
{
  if (tt)
    renderPSText(mode);

  Marker* mk=members.head();
  while (mk) {
    Marker* m = mk->dup();
    m->setComposite(fwdMatrix(), angle);
    if (global)
      m->setComposite(colorName, lineWidth, highlited);
    m->ps(mode,tt);
    delete m;
    mk=mk->next();
  }
}

#ifdef __WIN32
void Composite::win32(int tt)
{
  if (tt)
    renderWIN32Text();

  Marker* mk=members.head();
  while (mk) {
    Marker* m = mk->dup();
    m->setComposite(fwdMatrix(), angle);
    if (global)
      m->setComposite(colorName, lineWidth, highlited);
    m->win32(tt);
    delete m;
    mk=mk->next();
  }
}
#endif

// Support

void Composite::updateHandles()
{
  BBox bb(center * bckMatrix());
  Marker* mk=members.head();
  while (mk) {
    Marker* m = mk->dup();
    m->setComposite(fwdMatrix(), angle);
    for(int ii=0; ii<m->getNumHandle(); ii++)
      bb.bound(bckMap(m->getHandle(ii),Coord::CANVAS));
    delete m;
    mk=mk->next();
  }
  bb.expand(3); // a little more room around the edges

  handle[0] = fwdMap(bb.ll,Coord::CANVAS);
  handle[1] = fwdMap(bb.lr(),Coord::CANVAS);
  handle[2] = fwdMap(bb.ur,Coord::CANVAS);
  handle[3] = fwdMap(bb.ul(),Coord::CANVAS);
}

void Composite::updateCoords(const Matrix& mx)
{
  Marker* mk=members.head();
  while (mk) {
    Vector cc = center;
    mk->setComposite(fwdMatrix(), angle);
    mk->updateCoords(mx);
    center = cc*mx;
    mk->setComposite(bckMatrix(), -angle);
    center = cc;
    mk=mk->next();
  }

  Marker::updateCoords(mx);
}

int Composite::isIn(const Vector& v)
{
  if (!bbox.isIn(v))
    return 0;

  Marker* mk=members.head();
  while (mk) {
    Marker* m = mk->dup();
    m->setComposite(fwdMatrix(), angle);
    if (m->isIn(v)) {
      delete m;
      return 1;
    }
    delete m;

    mk=mk->next();
  }

  return 0;
}

void Composite::append(Marker* m)
{
  m->setComposite(bckMatrix(), -angle);
  members.append(m);
}

Marker* Composite::extract()
{
  Marker* mk=members.head();
  if (mk) {
    members.extractNext(mk);
    mk->setComposite(fwdMatrix(), angle);
  }
  return mk;
}

// list

void Composite::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky, 
		 Coord::SkyFormat format, int conj, int strip)
{
  if (!strip) {
    FitsImage* ptr = parent->findFits(sys,center);
    listPre(str, sys, sky, ptr, strip, 1);

    str << type_ << '(';
    ptr->listFromRef(str,center,sys,sky,format);
    str << ',';
    parent->listAngleFromRef(str,angle,sys,sky);
    str << ')';
      
    str << " ||";
    str << " composite=" << global;
    listProperties(str, 0);
  }

  Marker* mk=members.head();
  while (mk) {
    Marker* m = mk->dup();
    mk=mk->next();

    m->setComposite(fwdMatrix(), angle);
    m->list(str, sys, sky, format, (mk?1:0), strip);
    delete m;
  }
}

void Composite::listCiao(ostream& str, Coord::CoordSystem sys, int strip)
{
  Marker* mk=members.head();
  while (mk) {
    Marker* m = mk->dup();
    mk=mk->next();

    m->setComposite(fwdMatrix(), angle);
    m->listCiao(str, sys, strip);
    delete m;
  }
}

void Composite::listPros(ostream& str, Coord::CoordSystem sys,
			 Coord::SkyFrame sky, Coord::SkyFormat format,
			 int strip)
{
  Marker* mk=members.head();
  while (mk) {
    Marker* m = mk->dup();
    m->setComposite(fwdMatrix(), angle);
    m->listPros(str, sys, sky, format, strip);
    delete m;

    mk=mk->next();
  }
}

void Composite::listSAOtng(ostream& str, Coord::CoordSystem sys,
			   Coord::SkyFrame sky, Coord::SkyFormat format,
			   int strip)
{
  Marker* mk=members.head();
  while (mk) {
    Marker* m = mk->dup();
    m->setComposite(fwdMatrix(), angle);
    m->listSAOtng(str, sys, sky, format, strip);
    delete m;

    mk=mk->next();
  }
}

void Composite::listSAOimage(ostream& str, int strip)
{
  Marker* mk=members.head();
  while (mk) {
    Marker* m = mk->dup();
    m->setComposite(fwdMatrix(), angle);
    m->listSAOimage(str, strip);
    delete m;

    mk=mk->next();
  }
}

void Composite::listXY(ostream& str, Coord::CoordSystem sys,
		       Coord::SkyFrame sky, Coord::SkyFormat format,
		       int strip)
{
  Marker* mk=members.head();
  while (mk) {
    Marker* m = mk->dup();
    m->setComposite(fwdMatrix(), angle);
    m->listXY(str, sys, sky, format, strip);
    delete m;

    mk=mk->next();
  }
}

