// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "contour.h"
#include "base.h"
#include "context.h"

#ifdef __WIN32
#include <win32lib.h>
#endif

// ContourLevel
ContourLevel::ContourLevel(Base* pp, double lev,
			   const char* cn,
			   int ww, int dd, int* dl) 
{
  parent_ = pp;
  gc_ = parent_->contourGC_;

  level_ = lev;
  index_ = -1;
  colorName_ = dupstr(cn);
  color_ = parent_->getColor(colorName_);
  lineWidth_ = ww;
  dash_ = dd;
  dlist_[0] = dl[0];
  dlist_[1] = dl[1];

  previous_ = NULL;
  next_ = NULL;
}

// used in threads, so need to resolve color/colorName before
ContourLevel::ContourLevel(Base* pp, double lev,
			   const char* cn, unsigned long cc,
			   int ww, int dd, int* dl) 
{
  parent_ = pp;
  gc_ = parent_->contourGC_;

  level_ = lev;
  index_ = -1;
  colorName_ = dupstr(cn);
  //  color_ = parent_->getColor(colorName_);
  color_ = cc;
  lineWidth_ = ww;
  dash_ = dd;
  dlist_[0] = dl[0];
  dlist_[1] = dl[1];

  previous_ = NULL;
  next_ = NULL;
}

ContourLevel::~ContourLevel()
{
  if (colorName_)
    delete [] colorName_;
}

void ContourLevel::list(ostream& str, FitsImage* fits, 
			Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  if (lcontour_.head()) {
    str << "level=" << level_ << ' ';
    if (strcmp("green", colorName_) || dash_ != 0 ||
	dlist_[0] != 8 || dlist_[1] != 3 || lineWidth_ != 1) {
      if (strcmp("green", colorName_))
	str << "color=" << colorName_ << ' ';

      if (lineWidth_ != 1)
	str << "width=" << lineWidth_ << ' ';

      if (dash_ != 0)
	str << "dash=" << dash_ << ' ';

      if (dlist_[0] != 8 || dlist_[1] != 3)
	str << "dashlist=" << dlist_[0] << ' ' << dlist_[1] << ' ';
    }
    str << endl;

    do
      lcontour_.current()->list(str, fits, sys, sky);
    while (lcontour_.next());
  }
}

void ContourLevel::render(Pixmap pmap, Coord::InternalSystem sys, 
			  const BBox& bbox)
{
  if (lcontour_.head()) {
    do
      lcontour_.current()->render(pmap, sys, bbox);
    while (lcontour_.next());
  }
}

void ContourLevel::ps(PSColorSpace mode)
{
  if (lcontour_.head()) {
    do
      lcontour_.current()->ps(mode);
    while (lcontour_.next());
  }
}

void ContourLevel::updateCoords(const Matrix& mx)
{
  if (lcontour_.head()) {
    do
      lcontour_.current()->updateCoords(mx);
    while (lcontour_.next());
  }
}

void ContourLevel::setColor(const char* clr)
{
  if (colorName_)
    delete [] colorName_;

  colorName_ = dupstr(clr);
  color_ = parent_->getColor(colorName_);
}

#ifdef __WIN32
void ContourLevel::win32()
{
  if (lcontour_.head()) {
    do
      lcontour_.current()->win32();
    while (lcontour_.next());
  }
}
#endif

// AuxContourSet

AuxContourSet::AuxContourSet(int id, const char* name)
{
  id_ = id;
  name_ = dupstr(name ? name : "");

  previous_ = NULL;
  next_ = NULL;
}

AuxContourSet::~AuxContourSet()
{
  if (name_)
    delete [] name_;
  clearLoaded();
  // levels_ deletes its levels
}

void AuxContourSet::clearLoaded()
{
  for (size_t ii=0; ii<loaded_.size(); ii++)
    if (loaded_[ii].colorName)
      delete [] loaded_[ii].colorName;
  loaded_.clear();
}

// one row per distinct level value, in file order, with the style of the
// first level that has it
void AuxContourSet::captureLoaded()
{
  clearLoaded();
  if (levels_.head())
    do {
      ContourLevel* cl = levels_.current();
      int seen =0;
      for (size_t ii=0; ii<loaded_.size() && !seen; ii++)
	if (loaded_[ii].level == cl->level())
	  seen =1;
      if (seen)
	continue;

      LoadedStyle ls;
      ls.level = cl->level();
      ls.colorName = dupstr(cl->colorName());
      ls.lineWidth = cl->lineWidth();
      ls.dash = cl->dash();
      ls.dlist[0] = cl->dlist()[0];
      ls.dlist[1] = cl->dlist()[1];
      loaded_.push_back(ls);
    } while (levels_.next());
}

ContourLevel* AuxContourSet::rowFirst(int rr)
{
  if (levels_.head())
    do
      if (levels_.current()->level() == loaded_[rr].level)
	return levels_.current();
    while (levels_.next());
  return NULL;
}

// level color width dash length gap, as a Tcl list
void AuxContourSet::listRow(ostream& str, int rr)
{
  ContourLevel* cl = rowFirst(rr);
  if (!cl)
    return;
  // the level as the file gave it, not rounded to 6 digits
  std::streamsize prec = str.precision(15);
  str << '{' << loaded_[rr].level;
  str.precision(prec);
  str << ' ' << cl->colorName() << ' '
      << cl->lineWidth() << ' ' << cl->dash() << ' '
      << cl->dlist()[0] << ' ' << cl->dlist()[1] << '}';
}

void AuxContourSet::setRowStyle(int rr, const char* color, int width,
				int dash, int* dlist)
{
  double lev = loaded_[rr].level;
  if (levels_.head())
    do {
      ContourLevel* cl = levels_.current();
      if (cl->level() != lev)
	continue;
      cl->setColor(color);
      cl->setLineWidth(width);
      cl->setDash(dash);
      if (dlist)
	cl->setDashList(dlist[0], dlist[1]);
    } while (levels_.next());
}

void AuxContourSet::resetRow(int rr)
{
  LoadedStyle& ls = loaded_[rr];
  setRowStyle(rr, ls.colorName, ls.lineWidth, ls.dash, ls.dlist);
}

void AuxContourSet::resetAll()
{
  for (size_t ii=0; ii<loaded_.size(); ii++)
    resetRow(ii);
}

void AuxContourSet::setName(const char* name)
{
  if (name_)
    delete [] name_;
  name_ = dupstr(name ? name : "");
}

void AuxContourSet::setStyle(const char* color, int width, int dash,
			     int* dlist)
{
  if (levels_.head())
    do {
      ContourLevel* cl = levels_.current();
      cl->setColor(color);
      cl->setLineWidth(width);
      cl->setDash(dash);
      if (dlist)
	cl->setDashList(dlist[0], dlist[1]);
    } while (levels_.next());
}

// back to front, like the levels of a whole list used to be
void AuxContourSet::render(Pixmap pmap, Coord::InternalSystem sys,
			   const BBox& bbox)
{
  if (levels_.tail())
    do
      levels_.current()->render(pmap, sys, bbox);
    while (levels_.previous());
}

void AuxContourSet::ps(PSColorSpace mode)
{
  if (levels_.tail())
    do
      levels_.current()->ps(mode);
    while (levels_.previous());
}

void AuxContourSet::updateCoords(const Matrix& mx)
{
  if (levels_.head())
    do
      levels_.current()->updateCoords(mx);
    while (levels_.next());
}

#ifdef __WIN32
void AuxContourSet::win32()
{
  if (levels_.tail())
    do
      levels_.current()->win32();
    while (levels_.previous());
}
#endif

// Contour

Contour::Contour(ContourLevel* cc)
{
  parent_ = cc;
  base_ = cc->parent_;

  previous_ = NULL;
  next_ = NULL;
}

Contour::~Contour()
{
}

void Contour::list(ostream& str, FitsImage* fits, 
		   Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  if (lvertex_.head())
    str << '(' << endl;
    do {
      str << ' ';
      fits->listFromRef(str, lvertex_.current()->vector,
			sys, sky, Coord::DEGREES);
      str << endl;
    }
    while (lvertex_.next());
    str << ')' << endl;
}

void Contour::render(Pixmap pmap, Coord::InternalSystem sys, const BBox& bbox)
{
  // bbox is in sys coords

  if (lvertex_.head()) {
    XSetForeground(base_->display, parent_->gc_, parent_->color_);
    int ww = parent_->lineWidth_>=1 ? parent_->lineWidth_ : 1;

    char dl[2];
    dl[0] = parent_->dlist_[0];
    dl[1] = parent_->dlist_[1];
    int period = dl[0]+dl[1];
    int dash = parent_->dash_ && period>0;

    if (!dash)
      XSetLineAttributes(base_->display, parent_->gc_,
			 ww, LineSolid, CapButt, JoinMiter);
    else
      XSetLineAttributes(base_->display, parent_->gc_,
			 ww, LineOnOffDash, CapButt, JoinMiter);

    // draw the contour as one polyline, so the dash pattern flows along
    // it as it does for regions, rather than restarting on every (often
    // sub-dash length) segment. off screen vertices are kept, X clips
    // them, so the dash phase matches however the contour is panned.
    // only break the line where X's 16 bit coords would overflow; then
    // draw just the visible segments, with an estimated dash offset.
    std::vector<XPoint> pts;
    double travel = 0;
    double start = 0;

    Vector v1 = base_->mapFromRef(lvertex_.current()->vector,sys);
    while (lvertex_.next()) {
      Vector v2 = base_->mapFromRef(lvertex_.current()->vector,sys);
      double len = (v2-v1).length();

      if (isXCoord(v1) && isXCoord(v2)) {
	if (pts.empty()) {
	  start = travel;
	  XPoint pp = {(short)floor(v1[0]), (short)floor(v1[1])};
	  pts.push_back(pp);
	}
	XPoint pp = {(short)floor(v2[0]), (short)floor(v2[1])};
	pts.push_back(pp);
	// stay well under the core protocol request size
	if (pts.size()>=16384) {
	  renderLines(pmap, pts, dash ? (int)fmod(start,period) : -1, dl);
	  pts.clear();
	}
      }
      else {
	renderLines(pmap, pts, dash ? (int)fmod(start,period) : -1, dl);
	pts.clear();

	if (bbox.isIn(v1) || bbox.isIn(v2)) {
	  if (dash)
	    XSetDashes(base_->display, parent_->gc_,
		       (int)fmod(travel,period), dl, 2);
	  XDrawLine(base_->display, pmap, parent_->gc_, 
		    (int)v1[0], (int)v1[1], (int)v2[0], (int)v2[1]);
	}
      }

      travel += len;
      v1 = v2;
    }
    renderLines(pmap, pts, dash ? (int)fmod(start,period) : -1, dl);
  }
}

int Contour::isXCoord(const Vector& vv)
{
  return fabs(vv[0])<16384 && fabs(vv[1])<16384;
}

void Contour::renderLines(Pixmap pmap, std::vector<XPoint>& pts,
			  int offset, char* dl)
{
  if (pts.size()<2)
    return;

  if (offset>=0)
    XSetDashes(base_->display, parent_->gc_, offset, dl, 2);
  XDrawLines(base_->display, pmap, parent_->gc_, &pts[0], pts.size(),
	     CoordModeOrigin);
}

void Contour::ps(PSColorSpace mode)
{
  if (!lvertex_.head())
    return;

  base_->psColor(mode, base_->getXColor(parent_->colorName_));

  ostringstream str;

  if (!parent_->dash_)
    str << parent_->lineWidth_ << " setlinewidth" << endl << "[] 0 setdash";
  else {
    str << parent_->lineWidth_ << " setlinewidth" << endl
	<< '[' << parent_->dlist_[0] << ' ' << parent_->dlist_[1] 
	<< "] 0 setdash";
  }
  str << endl;

  Vector v1 = base_->mapFromRef(lvertex_.current()->vector,Coord::CANVAS);
  str << "newpath " << endl << parent_->parent_->TkCanvasPs(v1) << " moveto" << endl;
  while (lvertex_.next()) {
    Vector vv = base_->mapFromRef(lvertex_.current()->vector,Coord::CANVAS);
    str << parent_->parent_->TkCanvasPs(vv) << " lineto" << endl;
  }
  str << "stroke" << endl << ends;
  Tcl_AppendResult(base_->interp, str.str().c_str(), NULL);
}

void Contour::updateCoords(const Matrix& mx)
{
  if (lvertex_.head()) {
    do {
      Vector& vv = lvertex_.current()->vector;
      vv *= mx;
    }
    while (lvertex_.next());
  }
}

#ifdef __WIN32
void Contour::win32()
{
  if (lvertex_.head()) {
    win32Color(base_->getXColor(parent_->colorName_));
    win32Width(parent_->lineWidth_);
    if (parent_->dash_) {
      float dl[2];
      dl[0] = parent_->dlist_[0];
      dl[1] = parent_->dlist_[1];
      win32Dash(dl,2);
    }
    else
      win32Dash(NULL,0);

    Vector u1 = lvertex_.current()->vector;
    while (lvertex_.next()) {
      Vector u2 = lvertex_.current()->vector;

      Vector v1 = base_->mapFromRef(u1,Coord::CANVAS);
      Vector v2 = base_->mapFromRef(u2,Coord::CANVAS);
      win32DrawLine(v1,v2);

      u1 = u2;
    }
  }
}
#endif

