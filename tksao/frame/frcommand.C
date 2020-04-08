// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <fstream>
#include "fdstream.hpp"

#include "framebase.h"
#include "fitsimage.h"
#include "context.h"
#include "marker.h"
#include "outfile.h"
#include "outchannel.h"
#include "outsocket.h"

#ifndef PATH_MAX
#define PATH_MAX 1024
#endif

void FrameBase::binToFitCmd()
{
  if (currentContext->fits) {
    double bf = 1/calcZoom(currentContext->fits->getHistDim(), 
			   Vector(options->width,options->height));

    // round up to next power of 2
    if (bf < 1)
      currentContext->setBinToFactor(Vector(1,1));
    else {
      int p=1;
      while (p<bf)
	p*=2;
      currentContext->setBinToFactor(Vector(p,p));
    }
  }

  if (currentContext->fits && currentContext->fits->isHist()) {
    Matrix mm = currentContext->binCursor();
    updateBin(mm);
  }
}

void FrameBase::blockToFitCmd()
{
  if (currentContext->fits) {
    double bf = 1/calcZoom(currentContext->fits->osize(), 
			   Vector(options->width,options->height));

    // round up to next power of 2
    Vector vv;
    if (bf < 1)
      vv = currentContext->setBlockToFactor(Vector(1,1));
    else {
      int p=1;
      while (p<bf)
	p*=2;
      vv = currentContext->setBlockToFactor(Vector(p,p));
    }
  
    currentContext->block();
    currentContext->analysis();
    updateBlock(vv);
  }
}

void FrameBase::get3dBorderCmd()
{
  Tcl_AppendResult(interp, "1", NULL);
}

void FrameBase::get3dBorderColorCmd()
{
  Tcl_AppendResult(interp, "blue", NULL);
}

void FrameBase::get3dCompassCmd()
{
  Tcl_AppendResult(interp, "1", NULL);
}

void FrameBase::get3dCompassColorCmd()
{
  Tcl_AppendResult(interp, "green", NULL);
}

void FrameBase::get3dHighliteCmd()
{
  Tcl_AppendResult(interp, "1", NULL);
}

void FrameBase::get3dHighliteColorCmd()
{
  Tcl_AppendResult(interp, "cyan", NULL);
}

void FrameBase::get3dRenderMethodCmd()
{
  Tcl_AppendResult(interp, "mip", NULL);
}

void FrameBase::get3dScaleCmd()
{
  Tcl_AppendResult(interp, "1", NULL);
}

void FrameBase::get3dViewCmd()
{
  Tcl_AppendResult(interp, "0 0", NULL);
}

void FrameBase::get3dViewPointCmd()
{
  Tcl_AppendResult(interp, "0 0 0 0 0", NULL);
}

void FrameBase::get3dRenderBackgroundCmd()
{
  Tcl_AppendResult(interp, "none", NULL);
}

void FrameBase::getCursorCmd(Coord::InternalSystem sys)
{
  ostringstream str;
  str << mapFromRef(cursor, sys) << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
} 

void FrameBase::getCursorCmd(Coord::CoordSystem sys, Coord::SkyFrame sky,
			     Coord::SkyFormat format)
{
  if (currentContext->cfits)
    printFromRef(currentContext->cfits, cursor, sys, sky, format);
  else
    Tcl_AppendResult(interp, "0 0", NULL);
} 

void FrameBase::gridCmd(Coord::CoordSystem sys, Coord::SkyFrame sky, 
			Coord::SkyFormat format, Grid::GridType type, 
			const char* ops, const char* vars)
{
  if (grid)
    delete grid;
  grid = new Grid2d(this, sys, sky, format, type, ops, vars);

  update(PIXMAP);
}

void FrameBase::iisCursorModeCmd(int state)
{
  if (state) {
    // set iisLastCursor if first time thru
    if (iisLastCursor[0] == 0 && iisLastCursor[1] == 0)
      iisLastCursor = Vector(options->width,options->height)/2;

    // and move to last cursor position
    Vector rr = iisLastCursor * widgetToWindow;
    warpTo(rr);
  }
}

void FrameBase::iisGetCursorCmd()
{
  ostringstream str;
  str << iisLastCursor << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void FrameBase::iisGetFileNameCmd()
{
  FitsImage* ptr = currentContext->fits;
  while (ptr && ptr->nextMosaic())
    ptr = ptr->nextMosaic();

  if (ptr)
    Tcl_AppendResult(interp, ptr->iisGetFileName(), NULL);
}

void FrameBase::iisGetFileNameCmd(int which)
{
  FitsImage* ptr = currentContext->fits;
  for (int i=0; i<(which-1); i++) {
    if (ptr)
      ptr = ptr->nextMosaic();
  }

  if (ptr)
    Tcl_AppendResult(interp, ptr->iisGetFileName(), NULL);
}

void FrameBase::iisGetFileNameCmd(const Vector& vv)
{
  if (FitsImage* ptr = isInCFits(vv, Coord::CANVAS, NULL))
    Tcl_AppendResult(interp, ptr->iisGetFileName(), NULL);
}

void FrameBase::iisMessageCmd(const char* ptr)
{
  if (!currentContext->cfits)
    return;

  // do we have something?
  if (!(ptr && *ptr))
    return;

  // filename
  // note: the file name is the second value passed
  char fn[PATH_MAX];
  string x(ptr);
  istringstream str(x);
  str >> fn >> fn;
  currentContext->cfits->setFileName(fn);

  // object name
  // first go to end
  char* sptr = (char*)ptr;
  while (*sptr)
    sptr++;
  // now work backwards to last '-'
  while (sptr != ptr) {
    if (*sptr == '-')
      break;
    sptr--;
  }
  // is it good?
  if (sptr != ptr) {
    // go forward 2
    sptr += 2;
    currentContext->cfits->setObjectKeyword(sptr);
  }
}

void FrameBase::iisSetCursorCmd(const Vector& v, Coord::InternalSystem sys)
{
  // assume canvas
  if (!currentContext->cfits)
    return;

  iisLastCursor = v * canvasToWidget;

  Vector rr = iisLastCursor * widgetToWindow;
  warpTo(rr);
}

void FrameBase::iisSetCursorCmd(const Vector& v, Coord::CoordSystem sys)
{
  if (!currentContext->cfits)
    return;

  iisLastCursor = currentContext->cfits->mapToRef(v,sys) * refToWidget;

  Vector rr = iisLastCursor * widgetToWindow;
  warpTo(rr);
}

void FrameBase::iisSetFileNameCmd(const char* fn)
{
  FitsImage* ptr = currentContext->fits;
  while (ptr && ptr->nextMosaic())
    ptr = ptr->nextMosaic();

  if (ptr)
    ptr->iisSetFileName(fn);
}

void FrameBase::iisSetFileNameCmd(const char* fn, int which)
{
  FitsImage* ptr = currentContext->fits;
  for (int i=0; i<(which-1); i++) {
    if (ptr)
      ptr = ptr->nextMosaic();
  }

  if (ptr)
    ptr->iisSetFileName(fn);
}

void FrameBase::panCmd(const Vector& v1, const Vector& v2)
{
  Vector start = mapToRef(v1,Coord::CANVAS);
  Vector stop = mapToRef(v2,Coord::CANVAS);
  cursor -= stop - start;

  setBinCursor();
  update(MATRIX);
}

void FrameBase::panCmd(const Vector& vv)
{
  Vector uu = mapFromRef(cursor,Coord::CANVAS);
  uu += vv;
  cursor = mapToRef(uu,Coord::CANVAS);

  setBinCursor();
  update(MATRIX);
}

void FrameBase::panCmd(const Vector& vv, Coord::CoordSystem sys,
		       Coord::SkyFrame sky)
{
  if (!currentContext->cfits)
    return;

  Vector uu = currentContext->cfits->mapFromRef(cursor, sys, sky);
  uu += vv;
  cursor = currentContext->cfits->mapToRef(uu, sys, sky);
  
  setBinCursor();
  update(MATRIX);
}

void FrameBase::panToCmd(const Vector& vv)
{
  cursor = mapToRef(vv,Coord::CANVAS);

  setBinCursor();
  update(MATRIX);
}

void FrameBase::panToCmd(const Vector& vv, Coord::CoordSystem sys,
			 Coord::SkyFrame sky)
{
  if (!currentContext->cfits)
    return;

  cursor = currentContext->cfits->mapToRef(vv, sys, sky);

  setBinCursor();
  update(MATRIX);
}

void FrameBase::panBBoxCmd(const Vector& vv)
{
  if (!currentContext->cfits)
    return;

  // we want to round to nearest pixel center
  Vector rr = vv * currentContext->cfits->pannerToData;
  cursor = (rr.floor() + Vector(.5,.5)) * currentContext->cfits->dataToRef;

  setBinCursor();
  update(MATRIX);
}

void FrameBase::panBeginCmd(const Vector& vv)
{
  panStart = mapToRef(vv,Coord::CANVAS);
}

void FrameBase::panMotionCmd(const Vector& vv)
{
  cursor -= mapToRef(vv,Coord::CANVAS) - panStart;

  setBinCursor();
  update(MATRIX);
}

void FrameBase::saveFitsResampleFileCmd(const char* fn)
{
  OutFitsFile str(fn);
  if (str.valid())
    saveFitsResample(str);
}

void FrameBase::saveFitsResampleChannelCmd(const char* ch)
{
  OutFitsChannel str(interp, ch);
  if (str.valid())
    saveFitsResample(str);
}

void FrameBase::saveFitsResampleSocketCmd(int ss)
{
  OutFitsSocket str(ss);
  if (str.valid())
    saveFitsResample(str);
}

void FrameBase::zoomAboutCmd(const Vector& zz, const Vector& vv)
{
  Vector az = ((Vector&)zz).abs();
  zoom_[0] *= az[0];
  zoom_[1] *= az[1];

  cursor = mapToRef(vv,Coord::CANVAS);

  setBinCursor();
  update(MATRIX);
}

void FrameBase::zoomAboutCmd(const Vector& z, const Vector& vv, 
			     Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  Vector az = ((Vector&)z).abs();
  zoom_[0] *= az[0];
  zoom_[1] *= az[1];

  if (currentContext->cfits) {
    cursor = currentContext->cfits->mapToRef(vv, sys, sky);
    setBinCursor();
  }
  update(MATRIX);
}

void FrameBase::zoomToAboutCmd(const Vector& z, const Vector& vv)
{
  zoom_ = ((Vector&)z).abs();

  cursor = mapToRef(vv,Coord::CANVAS);

  setBinCursor();
  update(MATRIX);
}

void FrameBase::zoomToAboutCmd(const Vector& z, const Vector& vv, 
			       Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  zoom_ = ((Vector&)z).abs();

  if (currentContext->cfits) {
    cursor = currentContext->cfits->mapToRef(vv, sys, sky);
    setBinCursor();
  }
  update(MATRIX);
}

void FrameBase::zoomToFitCmd(double ss)
{
  // will center image on center of pixel
  // with even number pixels, it will be shifted

  if (keyContext->fits) {
    centerImage();

    Vector tt = imageSize(keyContext->secMode());

    // adjust image size to be odd (see above)
    double dd; // dummy
    if (!modf(tt[0]/2,&dd))
      tt[0] +=1;
    if (!modf(tt[1]/2,&dd))
      tt[1] +=1;

    double zz = calcZoom(tt,Vector(options->width,options->height)) * ss;
    zoom_ = Vector(zz,zz);
    update(MATRIX);
  }
}






