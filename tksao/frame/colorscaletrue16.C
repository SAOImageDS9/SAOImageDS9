// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colorscaletrue16.h"

LinearScaleTrueColor16::LinearScaleTrueColor16(int s, 
					       unsigned char* colorCells,
					       int count)
  : ColorScale(s),
    LinearScale(s, colorCells, count)
{}

LogScaleTrueColor16::LogScaleTrueColor16(int s,
					 unsigned char* colorCells,
					 int count, double exp)
  : ColorScale(s),
    LogScale(s, colorCells, count, exp) 
{}

PowScaleTrueColor16::PowScaleTrueColor16(int s,
					 unsigned char* colorCells,
					 int count, double exp)
  : ColorScale(s),
    PowScale(s, colorCells, count, exp) 
{}

SqrtScaleTrueColor16::SqrtScaleTrueColor16(int s,
					   unsigned char* colorCells,
					   int count)
  : ColorScale(s),
    SqrtScale(s, colorCells, count) 
{}

SquaredScaleTrueColor16::SquaredScaleTrueColor16(int s,
						 unsigned char* colorCells,
						 int count)
  : ColorScale(s),
    SquaredScale(s, colorCells, count) 
{}

AsinhScaleTrueColor16::AsinhScaleTrueColor16(int s,
					     unsigned char* colorCells,
					     int count)
  : ColorScale(s),
    AsinhScale(s, colorCells, count) 
{}

SinhScaleTrueColor16::SinhScaleTrueColor16(int s,
					   unsigned char* colorCells,
					   int count)
  : ColorScale(s),
    SinhScale(s, colorCells, count) 
{}

IISScaleTrueColor16::IISScaleTrueColor16(unsigned char* colorCells,
					 int count)
  : ColorScale(IISSIZE),
    IISScale(colorCells, count)
{}

HistEquScaleTrueColor16::HistEquScaleTrueColor16(int s, 
						 unsigned char* colorCells,
						 int count, 
						 double* hist, int histsize)
  : ColorScale(s),
    HistEquScale(s, colorCells, count, hist, histsize) 
{}

