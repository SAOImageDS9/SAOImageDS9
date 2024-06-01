// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "framet.h"

FrameT::FrameT(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item)
: FrameA(i,c,item)
{
}

FrameT::~FrameT()
{
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

