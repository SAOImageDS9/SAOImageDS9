// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colorscaletrue32.h"

ColorScaleTrueColor32::ColorScaleTrueColor32(int s, Visual* visual, int msb)
  : ColorScale(s), TrueColor24(visual)
{
  colors_ = new unsigned char[s*4];

  // we need to check to byteswap when we have cross platforms
  if ((!msb && lsb()) || (msb && !lsb())) {
    for (int i=0; i<s; i++) {
      unsigned int r = psColors_[i*3+2];
      unsigned int g = psColors_[i*3+1];
      unsigned int b = psColors_[i*3];
      unsigned int a = 0;
#ifdef MAC_OSX_TK
      a |= 0xff << 24;
#endif
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;
      memcpy(colors_+i*4, &a, 4);
    }
  }
  else {
    for (int i=0; i<s; i++) {
      unsigned int r = psColors_[i*3+2];
      unsigned int g = psColors_[i*3+1];
      unsigned int b = psColors_[i*3];
      unsigned int a = 0;
#ifdef MAC_OSX_TK
      a |= 0xff << 24;
#endif
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      unsigned char* rr = (unsigned char*)(&a);
      *(colors_+i*4) = *(rr+3);
      *(colors_+i*4+1) = *(rr+2);
      *(colors_+i*4+2) = *(rr+1);
      *(colors_+i*4+3) = *(rr);
    }
  }
}

ColorScaleTrueColor32::~ColorScaleTrueColor32()
{
  if (colors_)
    delete [] colors_;
}

LinearScaleTrueColor32::LinearScaleTrueColor32(int s, 
					       unsigned char* colorCells,
					       int count, 
					       Visual* visual, int msb)
  : ColorScale(s),
    LinearScale(s, colorCells, count), 
    ColorScaleTrueColor32(s, visual, msb)
{}

LogScaleTrueColor32::LogScaleTrueColor32(int s,
					 unsigned char* colorCells, 
					 int count, double exp,
					 Visual* visual, int msb)
  : ColorScale(s),
    LogScale(s, colorCells, count, exp), 
    ColorScaleTrueColor32(s, visual, msb)
{}

PowScaleTrueColor32::PowScaleTrueColor32(int s,
					 unsigned char* colorCells, 
					 int count, double exp,
					 Visual* visual, int msb)
  : ColorScale(s),
    PowScale(s, colorCells, count, exp), 
    ColorScaleTrueColor32(s, visual, msb)
{}

SqrtScaleTrueColor32::SqrtScaleTrueColor32(int s,
					   unsigned char* colorCells,
					   int count, 
					   Visual* visual, int msb)
  : ColorScale(s),
    SqrtScale(s, colorCells, count), 
    ColorScaleTrueColor32(s, visual, msb)
{}

SquaredScaleTrueColor32::SquaredScaleTrueColor32(int s,
						 unsigned char* colorCells,
						 int count, 
						 Visual* visual, int msb)
  : ColorScale(s),
    SquaredScale(s, colorCells, count), 
    ColorScaleTrueColor32(s, visual, msb)
{}
    

AsinhScaleTrueColor32::AsinhScaleTrueColor32(int s,
					     unsigned char* colorCells,
					     int count, 
					     Visual* visual, int msb)
  : ColorScale(s),
    AsinhScale(s, colorCells, count), 
    ColorScaleTrueColor32(s, visual, msb)
{}

SinhScaleTrueColor32::SinhScaleTrueColor32(int s,
					     unsigned char* colorCells,
					     int count, 
					     Visual* visual, int msb)
  : ColorScale(s),
    SinhScale(s, colorCells, count), 
    ColorScaleTrueColor32(s, visual, msb)
{}

IISScaleTrueColor32::IISScaleTrueColor32(unsigned char* colorCells,
					 int count, 
					 Visual* visual, int msb)
  : ColorScale(IISSIZE),
    IISScale(colorCells, count), 
    ColorScaleTrueColor32(IISSIZE, visual, msb)
{}

HistEquScaleTrueColor32::HistEquScaleTrueColor32(int s, 
						 unsigned char* colorCells,
						 int count, 
						 double* hist, int histsize,
						 Visual* visual, int msb)
  : ColorScale(s),
    HistEquScale(s, colorCells, count, hist, histsize), 
    ColorScaleTrueColor32(s, visual, msb)
{}


