// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tkInt.h>

#include "util.h"
#include "frame.h"
#include "fitsimage.h"
#include "analysis.h"

#include "sigbus.h"

// Frame Member Functions

Frame::Frame(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item) 
  : FrameBase(i,c,item)
{
  context = new Context();
  context->parent(this);

  currentContext = context;
  keyContext = context;
  
  colormapData =NULL;

  cmapID = 1;
  bias = 0.5;
  contrast = 1.0;

  colorCount = 0;
  colorScale = NULL;
  colorCells = NULL;

  maskColorName = dupstr("red");
  maskAlpha = 1;
  maskBlend = FitsMask::SCREEN;
  maskMark = FitsMask::NONZERO;
  maskLow = 0;
  maskHigh = 0;
  maskSystem = Coord::WCS;
}

Frame::~Frame()
{
  if (context)
    delete context;

  if (colorScale)
    delete colorScale;

  if (colorCells)
    delete [] colorCells;

  if (colormapData)
    delete [] colormapData;

  if (maskColorName)
    delete [] maskColorName;
}

void Frame::alignWCS() {
  Base::alignWCS();
  updateMaskMatrices();
}

unsigned char* Frame::alphaComposite(unsigned char* src, unsigned char* msk,
				     int width, int height)
{
  unsigned char* sptr = src; // 3 component
  unsigned char* mptr = msk; // 4 component
  float aa = 1-maskAlpha;

  for (int jj=0; jj<height; jj++) {
    for (int ii=0; ii<width; ii++) {
      if (*(mptr+3)) {
	*sptr = (*sptr*aa) + (*mptr++ *maskAlpha);
	sptr++;
	*sptr = (*sptr*aa) + (*mptr++ *maskAlpha);
	sptr++;
	*sptr = (*sptr*aa) + (*mptr++ *maskAlpha);
	sptr++;

	mptr++;
      }
      else {
	mptr+=4;
	sptr+=3;
      }
    }
  }

  return src;
}

unsigned char* Frame::blendSourceMask(unsigned char* dest,
				      unsigned char* src, unsigned char* bg,
				      int width, int height)
{
  unsigned char* dptr = dest; // 4 component
  unsigned char* sptr = src; // 4 component
  unsigned char* bptr = bg; // 4 component

  for (int jj=0; jj<height; jj++) {
    for (int ii=0; ii<width; ii++) {
      if (*(sptr+3)) {
	*dptr++ = *sptr++;
	*dptr++ = *sptr++;
	*dptr++ = *sptr++;
	*dptr++ = *sptr++;
	bptr+=4;
      }
      else {
	*dptr++ = *bptr++;
	*dptr++ = *bptr++;
	*dptr++ = *bptr++;
	*dptr++ = *bptr++;
	sptr+=4;
      }
    }
  }

  return dest;
}

unsigned char* Frame::blendScreenMask(unsigned char* dest,
				      unsigned char* src, unsigned char* bg,
				      int width, int height)
{
  unsigned char* dptr = dest; // 4 component
  unsigned char* sptr = src; // 4 component
  unsigned char* bptr = bg; // 4 component

  for (int jj=0; jj<height; jj++) {
    for (int ii=0; ii<width; ii++) {
      if (*(sptr+3)) {
	*dptr++ = blendScreenColor(*sptr++,*bptr++);
	*dptr++ = blendScreenColor(*sptr++,*bptr++);
	*dptr++ = blendScreenColor(*sptr++,*bptr++);

	*dptr++ = *sptr++;
	bptr++;
      }
      else {
	*dptr++ = *bptr++;
	*dptr++ = *bptr++;
	*dptr++ = *bptr++;
	*dptr++ = *bptr++;
	sptr+=4;
      }
    }
  }

  return dest;
}

unsigned char Frame::blendScreenColor(unsigned char src, unsigned char bg)
{
  float sm = src/255.;
  float bm = bg/255.;
  float rr = (bm+sm - bm*sm) * 255.;
  return (unsigned char)rr;
}

unsigned char* Frame::blendDarkenMask(unsigned char* dest,
				      unsigned char* src, unsigned char* bg,
				      int width, int height)
{
  unsigned char* dptr = dest; // 4 component
  unsigned char* sptr = src; // 4 component
  unsigned char* bptr = bg; // 4 component

  for (int jj=0; jj<height; jj++) {
    for (int ii=0; ii<width; ii++) {
      if (*(sptr+3)) {
	*dptr++ = min(*sptr++,*bptr++);
	*dptr++ = min(*sptr++,*bptr++);
	*dptr++ = min(*sptr++,*bptr++);
	*dptr++ = *sptr++;
	bptr++;
      }
      else {
	*dptr++ = *bptr++;
	*dptr++ = *bptr++;
	*dptr++ = *bptr++;
	*dptr++ = *bptr++;
	sptr+=4;
      }
    }
  }

  return dest;
}

unsigned char* Frame::blendLightenMask(unsigned char* dest,
				       unsigned char* src, unsigned char* bg,
				       int width, int height)
{
  unsigned char* dptr = dest; // 4 component
  unsigned char* sptr = src; // 4 component
  unsigned char* bptr = bg; // 4 component

  for (int jj=0; jj<height; jj++) {
    for (int ii=0; ii<width; ii++) {
      if (*(sptr+3)) {
	*dptr++ = max(*sptr++,*bptr++);
	*dptr++ = max(*sptr++,*bptr++);
	*dptr++ = max(*sptr++,*bptr++);
	*dptr++ = *sptr++;
	bptr++;
      }
      else {
	*dptr++ = *bptr++;
	*dptr++ = *bptr++;
	*dptr++ = *bptr++;
	*dptr++ = *bptr++;
	sptr+=4;
      }
    }
  }

  return dest;
}

unsigned char* Frame::fillImage(int width, int height, 
				Coord::InternalSystem sys)
{
  // img
  XColor* bgColor = useBgColor? getXColor(bgColourName) :
    ((WidgetOptions*)options)->bgColor;
  XColor* nanColor = getXColor(nanColourName);
  unsigned char* img = new unsigned char[width*height*3];
  {
    unsigned char* ptr = img;
    for (int jj=0; jj<height; jj++)
      for (int ii=0; ii<width; ii++) {
	*ptr++ = (unsigned char)bgColor->red;
	*ptr++ = (unsigned char)bgColor->green;
	*ptr++ = (unsigned char)bgColor->blue;
      }	
  }

  if (!context->cfits)
    return img;

  // basics
  int length = colorScale->size() - 1;
  const unsigned char* table = colorScale->psColors();

  FitsImage* sptr = context->cfits;
  int mosaic = isMosaic();

  // variable
  double* mm = sptr->matrixToData(sys).mm();
  FitsBound* params = sptr->getDataParams(context->secMode());
  int srcw = sptr->width();

  double ll = sptr->low();
  double hh = sptr->high();
  double diff = hh - ll;

  // main loop
  unsigned char* dest = img;

  SETSIGBUS
  for (long jj=0; jj<height; jj++) {
    for (long ii=0; ii<width; ii++, dest+=3) {
      if (mosaic) {
	sptr = context->cfits;

	mm = sptr->matrixToData(sys).mm();
	params = sptr->getDataParams(context->secMode());
	srcw = sptr->width();

	ll = sptr->low();
	hh = sptr->high();
	diff = hh - ll;
      }

      do {
	double xx = ii*mm[0] + jj*mm[3] + mm[6];
	double yy = ii*mm[1] + jj*mm[4] + mm[7];

	if (xx>=params->xmin && xx<params->xmax && 
	    yy>=params->ymin && yy<params->ymax) {
	  double value = sptr->getValueDouble(long(yy)*srcw + long(xx));

	  if (isfinite(diff) && isfinite(value)) {
	    if (value <= ll) {
	      *(dest+2) = table[0];
	      *(dest+1) = table[1];
	      *dest = table[2];
	    }
	    else if (value >= hh) {
	      *(dest+2) = table[length*3];
	      *(dest+1) = table[length*3+1];
	      *dest = table[length*3+2];
	    }
	    else {
	      int l = (int)(((value - ll)/diff * length) + .5);
	      *(dest+2) = table[l*3];
	      *(dest+1) = table[l*3+1];
	      *dest = table[l*3+2];
	    }
	  }
	  else {
	    *(dest+2) = nanColor->blue;
	    *(dest+1) = nanColor->green;
	    *dest = nanColor->red;
	  }

	  break;
	}
	else {
	  if (mosaic) {
	    sptr = sptr->nextMosaic();

	    if (sptr) {
	      mm = sptr->matrixToData(sys).mm();
	      params = sptr->getDataParams(context->secMode());
	      srcw = sptr->width();

	      ll = sptr->low();
	      hh = sptr->high();
	      diff = hh - ll;
	    }
	  }
	}
      }
      while (mosaic && sptr);
    }
  }
  CLEARSIGBUS

  if (img) {
    switch (mask.count()) {
    case 0:
      break;
    case 1:
      {
	FitsMask* mptr = mask.head();
	unsigned char* msk = fillMask(mptr, width, height, sys);
	alphaComposite(img,msk,width,height);
	delete [] msk;
      }
      break;
    default:
      {
	FitsMask* mptr = mask.head();
	unsigned char* src =NULL;
	unsigned char* bg = fillMask(mptr, width, height, sys);
	unsigned char* msk =NULL;

	mptr = mptr->next();
	while (mptr) {
	  msk = new unsigned char[width*height*4];
	  memset(msk,0,width*height*4);
	  src = fillMask(mptr, width, height, sys);
	
	  switch (maskBlend) {
	  case FitsMask::SOURCE:
	    blendSourceMask(msk,src,bg,width,height);
	    break;
	  case FitsMask::SCREEN:
	    blendScreenMask(msk,src,bg,width,height);
	    break;
	  case FitsMask::DARKEN:
	    blendDarkenMask(msk,src,bg,width,height);
	    break;
	  case FitsMask::LIGHTEN:
	    blendLightenMask(msk,src,bg,width,height);
	    break;
	  }

	  delete [] bg;
	  delete [] src;

	  bg = msk;
	  mptr = mptr->next();
	}

	alphaComposite(img,msk,width,height);
	delete [] msk;
      }
      break;
    }
  }

  return img;
}

unsigned char* Frame::fillMask(FitsMask* msk, int width, int height,
			       Coord::InternalSystem sys)
{
  // img
  unsigned char* img = new unsigned char[width*height*4];
  memset(img,0,width*height*4);

  Context* cc = msk->context();
  FitsImage* currentMsk = cc->fits;
  FitsMask::MaskType mark = msk->mark();
  double low = msk->low();
  double high = msk->high();

  XColor* maskColor = getXColor(msk->colorName());

  if (!currentMsk)
    return img;

  // basics
  FitsImage* sptr = currentMsk;
  int mosaic = cc->isMosaic();

  // variable
  double* mm = sptr->matrixToData(sys).mm();
  FitsBound* params = sptr->getDataParams(cc->secMode());
  int srcw = sptr->width();

  // main loop
  unsigned char* dest = img;

  SETSIGBUS
  for (long jj=0; jj<height; jj++) {
    for (long ii=0; ii<width; ii++, dest+=4) {

      if (mosaic) {
	sptr = currentMsk;

	mm = sptr->matrixToData(sys).mm();
	params = sptr->getDataParams(cc->secMode());
	srcw = sptr->width();
      }

      do {
	double xx = ii*mm[0] + jj*mm[3] + mm[6];
	double yy = ii*mm[1] + jj*mm[4] + mm[7];

	if (xx>=params->xmin && xx<params->xmax && 
	    yy>=params->ymin && yy<params->ymax) {
	  float value = sptr->getValueFloat(long(yy)*srcw + long(xx));

	  switch (mark) {
	  case FitsMask::ZERO:
	    if (value==0) {
	      *dest = ((unsigned char)maskColor->red);
	      *(dest+1) = ((unsigned char)maskColor->green);
	      *(dest+2) = ((unsigned char)maskColor->blue);
	      *(dest+3) = 1;
	    }
	    break;
	  case FitsMask::NONZERO:
	    if (value!=0) {
	      *dest = ((unsigned char)maskColor->red);
	      *(dest+1) = ((unsigned char)maskColor->green);
	      *(dest+2) = ((unsigned char)maskColor->blue);
	      *(dest+3) = 1;
	    }
	    break;
	  case FitsMask::NaN:
	    if (isnan(value) || isinf(value)) {
	      *dest = ((unsigned char)maskColor->red);
	      *(dest+1) = ((unsigned char)maskColor->green);
	      *(dest+2) = ((unsigned char)maskColor->blue);
	      *(dest+3) = 1;
	    }
	    break;
	  case FitsMask::NONNaN:
	    if (!isnan(value) && !isinf(value)) {
	      *dest = ((unsigned char)maskColor->red);
	      *(dest+1) = ((unsigned char)maskColor->green);
	      *(dest+2) = ((unsigned char)maskColor->blue);
	      *(dest+3) = 1;
	    }
	    break;
	  case FitsMask::RANGE:
	    if (value>=low && value<=high) {
	      *dest = ((unsigned char)maskColor->red);
	      *(dest+1) = ((unsigned char)maskColor->green);
	      *(dest+2) = ((unsigned char)maskColor->blue);
	      *(dest+3) = 1;
	    }
	    break;
	  }

	  break;
	}
	else {
	  if (mosaic) {
	    sptr = sptr->nextMosaic();

	    if (sptr) {
	      mm = sptr->matrixToData(sys).mm();
	      params = sptr->getDataParams(cc->secMode());
	      srcw = sptr->width();
	    }
	  }
	}
      }
      while (mosaic && sptr);
    }
  }
  CLEARSIGBUS

  return img;
}

int Frame::isIIS() 
{
  return context->cfits && context->cfits->isIIS();
}

void Frame::pushMatrices()
{
  // alway identity
  Matrix rgbToRef; 
  Base::pushMatrices(keyContext->fits, rgbToRef);

  // now any masks
  FitsMask* msk = mask.tail();
  while (msk) {
    Base::pushMatrices(msk->context()->fits, msk->mm());
    msk = msk->previous();
  }
}

void Frame::pushMagnifierMatrices()
{
  Base::pushMagnifierMatrices(keyContext->fits);

  // now any masks
  FitsMask* msk = mask.tail();
  while (msk) {
    Base::pushMagnifierMatrices(msk->context()->fits);
    msk = msk->previous();
  }
}

void Frame::pushPannerMatrices()
{
  Base::pushPannerMatrices(keyContext->fits);

  // now any masks
  FitsMask* msk = mask.tail();
  while (msk) {
    Base::pushPannerMatrices(msk->context()->fits);
    msk = msk->previous();
  }
}

void Frame::pushPSMatrices(float scale, int width, int height)
{
  Base::pushPSMatrices(keyContext->fits, scale, width, height);

  // now any masks
  FitsMask* msk = mask.tail();
  while (msk) {
    Base::pushPSMatrices(msk->context()->fits, scale, width, height);
    msk = msk->previous();
  }
}

void Frame::reset()
{
  // don't change cmap
  // cmapID = 1;
  //  bias = 0.5;
  //  contrast = 1.0;
  context->resetSecMode();
  context->updateClip();
  
  Base::reset();
}

void Frame::updateColorCells(unsigned char* cells, int cnt)
{
  colorCount = cnt;
  if (colorCells)
    delete [] colorCells;
  colorCells = new unsigned char[cnt*3];
  if (!colorCells) {
    internalError("Unable to Alloc colorCells");
    return;
  }
  memcpy(colorCells, cells, cnt*3);
}

void Frame::updateMaskMatrices()
{
  // image,pysical,amplifier,detector are ok, check for wcs
  if (maskSystem >= Coord::WCS) {
    FitsMask* mptr = mask.head();
    while (mptr) {
      if (mptr->context()->fits && !mptr->context()->fits->hasWCS(maskSystem)) {
	maskSystem = Coord::IMAGE;
	break;
      }
      mptr = mptr->next();
    }
  }

  // mask align
  FitsMask* mptr = mask.head();
  while (mptr) {
    mptr->mm().identity();
    if (mptr->context()->fits && keyContext->fits) {
      switch (maskSystem) {
      case Coord::IMAGE:
	// nothing to do here
	break;
      case Coord::PHYSICAL:
	mptr->mm() = mptr->context()->fits->imageToPhysical *
	  keyContext->fits->physicalToImage;
	break;
      case Coord::AMPLIFIER:
	mptr->mm() = mptr->context()->fits->imageToAmplifier *
	  keyContext->fits->amplifierToImage;
	break;
      case Coord::DETECTOR:
	mptr->mm() = mptr->context()->fits->imageToDetector *
	  keyContext->fits->detectorToImage;
	break;
      default:
	mptr->mm() = calcAlignWCS(keyContext->fits, mptr->context()->fits,
				  maskSystem, maskSystem, Coord::FK5);
	break;
      }
    }
    mptr = mptr->next();
  }
}

void Frame::unloadFits()
{
  if (DebugPerf)
    cerr << "Frame::unloadFits()" << endl;

  // clean up from iis if needed
  if (isIIS())
    context->resetIIS();

  context->unload();

  // delete any masks
  mask.deleteAll();

  Base::unloadFits();
}

// Commands

void Frame::getMaskColorCmd()
{
  Tcl_AppendResult(interp, maskColorName, NULL);
}

void Frame::getMaskMarkCmd()
{
  switch (maskMark) {
  case FitsMask::ZERO:
    Tcl_AppendResult(interp, "zero", NULL);
    break;
  case FitsMask::NONZERO:
    Tcl_AppendResult(interp, "nonzero", NULL);
    break;
  case FitsMask::NaN:
    Tcl_AppendResult(interp, "nan", NULL);
    break;
  case FitsMask::NONNaN:
    Tcl_AppendResult(interp, "nonnan", NULL);
    break;
  case FitsMask::RANGE:
    Tcl_AppendResult(interp, "range", NULL);
    break;
  }
}

void Frame::getMaskRangeCmd()
{
  ostringstream str;
  str << maskLow << ' ' << maskHigh << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Frame::getMaskSystemCmd()
{
  printCoordSystem(maskSystem);
}

void Frame::getMaskTransparencyCmd()
{
  printDouble((1-maskAlpha)*100.);
}

void Frame::getMaskBlendCmd()
{
  switch (maskBlend) {
  case FitsMask::SOURCE:
    Tcl_AppendResult(interp, "source", NULL);
    break;
  case FitsMask::SCREEN:
    Tcl_AppendResult(interp, "screen", NULL);
    break;
  case FitsMask::DARKEN:
    Tcl_AppendResult(interp, "darken", NULL);
    break;
  case FitsMask::LIGHTEN:
    Tcl_AppendResult(interp, "lighten", NULL);
    break;
  }
}

void Frame::maskClearCmd()
{
  mask.deleteAll();
  update(BASE);
}

void Frame::getMaskCountCmd()
{
  printInteger(mask.count());
}

void Frame::maskColorCmd(const char* color)
{
  if (maskColorName)
    delete [] maskColorName;

  maskColorName = dupstr(color);
}

void Frame::maskSystemCmd(Coord::CoordSystem sys)
{
  maskSystem = sys;
  updateMaskMatrices();
  update(MATRIX);
}

void Frame::maskTransparencyCmd(float tt)
{
  maskAlpha = 1-(tt/100.);
  update(BASE);
}

void Frame::maskBlendCmd(FitsMask::MaskBlend bl)
{
  maskBlend =bl;
  update(BASE);
}

void Frame::colormapCmd(int id, float b, float c, int i, 
				 unsigned char* cells, int cnt)
{
  cmapID = id;
  bias = b;
  contrast = c;
  invert = i;

  updateColorCells(cells, cnt);
  updateColorScale();
  update(BASE);
}

#ifndef MAC_OSX_TK

void Frame::colormapBeginCmd()
{
  // we need a colorScale before we can render
  if (!validColorScale())
    return;

  // we need some fits data
  // we assume the colorScale length will not change during motion calls
  if (!context->cfits)
    return;

  int width = options->width;
  int height = options->height;

  // Create XImage
  if (!(colormapXM = XGetImage(display, pixmap, 0, 0,
			       width, height, AllPlanes, ZPixmap))) {
    internalError("Unable to Create Colormap XImage");
    return;
  }

  // Create Pixmap
  colormapPM =
    Tk_GetPixmap(display, Tk_WindowId(tkwin), width, height, depth);
  if (!colormapPM) {
    internalError("Unable to Create Colormap Pixmap");
    return;
  }

  // colormapGCXOR
  colormapGCXOR = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);

  // Create table index array
  if (colormapData)
    delete [] colormapData;
  colormapData = new long[width*height];
  if (!colormapData) {
    internalError("Unable to alloc tmp data array");
    return;
  }

  // fill data array
  // basics
  int bytesPerPixel = colormapXM->bits_per_pixel/8;

  int length = colorScale->size() - 1;
  int last = length * bytesPerPixel;

  FitsImage* sptr = context->cfits;
  int mosaic = isMosaic();

  long* dest = colormapData;

  // variable
  double* mm = sptr->matrixToData(Coord::WIDGET).mm();
  FitsBound* params = sptr->getDataParams(context->secMode());
  int srcw = sptr->width();

  double ll = sptr->low();
  double hh = sptr->high();
  double diff = hh - ll;

  // main loop

  SETSIGBUS
  for (long jj=0; jj<height; jj++) {
    for (long ii=0; ii<width; ii++, dest++) {
      // default is bg
      *dest = -2;

      if (mosaic) {
	sptr = context->cfits;

	mm = sptr->matrixToData(Coord::WIDGET).mm();
	params = sptr->getDataParams(context->secMode());
	srcw = sptr->width();

	ll = sptr->low();
	hh = sptr->high();
	diff = hh - ll;
      }

      do {
	double xx = ii*mm[0] + jj*mm[3] + mm[6];
	double yy = ii*mm[1] + jj*mm[4] + mm[7];

	if (xx>=params->xmin && xx<params->xmax &&
	    yy>=params->ymin && yy<params->ymax) {
	  double value = sptr->getValueDouble(long(yy)*srcw + long(xx));

	  if (isfinite(diff) && isfinite(value)) {
	    if (value <= ll)
	      *dest = 0;
	    else if (value >= hh)
	      *dest = last;
	    else
	      *dest = (int)(((value - ll)/diff * length) + .5)*bytesPerPixel;
	  }
	  else
	    *dest = -1;

	  break;
	}
	else {
	  if (mosaic) {
	    sptr = sptr->nextMosaic();

	    if (sptr) {
	      mm = sptr->matrixToData(Coord::WIDGET).mm();
	      params = sptr->getDataParams(context->secMode());
	      srcw = sptr->width();

	      ll = sptr->low();
	      hh = sptr->high();
	      diff = hh - ll;
	    }
	  }
	}
      }
      while (mosaic && sptr);
    }
  }
  CLEARSIGBUS
}

void Frame::colormapMotionCmd(int id, float b, float c, int i, 
				       unsigned char* cells, int cnt)
{
  // we need a colorScale before we can render
  if (!validColorScale())
    return;

  // first check for change
  if (cmapID == id && bias == b && contrast == c && invert == i && colorCells)
    return;

  // we got a change
  cmapID = id;
  bias = b;
  contrast = c;
  invert = i;

  updateColorCells(cells, cnt);
  updateColorScale();

  // if we have no data, stop now
  if (!context->cfits)
    return;

  XColor* bgColor = useBgColor? getXColor(bgColourName) :
    ((WidgetOptions*)options)->bgColor;
  char bgTrueColor[4];   // color encoded
  encodeTrueColor(bgColor, bgTrueColor);

  XColor* nanColor = getXColor(nanColourName);
  char nanTrueColor[4];  // color encoded
  encodeTrueColor(nanColor, nanTrueColor);

  // clear ximage
  int& width = colormapXM->width;
  int& height = colormapXM->height;
  char* data = colormapXM->data;
  int bytesPerPixel = colormapXM->bits_per_pixel/8;
  int& bytesPerLine = colormapXM->bytes_per_line;

  const unsigned char* table = colorScale->colors();

  long* src = colormapData;
  for (long jj=0; jj<height; jj++) {
    // line may be padded at end
    char* dest = data + jj*bytesPerLine;

    for (long ii=0; ii<width; ii++, src++, dest+=bytesPerPixel)
      switch (*src) {
      case -1:
	memcpy(dest, nanTrueColor, bytesPerPixel);
	break;
      case -2:
	memcpy(dest, bgTrueColor, bytesPerPixel);
	break;
      default:
	memcpy(dest, table+(*src), bytesPerPixel);
	break;
      }
  }

  // XImage to Pixmap
  TkPutImage(NULL, 0, display, colormapPM, widgetGC, colormapXM,
	     0, 0, 0, 0, width, height);

  // Display Pixmap
  Vector dd = Vector() * widgetToWindow;
  XCopyArea(display, colormapPM, Tk_WindowId(tkwin), colormapGCXOR, 0, 0,
	    width, height, dd[0], dd[1]);

  // update panner
  updatePanner();
}

void Frame::colormapEndCmd()
{
  if (colormapXM) {
    XDestroyImage(colormapXM);
    colormapXM = NULL;
  }

  if (colormapPM) {
    Tk_FreePixmap(display, colormapPM);
    colormapPM = 0;
  }

  if (colormapGCXOR) {
    XFreeGC(display, colormapGCXOR);
    colormapGCXOR = 0;
  }

  if (colormapData) {
    delete [] colormapData;
    colormapData = NULL;
  }

  update(BASE); // always update
}

#else

void Frame::colormapBeginCmd() {}

void Frame::colormapMotionCmd(int id, float b, float c, int i,
			      unsigned char* cells, int cnt)
{
  // we need a colorScale before we can render
  if (!validColorScale())
    return;

  // first check for change
  if (cmapID == id && bias == b && contrast == c && invert == i && colorCells)
    return;

  // we got a change
  cmapID = id;
  bias = b;
  contrast = c;
  invert = i;

  updateColorCells(cells, cnt);
  updateColorScale();

  update(BASE);
  updatePanner();
}

void Frame::colormapEndCmd() {}

#endif

void Frame::getColorbarCmd()
{
  ostringstream str;
  str << cmapID << ' ' << bias << ' ' << contrast << ' ' << invert << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Frame::getRGBChannelCmd()
{
  Tcl_AppendResult(interp, "red", NULL);
}

void Frame::getRGBViewCmd()
{
  Tcl_AppendResult(interp, "1 1 1", NULL);
}

void Frame::getRGBSystemCmd()
{
  Tcl_AppendResult(interp, "image", NULL);
}

void Frame::getTypeCmd()
{
  Tcl_AppendResult(interp, "base", NULL);
}

void Frame::iisCmd(int width, int height)
{
  unloadAllFits();
  context->setIIS();

  FitsImage* img = new FitsImageIIS(currentContext, interp, width, height);
  loadDone(currentContext->load(ALLOC, "", img));
}

void Frame::iisEraseCmd()
{
  if (context->cfits)
    ((FitsImageIIS*)context->cfits)->iisErase();
}

void Frame::iisGetCmd(char* dest, int xx, int yy, int dx, int dy)
{
  if (context->cfits) {
    char* buf = ((FitsImageIIS*)context->cfits)->iisGet(xx,yy,dx,dy);
    memcpy(dest, buf, dx*dy);
    delete [] buf;
  }
}

void Frame::iisSetCmd(const char* src, int xx, int yy, int dx, int dy)
{
  if (context->cfits)
    ((FitsImageIIS*)context->cfits)->iisSet(src, xx, yy, dx, dy);
}

void Frame::iisWCSCmd(const Matrix& mx, const Vector& z, int zt)
{
  if (context->cfits)
    ((FitsImageIIS*)context->cfits)->iisWCS(mx, z, zt);
}

void Frame::savePhotoCmd(const char* ph)
{
  FitsImage* fits = currentContext->cfits;
  if (!fits)
    return;

  // basics
  int length = colorScale->size() - 1;
  const unsigned char* table = colorScale->psColors();

  // variable
  FitsBound* params = fits->getDataParams(context->secMode());
  double ll = fits->low();
  double hh = fits->high();
  double diff = hh - ll;

  int width = params->xmax - params->xmin;
  int height = params->ymax - params->ymin;

  XColor* nanColor = getXColor(nanColourName);

  // photo
  if (*ph == '\0') {
    Tcl_AppendResult(interp, "bad image name ", NULL);
    return;
  }
  Tk_PhotoHandle photo = Tk_FindPhoto(interp, ph);
  if (!photo) {
    Tcl_AppendResult(interp, "bad image handle ", NULL);
    return;
  }
  if (Tk_PhotoSetSize(interp, photo, width, height) != TCL_OK) {
    Tcl_AppendResult(interp, "bad photo set size ", NULL);
    return;
  }    
  Tk_PhotoBlank(photo);
  Tk_PhotoImageBlock block;
  if (!Tk_PhotoGetImage(photo,&block)) {
    Tcl_AppendResult(interp, "bad image block ", NULL);
    return;
  }

  if (block.pixelSize<4) {
    Tcl_AppendResult(interp, "bad pixel size ", NULL);
    return;
  }

  // main loop
  SETSIGBUS
  unsigned char* dest = block.pixelPtr;
  for (long jj=params->ymax-1; jj>=params->ymin; jj--) {
    for (long ii=params->xmin; ii<params->xmax; ii++, dest += block.pixelSize) {
      double value = fits->getValueDouble(Vector(ii,jj));

      if (isfinite(diff) && isfinite(value)) {
	if (value <= ll) {
	  *(dest+block.offset[0]) = table[2];
	  *(dest+block.offset[1]) = table[1];
	  *(dest+block.offset[2]) = table[0];
	  *(dest+block.offset[3]) = 255;
	}
	else if (value >= hh) {
	  *(dest+block.offset[0]) = table[length*3+2];
	  *(dest+block.offset[1]) = table[length*3+1];
	  *(dest+block.offset[2]) = table[length*3];
	  *(dest+block.offset[3]) = 255;
	}
	else {
	  int l = (int)(((value - ll)/diff * length) + .5);
	  *(dest+block.offset[0]) = table[l*3+2];
	  *(dest+block.offset[1]) = table[l*3+1];
	  *(dest+block.offset[2]) = table[l*3];
	  *(dest+block.offset[3]) = 255;
	}
      }
      else {
	*(dest+block.offset[0]) = nanColor->red;
	*(dest+block.offset[1]) = nanColor->green;
	*(dest+block.offset[2]) = nanColor->blue;
	*(dest+block.offset[3]) = 255;
      }
    }
  }
  CLEARSIGBUS

  if (Tk_PhotoPutBlock(interp, photo, &block, 0, 0, width, height, 
			TK_PHOTO_COMPOSITE_SET) != TCL_OK) {
    Tcl_AppendResult(interp, "bad put block ", NULL);
    return;
  }
}
