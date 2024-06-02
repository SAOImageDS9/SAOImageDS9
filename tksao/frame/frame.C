// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tkInt.h>

#include "util.h"
#include "frame.h"
#include "fitsimage.h"
#include "analysis.h"

#include "sigbus.h"

// defined in tcliis
// used to pass pointers
extern void* iisptr_;

// Frame Member Functions

Frame::Frame(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item) 
  : FrameBase(i,c,item)
{
  context = new Context();
  context->parent(this);

  currentContext = context;
  keyContext = context;
  
  cmapID = 1;
  bias = 0.5;
  contrast = 1.0;

  colorScale = NULL;

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

  if (colorCells)
    delete [] colorCells;

  if (colorScale)
    delete colorScale;

  if (maskColorName)
    delete [] maskColorName;

  if (fadeImg)
    delete [] fadeImg;
}

void Frame::alignWCS() {
  Base::alignWCS();
  updateMaskMatrices();
}

unsigned char* Frame::alphaCompositeMask(unsigned char* src, unsigned char* msk,
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
  // we need a colorScale before we can render
  if (!validColorScale())
    return NULL;

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
	alphaCompositeMask(img,msk,width,height);
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

	alphaCompositeMask(img,msk,width,height);
	delete [] msk;
      }
      break;
    }
  }

  if (img)
    if (fadeImg && sys == Coord::WIDGET)
      alphaComposite(img,fadeImg,width,height,fadeAlpha);

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

void Frame::updateColorCells(int cnt)
{
  if (!cellsptr_ || !cellsparentptr_)
    return;

  unsigned char* cells = (unsigned char*)cellsptr_;
  colorCount = cnt;
  if (colorCells)
    delete [] colorCells;
  colorCells = new unsigned char[cnt*3];
  memcpy(colorCells, cells, cnt*3);

  // clear
  cellsptr_ =NULL;
  cellsparentptr_ =NULL;
}

void Frame::updateColorScale()
{
  // we need colors before we can construct a scale

  if (!colorCells)
    return;

  if (colorScale)
    delete colorScale;

  switch (context->colorScaleType()) {
  case FrScale::LINEARSCALE:
    colorScale =
      new LinearScale(colorCount, colorCells, colorCount);
    break;
  case FrScale::LOGSCALE:
    colorScale =
      new LogScale(SCALESIZE, colorCells, colorCount, context->expo());
    break;
  case FrScale::POWSCALE:
    colorScale =
      new PowScale(SCALESIZE, colorCells, colorCount, context->expo());
    break;
  case FrScale::SQRTSCALE:
    colorScale = 
      new SqrtScale(SCALESIZE, colorCells, colorCount);
    break;
  case FrScale::SQUAREDSCALE:
    colorScale =
      new SquaredScale(SCALESIZE, colorCells, colorCount);
    break;
  case FrScale::ASINHSCALE:
    colorScale =
      new AsinhScale(SCALESIZE, colorCells, colorCount);
    break;
  case FrScale::SINHSCALE:
    colorScale =
      new SinhScale(SCALESIZE, colorCells, colorCount);
    break;
  case FrScale::HISTEQUSCALE:
    colorScale =
      new HistEquScale(SCALESIZE, colorCells, colorCount, 
		       context->histequ(), HISTEQUSIZE); 
    break;
  case FrScale::IISSCALE:
    colorScale =
      new IISScale(colorCells, colorCount);
    break;
  }
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

void Frame::colormapCmd(int id, float b, float c, int i, int cnt)
{
  cmapID = id;
  bias = b;
  contrast = c;
  invert = i;

  updateColorCells(cnt);
  updateColorScale();
  update(BASE);
}

void Frame::getColorbarCmd()
{
  ostringstream str;
  str << cmapID << ' ' << bias << ' ' << contrast << ' ' << invert << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
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

void Frame::iisGetCmd(int xx, int yy, int dx, int dy)
{
  if (context->cfits) {
    char* buf = ((FitsImageIIS*)context->cfits)->iisGet(xx,yy,dx,dy);
    memcpy((char*)iisptr_, buf, dx*dy);
    delete [] buf;
  }
}

void Frame::iisSetCmd(int xx, int yy, int dx, int dy)
{
  if (context->cfits)
    ((FitsImageIIS*)context->cfits)->iisSet((const char*)iisptr_,
					    xx, yy, dx, dy);
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
