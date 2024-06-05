// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "framet.h"

#include "util.h"
#include "sigbus.h"

FrameT::FrameT(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item)
: FrameA(i,c,item)
{
  colorCellsT[0] = NULL;
  colorCellsT[1] = NULL;

  colorScale = NULL;
  colorScaleT[0] = NULL;
  colorScaleT[1] = NULL;
}

FrameT::~FrameT()
{
  if (colorCells)
    delete [] colorCells;

  for (int ii=0; ii<2; ii++)
    if (colorCellsT[ii])
      delete colorCellsT[ii];

  if (colorScale)
    delete colorScale;

  for (int ii=0; ii<2; ii++)
    if (colorScaleT[ii])
      delete colorScaleT[ii];
}

unsigned char* FrameT::fillImage(int width, int height,
				 Coord::InternalSystem sys)
{
  // we need a colorScale before we can render
  if (!validColorScale())
    return NULL;

  // img
  unsigned char* img = new unsigned char[width*height*5];
  memset(img,0,width*height*5);

  // mk
  char* mk = new char[width*height*3];
  memset(mk,0,width*height*3);

  SETSIGBUS

  // one channel at a time
  for (int kk=0; kk<3; kk++) {
    if (!view[kk] || !context[kk].fits)
      continue;

    // basics

    int length;
    const unsigned char* table;
    if (kk==0) {
      length = colorScale->size() - 1;
      table = colorScale->psColors();
    }
    else {
      length = colorScaleT[kk-1]->size() - 1;
      table = colorScaleT[kk-1]->psColors();
    }

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
      for (long ii=0; ii<width; ii++, dest+=5, mkptr+=3) {

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
	      // good
	      if (kk==0) {
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
		if (value <= ll)
		  *(dest+kk+2) = *table;
		else if (value >= hh)
		  *(dest+kk+2) = *(table+length);
		else {
		  int l = (int)(((value - ll)/diff * length) + .5);
		  *(dest+kk+2) = *(table+l);
		}
	      }

	      *(mkptr+kk) =2;
	    }
	    else {
	      // nan
	      *(mkptr+kk) =1;
	    }

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

  // HSV to RGB, add bg,nan
  unsigned char* imgrgb = new unsigned char[width*height*3];
  memset(imgrgb,0,width*height*3);
  {
    XColor* bgColor = useBgColor? getXColor(bgColourName) :
      ((WidgetOptions*)options)->bgColor;
    XColor* nanColor = getXColor(nanColourName);

    unsigned char* src = img;
    unsigned char* dest = imgrgb;
    char* mkptr = mk;
    for (int jj=0; jj<height; jj++)
      for (int ii=0; ii<width; ii++, dest+=3, src+=5, mkptr+=3) {
	if (*mkptr==2) {
	  // good value
	  if (*(mkptr+1)!=2 && *(mkptr+2)!=2) {
	    // no saturation, no value
	    memcpy(dest, src, 3);
	  }
	  else if (*(mkptr+1)==2 && *(mkptr+2)!=2) {
	    // no value
	    unsigned char ss = *(src+3);
	    unsigned char vv = (unsigned char)255;
	    convert(src,ss,vv,dest);
	  }
	  else if (*(mkptr+1)!=2 && *(mkptr+2)==2) {
	    // no saturation
	    unsigned char ss =(unsigned char)255;
	    unsigned char vv = *(src+4);
	    convert(src,ss,vv,dest);
	  }
	  else {
	    // hue, saturation, value
	    unsigned char ss = *(src+3);
	    unsigned char vv = *(src+4);
	    convert(src,ss,vv,dest);
	  }
	}
	else if (*mkptr == 1) {
	  // nan
	  *dest = (unsigned char)nanColor->red;
	  *(dest+1) = (unsigned char)nanColor->green;
	  *(dest+2) = (unsigned char)nanColor->blue;
	}
	else {
	  // bg
	  *dest = (unsigned char)bgColor->red;
	  *(dest+1) = (unsigned char)bgColor->green;
	  *(dest+2) = (unsigned char)bgColor->blue;
	}
      }
  }
  delete [] img;
  
  CLEARSIGBUS
  delete [] mk;

  // Alpha?
  if (imgrgb)
    if (fadeImg && sys == Coord::WIDGET)
      alphaComposite(imgrgb,fadeImg,width,height,fadeAlpha);

  return imgrgb;
}

void FrameT::updateColorScale()
{
  // we need colors before we can construct a scale
  if (!colorCells || !colorCellsT[0] || !colorCellsT[1])
    return;
  
  // ColorScale

  if (colorScale)
    delete colorScale;

  switch (context[0].colorScaleType()) {
  case FrScale::LINEARSCALE:
    colorScale =
      new LinearScale(colorCount, colorCells, colorCount);
    break;
  case FrScale::LOGSCALE:
    colorScale =
      new LogScale(SCALESIZE, colorCells, colorCount, context[0].expo());
    break;
  case FrScale::POWSCALE:
    colorScale =
      new PowScale(SCALESIZE, colorCells, colorCount, context[0].expo());
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
		       context[0].histequ(), HISTEQUSIZE); 
    break;
  case FrScale::IISSCALE:
    // na
    break;
  }

  // ColorScaleT

  for (int ii=0; ii<2; ii++)
    if (colorScaleT[ii])
      delete colorScaleT[ii];

  for (int kk=1; kk<3; kk++) {
    switch (context[kk].colorScaleType()) {
    case FrScale::LINEARSCALE:
      colorScaleT[kk-1] =
	new LinearScaleT(colorCount, colorCellsT[kk-1], colorCount);
      break;
    case FrScale::LOGSCALE:
      colorScaleT[kk-1] =
	new LogScaleT(SCALESIZE, colorCellsT[kk-1], colorCount,
		      context[kk].expo());
      break;
    case FrScale::POWSCALE:
      colorScaleT[kk-1] =
	new PowScaleT(SCALESIZE, colorCellsT[kk-1], colorCount,
		      context[kk].expo());
      break;
    case FrScale::SQRTSCALE:
      colorScaleT[kk-1] = 
	new SqrtScaleT(SCALESIZE, colorCellsT[kk-1], colorCount);
      break;
    case FrScale::SQUAREDSCALE:
      colorScaleT[kk-1] =
	new SquaredScaleT(SCALESIZE, colorCellsT[kk-1], colorCount);
      break;
    case FrScale::ASINHSCALE:
      colorScaleT[kk-1] =
	new AsinhScaleT(SCALESIZE, colorCellsT[kk-1], colorCount);
      break;
    case FrScale::SINHSCALE:
      colorScaleT[kk-1] =
	new SinhScaleT(SCALESIZE, colorCellsT[kk-1], colorCount);
      break;
    case FrScale::HISTEQUSCALE:
      colorScaleT[kk-1] =
	new HistEquScaleT(SCALESIZE, colorCellsT[kk-1], colorCount, 
			 context[kk].histequ(), HISTEQUSIZE); 
      break;
    case FrScale::IISSCALE:
      // na
      break;
    }
  }
}

void FrameT::updateColorCells(int cnt)
{
  if (!cellsptr_ || !cellsparentptr_)
    return;
  
  unsigned char* cells = (unsigned char*)cellsptr_;
  colorCount = cnt;

  if (colorCells)
    delete [] colorCells;
  colorCells = new unsigned char[cnt*3];
  for (int ii=0; ii<cnt; ii++)
    memcpy(colorCells+ii*3, cells+ii*5, 3);

  for (int kk=0; kk<2; kk++) {
    if (colorCellsT[kk])
      delete [] colorCellsT[kk];
    colorCellsT[kk] = new unsigned char[cnt];

    for (int ii=0; ii<cnt; ii++)
      memcpy(colorCellsT[kk]+ii, cells+ii*5+kk+3, 1);
  }

  // clear
  cellsptr_ =NULL;
  cellsparentptr_ =NULL;
}

void FrameT::savePhotoCmd(const char* ph)
{
  // we need a colorScale before we can render
  if (!validColorScale())
    return;

  // need to determine size from key context
  FitsImage* fits = keyContext->fits;
  if (!fits)
    return;

  // check size
  FitsBound* params = fits->getDataParams(context->secMode());

  // width,height
  int width = params->xmax - params->xmin;
  int height = params->ymax - params->ymin;

  cerr << "width " << width << '=' << params->xmax << '-' << params->xmin << endl;
  cerr << "height " << height << '=' << params->ymax << '-' << params->ymin << endl;

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

  // img
  unsigned char* img = new unsigned char[width*height*5];
  memset(img,255,width*height*5);

  // one channel at a time
  for (int kk=0; kk<3; kk++) {
    if (!view[kk] || !context[kk].fits)
      continue;

    int length;
    const unsigned char* table;
    if (kk==0) {
      length = colorScale->size() - 1;
      table = colorScale->psColors();
    }
    else {
      length = colorScaleT[kk-1]->size() - 1;
      table = colorScaleT[kk-1]->psColors();
    }

    // variable
    FitsImage* fits = context[kk].cfits;
    double ll = fits->low();
    double hh = fits->high();
    double diff = hh - ll;

    // main loop
    SETSIGBUS

    unsigned char* dest = img;
    for (long jj=0; jj<height; jj++) {
      for (long ii=0; ii<width; ii++, dest+=5) {
	double value = fits->getValueDouble(Vector(ii,jj));
	if (isfinite(diff) && isfinite(value)) {
	  if (kk==0) {
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
	    if (value <= ll)
	      *(dest+kk+2) = *table;
	    else if (value >= hh)
	      *(dest+kk+2) = *(table+length);
	    else {
	      int l = (int)(((value - ll)/diff * length) + .5);
	      *(dest+kk+2) = *(table+l);
	    }
	  }
	}
      }
    }
    CLEARSIGBUS
  }

  // HSV to RGB, add bg,nan
  unsigned char* imgrgb = new unsigned char[width*height*3];
  memset(imgrgb,0,width*height*3);
  /*
  {
    unsigned char* src = img;
    unsigned char* dest = imgrgb;

    for (int jj=0; jj<height; jj++)
      for (int ii=0; ii<width; ii++, dest+=3, src+=5) {
	if (*mkptr==2) {
	  // good value
	  if (*(mkptr+1)!=2 && *(mkptr+2)!=2) {
	    // no saturation, no value
	    memcpy(dest, src, 3);
	  }
	  else if (*(mkptr+1)==2 && *(mkptr+2)!=2) {
	    // no value
	    unsigned char ss = *(src+3);
	    unsigned char vv = (unsigned char)255;
	    convert(src,ss,vv,dest);
	  }
	  else if (*(mkptr+1)!=2 && *(mkptr+2)==2) {
	    // no saturation
	    unsigned char ss =(unsigned char)255;
	    unsigned char vv = *(src+4);
	    convert(src,ss,vv,dest);
	  }
	  else {
	    // hue, saturation, value
	    unsigned char ss = *(src+3);
	    unsigned char vv = *(src+4);
	    convert(src,ss,vv,dest);
	  }
	}
      }
  }
  */
  delete [] img;

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

  // one channel at a time
  for (int kk=0; kk<3; kk++) {
    unsigned char* src = imgrgb;
    unsigned char* dest = block.pixelPtr;
    for (long jj=0; jj<height; jj++) {
      for (long ii=0; ii<width; ii++, dest+=block.pixelSize, src+=3)
	*(dest+block.offset[kk]) = *src+width*height*kk;
    }
  }

  // cleanup
  delete [] imgrgb;

  if (Tk_PhotoPutBlock(interp, photo, &block, 0, 0, width, height, 
			TK_PHOTO_COMPOSITE_SET) != TCL_OK) {
    Tcl_AppendResult(interp, "bad put block ", NULL);
    return;
  }
}

