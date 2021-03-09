// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "epanda.h"
#include "fitsimage.h"

Epanda::Epanda(Base* p, const Vector& ctr, 
	       double a1, double a2, int an,
	       const Vector& r1, const Vector& r2, int rn,
	       double ang,
	       const char* clr, int* dsh, 
	       int wth, const char* fnt, const char* txt, 
	       unsigned short prop, const char* cmt, 
	       const List<Tag>& tg, const List<CallBack>& cb)
  : BaseEllipse(p, ctr, ang, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  numAnnuli_ = rn+1;
  annuli_ = new Vector[numAnnuli_];

  for (int ii=0; ii<numAnnuli_; ii++)
    annuli_[ii] = ((r2-r1)/rn)*ii+r1;

  setAngles(a1,a2,an);

  strcpy(type_, "epanda");
  numHandle = 4 + numAnnuli_ + numAngles_;

  startAng_ = angles_[0];
  stopAng_ = angles_[numAngles_-1];

  updateBBox();
}

Epanda::Epanda(Base* p, const Vector& ctr, 
	       int an, double* a,
	       int rn, Vector* r,
	       double ang,
	       const char* clr, int* dsh, 
	       int wth, const char* fnt, const char* txt, 
	       unsigned short prop, const char* cmt, 
	       const List<Tag>& tg, const List<CallBack>& cb)
  : BaseEllipse(p, ctr, ang, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  numAnnuli_ = rn;
  annuli_ = new Vector[numAnnuli_];

  for (int ii=0; ii<numAnnuli_; ii++)
    annuli_[ii] = r[ii];
  sortAnnuli();

  setAngles(an,a);

  strcpy(type_, "epanda");
  numHandle = 4 + numAnnuli_ + numAngles_;

  startAng_ = angles_[0];
  stopAng_ = angles_[numAngles_-1];

  updateBBox();
}

Epanda::Epanda(const Epanda& a) : BaseEllipse(a) {}

void Epanda::renderX(Drawable drawable, Coord::InternalSystem sys, 
		     RenderMode mode)
{
  BaseEllipse::renderX(drawable, sys, mode);

  GC lgc = renderXGC(mode);

  Vector r0 = annuli_[0];
  Vector r1 = annuli_[numAnnuli_-1];

  for (int ii=0; ii<numAngles_; ii++) {
    Vector rr0 = fwdMap(intersect(r0,-angles_[ii]),sys);
    Vector rr1 = fwdMap(intersect(r1,-angles_[ii]),sys);

    if (mode == SRC) {
      if (selected) {
	if (ii == 0)
	  XSetForeground(display, gc, parent->getColor("red"));
	else if (ii == numAngles_-1)
	  XSetForeground(display, gc, parent->getColor("blue"));
	else
	  XSetForeground(display, gc, color);
      }
      else
	XSetForeground(display, gc, color);
    }

    XDrawLine(display, drawable, lgc, rr0[0], rr0[1], rr1[0], rr1[1]);    
  }
}

void Epanda::renderPS(PSColorSpace mode)
{
  BaseEllipse::renderPS(mode);

  renderPSGC(mode);

  Vector r0 = annuli_[0];
  Vector r1 = annuli_[numAnnuli_-1];

  for (int ii=0; ii<numAngles_; ii++) {
    Vector rr0 = fwdMap(intersect(r0,-angles_[ii]),Coord::CANVAS);
    Vector rr1 = fwdMap(intersect(r1,-angles_[ii]),Coord::CANVAS);

    ostringstream str;
    str << "newpath " 
    	<< parent->TkCanvasPs(rr0) << ' '
	<< "moveto "
    	<< parent->TkCanvasPs(rr1) << ' '
	<< "lineto stroke" << endl << ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
  }
}

#ifdef __WIN32
#include <win32lib.h>

void Epanda::renderWIN32()
{
  BaseEllipse::renderWIN32();

  renderWIN32GC();

  Vector r0 = annuli_[0];
  Vector r1 = annuli_[numAnnuli_-1];

  for (int ii=0; ii<numAngles_; ii++) {
    Vector rr0 = fwdMap(intersect(r0,-angles_[ii]),Coord::CANVAS);
    Vector rr1 = fwdMap(intersect(r1,-angles_[ii]),Coord::CANVAS);

    win32DrawLine(rr0,rr1);
  }
}
#endif

// Support

void Epanda::updateHandles()
{
  BaseEllipse::updateHandles();

  Vector rr = annuli_[numAnnuli_-1];
  for (int ii=0; ii<numAngles_; ii++)
    handle[ii+4+numAnnuli_] = fwdMap(intersect(rr,-angles_[ii]),Coord::CANVAS);
}

void Epanda::edit(const Vector& v, int h)
{
  Matrix mm = bckMatrix();
  Vector n = v * mm;

  if (h<5) {
    // don't go thru the center
    if (n[0]!=0 && n[1]!=0) {
      Vector o = annuli_[numAnnuli_-1];
      for (int i=0; i<numAnnuli_; i++) {
	annuli_[i][0] *= fabs(n[0]/o[0]);
	annuli_[i][1] *= fabs(n[1]/o[1]);
      }
    }
  }
  else if (h<(5+numAnnuli_)) {
    // we must have some length
    double l = n.length();
    annuli_[h-5] = annuli_[numAnnuli_-1] * l/annuli_[numAnnuli_-1][0];
  }
  else {
    angles_[h-5-numAnnuli_] = -((v * mm).angle());
    sortAngles();
    startAng_ = angles_[0];
    stopAng_ = angles_[numAngles_-1];
  }
  
  updateBBox();
  doCallBack(CallBack::EDITCB);
}

void Epanda::editEnd()
{
  sortAnnuli();
  sortAngles();
  startAng_ = angles_[0];
  stopAng_ = angles_[numAngles_-1];

  updateBBox();
  doCallBack(CallBack::EDITENDCB);
}

int Epanda::addAnnuli(const Vector& v)
{
  Matrix mm = bckMatrix();
  double l = (v * mm).length();
  Vector rr = annuli_[numAnnuli_-1] * l/annuli_[numAnnuli_-1][0];

  // we need to insert into the next to the last location
  // new size array
  Vector* old = annuli_;
  annuli_ = new Vector[numAnnuli_+1];

  // copy old values
  for (int i=0; i<numAnnuli_; i++)
    annuli_[i] = old[i];

  // save last
  annuli_[numAnnuli_] = old[numAnnuli_-1];

  // delete old
  if (old)
    delete [] old;

  // new size on end
  annuli_[numAnnuli_-1] = rr;

  numAnnuli_++;
  numHandle++;

  return 4+numAnnuli_-1;
}

int Epanda::addAngles(const Vector& v)
{
  Matrix mm = bckMatrix();
  addAngle(-((v * mm).angle()));
  numHandle++;

  return 4+numAnnuli_+numAngles_-1;
}

void Epanda::setAnglesAnnuli(double a1, double a2, int an, 
			    Vector r1, Vector r2, int rn)
{
  numAnnuli_ = rn+1;
  if (annuli_)
    delete [] annuli_;
  annuli_ = new Vector[numAnnuli_];

  for (int i=0; i<numAnnuli_; i++)
    annuli_[i] = ((r2-r1)/rn)*i+r1;

  sortAnnuli();
  setAngles(a1,a2,an);
  startAng_ = angles_[0];
  stopAng_ = angles_[numAngles_-1];

  numHandle = 4 + numAnnuli_ + numAngles_;

  updateBBox();
  doCallBack(CallBack::EDITCB);
}

void Epanda::setAnglesAnnuli(const double* a, int an, const Vector* r, int rn)
{
  numAnnuli_ = rn;
  if (annuli_)
    delete [] annuli_;
  annuli_ = new Vector[numAnnuli_];

  for (int i=0; i<numAnnuli_; i++)
    annuli_[i] = r[i];

  sortAnnuli();
  setAngles(an,a);
  startAng_ = angles_[0];
  stopAng_ = angles_[numAngles_-1];

  numHandle = 4 + numAnnuli_ + numAngles_;

  updateBBox();
  doCallBack(CallBack::EDITCB);
}

void Epanda::deleteAnglesAnnuli(int h)
{
  if (h>4) {
    int hh = h-4-1;

    if (numAnnuli_>2 && hh<numAnnuli_) {
      // new annuli_ array
      Vector* old = annuli_;
      annuli_ = new Vector[numAnnuli_-1];

      // copy up to annuli_ in question
      for (int i=0; i<hh; i++)
	annuli_[i] = old[i];

      // copy remainder
      for (int i=hh; i<numAnnuli_-1; i++)
	annuli_[i] = old[i+1];

      if (old)
	delete [] old;
      numAnnuli_--;
    }
    else if (numAngles_>2 && hh<(numAnnuli_+numAngles_)) {
      hh -= numAnnuli_;
      deleteAngle(hh);
    }

    numHandle = 4 + numAnnuli_ + numAngles_;

    startAng_ = angles_[0];
    stopAng_ = angles_[numAngles_-1];

    updateBBox();
    doCallBack(CallBack::EDITCB);
  }
}

int Epanda::isIn(const Vector& vv, Coord::InternalSystem sys, int nn, int aa)
{
  Vector pp = bckMap(vv,sys);
  return BaseEllipse::isIn(vv,sys,nn) && isInAngle(pp,aa);
}

void Epanda::analysis(AnalysisTask mm, int which)
{
  switch (mm) {
  case PANDA:
    if (!analysisPanda_ && which) {
      addCallBack(CallBack::MOVECB, analysisPandaCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::EDITCB, analysisPandaCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::EDITENDCB, analysisPandaCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::ROTATECB, analysisPandaCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::UPDATECB, analysisPandaCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::DELETECB, analysisPandaCB_[1], 
		  parent->options->cmdName);
    }
    if (analysisPanda_ && !which) {
      deleteCallBack(CallBack::MOVECB, analysisPandaCB_[0]);
      deleteCallBack(CallBack::EDITCB, analysisPandaCB_[0]);
      deleteCallBack(CallBack::EDITENDCB, analysisPandaCB_[0]);
      deleteCallBack(CallBack::ROTATECB, analysisPandaCB_[0]);
      deleteCallBack(CallBack::UPDATECB, analysisPandaCB_[0]);
      deleteCallBack(CallBack::DELETECB, analysisPandaCB_[1]);
    }

    analysisPanda_ = which;
    break;
  case STATS:
    if (!analysisStats_ && which) {
      addCallBack(CallBack::MOVECB, analysisStatsCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::EDITCB, analysisStatsCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::EDITENDCB, analysisStatsCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::ROTATECB, analysisStatsCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::UPDATECB, analysisStatsCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::DELETECB, analysisStatsCB_[1], 
		  parent->options->cmdName);
    }
    if (analysisStats_ && !which) {
      deleteCallBack(CallBack::MOVECB, analysisStatsCB_[0]);
      deleteCallBack(CallBack::EDITCB, analysisStatsCB_[0]);
      deleteCallBack(CallBack::EDITENDCB, analysisStatsCB_[0]);
      deleteCallBack(CallBack::ROTATECB, analysisStatsCB_[0]);
      deleteCallBack(CallBack::UPDATECB, analysisStatsCB_[0]);
      deleteCallBack(CallBack::DELETECB, analysisStatsCB_[1]);
    }

    analysisStats_ = which;
    break;
  default:
    // na
    break;
  }
}

void Epanda::analysisPanda(char* xname, char* yname, char* ename,
			   Coord::CoordSystem sys, int angnum)
{
  double* xx;
  double* yy;
  double* ee;

  BBox* bb = new BBox[numAnnuli_];
  Matrix mm = Rotate(angle) * Translate(center);

  for (int ii=0; ii<numAnnuli_; ii++) {
    Vector vv = annuli_[ii];
    bb[ii] = BBox(-vv * mm);
    bb[ii].bound( vv * mm);
    bb[ii].bound(Vector( vv[0],-vv[1]) * mm);
    bb[ii].bound(Vector(-vv[0], vv[1]) * mm);
  }

  int num = parent->markerAnalysisPanda(this, &xx, &yy, &ee,
					numAnnuli_-1, annuli_, 
					angnum,
					bb, sys);
  analysisXYEResult(xname, yname, ename, xx, yy, ee, num);
}

void Epanda::analysisStats(Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  ostringstream str;
  BBox* bb = new BBox[numAnnuli_];
  Matrix mm = Rotate(angle) * Translate(center);

  for (int ii=0; ii<numAnnuli_; ii++) {
    Vector vv = annuli_[ii];
    bb[ii] = BBox(-vv * mm);
    bb[ii].bound( vv * mm);
    bb[ii].bound(Vector( vv[0],-vv[1]) * mm);
    bb[ii].bound(Vector(-vv[0], vv[1]) * mm);
  }

  parent->markerAnalysisStats(this, str, numAnnuli_-1, numAngles_-1, bb, sys, sky);
  str << ends;
  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

// list

void Epanda::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		 Coord::SkyFormat format, int conj, int strip)
{
  int regular = 1;
  if (numAngles_>2) {
    double delta;
    if (angles_[1] > angles_[0])
      delta = angles_[1]-angles_[0];
    else
      delta = angles_[1]+M_TWOPI-angles_[0];

    for (int ii=2; ii<numAngles_; ii++) {
      double diff;
      if (angles_[ii] > angles_[ii-1])
	diff = angles_[ii]-angles_[ii-1];
      else
	diff = angles_[ii]+M_TWOPI-angles_[ii-1];

      if (!teq(diff,delta,FLT_EPSILON)) {
	regular = 0;
	break;
      }
    }
  }

  if (numAnnuli_>2) {
    double delta = annuli_[1][0]-annuli_[0][0];
    for (int i=2; i<numAnnuli_; i++) {
      double diff = annuli_[i][0]-annuli_[i-1][0];
      if (!teq(diff,delta,FLT_EPSILON)) {
	regular = 0;
	break;
      }
    }
  }

  if (regular)
    listA(str, sys, sky, format, conj, strip);
  else
    listB(str, sys, sky, format, conj, strip);
}

void Epanda::listA(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		  Coord::SkyFormat format, int conj, int strip)
{
  FitsImage* ptr = parent->findFits(sys,center);
  listPre(str, sys, sky, ptr, strip, 0);

  str << type_ << '(';
  ptr->listFromRef(str,center,sys,sky,format);
  str << ',';
  parent->listAngleFromRef(str,angles_[0],sys,sky);
  str << ',';
  parent->listAngleFromRef(str,angles_[numAngles_-1],angles_[0],sys,sky);
  str << ',';
  str << numAngles_-1;
  str << ',';
  if (ptr->hasWCSCel(sys))
    str << setunit('"');
  ptr->listLenFromRef(str,annuli_[0],sys,Coord::ARCSEC);
  str << ',';
  if (ptr->hasWCSCel(sys))
    str << setunit('"');
  ptr->listLenFromRef(str,annuli_[numAnnuli_-1],sys,Coord::ARCSEC);
  str << ',';
  str << numAnnuli_-1;
  str << ',';
  parent->listAngleFromRef(str,angle,sys,sky);
  str  << ')';

  listPost(str, conj, strip);
}

void Epanda::listB(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		  Coord::SkyFormat format, int conj, int strip)
{
  FitsImage* ptr = parent->findFits(sys,center);

  for (int jj=1; jj<numAngles_; jj++) {
    double a1 = angles_[jj-1];
    double a2 = angles_[jj];
    for (int ii=1; ii<numAnnuli_; ii++) {
      listPre(str, sys, sky, ptr, strip, 0);

      str << type_ << '(';
      ptr->listFromRef(str,center,sys,sky,format);
      str << ',';
      parent->listAngleFromRef(str,a1,sys,sky);
      str << ',';
      parent->listAngleFromRef(str,a2,a1,sys,sky);
      str << ",1,";
      if (ptr->hasWCSCel(sys))
	str << setunit('"');
      ptr->listLenFromRef(str,annuli_[ii-1],sys,Coord::ARCSEC);
      str << ',';
      if (ptr->hasWCSCel(sys))
	str << setunit('"');
      ptr->listLenFromRef(str,annuli_[ii],sys,Coord::ARCSEC);
      str << ",1,";
      parent->listAngleFromRef(str,angle,sys,sky);
      str << ')';

      if (!strip) {
	if (conj)
	  str << " ||";

	str << " # epanda=";
	if (ii==1 && jj==1 && !strip) {
	  str << '(';
	  for (int kk=0; kk<numAngles_; kk++) {
	    parent->listAngleFromRef(str,angles_[kk],sys,sky);
	    str << ((kk<numAngles_-1) ? ' ' : ')');
	  }
	  str << '(';
	  str << setseparator(' ');
	  for (int kk=0; kk<numAnnuli_; kk++) {
	    if (ptr->hasWCSCel(sys))
	      str << setunit('"');
	    ptr->listLenFromRef(str,annuli_[kk],sys,Coord::ARCSEC);
	    str << ((kk<numAnnuli_-1) ? ' ' : ')');
	  }	      
	  str << setseparator(',');
	  str << '(';
	  parent->listAngleFromRef(str,angle,sys,sky);
	  str << ')';

	  listProps(str);
	}
	else
	  str << "ignore";
	str << (strip ? ';' : '\n');
      }
      else {
	if (conj)
	  str << "||";
	else
	  str << ";";
      }
    }
  }
}

void Epanda::listXML(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky, 
		     Coord::SkyFormat format)
{
  FitsImage* ptr = parent->findFits(sys,center);

  XMLRowInit();
  XMLRow(XMLSHAPE,type_);

  XMLRowCenter(ptr,sys,sky,format);
  XMLRowRadius(ptr,sys,annuli_,numAnnuli_);
  XMLRowAng(sys,sky);
  XMLRowAng(sys,sky,angles_,numAngles_);

  XMLRowProps(ptr,sys);
  XMLRowEnd(str);
}

