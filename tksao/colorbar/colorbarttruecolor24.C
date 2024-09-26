// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colorbarttruecolor24.h"

ColorbarTTrueColor24::ColorbarTTrueColor24(Tcl_Interp* i,Tk_Canvas c,Tk_Item* item) : ColorbarT(i,c,item), TrueColor24(visual)
{}

void ColorbarTTrueColor24::updateColorsHorz()
{
  int width = options->width-2;
  int height = ((ColorbarBaseOptions*)options)->size-2;
  char* data = xmap->data;

  switch (xmap->bits_per_pixel) {
  case 32:
    updateColors32Horz(width, height, data);
    break;
  case 24:
    updateColors24Horz(width, height, data);
    break;
  default:
    internalError("Colorbar: bad bits/pixel");
    return;
  }
}

void ColorbarTTrueColor24::updateColorsVert()
{
  int width = ((ColorbarBaseOptions*)options)->size-2;
  int height = options->height-2;
  char* data = xmap->data;
    
  switch (xmap->bits_per_pixel) {
  case 32:
    updateColors32Vert(width, height, data);
    break;
  case 24:
    updateColors24Vert(width, height, data);
    break;
  default:
    internalError("Colorbar: bad bits/pixel");
    return;
  }
}

void ColorbarTTrueColor24::updateColors24Horz(int width, int height, char* data)
{
  unsigned char row[xmap->bytes_per_line];

  // HUE
  for (int ii=0; ii<width; ii++) {
    unsigned int r = colorCells[(int)(double(ii)/width*colorCount)*5+2];
    unsigned int g = colorCells[(int)(double(ii)/width*colorCount)*5+1];
    unsigned int b = colorCells[(int)(double(ii)/width*colorCount)*5];
    unsigned int a = 0;
    a |= r << rs_;
    a |= g << gs_;
    a |= b << bs_;

    if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
      memcpy(row+ii*3, &a, 3);
    }
    else {
      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*3) = *(rr+3);
      *(row+ii*3+1) = *(rr+2);
      *(row+ii*3+2) = *(rr+1);
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
    unsigned int v = colorCells[((int)(double(ii)/width*colorCount))*5+3];
    unsigned int r = v;
    unsigned int g = v;
    unsigned int b = v;
    unsigned int a = 0;
    a |= r << rs_;
    a |= g << gs_;
    a |= b << bs_;

    if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
      memcpy(row+ii*3, &a, 3);
    }
    else {
      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*3) = *(rr+3);
      *(row+ii*3+1) = *(rr+2);
      *(row+ii*3+2) = *(rr+1);
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
    unsigned int v = colorCells[((int)(double(ii)/width*colorCount))*5+4];
    unsigned int r = v;
    unsigned int g = v;
    unsigned int b = v;
    unsigned int a = 0;
    a |= r << rs_;
    a |= g << gs_;
    a |= b << bs_;

    if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
      memcpy(row+ii*3, &a, 3);
    }
    else {
      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*3) = *(rr+3);
      *(row+ii*3+1) = *(rr+2);
      *(row+ii*3+2) = *(rr+1);
    }
  }
  for (int jj=(int)(height*2/3.+1); jj<height; jj++)
    memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);
}

void ColorbarTTrueColor24::updateColors24Vert(int width, int height,
					      char* data)
{
  for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {
    {
      // HUE
      unsigned int r = colorCells[(int)(double(jj)/height*colorCount)*5+2];
      unsigned int g = colorCells[(int)(double(jj)/height*colorCount)*5+1];
      unsigned int b = colorCells[(int)(double(jj)/height*colorCount)*5];
      unsigned int a = 0;
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
	for (int ii=0; ii<(int)(width/3.); ii++)
	  memcpy(data+ii*3, &a, 3);
      }
      else {
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=0; ii<(int)(width/3.); ii++) {
	  *(data+ii*3) = *(rr+3);
	  *(data+ii*3+1) = *(rr+2);
	  *(data+ii*3+2) = *(rr+1);
	}
      }
    }  

    // border
    {
      int ii=(int)(width/3.);
      memset(data+ii*3,0,3);
    }

    // S/L
    {
      unsigned int v = colorCells[(int)(double(jj)/height*colorCount)*5+3];
      unsigned int r = v;
      unsigned int g = v;
      unsigned int b = v;
      unsigned int a = 0;
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
	for (int ii=(int)(width/3.+1); ii<(int)(width*2/3.); ii++)
	  memcpy(data+ii*3, &a, 3);
      }
      else {
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=(int)(width/3.+1); ii<(int)(width*2/3.); ii++) {
	  *(data+ii*3) = *(rr+3);
	  *(data+ii*3+1) = *(rr+2);
	  *(data+ii*3+2) = *(rr+1);
	}
      }
    }

    // border
    {
      int ii=(int)(width*2/3.);
      memset(data+ii*3,0,3);
    }

    // S/V
    {
      unsigned int v = colorCells[(int)(double(jj)/height*colorCount)*5+4];
      unsigned int r = v;
      unsigned int g = v;
      unsigned int b = v;
      unsigned int a = 0;
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
	for (int ii=(int)(width*2/3.+1); ii<width; ii++)
	  memcpy(data+ii*3, &a, 3);
      }
      else {
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=(int)(width*2/3.+1); ii<width; ii++) {
	  *(data+ii*3) = *(rr+3);
	  *(data+ii*3+1) = *(rr+2);
	  *(data+ii*3+2) = *(rr+1);
	}
      }
    }
  }
}

void ColorbarTTrueColor24::updateColors32Horz(int width, int height, char* data)
{
  unsigned char row[xmap->bytes_per_line];

  // HUE
  for (int ii=0; ii<width; ii++) {
    unsigned int r = colorCells[(int)(double(ii)/width*colorCount)*5+2];
    unsigned int g = colorCells[(int)(double(ii)/width*colorCount)*5+1];
    unsigned int b = colorCells[(int)(double(ii)/width*colorCount)*5];
    unsigned int a = 0;
#ifdef MAC_OSX_TK
    a |= 0xff << 24;
#endif
    a |= r << rs_;
    a |= g << gs_;
    a |= b << bs_;

    if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
      memcpy(row+ii*4, &a, 4);
    }
    else {
      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*4) = *(rr+3);
      *(row+ii*4+1) = *(rr+2);
      *(row+ii*4+2) = *(rr+1);
      *(row+ii*4+3) = *(rr);
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
    unsigned int v = colorCells[((int)(double(ii)/width*colorCount))*5+3];
    unsigned int r = v;
    unsigned int g = v;
    unsigned int b = v;
    unsigned int a = 0;
#ifdef MAC_OSX_TK
    a |= 0xff << 24;
#endif
    a |= r << rs_;
    a |= g << gs_;
    a |= b << bs_;

    if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
      memcpy(row+ii*4, &a, 4);
    }
    else {
      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*4) = *(rr+3);
      *(row+ii*4+1) = *(rr+2);
      *(row+ii*4+2) = *(rr+1);
      *(row+ii*4+3) = *(rr);
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
    unsigned int v = colorCells[((int)(double(ii)/width*colorCount))*5+4];
    unsigned int r = v;
    unsigned int g = v;
    unsigned int b = v;
    unsigned int a = 0;
#ifdef MAC_OSX_TK
    a |= 0xff << 24;
#endif
    a |= r << rs_;
    a |= g << gs_;
    a |= b << bs_;

    if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
      memcpy(row+ii*4, &a, 4);
    }
    else {
      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*4) = *(rr+3);
      *(row+ii*4+1) = *(rr+2);
      *(row+ii*4+2) = *(rr+1);
      *(row+ii*4+3) = *(rr);
    }
  }
  for (int jj=(int)(height*2/3.+1); jj<height; jj++)
    memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);
}

void ColorbarTTrueColor24::updateColors32Vert(int width, int height, 
					      char* data)
{
  for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {
    {
      // HUE
      unsigned int r = colorCells[(int)(double(jj)/height*colorCount)*5+2];
      unsigned int g = colorCells[(int)(double(jj)/height*colorCount)*5+1];
      unsigned int b = colorCells[(int)(double(jj)/height*colorCount)*5];
      unsigned int a = 0;
#ifdef MAC_OSX_TK
      a |= 0xff << 24;
#endif
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
	for (int ii=0; ii<(int)(width/3.); ii++)
	  memcpy(data+ii*4, &a, 4);
      }
      else {
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=0; ii<(int)(width/3.); ii++) {
	  *(data+ii*4) = *(rr+3);
	  *(data+ii*4+1) = *(rr+2);
	  *(data+ii*4+2) = *(rr+1);
	  *(data+ii*4+3) = *(rr);
	}
      }
    }

    // border
    {
      int ii=(int)(width/3.);
      memset(data+ii*4,0,4);
    }

    // S/L
    {
      unsigned int v = colorCells[(int)(double(jj)/height*colorCount)*5+3];
      unsigned int r = v;
      unsigned int g = v;
      unsigned int b = v;
      unsigned int a = 0;
#ifdef MAC_OSX_TK
      a |= 0xff << 24;
#endif
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
	for (int ii=(int)(width/3.+1); ii<(int)(width*2/3.); ii++)
	  memcpy(data+ii*4, &a, 4);
      }
      else {
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=(int)(width/3.+1); ii<(int)(width*2/3.); ii++) {
	  *(data+ii*4) = *(rr+3);
	  *(data+ii*4+1) = *(rr+2);
	  *(data+ii*4+2) = *(rr+1);
	  *(data+ii*4+3) = *(rr);
	}
      }
    }

    // border
    {
      int ii=(int)(width*2/3.);
      memset(data+ii*4,0,4);
    }

    // S/V
    {
      unsigned int v = colorCells[(int)(double(jj)/height*colorCount)*5+4];
      unsigned int r = v;
      unsigned int g = v;
      unsigned int b = v;
      unsigned int a = 0;
#ifdef MAC_OSX_TK
      a |= 0xff << 24;
#endif
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
	for (int ii=(int)(width*2/3.+1); ii<width; ii++)
	  memcpy(data+ii*4, &a, 4);
      }
      else {
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=(int)(width*2/3.+1); ii<width; ii++) {
	  *(data+ii*4) = *(rr+3);
	  *(data+ii*4+1) = *(rr+2);
	  *(data+ii*4+2) = *(rr+1);
	  *(data+ii*4+3) = *(rr);
	}
      }
    }
  }
}

