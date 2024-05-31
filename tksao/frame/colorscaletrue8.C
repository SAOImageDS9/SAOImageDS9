// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "colorscaletrue8.h"

ColorScaleTrueColor8::ColorScaleTrueColor8(int s, Visual* visual)
  : ColorScale(s), TrueColor8(visual)
{
}

ColorScaleTrueColor8::~ColorScaleTrueColor8()
{
}

LinearScaleTrueColor8::LinearScaleTrueColor8(int s, 
					     unsigned char* colorCells,
					     int count,
					     Visual* visual)
  : ColorScale(s),
    LinearScale(s, colorCells, count), 
    ColorScaleTrueColor8(s, visual)
{}

LogScaleTrueColor8::LogScaleTrueColor8(int s,
				       unsigned char* colorCells,
				       int count, double exp,
				       Visual* visual)
  : ColorScale(s),
    LogScale(s, colorCells, count, exp), 
    ColorScaleTrueColor8(s, visual)
{}


PowScaleTrueColor8::PowScaleTrueColor8(int s,
				       unsigned char* colorCells,
				       int count, double exp,
				       Visual* visual)
  : ColorScale(s),
    PowScale(s, colorCells, count, exp), 
    ColorScaleTrueColor8(s, visual)
{}

SqrtScaleTrueColor8::SqrtScaleTrueColor8(int s,
					 unsigned char* colorCells,
					 int count,
					 Visual* visual)
  : ColorScale(s),
    SqrtScale(s, colorCells, count), 
    ColorScaleTrueColor8(s, visual)
{}

SquaredScaleTrueColor8::SquaredScaleTrueColor8(int s,
					       unsigned char* colorCells,
					       int count,
					       Visual* visual)
  : ColorScale(s),
    SquaredScale(s, colorCells, count), 
    ColorScaleTrueColor8(s, visual)
{}

AsinhScaleTrueColor8::AsinhScaleTrueColor8(int s,
					   unsigned char* colorCells,
					   int count,
					   Visual* visual)
  : ColorScale(s),
    AsinhScale(s, colorCells, count), 
    ColorScaleTrueColor8(s, visual)
{}

SinhScaleTrueColor8::SinhScaleTrueColor8(int s,
					 unsigned char* colorCells,
					 int count,
					 Visual* visual)
  : ColorScale(s),
    SinhScale(s, colorCells, count), 
    ColorScaleTrueColor8(s, visual)
{}

IISScaleTrueColor8::IISScaleTrueColor8(unsigned char* colorCells,
				       int count,
				       Visual* visual)
  : ColorScale(IISSIZE),
    IISScale(colorCells, count), 
    ColorScaleTrueColor8(IISSIZE, visual)
{}

HistEquScaleTrueColor8::HistEquScaleTrueColor8(int s, 
					       unsigned char* colorCells,
					       int count,
					       double* hist, int histsize,
					       Visual* visual)
  : ColorScale(s),
    HistEquScale(s, colorCells, count, hist, histsize), 
    ColorScaleTrueColor8(s, visual)
{}



