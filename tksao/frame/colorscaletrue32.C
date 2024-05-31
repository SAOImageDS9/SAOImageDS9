// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colorscaletrue32.h"

LinearScaleTrueColor32::LinearScaleTrueColor32(int s, 
					       unsigned char* colorCells,
					       int count)
  : ColorScale(s),
    LinearScale(s, colorCells, count)
{}

LogScaleTrueColor32::LogScaleTrueColor32(int s,
					 unsigned char* colorCells, 
					 int count, double exp)
  : ColorScale(s),
    LogScale(s, colorCells, count, exp)
{}

PowScaleTrueColor32::PowScaleTrueColor32(int s,
					 unsigned char* colorCells, 
					 int count, double exp)
  : ColorScale(s),
    PowScale(s, colorCells, count, exp)
{}

SqrtScaleTrueColor32::SqrtScaleTrueColor32(int s,
					   unsigned char* colorCells,
					   int count)
  : ColorScale(s),
    SqrtScale(s, colorCells, count)
{}

SquaredScaleTrueColor32::SquaredScaleTrueColor32(int s,
						 unsigned char* colorCells,
						 int count)
  : ColorScale(s),
    SquaredScale(s, colorCells, count)
{}
    

AsinhScaleTrueColor32::AsinhScaleTrueColor32(int s,
					     unsigned char* colorCells,
					     int count)
  : ColorScale(s),
    AsinhScale(s, colorCells, count)
{}

SinhScaleTrueColor32::SinhScaleTrueColor32(int s,
					   unsigned char* colorCells,
					   int count)
  : ColorScale(s),
    SinhScale(s, colorCells, count)
{}

IISScaleTrueColor32::IISScaleTrueColor32(unsigned char* colorCells,
					 int count)
  : ColorScale(IISSIZE),
    IISScale(colorCells, count)
{}

HistEquScaleTrueColor32::HistEquScaleTrueColor32(int s, 
						 unsigned char* colorCells,
						 int count, 
						 double* hist, int histsize)
  : ColorScale(s),
    HistEquScale(s, colorCells, count, hist, histsize)
{}


