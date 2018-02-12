// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitssmap_h__
#define __fitssmap_h__

#include "file.h"

class FitsSMap : public FitsFile {
protected:
  char* hmapdata_;
  size_t hmapsize_;

  char* mapdata_;
  size_t mapsize_;

public:
  FitsSMap();
  virtual ~FitsSMap() {}

  char* mapdata() {return mapdata_;}
  size_t mapsize() {return mapsize_;}
};

class FitsFitsSMap : public virtual FitsSMap {
public:
  FitsFitsSMap(FitsHead::Memory);
};

class FitsENVISMap : public virtual FitsSMap {
public:
  FitsENVISMap();
};

class FitsFitsNextSMap : public FitsSMap {
public:
  FitsFitsNextSMap(FitsFile* prev);
};

#endif








