// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colorscaletrue16.h"

ColorScaleTrueColor16::ColorScaleTrueColor16(int s, Visual* visual, int msb)
  : ColorScale(s), TrueColor16(visual)
{
  colors_ = new unsigned char[s*2];

  // we need to check to byteswap when we have cross platforms
  if ((!msb && lsb()) || (msb && !lsb())) {
    for (int i=0; i<s; i++) {
      unsigned short r = psColors_[i*3+2];
      unsigned short g = psColors_[i*3+1];
      unsigned short b = psColors_[i*3];
      unsigned short a = 0;
      a |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
      a |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
      a |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);

      memcpy(colors_+i*2, &a, 2);
    }
  }
  else {
    for (int i=0; i<s; i++) {
      unsigned short r = psColors_[i*3+2];
      unsigned short g = psColors_[i*3+1];
      unsigned short b = psColors_[i*3];
      unsigned short a = 0;
      a |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
      a |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
      a |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);

      unsigned char* rr = (unsigned char*)(&a);
      *(colors_+i*2) = *(rr+1);
      *(colors_+i*2+1) = *(rr);
    }
  }
}

ColorScaleTrueColor16::~ColorScaleTrueColor16()
{
  if (colors_)
    delete [] colors_;
}

LinearScaleTrueColor16::LinearScaleTrueColor16(int s, 
					       unsigned char* colorCells,
					       int count, 
					       Visual* visual, int msb)
  : ColorScale(s),
    LinearScale(s, colorCells, count), 
    ColorScaleTrueColor16(s, visual, msb)
{}

LogScaleTrueColor16::LogScaleTrueColor16(int s,
					 unsigned char* colorCells,
					 int count, double exp,
					 Visual* visual, int msb)
  : ColorScale(s),
    LogScale(s, colorCells, count, exp), 
    ColorScaleTrueColor16(s, visual, msb)
{}

PowScaleTrueColor16::PowScaleTrueColor16(int s,
					 unsigned char* colorCells,
					 int count, double exp,
					 Visual* visual, int msb)
  : ColorScale(s),
    PowScale(s, colorCells, count, exp), 
    ColorScaleTrueColor16(s, visual, msb)
{}

SqrtScaleTrueColor16::SqrtScaleTrueColor16(int s,
					   unsigned char* colorCells,
					   int count, 
					   Visual* visual, int msb)
  : ColorScale(s),
    SqrtScale(s, colorCells, count), 
    ColorScaleTrueColor16(s, visual, msb)
{}

SquaredScaleTrueColor16::SquaredScaleTrueColor16(int s,
						 unsigned char* colorCells,
						 int count, 
						 Visual* visual, int msb)
  : ColorScale(s),
    SquaredScale(s, colorCells, count), 
    ColorScaleTrueColor16(s, visual, msb)
{}

AsinhScaleTrueColor16::AsinhScaleTrueColor16(int s,
					     unsigned char* colorCells,
					     int count, 
					     Visual* visual, int msb)
  : ColorScale(s),
    AsinhScale(s, colorCells, count), 
    ColorScaleTrueColor16(s, visual, msb)
{}

SinhScaleTrueColor16::SinhScaleTrueColor16(int s,
					     unsigned char* colorCells,
					     int count, 
					     Visual* visual, int msb)
  : ColorScale(s),
    SinhScale(s, colorCells, count), 
    ColorScaleTrueColor16(s, visual, msb)
{}

IISScaleTrueColor16::IISScaleTrueColor16(unsigned char* colorCells,
					 int count, 
					 Visual* visual, int msb)
  : ColorScale(IISSIZE),
    IISScale(colorCells, count),
    ColorScaleTrueColor16(IISSIZE, visual, msb)
{}

HistEquScaleTrueColor16::HistEquScaleTrueColor16(int s, 
						 unsigned char* colorCells,
						 int count, 
						 double* hist, int histsize,
						 Visual* visual, int msb)
  : ColorScale(s),
    HistEquScale(s, colorCells, count, hist, histsize), 
    ColorScaleTrueColor16(s, visual, msb)
{}

