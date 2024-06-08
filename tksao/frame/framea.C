// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "framea.h"

#include "sigbus.h"

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

void FrameA::getInfoCmd(const Vector& vv, Coord::InternalSystem ref,
			char* var, Base::FileNameType type)
{
  FrameBase::getInfoCmd(vv, ref, var, type);
  if (!currentContext->cfits)
    return;

  const char* array[3] = {"value,1","value,2","value,3"};

  SETSIGBUS
  for (int ii=0; ii<3; ii++) {

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

	Tcl_SetVar2(interp,var,array[ii],(char*)sptr->getValue(img),0);
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

void FrameA::loadDone(int rr)
{
  if (rr) {
    if (!keyContextSet) {
      keyContext = currentContext;
      keyContextSet =1;
    }
  }
  Base::loadDone(rr);
}

void FrameA::loadRGBCube(MemType which, const char* fn, FitsImage* img)
{
  if (!img || !img->isValid() || !(img->isImage() || img->isPost()) || (img->depth() != 3))
    goto error;

  context[0].bfits_ = img;

  if (img->isPost())
    which = POST;

  switch (which) {
  case ALLOC:
    if (context[0].bfits_ && context[0].bfits_->isValid())
      context[1].bfits_ = 
	new FitsImageFitsNextAlloc(&context[1], interp,
				   fn, context[0].bfits_->fitsFile(),2);
    if (context[1].bfits_ && context[1].bfits_->isValid())
      context[2].bfits_ = 
	new FitsImageFitsNextAlloc(&context[2], interp,
				   fn, context[1].bfits_->fitsFile(),3);
    break;
  case ALLOCGZ:
    if (context[0].bfits_ && context[0].bfits_->isValid())
      context[1].bfits_ = 
	new FitsImageFitsNextAllocGZ(&context[1], interp,
				     fn, context[0].bfits_->fitsFile(),2);
    if (context[1].bfits_ && context[1].bfits_->isValid())
      context[2].bfits_ = 
	new FitsImageFitsNextAllocGZ(&context[2], interp,
				     fn, context[1].bfits_->fitsFile(),3);
    break;
  case CHANNEL:
    if (context[0].bfits_ && context[0].bfits_->isValid())
      context[1].bfits_ = 
	new FitsImageFitsNextChannel(&context[1], interp,
				     fn, context[0].bfits_->fitsFile(),2);
    if (context[1].bfits_ && context[1].bfits_->isValid())
      context[2].bfits_ = 
	new FitsImageFitsNextChannel(&context[2], interp,
				     fn, context[1].bfits_->fitsFile(),3);
    break;
  case MMAP:
    if (context[0].bfits_ && context[0].bfits_->isValid())
      context[1].bfits_ = 
	new FitsImageFitsNextMMap(&context[1], interp,
				  fn, context[0].bfits_->fitsFile(),2);
    if (context[1].bfits_ && context[1].bfits_->isValid())
      context[2].bfits_ = 
	new FitsImageFitsNextMMap(&context[2], interp,
				  fn, context[1].bfits_->fitsFile(),3);
    break;
  case SMMAP:
    if (context[0].bfits_ && context[0].bfits_->isValid())
      context[1].bfits_ = 
	new FitsImageFitsNextSMMap(&context[1], interp,
				   fn, context[0].bfits_->fitsFile(),2);
    if (context[1].bfits_ && context[1].bfits_->isValid())
      context[2].bfits_ = 
	new FitsImageFitsNextSMMap(&context[2], interp,
				   fn, context[1].bfits_->fitsFile(),3);
    break;
  case MMAPINCR:
    if (context[0].bfits_ && context[0].bfits_->isValid())
      context[1].bfits_ = 
	new FitsImageFitsNextMMapIncr(&context[1], interp,
				      fn, context[0].bfits_->fitsFile(),2);
    if (context[1].bfits_ && context[1].bfits_->isValid())
      context[2].bfits_ = 
	new FitsImageFitsNextMMapIncr(&context[2], interp,
				      fn, context[1].bfits_->fitsFile(),3);
    break;
  case SHARE:
    if (context[0].bfits_ && context[0].bfits_->isValid())
      context[1].bfits_ = 
	new FitsImageFitsNextShare(&context[1], interp,
				   fn, context[0].bfits_->fitsFile(),2);
    if (context[1].bfits_ && context[1].bfits_->isValid())
      context[2].bfits_ = 
	new FitsImageFitsNextShare(&context[2], interp,
				   fn, context[1].bfits_->fitsFile(),3);
    break;
  case SSHARE:
    if (context[0].bfits_ && context[0].bfits_->isValid())
      context[1].bfits_ = 
	new FitsImageFitsNextSShare(&context[1], interp,
				    fn, context[0].bfits_->fitsFile(),2);
    if (context[1].bfits_ && context[1].bfits_->isValid())
      context[2].bfits_ = 
	new FitsImageFitsNextSShare(&context[2], interp,
				    fn, context[1].bfits_->fitsFile(),3);
    break;
  case SOCKET:
    if (context[0].bfits_ && context[0].bfits_->isValid())
      context[1].bfits_ = 
	new FitsImageFitsNextSocket(&context[1], interp,
				    fn, context[0].bfits_->fitsFile(),2);
    if (context[1].bfits_ && context[1].bfits_->isValid())
      context[2].bfits_ = 
	new FitsImageFitsNextSocket(&context[2], interp,
				    fn, context[1].bfits_->fitsFile(),3);
    break;
  case SOCKETGZ:
    if (context[0].bfits_ && context[0].bfits_->isValid())
      context[1].bfits_ = 
	new FitsImageFitsNextSocketGZ(&context[1], interp,
				      fn, context[0].bfits_->fitsFile(),2);
    if (context[1].bfits_ && context[1].bfits_->isValid())
      context[2].bfits_ = 
	new FitsImageFitsNextSocketGZ(&context[2], interp,
				      fn, context[1].bfits_->fitsFile(),3);
    break;
  case VAR:
    if (context[0].bfits_ && context[0].bfits_->isValid())
      context[1].bfits_ = 
	new FitsImageFitsNextVar(&context[1], interp,
				 fn, context[0].bfits_->fitsFile(),2);
    if (context[1].bfits_ && context[1].bfits_->isValid())
      context[2].bfits_ = 
	new FitsImageFitsNextVar(&context[2], interp,
				 fn, context[1].bfits_->fitsFile(),3);
    break;
  case POST:
    if (context[0].bfits_ && context[0].bfits_->isValid())
      context[1].bfits_ = 
	new FitsImageFitsNextPost(&context[1], interp,
				  img, context[0].bfits_->baseFile(),2);
    if (context[1].bfits_ && context[1].bfits_->isValid())
      context[2].bfits_ = 
	new FitsImageFitsNextPost(&context[2], interp,
				  img, context[1].bfits_->baseFile(),3);
    break;
  case PHOTO:
    if (context[0].bfits_ && context[0].bfits_->isValid())
      context[1].bfits_ = 
	new FitsImagePhotoCubeNext(&context[1], interp,
				   fn, context[0].bfits_->baseFile(),2);
    if (context[1].bfits_ && context[1].bfits_->isValid())
      context[2].bfits_ = 
	new FitsImagePhotoCubeNext(&context[2], interp,
				   fn, context[1].bfits_->baseFile(),3);
    break;
  default:
    // na
    break;
  }

  // is everything ok?
  if (context[0].bfits_ && context[0].bfits_->isValid() &&
      (context[0].bfits_->isImage() || context[0].bfits_->isPost()) &&
      context[1].bfits_ && context[1].bfits_->isValid() &&
      (context[1].bfits_->isImage() || context[1].bfits_->isPost()) &&
      context[2].bfits_ && context[2].bfits_->isValid() &&
      (context[2].bfits_->isImage() || context[2].bfits_->isPost())) {

    loadRGBCubeFinish();
    return;
  }

 error:
  context[0].unload();
  context[1].unload();
  context[2].unload();

  reset();
  updateColorScale();
    
  Tcl_AppendResult(interp, "Unable to load rgb cube file", NULL);
  result = TCL_ERROR;
  return;
}

void FrameA::loadRGBCubeFinish()
{
  for (int ii=0; ii<3; ii++) {
    context[ii].loadInit(1,NOMOSAIC,Coord::WCS);
    context[ii].loadFinish();
  }

  channel = 0;
  currentContext = &context[channel];
  keyContext = &context[channel];
  keyContextSet =1;

  alignWCS();
  if (!preservePan) {
    centerImage();
    // cursor is in REF, crosshair in REF
    crosshair = cursor;
  }
  updateColorScale();
  update(MATRIX);
}

void FrameA::loadRGBImage(MemType which, const char* fn, FitsImage* img)
{
  FitsImage* r = img;
  FitsImage* g = NULL;
  FitsImage* b = NULL;

  if (!img || !img->isValid() || !(img->isImage() || img->isPost()))
    goto error;

  switch (which) {
  case ALLOC:
    if (r && r->isValid())
      g = new FitsImageMosaicNextAlloc(&context[1], interp, 
				       fn, r->fitsFile(), 
				       FitsFile::NOFLUSH,1);
    if (g && g->isValid())
      b = new FitsImageMosaicNextAlloc(&context[2], interp, 
				       fn, g->fitsFile(), 
				       FitsFile::NOFLUSH,1);
    break;
  case ALLOCGZ:
    if (r && r->isValid())
      g = new FitsImageMosaicNextAllocGZ(&context[1], interp, 
					 fn, r->fitsFile(), 
					 FitsFile::NOFLUSH,1);
    if (g && g->isValid())
      b = new FitsImageMosaicNextAllocGZ(&context[2], interp, 
					 fn, g->fitsFile(), 
					 FitsFile::NOFLUSH,1);
    break;
  case CHANNEL:
    if (r && r->isValid())
      g = new FitsImageMosaicNextChannel(&context[1], interp, 
					 fn, r->fitsFile(), 
					 FitsFile::NOFLUSH,1);
    if (g && g->isValid())
      b = new FitsImageMosaicNextChannel(&context[2], interp, 
					 fn, g->fitsFile(), 
					 FitsFile::NOFLUSH,1);
    break;
  case MMAP:
    if (r && r->isValid())
      g = new FitsImageMosaicNextMMap(&context[1], interp, 
				      fn, r->fitsFile(),1);
    if (g && g->isValid())
      b = new FitsImageMosaicNextMMap(&context[2], interp, 
				      fn, g->fitsFile(),1);
    break;
  case MMAPINCR:
    if (r && r->isValid())
      g = new FitsImageMosaicNextMMapIncr(&context[1], interp, 
					  fn, r->fitsFile(),1);
    if (g && g->isValid())
      b = new FitsImageMosaicNextMMapIncr(&context[2], interp,
					  fn, g->fitsFile(),1);
    break;
  case SHARE:
    if (r && r->isValid())
      g = new FitsImageMosaicNextShare(&context[1], interp, 
				       fn, r->fitsFile(),1);
    if (g && g->isValid())
      b = new FitsImageMosaicNextShare(&context[2], interp, 
				       fn, g->fitsFile(),1);
    break;
  case SOCKET:
    if (r && r->isValid())
      g = new FitsImageMosaicNextSocket(&context[1], interp, 
					fn, r->fitsFile(), 
					FitsFile::FLUSH,1);
    if (g && g->isValid())
      b = new FitsImageMosaicNextSocket(&context[2], interp,
					fn,g->fitsFile(), 
					FitsFile::FLUSH,1);
    break;
  case SOCKETGZ:
    if (r && r->isValid())
      g = new FitsImageMosaicNextSocketGZ(&context[1], interp, 
					  fn, r->fitsFile(), 
					  FitsFile::FLUSH,1);
    if (g && g->isValid())
      b = new FitsImageMosaicNextSocketGZ(&context[2], interp,
					  fn, g->fitsFile(), 
					  FitsFile::FLUSH,1);
    break;
  case VAR:
    if (r && r->isValid())
      g = new FitsImageMosaicNextVar(&context[1], interp, 
				     fn, r->fitsFile(),1);
    if (g && g->isValid())
      b = new FitsImageMosaicNextVar(&context[2], interp, 
				     fn, g->fitsFile(),1);
    break;
  default:
    // na
    break;
  }

  // ok, figure out which is which channel
  context[0].bfits_ = context[1].bfits_ = context[2].bfits_ = NULL;

  {
    const char* ext = r->fitsFile()->extname();
    if (ext) {
      if (!strncmp(ext,"RED",3))
	context[0].bfits_ = r;
      else if (!strncmp(ext,"GREEN",3)) {
	context[1].bfits_ = r;
	r->setContext(&context[1]);
      }
      else if (!strncmp(ext,"BLUE",3)) {
	context[2].bfits_ = r;
	r->setContext(&context[2]);
      }
      else
	context[0].bfits_ = r;
    }
    else
      context[0].bfits_ = r;
  }

  {
    const char* ext = g->fitsFile()->extname();
    if (ext) {
      if (!strncmp(ext,"RED",3)) {
	context[0].bfits_ = g;
	g->setContext(&context[0]);
      }
      else if (!strncmp(ext,"GREEN",3))
	context[1].bfits_ = g;
      else if (!strncmp(ext,"BLUE",3)) {
	context[2].bfits_ = g;
	g->setContext(&context[3]);
      }
      else
	context[1].bfits_ = g;
    }
    else
      context[1].bfits_ = g;
  }

  {
    const char* ext = b->fitsFile()->extname();
    if (ext) {
      if (!strncmp(ext,"RED",3)) {
	context[0].bfits_ = b;
	b->setContext(&context[0]);
      }
      else if (!strncmp(ext,"GREEN",3)) {
	context[1].bfits_ = b;
	b->setContext(&context[1]);
      }
      else if (!strncmp(ext,"BLUE",3))
	context[2].bfits_ = b;
      else
	context[2].bfits_ = b;
    }
    else
      context[2].bfits_ = b;
  }

  // is everything ok?
  if (context[0].bfits_ && context[0].bfits_->isValid() && 
      (context[0].bfits_->isImage() || context[0].bfits_->isPost()) &&
      context[1].bfits_ && context[1].bfits_->isValid() && 
      (context[1].bfits_->isImage() || context[1].bfits_->isPost()) &&
      context[2].bfits_ && context[2].bfits_->isValid() && 
      (context[2].bfits_->isImage() || context[2].bfits_->isPost())) {

    loadRGBCubeFinish();
    return;
  }

 error:
  context[0].unload();
  context[1].unload();
  context[2].unload();

  reset();
  updateColorScale();
    
  Tcl_AppendResult(interp, "Unable to load rgb image file", NULL);
  result = TCL_ERROR;
  return;
}

// Photo

void FrameA::loadPhotoCmd(const char* ph, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImagePhotoCube(&context[0], interp, ph, fn, 1);
  loadRGBCube(ALLOC,fn,img);
}

// Cube FITS

void FrameA::loadRGBCubeAllocCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsAlloc(&context[0], interp,
					  ch, fn, FitsFile::NOFLUSH, 1);
  loadRGBCube(ALLOC,fn,img);
}

void FrameA::loadRGBCubeAllocGZCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsAllocGZ(&context[0], interp,
					    ch, fn, FitsFile::NOFLUSH, 1);
  loadRGBCube(ALLOCGZ,fn,img);
}

void FrameA::loadRGBCubeChannelCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsChannel(&context[0], interp, 
					    ch, fn, FitsFile::NOFLUSH, 1);
  loadRGBCube(CHANNEL,fn,img);
}

void FrameA::loadRGBCubeMMapCmd(const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsMMap(&context[0], interp, fn, 1);
  loadRGBCube(MMAP,fn,img);
}

void FrameA::loadRGBCubeSMMapCmd(const char* hdr, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsSMMap(&context[0], interp, hdr, fn, 1);
  loadRGBCube(SMMAP,fn,img);
}

void FrameA::loadRGBCubeMMapIncrCmd(const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsMMapIncr(&context[0], interp, fn, 1);
  loadRGBCube(MMAPINCR,fn,img);
}

void FrameA::loadRGBCubeShareCmd(ShmType type, int id, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsShare(&context[0], interp, type, id, fn, 1);
  loadRGBCube(SHARE,fn,img);
}

void FrameA::loadRGBCubeSShareCmd(ShmType type, int hdr, int id,
				    const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsSShare(&context[0], interp, 
					   type, hdr, id, fn, 1);
  loadRGBCube(SSHARE,fn,img);
}

void FrameA::loadRGBCubeSocketCmd(int s, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsSocket(&context[0], interp, 
					   s, fn, FitsFile::FLUSH, 1);
  loadRGBCube(SOCKET,fn,img);
}

void FrameA::loadRGBCubeSocketGZCmd(int s, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsSocketGZ(&context[0], interp, 
					     s, fn, FitsFile::FLUSH, 1);
  loadRGBCube(SOCKETGZ,fn,img);
}

void FrameA::loadRGBCubeVarCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsVar(&context[0], interp, ch, fn, 1);
  loadRGBCube(VAR,fn,img);
}

// RGBImage FITS

void FrameA::loadRGBImageAllocCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageMosaicAlloc(&context[0], interp, 
					    ch, fn, FitsFile::NOFLUSH, 1);
  loadRGBImage(ALLOC,fn,img);
}

void FrameA::loadRGBImageAllocGZCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageMosaicAllocGZ(&context[0], interp,
					      ch, fn, FitsFile::NOFLUSH, 1);
  loadRGBImage(ALLOCGZ,fn,img);
}

void FrameA::loadRGBImageChannelCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageMosaicChannel(&context[0], interp, 
					      ch, fn, FitsFile::NOFLUSH, 1);
  loadRGBImage(CHANNEL,fn,img);
}

void FrameA::loadRGBImageMMapCmd(const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageMosaicMMap(&context[0], interp, fn, 1);
  loadRGBImage(MMAP,fn,img);
}

void FrameA::loadRGBImageMMapIncrCmd(const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageMosaicMMapIncr(&context[0], interp, fn, 1);
  loadRGBImage(MMAPINCR,fn,img);
}

void FrameA::loadRGBImageShareCmd(ShmType type, int id, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageMosaicShare(&context[0], interp, 
					    type, id, fn, 1);
  loadRGBImage(SHARE,fn,img);
}

void FrameA::loadRGBImageSocketCmd(int s, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageMosaicSocket(&context[0], interp, 
					     s, fn, FitsFile::FLUSH, 1);
  loadRGBImage(SOCKET,fn,img);
}

void FrameA::loadRGBImageSocketGZCmd(int s, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageMosaicSocketGZ(&context[0], interp, 
					       s, fn, FitsFile::FLUSH, 1);
  loadRGBImage(SOCKETGZ,fn,img);
}

void FrameA::loadRGBImageVarCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageMosaicVar(&context[0], interp, ch, fn, 1);
  loadRGBImage(VAR,fn,img);
}

// Cube Array

void FrameA::loadRGBArrayCubeAllocCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageArrAlloc(&context[0], interp,
					 ch, fn, FitsFile::NOFLUSH, 1);
  loadRGBCube(ALLOC,fn,img);
}

void FrameA::loadRGBArrayCubeAllocGZCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageArrAllocGZ(&context[0], interp,
					   ch, fn, FitsFile::NOFLUSH, 1);
  loadRGBCube(ALLOCGZ,fn,img);
}

void FrameA::loadRGBArrayCubeChannelCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageArrChannel(&context[0], interp, ch, fn, 
					   FitsFile::NOFLUSH, 1);
  loadRGBCube(CHANNEL,fn,img);
}

void FrameA::loadRGBArrayCubeMMapCmd(const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageArrMMap(&context[0], interp, fn, 1);
  loadRGBCube(MMAP,fn,img);
}

void FrameA::loadRGBArrayCubeMMapIncrCmd(const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageArrMMapIncr(&context[0], interp, fn, 1);
  loadRGBCube(MMAPINCR,fn,img);
}

void FrameA::loadRGBArrayCubeShareCmd(ShmType type, int id, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageArrShare(&context[0], interp,
					 type, id, fn, 1);
  loadRGBCube(SHARE,fn,img);
}

void FrameA::loadRGBArrayCubeSocketCmd(int s, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageArrSocket(&context[0], interp,
					  s, fn, FitsFile::FLUSH, 1);
  loadRGBCube(SOCKET,fn,img);
}

void FrameA::loadRGBArrayCubeSocketGZCmd(int s, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageArrSocketGZ(&context[0], interp,
					    s, fn, FitsFile::FLUSH, 1);
  loadRGBCube(SOCKETGZ,fn,img);
}

void FrameA::loadRGBArrayCubeVarCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageArrVar(&context[0], interp, ch, fn, 1);
  loadRGBCube(VAR,fn,img);
}

