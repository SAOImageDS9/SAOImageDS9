// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "framet.h"

FrameT::FrameT(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item)
: FrameA(i,c,item)
{
  colorCellsT[0] = NULL;
  colorCellsT[1] = NULL;

  colorScale = NULL;
  colorScaleT[0] = NULL;
  colorScaleT[1] = NULL;
}

FrameT::~FrameT()
{
  if (colorCells)
    delete [] colorCells;

  for (int ii=0; ii<2; ii++)
    if (colorCellsT[ii])
      delete colorCellsT[ii];

  if (colorScale)
    delete colorScale;

  for (int ii=0; ii<2; ii++)
    if (colorScaleT[ii])
      delete colorScaleT[ii];
}

void FrameT::updateColorScale()
{
  // we need colors before we can construct a scale
  if (!colorCells || !colorCellsT[0] || !colorCellsT[1])
    return;
  
  // ColorScale

  if (colorScale)
    delete colorScale;

  switch (context[0].colorScaleType()) {
  case FrScale::LINEARSCALE:
    colorScale =
      new LinearScale(colorCount, colorCells, colorCount);
    break;
  case FrScale::LOGSCALE:
    colorScale =
      new LogScale(SCALESIZE, colorCells, colorCount, context[0].expo());
    break;
  case FrScale::POWSCALE:
    colorScale =
      new PowScale(SCALESIZE, colorCells, colorCount, context[0].expo());
    break;
  case FrScale::SQRTSCALE:
    colorScale = 
      new SqrtScale(SCALESIZE, colorCells, colorCount);
    break;
  case FrScale::SQUAREDSCALE:
    colorScale =
      new SquaredScale(SCALESIZE, colorCells, colorCount);
    break;
  case FrScale::ASINHSCALE:
    colorScale =
      new AsinhScale(SCALESIZE, colorCells, colorCount);
    break;
  case FrScale::SINHSCALE:
    colorScale =
      new SinhScale(SCALESIZE, colorCells, colorCount);
    break;
  case FrScale::HISTEQUSCALE:
    colorScale =
      new HistEquScale(SCALESIZE, colorCells, colorCount, 
		       context[0].histequ(), HISTEQUSIZE); 
    break;
  case FrScale::IISSCALE:
    // na
    break;
  }

  // ColorScaleT

  for (int ii=0; ii<2; ii++)
    if (colorScaleT[ii])
      delete colorScaleT[ii];

  for (int kk=1; kk<3; kk++) {
    switch (context[kk].colorScaleType()) {
    case FrScale::LINEARSCALE:
      colorScaleT[kk-1] =
	new LinearScaleT(colorCount, colorCellsT[kk-1], colorCount);
      break;
    case FrScale::LOGSCALE:
      colorScaleT[kk-1] =
	new LogScaleT(SCALESIZE, colorCellsT[kk-1], colorCount,
		      context[kk].expo());
      break;
    case FrScale::POWSCALE:
      colorScaleT[kk-1] =
	new PowScaleT(SCALESIZE, colorCellsT[kk-1], colorCount,
		      context[kk].expo());
      break;
    case FrScale::SQRTSCALE:
      colorScaleT[kk-1] = 
	new SqrtScaleT(SCALESIZE, colorCellsT[kk-1], colorCount);
      break;
    case FrScale::SQUAREDSCALE:
      colorScaleT[kk-1] =
	new SquaredScaleT(SCALESIZE, colorCellsT[kk-1], colorCount);
      break;
    case FrScale::ASINHSCALE:
      colorScaleT[kk-1] =
	new AsinhScaleT(SCALESIZE, colorCellsT[kk-1], colorCount);
      break;
    case FrScale::SINHSCALE:
      colorScaleT[kk-1] =
	new SinhScaleT(SCALESIZE, colorCellsT[kk-1], colorCount);
      break;
    case FrScale::HISTEQUSCALE:
      colorScaleT[kk-1] =
	new HistEquScaleT(SCALESIZE, colorCellsT[kk-1], colorCount, 
			 context[kk].histequ(), HISTEQUSIZE); 
      break;
    case FrScale::IISSCALE:
      // na
      break;
    }
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
  colorCells = new unsigned char[cnt*3];
  for (int ii=0; ii<cnt; ii++)
    memcpy(colorCells+ii*3, cells+ii*5, 3);

  for (int kk=0; kk<2; kk++) {
    if (colorCellsT[kk])
      delete [] colorCellsT[kk];
    colorCellsT[kk] = new unsigned char[cnt];

    for (int ii=0; ii<cnt; ii++)
      memcpy(colorCellsT[kk]+ii, cells+ii*5+kk+3, 1);
  }

  // clear
  cellsptr_ =NULL;
  cellsparentptr_ =NULL;
}
