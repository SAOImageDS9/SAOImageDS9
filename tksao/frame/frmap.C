// Copyright (C) 1999-2018
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

double Base::mapLenToRef(double dd, Coord::InternalSystem sys)
{
  Vector rr = mapLenToRef(Vector(0,dd),sys);
  return rr[1];
}

Vector Base::mapLenToRef(const Vector& vv, Coord::InternalSystem sys)
{
  switch (sys) {
  case Coord::CANVAS:
    return mapLen(vv,canvasToRef);
  case Coord::PANNER:
    return mapLen(vv,pannerToRef);
  default:
    return Vector();
  }
}

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
