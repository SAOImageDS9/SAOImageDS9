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

  if (!context[0].cfits)
    return img;

  // basics
  int length = colorScale->size() - 1;
  const unsigned char* table = colorScale->psColors();

  FitsImage* sptr = context[0].cfits;
  int mosaic = isMosaic();

  // variable
  double* mm = sptr->matrixToData(sys).mm();
  FitsBound* params = sptr->getDataParams(context[0].secMode());
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
	sptr = context[0].cfits;

	mm = sptr->matrixToData(sys).mm();
	params = sptr->getDataParams(context[0].secMode());
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
	      params = sptr->getDataParams(context[0].secMode());
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

  return img;
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
