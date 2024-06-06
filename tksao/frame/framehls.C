// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "framehls.h"

// Frame Member Functions

FrameHLS::FrameHLS(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item)
: FrameT(i,c,item) {}

FrameHLS::~FrameHLS() {}

void FrameHLS::convert(unsigned char* dest, unsigned char* src)
{
  float x = *(src  )/256.;
  float y = *(src+1)/256.;
  float z = *(src+2)/256.;
  float l = *(src+3)/256.;
  float s = *(src+4)/256.;

  // map rgb to h
  float max = x > y ? (x > z ? x : z) : (y > z ? y : z);
  float min = x < y ? (x < z ? x : z) : (y < z ? y : z);
  float diff = max-min;

  // special case
  // h undefined (error)
  if (diff==0) {
    *(dest  ) =255;
    *(dest+1) =255;
    *(dest+2) =255;
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

  // standard hls to rgb
  // at this point
  // 0 < h < 360
  // 0 < s < 1
  // 0 < v < 1

  float m2 = (l<=.5) ? l*(1+s) : l+s-(l*s);
  float m1 = 2*l-m2;

  if (s==0) {
    *(dest)   =l*256;
    *(dest+1) =l*256;
    *(dest+2) =l*256;
  }
  else {
    float r =value(m1,m2,h+120);
    float g =value(m1,m2,h);
    float b =value(m1,m2,h-120);

    *(dest)   =r*256;
    *(dest+1) =g*256;
    *(dest+2) =b*256;
  }
}

float FrameHLS::value(float n1, float n2, float hue){
  if (hue<60)
    return n1+(n2-n1)*hue/60;
  else if (hue<180)
    return n2;
  else if (hue<240)
    return n1+(n2-1)*(240-hue)/60;
  else
    return n1;
}

void FrameHLS::getColorbarCmd()
{
  ostringstream str;

  str << "hls " << fixed;
  for (int ii=0; ii<3; ii++)
    str << bias[ii] << ' ';
  for (int ii=0; ii<3; ii++)
    str << contrast[ii] << ' ';
  str << invert << ' ' << ends;

  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void FrameHLS::getTypeCmd()
{
  Tcl_AppendResult(interp, "hls", NULL);
}

void FrameHLS::getHLSChannelCmd()
{
  switch (channel) {
  case 0:
    Tcl_AppendResult(interp, "hue", NULL);
    return;
  case 1:
    Tcl_AppendResult(interp, "lightness", NULL);
    return;
  case 2:
    Tcl_AppendResult(interp, "saturation", NULL);
    return;
  }
}

void FrameHLS::setHLSChannelCmd(const char* c)
{
  if (!strncmp(c,"hue",3))
    channel = 0;
  else if (!strncmp(c,"lig",3))
    channel = 1;
  else if (!strncmp(c,"sat",3))
    channel = 2;
  else
    channel = 0;

  setChannel();
}
