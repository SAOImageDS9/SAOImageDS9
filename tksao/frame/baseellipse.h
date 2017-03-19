// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __baseellipse_h__
#define __baseellipse_h__

#include <tk.h>

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
  void renderXEllipse(Drawable, Coord::InternalSystem, RenderMode);
  void renderXEllipsePrep(Drawable, Coord::InternalSystem, RenderMode,
			  double, double, double, double, Vector&);
  void renderXEllipseArc(Drawable, Coord::InternalSystem, RenderMode, 
			 double, double, Vector&);
  void renderXInclude(Drawable, Coord::InternalSystem, RenderMode);

  void renderPSCircle(int);
  void renderPSEllipse(int);
  void renderPSEllipsePrep(double, double, double, double, Vector&);
  void renderPSEllipseArc(double, double, Vector&);
  void renderPSInclude(int);

#ifdef MAC_OSX_TK
  void renderMACOSXCircle();
  void renderMACOSXEllipse();
  void renderMACOSXEllipsePrep(double, double, double, double, Vector&);
  void renderMACOSXEllipseArc(double, double, Vector&);
  void renderMACOSXInclude();
#endif

#ifdef __WIN32
  void renderWIN32Circle();
  void renderWIN32EllipseCurve();
  void renderWIN32EllipsePrep(double, double, double, double, Vector&);
  void renderWIN32EllipseArc(double, double, Vector&);
  void renderWIN32Include();
#endif

 protected:
  void renderX(Drawable, Coord::InternalSystem, RenderMode);
  virtual void renderXCircleDraw(Drawable, GC, Vector&, Vector&, int, int);
  virtual void renderXEllipseDraw(Drawable, GC);
  void renderXEllipseDashDraw(Drawable, GC);

  void renderPS(int);
  virtual void renderPSDraw();
  void renderPSFill();

#ifdef MAC_OSX_TK
  void renderMACOSX();
  virtual void renderMACOSXDraw();
#endif
#ifdef __WIN32
  void renderWIN32();
  virtual void renderWIN32CircleDraw(Vector&, double, float, float);
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


