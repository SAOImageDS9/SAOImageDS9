// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tk.h>

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

  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    listNonCel(ptr, str, sys);
    break;
  default:
    if (ptr->hasWCSCel(sys)) {
      listWCS(ptr,center,sys,sky,format);
      double aa = parent->mapAngleFromRef(angle,sys,sky);
      str << "box(" << ra << ',' << dec
	  << setprecision(parent->precArcsec_) << fixed;
      for (int ii=0; ii<numAnnuli_; ii++) {
	Vector rr = ptr->mapLenFromRef(annuli_[ii],sys,Coord::ARCSEC);
	str << ',' << setunit('"') << rr;
      }
      str.unsetf(ios_base::floatfield);
      str << setprecision(parent->precLinear_) << ',' << radToDeg(aa) << ')';
    }
    else
      listNonCel(ptr, str, sys);
  }

  listPost(str, conj, strip);
}

void BoxAnnulus::listNonCel(FitsImage* ptr, ostream& str,
			    Coord::CoordSystem sys)
{
  Vector vv = ptr->mapFromRef(center,sys);
  double aa = parent->mapAngleFromRef(angle,sys);
  str << "box(" << setprecision(parent->precLinear_) << vv;
  for (int ii=0; ii<numAnnuli_; ii++) {
    Vector rr = ptr->mapLenFromRef(annuli_[ii],sys);
    str << ',' << rr;
  }
  str << ',' << radToDeg(aa) << ')';
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
    {
      Vector vv = ptr->mapFromRef(center,sys);
      for (int ii=0; ii<numAnnuli_; ii++) {
	coord.listProsCoordSystem(str,sys,sky);
	str << "; ";

	Vector rr = ptr->mapLenFromRef(annuli_[ii],Coord::IMAGE);
        str << "box " << setprecision(parent->precLinear_) << vv << ' '
	    << rr << ' '
            << radToDeg(angle);

	if (ii!=0) {
	  Vector r1 = ptr->mapLenFromRef(annuli_[ii-1],Coord::IMAGE);
	  str << " & !box " << vv << ' ' << r1 << ' ' << radToDeg(angle);
	}

	listProsPost(str, strip);
      }
    }
    break;
  default:
    if (ptr->hasWCSCel(sys)) {
      listWCSPros(ptr,center,sys,sky,format);

      for (int ii=0; ii<numAnnuli_; ii++) {
	coord.listProsCoordSystem(str,sys,sky);
	str << "; ";

	Vector rr = ptr->mapLenFromRef(annuli_[ii],sys,Coord::ARCSEC);
	str << "box ";
	switch (format) {
	case Coord::DEGREES:
	  str << ra << 'd' << ' ' << dec << 'd' << ' ';
	    break;
	case Coord::SEXAGESIMAL:
	  str << ra << ' ' << dec << ' ';
	    break;
	}
	str << setprecision(parent->precArcsec_) << setunit('"') << fixed
	    << rr << ' ';
	str.unsetf(ios_base::floatfield);
	str << setprecision(parent->precLinear_) << radToDeg(angle);

	if (ii!=0) {
	  Vector r1 = ptr->mapLenFromRef(annuli_[ii-1],sys,Coord::ARCSEC);
	  str << " & !box ";
	  switch (format) {
	  case Coord::DEGREES:
	    str << ra << 'd' << ' ' << dec << 'd' << ' ';
	      break;
	  case Coord::SEXAGESIMAL:
	    str << ra << ' ' << dec << ' ';
	      break;
	  }
	  str << setprecision(parent->precArcsec_) << setunit('"') << fixed
	      << r1 << ' ';
	  str.unsetf(ios_base::floatfield);
	  str << setprecision(parent->precLinear_) << radToDeg(angle);
	}
	listProsPost(str, strip);
      }
    }
  }
}

void BoxAnnulus::listSAOimage(ostream& str, int strip)
{
  FitsImage* ptr = parent->findFits();
  listSAOimagePre(str);

  for (int ii=0; ii<numAnnuli_; ii++) {
    Vector vv = ptr->mapFromRef(center,Coord::IMAGE);
    str << "box(" << setprecision(parent->precLinear_) << vv << ','
        << annuli_[ii] << ',' << radToDeg(angle) << ')';

    if (ii!=0)
      str << " & !box(" << setprecision(parent->precLinear_) << vv << ','
          << annuli_[ii-1] << ',' << radToDeg(angle) << ')';

    listSAOimagePost(str, strip);
  }
}


