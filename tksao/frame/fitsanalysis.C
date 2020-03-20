// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <pthread.h>

#include "util.h"
#include "analysis.h"
#include "fitsimage.h"
#include "context.h"
#include "convolve.h"

void FitsImage::analysis(int which, pthread_t* thread, void* targ)
{
  if (DebugPerf)
    cerr << "FitsImage::analysis()" << endl;

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

static void* smoothThread(void* vv)
{
  t_smooth_arg* tt = (t_smooth_arg*)vv;
  convolve(tt->kernel, tt->src, tt->dest,
 	   tt->xmin, tt->ymin, tt->xmax, tt->ymax, tt->width, tt->r);
  return NULL;
}

void FitsImage::smooth(pthread_t* thread, void* targ)
{
  FitsBound* params = getDataParams(context_->secMode());
  int width = analysis_->head()->naxis(0);
  int height = analysis_->head()->naxis(1);

  // src
  double* src = new double[width*height];
  double* ptr = src;
  for (long jj=0; jj<height; jj++)
    for (long ii=0; ii<width; ii++, ptr++)
      *ptr = blockdata_->getValueDouble(jj*width+ii);

  // dest
  double* dest = (double*)analysis_->data();

  // kernel
  double* kernel =NULL;
  switch (context_->smoothFunction()) {
  case Context::BOXCAR:
    kernel = boxcar(context_->smoothRadius());
    break;
  case Context::TOPHAT:
    kernel = tophat(context_->smoothRadius());
    break;
  case Context::GAUSSIAN:
    kernel = gaussian(context_->smoothRadius(), context_->smoothSigma());
    break;
  case Context::ELLIPTIC:
    kernel = elliptic(context_->smoothRadius(), context_->smoothRadiusMinor(),
		      context_->smoothSigma(), context_->smoothSigmaMinor(),
		      context_->smoothAngle());
    break;
  }

  // convolve
  t_smooth_arg* tt = (t_smooth_arg*)targ;
  tt->kernel = kernel;
  tt->src = src;
  tt->dest = dest;
  tt->xmin = params->xmin;
  tt->xmax = params->xmax;
  tt->ymin = params->ymin;
  tt->ymax = params->ymax;
  tt->width = width;
  tt->r = context_->smoothRadius();

  int result = pthread_create(thread, NULL, smoothThread, targ);
  if (result)
    internalError("Unable to Create Thread");
}

