// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <pthread.h>

#include "analysis.h"
#include "fitsimage.h"
#include "context.h"
#include "convolve.h"

void FitsImage::analysis(int which, pthread_t* thread, t_smooth_arg* targ)
{
  if (DebugPerf)
    cerr << "FitsImage::analysis()" << endl;

  targ->kernel =NULL;
  targ->src =NULL;
  targ->dest =NULL;
  targ->width =0;
  targ->height =0;
  targ->k =0;

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
    analysis_ = new FitsAnalysis(block_, -64);
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

void* convolveThread(void* vv)
{
  t_smooth_arg* tt = (t_smooth_arg*)vv;
  convolve(tt->kernel, tt->src, tt->dest, 0, 0, tt->width, tt->height,
	   tt->width, tt->k);
  return NULL;
}

void FitsImage::smooth(pthread_t* thread, t_smooth_arg* targ)
{
  int rr = context_->smoothRadius();
  int mm = context_->smoothRadiusMinor();
  double ss = context_->smoothSigma();
  double sm = context_->smoothSigmaMinor();
  double aa = context_->smoothAngle();

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
  int kk = 2*rr+1;
  double* kernel = new double[kk*kk];
  memset(kernel, 0, kk*kk*sizeof(double));

  switch (context_->smoothFunction()) {
  case Context::BOXCAR:
    boxcar(kernel,rr);
    break;
  case Context::TOPHAT:
    tophat(kernel,rr);
    break;
  case Context::GAUSSIAN:
    gaussian(kernel,rr,ss);
    break;
  case Context::ELLIPTIC:
    elliptic(kernel,rr,mm,ss,sm,aa);
    break;
  }

  // convolve
  targ->kernel = kernel;
  targ->src = src;
  targ->dest = dest;
  targ->width = ww;
  targ->height = hh;
  targ->k = rr;

  int result = pthread_create(thread, NULL, convolveThread, targ);
  if (result)
    internalError("Unable to Create Thread");
}

