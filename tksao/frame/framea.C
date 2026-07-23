// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "framea.h"

#include "sigbus.h"

FrameA::FrameA(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item, int cnt)
: FrameBase(i,c,item)
{
  alignmentSystem = Coord::WCS;
  contextCount = cnt;

  channel = 0;

  context = new Context[contextCount];
  alignmentMatrix = new Matrix[contextCount];
  view = new int[contextCount];
  bias = new float[contextCount];
  contrast = new float[contextCount];

  for (int ii=0; ii<contextCount; ii++) {
    context[ii].parent(this);
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
  if (alignmentMatrix)
    delete [] alignmentMatrix;
  if (view)
    delete [] view;
  if (bias)
    delete [] bias;
  if (contrast)
    delete [] contrast;
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

  updateAlignmentMatrices();
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

  updateAlignmentMatrices();
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

  updateAlignmentMatrices();
}

int FrameA::doRender()
{
  for (int ii=0; ii<contextCount; ii++)
    if (context[ii].fits && view[ii])
      return 1;

  return 0;
}

void FrameA::getSystem()
{
  printCoordSystem(alignmentSystem);
}

void FrameA::getView()
{
  for (int ii=0; ii<contextCount; ii++)
    Tcl_AppendElement(interp, view[ii] ? "1" : "0");
}

BBox FrameA::imageBBox(FrScale::SecMode mode)
{
  // returns imageBBox in IMAGE coords
  //   and extends edge to edge

  updateAlignmentMatrices();

  BBox rr;
  int first=1;
  for (int ii=0; ii<contextCount; ii++) {
    if (context[ii].fits) {
      FitsImage* ptr = context[ii].fits;
      while (ptr) {
	FitsBound* params = ptr->getDataParams(mode);
	Matrix mm = ptr->wcsToRef() * alignmentMatrix[ii] * Translate(.5, .5);

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
  for (int ii=0; ii<contextCount; ii++)
    Base::pushMatrices(context[ii].fits, alignmentMatrix[ii]);
}

void FrameA::pushMagnifierMatrices()
{
  for (int ii=0; ii<contextCount; ii++)
    Base::pushMagnifierMatrices(context[ii].fits);
}

void FrameA::pushPannerMatrices()
{
  for (int ii=0; ii<contextCount; ii++)
    Base::pushPannerMatrices(context[ii].fits);
}

void FrameA::pushPSMatrices(float scale, int width, int height)
{
  for (int ii=0; ii<contextCount; ii++)
    Base::pushPSMatrices(context[ii].fits, scale, width, height);
}

void FrameA::reset()
{
  for (int ii=0; ii<contextCount; ii++) {
    bias[ii] = 0.5;
    contrast[ii] = 1.0;
    context[ii].resetSecMode();
    context[ii].updateClip();
  }

  Base::reset();
}

void FrameA::setBinCursor()
{
  for (int ii=0; ii<contextCount; ii++)
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
  alignmentSystem = sys;

  // save current matrix
  Matrix* old = new Matrix[contextCount];
  for (int ii=0; ii<contextCount; ii++)
    old[ii] = alignmentMatrix[ii];

  alignWCS();

  // fix any contours
  for (int ii=0; ii<contextCount; ii++) {
    Matrix mx = old[ii].invert() * alignmentMatrix[ii];
    context[ii].updateContours(mx);
  }
  delete [] old;

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

  alignmentMatrix[channel].identity();
  context[channel].unload();

  // always (for HISTEQU and LOG)
  updateColorScale();
}

void FrameA::unloadAllFits()
{
  if (DebugPerf)
    cerr << "FrameA::unloadAllFits()" << endl;

  for (int ii=0; ii<contextCount; ii++) {
    alignmentMatrix[ii].identity();
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

void FrameA::updateAlignmentMatrices()
{
  // image,pysical,amplifier,detector are ok, check for wcs
  if (alignmentSystem >= Coord::WCS) {
    for (int ii=0; ii<contextCount; ii++) {
      if (context[ii].fits && !context[ii].fits->hasWCS(alignmentSystem)) {
	// ok, don't have requested coordinate system
	// down grade to image
	alignmentSystem = Coord::IMAGE;
	break;
      }
    }
  }

  // align each context to the key context
  for (int ii=0; ii<contextCount; ii++) {
    alignmentMatrix[ii].identity();

    if (context[ii].fits && keyContext->fits) {
      switch (alignmentSystem) {
      case Coord::IMAGE:
	// nothing to do here
	break;
      case Coord::PHYSICAL:
	if (context[ii].fits != keyContext->fits) 
	  alignmentMatrix[ii] =
	    context[ii].fits->imageToPhysical *
	    keyContext->fits->physicalToImage;
	break;
      case Coord::AMPLIFIER:
	if (context[ii].fits != keyContext->fits) 
	  alignmentMatrix[ii] = context[ii].fits->imageToAmplifier *
	    keyContext->fits->amplifierToImage;
	break;
      case Coord::DETECTOR:
	if (context[ii].fits != keyContext->fits) 
	  alignmentMatrix[ii] = context[ii].fits->imageToDetector *
	    keyContext->fits->detectorToImage;
	break;
      default:
	if (keyContext->fits->hasWCS(alignmentSystem))
	  alignmentMatrix[ii] = calcAlignWCS(keyContext->fits, context[ii].fits, alignmentSystem, alignmentSystem, Coord::ICRS);
	break;
      }
    }

    if (DebugRGB) 
      cerr << "alignmentMatrix[" << ii << "] " << alignmentMatrix[ii] << endl;
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

void FrameA::getInfoCmd(const Vector& vv, Coord::InternalSystem ref,
			char* var, Base::FileNameType type)
{
  FrameBase::getInfoCmd(vv, ref, var, type);
  if (!currentContext->cfits)
    return;

  SETSIGBUS
  for (int ii=0; ii<contextCount; ii++) {

    // make sure we have an image
    FitsImage* sptr = context[ii].cfits;
    if (!sptr)
      continue;

    int mosaic = context[ii].isMosaic();
    FitsBound* params = sptr->getDataParams(context[ii].secMode());

    do {
      Vector3d rr = mapToRef(vv,ref);
      Vector img = Vector(rr) * sptr->refToData;

      if (img[0]>=params->xmin && img[0]<params->xmax && 
	  img[1]>=params->ymin && img[1]<params->ymax) {

	char array[32];
	snprintf(array, sizeof(array), "value,%d", ii+1);
	Tcl_SetVar2(interp,var,array,(char*)sptr->getValue(img),0);
	break;
      }
      else {
	if (mosaic) {
	  sptr = sptr->nextMosaic();
	  if (sptr)
	    params = sptr->getDataParams(context[ii].secMode());
	}
      }
    }
    while (mosaic && sptr);
  }
  CLEARSIGBUS
}
