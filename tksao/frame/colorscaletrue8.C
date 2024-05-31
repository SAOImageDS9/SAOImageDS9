// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "colorscaletrue8.h"

LinearScaleTrueColor8::LinearScaleTrueColor8(int s, 
					     unsigned char* colorCells,
					     int count)
  : ColorScale(s),
    LinearScale(s, colorCells, count)
{}

LogScaleTrueColor8::LogScaleTrueColor8(int s,
				       unsigned char* colorCells,
				       int count, double exp)
  : ColorScale(s),
    LogScale(s, colorCells, count, exp)
{}


PowScaleTrueColor8::PowScaleTrueColor8(int s,
				       unsigned char* colorCells,
				       int count, double exp)
  : ColorScale(s),
    PowScale(s, colorCells, count, exp)
{}

SqrtScaleTrueColor8::SqrtScaleTrueColor8(int s,
					 unsigned char* colorCells,
					 int count)
  : ColorScale(s),
    SqrtScale(s, colorCells, count)
{}

SquaredScaleTrueColor8::SquaredScaleTrueColor8(int s,
					       unsigned char* colorCells,
					       int count)
  : ColorScale(s),
    SquaredScale(s, colorCells, count)
{}

AsinhScaleTrueColor8::AsinhScaleTrueColor8(int s,
					   unsigned char* colorCells,
					   int count)
  : ColorScale(s),
    AsinhScale(s, colorCells, count)
{}

SinhScaleTrueColor8::SinhScaleTrueColor8(int s,
					 unsigned char* colorCells,
					 int count)
  : ColorScale(s),
    SinhScale(s, colorCells, count)
{}

IISScaleTrueColor8::IISScaleTrueColor8(unsigned char* colorCells,
				       int count)
  : ColorScale(IISSIZE),
    IISScale(colorCells, count)
{}

HistEquScaleTrueColor8::HistEquScaleTrueColor8(int s, 
					       unsigned char* colorCells,
					       int count,
					       double* hist, int histsize)
  : ColorScale(s),
    HistEquScale(s, colorCells, count, hist, histsize)
{}



