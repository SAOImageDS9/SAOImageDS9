// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "cpanda.h"
#include "fitsimage.h"

Cpanda::Cpanda(Base* p, const Vector& ctr, 
	       double a1, double a2, int an,
	       double r1, double r2, int rn,
	       const char* clr, int* dsh, 
	       int wth, const char* fnt, const char* txt, 
	       unsigned short prop, const char* cmt, 
	       const List<Tag>& tg, const List<CallBack>& cb)
  : BaseEllipse(p, ctr, 0, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  numAnnuli_ = rn+1;
  annuli_ = new Vector[numAnnuli_];

  for (int ii=0; ii<numAnnuli_; ii++) {
    double r = ii*(r2-r1)/rn+r1;
    annuli_[ii] = Vector(r,r);
  }

  setAngles(a1,a2,an);

  strcpy(type_, "panda");
  numHandle = 4 + numAnnuli_ + numAngles_;

  startAng_ = angles_[0];
  stopAng_ = angles_[numAngles_-1];

  updateBBox();
}

Cpanda::Cpanda(Base* p, const Vector& ctr, 
	       int an, double* a,
	       int rn, double* r,
	       const char* clr, int* dsh, 
	       int wth, const char* fnt, const char* txt, 
	       unsigned short prop, const char* cmt, 
	       const List<Tag>& tg, const List<CallBack>& cb)
  : BaseEllipse(p, ctr, 0, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  numAnnuli_ = rn;
  annuli_ = new Vector[numAnnuli_];

  for (int ii=0; ii<numAnnuli_; ii++)
    annuli_[ii] = Vector(r[ii],r[ii]);
  sortAnnuli();

  setAngles(an,a);

  strcpy(type_, "panda");
  numHandle = 4 + numAnnuli_ + numAngles_;

  startAng_ = angles_[0];
  stopAng_ = angles_[numAngles_-1];

  updateBBox();
}

Cpanda::Cpanda(const Cpanda& a) : BaseEllipse(a) {}

void Cpanda::renderX(Drawable drawable, Coord::InternalSystem sys, 
		     RenderMode mode)
{
  BaseEllipse::renderX(drawable, sys, mode);

  GC lgc = renderXGC(mode);

  Vector r0 = annuli_[0];
  Vector r1 = annuli_[numAnnuli_-1];

  for (int ii=0; ii<numAngles_; ii++) {
    Vector rr0 = fwdMap(Vector(r0[0]*cos(-angles_[ii]),r0[1]*sin(-angles_[ii])),
			sys);
    Vector rr1 = fwdMap(Vector(r1[0]*cos(-angles_[ii]),r1[1]*sin(-angles_[ii])),
			sys);

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

void Cpanda::renderPS(PSColorSpace mode)
{
  BaseEllipse::renderPS(mode);

  Vector r0 = annuli_[0];
  Vector r1 = annuli_[numAnnuli_-1];

  for (int ii=0; ii<numAngles_; ii++) {
    Vector rr0 = fwdMap(Vector(r0[0]*cos(-angles_[ii]),r0[1]*sin(-angles_[ii])),
			Coord::CANVAS);
    Vector rr1 = fwdMap(Vector(r1[0]*cos(-angles_[ii]),r1[1]*sin(-angles_[ii])),
			Coord::CANVAS);

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

void Cpanda::renderWIN32()
{
  BaseEllipse::renderWIN32();

  Vector r0 = annuli_[0];
  Vector r1 = annuli_[numAnnuli_-1];

  for (int ii=0; ii<numAngles_; ii++) {
    Vector rr0 = fwdMap(Vector(r0[0]*cos(-angles_[ii]),
					 r0[1]*sin(-angles_[ii])),
				  Coord::CANVAS);
    Vector rr1 = fwdMap(Vector(r1[0]*cos(-angles_[ii]),
					 r1[1]*sin(-angles_[ii])),
				  Coord::CANVAS);

    win32DrawLine(rr0,rr1);
  }
}
#endif

// Support

void Cpanda::updateHandles()
{
  // handles are in canvas coords
  // we can't garantee that the annuli_ have been sorted yet
  if (handle)
    delete [] handle;
  handle = new Vector[numHandle];

  Vector max;
  for(int ii=0; ii<numAnnuli_; ii++)
    if (max[0]<annuli_[ii][0])
      max = annuli_[ii];
  Vector& r = max;

  handle[0] = fwdMap(Vector(-r[0],-r[1]),Coord::CANVAS);
  handle[1] = fwdMap(Vector( r[0],-r[1]),Coord::CANVAS);
  handle[2] = fwdMap(Vector( r[0], r[1]),Coord::CANVAS);
  handle[3] = fwdMap(Vector(-r[0], r[1]),Coord::CANVAS);

  for (int ii=0; ii<numAnnuli_; ii++)
    handle[ii+4] = fwdMap(Vector(annuli_[ii][0],0),Coord::CANVAS);

  Vector rr = annuli_[numAnnuli_-1];
  for (int ii=0; ii<numAngles_; ii++)
    handle[4+numAnnuli_+ii] = 
      fwdMap(Vector(rr[0]*cos(-angles_[ii]),rr[1]*sin(-angles_[ii])),Coord::CANVAS);
}

void Cpanda::edit(const Vector& v, int h)
{
  Matrix mm = bckMatrix();

  if (h<5) {
    // calc dist between edge of circle and handle
    double d = annuli_[numAnnuli_-1].length() - annuli_[numAnnuli_-1][0];

    for (int i=0; i<numAnnuli_; i++) {
      double r = ((v * mm).length() - d)/annuli_[numAnnuli_-1][0];
      annuli_[i] *= r;
    }
  }
  else if (h<(5+numAnnuli_)) {
    double d = (v * mm).length();
    annuli_[h-5] = Vector(d,d);
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

void Cpanda::editEnd()
{
  sortAnnuli();
  sortAngles();
  startAng_ = angles_[0];
  stopAng_ = angles_[numAngles_-1];

  updateBBox();
  doCallBack(CallBack::EDITENDCB);
}

int Cpanda::addAnnuli(const Vector& v)
{
  Matrix mm = bckMatrix();
  double l = (v * mm).length();

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
  annuli_[numAnnuli_-1] = Vector(l,l);

  numAnnuli_++;
  numHandle++;

  // return handle number
  return 4+numAnnuli_-1;
}

int Cpanda::addAngles(const Vector& v)
{
  Matrix mm = bckMatrix();
  addAngle(-((v * mm).angle()));
  numHandle++;

  // return handle number
  return 4+numAnnuli_+numAngles_-1;
}

void Cpanda::setAnglesAnnuli(double a1, double a2, int an, 
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

void Cpanda::setAnglesAnnuli(const double* a, int an, const Vector* r, int rn)
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

void Cpanda::deleteAnglesAnnuli(int h)
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

int Cpanda::isIn(const Vector& vv, Coord::InternalSystem sys, int nn, int aa)
{
  Vector pp = bckMap(vv,sys);
  return BaseEllipse::isIn(vv,sys,nn) && isInAngle(pp,aa);
}

void Cpanda::analysis(AnalysisTask mm, int which)
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
      addCallBack(CallBack::UPDATECB, analysisPandaCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::DELETECB, analysisPandaCB_[1], 
		  parent->options->cmdName);
    }
    if (analysisPanda_ && !which) {
      deleteCallBack(CallBack::MOVECB, analysisPandaCB_[0]);
      deleteCallBack(CallBack::EDITCB, analysisPandaCB_[0]);
      deleteCallBack(CallBack::EDITENDCB, analysisPandaCB_[0]);
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
      addCallBack(CallBack::UPDATECB, analysisStatsCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::DELETECB, analysisStatsCB_[1], 
		  parent->options->cmdName);
    }
    if (analysisStats_ && !which) {
      deleteCallBack(CallBack::MOVECB, analysisStatsCB_[0]);
      deleteCallBack(CallBack::EDITCB, analysisStatsCB_[0]);
      deleteCallBack(CallBack::EDITENDCB, analysisStatsCB_[0]);
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

void Cpanda::analysisPanda(char* xname, char* yname, char* ename,
			   Coord::CoordSystem sys, int angnum)
{
  double* xx;
  double* yy;
  double* ee;

  BBox* bb = new BBox[numAnnuli_];
  for (int ii=0; ii<numAnnuli_; ii++) {
    Vector ll = -annuli_[ii] * Translate(center);
    Vector ur =  annuli_[ii] * Translate(center);
    bb[ii] = BBox(ll,ur) ;
  }

  int num = parent->markerAnalysisPanda(this, &xx, &yy, &ee, 
					numAnnuli_-1, annuli_, 
					angnum,
					bb, sys);
  analysisXYEResult(xname, yname, ename, xx, yy, ee, num);
}

void Cpanda::analysisStats(Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  ostringstream str;
  BBox* bb = new BBox[numAnnuli_];
  for (int ii=0; ii<numAnnuli_; ii++) {
    Vector ll = -annuli_[ii] * Translate(center);
    Vector ur =  annuli_[ii] * Translate(center);
    bb[ii] = BBox(ll,ur) ;
  }
  parent->markerAnalysisStats(this, str, numAnnuli_-1, numAngles_-1, bb, sys, sky);
  str << ends;
  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

// list
void Cpanda::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
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

void Cpanda::listA(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		  Coord::SkyFormat format, int conj, int strip)
{
  FitsImage* ptr = parent->findFits(sys,center);
  listPre(str, sys, sky, ptr, strip, 0);

  double a1 = angles_[0];
  double a2 = angles_[numAngles_-1];

  str << type_ << '(';
  ptr->listFromRef(str,center,sys,sky,format);
  str << ',';
  parent->listAngleFromRef(str,a1,sys,sky);
  str << ',';
  parent->listAngleFromRef(str,a2,a1,sys,sky);
  str << ',';
  str << numAngles_-1;
  str << ',';
  ptr->listLenFromRef(str,annuli_[0][0],sys,Coord::ARCSEC);
  if (ptr->hasWCSCel(sys))
    str << '"';
  str << ',';
  ptr->listLenFromRef(str,annuli_[numAnnuli_-1][0],sys,Coord::ARCSEC);
  if (ptr->hasWCSCel(sys))
    str << '"';
  str << ',';
  str << numAnnuli_-1;
  str  << ')';

  listPost(str, conj, strip);
}

void Cpanda::listB(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
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
      ptr->listLenFromRef(str,annuli_[ii-1][0],sys,Coord::ARCSEC);
      if (ptr->hasWCSCel(sys))
	str << '"';
      str << ',';
      ptr->listLenFromRef(str,annuli_[ii][0],sys,Coord::ARCSEC);
      if (ptr->hasWCSCel(sys))
	str << '"';
      str << ",1)";

      if (!strip) {
	if (conj)
	  str << " ||";

	str << " # panda=";
	if (ii==1 && jj==1 && !strip) {
	  str << '(';
	  for (int kk=0; kk<numAngles_; kk++) {
	    parent->listAngleFromRef(str,angles_[kk],sys,sky);
	    str << ((kk<numAngles_-1) ? ' ' : ')');
	  }
	  str << '(';
	  for (int kk=0; kk<numAnnuli_; kk++) {
	    ptr->listLenFromRef(str,annuli_[kk][0],sys,Coord::ARCSEC);
	    if (ptr->hasWCSCel(sys))
	      str << '"';
	    str << ((kk<numAnnuli_-1) ? ' ' : ')');
	  }	      
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

void Cpanda::listXML(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky, 
		     Coord::SkyFormat format)
{
  FitsImage* ptr = parent->findFits(sys,center);

  XMLRowInit();
  XMLRow(XMLSHAPE,type_);

  XMLRowCenter(ptr,sys,sky,format);
  XMLRowRadiusX(ptr,sys,annuli_,numAnnuli_);
  XMLRowAng(sys,sky,angles_,numAngles_);

  XMLRowProps(ptr,sys);
  XMLRowEnd(str);
}

void Cpanda::listCiao(ostream& str, Coord::CoordSystem sys, int strip)
{
  FitsImage* ptr = parent->findFits();

  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    for (int ii=0; ii<numAnnuli_-1; ii++) {
      for (int jj=0; jj<numAngles_-1; jj++) {
	double a1 = angles_[jj];
	double a2 = angles_[jj+1];

	listCiaoPre(str);
	str << "pie(";
	ptr->listFromRef(str,center,Coord::PHYSICAL);
	str << ',';
	ptr->listLenFromRef(str,annuli_[ii][0],Coord::PHYSICAL);
	str << ',';
	ptr->listLenFromRef(str,annuli_[ii+1][0],Coord::PHYSICAL);
	str << ',';
	parent->listAngleFromRef(str,a1,Coord::PHYSICAL);
	str << ',';
	parent->listAngleFromRef(str,a2,a1,Coord::PHYSICAL);
	str << ')';
	listCiaoPost(str, strip);
      }
    }
    break;
  default:
    for (int ii=0; ii<numAnnuli_-1; ii++) {
      for (int jj=0; jj<numAngles_-1; jj++) {
	double a1 = angles_[jj];
	double a2 = angles_[jj+1];

	listCiaoPre(str);
	str << "pie(";
	ptr->listFromRef(str,center,sys,Coord::FK5,Coord::SEXAGESIMAL);
	str << ',';
	ptr->listLenFromRef(str,annuli_[ii][0],sys,Coord::ARCMIN);
	str << '\'';
	str << ',';
	ptr->listLenFromRef(str,annuli_[ii+1][0],sys,Coord::ARCMIN);
	str << '\'';
	str << ',';
	parent->listAngleFromRef(str,a1,Coord::PHYSICAL);
	str << ',';
	parent->listAngleFromRef(str,a2,a1,Coord::PHYSICAL);
	str << ')';
	listCiaoPost(str, strip);
      }
    }
  }
}

// special composite funtionallity

void Cpanda::setComposite(const Matrix& mx, double aa)
{
  center *= mx;
  updateBBox();
}
