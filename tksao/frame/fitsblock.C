// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "fitsimage.h"
#include "block.h"
#include "context.h"
#include "wcsast.h"

void* blockproc(void* tt);

void FitsImage::block()
{
  if (DebugPerf)
    cerr << "FitsImage::block()" << endl;

  if (manageBlock_) {
    if (block_)
      delete block_;
    if (blockdata_)
      delete blockdata_;
  }
  manageBlock_ =0;
  block_ = base_;
  blockdata_ = basedata_;

  if (manageAnalysis_) {
    if (analysis_)
      delete analysis_;
    if (analysisdata_)
      delete analysisdata_;
  }
  manageAnalysis_ =0;

  Vector blockFactor = context_->blockFactor();

  if (blockFactor[0] != 1 && blockFactor[1] != 1) {
    block_ = new FitsBlock(base_, blockFactor);
    if (block_->isValid()) {
      manageBlock_ =1;

      switch (block_->head()->bitpix()) {
      case -64:
	blockdata_ = new FitsDatam<double>(block_, interp_);
	break;
      default:
	blockdata_ = new FitsDatam<float>(block_, interp_);
	break;
      }

      t_block_arg* targ = new t_block_arg;
      targ->base = base_;
      targ->basedata = basedata_;
      targ->block = block_;
      targ->blockFactor = blockFactor;
      targ->nanZero = context_->blockNanZero();
      targ->nthreads = 1;

      blockproc(targ);
    }
    else {
      delete block_;
      block_ = base_;
      return;
    }
  }

  analysis_ = block_;
  analysisdata_ = blockdata_;

  image_ = analysis_;
  data_ = analysisdata_;

  resetWCS();
}

void FitsImage::block(pthread_t* thread, int nthreads)
{
  if (DebugPerf)
    cerr << "FitsImage::block(thread)" << endl;

  if (manageBlock_) {
    if (block_)
      delete block_;
    if (blockdata_)
      delete blockdata_;
  }
  manageBlock_ =0;
  block_ = base_;
  blockdata_ = basedata_;

  if (manageAnalysis_) {
    if (analysis_)
      delete analysis_;
    if (analysisdata_)
      delete analysisdata_;
  }
  manageAnalysis_ =0;

  Vector blockFactor = context_->blockFactor();

  if (blockFactor[0] != 1 && blockFactor[1] != 1) {
    block_ = new FitsBlock(base_, blockFactor);
    if (block_->isValid()) {
      manageBlock_ =1;

      switch (block_->head()->bitpix()) {
      case -64:
	blockdata_ = new FitsDatam<double>(block_, interp_);
	break;
      default:
	blockdata_ = new FitsDatam<float>(block_, interp_);
	break;
      }

      t_block_arg* targ = new t_block_arg;
      targ->base = base_;
      targ->basedata = basedata_;
      targ->block = block_;
      targ->blockFactor = blockFactor;
      targ->nanZero = context_->blockNanZero();
      targ->nthreads = nthreads;

      int result = pthread_create(thread, NULL, blockproc, targ);
      if (result)
	internalError("Unable to Create Thread");
    }
    else {
      delete block_;
      block_ = base_;
      return;
    }
  }

  analysis_ = block_;
  analysisdata_ = blockdata_;

  image_ = analysis_;
  data_ = analysisdata_;

  resetWCS();
}

// one band of block rows [r0,r1), so bands never write the same pixel
typedef struct {
  FitsData* basedata;
  void* dest;
  int bitpix;
  int srcw;
  int ncols;
  int nrows;
  int ww;
  double sy;
  const int* xmap;
  int nanZero;
  int r0;
  int r1;
} t_block_band;

template <class T> static inline T blockValue(FitsData*, long);
template <> inline double blockValue<double>(FitsData* data, long ii)
{return data->getValueDouble(ii);}
template <> inline float blockValue<float>(FitsData* data, long ii)
{return data->getValueFloat(ii);}

template <class T> static void blockBand(t_block_band* bb)
{
  FitsData* basedata = bb->basedata;
  T* dest = (T*)bb->dest;
  const int* xmap = bb->xmap;
  int ncols = bb->ncols;

  for (int jj=0; jj<bb->nrows; jj++) {
    int rr = int(jj*bb->sy);
    if (rr < bb->r0)
      continue;
    if (rr >= bb->r1)
      break;

    T* drow = dest + (long)rr*bb->ww;
    long src = (long)jj*bb->srcw;
    if (!bb->nanZero) {
      for (int ii=0; ii<ncols; ii++)
	drow[xmap[ii]] += blockValue<T>(basedata, src+ii);
    }
    else {
      // skip NaNs; a pixel with no finite contributions stays NaN
      for (int ii=0; ii<ncols; ii++) {
	T vv = blockValue<T>(basedata, src+ii);
	if (isnan(vv))
	  continue;
	T* dd = drow + xmap[ii];
	if (isnan(*dd))
	  *dd = vv;
	else
	  *dd += vv;
      }
    }
  }
}

static void* blockBandProc(void* tt)
{
  t_block_band* bb = (t_block_band*)tt;
  switch (bb->bitpix) {
  case -64:
    blockBand<double>(bb);
    break;
  default:
    blockBand<float>(bb);
    break;
  }
  return NULL;
}

void* blockproc(void* tt)
{
  t_block_arg* targ = (t_block_arg*)tt;
  FitsFile* base = targ->base;
  FitsFile* block = targ->block;
  Vector blockFactor = targ->blockFactor;

  double sx = 1/blockFactor[0];
  double sy = 1/blockFactor[1];
  int srcw = base->head()->naxis(0);
  int srch = base->head()->naxis(1);
  int ww = block->head()->naxis(0);
  int hh = block->head()->naxis(1);
  int bitpix = block->head()->bitpix();

  // source pixel (ii,jj) lands in block pixel (int(ii*sx),int(jj*sy)).
  // Both are monotonic, so the pixels that land inside the block image
  // are the first ncols columns of the first nrows rows.
  int* xmap = new int[srcw];
  int ncols =0;
  while (ncols<srcw) {
    double cx = ncols*sx;
    if (cx >= ww)
      break;
    xmap[ncols++] = int(cx);
  }
  int nrows =0;
  while (nrows<srch && nrows*sy < hh)
    nrows++;

  if (targ->nanZero) {
    long size = (long)ww*hh;
    switch (bitpix) {
    case -64:
      {
	double* dest = (double*)block->data();
	for (long kk=0; kk<size; kk++)
	  dest[kk] = NAN;
      }
      break;
    default:
      {
	float* dest = (float*)block->data();
	for (long kk=0; kk<size; kk++)
	  dest[kk] = NAN;
      }
      break;
    }
  }

  int nt = targ->nthreads;
  if (nt > hh)
    nt = hh;
  if (nt < 1)
    nt = 1;

  t_block_band* band = new t_block_band[nt];
  for (int tt=0; tt<nt; tt++) {
    band[tt].basedata = targ->basedata;
    band[tt].dest = block->data();
    band[tt].bitpix = bitpix;
    band[tt].srcw = srcw;
    band[tt].ncols = ncols;
    band[tt].nrows = nrows;
    band[tt].ww = ww;
    band[tt].sy = sy;
    band[tt].xmap = xmap;
    band[tt].nanZero = targ->nanZero;
    band[tt].r0 = (long)hh*tt/nt;
    band[tt].r1 = (long)hh*(tt+1)/nt;
  }

  // run band 0 here; if a thread can't be created, run its band here too
  pthread_t* thread = new pthread_t[nt];
  int* started = new int[nt];
  for (int tt=1; tt<nt; tt++) {
    started[tt] = !pthread_create(&thread[tt], NULL, blockBandProc, &band[tt]);
    if (!started[tt])
      blockBandProc(&band[tt]);
  }
  blockBandProc(&band[0]);
  for (int tt=1; tt<nt; tt++)
    if (started[tt])
      pthread_join(thread[tt], NULL);

  delete [] started;
  delete [] thread;
  delete [] band;
  delete [] xmap;

  return NULL;
}
