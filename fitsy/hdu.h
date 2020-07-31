// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitshdu_h__
#define __fitshdu_h__

#include <stdlib.h>

#include "column.h"

#define FTY_MAXAXES 10

class FitsHead;

class FitsHDU {
 protected:
  char* extname_;             // EXTNAME keyword
  int extver_;                // EXTVER keyword
  int extlevel_;              // EXTLEVEL keyword

  int bitpix_;                // BITPIX keyword
  int naxes_;                 // NAXIS keyword
  int naxis_[FTY_MAXAXES];    // NAXIS[i] keywords

  size_t realbytes_;      // Number of real bytes
  size_t heapbytes_;      // Number of heap bytes
  size_t allbytes_;       // Number of real bytes + heap bytes
  size_t padbytes_;       // Number of pad bytes
  size_t databytes_;      // Number of total bytes (padded)
  size_t datablocks_;     // Number of total blocks

  char keybuf[9];
  char* keycat(const char*, int);

public:
  FitsHDU(FitsHead*);
  virtual ~FitsHDU();

  virtual void updateCards(FitsHead*);

  const char* extname() {return extname_;}
  int extver() {return extver_;}
  int extlevel() {return extlevel_;}
  int bitpix() {return bitpix_;}
  int naxes() {return naxes_;}
  int naxis(int ii) {return naxis_[ii];}

  size_t realbytes() {return realbytes_;}
  size_t heapbytes() {return heapbytes_;}
  size_t allbytes() {return allbytes_;}
  size_t padbytes() {return padbytes_;}
  size_t databytes() {return databytes_;}
  size_t datablocks() {return datablocks_;}
};

class FitsImageHDU : public FitsHDU {
private:
  size_t imgbytes_;    // number of image bytes

  double bscale_;
  double bzero_;
  int hasblank_;
  int blank_;

public:
  FitsImageHDU(FitsHead*);

  void updateCards(FitsHead*);

  size_t imgbytes() {return imgbytes_;}
  void setScaling(double t,double z) {bscale_=t; bzero_=z;}
  double bscale() {return bscale_;}
  double bzero() {return bzero_;}
  int hasscaling() {return bscale_ != 1 || bzero_ != 0;}
  int hasblank() {return hasblank_;}
  int blank() {return blank_;}
};

class FitsTableHDU : public FitsHDU {
 protected:
  int tfields_;
  FitsColumn** cols_;

 public:
  FitsTableHDU(FitsHead*);
  virtual ~FitsTableHDU();

  int tfields() {return tfields_;}
  int rows() {return naxis_[1];}
  int cols() {return tfields_;}
  int width() {return naxis_[0];}
  char* list();

  FitsColumn* find(const char*);
  FitsColumn* find(int);
};

class FitsBinTableHDU : public FitsTableHDU {
 public:
  FitsBinTableHDU(FitsHead*);
};

class FitsAsciiTableHDU : public FitsTableHDU {
 public:
  FitsAsciiTableHDU(FitsHead*);
};

#endif


