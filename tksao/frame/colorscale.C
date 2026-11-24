// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "colorscale.h"

ColorScale::ColorScale(int ss)
{
  size_ = ss;
  psColors_ = new unsigned char[ss*3];
  memset(psColors_, '0', size_*3);

  curve_ = NULL;
  cells_ = NULL;
  count_ = 0;
}

ColorScale::~ColorScale()
{
  if (psColors_)
    delete [] psColors_;
  if (curve_)
    delete curve_;
  if (cells_)
    delete [] cells_;
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

// PROTOTYPE switch, env DS9_GHS_MODE:
//   direct (default): evaluate the curve per pixel, plus a normal table
//   fine: 2^20 entry table, no per pixel evaluation
//   table: normal SCALESIZE table only (original behaviour)
static int ghsMode()
{
  const char* mm = getenv("DS9_GHS_MODE");
  if (mm && !strcmp(mm,"fine"))
    return 1;
  if (mm && !strcmp(mm,"table"))
    return 2;
  return 0;
}

#define GHSFINESIZE (1<<20)

GhsScale::GhsScale(int ss, unsigned char* colorCells, int count,
		   const GhsParams& gp)
  : ColorScale(ghsMode()==1 ? GHSFINESIZE : ss)
{
  GhsCurve curve(gp);
  ss = size_;

  // per pixel evaluation
  if (ghsMode()==0) {
    curve_ = new GhsCurve(gp);
    count_ = count;
    cells_ = new unsigned char[count*3];
    memcpy(cells_, colorCells, count*3);
  }

  // fine table: fill runs between colour-cell boundaries found with the
  // closed-form inverse. Cell k covers curve(aa) in [k/count, (k+1)/count),
  // i.e. table entries ii >= ss*inverse(k/count)
  if (ghsMode()==1) {
    int start = 0;
    for (int kk=0; kk<count && start<ss; kk++) {
      int stop = ss;
      if (kk+1 < count) {
	stop = (int)ceil(curve.inverse(double(kk+1)/count) * ss);
	if (stop > ss)
	  stop = ss;
      }
      for (int ii=start; ii<stop; ii++)
	memcpy(psColors_+ii*3, colorCells+kk*3, 3);
      if (stop > start)
	start = stop;
    }
    return;
  }

  // table, used by code paths that don't call lookup()
  for (int ii=0; ii<ss; ii++) {
    double aa = curve(double(ii)/ss);
    int ll = (int)(aa * count);
    if (ll<0)
      ll = 0;
    else if (ll>=count)
      ll = count-1;
    memcpy(psColors_+ii*3, colorCells+ll*3, 3);
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
