// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colorscaletrue16.h"

ColorScaleTrueColor16::ColorScaleTrueColor16(int s, Visual* visual, int msb)
  : ColorScale(s), TrueColor16(visual)
{
}

ColorScaleTrueColor16::~ColorScaleTrueColor16()
{
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

