// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsmap_h__
#define __fitsmap_h__

#include "file.h"

class FitsMap : public FitsFile {
protected:
  char* mapdata_;
  size_t mapsize_;

public:
  FitsMap();
  virtual ~FitsMap() {}

  char* mapdata() {return mapdata_;}
  size_t mapsize() {return mapsize_;}
  void found(char*);
  void error();
  char* enddata();
  size_t endsize();
};

class FitsFitsMap : public virtual FitsMap {
protected:
  void processExactImage();
  void processRelaxImage();
  void processExactTable();
  void processRelaxTable();

public:
  FitsFitsMap();
  FitsFitsMap(ScanMode);
};

class FitsFitsNextMap : public FitsMap {
public:
  FitsFitsNextMap(FitsFile* prev);
};

class FitsArrMap : public virtual FitsMap {
public:
  FitsArrMap();
};

class FitsNRRDMap : public virtual FitsMap {
public:
  FitsNRRDMap();
};

class FitsMosaicMap : public virtual FitsMap {
public:
  FitsMosaicMap();
};

class FitsMosaicNextMap : public FitsMap {
public:
  FitsMosaicNextMap(FitsFile* prev);
};

#endif








