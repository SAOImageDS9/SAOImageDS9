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

    // draw runs of visible segments as polylines, so the dash pattern
    // flows along the contour as it does for regions, rather than
    // restarting on every (often sub-dash length) segment. track the
    // distance travelled so the dash phase also carries across runs.
    std::vector<XPoint> pts;
    double travel = 0;
    double start = 0;

    Vector v1 = base_->mapFromRef(lvertex_.current()->vector,sys);
    while (lvertex_.next()) {
      Vector v2 = base_->mapFromRef(lvertex_.current()->vector,sys);
      double len = (v2-v1).length();

      if (bbox.isIn(v1) || bbox.isIn(v2)) {
	if (pts.empty()) {
	  start = travel;
	  XPoint pp = {(short)v1[0], (short)v1[1]};
	  pts.push_back(pp);
	}
	XPoint pp = {(short)v2[0], (short)v2[1]};
	pts.push_back(pp);
	// keep the request size bounded
	if (pts.size()>=1024) {
	  renderLines(pmap, pts, dash ? (int)fmod(start,period) : -1, dl);
	  pts.clear();
	}
      }
      else if (!pts.empty()) {
	renderLines(pmap, pts, dash ? (int)fmod(start,period) : -1, dl);
	pts.clear();
      }

      travel += len;
      v1 = v2;
    }
    renderLines(pmap, pts, dash ? (int)fmod(start,period) : -1, dl);
  }
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

