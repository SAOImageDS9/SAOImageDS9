// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colorscaletrue24.h"

ColorScaleTrueColor24::ColorScaleTrueColor24(int s, Visual* visual, int msb)
  : ColorScale(s), TrueColor24(visual)
{
  colors_ = new unsigned char[s*3];

  // we need to check to byteswap when we have cross platforms
  if ((!msb && lsb()) || (msb && !lsb())) {
    for (int i=0; i<s; i++) {
      unsigned int r = psColors_[i*3+2];
      unsigned int g = psColors_[i*3+1];
      unsigned int b = psColors_[i*3];
      unsigned int a = 0;
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      memcpy(colors_+i*3, &a, 3);
    }
  }
  else {
    for (int i=0; i<s; i++) {
      unsigned int r = psColors_[i*3+2];
      unsigned int g = psColors_[i*3+1];
      unsigned int b = psColors_[i*3];
      unsigned int a = 0;
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      unsigned char* rr = (unsigned char*)(&a);
      *(colors_+i*3) = *(rr+3);
      *(colors_+i*3+1) = *(rr+2);
      *(colors_+i*3+2) = *(rr+1);
    }
  }
}

ColorScaleTrueColor24::~ColorScaleTrueColor24()
{
  if (colors_)
    delete [] colors_;
}

LinearScaleTrueColor24::LinearScaleTrueColor24(int s, 
					       unsigned char* colorCells,
					       int count, 
					       Visual* visual, int msb)
  : ColorScale(s),
    LinearScale(s, colorCells, count), 
    ColorScaleTrueColor24(s, visual, msb)
{}

LogScaleTrueColor24::LogScaleTrueColor24(int s,
					 unsigned char* colorCells,
					 int count, double exp,
					 Visual* visual, int msb)
  : ColorScale(s),
    LogScale(s, colorCells, count, exp), 
    ColorScaleTrueColor24(s, visual, msb)
{}

PowScaleTrueColor24::PowScaleTrueColor24(int s,
					 unsigned char* colorCells,
					 int count, double exp,
					 Visual* visual, int msb)
  : ColorScale(s),
    PowScale(s, colorCells, count, exp), 
    ColorScaleTrueColor24(s, visual, msb)
{}

SqrtScaleTrueColor24::SqrtScaleTrueColor24(int s,
					   unsigned char* colorCells,
					   int count, 
					   Visual* visual, int msb)
  : ColorScale(s),
    SqrtScale(s, colorCells, count), 
    ColorScaleTrueColor24(s, visual, msb)
{}

SquaredScaleTrueColor24::SquaredScaleTrueColor24(int s,
						 unsigned char* colorCells,
						 int count, 
						 Visual* visual, int msb)
  : ColorScale(s),
    SquaredScale(s, colorCells, count), 
    ColorScaleTrueColor24(s, visual, msb)
{}

AsinhScaleTrueColor24::AsinhScaleTrueColor24(int s,
					     unsigned char* colorCells,
					     int count, 
					     Visual* visual, int msb)
  : ColorScale(s),
    AsinhScale(s, colorCells, count), 
    ColorScaleTrueColor24(s, visual, msb)
{}

SinhScaleTrueColor24::SinhScaleTrueColor24(int s,
					   unsigned char* colorCells,
					   int count, 
					   Visual* visual, int msb)
  : ColorScale(s),
    SinhScale(s, colorCells, count), 
    ColorScaleTrueColor24(s, visual, msb)
{}

IISScaleTrueColor24::IISScaleTrueColor24(unsigned char* colorCells,
					 int count, 
					 Visual* visual, int msb)
  : ColorScale(IISSIZE),
    IISScale(colorCells, count),
    ColorScaleTrueColor24(IISSIZE, visual, msb)
{}

HistEquScaleTrueColor24::HistEquScaleTrueColor24(int s, 
						 unsigned char* colorCells,
						 int count, 
						 double* hist, int histsize,
						 Visual* visual, int msb)
  : ColorScale(s),
    HistEquScale(s, colorCells, count, hist, histsize), 
    ColorScaleTrueColor24(s, visual, msb)
{}
