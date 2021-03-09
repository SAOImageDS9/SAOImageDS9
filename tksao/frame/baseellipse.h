// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __baseellipse_h__
#define __baseellipse_h__

#include "basemarker.h"

class BaseEllipse : public BaseMarker {
 protected:
  XPoint* xpoint_;
  int xpointSize_;
  int xpointNum_;

 private:
  double xyz(Vector rr, double ang);
  void XDrawCurve(Drawable, RenderMode, Vector&, Vector&, Vector&, Vector&);

  void renderXCircle(Drawable, Coord::InternalSystem, double, RenderMode);
  void renderXEllipse(Drawable, Coord::InternalSystem, double, RenderMode);
  void renderXBezier(Drawable, Coord::InternalSystem, RenderMode);
  void renderXBezierPrep(Drawable, Coord::InternalSystem, RenderMode,
			  double, double, double, double, Vector&);
  void renderXBezierArc(Drawable, Coord::InternalSystem, RenderMode, 
			 double, double, Vector&);
  void renderXInclude(Drawable, Coord::InternalSystem, RenderMode);

  void renderPSCircle(PSColorSpace);
  void renderPSEllipse(PSColorSpace);
  void renderPSEllipsePrep(double, double, double, double, Vector&);
  void renderPSEllipseArc(double, double, Vector&);
  void renderPSInclude(PSColorSpace);

#ifdef __WIN32
  void renderWIN32Circle();
  void renderWIN32Ellipse();
  void renderWIN32EllipsePrep(double, double, double, double, Vector&);
  void renderWIN32EllipseArc(double, double, Vector&);
  void renderWIN32Include();
#endif

 protected:
  void renderX(Drawable, Coord::InternalSystem, RenderMode);
  virtual void renderXArcDraw(Drawable, GC, Vector&, Vector&, 
				 int, int, RenderMode);
  virtual void renderXBezierDraw(Drawable, GC, RenderMode);
  void renderXBezierDashDraw(Drawable, GC);

  void renderPS(PSColorSpace);
  virtual void renderPSDraw();
  void renderPSFill();

#ifdef __WIN32
  void renderWIN32();
  virtual void renderWIN32Draw();
#endif

  virtual void updateHandles();
  Vector intersect(Vector, double);

  int isInRef(const Vector& vv, int);

 public:
  BaseEllipse(Base* p, const Vector& ctr, double a);
  BaseEllipse(Base* p, const Vector& ctr, 
	      double a,
	      const char* clr, int* dsh, 
	      int w, const char* f, const char* t, 
	      unsigned short prop, const char* c, 
	      const List<Tag>& tag, const List<CallBack>& cb);
  BaseEllipse(const BaseEllipse&);

  virtual ~BaseEllipse();

  virtual Marker* dup() =0;

  int isIn(const Vector& vv) 
  {return isIn(vv, Coord::CANVAS);}
  int isIn(const Vector& vv, Coord::InternalSystem sys)
  {return isIn(vv,sys,numAnnuli_-1);}
  int isIn(const Vector& vv, Coord::InternalSystem sys, int nn)
  {return isInRef(bckMap(vv,sys),nn);}
  virtual int isIn(const Vector& vv, Coord::InternalSystem sys, int nn, int aa)
  {return isInRef(bckMap(vv,sys),nn);}

  // valid for non-fixed only
  int isIn(const Vector& vv, const Matrix& bck)
  {return isIn(vv,bck,numAnnuli_-1);}
  int isIn(const Vector& vv, const Matrix& bck, int nn)
  {return isInRef(vv*bck,nn);}
};

#endif


