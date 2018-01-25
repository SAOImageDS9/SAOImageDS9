// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "context.h"
#include "framebase.h"
#include "fitsimage.h"

double Base::mapAngleFromRef(double angle, Coord::CoordSystem sys, 
			     Coord::SkyFrame sky)
{
  double rr = angle;
  FitsImage* ptr = currentContext->cfits;
  if (!ptr)
    return 0;

  switch (sys) {
  case Coord::IMAGE: 
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    break;
  default:
    if (hasWCSCel(sys))
      rr += ptr->getWCSRotation(sys,sky);
    else {
      Coord::Orientation oo = keyContext->fits->getWCSOrientation(sys, sky);
      if (oo==Coord::XX) {
	rr = -(angle + ptr->getWCSRotation(sys,sky) + M_PI);
      }
    }    
    break;
  }

  return zeroTWOPI(rr);
}

double Base::mapAngleToRef(double angle, Coord::CoordSystem sys, 
			   Coord::SkyFrame sky)
{
  double rr = angle;
  FitsImage* ptr = currentContext->cfits;
  if (!ptr)
    return 0;

  switch (sys) {
  case Coord::IMAGE: 
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    break;
  default:
    if (hasWCSCel(sys))
      rr -= ptr->getWCSRotation(sys,sky);
    else {
      Coord::Orientation oo = keyContext->fits->getWCSOrientation(sys, sky);
      if (oo==Coord::XX) {
	rr = -(angle + ptr->getWCSRotation(sys,sky) + M_PI);
      }
    }    
    break;
  }

  return zeroTWOPI(rr);
}

#ifndef NEWWCS
double Base::mapLenToRef(double d, Coord::InternalSystem sys)
{
  Vector r = mapLenToRef(Vector(d,0),sys);
  return r[0];
}

Vector Base::mapLenToRef(const Vector& v, Coord::InternalSystem sys)
{
  switch (sys) {
  case Coord::CANVAS:
    return mapLen(v,canvasToRef);
  case Coord::PANNER:
    return mapLen(v,pannerToRef);
  default:
    return Vector();
  }
}
#else
double Base::mapLenToRef(double dd, Coord::InternalSystem sys)
{
  switch (sys) {
  case Coord::CANVAS:
    return dd*canvasToRef[1].length();
  case Coord::PANNER:
    return dd*pannerToRef[1].length();
  default:
    return 0;
  }
}

Vector Base::mapLenToRef(const Vector& v, Coord::InternalSystem sys)
{
  switch (sys) {
  case Coord::CANVAS:
    {
      double rx = ((Vector)v)[0]*canvasToRef[0].length();
      double ry = ((Vector)v)[1]*canvasToRef[1].length();
      return Vector(rx,ry);
    }
  case Coord::PANNER:
    {
      double rx = ((Vector)v)[0]*pannerToRef[0].length();
      double ry = ((Vector)v)[1]*pannerToRef[1].length();
      return Vector(rx,ry);
    }
  default:
    return Vector();
  }
}
#endif

Vector FrameBase::mapFromRef(const Vector& vv, Coord::InternalSystem sys)
{
  switch (sys) {
  case Coord::REF:
    return vv;
  case Coord::USER:
    return vv * refToUser;
  case Coord::WIDGET:
    return vv * refToWidget;
  case Coord::CANVAS:
    return vv * refToCanvas;
  case Coord::WINDOW:
    return vv * refToWindow;
  case Coord::PANNER:
    return vv * refToPanner;
  case Coord::MAGNIFIER:
    return vv * refToMagnifier;
  case Coord::PS:
    // should not happen
    return Vector();
  }
}

Vector FrameBase::mapToRef(const Vector& vv, Coord::InternalSystem sys)
{
  switch (sys) {
  case Coord::REF:
    return vv;
  case Coord::USER:
    return vv * userToRef;
  case Coord::WIDGET:
    return vv * widgetToRef;
  case Coord::CANVAS:
    return vv * canvasToRef;
  case Coord::WINDOW:
    return vv * windowToRef;
  case Coord::PANNER:
    return vv * pannerToRef;
  case Coord::MAGNIFIER:
    return vv * magnifierToRef;
  case Coord::PS:
    // should not happen
    return Vector();
  }
}
