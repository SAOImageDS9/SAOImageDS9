// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "composite.h"
#include "fitsimage.h"

#include <sstream>
#include <string>
#include <vector>

#ifdef __WIN32
#include <win32lib.h>
#endif

static const double compositeAreaSpacing = 8;
static const double compositeAreaStep = 4;

Composite::Composite(const Composite& a) : Marker(a) 
{
  members = a.members;
  global = a.global;
  operation = a.operation;
  showArea = a.showArea;
}

Composite::Composite(Base* p, const Vector& ctr, 
		     double ang, int gl, Operation op,
		     const char* clr, int* dsh, 
		     int wth, const char* fnt, const char* txt,
		     unsigned short prop, const char* cmt,
		     const List<Tag>& tg, const List<CallBack>& cb)
  : Marker(p, ctr, ang, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  strcpy(type_, "composite");

  global = gl;
  operation = op;
  showArea = 0;

  handle = new Vector[4];
  numHandle = 4;

  updateBBox();
}

void Composite::x11(Drawable drawable, Coord::InternalSystem sys,
		    int tt, HandleMode hh)
{
  if (showArea && renderMode == Marker::SRC)
    renderXArea(drawable, sys);

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
  if (showArea)
    renderPSArea(mode);

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
  if (showArea)
    renderWIN32Area();

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

void Composite::renderXArea(Drawable drawable, Coord::InternalSystem sys)
{
  GC lgc = renderXGC(Marker::SRC);
  renderXLineNoDash(lgc);

  renderXAreaLine(drawable, sys, 1);
  if (operation == INTERSECTION)
    renderXAreaLine(drawable, sys, -1);
}

void Composite::renderXAreaLine(Drawable drawable, Coord::InternalSystem sys,
				double slope)
{
  double cmin = slope > 0 ? bbox.ll[1]-bbox.ur[0] : bbox.ll[1]+bbox.ll[0];
  double cmax = slope > 0 ? bbox.ur[1]-bbox.ll[0] : bbox.ur[1]+bbox.ur[0];

  for (double c=cmin; c<=cmax; c+=compositeAreaSpacing) {
    int inside = 0;
    Vector start;
    Vector last;

    for (double x=bbox.ll[0]; x<=bbox.ur[0]; x+=compositeAreaStep) {
      double y = slope > 0 ? x+c : -x+c;
      Vector vv(x,y);
      int valid = y >= bbox.ll[1] && y <= bbox.ur[1] && isInArea(vv);

      if (valid) {
	if (!inside)
	  start = vv;
	last = vv;
	inside = 1;
      }
      else if (inside) {
	Vector aa = parent->mapFromRef(parent->mapToRef(start, Coord::CANVAS),
				       sys).round();
	Vector bb = parent->mapFromRef(parent->mapToRef(last, Coord::CANVAS),
				       sys).round();
	XDrawLine(display, drawable, gc, aa[0], aa[1], bb[0], bb[1]);
	inside = 0;
      }
    }

    if (inside) {
      Vector aa = parent->mapFromRef(parent->mapToRef(start, Coord::CANVAS),
				     sys).round();
      Vector bb = parent->mapFromRef(parent->mapToRef(last, Coord::CANVAS),
				     sys).round();
      XDrawLine(display, drawable, gc, aa[0], aa[1], bb[0], bb[1]);
    }
  }
}

void Composite::renderPSArea(PSColorSpace mode)
{
  parent->psColor(mode, parent->getXColor(colorName));

  ostringstream str;
  str << lineWidth << " setlinewidth" << endl
      << "[] 0 setdash" << endl
      << ends;
  Tcl_AppendResult(parent->interp, (char*)str.str().c_str(), NULL);

  renderPSAreaLine(1);
  if (operation == INTERSECTION)
    renderPSAreaLine(-1);
}

void Composite::renderPSAreaLine(double slope)
{
  ostringstream str;

  double cmin = slope > 0 ? bbox.ll[1]-bbox.ur[0] : bbox.ll[1]+bbox.ll[0];
  double cmax = slope > 0 ? bbox.ur[1]-bbox.ll[0] : bbox.ur[1]+bbox.ur[0];

  for (double c=cmin; c<=cmax; c+=compositeAreaSpacing) {
    int inside = 0;
    Vector start;
    Vector last;

    for (double x=bbox.ll[0]; x<=bbox.ur[0]; x+=compositeAreaStep) {
      double y = slope > 0 ? x+c : -x+c;
      Vector vv(x,y);
      int valid = y >= bbox.ll[1] && y <= bbox.ur[1] && isInArea(vv);

      if (valid) {
	if (!inside)
	  start = vv;
	last = vv;
	inside = 1;
      }
      else if (inside) {
	str << "newpath "
	    << parent->TkCanvasPs(start) << " moveto "
	    << parent->TkCanvasPs(last) << " lineto stroke" << endl;
	inside = 0;
      }
    }

    if (inside) {
      str << "newpath "
	  << parent->TkCanvasPs(start) << " moveto "
	  << parent->TkCanvasPs(last) << " lineto stroke" << endl;
    }
  }

  str << ends;
  Tcl_AppendResult(parent->interp, (char*)str.str().c_str(), NULL);
}

#ifdef __WIN32
void Composite::renderWIN32Area()
{
  win32Color(parent->getXColor(colorName));
  win32Width(lineWidth);
  win32Dash(NULL,0);

  renderWIN32AreaLine(1);
  if (operation == INTERSECTION)
    renderWIN32AreaLine(-1);
}

void Composite::renderWIN32AreaLine(double slope)
{
  double cmin = slope > 0 ? bbox.ll[1]-bbox.ur[0] : bbox.ll[1]+bbox.ll[0];
  double cmax = slope > 0 ? bbox.ur[1]-bbox.ll[0] : bbox.ur[1]+bbox.ur[0];

  for (double c=cmin; c<=cmax; c+=compositeAreaSpacing) {
    int inside = 0;
    Vector start;
    Vector last;

    for (double x=bbox.ll[0]; x<=bbox.ur[0]; x+=compositeAreaStep) {
      double y = slope > 0 ? x+c : -x+c;
      Vector vv(x,y);
      int valid = y >= bbox.ll[1] && y <= bbox.ur[1] && isInArea(vv);

      if (valid) {
	if (!inside)
	  start = vv;
	last = vv;
	inside = 1;
      }
      else if (inside) {
	win32DrawLine(start,last);
	inside = 0;
      }
    }

    if (inside)
      win32DrawLine(start,last);
  }
}
#endif

// Support

int Composite::isInArea(const Vector& v)
{
  if (!bbox.isIn(v))
    return 0;

  Marker* mk=members.head();
  while (mk) {
    if (mk->getProperty(Marker::INCLUDE)) {
      mk=mk->next();
      continue;
    }

    Marker* m = mk->dup();
    m->setComposite(fwdMatrix(), angle);
    int inside = m->isIn(v);
    int area = m->hasArea();
    delete m;

    if (area && inside)
      return 0;

    mk=mk->next();
  }

  int found = 0;
  mk=members.head();
  while (mk) {
    if (!mk->getProperty(Marker::INCLUDE)) {
      mk=mk->next();
      continue;
    }

    Marker* m = mk->dup();
    m->setComposite(fwdMatrix(), angle);
    int inside = m->isIn(v);
    int area = m->hasArea();
    delete m;

    if (operation == UNION && inside)
      return 1;
    if (operation == INTERSECTION && (!area || !inside))
      return 0;
    found = 1;

    mk=mk->next();
  }

  return operation == INTERSECTION ? found : 0;
}

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

  int found = 0;
  Marker* mk=members.head();
  while (mk) {
    Marker* m = mk->dup();
    m->setComposite(fwdMatrix(), angle);
    int inside = m->isIn(v);
    int area = m->hasArea();
    delete m;

    if (operation == UNION && inside)
      return 1;
    if (operation == INTERSECTION && (!area || !inside))
      return 0;
    found = 1;

    mk=mk->next();
  }

  return operation == INTERSECTION ? found : 0;
}

void Composite::copyRegionMembers(List<Marker>& result)
{
  Marker* mk=members.head();
  while (mk) {
    Marker* m = mk->dup();
    m->setComposite(fwdMatrix(), angle);
    result.append(m);
    mk=mk->next();
  }
}

int Composite::isInRegion(const Vector& v, List<Marker>& regionMembers)
{
  if (!bbox.isIn(v))
    return 0;

  int found = 0;
  Marker* m=regionMembers.head();
  while (m) {
    int inside = m->isIn(v);
    if (operation == UNION && inside)
      return 1;
    if (operation == INTERSECTION && (!m->hasArea() || !inside))
      return 0;
    found = 1;
    m=m->next();
  }

  return operation == INTERSECTION ? found : 0;
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
  int memberConjunction = operation == INTERSECTION ? 2 : 1;
  if (!strip) {
    FitsImage* ptr = parent->findFits(sys,center);
    listPre(str, sys, sky, ptr, strip, 1);

    str << type_ << '(';
    ptr->listFromRef(str,center,sys,sky,format);
    str << ',';
    parent->listAngleFromRef(str,angle,sys,sky);
    str << ')';
      
    str << ' ' << listConjunction(memberConjunction);
    str << " composite=" << global;
    listProperties(str, 0);
  }

  Marker* mk=members.head();
  while (mk) {
    Marker* m = mk->dup();
    mk=mk->next();

    m->setComposite(fwdMatrix(), angle);
    m->list(str, sys, sky, format, (mk?memberConjunction:0), strip);
    delete m;
  }
}

void Composite::listCiao(ostream& str, Coord::CoordSystem sys, int strip)
{
  vector<string> regions;

  Marker* mk=members.head();
  while (mk) {
    Marker* m = mk->dup();
    mk=mk->next();

    m->setComposite(fwdMatrix(), angle);

    ostringstream ostr;
    m->listCiao(ostr, sys, 0);

    string buf = ostr.str();
    string::size_type start = 0;
    while (start < buf.length()) {
      string::size_type end = buf.find_first_of("\n;", start);
      string rr = buf.substr(start, end == string::npos ?
			     string::npos : end-start);

      if (!rr.empty())
	regions.push_back(rr);

      if (end == string::npos)
	break;
      start = end+1;
    }

    delete m;
  }

  if (regions.empty())
    return;

  const char* op = operation == INTERSECTION ? "&" : "|";
  for (vector<string>::size_type ii=0; ii<regions.size(); ii++) {
    if (ii)
      str << op;
    str << regions[ii];
  }

  listCiaoPost(str, strip);
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
