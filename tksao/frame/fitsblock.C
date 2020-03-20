// Copyright (C) 1999-2018
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

void FitsImage::block(pthread_t* thread)
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

void* blockproc(void* tt)
{
  t_block_arg* targ = (t_block_arg*)tt;
  FitsFile* base = targ->base;
  FitsData* basedata = targ->basedata;
  FitsFile* block = targ->block;
  Vector blockFactor = targ->blockFactor;

  Matrix mm = Scale(1/blockFactor[0],1/blockFactor[1]);
  int srcw = base->head()->naxis(0);
  int srch = base->head()->naxis(1);
  int ww = block->head()->naxis(0);
  int hh = block->head()->naxis(1);

  switch (block->head()->bitpix()) {
  case -64:
    {
      double* dest=(double*)block->data();
      for (int jj=0; jj<srch; jj++) {
	for (int ii=0; ii<srcw; ii++) {
	  Vector cc = Vector(ii,jj)*mm;
	  if (cc[0]>=0 && cc[0]<ww && cc[1]>=0 && cc[1]<hh) {
	    double vv = basedata->getValueDouble(jj*srcw+ii);
	    *(dest+(int(cc[1])*ww + int(cc[0]))) += vv;
	  }
	}
      }
    }
    break;
  default:
    {
      float* dest=(float*)block->data();
      for (int jj=0; jj<srch; jj++) {
	for (int ii=0; ii<srcw; ii++) {
	  Vector cc = Vector(ii,jj)*mm;
	  if (cc[0]>=0 && cc[0]<ww && cc[1]>=0 && cc[1]<hh) {
	    float vv = basedata->getValueFloat(jj*srcw+ii);
	    *(dest+(int(cc[1])*ww + int(cc[0]))) += vv;
	  }
	}
      }
    }
    break;
  }

  return NULL;
}
