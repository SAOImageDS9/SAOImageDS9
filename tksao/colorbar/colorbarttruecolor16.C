// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colorbarttruecolor16.h"

ColorbarTTrueColor16::ColorbarTTrueColor16(Tcl_Interp* i,Tk_Canvas c,Tk_Item* item) : ColorbarT(i,c,item), TrueColor16(visual)
{}

void ColorbarTTrueColor16::updateColorsHorz()
{
  int width = options->width-2;
  int height = ((ColorbarBaseOptions*)options)->size-2;
  char* data = xmap->data;
    
  unsigned char row[xmap->bytes_per_line];

  // HUE
  for (int ii=0; ii<width; ii++) {
    unsigned short r = colorCells[((int)(double(ii)/width*colorCount))*5+2];
    unsigned short g = colorCells[((int)(double(ii)/width*colorCount))*5+1];
    unsigned short b = colorCells[((int)(double(ii)/width*colorCount))*5];
    unsigned short a = 0;
    a |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
    a |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
    a |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);

    if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
      memcpy(row+ii*2, &a, 2);
    }
    else {
      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*2) = *(rr+1);
      *(row+ii*2+1) = *(rr);
    }
  }
  for (int jj=0; jj<(int)(height/3.); jj++)
    memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

  // border
  {
    int jj=(int)(height/3.);
    memset(data+(jj*xmap->bytes_per_line), 0, xmap->bytes_per_line);
  }
  
  // S/L
  for (int ii=0; ii<width; ii++) {
    unsigned short v = colorCells[((int)(double(ii)/width*colorCount))*5+3];
    unsigned short r = v;
    unsigned short g = v;
    unsigned short b = v;
    unsigned short a = 0;
    a |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
    a |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
    a |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);

    if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
      memcpy(row+ii*2, &a, 2);
    } else {
      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*2) = *(rr+1);
      *(row+ii*2+1) = *(rr);
    }
  }
  for (int jj=(int)(height/3.+1); jj<(int)(height*2/3.); jj++)
    memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

  // border
  {
    int jj=(int)(height*2/3.);
    memset(data+(jj*xmap->bytes_per_line), 0, xmap->bytes_per_line);
  }
  
  // V/S
  for (int ii=0; ii<width; ii++) {
    unsigned short v = colorCells[((int)(double(ii)/width*colorCount))*5+4];
    unsigned short r = v;
    unsigned short g = v;
    unsigned short b = v;
    unsigned short a = 0;
    a |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
    a |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
    a |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);

    if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
      memcpy(row+ii*2, &a, 2);
    }
    else {
      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*2) = *(rr+1);
      *(row+ii*2+1) = *(rr);
    }
  }
  for (int jj=(int)(height*2/3.+1); jj<height; jj++)
    memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);
}

void ColorbarTTrueColor16::updateColorsVert()
{
  int width = ((ColorbarBaseOptions*)options)->size-2;
  int height = options->height-2;
  char* data = xmap->data;
    
  for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {
    {
      // HUE
      unsigned short r =colorCells[((int)(double(jj)/height*colorCount))*5];
      unsigned short g =colorCells[((int)(double(jj)/height*colorCount))*5+1];
      unsigned short b =colorCells[((int)(double(jj)/height*colorCount))*5+2];
      unsigned short a =0;
      a |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
      a |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
      a |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);

      if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
	for (int ii=0; ii<(int)(width/3.); ii++)
	  memcpy(data+ii*2, &a, 2);
      }
      else {
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=0; ii<(int)(width/3.); ii++) {
	  *(data+ii*2) = *(rr+1);
	  *(data+ii*2+1) = *(rr);
	}
      }
    }

    // border
    {
      int ii=(int)(width/3.);
      memset(data+ii*2,0,2);
    }

    // S/L
    {
      unsigned short v =colorCells[((int)(double(jj)/height*colorCount))*5+3];
      unsigned short r =v;
      unsigned short g =v;
      unsigned short b =v;
      unsigned short a =0;
      a |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
      a |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
      a |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);

      if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
	for (int ii=(int)(width/3.+1); ii<(int)(width*2/3.); ii++)
	  memcpy(data+ii*2, &a, 2);
      }
      else {
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=(int)(width/3.+1); ii<(int)(width*2/3.); ii++) {
	  *(data+ii*2) = *(rr+1);
	  *(data+ii*2+1) = *(rr);
	}
      }
    }

    // border
    {
      int ii=(int)(width*2/3.);
      memset(data+ii*2,0,2);
    }

    // V/S
    {
      unsigned short v =colorCells[((int)(double(jj)/height*colorCount))*5+4];
      unsigned short r =v;
      unsigned short g =v;
      unsigned short b =v;
      unsigned short a =0;
      a |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
      a |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
      a |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);

      if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
	for (int ii=(int)(width*2/3.+1); ii<width; ii++)
	  memcpy(data+ii*2, &a, 2);
      }
      else {
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=(int)(width*2/3.+1); ii<width; ii++) {
	  *(data+ii*2) = *(rr+1);
	  *(data+ii*2+1) = *(rr);
	}
      }
    }
  }
}
