// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tk.h>

#include "basefill.h"

// BaseFill

BaseFill::BaseFill(const BaseFill& a)
{
  fill_ = a.fill_;
}

BaseFill::BaseFill()
{
  fill_ =0;
}

BaseFill::BaseFill(int ff)
{
  fill_ =ff;
}

// BaseFillEllipse

BaseFillEllipse::BaseFillEllipse(const BaseFillEllipse& a) : BaseFill(a) {}

BaseFillEllipse::BaseFillEllipse() : BaseFill() {}

BaseFillEllipse::BaseFillEllipse(int ff) : BaseFill(ff) {}

void BaseFillEllipse::renderXCircleDraw(Display* display, Drawable drawable,
					GC lgc, 
					Vector& st, Vector& size,
					int a1, int aa)
{
  if (fill_)
    XFillArc(display, drawable, lgc, st[0], st[1], size[0], size[1], a1, aa);
  else
    XDrawArc(display, drawable, lgc, st[0], st[1], size[0], size[1], a1, aa);
}

void BaseFillEllipse::renderPSCircleDraw(Base* parent, 
					 Vector& cc, double l, 
					 float a1, float a2)
{
  ostringstream str;
  str << "newpath " 
      << cc.TkCanvasPs(parent->getCanvas()) << ' '
      << l << ' '
      << a1 << ' ' << a2 << ' '
      << "arc ";
  if (fill_)
    str << "fill";
  else
    str << "stroke";
  str << endl << ends;

  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

void BaseFillEllipse::renderPSEllipseArcDraw(Base* parent, Vector& center,
					     Vector& tt0, Vector& xx1, 
					     Vector& xx2, Vector& tt1)
{
  ostringstream str;
  if (fill_) {
    Vector cc =  parent->mapFromRef(center,Coord::CANVAS);

    str << "newpath "
	<< tt0.TkCanvasPs(parent->getCanvas()) << ' '
	<< "moveto "
	<< xx1.TkCanvasPs(parent->getCanvas()) << ' '
	<< xx2.TkCanvasPs(parent->getCanvas()) << ' ' 
	<< tt1.TkCanvasPs(parent->getCanvas()) << ' ' 
	<< "curveto fill" << endl
	<< "newpath "
	<< cc.TkCanvasPs(parent->getCanvas()) << ' '
	<< "moveto "
	<< tt0.TkCanvasPs(parent->getCanvas()) << ' '
	<< "lineto "
	<< tt1.TkCanvasPs(parent->getCanvas()) << ' '
	<< "lineto closepath gsave" << endl
	<< "1 setlinejoin .75 setlinewidth stroke" << endl
	<< "grestore fill" << endl << ends;
  }  
  else
    str << "newpath "
	<< tt0.TkCanvasPs(parent->getCanvas()) << ' '
	<< "moveto "
	<< xx1.TkCanvasPs(parent->getCanvas()) << ' '
	<< xx2.TkCanvasPs(parent->getCanvas()) << ' ' 
	<< tt1.TkCanvasPs(parent->getCanvas()) << ' ' 
	<< "curveto stroke" << endl << ends;

  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}
