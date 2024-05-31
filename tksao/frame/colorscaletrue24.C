// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colorscaletrue24.h"

LinearScaleTrueColor24::LinearScaleTrueColor24(int s, 
					       unsigned char* colorCells,
					       int count)
  : ColorScale(s),
    LinearScale(s, colorCells, count)
{}

LogScaleTrueColor24::LogScaleTrueColor24(int s,
					 unsigned char* colorCells,
					 int count, double exp)
  : ColorScale(s),
    LogScale(s, colorCells, count, exp)
{}

PowScaleTrueColor24::PowScaleTrueColor24(int s,
					 unsigned char* colorCells,
					 int count, double exp)
  : ColorScale(s),
    PowScale(s, colorCells, count, exp)
{}

SqrtScaleTrueColor24::SqrtScaleTrueColor24(int s,
					   unsigned char* colorCells,
					   int count)
  : ColorScale(s),
    SqrtScale(s, colorCells, count)
{}

SquaredScaleTrueColor24::SquaredScaleTrueColor24(int s,
						 unsigned char* colorCells,
						 int count)
  : ColorScale(s),
    SquaredScale(s, colorCells, count)
{}

AsinhScaleTrueColor24::AsinhScaleTrueColor24(int s,
					     unsigned char* colorCells,
					     int count)
  : ColorScale(s),
    AsinhScale(s, colorCells, count)
{}

SinhScaleTrueColor24::SinhScaleTrueColor24(int s,
					   unsigned char* colorCells,
					   int count)
  : ColorScale(s),
    SinhScale(s, colorCells, count)
{}

IISScaleTrueColor24::IISScaleTrueColor24(unsigned char* colorCells,
					 int count)
  : ColorScale(IISSIZE),
    IISScale(colorCells, count)
{}

HistEquScaleTrueColor24::HistEquScaleTrueColor24(int s, 
						 unsigned char* colorCells,
						 int count, 
						 double* hist, int histsize)
  : ColorScale(s),
    HistEquScale(s, colorCells, count, hist, histsize)
{}
