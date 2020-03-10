// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "frscale.h"
#include "fitsimage.h"

FrScale::FrScale()
{
  colorScaleType_ = LINEARSCALE;
  clipScope_ = LOCAL;
  clipMode_ = MINMAX;
  minmaxMode_ = SCAN;
  low_ = 1;
  high_ = 100;
  min_ = 1;
  max_ = 100;
  ulow_ = 1;
  uhigh_ = 100;
  expo_ = 1000;
  zContrast_ = .25;
  zSample_ = 600;
  zLine_ = 120;
  minmaxSample_ = 25;
  autoCutPer_ = 100;
  secMode_ = IMGSEC;

  histequ_ = NULL;
  histequSize_ = 0;

  histogramX_ = NULL;
  histogramY_ = NULL;
  histogramSize_ = 0;

  datasec_ = 1;
  force_ = 0;
}

FrScale::~FrScale()
{
  if (histequ_)
    delete [] histequ_;

  if (histogramX_)
    free(histogramX_);

  if (histogramY_)
    free(histogramY_);
}

FrScale::FrScale(const FrScale& a)
{
  colorScaleType_ = a.colorScaleType_;
  clipScope_ = a.clipScope_;
  clipMode_ = a.clipMode_;
  minmaxMode_ = a.minmaxMode_;
  low_ = a.low_;
  high_ = a.high_;
  min_ = a.min_;
  max_ = a.max_;
  ulow_ = a.ulow_;
  uhigh_ = a.uhigh_;
  expo_ = a.expo_;
  zContrast_ = a.zContrast_;
  zSample_ = a.zSample_;
  zLine_ = a.zLine_;
  minmaxSample_ = a.minmaxSample_;
  autoCutPer_ = a.autoCutPer_;
  secMode_ = a.secMode_;

  if (a.histequ_) {
    histequ_ = new double[a.histequSize_];
    memcpy(histequ_,a.histequ_,a.histequSize_*sizeof(double));
  }
  else
    histequ_ = NULL;
  histequSize_ = a.histequSize_;

  if (a.histogramX_) {
    histogramX_ = (double*)calloc(a.histogramSize_, sizeof(double));
    memcpy(histogramX_,a.histogramX_,a.histogramSize_*sizeof(double));
  }
  else
    histogramX_ = NULL;
  if (a.histogramY_) {
    histogramY_ = (double*)calloc(a.histogramSize_, sizeof(double));
    memcpy(histogramY_,a.histogramY_,a.histogramSize_*sizeof(double));
  }
  else
    histogramY_ = NULL;
  histogramSize_ = a.histogramSize_;

  datasec_ = a.datasec_;
  force_ = a.force_;
}

FrScale& FrScale::operator=(const FrScale& a)
{
  colorScaleType_ = a.colorScaleType_;
  clipScope_ = a.clipScope_;
  clipMode_ = a.clipMode_;
  minmaxMode_ = a.minmaxMode_;
  low_ = a.low_;
  high_ = a.high_;
  min_ = a.min_;
  max_ = a.max_;
  ulow_ = a.ulow_;
  uhigh_ = a.uhigh_;
  expo_ = a.expo_;
  zContrast_ = a.zContrast_;
  zSample_ = a.zSample_;
  zLine_ = a.zLine_;
  minmaxSample_ = a.minmaxSample_;
  autoCutPer_ = a.autoCutPer_;
  secMode_ = a.secMode_;

  if (histequ_)
    delete histequ_;
  histequ_ = NULL;

  if (a.histequ_) {
    histequ_ = new double[a.histequSize_];
    memcpy(histequ_,a.histequ_,a.histequSize_*sizeof(double));
  }
  histequSize_ = a.histequSize_;

  if (histogramX_)
    free(histogramX_);
  histogramX_ = NULL;
  if (a.histogramX_) {
    histogramX_ = (double*)calloc(a.histogramSize_, sizeof(double));
    memcpy(histogramX_,a.histogramX_,a.histogramSize_*sizeof(double));
  }

  if (histogramY_)
    free(histogramY_);
  histogramY_ = NULL;
  if (a.histogramY_) {
    histogramY_ = (double*)calloc(a.histogramSize_, sizeof(double));
    memcpy(histogramY_,a.histogramY_,a.histogramSize_*sizeof(double));
  }
  histogramSize_ = a.histogramSize_;

  datasec_ = a.datasec_;
  force_ = a.force_;

  return *this;
}

double* FrScale::histequ(FitsImage* fits)
{
  if (DebugPerf)
    cerr << "FrScale::histequ()" << endl;

  // if we don't have any data, bail
  if (!fits)
    return NULL;

  // if we already have it, bail
  if (histequ_)
    return histequ_;

  // create pdf or histogram
  double* pdf = new double[HISTEQUSIZE];
  memset(pdf,0,HISTEQUSIZE*sizeof(double));

  switch (clipScope_) {
  case GLOBAL:
    {
      FitsImage* ptr = fits;
      while (ptr) {
	FitsImage* sptr = ptr;
	while (sptr) {
	  sptr->hist(pdf, HISTEQUSIZE, low_, high_, secMode_);
	  sptr = sptr->nextSlice();
	}
	ptr = ptr->nextMosaic();
      }
    }
    break;
  case LOCAL:
    {
      FitsImage* ptr = fits;
      while (ptr) {
	ptr->hist(pdf, HISTEQUSIZE, low_, high_, secMode_);
	ptr = ptr->nextMosaic();
      }
    }
    break;
  }

  // find a total/average
  double total, average;
  {
    total = 0;
    for (int ii=0; ii<HISTEQUSIZE; ii++)
      total += pdf[ii];
    average = total/HISTEQUSIZE;
  }

  // build transfer function (cdf)
  histequSize_ = HISTEQUSIZE;
  histequ_ = new double[HISTEQUSIZE];

  double bin = 0;
  int color,level;
  for (color=level=0; level<HISTEQUSIZE && color<HISTEQUSIZE; level++) {
    histequ_[level] = (double)color/HISTEQUSIZE;
    bin += pdf[level];
    while (bin>=average && color<HISTEQUSIZE) {
      bin -= average;
      color++;
    }
  }
  while (level<HISTEQUSIZE)
    histequ_[level++] = (double)(HISTEQUSIZE-1)/HISTEQUSIZE;

  delete [] pdf;

  return histequ_;
}

void FrScale::clearHistequ()
{
  if (DebugPerf)
    cerr << "FrScale::clearHistequ" << endl;

  if (histequ_) 
      delete [] histequ_; 
  histequ_ = NULL; 
  histequSize_ = 0;
}

void FrScale::histogram(FitsImage* fits, int num)
{
  if (DebugPerf)
    cerr << "FrScale::histogram() " << endl;

  if (histogramX_ && histogramY_)
    return;

  // just in case
  if (histogramX_) 
    free(histogramX_); 
  if (histogramY_) 
    free(histogramY_); 

  int nn = num+1;
  histogramX_ = (double*)calloc(nn,sizeof(double));
  histogramY_ = (double*)calloc(nn,sizeof(double));
  histogramSize_ = nn;

  double diff = max_-min_;
  int last = num-1;
  if (diff>0) {
    for (int ii=0; ii<nn; ii++)
      histogramX_[ii] = (double)ii/last*diff + min_;
  }
  else {
    for (int ii=0; ii<nn; ii++)
      histogramX_[ii] = min_;
  }
    
  switch (clipScope_) {
  case GLOBAL:
    {
      FitsImage* ptr = fits;
      while (ptr) {
	FitsImage* sptr = ptr;
	while (sptr) {
	  sptr->hist(histogramY_, nn, min_, max_, secMode_);
	  sptr = sptr->nextSlice();
	}
	ptr = ptr->nextMosaic();
      }
    }
    break;
  case LOCAL:
    {
      FitsImage* ptr = fits;
      while (ptr) {
	ptr->hist(histogramY_, nn, min_, max_, secMode_);
	ptr = ptr->nextMosaic();
      }
    }
    break;
  }
}

void FrScale::clearHistogram()
{
  if (DebugPerf)
    cerr << "FrScale::clearHistogram" << endl;

  if (histogramX_) 
    free(histogramX_); 
  histogramX_ = NULL;

  if (histogramY_) 
    free(histogramY_); 
  histogramY_ = NULL;

  histogramSize_ = 0;
}

ostream& operator<<(ostream& s, FrScale& fr)
{
  s << "scope: " << fr.clipScope() << endl;
  s << "mode: " << fr.clipMode() << endl;
  s << "low: " << fr.low() << endl;
  s << "high: " << fr.high() << endl;
  s << "min: " << fr.min() << endl;
  s << "max: " << fr.max() << endl;

  return s;
}

