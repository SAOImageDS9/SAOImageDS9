// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "inversescale.h"
#include "framebase.h"
#include "colorscale.h"

InverseScale::InverseScale(int ss) : size_(ss)
{
  level_ = new double[size_];

  for (int ii=0; ii<size_; ii++)
    level_[ii] = 0;
}

InverseScale::InverseScale(int ss, double* ll) : size_(ss)
{
  level_ = new double[size_];

  for (int ii=0; ii<size_; ii++)
    level_[ii] = ll[ii];
}

InverseScale::~InverseScale()
{
  if (level_)
    delete [] level_;
}

ostream& operator<<(ostream& s, const InverseScale& c)
{
  for (int ii=0; ii<c.size_; ii++)
    if (isfinite(c.level_[ii]))
      s << c.level_[ii] << ' ';
    else
      s << 0 << ' ';
  return s;
}

// Note: this an inverse algorithm. We have y, we need x

LinearInverseScale::LinearInverseScale(int ss, double low, double high) 
  : InverseScale(ss)
{
  if (size_==1) {
    level_[0] = high;
    return;
  }

  double dd = high-low;
  for (int ii=0; ii<size_; ii++) {
    double aa = double(ii)/(size_-1);
    level_[ii] = aa*dd +low;
  }
}

LogInverseScale::LogInverseScale(int ss, double low, double high, double exp) 
  : InverseScale(ss)
{
  if (size_==1) {
    level_[0] = high;
    return;
  }

  double dd = high-low;
  for (int ii=0; ii<size_; ii++) {
    double aa = (::pow(exp,double(ii)/(size_-1)) -1) / exp;
    level_[ii] =  aa*dd  +low;
  }
}

PowInverseScale::PowInverseScale(int ss, double low, double high, double exp) 
  : InverseScale(ss)
{
  if (size_==1) {
    level_[0] = high;
    return;
  }

  double dd = high-low;
  for (int ii=0; ii<size_; ii++) {
    double aa = log10(exp*double(ii)/(size_-1) +1) / log10(exp);
    level_[ii] =  aa*dd  +low;
  }
}

SqrtInverseScale::SqrtInverseScale(int ss, double low, double high) 
  : InverseScale(ss)
{
  if (size_==1) {
    level_[0] = high;
    return;
  }

  double dd = high-low;
  for (int ii=0; ii<size_; ii++) {
    double aa = double(ii)/(size_-1);
    level_[ii] = (aa*aa)*dd +low;
  }
}

SquaredInverseScale::SquaredInverseScale(int ss, double low, double high)
  : InverseScale(ss)
{
  if (size_==1) {
    level_[0] = high;
    return;
  }

  double dd = high-low;
  for (int ii=0; ii<size_; ii++) {
    double aa = sqrt(double(ii)/(size_-1));
    level_[ii] = aa*dd +low;
  }
}

AsinhInverseScale::AsinhInverseScale(int ss, double low, double high)
  : InverseScale(ss)
{
  if (size_==1) {
    level_[0] = high;
    return;
  }

  double dd = high-low;
  for (int ii=0; ii<size_; ii++) {
    double aa = sinh(3*double(ii)/(size_-1))/10;
    level_[ii] = aa*dd +low;
  }
}

SinhInverseScale::SinhInverseScale(int ss, double low, double high)
  : InverseScale(ss)
{
  if (size_==1) {
    level_[0] = high;
    return;
  }

  double dd = high-low;
  for (int ii=0; ii<size_; ii++) {
    double aa = asinh(10*double(ii)/(size_-1))/3;
    level_[ii] = aa*dd +low;
  }
}

HistEquInverseScale::HistEquInverseScale(int ss, double low, double high, 
					 double* hist, int histsize) 
  : InverseScale(ss)
{
  if (size_==1) {
    level_[0] = high;
    return;
  }

  double dd = high-low;
  if (!hist) {
    for (int ii=0; ii<size_; ii++) {
      double aa = double(ii)/(size_-1);
      level_[ii] = aa*dd +low;
    }
  }
  else {
    for (int ii=0; ii<size_; ii++) {
      double vv = double(ii)/(size_-1);
      int jj=0;
      while (jj<histsize-1) {
	if (hist[jj]>vv)
	  break;
	jj++;
      }
      double aa = double(jj)/histsize;
      level_[ii] = aa*dd +low;
    }
  }
}

IISInverseScale::IISInverseScale(int ss, double low, double high, Vector& iisz) 
  : InverseScale(ss)
{
  low = IISMIN;
  high = IISMAX;

  if (size_==1) {
    level_[0] = high;
    return;
  }

  double dd = high-low;
  for (int ii=0; ii<size_; ii++) {
    double aa = double(ii)/(size_-1);
    double vv = aa*dd +low;

    if (vv == 0)
      level_[ii] = iisz[0];
    else if (vv == IISMIN)
      level_[ii] = iisz[0];
    else if (vv == IISMAX)
      level_[ii] = iisz[1];
    else if (vv > IISMAX)
      level_[ii] = iisz[1];
    else
      level_[ii] = ((vv-IISMIN) * (iisz[1]-iisz[0]))/(IISMAX-IISMIN) + iisz[0];
  }
}
