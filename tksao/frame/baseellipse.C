// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "baseellipse.h"
#include "fitsimage.h"

#define XPOINT_BLOCK 1024

BaseEllipse::BaseEllipse(Base* p, const Vector& ctr, double ang)
  : BaseMarker(p, ctr, ang)
{
  xpoint_ =NULL;
  xpointSize_ =0;
  xpointNum_ =0;
}

BaseEllipse::BaseEllipse(Base* p, const Vector& ctr, 
			 double ang,
			 const char* clr, int* dsh, 
			 int w, const char* f, 
			 const char* t, unsigned short prop, const char* c,
			 const List<Tag>& tag, const List<CallBack>& cb)
  : BaseMarker(p, ctr, ang, clr, dsh, w, f, t, prop, c, tag, cb)
{
  xpoint_ =NULL;
  xpointSize_ =0;
  xpointNum_ =0;
}

BaseEllipse::BaseEllipse(const BaseEllipse& a) : BaseMarker(a)
{
  xpoint_ =NULL;
  xpointSize_ =0;
  xpointNum_ =0;
}

BaseEllipse::~BaseEllipse()
{
  if (xpoint_)
    free(xpoint_);
}

// renderX

void BaseEllipse::renderX(Drawable drawable, Coord::InternalSystem sys, 
			  RenderMode mode)
{
  double ang = calcAngle();
  Vector r = annuli_[numAnnuli_-1];
  Vector z = parent->zoom();

  int isOrient = parent->getOrientation() == Coord::NORMAL && 
    parent->getWCSOrientation() == Coord::NORMAL;
  int isRound = r[0] == r[1];
  int isScale = z[0] == z[1];
  //  int isAngle = teq(ang,0,FLT_EPSILON) || teq(ang,M_PI,FLT_EPSILON);

  if (isRound && isScale && isOrient && parent->isAzElZero())
    renderXCircle(drawable, sys, ang, mode);
  else
    renderXEllipse(drawable, sys, mode);
}

void BaseEllipse::renderXCircle(Drawable drawable, Coord::InternalSystem sys, 
				double ang, RenderMode mode)
{
  GC lgc = renderXGC(mode);

  // this routine is only valid for circles with equal zoom in x & y
  Vector cc = parent->mapFromRef(center,sys);

  for (int i=0; i<numAnnuli_; i++) {
    Vector r = annuli_[i];

    Vector ur = fwdMap(r,sys);
    double l = (ur-cc).length() * cos(M_PI_4);

    Vector rr(l,l);
    Vector st = cc-rr;
    Vector size = rr*2;

    // Verify size is positive
    // XDrawArc is sensative to bad data, and may hang the XServer
    if (!size[0] || !size[1])
      continue;

    // Must be very sure that a1<a2
    double aa1 = startAng_ + ang;
    double aa2 = stopAng_  + ang;
    int a1 = radToDeg(aa1)*64;
    int a2 = radToDeg(aa2)*64;
    if (a2<=a1)
      a2 += 360*64;

    renderXCircleDraw(drawable, lgc, st, size, a1, (a2-a1));
  }
}

void BaseEllipse::renderXCircleDraw(Drawable drawable, GC lgc, Vector& st, 
				    Vector& size, int a1, int aa)
{
  XDrawArc(display, drawable, lgc, st[0], st[1], size[0], size[1], a1, aa);
}

void BaseEllipse::renderXEllipse(Drawable drawable, Coord::InternalSystem sys,
				 RenderMode mode)
{
  double a1 = startAng_;
  double a2 = stopAng_;
  if (a2<=a1)
    a2 += M_TWOPI;

  for (int i=0; i<numAnnuli_; i++) {
    Vector r = annuli_[i];

    xpointSize_ = XPOINT_BLOCK*sizeof(XPoint);
    xpoint_ = (XPoint*)malloc(xpointSize_);
    xpointNum_ =0;

    int s1 =0;
    int s2 =0;
    for (int i=0; i<8; i++) {
      double b1 = i*M_PI_2;
      double b2 = (i+1)*M_PI_2;
      if (!s1 && a1>=b1 && a1<b2)
	s1 =1;
      if (!s2 && a2>b1 && a2<=b2)
	s2 =1;

      if ((s1 && !s2) || (s1 && s2))
	renderXEllipsePrep(drawable, sys, mode, a1,a2,b1,b2,r);

      if (s1&&s2)
	s1=s2=0;
    }

    // close the loop
    xpointNum_++;
    if (xpointNum_*sizeof(XPoint) >= xpointSize_) {
      xpointSize_ += XPOINT_BLOCK*sizeof(XPoint);
      xpoint_ = (XPoint*)realloc(xpoint_, xpointSize_);
    }
    XPoint* ptr = xpoint_+xpointNum_;
    (*ptr).x = (*xpoint_).x;
    (*ptr).y = (*xpoint_).y;

    // if dashed, fake it
    GC lgc;
    if ((properties & SOURCE) && !(properties & DASH))
      lgc = renderXGC(mode);
    else {
      // set width, color, dash
      switch (mode) {
      case SRC:
	XSetForeground(display, gc, color); 
	renderXLineNoDash(gc);
	lgc = gc;
	break;
      case XOR:
	renderXLineNoDash(gcxor);
	lgc = gcxor;
	break;
      }
    }

    renderXEllipseDraw(drawable, lgc);

    if (xpoint_)
      free(xpoint_);
    xpoint_ =NULL;
    xpointSize_ =0;
    xpointNum_ =0;
  }
}

void BaseEllipse::renderXEllipseDraw(Drawable drawable, GC lgc)
{
  if ((properties & SOURCE) && !(properties & DASH))
    XDrawLines(display, drawable, lgc, xpoint_, xpointNum_, CoordModeOrigin);
  else
    renderXEllipseDashDraw(drawable, lgc);
}

void BaseEllipse::renderXEllipseDashDraw(Drawable drawable, GC lgc)
{
  // crude attempt to clip unwanted drawlines
  // only works for SRC
  for (int ii=0; ii<xpointNum_; ii+=2) {
    XPoint* ptr1 = xpoint_+ii;
    XPoint* ptr2 = xpoint_+ii+1;
    XDrawLine(display, drawable, lgc, 
	      (*ptr1).x, (*ptr1).y, (*ptr2).x, (*ptr2).y);    
  }    
}

void BaseEllipse::renderXEllipsePrep(Drawable drawable, 
				     Coord::InternalSystem sys, 
				     RenderMode mode, 
				     double a1, double a2, 
				     double b1, double b2, 
				     Vector& r)
{
  if (!(a1 >= b1 && a1 <= b2))
    a1 = b1;
  if (!(a2 >= b1 && a2 <= b2))
    a2 = b2;

  if (a1>a2) {
    renderXEllipseArc(drawable, sys, mode, b1,a2,r);
    renderXEllipseArc(drawable, sys, mode, a1,b2,r);
  }
  else
    renderXEllipseArc(drawable, sys, mode, a1,a2,r);
}				

void BaseEllipse::renderXEllipseArc(Drawable drawable, 
				    Coord::InternalSystem sys,
				    RenderMode mode,
				    double a1, double a2, 
				    Vector& rr)
{
  // don't render if zero angle
  if (a1==a2)
    return;

  // don't render if zero length
  if (rr[0]==0 || rr[1]==0)
    return;

  // bezier curve, valid for arcs of <M_PI_2
  double aa1 = xyz(rr,a1);
  double aa2 = xyz(rr,a2);
  double bcp = 4.0/3*(1-cos((aa2-aa1)/2))/sin((aa2-aa1)/2);
  
  Vector t0 = intersect(rr,a1);
  Vector x1 = Vector(rr[0]*(cos(aa1)-bcp*sin(aa1)),
		     rr[1]*(sin(aa1)+bcp*cos(aa1)));
  Vector x2 = Vector(rr[0]*(cos(aa2)+bcp*sin(aa2)),
		     rr[1]*(sin(aa2)-bcp*cos(aa2)));
  Vector t1 = intersect(rr,a2);

  Vector tt0 = fwdMap(t0*FlipY(),sys);
  Vector xx1 = fwdMap(x1*FlipY(),sys);
  Vector xx2 = fwdMap(x2*FlipY(),sys);
  Vector tt1 = fwdMap(t1*FlipY(),sys);

  if (xpointNum_ == 0) {
    (*xpoint_).x = tt0[0];
    (*xpoint_).y = tt0[1];
  }

  XDrawCurve(drawable, mode, tt0, xx1, xx2, tt1);
}

void BaseEllipse::XDrawCurve(Drawable drawable, RenderMode mode,
			     Vector& t1, Vector& x1,
			     Vector& x2, Vector& t2)
{
  float t1x = t1[0];
  float t1y = t1[1];
  float t2x = t2[0];
  float t2y = t2[1];

  float x1x = x1[0];
  float x1y = x1[1];
  float x2x = x2[0];
  float x2y = x2[1];

  Vector dd = (t2-t1).abs();
  float max = dd[0]>dd[1] ? dd[0] : dd[1];

  // calculate incr
  // this is a crude attempt to limit the number of iterations
  // we want a min for very small segments, but not that large for
  // high zoom or elongated curves
  float aa = int(log(max))*5;
  float incr = 1./(aa > 2 ? aa : 2);

  float tt = incr;
  while (tt<=1+FLT_EPSILON) {
    float xx = pow(tt,3)*(t2x+3*(x1x-x2x)-t1x)
      +3*pow(tt,2)*(t1x-2*x1x+x2x)
      +3*tt*(x1x-t1x)+t1x;
    float yy = pow(tt,3)*(t2y+3*(x1y-x2y)-t1y)
      +3*pow(tt,2)*(t1y-2*x1y+x2y)
      +3*tt*(x1y-t1y)+t1y;

    xpointNum_++;
    if (xpointNum_*sizeof(XPoint) >= xpointSize_) {
      xpointSize_ += XPOINT_BLOCK*sizeof(XPoint);
      xpoint_ = (XPoint*)realloc(xpoint_, xpointSize_);
    }
    XPoint* ptr = xpoint_+xpointNum_;
    (*ptr).x = xx;
    (*ptr).y = yy;

    tt += incr;
  }
}

// this routine maps the desired angle to an angle to be used with XDrawArc
double BaseEllipse::xyz(Vector rr, double aa)
{
  // just in case
  if (!rr[0] || !rr[1]) 
    return aa;

  int flip=0;
  while (aa>M_PI) {
    aa -= M_PI;
    flip++;
  }

  double tt = rr[1]*rr[1]*cos(aa)*cos(aa)+rr[0]*rr[0]*sin(aa)*sin(aa);
  double ss =0;
  if (tt>0) 
    ss = 1./sqrt(tt);

  double bb = rr[1]*ss*cos(aa);
  return acos(bb)+M_PI*flip;
}

void BaseEllipse::renderXInclude(Drawable drawable, 
				 Coord::InternalSystem sys, 
				 RenderMode mode)
{
  if (!(properties & INCLUDE)) {
    //    Matrix mm = fwdMatrix();
    double theta = degToRad(45);

    Vector r1 = fwdMap(Vector(annuli_[numAnnuli_-1][0]*cos(theta), annuli_[numAnnuli_-1][1]*sin(theta)), sys);
    Vector r2 = fwdMap(Vector(-annuli_[numAnnuli_-1][0]*cos(theta), -annuli_[numAnnuli_-1][1]*sin(theta)), sys);

    GC lgc = renderXGC(mode);
    if (mode == SRC)
      XSetForeground(display, gc, parent->getColor("red"));

    XDrawLine(display, drawable, lgc, r1[0], r1[1], r2[0], r2[1]);    
  }
}

// renderPS

void BaseEllipse::renderPS(int mode) {
  Vector r = annuli_[numAnnuli_-1];
  Vector z = parent->zoom();

  int isOrient = parent->getOrientation() == Coord::NORMAL && 
    parent->getWCSOrientation() == Coord::NORMAL;
  int isRound = r[0] == r[1];
  int isScale = z[0] == z[1];

  if (isRound && isScale && isOrient && parent->isAzElZero())
    renderPSCircle(mode);
  else
    renderPSEllipse(mode);
}

void BaseEllipse::renderPSCircle(int mode)
{
  renderPSGC(mode);

  Vector cc = parent->mapFromRef(center,Coord::CANVAS);
  double ang = calcAngle();

  for (int ii=0; ii<numAnnuli_; ii++) {
    Vector r = annuli_[ii];

    Vector ur = fwdMap(r,Coord::CANVAS);
    double l = (ur-cc).length() * cos(M_PI_4);

    // don't render zero length arcs
    if (!l)
      continue;

    // Must be very sure that a1<a2
    double aa1 = startAng_ + ang;
    double aa2 = stopAng_  + ang;
    float a1 = radToDeg(aa1);
    float a2 = radToDeg(aa2);
    if (a2<=a1)
      a2 += 360;

    renderPSCircleDraw(cc, l, a1, a2);
  }
}

void BaseEllipse::renderPSCircleDraw(Vector& cc, double l, float a1, float a2)
{
    ostringstream str;
    str << "newpath " 
	<< cc.TkCanvasPs(parent->canvas) << ' '
	<< l << ' '
	<< a1 << ' ' << a2 << ' '
	<< "arc stroke" << endl << ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

void BaseEllipse::renderPSCircleFillDraw(Vector& cc, double l, 
					 float a1, float a2)
{
    ostringstream str;
    str << "newpath " 
	<< cc.TkCanvasPs(parent->getCanvas()) << ' '
	<< l << ' '
	<< a1 << ' ' << a2 << ' '
	<< "arc fill" << endl << ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

void BaseEllipse::renderPSEllipse(int mode)
{
  renderPSGC(mode);

  double a1 = startAng_;
  double a2 = stopAng_;
  if (a2<=a1)
    a2 += M_TWOPI;

  for (int ii=0; ii<numAnnuli_; ii++) {
    Vector r = annuli_[ii];

    int s1 =0;
    int s2 =0;
    for (int jj=0; jj<8; jj++) {
      double b1 = jj*M_PI_2;
      double b2 = (jj+1)*M_PI_2;
      if (!s1 && a1>=b1 && a1<b2)
	s1 =1;
      if (!s2 && a2>b1 && a2<=b2)
	s2 =1;

      if ((s1 && !s2) || (s1 && s2))
	renderPSEllipsePrep(a1,a2,b1,b2,r);

      if (s1&&s2)
	s1=s2=0;
    }
  }
}

void BaseEllipse::renderPSEllipsePrep(double a1, double a2, 
				      double b1, double b2, 
				      Vector& rr)
{
  if (!(a1 >= b1 && a1 <= b2))
    a1 = b1;
  if (!(a2 >= b1 && a2 <= b2))
    a2 = b2;

  if (a1>a2) {
    renderPSEllipseArc(b1,a2,rr);
    renderPSEllipseArc(a1,b2,rr);
  }
  else
    renderPSEllipseArc(a1,a2,rr);
}				

void BaseEllipse::renderPSEllipseArc(double a1, double a2, Vector& rr)
{
  // don't render zero length arcs
  if (a1 == a2)
    return;

  if (!rr[0] || !rr[1])
    return;

  // bezier curve, valid for arcs of <M_PI_2
  double aa1 = xyz(rr,a1);
  double aa2 = xyz(rr,a2);
  double bcp = 4.0/3*(1-cos((aa2-aa1)/2))/sin((aa2-aa1)/2);
  
  Vector t0 = intersect(rr,a1);
  Vector x1 = Vector(rr[0]*(cos(aa1)-bcp*sin(aa1)),
		     rr[1]*(sin(aa1)+bcp*cos(aa1)));
  Vector x2 = Vector(rr[0]*(cos(aa2)+bcp*sin(aa2)),
		     rr[1]*(sin(aa2)-bcp*cos(aa2)));
  Vector t1 = intersect(rr,a2);

  Vector tt0 = fwdMap(t0*FlipY(),Coord::CANVAS);
  Vector xx1 = fwdMap(x1*FlipY(),Coord::CANVAS);
  Vector xx2 = fwdMap(x2*FlipY(),Coord::CANVAS);
  Vector tt1 = fwdMap(t1*FlipY(),Coord::CANVAS);

  renderPSEllipseArcDraw(tt0, xx1, xx2, tt1);
}

void BaseEllipse::renderPSEllipseArcDraw(Vector& tt0, Vector& xx1, 
					 Vector& xx2, Vector& tt1)
{
  ostringstream str;
  str << "newpath "
      << tt0.TkCanvasPs(parent->canvas) << ' '
      << "moveto "
      << xx1.TkCanvasPs(parent->canvas) << ' '
      << xx2.TkCanvasPs(parent->canvas) << ' ' 
      << tt1.TkCanvasPs(parent->canvas) << ' '
      << "curveto stroke" << endl << ends;
  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

void BaseEllipse::renderPSEllipseArcFillDraw(Vector& tt0, Vector& xx1, 
					     Vector& xx2, Vector& tt1)
{
  Vector cc =  parent->mapFromRef(center,Coord::CANVAS);
  ostringstream str;
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
      << "1 setlinejoin 1 setlinewidth stroke" << endl
      << "grestore fill" << endl << ends;
  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

void BaseEllipse::renderPSInclude(int mode)
{
  if (!(properties & INCLUDE)) {
    double theta = degToRad(45);
    Vector r1 = fwdMap(Vector(annuli_[numAnnuli_-1][0]*cos(theta), 
					annuli_[numAnnuli_-1][1]*sin(theta)),
				 Coord::CANVAS);
    Vector r2 = fwdMap(Vector(-annuli_[numAnnuli_-1][0]*cos(theta), 
					-annuli_[numAnnuli_-1][1]*sin(theta)),
				 Coord::CANVAS);

    renderPSColor(mode, parent->getXColor("red"));

    ostringstream str;
    str << "newpath " 
	<< r1.TkCanvasPs(parent->canvas) << ' '
	<< "moveto "
	<< r2.TkCanvasPs(parent->canvas) << ' '
	<< "lineto stroke" << endl << ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
  }
}

#ifdef MAC_OSX_TK
void BaseEllipse::renderMACOSX() {
  Vector r = annuli_[numAnnuli_-1];
  Vector z = parent->zoom();

  int isOrient = parent->getOrientation() == Coord::NORMAL && 
    parent->getWCSOrientation() == Coord::NORMAL;
  int isRound = r[0] == r[1];
  int isScale = z[0] == z[1];

  if (isRound && isScale && isOrient & parent->isAzElZero())
    renderMACOSXCircle();
  else
    renderMACOSXEllipse();
}

void BaseEllipse::renderMACOSXCircle()
{
  renderMACOSXGC();

  Vector cc = parent->mapFromRef(center,Coord::CANVAS);
  double ang = calcAngle();

  for (int ii=0; ii<numAnnuli_; ii++) {
    Vector r = annuli_[ii];

    Vector ur = fwdMap(r,Coord::CANVAS);
    double l = (ur-cc).length() * cos(M_PI_4);

    // don't render zero length arcs
    if (!l)
      continue;

    double a1 = startAng_ + ang;
    double a2 = stopAng_  + ang;
    if (a2<=a1)
      a2 += M_TWOPI;

    renderMACOSXCircleDraw(cc, l, a1, a2);
  }
}

void BaseEllipse::renderMACOSXCircleDraw(Vector& cc, double l, 
					 float a1, float a2)
{
  macosxDrawArc(cc, l, a1, a2);
}

void BaseEllipse::renderMACOSXEllipse()
{
  renderMACOSXGC();

  double a1 = startAng_;
  double a2 = stopAng_;
  if (a2<=a1)
    a2 += M_TWOPI;

  for (int ii=0; ii<numAnnuli_; ii++) {
    Vector r = annuli_[ii];

    int s1 =0;
    int s2 =0;
    for (int jj=0; jj<8; jj++) {
      double b1 = jj*M_PI_2;
      double b2 = (jj+1)*M_PI_2;
      if (!s1 && a1>=b1 && a1<b2)
	s1 =1;
      if (!s2 && a2>b1 && a2<=b2)
	s2 =1;

      if ((s1 && !s2) || (s1 && s2))
	renderMACOSXEllipsePrep(a1,a2,b1,b2,r);

      if (s1&&s2)
	s1=s2=0;
    }
  }
}

void BaseEllipse::renderMACOSXEllipsePrep(double a1, double a2, 
				      double b1, double b2, 
				      Vector& rr)
{
  if (!(a1 >= b1 && a1 <= b2))
    a1 = b1;
  if (!(a2 >= b1 && a2 <= b2))
    a2 = b2;

  if (a1>a2) {
    renderMACOSXEllipseArc(b1,a2,rr);
    renderMACOSXEllipseArc(a1,b2,rr);
  }
  else
    renderMACOSXEllipseArc(a1,a2,rr);
}				

void BaseEllipse::renderMACOSXEllipseArc(double a1, double a2, Vector& rr)

{
  // don't render zero length arcs
  if (a1 == a2)
    return;

  if (!rr[0] || !rr[1])
    return;

  // bezier curve, valid for arcs of <M_PI_2
  double aa1 = xyz(rr,a1);
  double aa2 = xyz(rr,a2);
  double bcp = 4.0/3*(1-cos((aa2-aa1)/2))/sin((aa2-aa1)/2);
  
  Vector t0 = intersect(rr,a1);
  Vector x1 = Vector(rr[0]*(cos(aa1)-bcp*sin(aa1)),
		     rr[1]*(sin(aa1)+bcp*cos(aa1)));
  Vector x2 = Vector(rr[0]*(cos(aa2)+bcp*sin(aa2)),
		     rr[1]*(sin(aa2)-bcp*cos(aa2)));
  Vector t1 = intersect(rr,a2);

  Vector tt0 = fwdMap(t0*FlipY(),Coord::CANVAS);
  Vector xx1 = fwdMap(x1*FlipY(),Coord::CANVAS);
  Vector xx2 = fwdMap(x2*FlipY(),Coord::CANVAS);
  Vector tt1 = fwdMap(t1*FlipY(),Coord::CANVAS);

  renderMACOSXEllipseArcDraw(tt0, xx1, xx2, tt1);
}

void BaseEllipse::renderMACOSXEllipseArcDraw(Vector& tt0, Vector& xx1, Vector& xx2, Vector& tt1)
{
  macosxDrawCurve(tt0, xx1, xx2, tt1);
}

void BaseEllipse::renderMACOSXInclude()
{
  if (!(properties & INCLUDE)) {
    double theta = degToRad(45);
    Vector r1 = fwdMap(Vector(annuli_[numAnnuli_-1][0]*cos(theta), 
					annuli_[numAnnuli_-1][1]*sin(theta)),
				 Coord::CANVAS);
    Vector r2 = fwdMap(Vector(-annuli_[numAnnuli_-1][0]*cos(theta), 
					-annuli_[numAnnuli_-1][1]*sin(theta)),
				 Coord::CANVAS);

    macosxColor(parent->getXColor("red"));
    macosxDrawLine(r1,r2);
  }
}
#endif

#ifdef __WIN32
void BaseEllipse::renderWIN32() {
  Vector r = annuli_[numAnnuli_-1];
  Vector z = parent->zoom();

  int isOrient = parent->getOrientation() == Coord::NORMAL && 
    parent->getWCSOrientation() == Coord::NORMAL;
  int isRound = r[0] == r[1];
  int isScale = z[0] == z[1];

  if (isRound && isScale && isOrient && parent->isAzElZero())
    renderWIN32Circle();
  else
    renderWIN32EllipseCurve();
}

void BaseEllipse::renderWIN32Circle()
{
  renderWIN32GC();

  Vector cc = parent->mapFromRef(center,Coord::CANVAS);
  double ang = calcAngle();

  for (int i=0; i<numAnnuli_; i++) {
    Vector r = annuli_[i];

    Vector ur = fwdMap(r,Coord::CANVAS);
    double l = (ur-cc).length() * cos(M_PI_4);

    // don't render zero length arcs
    if (!l)
      continue;

    double a1 = startAng_ + ang;
    double a2 = stopAng_  + ang;
    if (a2<=a1)
      a2 += M_TWOPI;

    renderWIN32CircleDraw(cc, l, a1, a2);
  }
}

void BaseEllipse::renderWIN32CircleDraw(Vector& cc, double l, 
					float a1, float a2)
{
  win32DrawArc(cc, l, a1, a2);
}

void BaseEllipse::renderWIN32EllipseCurve()
{
  renderWIN32GC();

  double a1 = startAng_;
  double a2 = stopAng_;
  if (a2<=a1)
    a2 += M_TWOPI;

  for (int ii=0; ii<numAnnuli_; ii++) {
    Vector r = annuli_[ii];

    int s1 =0;
    int s2 =0;
    for (int jj=0; jj<8; jj++) {
      double b1 = jj*M_PI_2;
      double b2 = (jj+1)*M_PI_2;
      if (!s1 && a1>=b1 && a1<b2)
	s1 =1;
      if (!s2 && a2>b1 && a2<=b2)
	s2 =1;

      if ((s1 && !s2) || (s1 && s2))
	renderWIN32EllipsePrep(a1,a2,b1,b2,r);

      if (s1&&s2)
	s1=s2=0;
    }
  }
}

void BaseEllipse::renderWIN32EllipsePrep(double a1, double a2, 
				      double b1, double b2, 
				      Vector& rr)
{
  if (!(a1 >= b1 && a1 <= b2))
    a1 = b1;
  if (!(a2 >= b1 && a2 <= b2))
    a2 = b2;

  if (a1>a2) {
    renderWIN32EllipseArc(b1,a2,rr);
    renderWIN32EllipseArc(a1,b2,rr);
  }
  else
    renderWIN32EllipseArc(a1,a2,rr);
}				

void BaseEllipse::renderWIN32EllipseArc(double a1, double a2, Vector& rr)

{
  // don't render zero length arcs
  if (a1 == a2)
    return;

  if (!rr[0] || !rr[1])
    return;

  // bezier curve, valid for arcs of <M_PI_2
  double aa1 = xyz(rr,a1);
  double aa2 = xyz(rr,a2);
  double bcp = 4.0/3*(1-cos((aa2-aa1)/2))/sin((aa2-aa1)/2);
  
  Vector t0 = intersect(rr,a1);
  Vector x1 = Vector(rr[0]*(cos(aa1)-bcp*sin(aa1)),
		     rr[1]*(sin(aa1)+bcp*cos(aa1)));
  Vector x2 = Vector(rr[0]*(cos(aa2)+bcp*sin(aa2)),
		     rr[1]*(sin(aa2)-bcp*cos(aa2)));
  Vector t1 = intersect(rr,a2);

  Vector tt0 = fwdMap(t0*FlipY(),Coord::CANVAS);
  Vector xx1 = fwdMap(x1*FlipY(),Coord::CANVAS);
  Vector xx2 = fwdMap(x2*FlipY(),Coord::CANVAS);
  Vector tt1 = fwdMap(t1*FlipY(),Coord::CANVAS);

  win32DrawCurve(tt0, xx1, xx2, tt1);
}

void BaseEllipse::renderWIN32Include()
{
  if (!(properties & INCLUDE)) {
    double theta = degToRad(45);
    Vector r1 = fwdMap(Vector(annuli_[numAnnuli_-1][0]*cos(theta), 
					annuli_[numAnnuli_-1][1]*sin(theta)),
				 Coord::CANVAS);
    Vector r2 = fwdMap(Vector(-annuli_[numAnnuli_-1][0]*cos(theta), 
					-annuli_[numAnnuli_-1][1]*sin(theta)),
				 Coord::CANVAS);

    win32Color(parent->getXColor("red"));
    win32DrawLine(r1,r2);
  }
}
#endif

// Support

void BaseEllipse::updateHandles()
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

  // annuli_
  if (numAnnuli_>1)
    for (int ii=0; ii<numAnnuli_; ii++)
      handle[ii+4] = fwdMap(Vector(annuli_[ii][0],0),Coord::CANVAS);
}

int BaseEllipse::isInRef(const Vector& vv, int nn)
{
  Vector rr = annuli_[nn];

  // zero radius
  if (!rr[0] || !rr[1])
    return 0;

  Vector& pp = (Vector&)vv;
  if ((pp[0]*pp[0])/(rr[0]*rr[0]) + (pp[1]*pp[1])/(rr[1]*rr[1]) <= 1)
    return 1;
  else
    return 0;
}

Vector BaseEllipse::intersect(Vector rr, double aa)
{
  double tt = rr[1]*rr[1]*cos(aa)*cos(aa)+rr[0]*rr[0]*sin(aa)*sin(aa);
  double ss =0;
  if (tt>0) 
    ss = rr[0]*rr[1]/sqrt(tt);

  return Vector(ss*cos(aa),ss*sin(aa));
}

