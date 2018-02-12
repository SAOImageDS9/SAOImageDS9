// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <pthread.h>

#include "fitsimage.h"
#include "analysis.h"
#include "context.h"

static void boxcar(double* kernel, int r);
static void tophat(double* kernel, int r);
static void gaussian(double* kernel, int r, double sigma);
static void elliptic(double* kernel, int r, int m, double ss, double sm, double aa);
static void* convolve(void* tt);

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

  int result = pthread_create(thread, NULL, convolve, targ);
  if (result)
    internalError("Unable to Create Thread");
}

static void boxcar(double* kernel, int k)
{
  int kk = 2*k+1;
  int kk2 = kk*kk;

  for (int yy=-k; yy<=k; yy++)
    for (int xx=-k; xx<=k; xx++)
	kernel[(yy+k)*kk+(xx+k)] = 1;

  // normalize kernel
  for (int ii=0; ii<kk2; ii++)
    kernel[ii] /= kk2;

  //  dumpKernel(kernel, k);
}

void tophat(double* kernel, int k)
{
  int k2 = k*k;
  int kk = 2*k+1;
  int kk2 = kk*kk;

  int cnt =0;
  for (int yy=-k; yy<=k; yy++)
    for (int xx=-k; xx<=k; xx++)
      if ((xx*xx + yy*yy)/k2 <= 1) {
	kernel[(yy+k)*kk+(xx+k)] = 1;
	cnt++;
      }

  // normalize kernel
  if (cnt) 
    for (int ii=0; ii<kk2; ii++)
      kernel[ii] /= cnt;

  //  dumpKernel(kernel, k);
}

void gaussian(double* kernel, int k, double ss)
{
  int k2 = k*k;
  int kk = 2*k+1;
  int kk2 = kk*kk;
  double s2 = ss*ss;

  double tt =0;
  for (int yy=-k; yy<=k; yy++)
    for (int xx=-k; xx<=k; xx++) {
      if ((xx*xx + yy*yy) <= k2) {
	double vv = exp(-.5*((xx*xx + yy*yy)/s2));
	kernel[(yy+k)*kk+(xx+k)] = vv;
	tt += vv;
      }
    }

  // normalize kernel
  if (tt) 
    for (int ii=0; ii<kk2; ii++)
      kernel[ii] /= tt;

  // dumpKernel(kernel, k);
}

void elliptic(double* kernel, int k, int rm, double ss, double sm, double aa)
{
  int kk = 2*k+1;
  int kk2 = kk*kk;
  double s2 = ss*ss;
  double sm2 = sm*sm;

  double a = cos(aa)*cos(aa)/(2*s2) + sin(aa)*sin(aa)/(2*sm2);
  double b = -sin(2*aa)/(4*s2) + sin(2*aa)/(4*sm2);
  double c = sin(aa)*sin(aa)/(2*s2) + cos(aa)*cos(aa)/(2*sm2);

  double tt =0;
  for (int yy=-k; yy<=k; yy++) {
    for (int xx=-k; xx<=k; xx++) {
      double dd = xx*cos(aa)+yy*sin(aa);
      double ee = xx*sin(aa)-yy*cos(aa);
      if ((dd*dd)/(k*k) + (ee*ee)/(rm*rm) <= 1) {
	double vv = exp(-(a*xx*xx + 2*b*xx*yy + c*yy*yy));
	kernel[(yy+k)*kk+(xx+k)] = vv;
	tt += vv;
      }
    }
  }

  // normalize kernel
  if (tt) 
    for (int ii=0; ii<kk2; ii++)
      kernel[ii] /= tt;

  // dumpKernel(kernel, k);
}

void dumpKernel(double* kernel, int k)
{
  int kk = 2*k+1;

  for (int yy=-k; yy<=k; yy++)
    for (int xx=-k; xx<=k; xx++)
      cerr << '(' << xx << ',' << yy << ")=" 
	   << kernel[(yy+k)*kk+(xx+k)] << endl;
}

void* convolve(void* tt)
{
  t_smooth_arg* targ = (t_smooth_arg*)tt;
  double* kernel = targ->kernel;
  double* src = targ->src;
  double* dest = targ->dest;
  int width = targ->width;
  int height = targ->height;
  int k = targ->k;

  int kk = 2*k+1;

  double* dptr = dest;
  for (int jj=0; jj<height; jj++) {
    for (int ii=0; ii<width; ii++, dptr++) {

      for (int nn=jj-k, qq=0; nn<=jj+k; nn++, qq++) {
	if (nn>=0 && nn<height) {
	  register int nd = nn*width;
	  register int qd = qq*kk;
	  for (int mm=ii-k, pp=0; mm<=ii+k; mm++, pp++) {
	    if (mm>=0 && mm<width)
	      *dptr += src[nd+mm]*kernel[qd+pp];
	  }
	}
      }
    }
  }

  return NULL;
}

