// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "truecolor24.h"

TrueColor24::TrueColor24(Visual* visual)
{
#if !(_WIN32 || MAC_OSX_TK)
  ax_ = 0;
  rx_ = visual->red_mask;
  gx_ = visual->green_mask;
  bx_ = visual->blue_mask;
#endif
#if MAC_OSX_TK
  // macos masks are plain wrong
  ax_ = 0xFF000000;
  // *** waj ***
  //  rx_ = 0x00FF0000;
  //  gx_ = 0x0000FF00;
  //  bx_ = 0x000000FF;
  rx_ = 0x000000FF;
  gx_ = 0x0000FF00;
  bx_ = 0x00FF0000;
#endif
#if _WIN32
  // windows masks are plain wrong
  ax_ = 0;
  rx_ = 0x00FF0000;
  gx_ = 0x0000FF00;
  bx_ = 0x000000FF;
#endif

  rs_ = decodeMask((unsigned long)rx_);
  gs_ = decodeMask((unsigned long)gx_);
  bs_ = decodeMask((unsigned long)bx_);
  as_ = decodeMask((unsigned long)ax_);
}

int TrueColor24::decodeMask(unsigned long mask)
{
  switch (mask) {
  case 0:
    return 0;
  case 0xff:
    return 0;
  case 0xff00:
    return 8;
  case 0xff0000:
    return 16;
  case 0xff000000:
    return 24;
  }
  return 0;
}

void TrueColor24::encodeTrueColor(XColor* src, char* dest, XImage* ximage)
{
  if (!ximage)
    return;

  switch (ximage->bits_per_pixel) {
  case 24:
    encodeTrueColor24(src, dest, ximage);
    break;
  case 32:
    encodeTrueColor32(src, dest, ximage);
    break;
  }
}

void TrueColor24::decodeTrueColor(char* src, XColor* dest, XImage* ximage)
{
  if (!ximage)
    return;

  switch (ximage->bits_per_pixel) {
  case 24:
    decodeTrueColor24(src, dest, ximage);
    break;
  case 32:
    decodeTrueColor32(src, dest, ximage);
    break;
  }
}

void TrueColor24::encodeTrueColor24(XColor* src, char* dest, XImage* ximage)
{
  int msb = ximage->byte_order;

  unsigned int r = (unsigned char)src->red;
  unsigned int g = (unsigned char)src->green;
  unsigned int b = (unsigned char)src->blue;
  unsigned int v = 0;
  v |= r << rs_;
  v |= g << gs_;
  v |= b << bs_;

  if ((!msb && lsb()) || (msb && !lsb()))
    memcpy(dest, &v, 3);
  else {
    unsigned char* rr = (unsigned char*)(&v);
    *(dest+0) = *(rr+3);
    *(dest+1) = *(rr+2);
    *(dest+2) = *(rr+1);
  }
}

void TrueColor24::decodeTrueColor24(char* src, XColor* dest, XImage* ximage)
{
  int msb = ximage->byte_order;
  unsigned int v = 0;

  if ((!msb && lsb()) || (msb && !lsb()))
    memcpy(&v, src, 3);
  else {
    unsigned char* rr = (unsigned char*)(&v);
    *(rr+3) = *(src+0);
    *(rr+2) = *(src+1);
    *(rr+1) = *(src+2);
  }

  dest->red = (unsigned short)((v & rx_) >> rs_);
  dest->green = (unsigned short)((v & gx_) >> gs_);
  dest->blue = (unsigned short)((v & bx_) >> bs_);
}

void TrueColor24::encodeTrueColor32(XColor* src, char* dest, XImage* ximage)
{
  int msb = ximage->byte_order;

  unsigned int r = (unsigned char)src->red;
  unsigned int g = (unsigned char)src->green;
  unsigned int b = (unsigned char)src->blue;
  unsigned int v = 0;
#ifdef MAC_OSX_TK
  unsigned int a = 0xff;
  v |= a << as_;
#endif
  v |= r << rs_;
  v |= g << gs_;
  v |= b << bs_;

  if ((!msb && lsb()) || (msb && !lsb()))
    memcpy(dest, &v, 4);
  else {
    unsigned char* rr = (unsigned char*)(&v);
    *(dest+0) = *(rr+3);
    *(dest+1) = *(rr+2);
    *(dest+2) = *(rr+1);
    *(dest+3) = *(rr+0);
  }
}

void TrueColor24::decodeTrueColor32(char* src, XColor* dest, XImage* ximage)
{
  int msb = ximage->byte_order;
  unsigned int v = 0;

  if ((!msb && lsb()) || (msb && !lsb()))
    memcpy(dest, &v, 4);
  else {
    unsigned char* rr = (unsigned char*)(&v);
    *(rr+3) = *(src);
    *(rr+2) = *(src+1);
    *(rr+1) = *(src+2);
    *(rr+0) = *(src+3);
  }

  dest->red = (unsigned short)((v & rx_) >> rs_);
  dest->green = (unsigned short)((v & gx_) >> gs_);
  dest->blue = (unsigned short)((v & bx_) >> bs_);
}
void TrueColor24::encodeTrueColor(unsigned char* src, XImage* ximage)
{
  if (!ximage)
    return;

  switch (ximage->bits_per_pixel) {
  case 24:
    encodeTrueColor24(src, ximage);
    break;
  case 32:
    encodeTrueColor32(src, ximage);
    break;
  }
}

void TrueColor24::encodeTrueColor24(unsigned char* src, XImage* ximage)
{
  int& width = ximage->width;
  int& height = ximage->height;
  char* data = ximage->data;
  int bytesPerPixel = ximage->bits_per_pixel/8;
  int msb = ximage->byte_order;

  const unsigned char* ptr = src;
  if ((!msb && lsb()) || (msb && !lsb())) {
    for (int jj=0; jj<height; jj++) {
      char* dest = data + jj*ximage->bytes_per_line;

      for (int ii=0; ii<width; ii++, dest+=bytesPerPixel, ptr+=3) {
	unsigned int r = ptr[0];
	unsigned int g = ptr[1];
	unsigned int b = ptr[2];
	unsigned int v = 0;
	v |= r << rs_;
	v |= g << gs_;
	v |= b << bs_;

	memcpy(dest, &v, 3);
      }
    }
  }
  else {
    for (int jj=0; jj<height; jj++) {
      char* dest = data + jj*ximage->bytes_per_line;

      for (int ii=0; ii<width; ii++, dest+=bytesPerPixel, ptr+=3) {
	unsigned int r = ptr[0];
	unsigned int g = ptr[1];
	unsigned int b = ptr[2];
	unsigned int v = 0;
	v |= r << rs_;
	v |= g << gs_;
	v |= b << bs_;

	unsigned char* rr = (unsigned char*)(&v);
	*(dest) = *(rr+3);
	*(dest+1) = *(rr+2);
	*(dest+2) = *(rr+1);
      }
    }
  }
}

void TrueColor24::encodeTrueColor32(unsigned char* src, XImage* ximage)
{
  int& width = ximage->width;
  int& height = ximage->height;
  char* data = ximage->data;
  int bytesPerPixel = ximage->bits_per_pixel/8;
  int msb = ximage->byte_order;

  const unsigned char* ptr = src;
  if ((!msb && lsb()) || (msb && !lsb())) {
    for (int jj=0; jj<height; jj++) {
      // the line may be padded at the end
      char* dest = data + jj*ximage->bytes_per_line;

      for (int ii=0; ii<width; ii++, dest+=bytesPerPixel, ptr+=3) {
	unsigned int r = ptr[0];
	unsigned int g = ptr[1];
	unsigned int b = ptr[2];
	unsigned int v = 0;
#ifdef MAC_OSX_TK
	unsigned int a = 0xff;
	v |= a << as_;
#endif
	v |= r << rs_;
	v |= g << gs_;
	v |= b << bs_;

	memcpy(dest, &v, 4);
      }
    }
  }
  else {
    for (int jj=0; jj<height; jj++) {
      // the line may be padded at the end
      char* dest = data + jj*ximage->bytes_per_line;

      for (int ii=0; ii<width; ii++, dest+=bytesPerPixel, ptr+=3) {
	unsigned int r = ptr[0];
	unsigned int g = ptr[1];
	unsigned int b = ptr[2];
	unsigned int v = 0;
#ifdef MAC_OSX_TK
	unsigned int a = 0xff;
	v |= a << as_;
#endif
	v |= r << rs_;
	v |= g << gs_;
	v |= b << bs_;

	unsigned char* rr = (unsigned char*)(&v);
	*(dest) = *(rr+3);
	*(dest+1) = *(rr+2);
	*(dest+2) = *(rr+1);
	*(dest+3) = *(rr);
      }
    }
  }
}


