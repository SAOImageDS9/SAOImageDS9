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
  for (int ii=0; ii<width; ii++)
    row[ii] = 
      ((colorCells[((int)(double(ii)/width*colorCount))*5]   & bm_) >> bs_) |
      ((colorCells[((int)(double(ii)/width*colorCount))*5+1] & gm_) >> gs_) |
      ((colorCells[((int)(double(ii)/width*colorCount))*5+2] & rm_) >> rs_);

  for (int jj=0; jj<(int)(height/3.); jj++)
    memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

  for (int ii=0; ii<width; ii++) {
    char r = colorCells[((int)(double(ii)/width*colorCount))*5+3];
    row[ii] = (r & rm_) >> rs_;
  }
  for (int jj=(int)(height/3.); jj<(int)(height*2/3.); jj++)
    memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

  for (int ii=0; ii<width; ii++) {
    char r = colorCells[((int)(double(ii)/width*colorCount))*5+4];
    row[ii] = (r & rm_) >> rs_;
  }
  for (int jj=(int)(height*2/3.); jj<height; jj++)
    memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);
}

void ColorbarTTrueColor8::updateColorsVert()
{
  int width = ((ColorbarBaseOptions*)options)->size-2;
  int height = options->height-2;
  char* data = xmap->data;
    
  for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {
    {
      char r = colorCells[((int)(double(jj)/height*colorCount))*5];
      char a = (r & rm_) >> rs_;
      for (int ii=0; ii<(int)(width/9.); ii++)
	data[ii] = a;
    }
    {
      char g = colorCells[((int)(double(jj)/height*colorCount))*5+1];
      char a = (g & gm_) >> gs_;
      for (int ii=(int)(width/9.); ii<(int)(width*2/9.); ii++)
	data[ii] = a;
    }
    {
      char b =colorCells[((int)(double(jj)/height*colorCount))*5+2];
      char a = (b & bm_) >> bs_;
      for (int ii=(int)(width*2/9.); ii<(int)(width*3/9.); ii++)
	data[ii] = a;
    }

    {
      char r = colorCells[((int)(double(jj)/height*colorCount))*5+3];
      char a = (r & rm_) >> rs_;
      for (int ii=(int)(width*3/9.); ii<(int)(width*6/9.); ii++)
	data[ii] = a;
    }
    {
      char r = colorCells[((int)(double(jj)/height*colorCount))*5+4];
      char a = (r & rm_) >> rs_;
      for (int ii=(int)(width*6/9.); ii<width; ii++)
	data[ii] = a;
    }
  }
}

