// Copyright (C) 1999-2018
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
    if (strncmp("green", colorName_, 5) || dash_ != 0 ||
	dlist_[0] != 8 || dlist_[1] != 3 || lineWidth_ != 1) {
      if (strncmp("green", colorName_, 5))
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

    if (!parent_->dash_)
      XSetLineAttributes(base_->display, parent_->gc_, 
			 ww, LineSolid, CapButt, JoinMiter);
    else {
      char dl[2];
      dl[0] = parent_->dlist_[0];
      dl[1] = parent_->dlist_[1];

      XSetDashes(base_->display, parent_->gc_, 0, dl, 2);
      XSetLineAttributes(base_->display, parent_->gc_, 
			 ww, LineOnOffDash, CapButt, JoinMiter);
    }

    Vector u1 = lvertex_.current()->vector;
    while (lvertex_.next()) {
      Vector u2 = lvertex_.current()->vector;

      Vector v1 = base_->mapFromRef(u1,sys);
      Vector v2 = base_->mapFromRef(u2,sys);
      if (bbox.isIn(v1) || bbox.isIn(v2))
	XDrawLine(base_->display, pmap, parent_->gc_, 
		  (int)v1[0], (int)v1[1], (int)v2[0], (int)v2[1]);

      u1 = u2;
    }
  }
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

