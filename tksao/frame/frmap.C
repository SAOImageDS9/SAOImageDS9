// Copyright (C) 1999-2016
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
    rr += ptr->getWCSRotation(sys,sky);
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
    rr -= ptr->getWCSRotation(sys,sky);
    break;
  }

  return zeroTWOPI(rr);
}

double Base::mapDistFromRef(const Vector& v1, const Vector& v2, 
			    Coord::InternalSystem sys)
{
  switch (sys) {
  case Coord::CANVAS:
    return (v2*refToCanvas - v1*refToCanvas).length();
  case Coord::PANNER:
    return (v2*refToPanner - v1*refToPanner).length();
  default:
    // na
    return 0;
  }
}

double Base::mapLenFromRef(double d, Coord::InternalSystem sys)
{
  Vector r = mapLenFromRef(Vector(d,0),sys);
  return r[0];
}

Vector Base::mapLenFromRef(const Vector& v, Coord::InternalSystem sys)
{
  switch (sys) {
  case Coord::CANVAS:
    return mapLen(v,refToCanvas);
  case Coord::PANNER:
    return mapLen(v,refToPanner);
  default:
    return Vector();
  }
}

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
  default:
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
  default:
    return Vector();
  }
}
