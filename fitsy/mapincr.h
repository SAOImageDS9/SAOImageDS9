// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsmapincr_h__
#define __fitsmapincr_h__

#include "file.h"

class FitsMapIncr : public FitsFile {
protected:
  char* mapdata_;  // mmap segment ptr
  size_t mapsize_;  // mmap segment size
  int page_;       // flag to indicate paging mode

  size_t filesize_; // size of the total segment
  size_t seek_;     // offset into segment
  size_t dseek_;    // offset to data segment
  size_t nseek_;    // offset into next page data segment

  FitsHead* headRead();
  void dataSkip(size_t);
  void dataSkipBlock(size_t);
  void found();
  void error();

public:
  FitsMapIncr();
  virtual ~FitsMapIncr();

  char* page(char*, size_t);
  void resetpage();
  size_t filesize() {return filesize_;}
  size_t seek() {return seek_;}
};

class FitsFitsMapIncr : public virtual FitsMapIncr {
protected:
  void processExactImage();
  void processRelaxImage();
  void processExactTable();
  void processRelaxTable();

public:
  FitsFitsMapIncr();
  FitsFitsMapIncr(ScanMode);
};

class FitsFitsNextMapIncr : public FitsMapIncr {
public:
  FitsFitsNextMapIncr(FitsFile* prev);
};

class FitsArrMapIncr : public virtual FitsMapIncr {
public:
  FitsArrMapIncr();
};

class FitsMosaicMapIncr : public virtual FitsMapIncr {
public:
  FitsMosaicMapIncr();
};

class FitsMosaicNextMapIncr : public FitsMapIncr {
public:
  FitsMosaicNextMapIncr(FitsFile* prev);
};

#endif

