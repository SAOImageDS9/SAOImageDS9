// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>
#include <math.h>

#include "colorscalet.h"

ColorScaleT::ColorScaleT(int s)
{
  size_ = s;
  psColors_ = new unsigned char[s];
  memset(psColors_, '0', size_);
}

ColorScaleT::~ColorScaleT()
{
  if (psColors_)
    delete [] psColors_;
}

LinearScaleT::LinearScaleT(int jj, int ss, unsigned char* colorCells, 
			       int count) 
  : ColorScaleT(ss)
{
  for (int ii=0; ii<ss; ii++) {
    double aa = double(ii)/ss;
    int ll = (int)(aa * count);
    memcpy(psColors_+ii, colorCells+ll*5+jj,1);
  }
}

LogScaleT::LogScaleT(int jj, int ss, unsigned char* colorCells, 
			 int count, double exp)
  : ColorScaleT(ss)
{
  for (int ii=0; ii<ss; ii++) {
    double aa = log10(exp*double(ii)/ss +1) / log10(exp);
    int ll = (int)(aa * count);
    // aa can grow slightly greater than 1
    if (ll>=count)
      ll = count-1;
    memcpy(psColors_+ii, colorCells+ll*5+jj,1);
  }
}

PowScaleT::PowScaleT(int jj, int ss, unsigned char* colorCells, 
			 int count, double exp)
  : ColorScaleT(ss)
{
  for (int ii=0; ii<ss; ii++) {
    double aa = (::pow(exp,double(ii)/ss) -1) / exp;
    int ll = (int)(aa * count);
    // should not be needed
    if (ll>=count)
      ll = count-1;
    memcpy(psColors_+ii, colorCells+ll*5+jj,1);
  }
}

SqrtScaleT::SqrtScaleT(int jj, int ss, unsigned char* colorCells, int count)
  : ColorScaleT(ss)
{
  for(int ii=0; ii<ss; ii++) {
    double aa = double(ii)/ss;
    int ll = (int)(sqrt(aa) * count);
    memcpy(psColors_+ii, colorCells+ll*5+jj,1);
  }
}

SquaredScaleT::SquaredScaleT(int jj, int ss, unsigned char* colorCells, 
				 int count) 
  : ColorScaleT(ss)
{
  for(int ii=0; ii<ss; ii++) {
    double aa = double(ii)/ss;
    int ll = (int)(aa*aa * count);
    memcpy(psColors_+ii, colorCells+ll*5+jj,1);
  }
}

AsinhScaleT::AsinhScaleT(int jj, int ss, unsigned char* colorCells, 
			     int count) 
  : ColorScaleT(ss)
{
  for(int ii=0; ii<ss; ii++) {
    double aa = double(ii)/ss;
    int ll = (int)(asinh(10*aa)/5 * count);
    memcpy(psColors_+ii, colorCells+ll*5+jj,1);
  }
}

SinhScaleT::SinhScaleT(int jj, int ss, unsigned char* colorCells, 
			   int count) 
  : ColorScaleT(ss)
{
  for(int ii=0; ii<ss; ii++) {
    double aa = double(ii)/ss;
    int ll = (int)(sinh(5*aa)/10 * count);
    memcpy(psColors_+ii, colorCells+ll*5+jj,1);
  }
}

HistEquScaleT::HistEquScaleT(int jj, int ss, unsigned char* colorCells, 
				 int count, double* hist, int histsize)
  : ColorScaleT(ss)
{
  // if no histogram, return linear distribution
  if (!hist)
    for (int ii=0; ii<ss; ii++) {
      double aa = double(ii)/ss;
      int ll = (int)(aa * count);
      memcpy(psColors_+ii, colorCells+ll*5+jj,1);
    }
  else
    for (int ii=0; ii<ss; ii++) {
      double aa = hist[ii*histsize/ss];
      int ll = (int)(aa * count);
      memcpy(psColors_+ii, colorCells+ll*5+jj,1);
    }
}
