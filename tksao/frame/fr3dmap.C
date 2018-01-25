// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "context.h"
#include "frame3dbase.h"
#include "fitsimage.h"

Vector3d Frame3dBase::mapFromRef3d(const Vector& vv, Coord::InternalSystem sys)
{
  // context->slice() IMAGE (ranges 1-n)
  double sl = keyContext->slice(2)-.5;
  return mapFromRef3d(vv,sys,sl);
}

Vector3d Frame3dBase::mapFromRef3d(const Vector& vv, Coord::InternalSystem sys, 
				   double sl)
{
  // note: sl is in REF=DATA coordinates
  Matrix3d mm;
  switch (sys) {
  case Coord::REF:
    return Vector3d(vv,sl);
  case Coord::USER:
    mm = refToUser3d;
    break;
  case Coord::WIDGET:
    mm = refToWidget3d;
    break;
  case Coord::CANVAS:
    mm = refToCanvas3d;
    break;
  case Coord::WINDOW:
    mm = refToWindow3d;
    break;
  case Coord::PANNER:
    mm = refToPanner3d;
    break;
  case Coord::MAGNIFIER:
    mm = refToMagnifier3d;
    break;
  default:
    // na
    break;
  }

  return Vector3d(vv,sl)*mm;
}

Vector3d Frame3dBase::mapToRef3d(const Vector& vv, Coord::InternalSystem sys)
{
  // context->slice() IMAGE (ranges 1-n)
  double sl = keyContext->slice(2)-.5;
  return mapToRef3d(vv,sys,sl);
}

Vector3d Frame3dBase::mapToRef3d(const Vector& vv, Coord::InternalSystem sys, 
				 double sl)
{
  switch (sys) {
  case Coord::REF:
    return Vector3d(vv,sl);
  case Coord::USER:
    return Vector3d(vv,sl)*userToRef3d;
  default:
    break;
  }
 
  // note: sl is in REF=DATA coordinates
  Vector3d xx = Vector3d(1,0,sl)*refToWidget3d;
  Vector3d yy = Vector3d(0,1,sl)*refToWidget3d;
  Vector3d oo = Vector3d(0,0,sl)*refToWidget3d;

  Vector3d ii=xx-oo;
  Vector3d jj=yy-oo;
  Vector3d nn = cross(jj,ii).normalize();
  double dd = -(nn*xx);

  Vector ww;
  switch (sys) {
  case Coord::WIDGET:
    ww = vv;
    break;
  case Coord::CANVAS:
    ww = vv*canvasToWidget;
    break;
  case Coord::WINDOW:
    ww = vv*windowToWidget;
    break;
  case Coord::PANNER:
    ww = vv*pannerToWidget;
    break;
  case Coord::MAGNIFIER:
    ww = vv*magnifierToWidget;
    break;
  default:
    // na
    break;
  }

  double zz = (-nn[0]*ww[0]-nn[1]*ww[1]-dd) / nn[2];
  return Vector3d(ww,zz)*widgetToRef3d;
}

