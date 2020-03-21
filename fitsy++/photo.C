// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include <tk.h>

#include "photo.h"
#include "util.h"

FitsPhoto::FitsPhoto(Tcl_Interp* interp, const char* ph)
{
  // reset
  valid_ = 0;
  
  if (*ph == '\0') {
    Tcl_AppendResult(interp, "bad image name ", NULL);
    return;
  }
  Tk_PhotoHandle photo = Tk_FindPhoto(interp, ph);
  if (!photo) {
    Tcl_AppendResult(interp, "bad image handle ", NULL);
    return;
  }
  Tk_PhotoImageBlock block;
  if (!Tk_PhotoGetImage(photo,&block)) {
    Tcl_AppendResult(interp, "bad image block ", NULL);
    return;
  }
  int width =0;
  int height =0;
  Tk_PhotoGetSize(photo, &width, &height);

  // new header
  head_ = new FitsHead(width, height, 1, 8);
  if (!head_->isValid())
    return;

  size_t size = (size_t)width*height;
  unsigned char* dest  = new unsigned char[size];
  data_ = dest;

  dataSize_ = size;
  dataSkip_ = 0;

  unsigned char* src = block.pixelPtr;
  for (int jj=height-1; jj>=0; jj--)
    for (int ii=0; ii<width; ii++) {
      int pp = (jj*width+ii)*block.pixelSize;
      unsigned char rr = src[pp+block.offset[0]];
      unsigned char gg = src[pp+block.offset[1]];
      unsigned char bb = src[pp+block.offset[2]];
      //unsigned char vv = (rr+gg+bb)/3.;
      //unsigned char vv = .2126*rr + .7152*gg + .0722*bb;
      // must round
      unsigned char vv = (.299*rr + .587*gg + .114*bb)+.5;
      *dest++ = vv;
    }

  // made it this far, must be valid
  byteswap_ = 0;
  endian_ = lsb() ? LITTLE : BIG;
  valid_ = 1;
}

FitsPhoto::~FitsPhoto()
{
  if (data_)
    delete [] (unsigned char*)data_;
}

FitsPhotoCube::FitsPhotoCube(Tcl_Interp* interp, const char* ph)
{
  // reset
  valid_ = 0;
  
  if (*ph == '\0') {
    Tcl_AppendResult(interp, "bad image name ", NULL);
    return;
  }
  Tk_PhotoHandle photo = Tk_FindPhoto(interp, ph);
  if (!photo) {
    Tcl_AppendResult(interp, "bad image handle ", NULL);
    return;
  }
  Tk_PhotoImageBlock block;
  if (!Tk_PhotoGetImage(photo,&block)) {
    Tcl_AppendResult(interp, "bad image block ", NULL);
    return;
  }
  int width =0;
  int height =0;
  int depth =3;
  Tk_PhotoGetSize(photo, &width, &height);

  // new header
  head_ = new FitsHead(width, height, depth, 8);
  if (!head_->isValid())
    return;

  size_t size = (size_t)width*height*depth;
  unsigned char* dest  = new unsigned char[size];
  data_ = dest;

  dataSize_ = size;
  dataSkip_ = 0;

  unsigned char* src = block.pixelPtr;
  for (int kk=0; kk<depth; kk++) {
    for (int jj=height-1; jj>=0; jj--) {
      for (int ii=0; ii<width; ii++) {
	int pp = (jj*width+ii)*block.pixelSize;
	*dest++ = src[pp+block.offset[kk]];
      }
    }
  }

  // made it this far, must be valid
  byteswap_ = 0;
  endian_ = lsb() ? LITTLE : BIG;
  valid_ = 1;
}

FitsPhotoCube::~FitsPhotoCube()
{
  if (data_)
    delete [] (unsigned char*)data_;
}

FitsPhotoCubeNext::FitsPhotoCubeNext(FitsFile* prev)
{
  primary_ = prev->primary();
  managePrimary_ = 0;

  head_ = prev->head();
  manageHead_ = 0;
  FitsImageHDU* hdu = (FitsImageHDU*)head_->hdu();

  data_ = (char*)prev->data() + hdu->imgbytes();
  dataSize_ = 0;
  dataSkip_ = 0;

  ext_ = prev->ext();
  inherit_ = head_->inherit();
  byteswap_ = prev->byteswap();
  endian_ = prev->endian();
  valid_ = 1;

  return;
}
