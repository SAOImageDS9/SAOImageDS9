// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitshpxreproj_h__
#define __fitshpxreproj_h__

#include "file.h"

// Resample a built FitsHPX image (HPX/XPH layout) into another all-sky
// projection through AST. Nearest-neighbour only, so every output pixel
// is a real HEALPix pixel value; pixels outside the projection come out
// NaN. The constructor byte-swaps the FitsHPX's data in place, so the
// FitsHPX must not be used afterwards (FitsImage::initHPX deletes it).
class FitsHPXReproj : public FitsFile {
 private:
  void initHeader(FitsFile*, const char*, double, int, double, double,
		  double);
  void swapData(float*, size_t);

 public:
  FitsHPXReproj(FitsFile*, const char*, double);
  ~FitsHPXReproj();
};

#endif
