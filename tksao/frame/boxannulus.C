// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "boxannulus.h"
#include "fitsimage.h"

BoxAnnulus::BoxAnnulus(Base* p, const Vector& ctr,
		       const Vector& s, 
		       double ang,
		       const char* clr, int* dsh, 
		       int wth, const char* fnt, const char* txt, 
		       unsigned short prop, const char* cmt,
		       const List<Tag>& tg, const List<CallBack>& cb)
  : BaseBox(p, ctr, ang, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  numAnnuli_ = 1;
  annuli_ = new Vector[1];
  annuli_[0] = s;

  strcpy(type_,"boxannulus");
  numHandle = 4;

  updateBBox();
}

BoxAnnulus::BoxAnnulus(Base* p, const Vector& ctr,
		       const Vector& inner, const Vector& outer, int num,
		       double ang)
  : BaseBox(p, ctr, ang)
{
  numAnnuli_ = num+1;
  annuli_ = new Vector[numAnnuli_];

  for (int i=0; i<numAnnuli_; i++)
    annuli_[i] = ((outer-inner)/num)*i+inner;

  strcpy(type_,"boxannulus");
  numHandle = 4 + numAnnuli_;

  updateBBox();
}

BoxAnnulus::BoxAnnulus(Base* p, const Vector& ctr,
		       const Vector& inner, const Vector& outer, int num,
		       double ang,
		       const char* clr, int* dsh, 
		       int wth, const char* fnt, const char* txt, 
		       unsigned short prop, const char* cmt,
		       const List<Tag>& tg, const List<CallBack>& cb)
  : BaseBox(p, ctr, ang, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  numAnnuli_ = num+1;
  annuli_ = new Vector[numAnnuli_];

  for (int i=0; i<numAnnuli_; i++)
    annuli_[i] = ((outer-inner)/num)*i+inner;

  strcpy(type_,"boxannulus");
  numHandle = 4 + numAnnuli_;

  updateBBox();
}

BoxAnnulus::BoxAnnulus(Base* p, const Vector& ctr, 
		       int an, Vector* s,
		       double ang, 
		       const char* clr, int* dsh, 
		       int wth, const char* fnt, const char* txt,
		       unsigned short prop, const char* cmt,
		       const List<Tag>& tg, const List<CallBack>& cb)
  : BaseBox(p, ctr, ang, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  numAnnuli_ = an;
  annuli_ = new Vector[numAnnuli_];

  for (int i=0; i<numAnnuli_; i++)
    annuli_[i] = s[i];
  sortAnnuli();

  strcpy(type_, "boxannulus");
  numHandle = 4 + numAnnuli_;

  updateBBox();
  doCallBack(CallBack::EDITCB);
}

BoxAnnulus::BoxAnnulus(const BoxAnnulus& a) : BaseBox(a) {}

void BoxAnnulus::editBegin(int h)
{
  if (h<5) {
    switch (h) {
    case 1:
      return;
    case 2:
      annuli_[numAnnuli_-1] = Vector(-annuli_[numAnnuli_-1][0],annuli_[numAnnuli_-1][1]);
      return;
    case 3:
      annuli_[numAnnuli_-1] = -annuli_[numAnnuli_-1];
      return;
    case 4:
      annuli_[numAnnuli_-1] = Vector(annuli_[numAnnuli_-1][0],-annuli_[numAnnuli_-1][1]);
      return;
    }
  }

  doCallBack(CallBack::EDITBEGINCB);
}

void BoxAnnulus::edit(const Vector& v, int h)
{
  Matrix mm = bckMatrix();
  Matrix nn = mm.invert();

  // This sizes about the opposite node
  if (h<5) {
    Vector o = annuli_[numAnnuli_-1];
    Vector n = (annuli_[numAnnuli_-1]/2) - (v*mm);

    // don't go thru opposite node
    if (n[0]!=0 && n[1]!=0) {
      Vector ov = annuli_[numAnnuli_-1]/2 * nn;
      annuli_[numAnnuli_-1] = n;
      Vector nv = annuli_[numAnnuli_-1]/2 * nn;
      center -= nv-ov;

      for (int i=0; i<numAnnuli_-1; i++) {
	annuli_[i][0] *= fabs(n[0]/o[0]);
	annuli_[i][1] *= fabs(n[1]/o[1]);
      }
    }
  }
  else {
    // we must have some length
    double l = (v * mm * 2).length();
    annuli_[h-5] = annuli_[numAnnuli_-1] * l/annuli_[numAnnuli_-1][0];
  }

  updateBBox();
  doCallBack(CallBack::EDITCB);
  doCallBack(CallBack::MOVECB);
}

void BoxAnnulus::editEnd()
{
  for (int i=1; i<numAnnuli_; i++)
    annuli_[i] = annuli_[i].abs();
  sortAnnuli();

  updateBBox();
  doCallBack(CallBack::EDITENDCB);
}

int BoxAnnulus::addAnnuli(const Vector& v)
{
  Matrix mm = bckMatrix();
  double l = (v * mm * 2).length();
  Vector rr = annuli_[numAnnuli_-1] * l/annuli_[numAnnuli_-1][0];

  return insertAnnuli(rr);
}

void BoxAnnulus::analysis(AnalysisTask mm, int which)
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
      addCallBack(CallBack::ROTATECB, analysisRadialCB_[0], 
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
      deleteCallBack(CallBack::ROTATECB, analysisRadialCB_[0]);
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

void BoxAnnulus::analysisRadial(char* xname, char* yname, char* ename,
				Coord::CoordSystem sys)
{
  double* xx;
  double* yy;
  double* ee;

  BBox* bb = new BBox[numAnnuli_];
  Matrix mm = Rotate(angle) * Translate(center);

  for (int ii=0; ii<numAnnuli_; ii++) {
    // during resize, annuli_ can be negative
    Vector vv = annuli_[ii].abs();
    bb[ii] = BBox(-vv * mm);
    bb[ii].bound( vv * mm);
    bb[ii].bound(Vector( vv[0],-vv[1]) * mm);
    bb[ii].bound(Vector(-vv[0], vv[1]) * mm);
  }

  int num = parent->markerAnalysisRadial(this, &xx, &yy, &ee,
					 numAnnuli_-1, annuli_, 
					 bb, sys);
  analysisXYEResult(xname, yname, ename, xx, yy, ee, num);
}

void BoxAnnulus::analysisStats(Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  ostringstream str;
  BBox* bb = new BBox[numAnnuli_];
  Matrix mm = Rotate(angle) * Translate(center);

  for (int ii=0; ii<numAnnuli_; ii++) {
    // during resize, annuli_ can be negative
    Vector vv = annuli_[ii].abs();
    bb[ii] = BBox(-vv * mm);
    bb[ii].bound( vv * mm);
    bb[ii].bound(Vector( vv[0],-vv[1]) * mm);
    bb[ii].bound(Vector(-vv[0], vv[1]) * mm);
  }

  parent->markerAnalysisStats(this, str, numAnnuli_-1, bb, sys, sky);
  str << ends;
  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

// list

void BoxAnnulus::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		   Coord::SkyFormat format, int conj, int strip)
{
  FitsImage* ptr = parent->findFits(sys,center);
  listPre(str, sys, sky, ptr, strip, 0);

  str << "box(";
  ptr->listFromRef(str,center,sys,sky,format);
  for (int ii=0; ii<numAnnuli_; ii++) {
    str << ',';
    if (ptr->hasWCSCel(sys))
      str << setunit('"');
    ptr->listLenFromRef(str,annuli_[ii],sys,Coord::ARCSEC);
  }
  str << ',';
  parent->listAngleFromRef(str,angle,sys,sky);
  str << ')';

  listPost(str, conj, strip);
}

void BoxAnnulus::listXML(ostream& str, Coord::CoordSystem sys,
			 Coord::SkyFrame sky, Coord::SkyFormat format)
{
  FitsImage* ptr = parent->findFits(sys,center);

  XMLRowInit();
  XMLRow(XMLSHAPE,type_);

  XMLRowCenter(ptr,sys,sky,format);
  XMLRowRadius(ptr,sys,annuli_,numAnnuli_);
  XMLRowAng(sys,sky);

  XMLRowProps(ptr,sys);
  XMLRowEnd(str);
}

void BoxAnnulus::listPros(ostream& str, Coord::CoordSystem sys,
			  Coord::SkyFrame sky, Coord::SkyFormat format,
			  int strip)
{
  FitsImage* ptr = parent->findFits();

  switch (sys) {
  case Coord::IMAGE:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    sys = Coord::IMAGE;
  case Coord::PHYSICAL:
    for (int ii=0; ii<numAnnuli_; ii++) {
      coord.listProsCoordSystem(str,sys,sky);
      str << "; box ";
      ptr->listFromRef(str,center,sys);
      str << ' ';
      ptr->listLenFromRef(str,annuli_[ii],Coord::IMAGE);
      str << ' ';
      parent->listAngleFromRef(str,angle,Coord::IMAGE);

      if (ii!=0) {
	str << " & !box ";
	ptr->listFromRef(str,center,sys);
	str << ' ';
	ptr->listLenFromRef(str,annuli_[ii-1],Coord::IMAGE);
	str << ' ';
	parent->listAngleFromRef(str,angle,Coord::IMAGE);
      }
      listProsPost(str, strip);
    }
    break;
  default:
    for (int ii=0; ii<numAnnuli_; ii++) {
      coord.listProsCoordSystem(str,sys,sky);
      str << "; box ";
      if (format == Coord::DEGREES)
	str << setunit('d');
      ptr->listFromRef(str,center,sys,sky,format);
      str << ' ';
      str << setunit('"');
      ptr->listLenFromRef(str,annuli_[ii],sys,Coord::ARCSEC);
      str << ' ';
      parent->listAngleFromRef(str,angle,Coord::IMAGE);

      if (ii!=0) {
	str << " & !box ";
	if (format == Coord::DEGREES)
	  str << setunit('d');
	ptr->listFromRef(str,center,sys,sky,format);
	str << ' ';
	str << setunit('"');
	ptr->listLenFromRef(str,annuli_[ii-1],sys,Coord::ARCSEC);
	str << ' ';
	parent->listAngleFromRef(str,angle,Coord::IMAGE);
      }
      listProsPost(str, strip);
    }
    break;
  }
}

void BoxAnnulus::listSAOimage(ostream& str, int strip)
{
  FitsImage* ptr = parent->findFits();
  listSAOimagePre(str);

  for (int ii=0; ii<numAnnuli_; ii++) {
    str << "box(";
    ptr->listFromRef(str,center,Coord::IMAGE);
    str << ',';
    ptr->listLenFromRef(str,annuli_[ii],Coord::IMAGE);
    str << ',';
    parent->listAngleFromRef(str,angle,Coord::IMAGE);
    str << ')';

    if (ii!=0) {
      str << " & !box(";
      ptr->listFromRef(str,center,Coord::IMAGE);
      str << ',';
      ptr->listLenFromRef(str,annuli_[ii-1],Coord::IMAGE);
      str << ',';
      parent->listAngleFromRef(str,angle,Coord::IMAGE);
      str << ')';
    }
    
    listSAOimagePost(str, strip);
  }
}


