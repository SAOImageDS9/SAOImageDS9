// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>
#include <math.h>

#include "colorscale.h"

ColorScale::ColorScale(int ss)
{
  size_ = ss;
  psColors_ = new unsigned char[ss*3];
  memset(psColors_, '0', size_*3);
}

ColorScale::~ColorScale()
{
  if (psColors_)
    delete [] psColors_;
}

LinearScale::LinearScale(int ss, unsigned char* colorCells, int count) 
  : ColorScale(ss)
{
  for (int ii=0; ii<ss; ii++) {
    double aa = double(ii)/ss;
    int ll = (int)(aa * count);
    memcpy(psColors_+ii*3, colorCells+ll*3,3);
  }
}

LogScale::LogScale(int ss, unsigned char* colorCells, int count, double exp)
  : ColorScale(ss)
{
  for (int ii=0; ii<ss; ii++) {
    double aa = log10(exp*double(ii)/ss +1) / log10(exp);
    int ll = (int)(aa * count);
    // aa can grow slightly greater than 1
    if (ll>=count)
      ll = count-1;
    memcpy(psColors_+ii*3, colorCells+ll*3, 3);
  }
}

PowScale::PowScale(int ss, unsigned char* colorCells, int count, double exp)
  : ColorScale(ss)
{
  for (int ii=0; ii<ss; ii++) {
    double aa = (::pow(exp,double(ii)/ss) -1) / exp;
    int ll = (int)(aa * count);
    // should not be needed
    if (ll>=count)
      ll = count-1;
    memcpy(psColors_+ii*3, colorCells+ll*3, 3);
  }
}

SqrtScale::SqrtScale(int ss, unsigned char* colorCells, int count) 
  : ColorScale(ss)
{
  for(int ii=0; ii<ss; ii++) {
    double aa = double(ii)/ss;
    int ll = (int)(sqrt(aa) * count);
    memcpy(psColors_+ii*3, colorCells+ll*3,3);
  }
}

SquaredScale::SquaredScale(int ss, unsigned char* colorCells, int count) 
  : ColorScale(ss)
{
  for(int ii=0; ii<ss; ii++) {
    double aa = double(ii)/ss;
    int ll = (int)(aa*aa * count);
    memcpy(psColors_+ii*3, colorCells+ll*3,3);
  }
}

AsinhScale::AsinhScale(int ss, unsigned char* colorCells, int count) 
  : ColorScale(ss)
{
  for(int ii=0; ii<ss; ii++) {
    double aa = double(ii)/ss;
    int ll = (int)(asinh(10*aa)/3 * count);
    // it can spill over
    if (ll>=count)
      ll = count-1;
    memcpy(psColors_+ii*3, colorCells+ll*3,3);
  }
}

SinhScale::SinhScale(int ss, unsigned char* colorCells, int count) 
  : ColorScale(ss)
{
  for(int ii=0; ii<ss; ii++) {
    double aa = double(ii)/ss;
    int ll = (int)(sinh(3*aa)/10 * count);
    // it can spill over
    if (ll>=count)
      ll = count-1;
    memcpy(psColors_+ii*3, colorCells+ll*3,3);
  }
}

HistEquScale::HistEquScale(int ss, unsigned char* colorCells, int count, 
			   double* hist, int histsize) 
  : ColorScale(ss)
{
  // if no histogram, return linear distribution
  if (!hist)
    for (int ii=0; ii<ss; ii++) {
      double aa = double(ii)/ss;
      int ll = (int)(aa * count);
      memcpy(psColors_+ii*3, colorCells+ll*3,3);
    }
  else {
    for (int ii=0; ii<ss; ii++) {
      double aa = hist[ii*histsize/ss];
      int ll = (int)(aa * count);
      memcpy(psColors_+ii*3, colorCells+ll*3,3);
    }
  }
}

IISScale::IISScale(unsigned char* colorCells, int count) 
  : ColorScale(IISSIZE)
{
  for (int ii=0; ii<IISCOLORS; ii++) {
    double aa = double(ii)/IISCOLORS;
    int ll = (int)(aa * count);
    memcpy(psColors_+ii*3, colorCells+ll*3,3);
  }

  unsigned char* ptr;
  // 0 white (background)
  ptr = psColors_;
  *ptr++ = 255;
  *ptr++ = 255;
  *ptr++ = 255;

  ptr = psColors_+IISMAX*3;
  // 201 white
  *ptr++ = 255;
  *ptr++ = 255;
  *ptr++ = 255;
  // 202 black
  *ptr++ = 0;
  *ptr++ = 0;
  *ptr++ = 0;
  // 203 white
  *ptr++ = 255;
  *ptr++ = 255;
  *ptr++ = 255;
  // 204 red
  *ptr++ = 0;
  *ptr++ = 0;
  *ptr++ = 255;
  // 205 green
  *ptr++ = 0;
  *ptr++ = 255;
  *ptr++ = 0;
  // 206 blue
  *ptr++ = 255;
  *ptr++ = 0;
  *ptr++ = 0;
  // 207 yellow
  *ptr++ = 0;
  *ptr++ = 255;
  *ptr++ = 255;
  // 209 cyan
  *ptr++ = 255;
  *ptr++ = 255;
  *ptr++ = 0;
  // 209 magenta
  *ptr++ = 255;
  *ptr++ = 0;
  *ptr++ = 255;
  // 210 coral
  *ptr++ = 80;
  *ptr++ = 127;
  *ptr++ = 255;
  // 211 maroon
  *ptr++ = 96;
  *ptr++ = 48;
  *ptr++ = 176;
  // 212 orange
  *ptr++ = 0;
  *ptr++ = 165;
  *ptr++ = 255;
  // 213 khaki
  *ptr++ = 140;
  *ptr++ = 230;
  *ptr++ = 240;
  // 214 orchid
  *ptr++ = 214;
  *ptr++ = 112;
  *ptr++ = 218;
  // 215 turquoise
  *ptr++ = 208;
  *ptr++ = 224;
  *ptr++ = 64;
  // 216 violet
  *ptr++ = 238;
  *ptr++ = 130;
  *ptr++ = 238;
  // 217 wheat
  *ptr++ = 179;
  *ptr++ = 222;
  *ptr++ = 245;
}
