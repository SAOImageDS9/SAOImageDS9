// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "framehsv.h"

// Frame Member Functions

FrameHSV::FrameHSV(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item)
: FrameT(i,c,item) {}

FrameHSV::~FrameHSV() {}

void FrameHSV::convert(unsigned char* src, unsigned char ss, unsigned char vv,
		       unsigned char* dest)
{
  unsigned char hr = *src;
  unsigned char hg = *(src+1);
  unsigned char hb = *(src+2);

  float x = hr/256.;
  float y = hg/256.;
  float z = hb/256.;
  float s = ss/256.;
  float v = vv/256.;

  // map rgb to h
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
