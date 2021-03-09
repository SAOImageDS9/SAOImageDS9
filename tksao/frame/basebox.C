// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "basebox.h"
#include "fitsimage.h"

BaseBox::BaseBox(Base* p, const Vector& ctr, double ang)
  : BaseMarker(p, ctr, ang)
{
  numPoints_ = 5;
  vertices_ = NULL;
}

BaseBox::BaseBox(Base* p, const Vector& ctr, 
		 double ang,
		 const char* clr, int* dsh, 
		 int w, const char* f, 
		 const char* t, unsigned short prop, const char* c,
		 const List<Tag>& tag, const List<CallBack>& cb)
  : BaseMarker(p, ctr, ang, clr, dsh, w, f, t, prop, c, tag, cb)
{
  numPoints_ = 5;
  vertices_ = NULL;
}

BaseBox::BaseBox(const BaseBox& a) : BaseMarker(a) 
{
  numPoints_ = a.numPoints_;
  vertices_ = NULL;
}

BaseBox::~BaseBox()
{
  deleteVertices();
}

void BaseBox::renderX(Drawable drawable, Coord::InternalSystem sys, 
		      RenderMode mode)
{
  GC lgc = renderXGC(mode);

  newVertices();
  for (int ii=0; ii<numAnnuli_; ii++) {
    XPoint* pp = new XPoint[numPoints_];
    for (int jj=0; jj<numPoints_; jj++) {
      Vector v = parent->mapFromRef(vertices_[ii][jj],sys);
      pp[jj].x = (short)v[0];
      pp[jj].y = (short)v[1];
    }
    renderXDraw(drawable, lgc, pp, mode);
    delete [] pp;
  }
  deleteVertices();
}

void BaseBox::renderXDraw(Drawable drawable, GC lgc, XPoint* pp, 
			  RenderMode mode)
{
  XDrawLines(display, drawable, lgc, pp, numPoints_, CoordModeOrigin);
}

void BaseBox::renderPS(PSColorSpace mode)
{
  renderPSGC(mode);

  newVertices();
  for (int ii=0; ii<numAnnuli_; ii++)
    renderPSDraw(ii);
  deleteVertices();
}

void BaseBox::renderPSDraw(int ii)
{
  ostringstream str;
  for (int jj=0; jj<numPoints_; jj++) {
    Vector v =  parent->mapFromRef(vertices_[ii][jj],Coord::CANVAS);
    if (jj==0)
      str << "newpath " 
	  << parent->TkCanvasPs(v) << " moveto" << endl;
    else
      str << parent->TkCanvasPs(v) << " lineto" << endl;
  }
  str << "stroke" << endl << ends;
  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

void BaseBox::renderPSFillDraw(int ii)
{
  ostringstream str;
  for (int jj=0; jj<numPoints_; jj++) {
    Vector v =  parent->mapFromRef(vertices_[ii][jj],Coord::CANVAS);
    if (jj==0)
      str << "newpath " 
	  << parent->TkCanvasPs(v) << " moveto" << endl;
    else
      str << parent->TkCanvasPs(v) << " lineto" << endl;
  }
  str << "fill" << endl << ends;
  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

#ifdef __WIN32
#include <win32lib.h>

void BaseBox::renderWIN32()
{
  renderWIN32GC();

  newVertices();
  for (int ii=0; ii<numAnnuli_; ii++) {
    Vector* vv = new Vector[numPoints_];
    for (int jj=0; jj<numPoints_; jj++)
      vv[jj] = parent->mapFromRef(vertices_[ii][jj],Coord::CANVAS);
    win32DrawLines(vv, numPoints_);
    delete [] vv;
  }
  deleteVertices();
}

void BaseBox::renderWIN32Draw(Vector* vv)
{
  win32DrawLines(vv, numPoints_);
}
#endif

// Support

void BaseBox::updateHandles()
{
  // handles are in canvas coords
  // we can't garantee that the radii have been sorted yet
  // also, annuli[i] could be negative

  if (handle)
    delete [] handle;
  handle = new Vector[numHandle];

  Vector max;
  for(int ii=0; ii<numAnnuli_; ii++) {
    Vector aa = annuli_[ii].abs();
    if (max[0]<aa[0])
      max = aa;
  }
  Vector& s = max;

  handle[0] = fwdMap(Vector(-s[0],-s[1])/2,Coord::CANVAS);
  handle[1] = fwdMap(Vector( s[0],-s[1])/2,Coord::CANVAS);
  handle[2] = fwdMap(Vector( s[0], s[1])/2,Coord::CANVAS);
  handle[3] = fwdMap(Vector(-s[0], s[1])/2,Coord::CANVAS);

  // annuli
  if (numAnnuli_>1)
    for (int ii=0; ii<numAnnuli_; ii++)
      handle[ii+4] = fwdMap(Vector((annuli_[ii][0])/2.,0),Coord::CANVAS);
}


int BaseBox::isInRef(const Vector& vv, int nn)
{
  // during resize, annuli_ can be negative
  Vector ss = annuli_[nn].abs();

  // zero radius
  if (!ss[0] || !ss[1])
    return 0;

  Vector pp = (Vector&)vv;
  if (pp[0]<-ss[0]/2 || pp[0]>=ss[0]/2 || pp[1]<=-ss[1]/2 || pp[1]>ss[1]/2)
    return 0;
  else
    return 1;
}

Vector BaseBox::intersect(Vector rr, double aa)
{
  // special cases
  if (!rr[0] || !rr[1])
    return Vector();

  double ang = zeroTWOPI(aa);
  double phi = rr.angle();

  if (ang >= 0 && ang < phi)
    return Vector(rr[0],-rr[0]*tan(ang));
  else if (ang >= phi && ang < M_PI-phi)
    return Vector(rr[1]/tan(ang),-rr[1]);
  else if (ang >= M_PI-phi && ang < M_PI+phi)
    return Vector(-rr[0],rr[0]*tan(ang));
  else if (ang >= M_PI+phi && ang < M_TWOPI-phi)
    return Vector(-rr[1]/tan(ang),rr[1]);
  else
    return Vector(rr[0],-rr[0]*tan(ang));
}

void BaseBox::newVertices()
{
  if (vertices_)
    deleteVertices();

  if (teq(startAng_,stopAng_-M_TWOPI,FLT_EPSILON))
    newVerticesA();
  else
    newVerticesB();
}

void BaseBox::newVerticesA()
{
  Matrix mm = fwdMatrix();

  numPoints_ = 5;
  vertices_ = new Vector*[numAnnuli_+1];
  for (int i=0; i<numAnnuli_; i++)
    vertices_[i]= new Vector[numPoints_];
  vertices_[numAnnuli_] = new Vector[2];

  for (int i=0; i<numAnnuli_; i++) {
    vertices_[i][0] = Vector(-annuli_[i][0]/2.,-annuli_[i][1]/2.) * mm;
    vertices_[i][1] = Vector( annuli_[i][0]/2.,-annuli_[i][1]/2.) * mm;
    vertices_[i][2] = Vector( annuli_[i][0]/2., annuli_[i][1]/2.) * mm;
    vertices_[i][3] = Vector(-annuli_[i][0]/2., annuli_[i][1]/2.) * mm;
    vertices_[i][4] = Vector(-annuli_[i][0]/2.,-annuli_[i][1]/2.) * mm;
  }

  vertices_[numAnnuli_][0] = vertices_[numAnnuli_-1][0];
  vertices_[numAnnuli_][1] = vertices_[numAnnuli_-1][2];
}

void BaseBox::newVerticesB()
{
  numPoints_ = 0; // we will increment later
  vertices_ = new Vector*[numAnnuli_+1];
  for (int ii=0; ii<numAnnuli_; ii++)
    vertices_[ii]= new Vector[7];
  vertices_[numAnnuli_] = new Vector[2];

  double a1 = zeroTWOPI(startAng_);
  double a2 = zeroTWOPI(stopAng_);
  if (a2 <= a1)
    a2 += M_TWOPI;

  int cnt = 0;
  for (int ii=0; ii<numAnnuli_; ii++) {
    Vector rr = (annuli_[ii]).abs();
    if (rr[0] && rr[1]) {
      double phi = rr.angle();
      int s1 =0;
      int s2 =0;
      cnt = 0;

      vertBTest(&s1, &s2, a1, a2, 0, phi, ii, &cnt);
      vertBTest(&s1, &s2, a1, a2, phi, M_PI-phi, ii, &cnt);
      vertBTest(&s1, &s2, a1, a2, M_PI-phi, M_PI+phi, ii, &cnt);
      vertBTest(&s1, &s2, a1, a2, M_PI+phi, M_TWOPI-phi, ii, &cnt);
      vertBTest(&s1, &s2, a1, a2, M_TWOPI-phi,M_TWOPI , ii, &cnt);

      vertBTest(&s1, &s2, a1, a2, M_TWOPI,M_TWOPI+phi , ii, &cnt);
      vertBTest(&s1, &s2, a1, a2, M_TWOPI+phi,M_THREEPI-phi , ii, &cnt);
      vertBTest(&s1, &s2, a1, a2, M_THREEPI-phi,M_THREEPI+phi , ii, &cnt);
      vertBTest(&s1, &s2, a1, a2, M_THREEPI+phi,M_FOURPI-phi , ii, &cnt);
      vertBTest(&s1, &s2, a1, a2, M_FOURPI-phi,M_FOURPI, ii, &cnt);
    }
  }

  // final number of segments
  numPoints_ = ++cnt;

  // include/exclude
  Matrix mm = fwdMatrix();
  vertices_[numAnnuli_][0] = 
    Vector(-annuli_[numAnnuli_-1][0]/2.,-annuli_[numAnnuli_-1][1]/2.) * mm;
  vertices_[numAnnuli_][1] = 
    Vector( annuli_[numAnnuli_-1][0]/2., annuli_[numAnnuli_-1][1]/2.) * mm;
}

void BaseBox::vertBTest(int* s1, int* s2, double a1, double a2, 
			double b1, double b2, int ii, int* cnt)
{
  if ((!(*s1)) && (a1>=b1) && (a1<b2))
    *s1 =1;
  if ((!(*s2)) && (a2>b1) && (a2<=b2))
    *s2 =1;

  if (((*s1) && (!(*s2))) || ((*s1) && (*s2)))
    vertBPrep(a1,a2,b1,b2,ii,cnt);

  if (*s1&&*s2)
    *s1=*s2=0;
}

void BaseBox::vertBPrep(double a1, double a2, double ll, double ul, 
			int ii, int* cnt)
{
  if (!(a1 >= ll) && (a1 <= ul))
    a1 = ll;
  if (!(a2 >= ll) && (a2 <= ul))
    a2 = ul;

  if (a1 > a2) {
    vertBSeg(ll,a2,ii,cnt);
    vertBSeg(a1,ul,ii,cnt);
  }
  else
    vertBSeg(a1,a2,ii,cnt);
}

void BaseBox::vertBSeg(double ang1, double ang2, int ii, int* cnt)
{
  Vector rr = (annuli_[ii]/2).abs();
  Matrix mm = fwdMatrix();

  vertices_[ii][(*cnt)++] = intersect(rr,ang1)*mm;
  vertices_[ii][(*cnt)] = intersect(rr,ang2)*mm;
}

void BaseBox::deleteVertices()
{
  if (vertices_) {
    for (int i=0; i<numAnnuli_+1; i++)
      if (vertices_[i])
	delete [] vertices_[i];
    delete [] vertices_;
  }
  vertices_ = NULL;
}


