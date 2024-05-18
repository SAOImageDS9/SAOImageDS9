// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colorbarttruecolor8.h"

ColorbarTTrueColor8::ColorbarTTrueColor8(Tcl_Interp* i,Tk_Canvas c,Tk_Item* item) : ColorbarT(i,c,item), TrueColor8(visual)
{}

void ColorbarTTrueColor8::updateColorsHorz()
{
  int width = options->width-2;
  int height = ((ColorbarBaseOptions*)options)->size-2;
  char* data = xmap->data;
    
  unsigned char row[xmap->bytes_per_line];

  // HUE
  for (int ii=0; ii<width; ii++)
    row[ii] = 
      ((colorCells[((int)(double(ii)/width*colorCount))*5]   & bm_) >> bs_) |
      ((colorCells[((int)(double(ii)/width*colorCount))*5+1] & gm_) >> gs_) |
      ((colorCells[((int)(double(ii)/width*colorCount))*5+2] & rm_) >> rs_);
  for (int jj=0; jj<(int)(height/3.); jj++)
    memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

  // border
  {
    int jj=(int)(height/3.);
    memset(data+(jj*xmap->bytes_per_line), 0, xmap->bytes_per_line);
  }
  
  // S/L
  for (int ii=0; ii<width; ii++) {
    char v = colorCells[((int)(double(ii)/width*colorCount))*5+3];
    row[ii] = (v & bm_) >> bs_ | (v & gm_) >> gs_ | (v & rm_) >> rs_;
  }
  for (int jj=(int)(height/3.+1); jj<(int)(height*2/3.); jj++)
    memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

  // border
  {
    int jj=(int)(height/3.);
    memset(data+(jj*xmap->bytes_per_line), 0, xmap->bytes_per_line);
  }

  // S/V
  for (int ii=0; ii<width; ii++) {
    char v = colorCells[((int)(double(ii)/width*colorCount))*5+4];
    row[ii] = (v & bm_) >> bs_ | (v & gm_) >> gs_ | (v & rm_) >> rs_;
  }
  for (int jj=(int)(height*2/3.+1); jj<height; jj++)
    memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);
}

void ColorbarTTrueColor8::updateColorsVert()
{
  int width = ((ColorbarBaseOptions*)options)->size-2;
  int height = options->height-2;
  char* data = xmap->data;
    
  for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {
    // HUE
    {
      char a =
	((colorCells[((int)(double(jj)/height*colorCount))*5]   & bm_) >> bs_) |
	((colorCells[((int)(double(jj)/height*colorCount))*5+1] & gm_) >> gs_) |
	((colorCells[((int)(double(jj)/height*colorCount))*5+2] & rm_) >> rs_);
      for (int ii=0; ii<(int)(width/3.); ii++)
	data[ii] = a;
    }

    // border
    {
      int ii=(int)(width/3.);
      memset(data+ii,0,1);
    }

    // S/L
    {
      char v = colorCells[((int)(double(jj)/width*colorCount))*5+3];
      char a = (v & bm_) >> bs_ | (v & gm_) >> gs_ | (v & rm_) >> rs_;
      for (int ii=(int)(width/3.+1); ii<(int)(width*2/3.); ii++)
	data[ii] = a;
    }

    // border
    {
      int ii=(int)(width*2/3.);
      memset(data+ii,0,1);
    }

    // V/S
    {
      char v = colorCells[((int)(double(jj)/width*colorCount))*5+4];
      char a = (v & bm_) >> bs_ | (v & gm_) >> gs_ | (v & rm_) >> rs_;
      for (int ii=(int)(width*2/3.); ii<width; ii++)
	data[ii] = a;
    }
  }
}

