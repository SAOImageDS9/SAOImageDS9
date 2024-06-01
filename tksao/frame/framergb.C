// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tkInt.h>

#include "util.h"
#include "framergb.h"
#include "fitsimage.h"
#include "outfile.h"
#include "outchannel.h"
#include "outsocket.h"

#include "sigbus.h"

// Frame Member Functions

FrameRGB::FrameRGB(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item)
  : FrameA(i,c,item)
{
  for (int ii=0; ii<3; ii++)
    colorScale[ii] = NULL;
}

FrameRGB::~FrameRGB()
{
  for (int ii=0; ii<3; ii++)
    if (colorScale[ii])
      delete colorScale[ii];

  if (colorCells)
    delete [] colorCells;
}

unsigned char* FrameRGB::fillImage(int width, int height,
				   Coord::InternalSystem sys)
{
  // we need a colorScale before we can render
  if (!validColorScale())
    return NULL;

  // img
  unsigned char* img = new unsigned char[width*height*3];
  memset(img,0,width*height*3);

  // mk
  char* mk = new char[width*height];
  memset(mk,0,width*height);

  SETSIGBUS

  // one channel at a time
  for (int kk=0; kk<3; kk++) {
    if (!view[kk] || !context[kk].fits)
      continue;

    // basics
    int length = colorScale[kk]->size() - 1;
    const unsigned char* table = colorScale[kk]->psColors();

    FitsImage* sptr = context[kk].cfits;
    int mosaic = context[kk].isMosaic();

    // variable
    double* mm = sptr->matrixToData(sys).mm();
    FitsBound* params = sptr->getDataParams(context[kk].secMode());
    int srcw = sptr->width();

    double ll = sptr->low();
    double hh = sptr->high();
    double diff = hh - ll;

    // main loop
    unsigned char* dest = img;
    char* mkptr = mk;

    for (long jj=0; jj<height; jj++) {
      for (long ii=0; ii<width; ii++, dest+=3, mkptr++) {

	if (mosaic) {
	  sptr = context[kk].cfits;

	  mm = sptr->matrixToData(sys).mm();
	  params = sptr->getDataParams(context[kk].secMode());
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
		*(dest+kk) = *table;
	      else if (value >= hh)
		*(dest+kk) = *(table+length);
	      else
		*(dest+kk) = *(table+((int)(((value - ll)/diff * length) +.5)));
	      *mkptr =2;
	    }
	    else if (*mkptr < 2)
	      *mkptr =1;

	    break;
	  }
	  else {
	    if (mosaic) {
	      sptr = sptr->nextMosaic();

	      if (sptr) {
		mm = sptr->matrixToData(sys).mm();
		params = sptr->getDataParams(context[kk].secMode());
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
  }

  // now fill in bg
  XColor* bgColor = useBgColor? getXColor(bgColourName) :
    ((WidgetOptions*)options)->bgColor;
  XColor* nanColor = getXColor(nanColourName);
  {
    unsigned char* dest = img;
    char* mkptr = mk;
    for (int jj=0; jj<height; jj++)
      for (int ii=0; ii<width; ii++, dest+=3, mkptr++) {
	if (*mkptr == 2) // good value
	  ;
	else if (*mkptr == 1) { // nan
	  *dest = (unsigned char)nanColor->red;
	  *(dest+1) = (unsigned char)nanColor->green;
	  *(dest+2) = (unsigned char)nanColor->blue;
	}
	else { // bg
	  *dest = (unsigned char)bgColor->red;
	  *(dest+1) = (unsigned char)bgColor->green;
	  *(dest+2) = (unsigned char)bgColor->blue;
	}
      }	
  }
  CLEARSIGBUS

  // clean up
  delete [] mk;

  if (img)
    if (fadeImg && sys == Coord::WIDGET)
      alphaComposite(img,fadeImg,width,height,fadeAlpha);

  return img;
}

void FrameRGB::updateColorCells(int cnt)
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

void FrameRGB::updateColorScale()
{
  // we need colors before we can construct a scale
  if (!colorCells)
    return;

  for (int ii=0; ii<3; ii++) {
    if (colorScale[ii])
      delete colorScale[ii];

    switch (context[ii].colorScaleType()) {
    case FrScale::LINEARSCALE:
      colorScale[ii] = 
	new LinearScaleRGB(ii, colorCount, colorCells, colorCount);
      break;
    case FrScale::LOGSCALE:
      colorScale[ii] =
	new LogScaleRGB(ii, SCALESIZE, colorCells, colorCount, 
			context[ii].expo());
      break;
    case FrScale::POWSCALE:
      colorScale[ii] =
	new PowScaleRGB(ii, SCALESIZE, colorCells, colorCount, 
			context[ii].expo());
      break;
    case FrScale::SQRTSCALE:
      colorScale[ii] =
	new SqrtScaleRGB(ii, SCALESIZE, colorCells, colorCount);
      break;
    case FrScale::SQUAREDSCALE:
      colorScale[ii] =
	new SquaredScaleRGB(ii, SCALESIZE, colorCells, colorCount);
      break;
    case FrScale::ASINHSCALE:
      colorScale[ii] =
	new AsinhScaleRGB(ii, SCALESIZE, colorCells, colorCount);
      break;
    case FrScale::SINHSCALE:
      colorScale[ii] =
	new SinhScaleRGB(ii, SCALESIZE, colorCells, colorCount);
      break;
    case FrScale::HISTEQUSCALE:
      colorScale[ii] = 
	new HistEquScaleRGB(ii, SCALESIZE, colorCells, colorCount, 
			    context[ii].histequ(), HISTEQUSIZE);
      break;
    case FrScale::IISSCALE:
      // na
      break;
    }
  }
}

// Commands

void FrameRGB::colormapMotionCmd(float rb, float gb, float bb, 
				 float rc, float gc, float bc, int i, int cnt)
{
  // we need a colorScale before we can render
  if (!validColorScale()) {
    cellsptr_ =NULL;
    cellsparentptr_ =NULL;
    return;
  }
  
  // first check for change
  if (bias[0] == rb && bias[1] == gb && bias[2] == bb && 
      contrast[0] == rc && contrast[1] == gc && contrast[2] == bc &&
      invert == i && colorCells) {
    cellsptr_ =NULL;
    cellsparentptr_ =NULL;
    return;
  }
  
  // we got a change
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
  updatePanner();
}

void FrameRGB::getColorbarCmd()
{
  ostringstream str;

  str << "rgb " << fixed;
  for (int ii=0; ii<3; ii++)
    str << bias[ii] << ' ';
  for (int ii=0; ii<3; ii++)
    str << contrast[ii] << ' ';
  str << invert << ' ' << ends;

  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void FrameRGB::getInfoCmd(const Vector& vv, Coord::InternalSystem ref,
			  char* var, Base::FileNameType type)
{
  FrameBase::getInfoCmd(vv, ref, var, type);
  if (!currentContext->cfits)
    return;

  const char* array[3] = {"value,red","value,green","value,blue"};

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

void FrameRGB::getRGBChannelCmd()
{
  switch (channel) {
  case 0:
    Tcl_AppendResult(interp, "red", NULL);
    return;
  case 1:
    Tcl_AppendResult(interp, "green", NULL);
    return;
  case 2:
    Tcl_AppendResult(interp, "blue", NULL);
    return;
  }
}

void FrameRGB::getTypeCmd()
{
  Tcl_AppendResult(interp, "rgb", NULL);
}

// RGBCube FITS

void FrameRGB::loadRGBCubeAllocCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsAlloc(&context[0], interp,
					  ch, fn, FitsFile::NOFLUSH, 1);
  loadRGBCube(ALLOC,fn,img);
}

void FrameRGB::loadRGBCubeAllocGZCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsAllocGZ(&context[0], interp,
					    ch, fn, FitsFile::NOFLUSH, 1);
  loadRGBCube(ALLOCGZ,fn,img);
}

void FrameRGB::loadRGBCubeChannelCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsChannel(&context[0], interp, 
					    ch, fn, FitsFile::NOFLUSH, 1);
  loadRGBCube(CHANNEL,fn,img);
}

void FrameRGB::loadRGBCubeMMapCmd(const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsMMap(&context[0], interp, fn, 1);
  loadRGBCube(MMAP,fn,img);
}

void FrameRGB::loadRGBCubeSMMapCmd(const char* hdr, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsSMMap(&context[0], interp, hdr, fn, 1);
  loadRGBCube(SMMAP,fn,img);
}

void FrameRGB::loadRGBCubeMMapIncrCmd(const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsMMapIncr(&context[0], interp, fn, 1);
  loadRGBCube(MMAPINCR,fn,img);
}

void FrameRGB::loadRGBCubeShareCmd(ShmType type, int id, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsShare(&context[0], interp, type, id, fn, 1);
  loadRGBCube(SHARE,fn,img);
}

void FrameRGB::loadRGBCubeSShareCmd(ShmType type, int hdr, int id,
				    const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsSShare(&context[0], interp, 
					   type, hdr, id, fn, 1);
  loadRGBCube(SSHARE,fn,img);
}

void FrameRGB::loadRGBCubeSocketCmd(int s, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsSocket(&context[0], interp, 
					   s, fn, FitsFile::FLUSH, 1);
  loadRGBCube(SOCKET,fn,img);
}

void FrameRGB::loadRGBCubeSocketGZCmd(int s, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsSocketGZ(&context[0], interp, 
					     s, fn, FitsFile::FLUSH, 1);
  loadRGBCube(SOCKETGZ,fn,img);
}

void FrameRGB::loadRGBCubeVarCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageFitsVar(&context[0], interp, ch, fn, 1);
  loadRGBCube(VAR,fn,img);
}

// RGBImage FITS

void FrameRGB::loadRGBImageAllocCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageMosaicAlloc(&context[0], interp, 
					    ch, fn, FitsFile::NOFLUSH, 1);
  loadRGBImage(ALLOC,fn,img);
}

void FrameRGB::loadRGBImageAllocGZCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageMosaicAllocGZ(&context[0], interp,
					      ch, fn, FitsFile::NOFLUSH, 1);
  loadRGBImage(ALLOCGZ,fn,img);
}

void FrameRGB::loadRGBImageChannelCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageMosaicChannel(&context[0], interp, 
					      ch, fn, FitsFile::NOFLUSH, 1);
  loadRGBImage(CHANNEL,fn,img);
}

void FrameRGB::loadRGBImageMMapCmd(const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageMosaicMMap(&context[0], interp, fn, 1);
  loadRGBImage(MMAP,fn,img);
}

void FrameRGB::loadRGBImageMMapIncrCmd(const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageMosaicMMapIncr(&context[0], interp, fn, 1);
  loadRGBImage(MMAPINCR,fn,img);
}

void FrameRGB::loadRGBImageShareCmd(ShmType type, int id, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageMosaicShare(&context[0], interp, 
					    type, id, fn, 1);
  loadRGBImage(SHARE,fn,img);
}

void FrameRGB::loadRGBImageSocketCmd(int s, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageMosaicSocket(&context[0], interp, 
					     s, fn, FitsFile::FLUSH, 1);
  loadRGBImage(SOCKET,fn,img);
}

void FrameRGB::loadRGBImageSocketGZCmd(int s, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageMosaicSocketGZ(&context[0], interp, 
					       s, fn, FitsFile::FLUSH, 1);
  loadRGBImage(SOCKETGZ,fn,img);
}

void FrameRGB::loadRGBImageVarCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageMosaicVar(&context[0], interp, ch, fn, 1);
  loadRGBImage(VAR,fn,img);
}

// RGBCube Array

void FrameRGB::loadArrayRGBCubeAllocCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageArrAlloc(&context[0], interp,
					 ch, fn, FitsFile::NOFLUSH, 1);
  loadRGBCube(ALLOC,fn,img);
}

void FrameRGB::loadArrayRGBCubeAllocGZCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageArrAllocGZ(&context[0], interp,
					   ch, fn, FitsFile::NOFLUSH, 1);
  loadRGBCube(ALLOCGZ,fn,img);
}

void FrameRGB::loadArrayRGBCubeChannelCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageArrChannel(&context[0], interp, ch, fn, 
					   FitsFile::NOFLUSH, 1);
  loadRGBCube(CHANNEL,fn,img);
}

void FrameRGB::loadArrayRGBCubeMMapCmd(const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageArrMMap(&context[0], interp, fn, 1);
  loadRGBCube(MMAP,fn,img);
}

void FrameRGB::loadArrayRGBCubeMMapIncrCmd(const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageArrMMapIncr(&context[0], interp, fn, 1);
  loadRGBCube(MMAPINCR,fn,img);
}

void FrameRGB::loadArrayRGBCubeShareCmd(ShmType type, int id, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageArrShare(&context[0], interp,
					 type, id, fn, 1);
  loadRGBCube(SHARE,fn,img);
}

void FrameRGB::loadArrayRGBCubeSocketCmd(int s, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageArrSocket(&context[0], interp,
					  s, fn, FitsFile::FLUSH, 1);
  loadRGBCube(SOCKET,fn,img);
}

void FrameRGB::loadArrayRGBCubeSocketGZCmd(int s, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageArrSocketGZ(&context[0], interp,
					    s, fn, FitsFile::FLUSH, 1);
  loadRGBCube(SOCKETGZ,fn,img);
}

void FrameRGB::loadArrayRGBCubeVarCmd(const char* ch, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImageArrVar(&context[0], interp, ch, fn, 1);
  loadRGBCube(VAR,fn,img);
}

// RGBPhoto

void FrameRGB::loadPhotoCmd(const char* ph, const char* fn)
{
  unloadAllFits();
  FitsImage* img = new FitsImagePhotoCube(&context[0], interp, ph, fn, 1);
  loadRGBCube(ALLOC,fn,img);
}

void FrameRGB::saveFitsRGBImageFileCmd(const char* fn)
{
  if (!keyContext->fits)
    return;

  OutFitsFile str(fn);
  if (str.valid())
    saveFitsRGBImage(str);
}

void FrameRGB::saveFitsRGBImageChannelCmd(const char* ch)
{
  if (!keyContext->fits)
    return;

  OutFitsChannel str(interp, ch);
  if (str.valid())
    saveFitsRGBImage(str);
}

void FrameRGB::saveFitsRGBImageSocketCmd(int ss)
{
  if (!keyContext->fits)
    return;

  OutFitsSocket str(ss);
  if (str.valid())
    saveFitsRGBImage(str);
}

void FrameRGB::saveFitsRGBCubeFileCmd(const char* fn)
{
  if (!keyContext->fits)
    return;

  OutFitsFile str(fn);
  if (str.valid())
    saveFitsRGBCube(str);
}

void FrameRGB::saveFitsRGBCubeChannelCmd(const char* ch)
{
  if (!keyContext->fits)
    return;

  OutFitsChannel str(interp, ch);
  if (str.valid())
    saveFitsRGBCube(str);
}

void FrameRGB::saveFitsRGBCubeSocketCmd(int ss)
{
  if (!keyContext->fits)
    return;

  OutFitsSocket str(ss);
  if (str.valid())
    saveFitsRGBCube(str);
}

void FrameRGB::saveArrayRGBCubeFileCmd(const char* fn, FitsFile::ArchType endian)
{
  if (!keyContext->fits)
    return;

  OutFitsFile str(fn);
  if (str.valid())
    saveArrayRGBCube(str, endian);
}

void FrameRGB::saveArrayRGBCubeChannelCmd(const char* ch, FitsFile::ArchType endian)
{
  if (!keyContext->fits)
    return;

  OutFitsChannel str(interp, ch);
  if (str.valid())
    saveArrayRGBCube(str, endian);
}

void FrameRGB::saveArrayRGBCubeSocketCmd(int ss, FitsFile::ArchType endian)
{
  if (!keyContext->fits)
    return;

  OutFitsSocket str(ss);
  if (str.valid())
    saveArrayRGBCube(str, endian);
}

void FrameRGB::savePhotoCmd(const char* ph)
{
  // need to determine size from key context
  FitsImage* fits = keyContext->fits;
  if (!fits)
    return;

  // check size
  FitsBound* params = fits->getDataParams(context->secMode());
  for (int kk=0; kk<3; kk++) {
    if (!view[kk] || !context[kk].fits)
      continue;

    FitsImage* ptr = context[kk].fits;
    FitsBound* pptr = ptr->getDataParams(context[kk].secMode());
    if (params->xmin != pptr->xmin || params->xmax != pptr->xmax ||
	params->ymin != pptr->ymin || params->ymax != pptr->ymax) {
      internalError("All channels need to be same size.");
      return;
    }
  }

  // width,height
  int width = params->xmax - params->xmin;
  int height = params->ymax - params->ymin;

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

  // clear, set alpha channel
  unsigned char* dest = block.pixelPtr;
  for (long jj=0; jj<height; jj++) {
    for (long ii=0; ii<width; ii++, dest+=block.pixelSize) {
      *(dest+block.offset[0]) = 0; // red
      *(dest+block.offset[1]) = 0; // green
      *(dest+block.offset[2]) = 0; // blue
      *(dest+block.offset[3]) = 255; // alpha
    }
  }

  // main loop
  SETSIGBUS

  // one channel at a time
  for (int kk=0; kk<3; kk++) {
    if (!view[kk] || !context[kk].fits)
      continue;

    // basics
    int length = colorScale[kk]->size() - 1;
    const unsigned char* table = colorScale[kk]->psColors();

    // variable
    FitsImage* fits = context[kk].cfits;
    double ll = fits->low();
    double hh = fits->high();
    double diff = hh - ll;

    unsigned char* dest = block.pixelPtr;
    for (long jj=params->ymax-1; jj>=params->ymin; jj--) {
      for (long ii=params->xmin; ii<params->xmax; ii++, dest+=block.pixelSize) {
	double value = fits->getValueDouble(Vector(ii,jj));

	if (isfinite(diff) && isfinite(value)) {
	  if (value <= ll)
	    *(dest+block.offset[kk]) = table[0];
	  else if (value >= hh)
	    *(dest+block.offset[kk]) = table[length];
	  else
	    *(dest+block.offset[kk]) = table[(int)(((value - ll)/diff * length) + .5)];
	}
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

void FrameRGB::setRGBChannelCmd(const char* c)
{
  if (!strncmp(c,"red",3))
    channel = 0;
  else if (!strncmp(c,"gre",3))
    channel = 1;
  else if (!strncmp(c,"blu",3))
    channel = 2;
  else
    channel = 0;

  setChannel();
}

