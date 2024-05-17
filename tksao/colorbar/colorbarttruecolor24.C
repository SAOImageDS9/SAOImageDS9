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
  // if we have cross platforms, we need to byte swap
  unsigned char row[xmap->bytes_per_line];
  if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
    for (int ii=0; ii<width; ii++) {
      unsigned int r = colorCells[(int)(double(ii)/width*colorCount)*5+2];
      unsigned int g = colorCells[(int)(double(ii)/width*colorCount)*5+1];
      unsigned int b = colorCells[(int)(double(ii)/width*colorCount)*5];
      unsigned int a = 0;
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      memcpy(row+ii*3, &a, 3);
    }
    for (int jj=0; jj<(int)(height/3.); jj++)
      memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

    for (int ii=0; ii<width; ii++) {
      unsigned short v = colorCells[((int)(double(ii)/width*colorCount))*5+3];
      unsigned short r = v;
      unsigned short g = v;
      unsigned short b = v;
      unsigned short a = 0;
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      memcpy(row+ii*3, &a, 3);
    }
    for (int jj=(int)(height/3.); jj<(int)(height*2/3.); jj++)
      memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

    for (int ii=0; ii<width; ii++) {
      unsigned short v = colorCells[((int)(double(ii)/width*colorCount))*5+4];
      unsigned short r = v;
      unsigned short g = v;
      unsigned short b = v;
      unsigned short a = 0;
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      memcpy(row+ii*3, &a, 3);
    }
    for (int jj=(int)(height*2/3.); jj<height; jj++)
      memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);
  }
  else {
    for (int ii=0; ii<width; ii++) {
      unsigned int r = colorCells[(int)(double(ii)/width*colorCount)*5+2];
      unsigned int g = colorCells[(int)(double(ii)/width*colorCount)*5+1];
      unsigned int b = colorCells[(int)(double(ii)/width*colorCount)*5];
      unsigned int a = 0;
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*3) = *(rr+3);
      *(row+ii*3+1) = *(rr+2);
      *(row+ii*3+2) = *(rr+1);
    }
    for (int jj=0; jj<(int)(height/3.); jj++)
      memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

    for (int ii=0; ii<width; ii++) {
      unsigned int v = colorCells[(int)(double(ii)/width*colorCount)*5+3];
      unsigned int r = v;
      unsigned int g = v;
      unsigned int b = v;
      unsigned int a = 0;
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*3) = *(rr+3);
      *(row+ii*3+1) = *(rr+2);
      *(row+ii*3+2) = *(rr+1);
    }
    for (int jj=(int)(height/3.); jj<(int)(height*2/3.); jj++)
      memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);
    
    for (int ii=0; ii<width; ii++) {
      unsigned int v = colorCells[(int)(double(ii)/width*colorCount)*5+4];
      unsigned int r = v;
      unsigned int g = v;
      unsigned int b = v;
      unsigned int a = 0;
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*3) = *(rr+3);
      *(row+ii*3+1) = *(rr+2);
      *(row+ii*3+2) = *(rr+1);
    }
    for (int jj=(int)(height*2/3.); jj<height; jj++)
      memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);
  }
}

void ColorbarTTrueColor24::updateColors24Vert(int width, int height,
						char* data)
{
  // if we have cross platforms, we need to byte swap
  if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
    for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {
      {
	unsigned int r = colorCells[(int)(double(jj)/height*colorCount)*5];
	unsigned int a = 0;
	a |= r << rs_;
	for (int ii=0; ii<(int)(width/9.); ii++)
	  memcpy(data+ii*3, &a, 3);
      }

      // green
      {
	unsigned int g = colorCells[(int)(double(jj)/height*colorCount)*3+1];
	unsigned int a = 0;
	a |= g << gs_;
	for (int ii=(int)(width/3.); ii<(int)(width*2/3.); ii++)
	  memcpy(data+ii*3, &a, 3);
      }

      // blue
      {
	unsigned int b = colorCells[(int)(double(jj)/height*colorCount)*3+2];
	unsigned int a = 0;
	a |= b << bs_;
	for (int ii=(int)(width*2/3.); ii<width; ii++)
	  memcpy(data+ii*3, &a, 3);
      }
    }
  }
  else {
    for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {

      // red
      {
	unsigned int r = colorCells[(int)(double(jj)/height*colorCount)*3];
	unsigned int a = 0;
	a |= r << rs_;
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=0; ii<(int)(width/3.); ii++) {
	  *(data+ii*3) = *(rr+3);
	  *(data+ii*3+1) = *(rr+2);
	  *(data+ii*3+2) = *(rr+1);
	}
      }

      // green
      {
	unsigned int g = colorCells[(int)(double(jj)/width*colorCount)*3+1];
	unsigned int a = 0;
	a |= g << gs_;
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=(int)(width/3.); ii<(int)(width*2/3.); ii++) {
	  *(data+ii*3) = *(rr+3);
	  *(data+ii*3+1) = *(rr+2);
	  *(data+ii*3+2) = *(rr+1);
	}
      }

      // blue
      {
	unsigned int b = colorCells[(int)(double(jj)/width*colorCount)*3+2];
	unsigned int a = 0;
	a |= b << bs_;
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=(int)(width*2/3.); ii<width; ii++) {
	  *(data+ii*3) = *(rr+3);
	  *(data+ii*3+1) = *(rr+2);
	  *(data+ii*3+2) = *(rr+1);
	}
      }
    }
  }
}

void ColorbarTTrueColor24::updateColors32Horz(int width, int height, 
						char* data)
{
  // if we have cross platforms, we need to byte swap
  unsigned char row[xmap->bytes_per_line];
  if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {

    // red
    for (int ii=0; ii<width; ii++) {
      unsigned int r = colorCells[(int)(double(ii)/width*colorCount)*3];
      unsigned int a = 0;
#ifdef MAC_OSX_TK
      a |= 0xff << 24;
#endif
      a |= r << rs_;
      memcpy(row+ii*4, &a, 4);
    }
    for (int jj=0; jj<(int)(height/3.); jj++)
      memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

    // green
    for (int ii=0; ii<width; ii++) {
      unsigned int g = colorCells[(int)(double(ii)/width*colorCount)*3+1];
      unsigned int a = 0;
#ifdef MAC_OSX_TK
      a |= 0xff << 24;
#endif
      a |= g << gs_;
      memcpy(row+ii*4, &a, 4);
    }
    for (int jj=(int)(height/3.); jj<(int)(height*2/3.); jj++)
      memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

    // blue
    for (int ii=0; ii<width; ii++) {
      unsigned int b = colorCells[(int)(double(ii)/width*colorCount)*3+2];
      unsigned int a = 0;
#ifdef MAC_OSX_TK
      a |= 0xff << 24;
#endif
      a |= b << bs_;
      memcpy(row+ii*4, &a, 4);
    }
    for (int jj=(int)(height*2/3.); jj<height; jj++)
      memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

  }
  else {
    // red
    for (int i=0; i<width; i++) {
      unsigned int r = colorCells[(int)(double(i)/width*colorCount)*3];
      unsigned int a = 0;
#ifdef MAC_OSX_TK
      a |= 0xff << 24;
#endif
      a |= r << rs_;
      unsigned char* rr = (unsigned char*)(&a);
      *(row+i*4) = *(rr+3);
      *(row+i*4+1) = *(rr+2);
      *(row+i*4+2) = *(rr+1);
      *(row+i*4+3) = *(rr);
    }
    for (int j=0; j<(int)(height/3.); j++)
      memcpy(data+(j*xmap->bytes_per_line), row, xmap->bytes_per_line);

    // green
    for (int i=0; i<width; i++) {
      unsigned int g = colorCells[(int)(double(i)/width*colorCount)*3+1];
      unsigned int a = 0;
#ifdef MAC_OSX_TK
      a |= 0xff << 24;
#endif
      a |= g << gs_;
      unsigned char* rr = (unsigned char*)(&a);
      *(row+i*4) = *(rr+3);
      *(row+i*4+1) = *(rr+2);
      *(row+i*4+2) = *(rr+1);
      *(row+i*4+3) = *(rr);
    }
    for (int j=(int)(height/3.); j<(int)(height*2/3.); j++)
      memcpy(data+(j*xmap->bytes_per_line), row, xmap->bytes_per_line);

    // blue
    for (int i=0; i<width; i++) {
      unsigned int b = colorCells[(int)(double(i)/width*colorCount)*3+2];
      unsigned int a = 0;
#ifdef MAC_OSX_TK
      a |= 0xff << 24;
#endif
      a |= b << bs_;
      unsigned char* rr = (unsigned char*)(&a);
      *(row+i*4) = *(rr+3);
      *(row+i*4+1) = *(rr+2);
      *(row+i*4+2) = *(rr+1);
      *(row+i*4+3) = *(rr);
    }
    for (int j=(int)(height*2/3.); j<height; j++)
      memcpy(data+(j*xmap->bytes_per_line), row, xmap->bytes_per_line);
  }
}

void ColorbarTTrueColor24::updateColors32Vert(int width, int height, 
						char* data)
{
  // if we have cross platforms, we need to byte swap
  if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
    for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {

      // red
      {
	unsigned int r = colorCells[(int)(double(jj)/height*colorCount)*3];
	unsigned int a = 0;
#ifdef MAC_OSX_TK
	a |= 0xff << 24;
#endif
	a |= r << rs_;
	for (int ii=0; ii<(int)(width/3.); ii++)
	  memcpy(data+ii*4, &a, 4);
      }

      // green
      {
	unsigned int g = colorCells[(int)(double(jj)/height*colorCount)*3+1];
	unsigned int a = 0;
#ifdef MAC_OSX_TK
	a |= 0xff << 24;
#endif
	a |= g << gs_;
	for (int ii=(int)(width/3.); ii<(int)(width*2/3.); ii++)
	  memcpy(data+ii*4, &a, 4);
      }

      // blue
      {
	unsigned int b = colorCells[(int)(double(jj)/height*colorCount)*3+2];
	unsigned int a = 0;
#ifdef MAC_OSX_TK
	a |= 0xff << 24;
#endif
	a |= b << bs_;
	for (int ii=(int)(width*2/3.); ii<width; ii++)
	  memcpy(data+ii*4, &a, 4);
      }
    }
  }
  else {
    for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {

      // red
      {
	unsigned int r = colorCells[(int)(double(jj)/height*colorCount)*3];
	unsigned int a = 0;
#ifdef MAC_OSX_TK
	a |= 0xff << 24;
#endif
	a |= r << rs_;
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=0; ii<(int)(width/3.); ii++) {
	  *(data+ii*4) = *(rr+3);
	  *(data+ii*4+1) = *(rr+2);
	  *(data+ii*4+2) = *(rr+1);
	  *(data+ii*4+3) = *(rr);
	}
      }

      // green
      {
	unsigned int g = colorCells[(int)(double(jj)/height*colorCount)*3+1];
	unsigned int a = 0;
#ifdef MAC_OSX_TK
	a |= 0xff << 24;
#endif
	a |= g << gs_;
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=(int)(width/3.); ii<(int)(width*2/3.); ii++) {
	  *(data+ii*4) = *(rr+3);
	  *(data+ii*4+1) = *(rr+2);
	  *(data+ii*4+2) = *(rr+1);
	  *(data+ii*4+3) = *(rr);
	}
      }

      // blue
      {
	unsigned int b = colorCells[(int)(double(jj)/height*colorCount)*3+2];
	unsigned int a = 0;
#ifdef MAC_OSX_TK
	a |= 0xff << 24;
#endif
	a |= b << bs_;
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=(int)(width*2/3.); ii<width; ii++) {
	  *(data+ii*4) = *(rr+3);
	  *(data+ii*4+1) = *(rr+2);
	  *(data+ii*4+2) = *(rr+1);
	  *(data+ii*4+3) = *(rr);
	}
      }
    }
  }
}

