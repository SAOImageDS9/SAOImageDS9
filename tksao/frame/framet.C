// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "framet.h"

FrameT::FrameT(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item)
: FrameA(i,c,item)
{
  for (int ii=0; ii<5; ii++)
    colorScale[ii] = NULL;
}

FrameT::~FrameT()
{
  for (int ii=0; ii<5; ii++)
    if (colorScale[ii])
      delete colorScale[ii];

  if (colorCells)
    delete [] colorCells;
}

void FrameT::updateColorScale()
{
  // we need colors before we can construct a scale
  if (!colorCells)
    return;
  
  for (int ii=0; ii<5; ii++)
    if (colorScale[ii])
      delete colorScale[ii];

  for (int ii=0; ii<3; ii++) {
    switch (ii) {
    case 0:
      updateColorScale(0,context[ii].colorScaleType());
      updateColorScale(1,context[ii].colorScaleType());
      updateColorScale(2,context[ii].colorScaleType());
      break;
    case 1:
      updateColorScale(3,context[ii].colorScaleType());
      break;
    case 2:
      updateColorScale(4,context[ii].colorScaleType());
      break;
    }
  }
}

void FrameT::updateColorScale(int jj, FrScale::ColorScaleType type) {
  switch (type) {
  case FrScale::LINEARSCALE:
    colorScale[jj] = 
      new LinearScaleT(jj, colorCount, colorCells, colorCount);
    break;
  case FrScale::LOGSCALE:
    colorScale[jj] =
      new LogScaleT(jj, SCALESIZE, colorCells, colorCount, 
		    context[jj].expo());
    break;
  case FrScale::POWSCALE:
    colorScale[jj] =
      new PowScaleT(jj, SCALESIZE, colorCells, colorCount, 
		    context[jj].expo());
    break;
  case FrScale::SQRTSCALE:
    colorScale[jj] =
      new SqrtScaleT(jj, SCALESIZE, colorCells, colorCount);
    break;
  case FrScale::SQUAREDSCALE:
    colorScale[jj] =
      new SquaredScaleT(jj, SCALESIZE, colorCells, colorCount);
    break;
  case FrScale::ASINHSCALE:
    colorScale[jj] =
      new AsinhScaleT(jj, SCALESIZE, colorCells, colorCount);
    break;
  case FrScale::SINHSCALE:
    colorScale[jj] =
      new SinhScaleT(jj, SCALESIZE, colorCells, colorCount);
    break;
  case FrScale::HISTEQUSCALE:
    colorScale[jj] = 
      new HistEquScaleT(jj, SCALESIZE, colorCells, colorCount, 
			context[jj].histequ(), HISTEQUSIZE);
    break;
  case FrScale::IISSCALE:
    // na
    break;
  }
}

void FrameT::updateColorCells(int cnt)
{
  if (!cellsptr_ || !cellsparentptr_)
    return;
  
  unsigned char* cells = (unsigned char*)cellsptr_;
  colorCount = cnt;
  if (colorCells)
    delete [] colorCells;
  colorCells = new unsigned char[cnt*5];
  memcpy(colorCells, cells, cnt*5);

  // clear
  cellsptr_ =NULL;
  cellsparentptr_ =NULL;
}

