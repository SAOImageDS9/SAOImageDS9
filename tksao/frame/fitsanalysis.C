// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <pthread.h>

#include "fitsimage.h"
#include "analysis.h"
#include "smooth.h"
#include "context.h"

void* convolve(void* tt);

void FitsImage::analysis(int which, pthread_t* thread, t_smooth_arg* targ)
{
  if (DebugPerf)
    cerr << "FitsImage::analysis()" << endl;

  targ->kernel =NULL;
  targ->src =NULL;
  targ->dest =NULL;
  targ->width =0;
  targ->height =0;
  targ->radius =0;

  if (manageAnalysis_) {
    if (analysis_)
      delete analysis_;
    if (analysisdata_)
      delete analysisdata_;
  }
  manageAnalysis_ =0;
  analysis_ = block_;
  analysisdata_ = blockdata_;

  if (which) {
    analysis_ = new FitsAnalysis(block_);
    if (analysis_->isValid()) {
      analysisdata_ = new FitsDatam<double>(analysis_, interp_);

      smooth(thread, targ);
      manageAnalysis_ =1;
    }
    else {
      delete analysis_;
      analysis_ = block_;
    }
  }

  image_ = analysis_;
  data_ = analysisdata_;
}

void FitsImage::smooth(pthread_t* thread, t_smooth_arg* targ)
{
  // radius
  int r = context_->smoothRadius();

  int ww = analysis_->head()->naxis(0);
  int hh = analysis_->head()->naxis(1);

  // src
  double* src = new double[ww*hh];
  double* ptr = src;
  for (long jj=0; jj<hh; jj++)
    for (long ii=0; ii<ww; ii++, ptr++)
      *ptr = blockdata_->getValueDouble(jj*ww+ii);

  // dest
  double* dest = (double*)analysis_->data();

  // kernel
  // create kernel
  int rr = 2*r+1;
  double* kernel = new double[rr*rr];
  memset(kernel, 0, rr*rr*sizeof(double));

  switch (context_->smoothFunction()) {
  case Context::BOXCAR:
    boxcar(kernel,r);
    break;
  case Context::TOPHAT:
    tophat(kernel,r);
    break;
  case Context::GAUSSIAN:
    gaussian(kernel,r);
    break;
  }

  // convolve
  targ->kernel = kernel;
  targ->src = src;
  targ->dest = dest;
  targ->width = ww;
  targ->height = hh;
  targ->radius = r;

  int result = pthread_create(thread, NULL, convolve, targ);
  if (result)
    internalError("Unable to Create Thread");
}

void* convolve(void* tt)
{
  t_smooth_arg* targ = (t_smooth_arg*)tt;
  double* kernel = targ->kernel;
  double* src = targ->src;
  double* dest = targ->dest;
  int width = targ->width;
  int height = targ->height;
  int r = targ->radius;

  int rr = 2*r+1;

  double* dptr = dest;
  for (int jj=0; jj<height; jj++) {
    for (int ii=0; ii<width; ii++, dptr++) {

      for (int nn=jj-r, qq=0; nn<=jj+r; nn++, qq++) {
	if (nn>=0 && nn<height) {
	  register int nd = nn*width;
	  register int qd = qq*rr;
	  for (int mm=ii-r, pp=0; mm<=ii+r; mm++, pp++) {
	    if (mm>=0 && mm<width)
	      *dptr += src[nd+mm]*kernel[qd+pp];
	  }
	}
      }
    }
  }

  return NULL;
}

