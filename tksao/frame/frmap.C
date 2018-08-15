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
    switch (keyContext->fits->getWCSOrientation(sys,sky)) {
    case Coord::NORMAL:
      rr += ptr->getWCSRotation(sys,sky);
      break;
    case Coord::XX:
      rr = -(angle + ptr->getWCSRotation(sys,sky) + M_PI);
      break;
    case Coord::YY:
    case Coord::XY:
      break;
    }
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
    switch (keyContext->fits->getWCSOrientation(sys,sky)) {
    case Coord::NORMAL:
      rr -= ptr->getWCSRotation(sys,sky);
      break;
    case Coord::XX:
      rr = -(angle + ptr->getWCSRotation(sys,sky) + M_PI);
      break;
    case Coord::YY:
    case Coord::XY:
      break;
    }
  }
  return zeroTWOPI(rr);
}

void Base::listAngleFromRef(ostream& str, double angle,
			    Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  str << setprecision(precAngle_) << radToDeg(mapAngleFromRef(angle,sys,sky));
}

void Base::listAngleFromRef(ostream& str, double angle, double first,
			    Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  double fir = radToDeg(mapAngleFromRef(first,sys,sky));
  double ang = radToDeg(mapAngleFromRef(angle,sys,sky));
  if (ang<=fir+FLT_EPSILON)
    ang += 360;
  str << setprecision(precAngle_) << ang;
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
