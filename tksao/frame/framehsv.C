// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "framehsv.h"

#include "sigbus.h"

// Frame Member Functions

FrameHSV::FrameHSV(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item)
: FrameT(i,c,item) {}

FrameHSV::~FrameHSV() {}

unsigned char* FrameHSV::fillImage(int width, int height,
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
		  // cerr << value << ' ' << (int)(*(table+l)) << endl;
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
	if (*mkptr==2) { // good value
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
  delete [] img;
  
  CLEARSIGBUS
  delete [] mk;

  // Alpha?
  if (imgrgb)
    if (fadeImg && sys == Coord::WIDGET)
      alphaComposite(imgrgb,fadeImg,width,height,fadeAlpha);

  return imgrgb;
}

void FrameHSV::convert(unsigned char* src, unsigned char ss, unsigned char vv,
		       unsigned char* dest)
{
  unsigned char hr = *src;
  unsigned char hg = *(src+1);
  unsigned char hb = *(src+2);

  //  cerr << (int)hr << ' ' << (int)hg << ' ' << (int)hb << ' ' << (int)ss << ' ' << (int)vv << endl;

  *dest     =hr;
  *(dest+1) =hg;
  *(dest+2) =hb;

  return;
  
  // map rgb to h
  float x = hr/256.;
  float y = hg/256.;
  float z = hb/256.;

  float max = x > y ? (x > z ? x : z) : (y > z ? y : z);
  float min = x < y ? (x < z ? x : z) : (y < z ? y : z);
  float diff = max-min;

  // special case
  // h undefined
  if (diff==0) {
    *dest     =vv;
    *(dest+1) =vv;
    *(dest+2) =vv;
    return;
  }    

  float rc = (max-x) / diff;
  float gc = (max-y) / diff;
  float bc = (max-z) / diff;

  float h;

  if (x==max)
    h = bc-gc;
  else if (y==max)
    h = 2+rc-bc;
  else
    h = 4+gc-rc;
  
  h = h*60;
  if (h<0)
    h +=360;
  if (h>360)
    h -=360;

  float s = ss/256.;
  float v = vv/256.;

  // standard hsv to rgb
  // at this point
  // 0 < h < 360
  // 0 < s < 1
  // 0 < v < 1

  h /= 60.0;
  int i = (int)h;
  float f = h - i;
  float p = v * (1 - s);
  float q = v * (1 - s*f);
  float t = v * (1 - s * (1.0 - f));

  switch (i) {
  case 0:
    *dest     =v*256;
    *(dest+1) =t*256;
    *(dest+2) =p*256;
    break;
  case 1:
    *dest     = q*256;
    *(dest+1) = v*256;
    *(dest+2) = p*256;
    break;
  case 2:
    *dest     = p*256;
    *(dest+1) = v*256;
    *(dest+2) = t*256;
    break;
  case 3:
    *dest     = p*256;
    *(dest+1) = q*256;
    *(dest+2) = v*256;
    break;
  case 4:
    *dest     = t*256;
    *(dest+1) = p*256;
    *(dest+2) = v*256;
    break;
  case 5:
    *dest     = v*256;
    *(dest+1) = p*256;
    *(dest+2) = q*256;
    break;
  }
}

void FrameHSV::getColorbarCmd()
{
  ostringstream str;

  str << "hsv " << fixed;
  for (int ii=0; ii<3; ii++)
    str << bias[ii] << ' ';
  for (int ii=0; ii<3; ii++)
    str << contrast[ii] << ' ';
  str << invert << ' ' << ends;

  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void FrameHSV::getTypeCmd()
{
  Tcl_AppendResult(interp, "hsv", NULL);
}

void FrameHSV::getHSVChannelCmd()
{
  switch (channel) {
  case 0:
    Tcl_AppendResult(interp, "hue", NULL);
    return;
  case 1:
    Tcl_AppendResult(interp, "saturation", NULL);
    return;
  case 2:
    Tcl_AppendResult(interp, "value", NULL);
    return;
  }
}

void FrameHSV::setHSVChannelCmd(const char* c)
{
  if (!strncmp(c,"hue",3))
    channel = 0;
  else if (!strncmp(c,"sat",3))
    channel = 1;
  else if (!strncmp(c,"val",3))
    channel = 2;
  else
    channel = 0;

  setChannel();
}
