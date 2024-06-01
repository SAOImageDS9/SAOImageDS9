// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "framea.h"

FrameA::FrameA(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item)
: FrameBase(i,c,item)
{
  rgbSystem = Coord::WCS;

  channel = 0;

  context = new Context[3];
  context[0].parent(this);
  context[1].parent(this);
  context[2].parent(this);

  for (int ii=0; ii<3; ii++) {
    view[ii] = 1;
    bias[ii] = .5;
    contrast[ii] = 1.0;
  }

  currentContext = &context[channel];
  keyContext = &context[channel];
  keyContextSet =0;
}

FrameA::~FrameA()
{
  if (context)
    delete [] context;
}

void FrameA::alignWCS()
{
  if (!wcsAlign_ || !(keyContext->fits) || !keyContext->fits->hasWCS(wcsSystem_)) {
    wcsOrientation = Coord::NORMAL;
    wcsOrientationMatrix.identity();
    wcsRotation = 0;
  }
  else
    calcAlignWCS(keyContext->fits, wcsSystem_, wcsSkyFrame_,
		 &wcsOrientation, &wcsOrientationMatrix, &wcsRotation);

  updateRGBMatrices();
}   

void FrameA::alignWCS(Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  if (!wcsAlign_ || !(keyContext->fits) || !keyContext->fits->hasWCS(sys)) {
    wcsOrientation = Coord::NORMAL;
    wcsOrientationMatrix.identity();
    wcsRotation = 0;
  }
  else
    calcAlignWCS(keyContext->fits, sys, sky,
		 &wcsOrientation, &wcsOrientationMatrix, &wcsRotation);

  updateRGBMatrices();
}

void FrameA::alignWCS(FitsImage* ptr, Coord::CoordSystem sys)
{
  if (!wcsAlign_ || !(keyContext->fits) || !ptr || 
      !keyContext->fits->hasWCS(wcsSystem_)) {
    wcsOrientation = Coord::NORMAL;
    wcsOrientationMatrix.identity();
    wcsRotation = 0;
  }
  else {
    // This calcs the wcs
    calcAlignWCS(keyContext->fits, sys, wcsSkyFrame_,
		 &wcsOrientation, &wcsOrientationMatrix, &wcsRotation);

    // and this the zoom
    Matrix mm = calcAlignWCS(ptr, keyContext->fits, sys,
			     wcsSystem_, wcsSkyFrame_);

    // if no linear fit, we get all 0's
    if (mm[0][0] != 0 && mm[1][1] !=0) {
      Vector ff = Vector(Vector(mm[0][0],mm[1][0]).length(), Vector(mm[0][1],mm[1][1]).length());
      zoom_ = Vector(zoom_[0]*ff[0], zoom_[1]*ff[1]);
    }
  }

  updateRGBMatrices();
}

int FrameA::doRender()
{
  return ((context[0].fits&&view[0]) || 
	  (context[1].fits&&view[1]) || 
	  (context[2].fits&&view[2]));
}

void FrameA::getSystem()
{
  printCoordSystem(rgbSystem);
}

void FrameA::getView()
{
  for (int ii=0; ii<3; ii++)
    Tcl_AppendElement(interp, view[ii] ? "1" : "0");
}

BBox FrameA::imageBBox(FrScale::SecMode mode)
{
  // returns imageBBox in IMAGE coords
  //   and extends edge to edge

  updateRGBMatrices();

  BBox rr;
  int first=1;
  for (int ii=0; ii<3; ii++) {
    if (context[ii].fits) {
      FitsImage* ptr = context[ii].fits;
      while (ptr) {
	FitsBound* params = ptr->getDataParams(mode);
	Matrix mm = ptr->wcsToRef() * rgb[ii] * Translate(.5, .5);

	Vector aa = Vector(params->xmin,params->ymin) * mm;
	if (first) {
	  rr = BBox(aa,aa);
	  first = 0;
	}
	else
	  rr.bound(aa);

	rr.bound(Vector(params->xmax,params->ymin) * mm);
	rr.bound(Vector(params->xmax,params->ymax) * mm);
	rr.bound(Vector(params->xmin,params->ymax) * mm);

	ptr = ptr->nextMosaic();
      }
    }
  }

  return rr;
}

void FrameA::pushMatrices()
{
  for (int ii=0; ii<3; ii++)
    Base::pushMatrices(context[ii].fits, rgb[ii]);
}

void FrameA::pushMagnifierMatrices()
{
  for (int ii=0; ii<3; ii++)
    Base::pushMagnifierMatrices(context[ii].fits);
}

void FrameA::pushPannerMatrices()
{
  for (int ii=0; ii<3; ii++)
    Base::pushPannerMatrices(context[ii].fits);
}

void FrameA::pushPSMatrices(float scale, int width, int height)
{
  for (int ii=0; ii<3; ii++)
    Base::pushPSMatrices(context[ii].fits, scale, width, height);
}

void FrameA::reset()
{
  for (int ii=0; ii<3; ii++) {
    bias[ii] = 0.5;
    contrast[ii] = 1.0;
    context[ii].resetSecMode();
    context[ii].updateClip();
  }

  Base::reset();
}

void FrameA::setBinCursor()
{
  for (int ii=0; ii<3; ii++)
    if (context[ii].fits)
      context[ii].fits->setBinCursor(cursor);
}

void FrameA::setChannel()
{
  currentContext = &context[channel];

  // execute any update callbacks
  updateCBMarkers(&userMarkers);
  updateCBMarkers(&catalogMarkers);
  updateCBMarkers(&footprintMarkers);

 // always update
  update(BASE);
}

void FrameA::setSystem(Coord::CoordSystem sys)
{
  rgbSystem = sys;

  // save current matrix
  Matrix old[3];
  for (int ii=0; ii<3; ii++)
    old[ii] = rgb[ii];

  alignWCS();

  // fix any contours
  for (int ii=0; ii<3; ii++) {
    Matrix mx = old[ii].invert() * rgb[ii];
    context[ii].updateContours(mx);
  }

  update(MATRIX);
}

void FrameA::setView(int a, int b, int c)
{
  view[0] = a ? 1 : 0;
  view[1] = b ? 1 : 0;
  view[2] = c ? 1 : 0;

  update(BASE); // always update
}

void FrameA::unloadFits()
{
  if (DebugPerf)
    cerr << "FrameA::unloadFits()" << endl;

  rgb[channel].identity();
  context[channel].unload();

  // always (for HISTEQU and LOG)
  updateColorScale();
}

void FrameA::unloadAllFits()
{
  if (DebugPerf)
    cerr << "FrameA::unloadAllFits()" << endl;

  for (int ii=0; ii<3; ii++) {
    rgb[ii].identity();
    context[ii].unload();

    // always (for HISTEQU and LOG)
    updateColorScale();
  }

  channel =0;
  currentContext = &context[channel];
  keyContext = &context[channel];
  keyContextSet =0;

  Base::unloadFits();
}

void FrameA::updateRGBMatrices()
{
  // image,pysical,amplifier,detector are ok, check for wcs
  if (rgbSystem >= Coord::WCS) {
    for (int ii=0; ii<3; ii++) {
      if (context[ii].fits && !context[ii].fits->hasWCS(rgbSystem)) {
	// ok, don't have requested coordinate system
	// down grade to image
	rgbSystem = Coord::IMAGE;
	break;
      }
    }
  }

  // rgb align
  for (int ii=0; ii<3; ii++) {
    rgb[ii].identity();

    if (context[ii].fits && keyContext->fits) {
      switch (rgbSystem) {
      case Coord::IMAGE:
	// nothing to do here
	break;
      case Coord::PHYSICAL:
	if (context[ii].fits != keyContext->fits) 
	  rgb[ii] = 
	    context[ii].fits->imageToPhysical *
	    keyContext->fits->physicalToImage;
	break;
      case Coord::AMPLIFIER:
	if (context[ii].fits != keyContext->fits) 
	  rgb[ii] = context[ii].fits->imageToAmplifier *
	    keyContext->fits->amplifierToImage;
	break;
      case Coord::DETECTOR:
	if (context[ii].fits != keyContext->fits) 
	  rgb[ii] = context[ii].fits->imageToDetector * 
	    keyContext->fits->detectorToImage;
	break;
      default:
	if (keyContext->fits->hasWCS(rgbSystem))
	  rgb[ii] = calcAlignWCS(keyContext->fits, context[ii].fits, rgbSystem, rgbSystem, Coord::FK5);
	break;
      }
    }

    if (DebugRGB) 
      cerr << "rgb[" << ii << "] " << rgb[ii] << endl;
  }
}

// Commands

void FrameA::colormapCmd(float rb, float gb, float bb, 
			 float rc, float gc, float bc, int i, int cnt)
{
  bias[0] = rb;
  bias[1] = gb;
  bias[2] = bb;
  contrast[0] = rc;
  contrast[1] = gc;
  contrast[2] = bc;
  invert = i;

  updateColorCells(cnt);
  updateColorScale();
  update(BASE);
}


