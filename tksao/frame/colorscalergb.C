// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>
#include <math.h>

#include "colorscalergb.h"
#include "colorscale.h"

ColorScaleRGB::ColorScaleRGB(int s)
{
  size_ = s;
  psColors_ = new unsigned char[s];
  memset(psColors_, '0', size_);
}

ColorScaleRGB::~ColorScaleRGB()
{
  if (psColors_)
    delete [] psColors_;
}

LinearScaleRGB::LinearScaleRGB(int jj, int ss, unsigned char* colorCells, 
			       int count) 
  : ColorScaleRGB(ss)
{
  for (int ii=0; ii<ss; ii++) {
    double aa = double(ii)/ss;
    int ll = (int)(aa * count);
    memcpy(psColors_+ii, colorCells+ll*3+jj,1);
  }
}

LogScaleRGB::LogScaleRGB(int jj, int ss, unsigned char* colorCells, 
			 int count, double exp)
  : ColorScaleRGB(ss)
{
  for (int ii=0; ii<ss; ii++) {
    double aa = log10(exp*double(ii)/ss +1) / log10(exp);
    int ll = (int)(aa * count);
    // aa can grow slightly greater than 1
    if (ll>=count)
      ll = count-1;
    memcpy(psColors_+ii, colorCells+ll*3+jj,1);
  }
}

PowScaleRGB::PowScaleRGB(int jj, int ss, unsigned char* colorCells, 
			 int count, double exp)
  : ColorScaleRGB(ss)
{
  for (int ii=0; ii<ss; ii++) {
    double aa = (::pow(exp,double(ii)/ss) -1) / exp;
    int ll = (int)(aa * count);
    // should not be needed
    if (ll>=count)
      ll = count-1;
    memcpy(psColors_+ii, colorCells+ll*3+jj,1);
  }
}

SqrtScaleRGB::SqrtScaleRGB(int jj, int ss, unsigned char* colorCells, int count)
  : ColorScaleRGB(ss)
{
  for(int ii=0; ii<ss; ii++) {
    double aa = double(ii)/ss;
    int ll = (int)(sqrt(aa) * count);
    memcpy(psColors_+ii, colorCells+ll*3+jj,1);
  }
}

SquaredScaleRGB::SquaredScaleRGB(int jj, int ss, unsigned char* colorCells, 
				 int count) 
  : ColorScaleRGB(ss)
{
  for(int ii=0; ii<ss; ii++) {
    double aa = double(ii)/ss;
    int ll = (int)(aa*aa * count);
    memcpy(psColors_+ii, colorCells+ll*3+jj,1);
  }
}

AsinhScaleRGB::AsinhScaleRGB(int jj, int ss, unsigned char* colorCells, 
			     int count) 
  : ColorScaleRGB(ss)
{
  for(int ii=0; ii<ss; ii++) {
    double aa = double(ii)/ss;
    int ll = (int)(asinh(10*aa)/3 * count);
    memcpy(psColors_+ii, colorCells+ll*3+jj,1);
  }
}

GhsScaleRGB::GhsScaleRGB(int jj, unsigned char* colorCells, int count,
			 const GhsParams& gp, double low, double high)
  : ColorScaleRGB(GHSSCALESIZE)
{
  GhsCurve curve(gp, low, high);
  int start = 0;
  for (int kk=0; kk<count && start<size_; kk++) {
    int stop = curve.cellStop(kk, count, size_);
    for (int ii=start; ii<stop; ii++)
      psColors_[ii] = colorCells[kk*3+jj];
    if (stop > start)
      start = stop;
  }
}

SinhScaleRGB::SinhScaleRGB(int jj, int ss, unsigned char* colorCells, 
			   int count) 
  : ColorScaleRGB(ss)
{
  for(int ii=0; ii<ss; ii++) {
    double aa = double(ii)/ss;
    int ll = (int)(sinh(3*aa)/10 * count);
    memcpy(psColors_+ii, colorCells+ll*3+jj,1);
  }
}

HistEquScaleRGB::HistEquScaleRGB(int jj, int ss, unsigned char* colorCells, 
				 int count, double* hist, int histsize)
  : ColorScaleRGB(ss)
{
  // if no histogram, return linear distribution
  if (!hist)
    for (int ii=0; ii<ss; ii++) {
      double aa = double(ii)/ss;
      int ll = (int)(aa * count);
      memcpy(psColors_+ii, colorCells+ll*3+jj,1);
    }
  else
    for (int ii=0; ii<ss; ii++) {
      double aa = hist[ii*histsize/ss];
      int ll = (int)(aa * count);
      memcpy(psColors_+ii, colorCells+ll*3+jj,1);
    }
}
