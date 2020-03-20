// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "truecolor8.h"

TrueColor8::TrueColor8(Visual* visual)
{

#if !(_WIN32)
  rx_ = visual->red_mask;
  gx_ = visual->green_mask;
  bx_ = visual->blue_mask;
#endif
#if _WIN32
  // windows masks are plain wrong
  rx_ = 0xE0;
  gx_ = 0x18;
  bx_ = 0x07;
#endif

  rm_ = decodeMask((unsigned char)rx_, &rs_);
  gm_ = decodeMask((unsigned char)rx_, &gs_);
  bm_ = decodeMask((unsigned char)rx_, &bs_);
}

unsigned char TrueColor8::decodeMask(unsigned char mask, int* s)
{
  *s=0;
  for (int i=0; i<8; i++, (*s)++) {
    if (mask & 0x80)
      break;
    mask <<= 1;
  }
  return mask;
}

void TrueColor8::encodeTrueColor(XColor* src, char* dest, XImage* ximage)
{
  *dest = 
    ((((unsigned char)src->blue)  & bm_) >> bs_) | 
    ((((unsigned char)src->green) & gm_) >> gs_) | 
    ((((unsigned char)src->red)   & rm_) >> rs_);
}

void TrueColor8::decodeTrueColor(char* src, XColor* dest, XImage* ximage)
{
  dest->red = (unsigned short)((*src & rx_) >> rs_);
  dest->green = (unsigned short)((*src & gx_) >> gs_);
  dest->blue = (unsigned short)((*src & bx_) >> bs_);
}

void TrueColor8::encodeTrueColor(unsigned char* src, XImage* ximage)
{
  int& width = ximage->width;
  int& height = ximage->height;
  char* data = ximage->data;

  const unsigned char* ptr = src;
  for (int j=0; j<height; j++) {
    char* dest = data + j*ximage->bytes_per_line;

    for (int i=0; i<width; i++, dest++, ptr+=3)
      *dest =
	((ptr[0] & rm_) >> rs_) |
	((ptr[1] & gm_) >> gs_) |
	((ptr[2] & bm_) >> bs_);
  }
}

