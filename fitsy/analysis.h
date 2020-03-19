// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsanalysis_h__
#define __fitsanalysis_h__

#include "file.h"

class FitsAnalysis : public FitsFile {
public:
  FitsAnalysis(FitsFile*, int);
  ~FitsAnalysis();
};

#endif
