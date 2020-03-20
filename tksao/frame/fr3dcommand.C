// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "frame3dbase.h"
#include "fitsimage.h"
#include "context.h"
#include "marker.h"

void Frame3dBase::binToFitCmd()
{
  if (!keyContext->fits)
    return;

  Vector3d dim(keyContext->fits->getHistDim(), keyContext->binDepth());
  double bf = 1/calcZoom3d(dim, Vector(options->width,options->height));
			   
  // round up to next power of 2
  if (bf < 1)
    keyContext->setBinToFactor(Vector(1,1));
  else {
    int p=1;
    while (p<bf)
      p*=2;
    keyContext->setBinToFactor(Vector(p,p));
  }
  
  if (keyContext->fits && keyContext->fits->isHist()) {
    Matrix mm = keyContext->binCursor();
    updateBin(mm);
  }
}

void Frame3dBase::blockToFitCmd()
{
  if (!keyContext->fits)
    return;

  Vector3d ss(keyContext->fits->osize(),keyContext->naxis(2));
  double bf = 1/calcZoom3d(ss, Vector(options->width,options->height));
			   
  // round down to next power of 2
  Vector vv;
  if (bf < 1)
    vv = keyContext->setBlockToFactor(Vector(1,1));
  else {
    int p=1;
    while (p<bf)
      p*=2;
    vv = keyContext->setBlockToFactor(Vector(p,p));
  }
  
  keyContext->block();
  keyContext->analysis();
  updateBlock(vv);
}

void Frame3dBase::crop3dBeginCmd(const Vector& vv, int which)
{
  doAnts3d =1;
  antsBegin = vv * Scale(zoom_).invert();
  antsEnd = vv * Scale(zoom_).invert();
}

void Frame3dBase::crop3dMotionCmd(const Vector& vv, int which)
{
  antsEnd = vv * Scale(zoom_).invert();

  // just in case
  if (!keyContext->fits)
    return;

  // params is a BBOX in DATA coords 0-n
  FitsZBound* zparams = 
    keyContext->getDataParams(keyContext->secMode());

  Vector diff = antsEnd-antsBegin;
  if (!which)
    cropsl_ = diff[0]+zparams->zmin;
  else
    cropsl_ = diff[0]+zparams->zmax;

  // this will be incorrect for multiple ext/file cubes
  double depth = keyContext->naxis(2);
  if (!which) {
    if (cropsl_<0)
      cropsl_ = 0;
    if (cropsl_>zparams->zmax-1)
      cropsl_ = zparams->zmax-1;
  }
  else {
    if (cropsl_<zparams->zmin+1)
      cropsl_ = zparams->zmin+1;
    if (cropsl_>depth)
      cropsl_ = depth;
  }

  update(PIXMAP);
}

void Frame3dBase::crop3dEndCmd(const Vector& vv, int which)
{
  doAnts3d =0;
  antsEnd = vv * Scale(zoom_).invert();

  // just in case
  if (!keyContext->fits)
    return;

  // params is a BBOX in DATA coords 0-n
  FitsZBound* zparams = 
    keyContext->getDataParams(keyContext->secMode());

  Vector diff = antsEnd-antsBegin;
  if (!which)
    cropsl_ = diff[0]+zparams->zmin;
  else
    cropsl_ = diff[0]+zparams->zmax;

  // this will be incorrect for multiple ext/file cubes
  double depth = keyContext->naxis(2);
  if (!which) {
    if (cropsl_<0)
      cropsl_ = 0;
    if (cropsl_>zparams->zmax-1)
      cropsl_ = zparams->zmax-1;
  }
  else {
    if (cropsl_<zparams->zmin+1)
      cropsl_ = zparams->zmin+1;
    if (cropsl_>depth)
      cropsl_ = depth;
  }

  if (antsBegin[0]!=antsEnd[0] || antsBegin[1]!=antsEnd[1]) {
    keyContext->setSecMode(FrScale::CROPSEC);

    // params is a BBOX in DATA coords 0-n
    if (!which)
      keyContext->setCrop3dParams(int(cropsl_+.5),zparams->zmax);
    else
      keyContext->setCrop3dParams(zparams->zmin,int(cropsl_+.5));

    // set current slice if needed
    // setSlice() IMAGE (ranges 1-n)
    // context->slice() IMAGE (ranges 1-n)
    // cropsl_ ranges coords 0-n
    double sl = keyContext->slice(2)-.5;
    if (!which) {
      if (sl<=cropsl_)
	setSlice(2,int(cropsl_+1.5));
    }
    else {
      if (sl>cropsl_)
	setSlice(2,int(cropsl_));
    }
  }
  else {
    keyContext->resetSecMode();
    keyContext->setCrop3dParams();
    FitsImage* sptr = keyContext->fits;
    while (sptr) {
      sptr->setCropParams(keyContext->datasec());
      sptr = sptr->nextSlice();
    }
  }

  keyContext->updateClip();
  updateColorScale();

  update(MATRIX);
  updateMarkerCBs(&userMarkers);
  updateMarkerCBs(&catalogMarkers);
  updateMarkerCBs(&footprintMarkers);
}

void Frame3dBase::get3dBorderCmd()
{
  if (border_)
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Frame3dBase::get3dBorderColorCmd()
{
  Tcl_AppendResult(interp, borderColorName_, NULL);
}

void Frame3dBase::get3dCompassCmd()
{
  if (compass_)
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Frame3dBase::get3dCompassColorCmd()
{
  Tcl_AppendResult(interp, compassColorName_, NULL);
}

void Frame3dBase::get3dHighliteCmd()
{
  if (highlite_)
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Frame3dBase::get3dHighliteColorCmd()
{
  Tcl_AppendResult(interp, highliteColorName_, NULL);
}

void Frame3dBase::get3dRenderMethodCmd()
{
  ostringstream str;
  switch (renderMethod_) {
  case MIP:
    str << "mip" << ends;
    break;
  case AIP:
    str << "aip" << ends;
    break;
  }
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Frame3dBase::get3dScaleCmd()
{
  ostringstream str;
  str << zscale_ << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Frame3dBase::get3dViewCmd()
{
  ostringstream str;
  str << m180To180(radToDeg(az_)) << ' ' << m180To180(radToDeg(el_)) << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Frame3dBase::get3dViewPointCmd()
{
  ostringstream str;
  str << vp_ << ' ' << viewCursor_ << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Frame3dBase::get3dRenderBackgroundCmd()
{
  switch (render_) {
  case NONE:
    Tcl_AppendResult(interp, "none", NULL);
    break;
  case AZIMUTH:
    Tcl_AppendResult(interp, "azimuth", NULL);
    break;
  case ELEVATION:
    Tcl_AppendResult(interp, "elevation", NULL);
    break;
  }
}

void Frame3dBase::getCursorCmd(Coord::InternalSystem sys)
{
  Vector aa = Vector(options->width,options->height)/2.;
  Vector bb = mapToRef(aa,Coord::WIDGET);

  ostringstream str;
  str << mapFromRef(bb, sys) << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
} 

void Frame3dBase::getCursorCmd(Coord::CoordSystem sys, Coord::SkyFrame sky,
			       Coord::SkyFormat format)
{
  if (keyContext->fits) {
    Vector aa = Vector(options->width,options->height)/2.;
    Vector bb = mapToRef(aa,Coord::WIDGET);
    printFromRef(keyContext->fits, bb, sys, sky, format);
  }
} 

void Frame3dBase::gridCmd(Coord::CoordSystem sys, Coord::SkyFrame sky, 
			  Coord::SkyFormat format, Grid::GridType type, 
			  const char* ops, const char* vars)
{
  if (grid)
    delete grid;

  switch (type) {
  case Grid::ANALYSIS:
    grid = new Grid25d(this, sys, sky, format, type, ops, vars);
    break;
  case Grid::PUBLICATION:
    grid = new Grid3d(this, sys, sky, format, type, ops, vars);
    break;
  }

  update(PIXMAP);
}

void Frame3dBase::panCmd(const Vector& v1, const Vector& v2)
{
  viewCursor_ -= (v1-v2)*Scale(1/zoom_[0],1/zoom_[1]);
  update(MATRIX);
}

void Frame3dBase::panCmd(const Vector& vv)
{
  viewCursor_ -= vv*Scale(1/zoom_[0],1/zoom_[1]);
  update(MATRIX);
}

void Frame3dBase::panCmd(const Vector& vv, Coord::CoordSystem sys,
			 Coord::SkyFrame sky)
{
  if (!keyContext->fits)
    return;

  Vector cc = Vector(options->width,options->height)/2.;
  Vector dd = mapToRef(cc,Coord::WIDGET);
  Vector uu = keyContext->fits->mapFromRef(dd, sys, sky);
  uu += vv;
  Vector ee = keyContext->fits->mapToRef(uu, sys, sky);
  Vector ff = mapFromRef(ee,Coord::WIDGET);
  viewCursor_ += (cc-ff)*Scale(1/zoom_[0],1/zoom_[1]);

  update(MATRIX);
}

void Frame3dBase::panToCmd(const Vector& vv)
{
  Vector dd = Vector(options->width,options->height)/2. - vv*canvasToWidget;
  viewCursor_ += dd*Scale(1/zoom_[0],1/zoom_[1]);

  update(MATRIX);
}

void Frame3dBase::panToCmd(const Vector& vv, Coord::CoordSystem sys,
			   Coord::SkyFrame sky)
{
  if (!keyContext->fits)
    return;

  Vector aa = keyContext->fits->mapToRef(vv, sys, sky);
  Vector dd = Vector(options->width,options->height)/2. -
    mapFromRef(aa,Coord::WIDGET);
  viewCursor_ += dd*Scale(1/zoom_[0],1/zoom_[1]);

  update(MATRIX);
}

void Frame3dBase::panBBoxCmd(const Vector& vv)
{
  // vv is center of panBBox in panner coordinate
  Vector aa = vv*pannerToWidget3d;
  Vector dd = Vector(options->width,options->height)/2. - aa;
  viewCursor_ += dd*Scale(1/zoom_[0],1/zoom_[1]);

  update(MATRIX);
}

void Frame3dBase::panBeginCmd(const Vector& vv)
{
  panStart = vv*canvasToWidget;
}

void Frame3dBase::panMotionCmd(const Vector& vv)
{
  Vector diff = vv*canvasToWidget - panStart;
  viewCursor_ = diff*Scale(1/zoom_[0],1/zoom_[1]);

  update(MATRIX);
}

void Frame3dBase::set3dBorderCmd(int hh)
{
  border_ = hh;
  update(PIXMAP);
}

void Frame3dBase::set3dBorderColorCmd(const char* clr)
{
  if (borderColorName_)
    delete [] borderColorName_;
  borderColorName_ = dupstr(clr);

  if (threedGC)
    XSetForeground(display, threedGC, getColor(borderColorName_));
  update(PIXMAP);
}

void Frame3dBase::set3dCompassCmd(int hh)
{
  compass_ = hh;
  update(PIXMAP);
}

void Frame3dBase::set3dCompassColorCmd(const char* clr)
{
  if (compassColorName_)
    delete [] compassColorName_;
  compassColorName_ = dupstr(clr);

  if (threedGC)
    XSetForeground(display, threedGC, getColor(compassColorName_));
  update(PIXMAP);
}

void Frame3dBase::set3dHighliteCmd(int hh)
{
  highlite_ = hh;
  update(PIXMAP);
}

void Frame3dBase::set3dHighliteColorCmd(const char* clr)
{
  if (highliteColorName_)
    delete [] highliteColorName_;
  highliteColorName_ = dupstr(clr);

  if (threedGC)
    XSetForeground(display, threedGC, getColor(highliteColorName_));
  update(PIXMAP);
}

void Frame3dBase::set3dRenderMethodCmd(int m)
{
  RenderMethod mm = (RenderMethod)m;
  if (mm!=renderMethod_) {
    renderMethod_ = mm;
    update(MATRIX);
  }
}

void Frame3dBase::set3dScaleCmd(double ss)
{
  if (zscale_ == ss)
    return;

  zscale_ = ss;
  // just in case if pending az/el 
  preservecache_ =0;
  update(MATRIX);
}

void Frame3dBase::set3dViewCmd(float az, float el)
{
  az_ = zeroTWOPI(degToRad(az));
  el_ = zeroTWOPI(degToRad(el));
  preservecache_ =1;
  update(MATRIX);
}

void Frame3dBase::set3dViewPointCmd(const Vector3d& vv, const Vector& cc)
{
  vp_ = vv;
  viewCursor_ = cc;
  update(MATRIX);
}

void Frame3dBase::set3dRenderBackgroundCmd(int which)
{
  if (which != render_) {
    render_ = (MotionType)which;
    cancelDetach();
    preservecache_ =1;
    update(BASE);
  }
}

void Frame3dBase::zoomAboutCmd(const Vector& zz, const Vector& vv)
{
  Vector dd = Vector(options->width,options->height)/2. - vv*canvasToWidget;
  viewCursor_ += dd*Scale(1/zoom_[0],1/zoom_[1]);

  Vector az = ((Vector&)zz).abs();
  zoom_[0] *= az[0];
  zoom_[1] *= az[1];

  update(MATRIX);
}

void Frame3dBase::zoomAboutCmd(const Vector& zz, const Vector& vv, 
			       Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  if (!keyContext->fits)
    return;

  Vector aa = keyContext->fits->mapToRef(vv, sys, sky);
  Vector dd = Vector(options->width,options->height)/2. -
    mapFromRef(aa,Coord::WIDGET);
  viewCursor_ += dd*Scale(1/zoom_[0],1/zoom_[1]);

  Vector az = ((Vector&)zz).abs();
  zoom_[0] *= az[0];
  zoom_[1] *= az[1];

  update(MATRIX);
}

void Frame3dBase::zoomToAboutCmd(const Vector& zz, const Vector& vv)
{
  Vector dd = Vector(options->width,options->height)/2. - vv*canvasToWidget;
  viewCursor_ += dd*Scale(1/zoom_[0],1/zoom_[1]);
  zoom_ = ((Vector&)zz).abs();

  update(MATRIX);
}

void Frame3dBase::zoomToAboutCmd(const Vector& zz, const Vector& vv, 
			       Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  if (!keyContext->fits)
    return;

  Vector aa = keyContext->fits->mapToRef(vv, sys, sky);
  Vector dd = Vector(options->width,options->height)/2. -
    mapFromRef(aa,Coord::WIDGET);
  viewCursor_ += dd*Scale(1/zoom_[0],1/zoom_[1]);
  zoom_ = ((Vector&)zz).abs();

  update(MATRIX);
}

void Frame3dBase::zoomToFitCmd(double ss)
{
  if (!keyContext->fits)
    return;

  centerImage();

  Vector3d tt = imageSize3d(keyContext->secMode());
  double zz = calcZoom3d(tt,Vector(options->width,options->height)) * ss;
  zoom_ = Vector(zz,zz);

  update(MATRIX);
}
