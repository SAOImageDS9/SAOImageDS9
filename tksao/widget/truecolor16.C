// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "truecolor16.h"

TrueColor16::TrueColor16(Visual* visual)
{
#if !(_WIN32)
  rx_ = visual->red_mask;
  gx_ = visual->green_mask;
  bx_ = visual->blue_mask;
#endif
#if _WIN32
  // windows masks are plain wrong
  rx_ = 0x7C00;
  gx_ = 0x03E0;
  bx_ = 0x001F;
#endif

  rm_ = decodeMask((unsigned short)rx_, &rs_);
  gm_ = decodeMask((unsigned short)gx_, &gs_);
  bm_ = decodeMask((unsigned short)bx_, &bs_);
}

unsigned short TrueColor16::decodeMask(unsigned short mask, int* s)
{
  // first calc ffs for mask
  unsigned short m1 = mask;
  int m1s;
  for (m1s=0; m1s<16; m1s++) {
    if (m1 & 0x1)
      break;
    m1 >>= 1;
  }

  // then shift mask to mask a char
  for (int i=0; i<16; i++) {
    if (mask & 0x8000)
      break;
    mask <<= 1;
  }
  mask >>= 8;

  // now calc ffs for new mask
  unsigned short m2 = mask;
  int m2s;
  for (m2s=0; m2s<16; m2s++) {
    if (m2 & 0x1)
      break;
    m2 >>= 1;
  }

  *s = m1s-m2s;
  return mask;
}

void TrueColor16::encodeTrueColor(XColor* src, char* dest, XImage* ximage)
{
  if (!ximage)
    return;

  int msb = ximage->byte_order;

  unsigned short r = (unsigned char)src->red;
  unsigned short g = (unsigned char)src->green;
  unsigned short b = (unsigned char)src->blue;
  unsigned short v = 0;
  v |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
  v |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
  v |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);

  if ((!msb && lsb()) || (msb && !lsb()))
    memcpy(dest, &v, 2);
  else {
    unsigned char* rr = (unsigned char*)(&v);
    *(dest) = *(rr+1);
    *(dest+1) = *(rr);
  }
}

void TrueColor16::decodeTrueColor(char* src, XColor* dest, XImage* ximage)
{
  if (!ximage)
    return;

  int msb = ximage->byte_order;
  unsigned short v = 0;

  if ((!msb && lsb()) || (msb && !lsb()))
    memcpy(dest, &v, 2);
  else {
    unsigned char* rr = (unsigned char*)(&v);
    *(rr+1) = *(src+0);
    *(rr+0) = *(src+1);
  }

  dest->red = (unsigned short)((v & rx_) >> rs_);
  dest->green = (unsigned short)((v & gx_) >> gs_);
  dest->blue = (unsigned short)((v & bx_) >> bs_);
}

void TrueColor16::encodeTrueColor(unsigned char* src, XImage* ximage)
{
  int& width = ximage->width;
  int& height = ximage->height;
  char* data = ximage->data;
  int msb = ximage->byte_order;

  const unsigned char* ptr = src;
  if ((!msb && lsb()) || (msb && !lsb())) {
    for (int jj=0; jj<height; jj++) {
      char* dest = data + jj*ximage->bytes_per_line; // may be padded at the end

      for (int ii=0; ii<width; ii++, dest+=2, ptr+=3) {
	unsigned short r = ptr[0];
	unsigned short g = ptr[1];
	unsigned short b = ptr[2];
	unsigned short v = 0;
	v |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
	v |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
	v |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);

	memcpy(dest, &v, 2);
      }
    }
  }
  else {
    for (int jj=0; jj<height; jj++) {
      char* dest = data + jj*ximage->bytes_per_line;

      for (int ii=0; ii<width; ii++, dest+=2, ptr+=3) {
	unsigned short r = ptr[0];
	unsigned short g = ptr[1];
	unsigned short b = ptr[2];
	unsigned short v = 0;
	v |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
	v |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
	v |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);

	unsigned char* rr = (unsigned char*)(&v);
	*(dest) = *(rr+1);
	*(dest+1) = *(rr);
      }
    }
  }
}
