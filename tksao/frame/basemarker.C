// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "basemarker.h"
#include "base.h"

// Base Markers Public

BaseMarker::BaseMarker(Base* p, const Vector& ctr, double ang)
  : Marker(p, ctr, ang)
{
  startAng_ = 0;
  stopAng_ = M_TWOPI;

  numAnnuli_ = 0;
  annuli_ = NULL;

  numAngles_ = 0;
  angles_ = NULL;
}

BaseMarker::BaseMarker(Base* p, const Vector& ctr, double ang,
		       const char* clr, int* dsh, 
		       int w, const char* f, 
		       const char* t, unsigned short prop, const char* c,
		       const List<Tag>& tag, const List<CallBack>& cb)
  : Marker(p, ctr, ang, clr, dsh, w, f, t, prop, c, tag, cb)
{
  startAng_ = 0;
  stopAng_ = M_TWOPI;

  numAnnuli_ = 0;
  annuli_ = NULL;

  numAngles_ = 0;
  angles_ = NULL;
}

BaseMarker::BaseMarker(const BaseMarker& a) : Marker(a)
{
  startAng_ = a.startAng_;
  stopAng_ = a.stopAng_;

  numAnnuli_ = a.numAnnuli_;
  annuli_ = new Vector[a.numAnnuli_];
  for (int i=0; i<a.numAnnuli_; i++)
    annuli_[i] = a.annuli_[i];

  numAngles_ = a.numAngles_;
  angles_ = new double[numAngles_];
  for (int ii=0; ii<numAngles_; ii++)
    angles_[ii] = a.angles_[ii];
}

BaseMarker::~BaseMarker()
{
  if (annuli_)
    delete [] annuli_;

  if (angles_)
    delete [] angles_;
}

void BaseMarker::updateCoords(const Matrix& mx)
{
  for (int i=0; i<numAnnuli_; i++)
    annuli_[i] *= Scale(mx);

  Marker::updateCoords(mx);
}

void BaseMarker::setAnnuli(const Vector& r)
{
  annuli_[0] = r;
  updateBBox();

  doCallBack(CallBack::EDITCB);
}

void BaseMarker::setAnnuli(const Vector& r1, const Vector& r2, int rn)
{
  numAnnuli_ = rn+1;
  if (annuli_)
    delete [] annuli_;
  annuli_ = new Vector[numAnnuli_];

  for (int i=0; i<numAnnuli_; i++)
    annuli_[i] = ((r2-r1)/rn)*i+r1;
  sortAnnuli();

  numHandle = 4 + numAnnuli_;

  updateBBox();
  doCallBack(CallBack::EDITCB);
}

void BaseMarker::setAnnuli(const Vector* r, int rn)
{
  numAnnuli_ = rn;
  if (annuli_)
    delete [] annuli_;
  annuli_ = new Vector[numAnnuli_];

  for (int i=0; i<numAnnuli_; i++)
    annuli_[i] = r[i];
  sortAnnuli();

  numHandle = 4 + numAnnuli_;

  updateBBox();
  doCallBack(CallBack::EDITCB);
}

int BaseMarker::insertAnnuli(Vector r)
{
  // new size array
  Vector* old = annuli_;
  annuli_ = new Vector[numAnnuli_+1];

  // copy old values
  for (int i=0; i<numAnnuli_; i++)
    annuli_[i] = old[i];

  // delete old
  if (old)
    delete [] old;

  // new size on end
  annuli_[numAnnuli_] = r;

  numAnnuli_++;
  numHandle++;

  updateBBox();

  // return handle number
  return numAnnuli_+4;
}

void BaseMarker::deleteAnnuli(int h)
{
  if (h>4) {
    int hh = h-4-1;

    if (numAnnuli_>2 && hh<numAnnuli_) {
      // new radii array
      Vector* old = annuli_;
      annuli_ = new Vector[numAnnuli_-1];

      // copy up to radii in question
      for (int i=0; i<hh; i++)
	annuli_[i] = old[i];

      // copy remainder
      for (int i=hh; i<numAnnuli_-1; i++)
	annuli_[i] = old[i+1];

      if (old)
	delete [] old;
      numAnnuli_--;

      numHandle = 4 + numAnnuli_;

      updateBBox();
      doCallBack(CallBack::EDITCB);
    }
  }
}

void BaseMarker::sortAnnuli()
{
  for (int i=0; i<numAnnuli_; i++)
    for (int j=i+1; j<numAnnuli_; j++)
      if (annuli_[i][0]>annuli_[j][0]) {
	Vector d = annuli_[i];
	annuli_[i] = annuli_[j];
	annuli_[j] = d;
      }
}

int BaseMarker::isInAngle(Vector& vv, int nn)
{
  double aa = -vv.angle();
  while (aa<angles_[0])
    aa += M_TWOPI;

  return aa>=angles_[nn] && aa<angles_[nn+1];
}

void BaseMarker::sortAngles()
{
  // first, all angles 0<=ang<2_PI
  for (int ii=0; ii<numAngles_; ii++)
    angles_[ii] = zeroTWOPI(angles_[ii]);

  // now, all angs incr in size
  for (int ii=1; ii<numAngles_; ii++) {
    if (angles_[ii] < angles_[ii-1])
      angles_[ii] += M_TWOPI;
  }

  // last sanity check
  if (numAngles_>1 && angles_[0]==0 && angles_[numAngles_-1]==0)
    angles_[numAngles_-1] += M_TWOPI;
}

void BaseMarker::setAngles(double a1, double a2, int an)
{
  numAngles_ = an+1;
  if (angles_)
    delete [] angles_;
  angles_ = new double[numAngles_];

  // yes this is really needed
  // for a2<a1
  if (tle(a2,a1,FLT_EPSILON)) {
    a1 = zeroTWOPI(a1);
    a2 = zeroTWOPI(a2);
    if (tle(a2,a1,FLT_EPSILON))
      a2 += M_TWOPI;    
  }

  // for a1=a2 
  if (teq(a2,a1,FLT_EPSILON)) {
    a1 = zeroTWOPI(a1);
    a2 = zeroTWOPI(a2);
    if (a2<=a1)
      a2 += M_TWOPI;    
  }

  // for a2>a1 very small
  if (teq(a2,a1,FLT_EPSILON)) {
    a1 = zeroTWOPI(a1);
    a2 = zeroTWOPI(a2);
    if (teq(a2,a1,FLT_EPSILON))
      a2 += M_TWOPI;    
  }

  for (int ii=0; ii<numAngles_; ii++)
    angles_[ii] = ii*(a2-a1)/an+a1;

  sortAngles();
}

void BaseMarker::setAngles(int an, const double* a)
{
  numAngles_ = an;
  if (angles_)
    delete [] angles_;
  angles_ = new double[numAngles_];

  for (int ii=0; ii<numAngles_; ii++)
    angles_[ii] = a[ii];

  sortAngles();
}

void BaseMarker::addAngle(double aa)
{
  // we need to insert into the next to the last location
  // new size array
  double* old = angles_;
  angles_ = new double[numAngles_+1];

  // copy old values
  for (int ii=0; ii<numAngles_; ii++)
    angles_[ii] = old[ii];

  // save last
  angles_[numAngles_] = old[numAngles_-1];

  // delete old
  if (old)
    delete [] old;

  // new size on next to last
  angles_[numAngles_-1] = aa;

  numAngles_++;
}

void BaseMarker::deleteAngle(int hh)
{
  // new angles array
  double* old = angles_;
  angles_ = new double[numAngles_-1];

  // copy up to angles in question
  for (int ii=0; ii<hh; ii++)
    angles_[ii] = old[ii];

  // copy remainder
  for (int ii=hh; ii<numAngles_-1; ii++)
    angles_[ii] = old[ii+1];

  if (old)
    delete [] old;
  numAngles_--;
}

Matrix BaseMarker::fwdMatrix()
{
  if (properties & FIXED) {
    Vector cc = center * parent->refToCanvas;
    return Rotate(calcAngle()) * Translate(cc) * parent->canvasToRef;
  }
  else
    return Marker::fwdMatrix();
}

Matrix BaseMarker::bckMatrix()
{
  if (properties & FIXED) {
    Vector cc = center * parent->refToCanvas;
    return parent->refToCanvas * Translate(-cc) * Rotate(-calcAngle());
  }
  else
    return Marker::bckMatrix();
}

Vector BaseMarker::fwdMap(const Vector& vv, Coord::InternalSystem sys)
{
  if (properties & FIXED) {
    Vector cc = center * parent->refToCanvas;
    Vector dd = vv * Rotate(calcAngle()) * Translate(cc);
    Vector ee = dd*parent->canvasToRef;
    return parent->mapFromRef(ee,sys);
  }
  else
    return Marker::fwdMap(vv,sys);
}

Vector BaseMarker::bckMap(const Vector& vv, Coord::InternalSystem sys)
{
  if (properties & FIXED) {
    Vector aa = parent->mapToRef(vv,sys);
    Vector bb = aa*parent->refToCanvas;
    Vector cc = center * parent->refToCanvas;
    return bb * Translate(-cc) * Rotate(-calcAngle());
  }
  else
    return Marker::bckMap(vv,sys);
}

