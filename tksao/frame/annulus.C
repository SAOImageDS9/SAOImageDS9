// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "annulus.h"
#include "fitsimage.h"

Annulus::Annulus(Base* p, const Vector& ctr, double r1, double r2, int rn)
  : BaseEllipse(p, ctr, 0)
{
  numAnnuli_ = rn+1;
  annuli_ = new Vector[numAnnuli_];

  for (int i=0; i<numAnnuli_; i++) {
    double r = i*(r2-r1)/rn+r1;
    annuli_[i] = Vector(r,r);
  }

  strcpy(type_, "annulus");
  numHandle = 4 + numAnnuli_;

  updateBBox();
}

Annulus::Annulus(Base* p, const Vector& ctr, 
		 double r1, double r2, int rn,
		 const char* clr, int* dsh, 
		 int wth, const char* fnt, const char* txt, 
		 unsigned short prop, const char* cmt, 
		 const List<Tag>& tg, const List<CallBack>& cb)
  : BaseEllipse(p, ctr, 0, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  numAnnuli_ = rn+1;
  annuli_ = new Vector[numAnnuli_];

  for (int i=0; i<numAnnuli_; i++) {
    double r = i*(r2-r1)/rn+r1;
    annuli_[i] = Vector(r,r);
  }

  strcpy(type_, "annulus");
  numHandle = 4 + numAnnuli_;

  updateBBox();
}

Annulus::Annulus(Base* p, const Vector& ctr, 
		 int rn, double* r,
		 const char* clr, int* dsh, 
		 int wth, const char* fnt, const char* txt, 
		 unsigned short prop, const char* cmt, 
		 const List<Tag>& tg, const List<CallBack>& cb)
  : BaseEllipse(p, ctr, 0, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  numAnnuli_ = rn;
  annuli_ = new Vector[numAnnuli_];

  for (int i=0; i<numAnnuli_; i++)
    annuli_[i] = Vector(r[i],r[i]);
  sortAnnuli();

  strcpy(type_, "annulus");
  numHandle = 4 + numAnnuli_;

  updateBBox();
}

Annulus::Annulus(const Annulus& a) : BaseEllipse(a) {}

void Annulus::edit(const Vector& v, int h)
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
  else {
    double d = (v * mm).length();
    annuli_[h-5] = Vector(d,d);
  }

  updateBBox();
  doCallBack(CallBack::EDITCB);
}

void Annulus::editEnd()
{
  sortAnnuli();

  updateBBox();
  doCallBack(CallBack::EDITENDCB);
}

int Annulus::addAnnuli(const Vector& v)
{
  Matrix mm = bckMatrix();
  double l = (v * mm).length();

  return insertAnnuli(Vector(l,l));
}

void Annulus::analysis(AnalysisTask mm, int which)
{
  switch (mm) {
  case RADIAL:
    if (!analysisRadial_ && which) {
      addCallBack(CallBack::MOVECB, analysisRadialCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::EDITCB, analysisRadialCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::EDITENDCB, analysisRadialCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::UPDATECB, analysisRadialCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::DELETECB, analysisRadialCB_[1], 
		  parent->options->cmdName);
    }
    if (analysisRadial_ && !which) {
      deleteCallBack(CallBack::MOVECB, analysisRadialCB_[0]);
      deleteCallBack(CallBack::EDITCB, analysisRadialCB_[0]);
      deleteCallBack(CallBack::EDITENDCB, analysisRadialCB_[0]);
      deleteCallBack(CallBack::UPDATECB, analysisRadialCB_[0]);
      deleteCallBack(CallBack::DELETECB, analysisRadialCB_[1]);
    }

    analysisRadial_ = which;
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

void Annulus::analysisRadial(char* xname, char* yname, char* ename,
			     Coord::CoordSystem sys)
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

  int num = parent->markerAnalysisRadial(this, &xx, &yy, &ee, 
					 numAnnuli_-1, annuli_, 
					 bb, sys);
  analysisXYEResult(xname, yname, ename, xx, yy, ee, num);
}

void Annulus::analysisStats(Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  ostringstream str;
  BBox* bb = new BBox[numAnnuli_];
  for (int ii=0; ii<numAnnuli_; ii++) {
    Vector ll = -annuli_[ii] * Translate(center);
    Vector ur =  annuli_[ii] * Translate(center);
    bb[ii] = BBox(ll,ur) ;
  }
  parent->markerAnalysisStats(this, str, numAnnuli_-1, bb, sys, sky);
  str << ends;
  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

// list

void Annulus::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		   Coord::SkyFormat format, int conj, int strip)
{
  FitsImage* ptr = parent->findFits(sys,center);
  listPre(str, sys, sky, ptr, strip, 0);

  str << type_ << '(';
  ptr->listFromRef(str,center,sys,sky,format);
  for (int ii=0; ii<numAnnuli_; ii++) {
    str << ',';
    ptr->listLenFromRef(str,annuli_[ii][0],sys,Coord::ARCSEC);
    if (ptr->hasWCSCel(sys))
      str << '"';
  }
  str << ')';

  listPost(str, conj, strip);
}

void Annulus::listXML(ostream& str, Coord::CoordSystem sys, 
		      Coord::SkyFrame sky, Coord::SkyFormat format)
{
  FitsImage* ptr = parent->findFits(sys,center);

  XMLRowInit();
  XMLRow(XMLSHAPE,type_);

  XMLRowCenter(ptr,sys,sky,format);
  XMLRowRadiusX(ptr,sys,annuli_,numAnnuli_);

  XMLRowProps(ptr,sys);
  XMLRowEnd(str);
}

void Annulus::listCiao(ostream& str, Coord::CoordSystem sys, int strip)
{
  FitsImage* ptr = parent->findFits();

  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    for (int ii=0; ii<numAnnuli_-1; ii++) {
      listCiaoPre(str);
      str << type_ << '(';
      ptr->listFromRef(str,center,Coord::PHYSICAL);
      str << ',';
      ptr->listLenFromRef(str,annuli_[ii][0],Coord::PHYSICAL);
      str << ',';
      ptr->listLenFromRef(str,annuli_[ii+1][0],Coord::PHYSICAL);
      str << ')';
      listCiaoPost(str, strip);
    }
    break;
  default:
    for (int ii=0; ii<numAnnuli_-1; ii++) {
      listCiaoPre(str);
      str << type_ << '(';
      ptr->listFromRef(str,center,sys,Coord::FK5,Coord::SEXAGESIMAL);
      str << ',';
      ptr->listLenFromRef(str,annuli_[ii][0],sys,Coord::ARCMIN);
      str << '\'';
      str << ',';
      ptr->listLenFromRef(str,annuli_[ii+1][0],sys,Coord::ARCMIN);
      str << '\'';
      str << ')';
      listCiaoPost(str, strip);
    }
  }
}

void Annulus::listPros(ostream& str, Coord::CoordSystem sys,
		       Coord::SkyFrame sky, Coord::SkyFormat format,
		       int strip)
{
  FitsImage* ptr = parent->findFits();

  coord.listProsCoordSystem(str,sys,sky);
  str << "; " << type_ << ' ';
  switch (sys) {
  case Coord::IMAGE:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    sys = Coord::IMAGE;
  case Coord::PHYSICAL:
    ptr->listFromRef(str,center,sys);
    for (int ii=0; ii<numAnnuli_; ii++) {
      str << ' ';
      ptr->listLenFromRef(str,annuli_[ii][0],Coord::IMAGE);
    }
    break;
  default:
    if (format == Coord::DEGREES)
      str << setunit('d');
    ptr->listFromRef(str,center,sys,sky,format);
    for (int ii=0; ii<numAnnuli_; ii++) {
      str << ' ';
      ptr->listLenFromRef(str,annuli_[ii][0],sys,Coord::ARCSEC);
      str << '"';
    }
    break;
  }

  listProsPost(str, strip);
}

void Annulus::listSAOimage(ostream& str, int strip)
{
  FitsImage* ptr = parent->findFits();
  listSAOimagePre(str);

  str << type_ << '(';
  ptr->listFromRef(str,center,Coord::IMAGE);
  for (int ii=0; ii<numAnnuli_; ii++) {
    str << ',';
    ptr->listLenFromRef(str,annuli_[ii][0],Coord::IMAGE);
  }
  str << ')';

  listSAOimagePost(str, strip);
}

// special composite funtionallity

void Annulus::setComposite(const Matrix& mx, double aa)
{
  center *= mx;
  updateBBox();
}
