// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <pthread.h>

#include "fitsimage.h"
#include "framebase.h"

#include "context.h"
#include "mmap.h"
#include "smmap.h"
#include "mmapincr.h"
#include "alloc.h"
#include "allocgz.h"
#include "channel.h"
#include "share.h"
#include "sshare.h"
#include "socket.h"
#include "socketgz.h"
#include "var.h"
#include "order.h"
#include "iis.h"
#include "hist.h"
#include "compress.h"
#include "analysis.h"
#include "photo.h"
#include "colorscale.h"

// this is kluge to speed up doug minks wcssubs 'ksearch' routine
extern "C" {
  FitsHead* wcshead = NULL;
  FitsHead* wcsprim = NULL;
  char* ksearchh(char*, char*);

  char* findit(char* cards, char* key)
  {
    char* rr = NULL;
    if (wcshead) {
      if ((rr = wcshead->find(key)))
	return rr;

      if (wcsprim)
	if ((rr = wcsprim->find(key)))
	  return rr;

      return NULL;
    }
    else
      return ksearchh(cards, key);
  }
};

WCSx::WCSx()
{
  for (int ii=0; ii<FTY_MAXAXES; ii++) {
    crpix[ii] =0;
    crval[ii] =0;
    cd[ii] =0;
  }
}

FitsImage::FitsImage(Context* cx, Tcl_Interp* pp)
{
  context_ =cx;
  interp_ =pp;

  objectKeyword_ =NULL;
  fileName =NULL;
  rootBaseFileName =NULL;
  fullBaseFileName =NULL;
  iisFileName =NULL;

  fits_ =NULL;
  post_ =NULL;
  hist_ =NULL;
  hpx_ =NULL;
  base_ =NULL;
  basedata_ =NULL;

  manageBlock_ =0;
  block_ =NULL;
  blockdata_ =NULL;

  manageAnalysis_ =0;
  analysis_ =NULL;
  analysisdata_ =NULL;

  image_ =NULL;
  data_ =NULL;

  nextMosaic_ =NULL;
  nextSlice_ =NULL;

  keyLTMV =0;
  keyATMV =0;
  keyDTMV =0;
  keyDATASEC =0;

  jyBeam_ =1;

  imageToData = Translate(-.5, -.5);
  dataToImage = Translate( .5,  .5);

  imageToData3d = Translate3d(-.5, -.5, -.5);
  dataToImage3d = Translate3d( .5,  .5,  .5);

  manageWCS_ =1;
  wcs_ =NULL;
  wcsx_ =NULL;
  ast_ =NULL;
  wcsHeader_ =NULL;
  altHeader_ =NULL;

  iisMode_ =0;
  iiszt_ =0;

  for (int ii=0; ii<FTY_MAXAXES; ii++)
    address[ii] =1;
}

FitsImage::~FitsImage()
{
  if (objectKeyword_)
    delete [] objectKeyword_;

  if (fileName)
    delete [] fileName;

  if (rootBaseFileName)
    delete [] rootBaseFileName;

  if (fullBaseFileName)
    delete [] fullBaseFileName;

  if (iisFileName)
    delete [] iisFileName;

  if (fits_)
    delete fits_;

  if (post_)
    delete post_;

  if (hist_)
    delete hist_;

  if (hpx_)
    delete hpx_;

  if (basedata_)
    delete basedata_;

  if (manageBlock_) {
    if (block_)
      delete block_;
    if (blockdata_)
      delete blockdata_;
  }
  if (manageAnalysis_) {
    if (analysis_)
      delete analysis_;
    if (analysisdata_)
      delete analysisdata_;
  }

  if (wcs_) {
    for (int ii=0; ii<MULTWCSA; ii++)
      if (manageWCS_ && wcs_[ii])
	wcsfree(wcs_[ii]);
    delete [] wcs_;
  }  

  if (wcsx_) {
    for (int ii=0; ii<MULTWCS; ii++)
      if (manageWCS_ && wcsx_[ii])
	delete wcsx_[ii];
    delete [] wcsx_;
  }  

  if (ast_) {
    for (int ii=0; ii<MULTWCSA; ii++)
      if (manageWCS_ && ast_[ii])
 	astAnnul(ast_[ii]);
    delete [] ast_;
  }

  if (wcsHeader_)
    delete wcsHeader_;
  if (altHeader_)
    delete altHeader_;
}

// Fits

FitsImageFitsAlloc::FitsImageFitsAlloc(Context* cx, Tcl_Interp* pp, 
				       const char* ch, const char* fn, 
				       FitsFile::FlushMode flush, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsAlloc(ch, FitsFile::RELAX, flush);
  process(fn,id);
}

FitsImageFitsAllocGZ::FitsImageFitsAllocGZ(Context* cx, Tcl_Interp* pp, 
					   const char* ch, const char* fn, 
					   FitsFile::FlushMode flush, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsAllocGZ(ch, FitsFile::RELAX, flush);
  process(fn,id);
}

FitsImageFitsChannel::FitsImageFitsChannel(Context* cx, Tcl_Interp* pp, 
					   const char* ch, const char* fn, 
					   FitsFile::FlushMode flush, int id) 
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsChannel(pp, ch, fn, FitsFile::RELAX, flush);
  process(fn,id);
}

FitsImageFitsMMap::FitsImageFitsMMap(Context* cx, Tcl_Interp* pp, 
				     const char* fn, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsMMap(fn, FitsFile::RELAX);
  process(fn,id);
}

FitsImageFitsSMMap::FitsImageFitsSMMap(Context* cx, Tcl_Interp* pp, 
				       const char* hdr, 
				       const char* fn, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsSMMap(hdr, fn);
  process(fn,id);
}

FitsImageFitsMMapIncr::FitsImageFitsMMapIncr(Context* cx, Tcl_Interp* pp, 
					     const char* fn, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsMMapIncr(fn, FitsFile::RELAX);
  process(fn,id);
}

FitsImageFitsShare::FitsImageFitsShare(Context* cx, Tcl_Interp* pp, 
				       Base::ShmType type, 
				       int sid, const char* fn, int id)
  : FitsImage(cx, pp)
{
  switch (type) {
  case Base::SHMID:
    fits_ = new FitsFitsShareID(sid, fn, FitsFile::RELAX);
    break;
  case Base::KEY:
    fits_ = new FitsFitsShareKey(sid, fn, FitsFile::RELAX);
    break;
  }
  process(fn,id);
}

FitsImageFitsSShare::FitsImageFitsSShare(Context* cx, Tcl_Interp* pp, 
					 Base::ShmType type,
					 int hdr, int sid, 
					 const char* fn, int id)
  : FitsImage(cx, pp)
{
  switch (type) {
  case Base::SHMID:
    fits_ = new FitsFitsSShareID(hdr, sid, fn);
    break;
  case Base::KEY:
    fits_ = new FitsFitsSShareKey(hdr, sid, fn);
    break;
  }
  process(fn,id);
}

FitsImageFitsSocket::FitsImageFitsSocket(Context* cx, Tcl_Interp* pp, 
					 int s, const char* fn, 
					 FitsFile::FlushMode flush, int id) 
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsSocket(s, fn, FitsFile::RELAX, flush);
  process(fn,id);
}

FitsImageFitsSocketGZ::FitsImageFitsSocketGZ(Context* cx, Tcl_Interp* pp,
					     int s, const char* fn, 
					     FitsFile::FlushMode flush, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsSocketGZ(s, fn, FitsFile::RELAX, flush);
  process(fn,id);
}

FitsImageFitsVar::FitsImageFitsVar(Context* cx, Tcl_Interp* pp, 
				   const char* var, const char* fn, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsVar(pp, var, fn, FitsFile::RELAX);
  process(fn,id);
}

FitsImageFitsOrder::FitsImageFitsOrder(Context* cx, Tcl_Interp* pp, 
				       FitsImage* fi,
				       FitsHead* hdr, char* data, size_t sz,
				       int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsOrder(fi->fitsFile(), hdr, data, sz);
  process(NULL,id);

  rootBaseFileName = dupstr(fi->rootBaseFileName);
  fullBaseFileName = dupstr(fi->fullBaseFileName);
  iisFileName = dupstr(fi->fullBaseFileName);
}

// Fits Next

FitsImageFitsNextAlloc::FitsImageFitsNextAlloc(Context* cx, Tcl_Interp* pp, 
					       const char* fn,
					       FitsFile* prev, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsNextAlloc(prev);
  process(fn,id);
}

FitsImageFitsNextAllocGZ::FitsImageFitsNextAllocGZ(Context* cx, Tcl_Interp* pp, 
						   const char* fn,
						   FitsFile* prev, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsNextAllocGZ(prev);
  process(fn,id);
}

FitsImageFitsNextChannel::FitsImageFitsNextChannel(Context* cx, Tcl_Interp* pp, 
						   const char* fn,
						   FitsFile* prev, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsNextChannel(prev);
  process(fn,id);
}

FitsImageFitsNextMMap::FitsImageFitsNextMMap(Context* cx, Tcl_Interp* pp, 
					     const char* fn,
					     FitsFile* prev, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsNextMMap(prev);
  process(fn,id);
}

FitsImageFitsNextSMMap::FitsImageFitsNextSMMap(Context* cx, Tcl_Interp* pp, 
					       const char* fn,
					       FitsFile* prev, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsNextSMMap(prev);
  process(fn,id);
}

FitsImageFitsNextMMapIncr::FitsImageFitsNextMMapIncr(Context* cx, Tcl_Interp* pp, 
						     const char* fn,
						     FitsFile* prev, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsNextMMapIncr(prev);
  process(fn,id);
}

FitsImageFitsNextShare::FitsImageFitsNextShare(Context* cx, Tcl_Interp* pp, 
					       const char* fn,
					       FitsFile* prev, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsNextShare(prev);
  process(fn,id);
}

FitsImageFitsNextSShare::FitsImageFitsNextSShare(Context* cx, Tcl_Interp* pp, 
						 const char* fn,
						 FitsFile* prev, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsNextSShare(prev);
  process(fn,id);
}

FitsImageFitsNextSocket::FitsImageFitsNextSocket(Context* cx, Tcl_Interp* pp, 
						 const char* fn,
						 FitsFile* prev, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsNextSocket(prev);
  process(fn,id);
}

FitsImageFitsNextSocketGZ::FitsImageFitsNextSocketGZ(Context* cx, Tcl_Interp* pp, 
						     const char* fn, 
						     FitsFile* prev, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsNextSocketGZ(prev);
  process(fn,id);
}

FitsImageFitsNextVar::FitsImageFitsNextVar(Context* cx, Tcl_Interp* pp, 
					   const char* fn,
					   FitsFile* prev, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsNextVar(prev);
  process(fn,id);
}

FitsImageFitsNextHist::FitsImageFitsNextHist(Context* cx, Tcl_Interp* pp, 
					     FitsImage* fi,
					     FitsFile* prev, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsHistNext(prev);
  process(NULL,id);

  fits_->setpFilter(fi->getHistFilter());
  fits_->setpBinX(fi->getHistX());
  fits_->setpBinY(fi->getHistY());
  fits_->setpBinZ(fi->getHistZ());

  rootBaseFileName = dupstr(fi->rootBaseFileName);
  fullBaseFileName = dupstr(fi->fullBaseFileName);
  iisFileName = dupstr(fi->fullBaseFileName);
}

FitsImageFitsNextPost::FitsImageFitsNextPost(Context* cx, Tcl_Interp* pp, 
					     FitsImage* fi,
					     FitsFile* prev, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsPostNext(prev);
  process(NULL,id);

  rootBaseFileName = dupstr(fi->rootBaseFileName);
  fullBaseFileName = dupstr(fi->fullBaseFileName);
  iisFileName = dupstr(fi->fullBaseFileName);
}

FitsImageFitsNextOrder::FitsImageFitsNextOrder(Context* cx, Tcl_Interp* pp, 
					       FitsImage* fi,
					       FitsFile* prev, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsOrderNext(prev);
  process(NULL,id);

  rootBaseFileName = dupstr(fi->rootBaseFileName);
  fullBaseFileName = dupstr(fi->fullBaseFileName);
  iisFileName = dupstr(fi->fullBaseFileName);
}

// Array

FitsImageArrAlloc::FitsImageArrAlloc(Context* cx, Tcl_Interp* pp, 
				     const char* ch, const char* fn,
				     FitsFile::FlushMode flush, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsArrAlloc(ch, flush);
  process(fn,id);
}

FitsImageArrAllocGZ::FitsImageArrAllocGZ(Context* cx, Tcl_Interp* pp, 
					 const char* ch, const char* fn,
					 FitsFile::FlushMode flush, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsArrAllocGZ(ch, flush);
  process(fn,id);
}

FitsImageArrChannel::FitsImageArrChannel(Context* cx, Tcl_Interp* pp, 
					 const char* ch, const char* fn,
					 FitsFile::FlushMode flush, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsArrChannel(pp, ch, fn, flush);
  process(fn,id);
}

FitsImageArrMMap::FitsImageArrMMap(Context* cx, Tcl_Interp* pp, 
				   const char* fn, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsArrMMap(fn);
  process(fn,id);
}

FitsImageArrMMapIncr::FitsImageArrMMapIncr(Context* cx, Tcl_Interp* pp, 
					   const char* fn, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsArrMMapIncr(fn);
  process(fn,id);
}

FitsImageArrShare::FitsImageArrShare(Context* cx, Tcl_Interp* pp, 
				     Base::ShmType type, 
				     int sid, const char* fn, int id) 
  : FitsImage(cx, pp)
{
  switch (type) {
  case Base::SHMID:
    fits_ = new FitsArrShareID(sid, fn);
    break;
  case Base::KEY:
    fits_ = new FitsArrShareKey(sid, fn);
    break;
  }
  process(fn,id);
}

FitsImageArrSocket::FitsImageArrSocket(Context* cx, Tcl_Interp* pp, 
				       int s, const char* fn,
				       FitsFile::FlushMode flush, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsArrSocket(s, fn, flush);
  process(fn,id);
}

FitsImageArrSocketGZ::FitsImageArrSocketGZ(Context* cx, Tcl_Interp* pp, 
					   int s, const char* fn,
					   FitsFile::FlushMode flush, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsArrSocketGZ(s, fn, flush);
  process(fn,id);
}

FitsImageArrVar::FitsImageArrVar(Context* cx, Tcl_Interp* pp, 
				 const char* var, const char* fn, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsArrVar(pp, var, fn);
  process(fn,id);
}

// ENVI

FitsImageENVISMMap::FitsImageENVISMMap(Context* cx, Tcl_Interp* pp,
				       const char* hdr,
				       const char* fn, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsENVISMMap(hdr,fn);
  process(fn,id);
}

// NRRD

FitsImageNRRDAlloc::FitsImageNRRDAlloc(Context* cx, Tcl_Interp* pp,
				     const char* ch, const char* fn,
				     FitsFile::FlushMode flush, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsNRRDAlloc(ch, flush);
  process(fn,id);
}

FitsImageNRRDChannel::FitsImageNRRDChannel(Context* cx, Tcl_Interp* pp,
					 const char* ch, const char* fn,
					 FitsFile::FlushMode flush, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsNRRDChannel(pp, ch, fn, flush);
  process(fn,id);
}

FitsImageNRRDMMap::FitsImageNRRDMMap(Context* cx, Tcl_Interp* pp,
				     const char* fn, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsNRRDMMap(fn);
  process(fn,id);
}

FitsImageNRRDShare::FitsImageNRRDShare(Context* cx, Tcl_Interp* pp,
				       Base::ShmType type, 
				       int sid, const char* fn, int id) 
  : FitsImage(cx, pp)
{
  switch (type) {
  case Base::SHMID:
    fits_ = new FitsNRRDShareID(sid, fn);
    break;
  case Base::KEY:
    fits_ = new FitsNRRDShareKey(sid, fn);
    break;
  }
  process(fn,id);
}

FitsImageNRRDSocket::FitsImageNRRDSocket(Context* cx, Tcl_Interp* pp,
					 int s, const char* fn,
					 FitsFile::FlushMode flush, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsNRRDSocket(s, fn, flush);
  process(fn,id);
}

FitsImageNRRDVar::FitsImageNRRDVar(Context* cx, Tcl_Interp* pp,
				   const char* var, const char* fn, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsNRRDVar(pp, var, fn);
  process(fn,id);
}

// Photo

FitsImagePhoto::FitsImagePhoto(Context* cx, Tcl_Interp* pp,
			       const char* ph, const char* fn, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsPhoto(pp, ph);
  process(fn,id);
}

FitsImagePhotoCube::FitsImagePhotoCube(Context* cx, Tcl_Interp* pp,
				       const char* ph, const char* fn, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsPhotoCube(pp, ph);
  process(fn,id);
}

FitsImagePhotoCubeNext::FitsImagePhotoCubeNext(Context* cx, Tcl_Interp* pp,
					       const char* fn,
					       FitsFile* prev, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsPhotoCubeNext(prev);
  process(fn,id);
}

// Mosaic

FitsImageMosaicAlloc::FitsImageMosaicAlloc(Context* cx, Tcl_Interp* pp,
					   const char* ch, 
					   const char* fn,
					   FitsFile::FlushMode flush, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsMosaicAlloc(ch, flush);
  process(fn,id);
}

FitsImageMosaicAllocGZ::FitsImageMosaicAllocGZ(Context* cx, Tcl_Interp* pp,
					       const char* ch, 
					       const char* fn,
					       FitsFile::FlushMode flush, 
					       int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsMosaicAllocGZ(ch, flush);
  process(fn,id);
}

FitsImageMosaicChannel::FitsImageMosaicChannel(Context* cx, Tcl_Interp* pp,
					       const char* ch, 
					       const char* fn,
					       FitsFile::FlushMode flush,
					       int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsMosaicChannel(pp, ch, flush);
  process(fn,id);
}

FitsImageMosaicMMap::FitsImageMosaicMMap(Context* cx, Tcl_Interp* pp,
					 const char* fn, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsMosaicMMap(fn);
  process(fn,id);
}

FitsImageMosaicMMapIncr::FitsImageMosaicMMapIncr(Context* cx, Tcl_Interp* pp,
						 const char* fn, 
						 int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsMosaicMMapIncr(fn);
  process(fn,id);
}

FitsImageMosaicShare::FitsImageMosaicShare(Context* cx, Tcl_Interp* pp,
					   Base::ShmType type,
					   int sid, const char* fn, int id)
  : FitsImage(cx, pp)
{
  switch (type) {
  case Base::SHMID:
    fits_ = new FitsMosaicShareID(sid);
    break;
  case Base::KEY:
    fits_ = new FitsMosaicShareKey(sid);
    break;
  }
  process(fn,id);
}

FitsImageMosaicSocket::FitsImageMosaicSocket(Context* cx, Tcl_Interp* pp,
					     int s, const char* fn,
					     FitsFile::FlushMode flush, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsMosaicSocket(s, flush);
  process(fn,id);
}

FitsImageMosaicSocketGZ::FitsImageMosaicSocketGZ(Context* cx, Tcl_Interp* pp,
						 int s, const char* fn,
						 FitsFile::FlushMode flush, 
						 int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsMosaicSocketGZ(s, flush);
  process(fn,id);
}

FitsImageMosaicVar::FitsImageMosaicVar(Context* cx, Tcl_Interp* pp,
				       const char* var, const char* fn, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsMosaicVar(pp, var, fn);
  process(fn,id);
}

// Mosaic Next

FitsImageMosaicNextAlloc::FitsImageMosaicNextAlloc(Context* cx, Tcl_Interp* pp,
						   const char* fn,
						   FitsFile* prev,
						   FitsFile::FlushMode flush,
						   int id)

  : FitsImage(cx, pp)
{
  fits_ = new FitsMosaicNextAlloc(prev, flush);
  process(fn,id);
}

FitsImageMosaicNextAllocGZ::FitsImageMosaicNextAllocGZ(Context* cx, Tcl_Interp* pp,
						       const char* fn,
						       FitsFile* prev,
						      FitsFile::FlushMode flush,
						       int id)

  : FitsImage(cx, pp)
{
  fits_ = new FitsMosaicNextAllocGZ(prev, flush);
  process(fn,id);
}

FitsImageMosaicNextChannel::FitsImageMosaicNextChannel(Context* cx, 
						       Tcl_Interp* pp,
						       const char* fn, 
						       FitsFile* prev,
						      FitsFile::FlushMode flush,
						       int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsMosaicNextChannel(prev, flush);
  process(fn,id);
}

FitsImageMosaicNextMMap::FitsImageMosaicNextMMap(Context* cx, Tcl_Interp* pp,
						 const char* fn, 
						 FitsFile* prev, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsMosaicNextMMap(prev);
  process(fn,id);
}

FitsImageMosaicNextMMapIncr::FitsImageMosaicNextMMapIncr(Context* cx, Tcl_Interp* pp,
							 const char* fn, 
							 FitsFile* prev,
							 int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsMosaicNextMMapIncr(prev);
  process(fn,id);
}

FitsImageMosaicNextShare::FitsImageMosaicNextShare(Context* cx, Tcl_Interp* pp, 
						   const char* fn,
						   FitsFile* prev, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsMosaicNextShare(prev);
  process(fn,id);
}

FitsImageMosaicNextSocket::FitsImageMosaicNextSocket(Context* cx, 
						     Tcl_Interp* pp,
						     const char* fn, 
						     FitsFile* prev,
						     FitsFile::FlushMode flush,
						     int id)

  : FitsImage(cx, pp)
{
  fits_ = new FitsMosaicNextSocket(prev, flush);
  process(fn,id);
}

FitsImageMosaicNextSocketGZ::FitsImageMosaicNextSocketGZ(Context* cx, 
							 Tcl_Interp* pp,
							 const char* fn, 
							 FitsFile* prev,
						      FitsFile::FlushMode flush,
							 int id)

  : FitsImage(cx, pp)
{
  fits_ = new FitsMosaicNextSocketGZ(prev, flush);
  process(fn,id);
}

FitsImageMosaicNextVar::FitsImageMosaicNextVar(Context* cx, Tcl_Interp* pp,
					       const char* fn, 
					       FitsFile* prev, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsMosaicNextVar(prev);
  process(fn,id);
}

// IIS

FitsImageIIS::FitsImageIIS(Context* cx, Tcl_Interp* pp, int w, int h)
  : FitsImage(cx, pp)
{
  fits_ = new FitsIIS(w, h);
  process("",1);
  iisMode_ = 1;
}

void FitsImageIIS::iisErase()
{
  ((FitsIIS*)fits_)->erase();
}

char* FitsImageIIS::iisGet(int xx, int yy, int dx, int dy)
{
  return ((FitsIIS*)fits_)->get(xx, yy, dx, dy);
}

void FitsImageIIS::iisSet(const char* src, int xx, int yy, int dx, int dy)
{
  ((FitsIIS*)fits_)->set(src, xx, yy, dx, dy);
}

void FitsImageIIS::iisWCS(const Matrix& mm, const Vector& z, int zt)
{
  Matrix& mx = (Matrix&)mm;
  double sx = mx[0][0];
  double sy = mx[1][1];
  double tx = mx[2][0];
  double ty = mx[2][1];

  imageToPhysical = 
    Translate(0,-height()/2.) *
    FlipY() * 
    Translate(0,height()/2.) *
    Translate(-1,0) * 
    Scale(sx,sy) * 
    Translate(tx,ty);
  physicalToImage = imageToPhysical.invert();
  iisz_ = z;
  iiszt_ = zt;
}

// FitsImage

void FitsImage::altWCS(istream& str)
{
  FitsHead* hh = parseWCS(str);

  // Process OBJECT keyword
  if (objectKeyword_)
    delete [] objectKeyword_;
  objectKeyword_ = hh->getString("OBJECT");

  // Process WCS keywords
  if (altHeader_)
    delete altHeader_;

  altHeader_ = hh;
  initWCS();
}

void FitsImage::appendWCS(istream& str)
{
  FitsHead* hh = parseWCS(str);

  // process OBJECT keyword
  char* obj = hh->getString("OBJECT");
  if (obj) {
    if (objectKeyword_)
      delete [] objectKeyword_;
    objectKeyword_ = obj;
  }

  // Process WCS keywords
  FitsHead* hd = image_->head();

  // append wcs keywords to the end of the header
  int ll = hd->headbytes()+hh->headbytes();
  char* cards = new char[ll];

  // copy default wcs
  memcpy(cards, hd->cards(), hd->headbytes());

  // find first END and zero out
  for (int i=0; i<hd->headbytes(); i+=80)
    if (!strncmp(cards+i,"END",3)) {
      memcpy(cards+i, "   ",3);
      break;
    }

  // copy appended wcs
  memcpy(cards+hd->headbytes(), hh->cards(), hh->headbytes());

  delete hh;
  if (wcsHeader_)
    delete wcsHeader_;

  wcsHeader_ = new FitsHead(cards,ll,FitsHead::ALLOC);
  initWCS();
}

char* FitsImage::display(FitsHead* hd)
{
  int size = hd->ncard() * (FTY_CARDLEN+1);
  char* lbuf = new char[size+1];

  char* lptr = lbuf;
  char* cptr = hd->cards();
  for (int i=0; i<hd->ncard(); i++,cptr+=FTY_CARDLEN) {
    memcpy(lptr, cptr, FTY_CARDLEN);
    lptr+=FTY_CARDLEN;
    *(lptr++) = '\n';
  }

  lbuf[size] = '\0';
  return lbuf;
}

char* FitsImage::displayHeader()
{
  Vector blockFactor = context_->blockFactor();
  if (blockFactor[0] != 1 && blockFactor[1] != 1)
    return display(image_->head());

  if (DebugBin || DebugCompress)
    return display(image_->head());
  else
    return display(fits_->head());
}

char* FitsImage::displayPrimary()
{
  return display(fits_->primary());
}

char* FitsImage::displayWCS()
{
  if (wcsHeader_)
    return display(wcsHeader_);
  else if (altHeader_)
    return display(altHeader_);
  else
    return display(image_->head());
}

int FitsImage::findKeyword(const char* key)
{
  return fits_->find(key);
}

FitsBound* FitsImage::getDataParams(FrScale::SecMode which)
{
  switch (which) {
  case FrScale::IMGSEC:
    return &iparams;
  case FrScale::DATASEC:
    return &dparams;
  case FrScale::CROPSEC:
    return &cparams;
  }

  // just to satisfy the compiler
  return &iparams;
}

const char* FitsImage::getValue(const Vector& v)
{
  if (!isIIS())
    return data_->getValue(v);
  else {
    double val = data_->getValueDouble(v);

    ostringstream str;
    if (val == 0)
      str << ends;
    else if (val == IISMIN)
      str << '<' << iisz_[0] << ends;
    else if (val == IISMAX)
      str << '>' << iisz_[1] << ends;
    else if (val > IISMAX)
      str << ends;
    else
      // W_LINEAR =1
      if (iiszt_ == 1)
	str << ((val-IISMIN) * (iisz_[1]-iisz_[0]))/(IISMAX-IISMIN) + iisz_[0] 
	    << ends;
      else
	str << val << ends;

    memcpy(buf,str.str().c_str(), str.str().length());
    return buf;
  }
}

void FitsImage::iisSetFileName(const char* fn)
{
  if (iisFileName)
    delete [] iisFileName;
  iisFileName = dupstr(fn);
}

void FitsImage::initWCS()
{
  // free up wcs and ast arrays
  if (wcs_) {
    for (int ii=0; ii<MULTWCSA; ii++)
      if (manageWCS_ && wcs_[ii])
	wcsfree(wcs_[ii]);
    delete [] wcs_;
  }
  wcs_ = new WorldCoor*[MULTWCSA];
  for (int ii=0; ii<MULTWCSA; ii++)
    wcs_[ii] = NULL;

  if (wcsx_) {
    for (int ii=0; ii<MULTWCS; ii++)
      if (manageWCS_ && wcsx_[ii])
	delete wcsx_[ii];
    delete [] wcsx_;
  }  
  wcsx_ = new WCSx*[MULTWCS];
  for (int ii=0; ii<MULTWCS; ii++)
    wcsx_[ii] = NULL;

  if (ast_) {
    for (int ii=0; ii<MULTWCSA; ii++)
      if (manageWCS_ && ast_[ii])
	astAnnul(ast_[ii]);
    delete [] ast_;
  }
  ast_ = new AstFrameSet*[MULTWCSA];
  for (int ii=0; ii<MULTWCSA; ii++)
    ast_[ii] = NULL;

  // shareWCS?
  manageWCS_ =1;
  if (context_->shareWCS()) {
    FitsImage* ptr = context_->fits;
    while (ptr) {
      if (ptr == this)
	break;

      FitsImage* sptr = ptr->nextSlice();
      while (sptr) {
	if (sptr == this) {
	  for (int ii=0; ii<MULTWCSA; ii++)
	    wcs_[ii] = ptr->wcs_[ii];
	  for (int ii=0; ii<MULTWCS; ii++)
	    wcsx_[ii] = ptr->wcsx_[ii];
	  for (int ii=0; ii<MULTWCSA; ii++)
	    ast_[ii] = ptr->ast_[ii];

#ifndef NEWWCS
	  initWCSPhysical();
#endif
	  manageWCS_ =0;
	  return;
	}
	sptr = sptr->nextSlice();
      }
      ptr = ptr->nextMosaic();
    }
  }

  // WCSx
  FitsHead* hd =NULL;
  FitsHead* prim =NULL;
  if (wcsHeader_)
    hd = wcsHeader_;
  else if (altHeader_)
    hd = altHeader_;
  else {
    hd = image_->head();
    prim = image_->primary() && image_->inherit() ? image_->primary() : NULL;
  }

  // wcsinit is sloooowwww! so try to figure it out first
  // look first for default WCS. Let wcsinit figure it out since there can
  // be many different non-standard wcs's present
  wcshead = hd;
  wcsprim = prim;
  wcs_[0] = wcsinit(hd->cards());
  wcshead = NULL;
  wcsprim = NULL;

  // now look for WCSA - WCSZ
  // we can take a short cut here, since only valid FITS wcs's are available
  for (int ii=1; ii<MULTWCS; ii++) {
    char str[] = "CTYPE1 ";
    str[6] = '@'+ii;
    if (hd->find(str)) {
      wcshead = hd;
      wcsprim = prim;
      wcs_[ii] = wcsinitc(hd->cards(),str+6);
      wcshead  = NULL;
      wcsprim = NULL;
    }
  }

  // finally, look for AST def
  if (!wcs_[0]) {
    char str[] = "BEGAST_A";
    if (hd->find(str)) {
      wcs_[0] = wcskinit(100, 100, (char*)"AST--WCS", (char*)"AST--WCS", 
			 0, 0, 0, 0, NULL, 1, 1, 0, 2000, 0);
      wcs_[0]->longpole = 999;
      wcs_[0]->latpole = 999;
    }
  }

  // AST
  for (int ii=0; ii<MULTWCSA; ii++) {
    if (wcs_[ii]) {
      if (DebugWCS)
	wcsShow(wcs_[ii]);

      astinit(ii, hd, prim);

      if (DebugAST)
	astShow(ast_[ii]);
    }
  }

#ifndef NEWWCS
  // WCSDEP
  if (hd->find("WCSDEP")) {
    char* str = hd->getString("WCSDEP");
    if (str) {
      for (int ii=1; ii<MULTWCS; ii++) {
	if (wcs_[ii]) {
	  if (wcs_[ii]->wcsname) {
	    if (!strncmp(str,wcs_[ii]->wcsname,strlen(wcs_[ii]->wcsname))) {
	      if (ast_[0] && ast_[ii]) {
		AstFrameSet* dep = (AstFrameSet*)astCopy(ast_[ii]);
		astInvert(ast_[0]);
		astAddFrame(dep,2,astUnitMap(2,""),ast_[0]);
		astSetI(dep,"current",4);
		astAnnul(ast_[0]);
		ast_[0] = dep;
	      }
	    }
	  }
	}
      }
      delete [] str;
    }
  }
#endif

  // WCSx
  char scrpix[] = "CRPIX  ";
  char scrval[] = "CRVAL  ";
  char scd[] = "CD _  ";
  char spc[] = "PC _  ";
  char scdelt[] = "CDELT  ";
  for (int ii=0; ii<MULTWCS; ii++) {
    for (int jj=2; jj<FTY_MAXAXES; jj++) {
    
      scrpix[5] = '1'+jj;
      scrpix[6] = !ii ? ' ' : '@'+jj;
      scrval[5] = '1'+jj;
      scrval[6] = !ii ? ' ' : '@'+jj;
      scd[2] = '1'+jj;
      scd[4] = '1'+jj;
      scd[5] = !ii ? ' ' : '@'+jj;
      spc[2] = '1'+jj;
      spc[4] = '1'+jj;
      spc[5] = !ii ? ' ' : '@'+jj;
      scdelt[5] = '1'+jj;
      scdelt[6] = !ii ? ' ' : '@'+jj;

      if (hd->find(scrpix) && hd->find(scrval)) {
	if (!wcsx_[ii])
	  wcsx_[ii] = new WCSx();
	wcsx_[ii]->crpix[jj] = hd->getReal(scrpix,0);
	wcsx_[ii]->crval[jj] = hd->getReal(scrval,0);

	float cd = hd->getReal(scd,0);
	float pc = hd->getReal(spc,0);
	float cdelt = hd->getReal(scdelt,0);
	if (cd)
	  wcsx_[ii]->cd[jj] = cd;
	else if (pc && cdelt)
	  wcsx_[ii]->cd[jj] = pc * cdelt;
	else if (cdelt)
	  wcsx_[ii]->cd[jj] = cdelt;
	else
	  wcsx_[ii]->cd[jj] = 1;
      }
    }
  }

#ifndef NEWWCS
  initWCSPhysical();
#endif

  if (DebugWCS) {
    for (int ii=0; ii<MULTWCS; ii++) {
      if (wcsx_[ii]) {
	for (int jj=0; jj<FTY_MAXAXES; jj++) {
	  if (wcsx_[ii]->cd[jj]) {
	    cerr << "wcsx" << (char)(!ii ? ' ' : '@'+ii) 
		 << "[" << ii << "]->crpix[" << jj << "]=" 
		 << wcsx_[ii]->crpix[jj] << endl;
	    cerr << "wcsx" << (char)(!ii ? ' ' : '@'+ii) 
		 << "[" << ii << "]->crval[" << jj << "]=" 
		 << wcsx_[ii]->crval[jj] << endl;
	    cerr << "wcsx" << (char)(!ii ? ' ' : '@'+ii) 
		 << "[" << ii << "]->cd[" << jj << "]=" 
		 << wcsx_[ii]->cd[jj] << endl;
	  }
	}
      }
    }
  }
}

#ifndef NEWWCS
void FitsImage::initWCSPhysical()
{
  // now see if we have a 'physical' wcs, if so, set LTMV keywords
  keyLTMV =0;
  for (int ii=1; ii<MULTWCS; ii++) {
    if (wcs_[ii] && 
	wcs_[ii]->wcsname && 
	!strncmp(wcs_[ii]->wcsname, "PHYSICAL", 8)) {
      keyLTMV = 1;

      double ltm11 = wcs_[ii]->cd[0] != 0 ? 1/wcs_[ii]->cd[0] : 0;
      double ltm12 = wcs_[ii]->cd[1] != 0 ? 1/wcs_[ii]->cd[1] : 0;
      double ltm21 = wcs_[ii]->cd[2] != 0 ? 1/wcs_[ii]->cd[2] : 0;
      double ltm22 = wcs_[ii]->cd[3] != 0 ? 1/wcs_[ii]->cd[3] : 0;

      double ltv1 = wcs_[ii]->crpix[0] -
	wcs_[ii]->crval[0]*ltm11 - wcs_[ii]->crval[1]*ltm21;
      double ltv2 = wcs_[ii]->crpix[1] -
	wcs_[ii]->crval[0]*ltm12 - wcs_[ii]->crval[1]*ltm22;

      physicalToImage = Matrix(ltm11, ltm12, ltm21, ltm22, ltv1, ltv2);
      imageToPhysical = physicalToImage.invert();
    }
  }
}
#endif

void FitsImage::initWCS0(const Vector& pix)
{
  FitsHead* hd =NULL;
  FitsHead* prim =NULL;
  if (wcsHeader_)
    hd = wcsHeader_;
  else if (altHeader_)
    hd = altHeader_;
  else {
    hd = image_->head();
    prim = image_->primary() && image_->inherit() ? image_->primary() : NULL;
  }

  int ii = Coord::WCS0-Coord::WCS;
  if (wcs_[ii])
    wcsfree(wcs_[ii]);
  wcs_[ii] = NULL;

  if (wcs_[0]) {
    Vector cc = mapFromRef(pix, Coord::IMAGE, Coord::FK5);
    WorldCoor* ww = wcs_[0];
    wcs_[ii] = wcskinit(ww->nxpix, ww->nypix, 
		       (char*)"RA---TAN", (char*)"DEC--TAN", 
		       cc[0], cc[1], 0, 0, ww->cd, 0, 0, 0, 2000, 2000);
    wcs_[ii]->longpole = 999;
    wcs_[ii]->latpole = 999;

    if (ast_[ii])
      astAnnul(ast_[ii]);
    ast_[ii] = NULL;
    astinit0(ii, hd, prim);
  }
}

void FitsImage::load()
{
  if (post_)
    base_ = post_;
  else if (hpx_)
    base_ = hpx_;
  else if (hist_)
    base_ = hist_;
  else
    base_ = fits_;

  if (basedata_)
    delete basedata_;

  switch (base_->head()->bitpix()) {
  case 8:
    basedata_ = new FitsDatam<unsigned char>(base_, interp_);
    break;
  case 16:
    basedata_ = new FitsDatam<short>(base_, interp_);
    break;
  case -16:
    basedata_ = new FitsDatam<unsigned short>(base_, interp_);
    break;
  case 32:
    basedata_ = new FitsDatam<int>(base_, interp_);
    break;
  case 64:
    basedata_ = new FitsDatam<long long>(base_, interp_);
    break;
  case -32:
    basedata_ = new FitsDatam<float>(base_, interp_);
    break;
  case -64:
    basedata_ = new FitsDatam<double>(base_, interp_);
    break;
  }

  // block
  block_ = base_;
  blockdata_ = basedata_;

  // analysis
  analysis_ = block_;
  analysisdata_ = blockdata_;

  // image
  image_ = analysis_;
  data_ = analysisdata_;
}

#ifndef NEWWCS
void FitsImage::match(const char* xxname1, const char* yyname1,
		      Coord::CoordSystem sys1, Coord::SkyFrame sky1,
		      const char* xxname2, const char* yyname2,
		      Coord::CoordSystem sys2, Coord::SkyFrame sky2,
		      double rad, Coord::CoordSystem sys, 
		      Coord::DistFormat dist,
		      const char* rrname)
{
  astClearStatus;

  // get lists
  Tcl_Obj* listxx1 = 
    Tcl_GetVar2Ex(interp_, xxname1, NULL, TCL_LEAVE_ERR_MSG);
  Tcl_Obj* listyy1 = 
    Tcl_GetVar2Ex(interp_, yyname1, NULL, TCL_LEAVE_ERR_MSG);
  Tcl_Obj* listxx2 = 
    Tcl_GetVar2Ex(interp_, xxname2, NULL, TCL_LEAVE_ERR_MSG);
  Tcl_Obj* listyy2 = 
    Tcl_GetVar2Ex(interp_, yyname2, NULL, TCL_LEAVE_ERR_MSG);

  // get objects
  int nxx1;
  Tcl_Obj **objxx1;
  Tcl_ListObjGetElements(interp_, listxx1, &nxx1, &objxx1);
  int nyy1;
  Tcl_Obj **objyy1;
  Tcl_ListObjGetElements(interp_, listyy1, &nyy1, &objyy1);
  int nxx2;
  Tcl_Obj **objxx2;
  Tcl_ListObjGetElements(interp_, listxx2, &nxx2, &objxx2);
  int nyy2;
  Tcl_Obj **objyy2;
  Tcl_ListObjGetElements(interp_, listyy2, &nyy2, &objyy2);

  // sanity check
  if (nxx1 != nyy1 || nxx2 != nyy2)
    return;
    
  // get doubles
  double* ixx1 = new double[nxx1];
  for (int ii=0 ; ii<nxx1 ; ii++)
    Tcl_GetDoubleFromObj(interp_, objxx1[ii], ixx1+ii);
  double* iyy1 = new double[nyy1];
  for (int ii=0 ; ii<nyy1 ; ii++)
    Tcl_GetDoubleFromObj(interp_, objyy1[ii], iyy1+ii);

  double* oxx1 = new double[nxx1];
  memset(oxx1,0,sizeof(double)*nxx1);
  double* oyy1 = new double[nyy1];
  memset(oyy1,0,sizeof(double)*nyy1);

  double* ixx2 = new double[nxx2];
  for (int ii=0 ; ii<nxx2 ; ii++)
    Tcl_GetDoubleFromObj(interp_, objxx2[ii], ixx2+ii);
  double* iyy2 = new double[nyy2];
  for (int ii=0 ; ii<nyy2 ; ii++)
    Tcl_GetDoubleFromObj(interp_, objyy2[ii], iyy2+ii);

  double* oxx2 = new double[nxx2];
  memset(oxx2,0,sizeof(double)*nxx2);
  double* oyy2 = new double[nyy2];
  memset(oyy2,0,sizeof(double)*nyy2);

  // map from wcs to image
  {
    int ss = sys1-Coord::WCS;
    if (!(ss>=0 && ast_ && ast_[ss]))
      return;

    if (astIsASkyFrame(astGetFrame(ast_[0], AST__CURRENT))) {
      setAstSkyFrame(ast_[ss],sky1);
      for (int ii=0; ii<nxx1; ii++) {
	ixx1[ii] *= M_PI/180.;
	iyy1[ii] *= M_PI/180.;
      }	
      astTran2(ast_[ss], nxx1, ixx1, iyy1, 0, oxx1, oyy1);
    }
  }

  {
    int ss = sys2-Coord::WCS;
    if (!(ss>=0 && ast_ && ast_[ss]))
      return;

    if (astIsASkyFrame(astGetFrame(ast_[ss], AST__CURRENT))) {
      setAstSkyFrame(ast_[ss],sky2);
      for (int ii=0; ii<nxx2; ii++) {
	ixx2[ii] *= M_PI/180.;
	iyy2[ii] *= M_PI/180.;
      }	
      astTran2(ast_[ss], nxx2, ixx2, iyy2, 0, oxx2, oyy2);
    }
  }

  // radius
  Vector cd = getWCScdelt(sys);
  switch (dist) {
  case Coord::DEGREE:
    break;
  case Coord::ARCMIN:
    rad /= 60;
    break;
  case Coord::ARCSEC:
    rad /= 60*60;
    break;
  }
  double rx = rad/cd[0];
  double ry = rad/cd[1];
  double rr = (rx*rx + ry*ry)/2;

  // now compare
  int cnt=0;
  Tcl_Obj* objrr = Tcl_NewListObj(0,NULL);
  for(int jj=0; jj<nxx2; jj++) {
    for (int ii=0; ii<nxx1; ii++) {
      double dx = oxx2[jj]-oxx1[ii];
      double dy = oyy2[jj]-oyy1[ii];

      if (dx*dx + dy*dy < rr) {
	Tcl_Obj* obj[2];
	obj[0] = Tcl_NewIntObj(ii+1);
	obj[1] = Tcl_NewIntObj(jj+1);
	Tcl_Obj* list = Tcl_NewListObj(2,obj);
	Tcl_ListObjAppendElement(interp_, objrr, list);
	cnt++;
      }
    }
  }

  Tcl_SetVar2Ex(interp_, rrname, NULL, objrr, TCL_LEAVE_ERR_MSG);

  // clean up
  delete [] ixx1;
  delete [] iyy1;
  delete [] oxx1;
  delete [] oyy1;

  delete [] ixx2;
  delete [] iyy2;
  delete [] oxx2;
  delete [] oyy2;
}
#else
void FitsImage::match(const char* xxname1, const char* yyname1,
		      Coord::CoordSystem sys1, Coord::SkyFrame sky1,
		      const char* xxname2, const char* yyname2,
		      Coord::CoordSystem sys2, Coord::SkyFrame sky2,
		      double rad, Coord::CoordSystem sys, 
		      Coord::DistFormat dist,
		      const char* rrname)
{
  // only good for skyframe

  astClearStatus; // just to make sure
  astBegin; // start memory management

  // get lists
  Tcl_Obj* listxx1 =
    Tcl_GetVar2Ex(interp_, xxname1, NULL, TCL_LEAVE_ERR_MSG);
  Tcl_Obj* listyy1 =
    Tcl_GetVar2Ex(interp_, yyname1, NULL, TCL_LEAVE_ERR_MSG);
  Tcl_Obj* listxx2 =
    Tcl_GetVar2Ex(interp_, xxname2, NULL, TCL_LEAVE_ERR_MSG);
  Tcl_Obj* listyy2 =
    Tcl_GetVar2Ex(interp_, yyname2, NULL, TCL_LEAVE_ERR_MSG);

  // get objects
  int nxx1;
  Tcl_Obj **objxx1;
  Tcl_ListObjGetElements(interp_, listxx1, &nxx1, &objxx1);
  int nyy1;
  Tcl_Obj **objyy1;
  Tcl_ListObjGetElements(interp_, listyy1, &nyy1, &objyy1);
  int nxx2;
  Tcl_Obj **objxx2;
  Tcl_ListObjGetElements(interp_, listxx2, &nxx2, &objxx2);
  int nyy2;
  Tcl_Obj **objyy2;
  Tcl_ListObjGetElements(interp_, listyy2, &nyy2, &objyy2);

  // sanity check
  if (nxx1 != nyy1 || nxx2 != nyy2)
    return;

  // get doubles
  double* ixx1 = new double[nxx1];
  for (int ii=0 ; ii<nxx1 ; ii++)
    Tcl_GetDoubleFromObj(interp_, objxx1[ii], ixx1+ii);
  double* iyy1 = new double[nyy1];
  for (int ii=0 ; ii<nyy1 ; ii++)
    Tcl_GetDoubleFromObj(interp_, objyy1[ii], iyy1+ii);

  double* xx1 = new double[nxx1];
  memset(xx1,0,sizeof(double)*nxx1);
  double* yy1 = new double[nyy1];
  memset(yy1,0,sizeof(double)*nyy1);

  double* xx2 = new double[nxx2];
  for (int ii=0 ; ii<nxx2 ; ii++)
    Tcl_GetDoubleFromObj(interp_, objxx2[ii], xx2+ii);
  double* yy2 = new double[nyy2];
  for (int ii=0 ; ii<nyy2 ; ii++)
    Tcl_GetDoubleFromObj(interp_, objyy2[ii], yy2+ii);

  if (!hasWCS(sys1))
    return;
  if (!hasWCS(sys2))
    return;
  int ss1 = sys1-Coord::WCS;
  int ss2 = sys2-Coord::WCS;

  // are both skyframe?
  if (!((astIsASkyFrame(astGetFrame(ast_[ss1], AST__CURRENT))) &&
	(astIsASkyFrame(astGetFrame(ast_[ss2], AST__CURRENT)))))
    return;

  setAstSkyFrame(ast_[ss1],sky1);
  for (int ii=0; ii<nxx1; ii++) {
    ixx1[ii] *= M_PI/180.;
    iyy1[ii] *= M_PI/180.;
  }

  setAstSkyFrame(ast_[ss2],sky2);
  for (int ii=0; ii<nxx2; ii++) {
    xx2[ii] *= M_PI/180.;
    yy2[ii] *= M_PI/180.;
  }

  double rr;
  switch (dist) {
  case Coord::DEGREE:
    rr = degToRad(rad);
    break;
  case Coord::ARCMIN:
    rr = degToRad(rad/60.);
    break;
  case Coord::ARCSEC:
    rr = degToRad(rad/60./60.);
    break;
  }

  if ((ss1 != ss2) || (sky1 != sky2)) {
    AstFrameSet* wcs1 = (AstFrameSet*)astCopy(ast_[ss1]);
    setAstSkyFrame(wcs1,sky1);
    AstFrameSet* wcs2 = (AstFrameSet*)astCopy(ast_[ss2]);
    setAstSkyFrame(wcs2,sky2);
    AstFrameSet* cvt = (AstFrameSet*)astConvert(wcs1, wcs2, "SKY");
    if (cvt != AST__NULL)
      astTran2(cvt, nxx1, ixx1, iyy1, 1, xx1, yy1);
  }
  else {
    memcpy(xx1,ixx1,nxx1*sizeof(double));
    memcpy(yy1,iyy1,nyy1*sizeof(double));
  }

  // now compare
  setAstSkyFrame(ast_[ss2],sky2);
  Tcl_Obj* objrr = Tcl_NewListObj(0,NULL);
  for(int jj=0; jj<nxx2; jj++) {
    for (int ii=0; ii<nxx1; ii++) {
      double pt1[2];
      pt1[0] = xx1[ii];
      pt1[1] = yy1[ii];
      double pt2[2];
      pt2[0] = xx2[jj];
      pt2[1] = yy2[jj];
      double dd = astDistance(ast_[ss2],pt1,pt2);
      if ((dd != AST__BAD) && (dd <= rr)) {
	Tcl_Obj* obj[2];
	obj[0] = Tcl_NewIntObj(ii+1);
	obj[1] = Tcl_NewIntObj(jj+1);
	Tcl_Obj* list = Tcl_NewListObj(2,obj);
	Tcl_ListObjAppendElement(interp_, objrr, list);
      }
    }
  }

  Tcl_SetVar2Ex(interp_, rrname, NULL, objrr, TCL_LEAVE_ERR_MSG);

  // clean up
  astEnd; // now, clean up memory

  delete [] ixx1;
  delete [] iyy1;
  delete [] xx1;
  delete [] yy1;
  delete [] xx2;
  delete [] yy2;
}
#endif

Matrix& FitsImage::matrixToData(Coord::InternalSystem sys)
{
  switch (sys) {
  case Coord::WINDOW:
    return windowToData;
  case Coord::CANVAS:
    return canvasToData;
  case Coord::WIDGET:
    return widgetToData;
  case Coord::PANNER:
    return pannerToData;
  case Coord::MAGNIFIER:
    return magnifierToData;
  case Coord::PS:
    return psToData;
  case Coord::USER:
    return userToData;
  case Coord::REF:
    return refToData;
  }

  // just to satisfy the compiler
  return refToData;
}

Matrix& FitsImage::matrixFromData(Coord::InternalSystem sys)
{
  switch (sys) {
  case Coord::WINDOW:
    return dataToWindow;
  case Coord::CANVAS:
    return dataToCanvas;
  case Coord::WIDGET:
    return dataToWidget;
  case Coord::PANNER:
    return dataToPanner;
  case Coord::MAGNIFIER:
    return dataToMagnifier;
  case Coord::PS:
    return dataToPS;
  case Coord::USER:
    return dataToUser;
  case Coord::REF:
    return dataToRef;
  }

  // just to satisfy the compiler
  return dataToRef;
}

Matrix3d& FitsImage::matrixFromData3d(Coord::InternalSystem sys)
{
  switch (sys) {
  case Coord::WINDOW:
    return dataToWindow3d;
  case Coord::CANVAS:
    return dataToCanvas3d;
  case Coord::WIDGET:
    return dataToWidget3d;
  case Coord::PANNER:
    return dataToPanner3d;
  case Coord::MAGNIFIER:
    return dataToMagnifier3d;
  case Coord::PS:
    return dataToPS3d;
  case Coord::USER:
    return dataToUser3d;
  case Coord::REF:
    return dataToRef3d;
  }

  // just to satisfy the compiler
  return dataToRef3d;
}

Matrix3d& FitsImage::matrixToData3d(Coord::InternalSystem sys)
{
  switch (sys) {
  case Coord::WINDOW:
    return windowToData3d;
  case Coord::CANVAS:
    return canvasToData3d;
  case Coord::WIDGET:
    return widgetToData3d;
  case Coord::PANNER:
    return pannerToData3d;
  case Coord::MAGNIFIER:
    return magnifierToData3d;
  case Coord::PS:
    return psToData3d;
  case Coord::USER:
    return userToData3d;
  case Coord::REF:
    return refToData3d;
  }

  // just to satisfy the compiler
  return refToData3d;
}

FitsHead* FitsImage::parseWCS(istream& str)
{
  FitsHead* hd = image_->head();
  FitsHead* rr = new FitsHead(hd->naxis(0), hd->naxis(1),
			      hd->naxis(2), hd->bitpix());

  // this works for both terminated (\n) and non-terminated (fits) headers
  while (!str.eof()) {
    char buf[256];
    str.get(buf,80,'\n');
    if (strlen(buf) > 0) {
      // check for blank lines
      if (*buf == ' ')
	break;

      string x(buf);
      istringstream sstr(x);

      char keyword[32];
      sstr >> keyword;

      if (strchr(buf,'=')) {
	char dummy;
	sstr >> dummy;
      }

      if (strchr(buf,'\'')) {
	char val[64];
	char* ss = strchr(buf,'\'')+1;
	char* ee = strrchr(buf,'\'');
	int ll = ee-ss;
	if (ll<0 || ll>63)
	  ll =0;
	strncpy(val,ss,ll);
	val[ll] = '\0';
	rr->appendString(keyword, val, "");
      }
      else {
	double val;
	sstr >> val;
	rr->appendReal(keyword, val, 15, "");
      }

      if (strlen(buf) <= 80) {
	// eat the \n
	char b;
	str.get(b);
      }
    }
    else
      break;
  }

  return rr;
}

void FitsImage::process(const char* fn, int id)
{
  if (!fits_->isValid()) {
    reset();
    return;
  }

  if (fits_->isImage()) {
    switch (fits_->pEncoding()) {
    case FitsFile::RAW:
    case FitsFile::BSQ:
      break;
    case FitsFile::GZIP:
      initNRRD();
      if (!post_ || !post_->isValid()) {
	reset();
	return;
      }
      break;
    case FitsFile::BIL:
    case FitsFile::BIP:
      initENVI();
      if (!post_ || !post_->isValid()) {
	reset();
	return;
      }
      break;
    default:
      reset();
      return;
    }

    load();
  }
  else if (fits_->isBinTable()) {
    // Compress
    if (fits_->find("ZIMAGE")) {
      initCompress();
      if (!post_ || !post_->isValid()) {
	reset();
	return;
      }
      load();
    }
    // HEALPIX
    else if ((fits_->find("PIXTYPE") && (!strncmp(fits_->getString("PIXTYPE"),"HEALPIX",4))) || fits_->find("NSIDE")) {
      initHPX();
      if (!hpx_ || !hpx_->isValid()) {
	reset();
	return;
      }
      load();
    }
    else {
      // Bintable
      initBin();
      if (!hist_ || !hist_->isValid()) {
	reset();
	return;
      }
    }
  }
  else if (fits_->isAsciiTable()) {
    // HEALPIX
    if (fits_->find("NSIDE")) {
      initHPX();
      if (!hpx_ || !hpx_->isValid()) {
	reset();
	return;
      }
      load();
    }
  }

  // set slice address
  for (int ii=1; ii<id; ii++) {
    for (int jj=2; jj<FTY_MAXAXES; jj++) {
      if (address[jj]<naxis(jj)) {
	address[jj]++;
	break;
      }
      else
	address[jj]=1;
    }
  }

  // load() can call reset()
  if (fits_)
    setFileName(fn);
}

void FitsImage::processKeywordsPhysical()
{
  // Physical to Image (LTM/LTV keywords) (with no wcsname already located)

  if (!keyLTMV) {
    if (image_->find("LTM1_1") ||
	image_->find("LTM1_2") ||
	image_->find("LTM2_1") ||
	image_->find("LTM2_2") ||
	image_->find("LTV1") ||
	image_->find("LTV2"))
      keyLTMV = 1;

    double ltm11 = image_->getReal("LTM1_1", 1);
    double ltm12 = image_->getReal("LTM1_2", 0);
    double ltm21 = image_->getReal("LTM2_1", 0);
    double ltm22 = image_->getReal("LTM2_2", 1);

    double ltv1 = image_->getReal("LTV1", 0);
    double ltv2 = image_->getReal("LTV2", 0);

    physicalToImage = Matrix(ltm11, ltm12, ltm21, ltm22, ltv1, ltv2);
    imageToPhysical = physicalToImage.invert();
  }

  // CDD to Detector (DTM/DTV keywords)

  keyDTMV =0;
  if (image_->find("DTM1_1") ||
      image_->find("DTM1_2") ||
      image_->find("DTM2_1") ||
      image_->find("DTM2_2") ||
      image_->find("DTV1") ||
      image_->find("DTV2"))
    keyDTMV = 1;

  double dtm11 = image_->getReal("DTM1_1", 1);
  double dtm12 = image_->getReal("DTM1_2", 0);
  double dtm21 = image_->getReal("DTM2_1", 0);
  double dtm22 = image_->getReal("DTM2_2", 1);

  double dtv1 = image_->getReal("DTV1", 0);
  double dtv2 = image_->getReal("DTV2", 0);

  physicalToDetector = Matrix(dtm11, dtm12, dtm21, dtm22, dtv1, dtv2);
  detectorToPhysical = physicalToDetector.invert();

  // Physical to Amplifier (ATM/ATV keywords)

  keyATMV =0;
  if (image_->find("ATM1_1") ||
      image_->find("ATM1_2") ||
      image_->find("ATM2_1") ||
      image_->find("ATM2_2") ||
      image_->find("ATV1") ||
      image_->find("ATV2"))
    keyATMV = 1;

  double atm11 = image_->getReal("ATM1_1", 1);
  double atm12 = image_->getReal("ATM1_2", 0);
  double atm21 = image_->getReal("ATM2_1", 0);
  double atm22 = image_->getReal("ATM2_2", 1);

  double atv1 = image_->getReal("ATV1", 0);
  double atv2 = image_->getReal("ATV2", 0);

  physicalToAmplifier = Matrix(atm11, atm12, atm21, atm22, atv1, atv2);
  amplifierToPhysical = physicalToAmplifier.invert();

  if (DebugMosaic) {
    cerr << endl;
    cerr << "ATM/V: " << physicalToAmplifier << endl;
    cerr << "ATM/V-1: " << amplifierToPhysical << endl;
    cerr << "DTM/V: " << physicalToDetector << endl;
    cerr << "DTM/V-1: " << detectorToPhysical << endl;
    cerr << "LTM/V: " << physicalToImage << endl;
    cerr << "LTM/V-1: " << imageToPhysical << endl;
  }

  /*
  // Radio data?
  char* bunit = image_->getString("BUNIT");
  double cdelt1 = fabs(image_->getReal("CDELT1",0));
  char* cunit1 = image_->getString("CUNIT1");
  double cdelt2 = fabs(image_->getReal("CDELT2",0));
  char* cunit2 = image_->getString("CUNIT2");
  double bmaj = image_->getReal("BMAJ",0);
  double bmin = image_->getReal("BMIN",0);

  // ok we have a radio map
#define GFACTOR (2.0*sqrt(2.0*log(2.0)))
  if (!strncmp(bunit,"JY/BEAM",7) && cdelt1 && cdelt2 && bmaj && bmin) {
    // convert from deg to arcsec?
    cdelt1 *= 3600;
    cdelt2 *= 3600;
    bmaj *= 3600;
    bmin *= 3600;
    jyBeam_ = (2*M_PI*bmaj*bmin)/(GFACTOR*GFACTOR*cdelt1*cdelt2);
  }

  if (bunit)
    delete [] bunit;
  if (cunit1)
    delete [] cunit1;
  if (cunit2)
    delete [] cunit2;
  */
}

void FitsImage::processKeywordsParams()
{
  // iparams is a BBOX in DATA coords 0-n
  iparams.set(0, 0, width(), height());

  {
    char* datstr = image_->getString("DATASEC");
    // default
    Vector v1(1,1);
    Vector v2(size());

    keyDATASEC =0;
    if (datstr && *datstr && parseSection(datstr,&v1,&v2)) {
      // additional check
      if (v1[0]<1 || v1[1]<1 || 
	  v1[1]>width() || v2[1]>height() ||
	  v1[0]>v2[0] || v1[1]>v2[1]) {
	// default
	v1 = Vector(1,1);
	v2 = Vector(size());
	keyDATASEC = 0;
      } else
	keyDATASEC = 1;
    }

    // dparams is a BBOX in DATA coords 0-n
    datasec = BBox(v1,v2);
    v1 -= Vector(1,1);
    dparams.set(v1[0],v1[1],v2[0],v2[1]);

    if (datstr)
      delete [] datstr;
  }

  // DEBUG
  if (DebugCrop) {
    cerr << "iparams " << iparams << endl;
    cerr << "dparams " << dparams << endl;
  }
}

void FitsImage::processKeywordsFitsSection()
{
  Vector ll(dparams.xmin,dparams.ymin);
  Vector ur(dparams.xmax,dparams.ymax);

  if (fits_->pcoord() && fits_->pxvalid() && fits_->pyvalid()) {
    ll[0] = fits_->pxmin();
    ur[0] = fits_->pxmax();
    ll[1] = fits_->pymin();
    ur[1] = fits_->pymax();

    ll = ll*physicalToImage*Translate(-1,-1);
    ur = ur*physicalToImage;

    context_->setSecMode(FrScale::CROPSEC);
  }
  if (!fits_->pcoord() && fits_->pxvalid()) {
    ll[0] = fits_->pxmin()-1;
    ur[0] = fits_->pxmax();
    context_->setSecMode(FrScale::CROPSEC);
  }
  if (!fits_->pcoord() && fits_->pyvalid()) {
    ll[1] = fits_->pymin()-1;
    ur[1] = fits_->pymax();
    context_->setSecMode(FrScale::CROPSEC);
  }

  // params is a BBOX in DATA coords 0-n
  setCropParams(ll,ur,0);

  // DEBUG
  if (DebugCrop)
    cerr << "cparams " << cparams << endl;

  if (fits_->pzvalid()) {
    int zmin = fits_->pzmin()-1;
    int zmax = fits_->pzmax();
    context_->setSecMode(FrScale::CROPSEC);
    context_->setCrop3dParams(zmin,zmax);
  }
}

int FitsImage::processKeywordsIRAF(FitsImage* fits)
{
  // DETSEC
  Coord::Orientation orientation = Coord::NORMAL;

  char* detstr =  image_->getString("DETSEC");
  Vector dv1,dv2;
  if (!(detstr && *detstr && parseSection(detstr,&dv1,&dv2))) {
    if (detstr)
      delete [] detstr;
    return 0;
  }
  delete [] detstr;
  BBox detsec = BBox(dv1,dv2);

  int xx = (dv1[0] < dv2[0]);
  int yy = (dv1[1] < dv2[1]);

  if (xx && yy)
    orientation = Coord::NORMAL;
  else if (!xx && yy)
    orientation = Coord::XX;
  else if (!xx && !yy)
    orientation = Coord::XY;
  else if (xx && !yy)
    orientation = Coord::YY;

  // DETSIZE
  char* sizestr = image_->getString("DETSIZE");
  Vector sv1(1,1);
  Vector sv2(10000,10000);
  if (sizestr && *sizestr) {
    if (!(parseSection(sizestr,&sv1,&sv2))) {
      delete [] sizestr;
      return 0;
    }
  }
  if (sizestr)
    delete [] sizestr;
  BBox detsize = BBox(sv1,sv2);
  
  // CCDSUM
  Vector ccdsum(1,1);
  char* ccdstr = image_->getString("CCDSUM");
  if (ccdstr && *ccdstr) {
    double Ns, Np, Ns1, Np1;
    string x(ccdstr);
    istringstream str(x);

    str >> Ns >> Np >> Ns1 >> Np1;
    ccdsum = Vector(1/Ns, 1/Np);
  }
  if (ccdstr)
    delete [] ccdstr;
  
  // origin
  Vector origin = detsec.ll * Scale(ccdsum) * Translate(-datasec.ll);

  // matrix
  // if the segment is flipped, we can have a discontinuity at
  // the edges, due to round off errors, so we 'nudge' it

  Matrix flip;
  switch (orientation) {
  case Coord::NORMAL:
    break;
  case Coord::XX:
    flip = FlipX();
      break;
  case Coord::YY:
    flip = FlipY();
      break;
  case Coord::XY:
    flip = FlipXY();
      break;
  }

  // internal flip
  Matrix mflip;
  switch (context_->IRAFOrientation(orientation)) {
  case Coord::NORMAL:
    break;
  case Coord::XX:
    mflip = FlipX();
    break;
  case Coord::YY:
    mflip = FlipY();
    break;
  case Coord::XY:
    mflip = FlipXY();
    break;
  }

  Vector center = datasec.center() * imageToData;
  Vector mcenter = detsize.center() * imageToData * Scale(ccdsum);

  wcsToRef_ =
    Translate(-center) *
    flip *
    Translate(center) *
    Translate(origin) * 
    Translate(-mcenter) *
    mflip *
    Translate(mcenter);

  // we do this to shift the origin to the middle of the image to match
  // the wcs case. Needed by imageBBox()
  // first? reset wcsToRef
  if (fits == this) {
    irafToRef = wcsToRef_.invert();
    wcsToRef_ = Matrix();
  }
  else
    wcsToRef_ *= fits->irafToRef;

  if (DebugMosaic) {
    cerr << "ProcessKeywordsIRAF" << endl
	 << " datasec: " << datasec << endl
	 << " ccdsum : " << ccdsum << endl
	 << " detsize: " << detsize << endl
	 << " detsec : " << detsec << endl
	 << " matrix : " << wcsToRef_ << endl;
  }

  return 1;
}

void FitsImage::replaceWCS(istream& str)
{
  FitsHead* hh = parseWCS(str);

  // Process OBJECT keyword
  if (objectKeyword_)
    delete [] objectKeyword_;
  objectKeyword_ = hh->getString("OBJECT");

  // Process WCS keywords
  if (wcsHeader_)
    delete wcsHeader_;

  wcsHeader_ = hh;
  initWCS();
}

void FitsImage::reset()
{
  if (fits_)
    delete fits_;
  fits_ =NULL;

  if (post_)
    delete post_;
  post_ =NULL;
  if (hpx_)
    delete hpx_;
  hpx_ =NULL;
  if (hist_)
    delete hist_;
  hist_ =NULL;

  base_ =NULL;
  if (basedata_)
    delete basedata_;
  basedata_ =NULL;

  if (manageBlock_) {
    if (block_)
      delete block_;
    if (blockdata_)
      delete blockdata_;
  }
  manageBlock_ =0;
  block_ =NULL;
  blockdata_ =NULL;

  if (manageAnalysis_) {
    if (analysis_)
      delete analysis_;
    if (analysisdata_)
      delete analysisdata_;
  }
  manageAnalysis_ =0;
  analysis_ =NULL;
  analysisdata_ =NULL;

  image_ =NULL;
  data_ =NULL;
}

void FitsImage::resetWCS()
{
  // Process OBJECT keyword
  if (objectKeyword_)
    delete [] objectKeyword_;
  objectKeyword_ = image_->getString("OBJECT");

  // Process WCS keywords
  if (wcsHeader_)
    delete wcsHeader_;

  wcsHeader_ = NULL;
  initWCS();
}

void FitsImage::resetWCS0()
{
  int ii = Coord::WCS0-Coord::WCS;
  if (wcs_[ii])
    wcsfree(wcs_[ii]);
  wcs_[ii] = NULL;

  if (ast_[ii])
    astAnnul(ast_[ii]);
  ast_[ii] = NULL;
}

char* FitsImage::root(const char* fn)
{
  if (fn) {
    const char* ptr = fn;           // init the ptr
    while(*ptr++);                  // walk it forward to end of string
    ptr--;                          // backup one
    while(*ptr != '/' && ptr != fn) // walk it backward til last / or beginning
      ptr--;
    if (*ptr == '/')                // step it over the last '/'
      ptr++;
    return dupstr(ptr);             // got it!
  }
  else
    return NULL;
}

void FitsImage::setCropParams(int datasec)
{
  if (!datasec)
    cparams = iparams;
  else
    cparams = dparams;
}

void FitsImage::setCropParams(const Vector& ss, const Vector& tt, int datasec)
{
  // Coord are in DATA
  Vector ll = ss;
  Vector ur = tt;

  int xmin = ll[0];
  int xmax = ur[0];
  int ymin = ll[1];
  int ymax = ur[1];

  if (xmin>xmax) {
    xmin = ur[0];
    xmax = ll[0];
  }
  if (ymin>ymax) {
    ymin = ur[1];
    ymax = ll[1];
  }

  setCropParams(xmin,ymin,xmax,ymax,datasec);
}

void FitsImage::setCropParams(int x0, int y0, int x1, int y1, int datasec)
{
  FitsBound* params;
  if (!datasec)
    params = &iparams;
  else
    params = &dparams;

  // Coords are in DATA
  if (x0<params->xmin)
    x0=params->xmin;
  if (x0>params->xmax)
    x0=params->xmax;
  if (x1<params->xmin)
    x1=params->xmin;
  if (x1>params->xmax)
    x1=params->xmax;

  if (y0<params->ymin)
    y0=params->ymin;
  if (y0>params->ymax)
    y0=params->ymax;
  if (y1<params->ymin)
    y1=params->ymin;
  if (y1>params->ymax)
    y1=params->ymax;

  cparams.set(x0,y0,x1,y1);
}

void FitsImage::setFileName(const char* fn)
{
  if (fileName)
    delete [] fileName;
  fileName = NULL;

  if (rootBaseFileName)
    delete [] rootBaseFileName;
  rootBaseFileName = NULL;

  if (fullBaseFileName)
    delete [] fullBaseFileName;
  fullBaseFileName = NULL;

  if (iisFileName)
    delete [] iisFileName;
  iisFileName = NULL;

  // no filename to set
  if (!fn)
    return;

  // strip any '[]'
  char* ffn = strip(fn);

  FitsFile* ptr = post_ ? post_ : fits_;
  if (!ptr)
    return;

  const char* ext = ptr->extname();
  if (ext) {
    {
      ostringstream str;
      str << ffn << '[' << ext << ']' << ends;
      fullBaseFileName = dupstr(str.str().c_str());
    }
    {
      char* m = root(ffn);
      ostringstream str;
      str << m << '[' << ext << ']' << ends;
      rootBaseFileName = dupstr(str.str().c_str());
      delete [] m;
    }
  }
  else if (ptr->ext()) {
    {
      ostringstream str;
      str << ffn << '[' << ptr->ext() << ']' << ends;
      fullBaseFileName = dupstr(str.str().c_str());
    }
    {
      char* m = root(ffn);
      ostringstream str;
      str << m << '[' << ptr->ext() << ']' << ends;
      rootBaseFileName = dupstr(str.str().c_str());
      delete [] m;
    }
  }
  else {
    fullBaseFileName = dupstr(ffn);
    rootBaseFileName = root(ffn);
  }
  
  // by default, iisFileName is fullBaseFileName
  if (fullBaseFileName)
    iisFileName = dupstr(fullBaseFileName);

  delete [] ffn;
}

void FitsImage::setObjectKeyword(const char* obj)
{
  if (objectKeyword_)
    delete [] objectKeyword_;
  objectKeyword_ = dupstr(obj);
}

char* FitsImage::strip(const char* fn)
{
  if (fn) {
    char* r = dupstr(fn);           // dup the string
    char* ptr = r;                  // init the ptr
    while(*ptr != '[' && *ptr)      // walk it forward til '[' or end
      ptr++;
    *ptr = '\0';                    // zero out rest

    return r;                       // got it!
  }
  else
    return NULL;
}

int FitsImage::nhdu()
{
  int dd =1;
  for (int ii=2; ii<FTY_MAXAXES; ii++)
    if (naxis(ii))
      dd *= naxis(ii);
  return dd;
}

void FitsImage::updateClip(FrScale* fr)
{
  data_->updateClip(fr,getDataParams(fr->secMode()));
}

void* clipproc(void* tt)
{
  t_clip_arg* targ = (t_clip_arg*)tt;
  FitsData* data = targ->data;
  FrScale* fr = targ->fr;
  FitsBound* bb = targ->bb;
  data->updateClip(fr,bb);

  return NULL;
}

void FitsImage::updateClip(FrScale* fr, pthread_t* thread, t_clip_arg* targ)
{
  targ->data = data_;
  targ->fr = fr;
  targ->bb = getDataParams(fr->secMode());
  int result = pthread_create(thread, NULL, clipproc, targ);
  if (result)
    internalError("Unable to Create Thread");
}

const char* FitsImage::getFileName(Base::FileNameType type)
{
  switch (type) {
  case Base::ROOTBASE:
    return rootBaseFileName;
  case Base::FULLBASE:
    return fullBaseFileName;
  case Base::ROOT:
  case Base::FULL:
    // clear the buffer
    if (fileName)
      delete [] fileName;
    fileName =NULL;

    // generate filename
    // if FITS bin table cube, be sure to check the first slice
    if (context_->fits->isHist())
      return updateFileNameBin(type);
    else
      return updateFileNameImage(type);
  }

  // just to satisfy the compiler
  return rootBaseFileName;
}

const char* FitsImage::updateFileNameImage(Base::FileNameType type)
{
  // 2d/3d section
  char* sec =NULL;
  switch (context_->secMode()) {
  case FrScale::IMGSEC:
  case FrScale::DATASEC:
    {
      Vector blockFactor = context_->blockFactor();

      if (blockFactor[0] != 1) {
	ostringstream str;
	str << "*," << blockFactor[0] << ends;
	sec = dupstr(str.str().c_str());
      }
    }    
    break;
  case FrScale::CROPSEC:
    {
      FitsBound* params =getDataParams(FrScale::CROPSEC);

      // params is a BBOX in DATA coords 0-n
      //   xlate to 1-n
      Vector ll= Vector(params->xmin,params->ymin) * Translate(1,1);
      Vector ur(params->xmax,params->ymax);
      Vector blockFactor = context_->blockFactor();

      if (blockFactor[0] != 1) {
	ostringstream str;
	str << ll[0] << ':' << ur[0] << ',' 
	    << ll[1] << ':' << ur[1] << ','
	    << blockFactor[0] << ends;
	sec = dupstr(str.str().c_str());
      }
      else {
	ostringstream str;
	str << ll[0] << ':' << ur[0] << ',' 
	    << ll[1] << ':' << ur[1] << ends;
	sec = dupstr(str.str().c_str());
      }
    }    
    break;
  }

  // address
  char* add =NULL;
  {
    int doAdd =0;
    ostringstream str;

    int jj;
    for (jj=FTY_MAXAXES-1; jj>=2; jj--) {
      if (address[jj]!=1)
	break;
    }	
    jj++;
    for (int ii=2; ii<jj; ii++) {
      doAdd =1;
      if (ii==2)
	str << "plane=";
      else
	str << ':';
      str << address[ii];
    }
    if (doAdd) {
      str << ends;
      add = dupstr(str.str().c_str());
    }
  }

  switch (type) {
  case Base::ROOTBASE:
  case Base::FULLBASE:
    // better not get here
    return NULL;

  case Base::ROOT:
    if (rootBaseFileName) {
      ostringstream str;
      if (add && sec)
	str << rootBaseFileName << '[' << add << ']' << '[' << sec << ']';
      else if (add && !sec)
	str << rootBaseFileName << '[' << add << ']';
      else if (!add && sec)
	str << rootBaseFileName << '[' << sec << ']';
      else
	str << rootBaseFileName;
      str << ends;
      fileName = dupstr(str.str().c_str());
    }
    break;

  case Base::FULL:
    if (fullBaseFileName) {
      ostringstream str;
      if (add && sec)
	str << fullBaseFileName << '[' << add << ']' << '[' << sec << ']';
      else if (add && !sec)
	str << fullBaseFileName << '[' << add << ']';
      else if (!add && sec)
	str << fullBaseFileName << '[' << sec << ']';
      else
	str << fullBaseFileName;
      str << ends;
      fileName = dupstr(str.str().c_str());
    }
    break;
  }

  if (sec)
    delete [] sec;
  if (add)
    delete [] add;

  return fileName;
}

const char* FitsImage::updateFileNameBin(Base::FileNameType type)
{
  char* filter = (char*)fits_->pFilter();
  int doFilter = (filter && *filter);
    
  // x,y filter
  char* sec = NULL;
  {
    switch (context_->secMode()) {
    case FrScale::IMGSEC:
    case FrScale::DATASEC:
      break;
    case FrScale::CROPSEC:
      {
	ostringstream str;
	FitsBound* params =getDataParams(FrScale::CROPSEC);

	// dataToPhysical not set yet
	Vector ll = Vector(params->xmin,params->ymin) *
	  dataToImage * imageToPhysical;
	Vector ur = Vector(params->xmax,params->ymax) * 
	  dataToImage * imageToPhysical;

	str << fits_->pBinX() << ">=" << ll[0] << ',' 
	    << fits_->pBinX() << "<=" << ur[0] << ','
	    << fits_->pBinY() << ">=" << ll[1] << ',' 
	    << fits_->pBinY() << "<=" << ur[1] << ends;
	sec = dupstr(str.str().c_str());
      }    
      break;
    }
  }

  // z filter
  char* slice =NULL;
  {
    char* zcol = (char*)fits_->pBinZ();
    int bd = context_->binDepth();
    if (bd>1 && zcol) {
      // only the first slice will have this
      FitsImage* first = context_->fits;
      if (first) {
	Vector zlim = first->fits_->getColMinMax(zcol);
	double zlen = zlim[1]-zlim[0];
	double zdelta = zlen/bd;

	double zptr = zlim[0] + (address[2]-1)*zdelta;
	ostringstream str;
	str << zcol << ">=" << zptr << '&' << zcol << '<' << zptr+zdelta <<ends;
	slice = dupstr(str.str().c_str());
      }
    }
  }

  switch (type) {
  case Base::ROOTBASE:
  case Base::FULLBASE:
    // better not get here
    return NULL;

  case Base::ROOT:
    if (rootBaseFileName) {
      ostringstream str;
      str << rootBaseFileName;
      if (doFilter && sec && slice)
	str << '[' << filter << ',' << sec << ',' << slice << ']';
      else if (doFilter && sec && !slice)
	str << '[' << filter << ',' << sec << ']';
      else if (doFilter && !sec && slice)
	str << '[' << filter << ',' << slice << ']';
      else if (doFilter && !sec && !slice)
	str << '[' << filter << ']';
      else if (!doFilter && sec && slice)
	str << '[' << sec << ',' << slice << ']';
      else if (!doFilter && sec && !slice)
	str << '[' << sec << ']';
      else if (!doFilter && !sec && slice)
	str << '[' << slice << ']';
      str << ends;
      fileName = dupstr(str.str().c_str());
    }
  case Base::FULL:
    if (fullBaseFileName) {
      ostringstream str;
      str << fullBaseFileName;
      if (doFilter && sec && slice)
	str << '[' << filter << ',' << sec << ',' << slice << ']';
      else if (doFilter && sec && !slice)
	str << '[' << filter << ',' << sec << ']';
      else if (doFilter && !sec && slice)
	str << '[' << filter << ',' << slice << ']';
      else if (doFilter && !sec && !slice)
	str << '[' << filter << ']';
      else if (!doFilter && sec && slice)
	str << '[' << sec << ',' << slice << ']';
      else if (!doFilter && sec && !slice)
	str << '[' << sec << ']';
      else if (!doFilter && !sec && slice)
	str << '[' << slice << ']';
      str << ends;
      fileName = dupstr(str.str().c_str());
    }
    break;
  }

  return fileName;
}

void FitsImage::updateMatrices(Matrix& rgbToRef,
			       Matrix& refToUser,
			       Matrix& userToWidget,
			       Matrix& widgetToCanvas,
			       Matrix& canvasToWindow)
{
  dataToRef = wcsToRef_ * rgbToRef;
  refToData = dataToRef.invert();

  dataToUser = dataToRef * refToUser;
  userToData = dataToUser.invert();

  dataToWidget = dataToUser * userToWidget;
  widgetToData = dataToWidget.invert();

  dataToCanvas = dataToWidget * widgetToCanvas;
  canvasToData = dataToCanvas.invert();

  dataToWindow = dataToCanvas * canvasToWindow;
  windowToData = dataToWindow.invert();

  refToCanvas = refToUser * userToWidget * widgetToCanvas;
  canvasToRef = refToCanvas.invert();

  imageToRef = imageToData * dataToRef;
  refToImage = imageToRef.invert();

  imageToWidget = imageToRef * refToUser * userToWidget;
  widgetToImage = imageToWidget.invert();

  physicalToRef = physicalToImage * imageToData * dataToRef;
  refToPhysical = physicalToRef.invert();

  amplifierToRef = amplifierToPhysical * physicalToRef;
  refToAmplifier = amplifierToRef.invert();

  detectorToRef = detectorToPhysical * physicalToRef;
  refToDetector = detectorToRef.invert();
}

void FitsImage::updateMatrices(Matrix3d& refToUser3d, 
			       Matrix3d& userToWidget3d,
			       Matrix3d& widgetToCanvas3d, 
			       Matrix3d& canvasToWindow3d)
{
  dataToUser3d = dataToRef3d * refToUser3d;
  userToData3d = dataToUser3d.invert();

  dataToWidget3d = dataToUser3d * userToWidget3d;
  widgetToData3d = dataToWidget3d.invert();

  dataToCanvas3d = dataToWidget3d * widgetToCanvas3d;
  canvasToData3d = dataToCanvas3d.invert();

  dataToWindow3d = dataToCanvas3d * canvasToWindow3d;
  windowToData3d = dataToWindow3d.invert();
}

void FitsImage::updatePannerMatrices(Matrix& refToPanner)
{
  dataToPanner = dataToRef * refToPanner;
  pannerToData = dataToPanner.invert();
}

void FitsImage::updatePannerMatrices(Matrix3d& refToPanner3d)
{
  dataToPanner3d = dataToRef3d * refToPanner3d;
  pannerToData3d = dataToPanner3d.invert();
}

void FitsImage::updateMagnifierMatrices(Matrix& refToMagnifier)
{
  dataToMagnifier = dataToRef * refToMagnifier;
  magnifierToData = dataToMagnifier.invert();
}

void FitsImage::updateMagnifierMatrices(Matrix3d& refToMagnifier3d)
{
  dataToMagnifier3d = dataToRef3d * refToMagnifier3d;
  magnifierToData3d = dataToMagnifier3d.invert();
}

void FitsImage::updatePS(Matrix ps)
{
  dataToPS = dataToRef * ps;
  psToData = dataToPS.invert();
}

void FitsImage::updatePS(Matrix3d ps)
{
  dataToPS3d = dataToRef3d * ps;
  psToData3d = dataToPS3d.invert();
}

// WCS

#ifndef NEWWCS
Vector FitsImage::getWCScdelt(Coord::CoordSystem sys)
{
  if (hasWCS(sys)) {
    int ii = sys-Coord::WCS;

    // The scaling factor mag is in cdelt
    if (!wcs_[ii]->coorflip)
      return Vector(wcs_[ii]->cdelt[0], wcs_[ii]->cdelt[1]);
    else
      return Vector(wcs_[ii]->cdelt[1], wcs_[ii]->cdelt[0]);
  }
  else
    return Vector();
}
#else
double FitsImage::getWCSPixelSize(Coord::CoordSystem sys)
{
  int ss = sys-Coord::WCS;
  if (!(ss>=0 && ast_ && ast_[ss]))
    return 0;

  astClearStatus; // just to make sure

  Vector cc = center();
  double xx[2], wxx[2];
  xx[0] = cc[0];
  xx[1] = cc[0];
  double yy[2], wyy[2];
  yy[0] = cc[1];
  yy[1] = cc[1]+1;
  astTran2(ast_[ss],2,xx,yy,1,wxx,wyy);

  double pt0[2];
  pt0[0] = wxx[0];
  pt0[1] = wyy[0];
  double pt1[2];
  pt1[0] = wxx[1];
  pt1[1] = wyy[1];
  double out = astDistance(ast_[ss],pt0,pt1);

  if (astIsASkyFrame(astGetFrame(ast_[ss], AST__CURRENT)))
    return radToDeg(out);
  else
    return out;
}

double FitsImage::getWCSPixelArea(Coord::CoordSystem sys)
{
  int ss = sys-Coord::WCS;
  if (!(ss>=0 && ast_ && ast_[ss]))
    return 0;

  astClearStatus; // just to make sure

  Vector cc = center();
  double xx[3], wxx[3];
  xx[0] = cc[0];
  xx[1] = cc[0];
  xx[2] = cc[0];
  double yy[3], wyy[3];
  yy[0] = cc[1];
  yy[1] = cc[1]+1;
  yy[2] = cc[1]+1;
  astTran2(ast_[ss],3,xx,yy,1,wxx,wyy);

  double pt0[2];
  pt0[0] = wxx[0];
  pt0[1] = wyy[0];
  double pt1[2];
  pt1[0] = wxx[1];
  pt1[1] = wyy[1];
  double pt2[2];
  pt2[0] = wxx[2];
  pt2[1] = wyy[2];
  double ll = astDistance(ast_[ss],pt0,pt1);
  double mm = astDistance(ast_[ss],pt0,pt2);

  if (astIsASkyFrame(astGetFrame(ast_[ss], AST__CURRENT)))
    return radToDeg(ll)*radToDeg(mm);
  else
    return ll*mm;
}
#endif

#ifndef NEWWCS
Coord::Orientation FitsImage::getWCSOrientation(Coord::CoordSystem sys,
						Coord::SkyFrame sky)
{
  if (hasWCS(sys)) {
    Vector orpix = center();
    Vector orval = pix2wcs(orpix, sys, sky);
    Vector delta = getWCScdelt(sys).abs();
    Vector npix = wcs2pix(Vector(orval[0],orval[1]+delta[1]), sys, sky);
    Vector north = (npix-orpix).normalize();
    Vector epix = wcs2pix(Vector(orval[0]+delta[0],orval[1]), sys, sky);
    Vector east = (epix-orpix).normalize();

    // sanity check
    Vector diff = (north-east).abs();
    if ((north[0]==0 && north[1]==0) ||
	(east[0]==0 && east[1]==0) ||
	(diff[0]<.01 && diff[1]<.01))
      return Coord::NORMAL;

    // take the cross product and see which way the 3rd axis is pointing
    double w = east[0]*north[1]-east[1]*north[0];

    if (!hasWCSCel(sys))
      return w>0 ? Coord::NORMAL : Coord::XX;
    else
      return w<0 ? Coord::NORMAL : Coord::XX;
  }

  return Coord::NORMAL;
}
#else
Coord::Orientation FitsImage::getWCSOrientation(Coord::CoordSystem sys,
						Coord::SkyFrame sky)
{
  int ss = sys-Coord::WCS;
  if (!(ss>=0 && ast_ && ast_[ss]))
    return Coord::NORMAL;

  astClearStatus; // just to make sure

  if (astIsASkyFrame(astGetFrame(ast_[ss], AST__CURRENT)))
    setAstSkyFrame(ast_[ss],sky);

  Vector pp = center();
  double xx[3], yy[3], wx[3], wy[32];
  xx[0] = pp[0];
  xx[1] = pp[0];
  xx[2] = pp[0]+1;
  yy[0] = pp[1];
  yy[1] = pp[1]+1;
  yy[2] = pp[1];
  astTran2(ast_[ss],3,xx,yy,1,wx,wy);

  double aa[2], bb[2], cc[2];
  aa[0]= wx[0];
  aa[1]= wy[0];
  bb[0]= wx[1];
  bb[1]= wy[1];
  cc[0]= wx[2];
  cc[1]= wy[2];
  double ang = astAngle(ast_[ss],aa,bb,cc);

  Coord::Orientation rr = Coord::NORMAL;
  if (!(isnan(ang)||isinf(ang)||(ang == -DBL_MAX)||(ang == DBL_MAX))) {
    if (astIsASkyFrame(astGetFrame(ast_[ss], AST__CURRENT)))
      rr = ang>=0 ? Coord::NORMAL : Coord::XX;
    else
      rr = ang<=0 ? Coord::NORMAL : Coord::XX;
  }

  return rr;
}
#endif

#ifndef NEWWCS
double FitsImage::getWCSRotation(Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  if (hasWCS(sys)) {
    Vector orpix = center();
    Vector orval = pix2wcs(orpix, sys, sky);
    Vector delta = getWCScdelt(sys).abs();
    Vector npix = wcs2pix(Vector(orval[0],orval[1]+delta[1]), sys, sky);
    Vector north = (npix-orpix).normalize();
    Vector epix = wcs2pix(Vector(orval[0]+delta[0],orval[1]), sys, sky);
    Vector east = (epix-orpix).normalize();

    // sanity check
    Vector diff = (north-east).abs();
    if ((north[0]==0 && north[1]==0) ||
	(east[0]==0 && east[1]==0) ||
	(diff[0]<.01 && diff[1]<.01))
      return 0;

    return -(north.angle()-M_PI_2);
  }
  return 0;
}
#else
double FitsImage::getWCSRotation(Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  int ss = sys-Coord::WCS;
  if (!(ss>=0 && ast_ && ast_[ss]))
    return 0;

  astClearStatus; // just to make sure

  if (astIsASkyFrame(astGetFrame(ast_[ss], AST__CURRENT)))
    setAstSkyFrame(ast_[ss],sky);

  Vector pp = center();
  double xx[2], yy[2], wx[2], wy[2];
  xx[0] = pp[0];
  xx[1] = pp[0];
  yy[0] = pp[1];
  yy[1] = pp[1]+1;
  astTran2(ast_[ss],2,xx,yy,1,wx,wy);

  double aa[2], bb[2];
  aa[0]= wx[0];
  aa[1]= wy[0];
  bb[0]= wx[1];
  bb[1]= wy[1];
  double ang = astAxAngle(ast_[ss],aa,bb,2);

  if (!(isnan(ang)||isinf(ang)||(ang == -DBL_MAX)||(ang == DBL_MAX)))
    return getWCSOrientation(sys,sky) == Coord::NORMAL ? ang : -ang;

  return 0;
}
#endif

// AST
Vector FitsImage::pix2wcs(Vector in, Coord::CoordSystem sys, 
			  Coord::SkyFrame sky)
{
  astClearStatus;

  int ii = sys-Coord::WCS;
  if (ii>=0 && ast_ && ast_[ii]) {
    double xx =0;
    double yy =0;
    if (astIsASkyFrame(astGetFrame(ast_[ii], AST__CURRENT))) {
      setAstSkyFrame(ast_[ii],sky);
      astTran2(ast_[ii], 1, in.v, in.v+1, 1, &xx, &yy);
      if (astOK)
	if (checkAst(xx,yy))
	  return Vector(radToDeg(xx),yy*180./M_PI);
    }
    else {
      astTran2(ast_[ii], 1, in.v, in.v+1, 1, &xx, &yy);
      if (astOK)
	if (checkAst(xx,yy))
	  return Vector(xx,yy);
    }
  }

  maperr =1;
  return Vector();
}

Vector* FitsImage::pix2wcs(Vector* in, int num, Coord::CoordSystem sys,
			   Coord::SkyFrame sky)
{
  astClearStatus;
  double xin[num];
  double yin[num];
  double xout[num];
  double yout[num];

  Vector* out = new Vector[num];
  for (int ii=0; ii<num; ii++) {
    xin[ii] = (in[ii])[0];
    yin[ii] = (in[ii])[1];
  }

  int ii = sys-Coord::WCS;
  if (ii>=0 && ast_ && ast_[ii]) {
    if (astIsASkyFrame(astGetFrame(ast_[ii], AST__CURRENT))) {
      setAstSkyFrame(ast_[ii],sky);
      astTran2(ast_[ii], num, xin, yin, 1, xout, yout);
      if (astOK) {
	for (int ii=0; ii<num; ii++)
	  if (checkAst(xout[ii],yout[ii]))
	    out[ii] = Vector(radToDeg(xout[ii]),yout[ii]*180./M_PI);
	return out;
      }
    }
    else {
      astTran2(ast_[ii], num, xin, yin, 1, xout, yout);
      if (astOK) {
	for (int ii=0; ii<num; ii++)
	  if (checkAst(xout[ii],yout[ii]))
	    out[ii] = Vector(xout[ii],yout[ii]);
	return out;
      }
    }
  }

  maperr =1;
  return out;
}

char* FitsImage::pix2wcs(Vector in, Coord::CoordSystem sys, 
			 Coord::SkyFrame sky, Coord::SkyFormat format,
			 char* lbuf)
{
  astClearStatus;

  int ii = sys-Coord::WCS;
  if (ii>=0 && ast_ && ast_[ii]) {
    double xx =0;
    double yy =0;
    ostringstream str;
    if (astIsASkyFrame(astGetFrame(ast_[ii], AST__CURRENT))) {
      setAstSkyFrame(ast_[ii],sky);
      astTran2(ast_[ii], 1, in.v, in.v+1, 1, &xx, &yy);
      if (!astOK || !checkAst(xx,yy)) {
	maperr =1;
	lbuf[0] = '\0';
	return lbuf;
      }

      switch (format) {
      case Coord::DEGREES:
	xx =radToDeg(xx); // 0 to 360
	yy *=180./M_PI;

	str << setprecision(8) << xx << ' ' << yy 
	    << ' ' << coord.skyFrameStr(sky) << ends;
	break;

      case Coord::SEXAGESIMAL:
	switch (sky) {
	case Coord::FK4:
	case Coord::FK4_NO_E:
	case Coord::FK5:
	case Coord::ICRS:
	  xx = zeroTWOPI(xx);
	  setAstFormat(ast_[ii],1,"hms.3");
	  setAstFormat(ast_[ii],2,"+dms.3");
	  break;
	case Coord::GALACTIC:
	case Coord::SUPERGALACTIC:
	case Coord::ECLIPTIC:
	case Coord::HELIOECLIPTIC:
	  xx = zeroTWOPI(xx);
	  setAstFormat(ast_[ii],1,"+dms.3");
	  setAstFormat(ast_[ii],2,"+dms.3");
	  break;
	}

	str << astFormat(ast_[ii], 1, xx) << ' ' << astFormat(ast_[ii], 2, yy) 
	    << ' ' << coord.skyFrameStr(sky) << ends;
	break;
      }
    }
    else {
      astTran2(ast_[ii], 1, in.v, in.v+1, 1, &xx, &yy);
      if (!astOK || !checkAst(xx,yy)) {
	maperr =1;
	return lbuf;
      }
      str << setprecision(8) << xx << ' ' << yy << ends;
    }

    strncpy(lbuf, str.str().c_str(), str.str().length());
  }

  return lbuf;
}

Vector FitsImage::wcs2pix(Vector in, Coord::CoordSystem sys, 
			  Coord::SkyFrame sky)
{
  astClearStatus;

  int ii = sys-Coord::WCS;
  if (ii>=0 && ast_ && ast_[ii]) {
    double xx =0;
    double yy =0;
    if (astIsASkyFrame(astGetFrame(ast_[ii], AST__CURRENT))) {
      setAstSkyFrame(ast_[ii],sky);
      Vector rr = in*M_PI/180.;
      astTran2(ast_[ii], 1, rr.v, &(rr[1]), 0, &xx, &yy);
      if (astOK)
	if (checkAst(xx,yy))
	  return Vector(xx,yy);
    }
    else {
      astTran2(ast_[ii], 1, in.v, in.v+1, 0, &xx, &yy);
      if (astOK)
	if (checkAst(xx,yy))
	  return Vector(xx,yy);
    }
  }

  maperr =1;
  return Vector();
}

Vector* FitsImage::wcs2pix(Vector* in, int num, Coord::CoordSystem sys,
			   Coord::SkyFrame sky)
{
  astClearStatus;
  double xin[num];
  double yin[num];
  double xout[num];
  double yout[num];

  Vector* out = new Vector[num];
  for (int ii=0; ii<num; ii++) {
    xin[ii] = (in[ii])[0];
    yin[ii] = (in[ii])[1];
  }

  int ii = sys-Coord::WCS;
  if (ii>=0 && ast_ && ast_[ii]) {
    if (astIsASkyFrame(astGetFrame(ast_[ii], AST__CURRENT))) {
      setAstSkyFrame(ast_[ii],sky);
      for (int kk=0; kk<num; kk++) {
	xin[kk] *= M_PI/180.;
	yin[kk] *= M_PI/180.;
      }
      astTran2(ast_[ii], num, xin, yin, 0, xout, yout);
      if (astOK) {
	for (int kk=0; kk<num; kk++)
	  if (checkAst(xout[kk],yout[kk]))
	    out[kk] = Vector(xout[kk],yout[kk]);
	return out;
      }
    }
    else {
      astTran2(ast_[ii], num, xin, yin, 0, xout, yout);
      if (astOK) {
	for (int kk=0; kk<num; kk++)
	  if (checkAst(xout[kk],yout[kk]))
	    out[kk] = Vector(xout[kk],yout[kk]);
	return out;
      }
    }
  }

  maperr =1;
  return out;
}

double FitsImage::getWCSDist(Vector a, Vector b, Coord::CoordSystem sys)
{
  int ss = sys-Coord::WCS;
  if (!(ss>=0 && ast_ && ast_[ss]))
    return 0;

  astClearStatus; // just to make sure

  double rr=0;
  if (astIsASkyFrame(astGetFrame(ast_[ss], AST__CURRENT))) {
    Vector aa = a*M_PI/180.;
    Vector bb = b*M_PI/180.;
    rr = astDistance(ast_[ss], aa.v, bb.v) *180./M_PI;
  }
  else
    rr = astDistance(ast_[ss], a.v, b.v);

  return rr;
}

int FitsImage::hasWCS(Coord::CoordSystem sys)
{
  int ii = sys-Coord::WCS;
  return (sys>=Coord::WCS && ast_ && ast_[ii]) ? 1 : 0;
}

#ifndef NEWWCS
int FitsImage::hasWCSEqu(Coord::CoordSystem sys)
{
  astClearStatus;

  int ii = sys-Coord::WCS;
  if (ii>=0 && ast_ && ast_[ii])
    if (astIsASkyFrame(astGetFrame(ast_[ii], AST__CURRENT))) {
      // special case of xLON/xLAT
      char* bb = &(wcs_[ii]->c1type[1]);
      if (!strncmp(bb,"LON",3) || !strncmp(bb,"LAT",3)) {
	switch (wcs_[ii]->c1type[0]) {
	case 'G':
	case 'H':
	case 'E':
	case 'S':
	  return 1;
	default:
	  return 0;
	}
      }

      // special case of xyLN/xyLT
      char* cc = &(wcs_[ii]->c1type[2]);
      if (!strncmp(cc,"LN",2) || !strncmp(cc,"LT",2))
	return 0;

      return 1;
    }

  return 0;
}
#else
int FitsImage::hasWCSEqu(Coord::CoordSystem sys)
{
  astClearStatus;

  int ii = sys-Coord::WCS;
  if (ii>=0 && ast_ && ast_[ii])
    if (astIsASkyFrame(astGetFrame(ast_[ii], AST__CURRENT))) {
      // check for xLON/xLAT and xxLN/xxLT
      //  but GLON/GLAT is ok
      const char* str = astGetC(ast_[ii], "System");
      if (!strncmp(str,"Unknown",7))
	return 0;
      return 1;
    }

  return 0;
}

#endif

int FitsImage::hasWCSCel(Coord::CoordSystem sys)
{
  astClearStatus;

  int ii = sys-Coord::WCS;
  if (ii>=0 && ast_ && ast_[ii])
    if (astIsASkyFrame(astGetFrame(ast_[ii], AST__CURRENT)))
      return 1;

  return 0;
}

// WCSX

int FitsImage::hasWCSx(Coord::CoordSystem sys, int ss)
{
  int ii = sys-Coord::WCS;
  return (ss>=2&&ss<FTY_MAXAXES && sys>=Coord::WCS && wcsx_[ii]) ? 1 : 0;
}

double FitsImage::pix2wcsx(double in, Coord::CoordSystem sys, int ss)
{
  if (hasWCSx(sys,ss)) {
    int ii = sys-Coord::WCS;
    return (in-wcsx_[ii]->crpix[ss])*wcsx_[ii]->cd[ss] + wcsx_[ii]->crval[ss];
  }
  else
    return in;
}

double FitsImage::wcs2pixx(double in, Coord::CoordSystem sys, int ss)
{
  if (hasWCSx(sys,ss)) {
    int ii = sys-Coord::WCS;
    return (in-wcsx_[ii]->crval[ss])/wcsx_[ii]->cd[ss] + wcsx_[ii]->crpix[ss];
  }
  else
    return in;
}

// WCS/AST support

void FitsImage::wcsShow(WorldCoor* ww)
{
  if (!ww)
    return;

  int n = ww->naxes;
  int nn = n*n;

  cerr << "wcs->wcsname=" << (ww->wcsname ? ww->wcsname : "") << endl;
  cerr << "wcs->naxes=" << ww->naxes << endl;
  cerr << "wcs->naxis=" << ww->naxis << endl;

  cerr << "wcs->radecsys=" << ww->radecsys << endl;
  cerr << "wcs->equinox=" << ww->equinox << endl;
  cerr << "wcs->epoch=" << ww->epoch << endl;

  cerr << "wcs->ctype[0]=" << ww->ctype[0] << endl;
  cerr << "wcs->ctype[1]=" << ww->ctype[1] << endl;
  cerr << "wcs->c1type=" << ww->c1type << endl;
  cerr << "wcs->c2type=" << ww->c2type << endl;
  cerr << "wcs->ptype=" << ww->ptype << endl;

  for (int jj=0; jj<n; jj++)
    cerr << "wcs->crpix[" << jj << "]=" << ww->crpix[jj] << endl;
  for (int jj=0; jj<n; jj++)
    cerr << "wcs->crval[" << jj << "]=" << ww->crval[jj] << endl;
  for (int jj=0; jj<n; jj++)
    cerr << "wcs->cdelt[" << jj << "]=" << ww->cdelt[jj] << endl;

  for (int jj=0; jj<4; jj++)
    cerr << "wcs->cd[" << jj << "]=" << ww->cd[jj] << endl;
  for (int jj=0; jj<nn; jj++)
    cerr << "wcs->pc[" << jj << "]=" << ww->pc[jj] << endl;

  cerr << "wcs->longpole=" << ww->longpole << endl;
  cerr << "wcs->latpole=" << ww->latpole << endl;
  cerr << "wcs->prjcode=" << ww->prjcode << endl;

  cerr << "wcs->rot=" << ww->rot << endl;
  cerr << "wcs->coorflip=" << ww->coorflip << endl;
  cerr << "wcs->distcode=" << ww->distcode << endl;
}

void FitsImage::astinit(int ii, FitsHead* hd, FitsHead* prim)
{
  if (!wcs_[ii]) {
    ast_[ii] = NULL;
    return;
  }

  // just in case
  if (!hd)
    return;
  // DSS,PLT,LIN goes straight to AST
  // we can't send 3D directly to AST

#ifndef NEWWCS
  if (wcs_[ii]->prjcode==WCS_DSS || 
      wcs_[ii]->prjcode==WCS_PLT || 
      (wcs_[ii]->prjcode==WCS_LIN && !strncmp(wcs_[ii]->ptype,"HPX",3)) ||
      (wcs_[ii]->prjcode==WCS_LIN && !strncmp(wcs_[ii]->ptype,"XPH",3)) ||
      (wcs_[ii]->prjcode==WCS_LIN && !strncmp(wcs_[ii]->ptype,"TAB",3)) ||
      (wcs_[ii]->prjcode==WCS_LIN && !strncmp(wcs_[ii]->c1type,"AST",3)))
    ast_[ii] = fits2ast(hd);
  else
    ast_[ii] = buildast(ii, hd, prim);

  if (!ast_[ii])
    return;

#else

  //  astClearStatus; // just to make sure
  //  astBegin; // start memory management

  ast_[ii] = fits2ast(hd);
  if (!ast_[ii])
    return;

  setAstSystem(ast_[ii], (Coord::CoordSystem)(ii+Coord::WCS));

  int naxes = astGetI(ast_[ii],"Naxes");
  switch (naxes) {
  case 1:
    break;
  case 2:
    break;
  default:
    {
      //      const int pick[] = {1,2};
      //      AstMapping* map;
      //      AstFrame* fm = (AstFrame*)astPickAxes(ast_[ii], 2, pick, &map);
      //      astShow(fm);
    }
    break;
  }

  if (astIsASkyFrame(astGetFrame(ast_[ii], AST__CURRENT))) {
    if (astGetI(ast_[ii],"LatAxis") == 1) {
      int orr[] = {2,1};
      astPermAxes(ast_[ii],orr);
    }
  }

  //  astEnd; // now, clean up memory
#endif

  // set default skyframe
  if (astIsASkyFrame(astGetFrame(ast_[ii], AST__CURRENT)))
    setAstSkyFrame(ast_[ii],Coord::FK5);

}

void FitsImage::astinit0(int ii, FitsHead* hd, FitsHead* prim)
{
  if (!wcs_[ii]) {
    ast_[ii] = NULL;
    return;
  }

  ast_[ii] = buildast0(ii, hd, prim);

  if (!ast_[ii])
    return;

  // set default skyframe
  if (astIsASkyFrame(astGetFrame(ast_[ii], AST__CURRENT)))
    setAstSkyFrame(ast_[ii],Coord::FK5);
}

int FitsImage::checkAst(double x, double y)
{
  // check for reasonable values
  return (fabs(x) < FLT_MAX && fabs(y) < FLT_MAX) ? 1 : 0;
}

void FitsImage::setAstFormat(AstFrameSet* aa, int id, const char* format)
{
  // is it already set?
  // ast is very slow when changing params
  {
    ostringstream str;
    str << "Format(" << id << ")" << ends;
    const char* out = astGetC(aa, str.str().c_str());
    if (!strcmp(out,format))
      return;
  }

  ostringstream str;
  str << "Format(" << id << ")=" << format << ends;
  astSet(aa, str.str().c_str());
}

#ifdef NEWWCS
void FitsImage::setAstSystem(AstFrameSet* fs, Coord::CoordSystem sys)
{
  int nn = astGetI(fs,"nframe");
  char cc = ' ';
  int ww = sys-Coord::WCS;
  switch (sys) {
  case Coord::DATA:
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::AMPLIFIER:
  case Coord::DETECTOR:
    // this should not happen
    return;
  default:
    if (ww)
      cc = ww+'@';
  }

  for (int ii=0; ii<nn; ii++) {
    const char* id = astGetC(astGetFrame(fs,ii+1),"Ident");
    if (cc == id[0]) {
      astSetI(fs,"current",ii+1);
      break;
    }
  }
}
#endif

void FitsImage::setAstSkyFrame(AstFrameSet* aa, Coord::SkyFrame sky)
{
  // is sky frame
  if (!astIsASkyFrame(astGetFrame(aa, AST__CURRENT)))
    return;

  // is it already set?
  // ast is very slow when changing system,equinox
  const char* str = astGetC(aa, "System");

  // TLON/XLON and HPX will do this
  if (!strncmp(str,"Unknown",3))
    return;

  switch (sky) {
  case Coord::FK4_NO_E:
    if (!strncmp(str,"FK4-NO-E",8))
      return;
    astSet(aa, "System=FK4-NO-E, Equinox=B1950");
    return;
  case Coord::FK4:
    if (!strncmp(str,"FK4",3))
      return;
    astSet(aa, "System=FK4, Equinox=B1950");
    return;
  case Coord::FK5:
    if (!strncmp(str,"FK5",3))
      return;
    astSet(aa, "System=FK5, Equinox=J2000");
    return;
  case Coord::ICRS:
    if (!strncmp(str,"ICRS",4))
      return;
    astSet(aa, "System=ICRS");
    return;
  case Coord::GALACTIC:
    if (!strncmp(str,"GALACTIC",8))
      return;
    astSet(aa, "System=GALACTIC");
    return;
  case Coord::SUPERGALACTIC:
    if (!strncmp(str,"SUPERGALACTIC",13))
      return;
    astSet(aa, "System=SUPERGALACTIC");
    return;
  case Coord::ECLIPTIC:
    if (!strncmp(str,"ECLIPTIC",8))
      return;
    astSet(aa, "System=ECLIPTIC");
    // get AST to agree with WCSSUBS
    astSetD(aa, "EQUINOX", astGetD(aa, "EPOCH"));
    return;
  case Coord::HELIOECLIPTIC:
    if (!strncmp(str,"HELIOECLIPTIC",13))
      return;
    astSet(aa, "System=HELIOECLIPTIC");
    return;
  }
}

AstFrameSet* FitsImage::fits2ast(FitsHead* hd) 
{
  // we may have an error, just reset
  astClearStatus;

  // new fitschan
  AstFitsChan* chan = astFitsChan(NULL, NULL, "");
  if (!astOK || chan == AST__NULL)
    return NULL;

  // no warning messages
  astClear(chan,"Warnings");

  // fill up chan
  char* cards =NULL;
  int ncards =0;

  if (hd) {
    cards = hd->cards();
    ncards = hd->ncard();
  }

  if (cards == NULL || ncards == 0)
    return NULL;

  for (int i=0; i<ncards; i++) {
    char buf[81];
    strncpy(buf,cards+(i*80),80);
    buf[80] = '\0';

    astPutFits(chan, buf, 0);
    // sometimes, we get a bad parse, just ignore
    if (!astOK)
      astClearStatus;
  }

  // enable -TAB
  //astSetI(chan,"TabOK",1);

  // we may have an error, just reset
  astClearStatus;
  astClear(chan, "Card");

  // parse header
  AstFrameSet* frameSet = (AstFrameSet*)astRead(chan);

  // do we have anything?
  if (!astOK || frameSet == AST__NULL || 
      strncmp(astGetC(frameSet,"Class"), "FrameSet", 8))
    return NULL;

  return frameSet;
}

AstFrameSet* FitsImage::buildast(int ii, FitsHead* hd, FitsHead* prim) 
{
  if (DebugAST)
    cerr << endl << "buildast("<< ii << ")" << endl;

  // read wcs struct into astChannel
  // we may have an error, just reset
  astClearStatus;

  // new fitschan
  AstFitsChan* chan = astFitsChan(NULL, NULL, "");
  if (!astOK || chan == AST__NULL)
    return NULL;

  // no warning messages
  astClear(chan,"Warnings");

  // basics (needed by fitschan.c)
  putFitsCard(chan, "NAXIS1", (int)naxis(0));
  putFitsCard(chan, "NAXIS2", (int)naxis(1));

  // simple test to see if we have complete WCS
  // if not (as in 3d cube reorder), wcs[] can be very unreliable
  int fromwcs =0;

  char alt = (ii==0) ? ' ' : (char)('@'+ii);
  char ctype1[8], ctype2[8];
  strcpy(ctype1, "CTYPE1 ");
  strcpy(ctype2, "CTYPE2 ");
  ctype1[6] = ctype2[6] = alt;

  if (hd->find(ctype1) && hd->find(ctype2)) {
    wcs2ast(ii,hd,prim,chan);
    fromwcs =1;
  }
  else
    header2ast(ii,hd,chan);

  // rewind chan
  astClear(chan, "Card");

  // parse header
  AstFrameSet* frameSet = (AstFrameSet*)astRead(chan);

  // do we have anything?
  if (!astOK || frameSet == AST__NULL || 
      strncmp(astGetC(frameSet,"Class"), "FrameSet", 8))
    return NULL;

  if (fromwcs && wcs_[ii]->coorflip) {
    int orr[] = {2,1};
    astPermAxes(frameSet,orr);
  }

  // cleanup
  astAnnul(chan);

  return frameSet;
}

AstFrameSet* FitsImage::buildast0(int ii, FitsHead* hd, FitsHead* prim)
{
  // read wcs struct into astChannel
  // we may have an error, just reset
  astClearStatus;

  // new fitschan
  AstFitsChan* chan = astFitsChan(NULL, NULL, "");
  if (!astOK || chan == AST__NULL)
    return NULL;

  // no warning messages
  astClear(chan,"Warnings");

  // basics (needed by fitschan.c)
  putFitsCard(chan, "NAXIS1", (int)naxis(0));
  putFitsCard(chan, "NAXIS2", (int)naxis(1));

  wcs2ast0(ii,hd,prim,chan);

  // rewind chan
  astClear(chan, "Card");

  // parse header
  AstFrameSet* frameSet = (AstFrameSet*)astRead(chan);

  // do we have anything?
  if (!astOK || frameSet == AST__NULL || 
      strncmp(astGetC(frameSet,"Class"), "FrameSet", 8))
    return NULL;

  if (wcs_[ii]->coorflip) {
    int orr[] = {2,1};
    astPermAxes(frameSet,orr);
  }

  // cleanup
  astAnnul(chan);

  return frameSet;
}

void FitsImage::header2ast(int ii, FitsHead* hd, void* chan) 
{
  if (DebugAST)
    cerr << endl << "header2ast(" << ii << ")" << endl;

  char alt = (ii==0) ? ' ' : (char)('@'+ii);

  char key1[8];
  char key2[8];

  // CTYPE
  // We can't have RA/DEC without DEC/RA or GLON/GLAT without GLAT/GLON
  const char* linear = "LINEAR";
  strcpy(key1, "CTYPE1 ");
  strcpy(key2, "CTYPE2 ");
  key1[6] = key2[6] = alt;

  // do we have WCSa?
  if (!hd->find(key1) && !hd->find(key2))
    return;

  char* ctype1 = hd->getString(key1);
  char* ctype2 = hd->getString(key2);

  if (ctype1 && !strncmp(ctype1,"GLON",4)) {
    if (!ctype2 || strncmp(ctype2,"GLAT",4)) {
      ctype1 = (char*)linear;
      ctype2 = (char*)linear;
    }
  }
  else if (ctype2 && !strncmp(ctype2,"GLON",4)) {
    if (!ctype1 || strncmp(ctype1,"GLAT",4)) {
      ctype1 = (char*)linear;
      ctype2 = (char*)linear;
    }
  }
  else if (ctype1 && !strncmp(ctype1,"GLAT",4)) {
    if (!ctype2 || strncmp(ctype2,"GLON",4)) {
      ctype1 = (char*)linear;
      ctype2 = (char*)linear;
    }
  }
  else if (ctype2 && !strncmp(ctype2,"GLAT",4)) {
    if (!ctype1 || strncmp(ctype1,"GLON",4)) {
      ctype1 = (char*)linear;
      ctype2 = (char*)linear;
    }
  }
  else if (ctype1 && !strncmp(ctype1,"RA",2)) {
    if (!ctype2 || strncmp(ctype2,"DEC",3)) {
      ctype1 = (char*)linear;
      ctype2 = (char*)linear;
    }
  }
  else if (ctype2 && !strncmp(ctype2,"RA",2)) {
    if (!ctype1 || strncmp(ctype1,"DEC",3)) {
      ctype1 = (char*)linear;
      ctype2 = (char*)linear;
    }
  }
  else if (ctype1 && !strncmp(ctype1,"DEC",3)) {
    if (!ctype2 || strncmp(ctype2,"RA",2)) {
      ctype1 = (char*)linear;
      ctype2 = (char*)linear;
    }
  }
  else if (ctype2 && !strncmp(ctype2,"DEC",3)) {
    if (!ctype1 || strncmp(ctype1,"RA",2)) {
      ctype1 = (char*)linear;
      ctype2 = (char*)linear;
    }
  }
  else {
    if (!ctype1)
      ctype1 =(char*)linear;
    if (!ctype2)
      ctype2 =(char*)linear;
  }

  putFitsCard(chan, key1, ctype1);
  putFitsCard(chan, key2, ctype2);

  // CRPIX
  strcpy(key1, "CRPIX1 ");
  strcpy(key2, "CRPIX2 ");
  key1[6] = key2[6] = alt;
  putFitsCard(chan, key1, hd->getReal(key1,0));
  putFitsCard(chan, key2, hd->getReal(key2,0));

  // CRVAL
  strcpy(key1, "CRVAL1 ");
  strcpy(key2, "CRVAL2 ");
  key1[6] = key2[6] = alt;
  putFitsCard(chan, key1, hd->getReal(key1,0));
  putFitsCard(chan, key2, hd->getReal(key2,0));

  // CDELT/CD/PC
  strcpy(key1, "CDELT1 ");
  strcpy(key2, "CDELT2 ");
  key1[6] = key2[6] = alt;

  char pkey1[8];
  char pkey2[8];
  char pkey3[8];
  char pkey4[8];
  strcpy(pkey1, "PC1_1 ");
  strcpy(pkey2, "PC1_2 ");
  strcpy(pkey3, "PC2_1 ");
  strcpy(pkey4, "PC2_2 ");
  pkey1[5] = pkey2[5] = pkey3[5] = pkey4[5] = alt;

  char ckey1[8];
  char ckey2[8];
  char ckey3[8];
  char ckey4[8];
  strcpy(ckey1, "CD1_1 ");
  strcpy(ckey2, "CD1_2 ");
  strcpy(ckey3, "CD2_1 ");
  strcpy(ckey4, "CD2_2 ");
  ckey1[5] = ckey2[5] = ckey3[5] = ckey4[5] = alt;

  // Give CD priority over CDELT
  if (hd->find(ckey1) || 
      hd->find(ckey2) ||
      hd->find(ckey3) || 
      hd->find(ckey4)) {
    putFitsCard(chan, ckey1, hd->getReal(ckey1,1));
    putFitsCard(chan, ckey2, hd->getReal(ckey2,0));
    putFitsCard(chan, ckey3, hd->getReal(ckey3,0));
    putFitsCard(chan, ckey4, hd->getReal(ckey4,1));
  }
  else if (hd->find(key1) || hd->find(key2)) {
    putFitsCard(chan, key1, hd->getReal(key1,1));
    putFitsCard(chan, key2, hd->getReal(key2,1));

    if (hd->find(pkey1) || 
	hd->find(pkey2) ||
	hd->find(pkey3) || 
	hd->find(pkey4)) {
      putFitsCard(chan, pkey1, hd->getReal(pkey1,1));
      putFitsCard(chan, pkey2, hd->getReal(pkey2,1));
      putFitsCard(chan, pkey3, hd->getReal(pkey3,1));
      putFitsCard(chan, pkey4, hd->getReal(pkey4,1));
    }
  }
}

void FitsImage::wcs2ast(int ww, FitsHead* hd, FitsHead* prim, void* chan) 
{
  if (DebugAST)
    cerr << endl << "wcs2ast(" << ww << ")" << endl;

  // Alt WCS
  char alt = (ww==0) ? ' ' : (char)('@'+ww);

  // CTYPE
  if (
      // special case (reorder 3D cube)
      (!strncmp(wcs_[ww]->ctype[0],"GLON",4) && 
       strncmp(wcs_[ww]->ctype[1],"GLAT",4)) || 
      (strncmp(wcs_[ww]->ctype[0],"GLON",4) && 
       !strncmp(wcs_[ww]->ctype[1],"GLAT",4)) || 
      (!strncmp(wcs_[ww]->ctype[0],"GLAT",4) && 
       strncmp(wcs_[ww]->ctype[1],"GLON",4)) || 
      (strncmp(wcs_[ww]->ctype[0],"GLAT",4) && 
       !strncmp(wcs_[ww]->ctype[1],"GLON",4)) || 
      (!strncmp(wcs_[ww]->ctype[0],"RA",2) && 
       strncmp(wcs_[ww]->ctype[1],"DEC",3)) ||
      (strncmp(wcs_[ww]->ctype[0],"RA",2) && 
       !strncmp(wcs_[ww]->ctype[1],"DEC",3)) ||
      (!strncmp(wcs_[ww]->ctype[0],"DEC",3) && 
       strncmp(wcs_[ww]->ctype[1],"RA",2)) ||
      (strncmp(wcs_[ww]->ctype[0],"DEC",3) && 
       !strncmp(wcs_[ww]->ctype[1],"RA",2)))
    {
      putFitsCard(chan, "CTYPE1", "LINEAR");
      putFitsCard(chan, "CTYPE2", "LINEAR");
    }
  else if (wcs_[ww]->prjcode == WCS_TAN && wcs_[ww]->distcode) {
    // SIP
    {
      ostringstream str;
      str << wcs_[ww]->ctype[0] << "-SIP" << ends;
      putFitsCard(chan, "CTYPE1", str.str().c_str());
    }
    {
      ostringstream str;
      str << wcs_[ww]->ctype[1] << "-SIP" << ends;
      putFitsCard(chan, "CTYPE2", str.str().c_str());
    }
  }
  else {
    putFitsCard(chan, "CTYPE1", wcs_[ww]->ctype[0]);
    putFitsCard(chan, "CTYPE2", wcs_[ww]->ctype[1]);
  }

  // CRPIX/CRVAL
  putFitsCard(chan, "CRPIX1", wcs_[ww]->crpix[0]);
  putFitsCard(chan, "CRPIX2", wcs_[ww]->crpix[1]);
  putFitsCard(chan, "CRVAL1", wcs_[ww]->crval[0]);
  putFitsCard(chan, "CRVAL2", wcs_[ww]->crval[1]);

  // CD/CDELT/PC
  // This is very complicated. AST is very, very, very picky as to which
  // keywords it use...
  {
    ostringstream cd;
    cd << "CD1_1" << alt << ends;
    ostringstream cdelt;
    cdelt << "CDELT1" << alt << ends;
    ostringstream pc;
    pc << "PC1_1" << alt << ends;

    if (hd->find(cd.str().c_str()) || 
	(prim && prim->find(cd.str().c_str()))) {
      // simple case CD
      // no rotation, no poles, no LIN, no inner cd values
      if (!wcs_[ww]->cd[1] && !wcs_[ww]->cd[2] && 
	  !wcs_[ww]->rot &&
	  !wcs_[ww]->coorflip &&
	  wcs_[ww]->latpole == 999 && 
	  wcs_[ww]->longpole == 999 &&
	  wcs_[ww]->prjcode != WCS_PIX && 
	  wcs_[ww]->prjcode != WCS_LIN) {
	putFitsCard(chan, "CDELT1", wcs_[ww]->cdelt[0]);
	putFitsCard(chan, "CDELT2", wcs_[ww]->cdelt[1]);
      }
      else {
	putFitsCard(chan, "CD1_1", wcs_[ww]->cd[0]);
	putFitsCard(chan, "CD1_2", wcs_[ww]->cd[1]);
	putFitsCard(chan, "CD2_1", wcs_[ww]->cd[2]);
	putFitsCard(chan, "CD2_2", wcs_[ww]->cd[3]);
      }
    }
    // CDELT
    else if (hd->find(cdelt.str().c_str()) || 
	     (prim && prim->find(cdelt.str().c_str()))) {
      putFitsCard(chan, "CDELT1", wcs_[ww]->cdelt[0]);
      putFitsCard(chan, "CDELT2", wcs_[ww]->cdelt[1]);

      if (hd->find(pc.str().c_str()) ||
	  (prim && prim->find(pc.str().c_str()))) {
	putFitsCard(chan, "PC1_1", wcs_[ww]->pc[0]);
	putFitsCard(chan, "PC1_2", wcs_[ww]->pc[1]);
	putFitsCard(chan, "PC2_1", wcs_[ww]->pc[2]);
	putFitsCard(chan, "PC2_2", wcs_[ww]->pc[3]);
      }
      else if (!ww && 
	       (hd->find("PC001001") || (prim && prim->find("PC001001")))) {
	putFitsCard(chan, "PC001001", wcs_[ww]->pc[0]);
	putFitsCard(chan, "PC001002", wcs_[ww]->pc[1]);
	putFitsCard(chan, "PC002001", wcs_[ww]->pc[2]);
	putFitsCard(chan, "PC002002", wcs_[ww]->pc[3]);
      }
      else {
	if (!ww && 
	    (hd->find("CROTA1") || (prim && prim->find("CROTA1"))))
	  putFitsCard(chan, "CROTA1", wcs_[ww]->rot);
	if (!ww && 
	    (hd->find("CROTA2") || (prim && prim->find("CROTA2"))))
	  putFitsCard(chan, "CROTA2", wcs_[ww]->rot);
      }
    }
    // sanity check
    else if (!wcs_[ww]->cd[0] && 
	     !wcs_[ww]->cd[1] && 
	     !wcs_[ww]->cd[2] && 
	     !wcs_[ww]->cd[3]) {
      putFitsCard(chan, "CDELT1", wcs_[ww]->cdelt[0]);
      putFitsCard(chan, "CDELT2", wcs_[ww]->cdelt[1]);
      putFitsCard(chan, "PC1_1", wcs_[ww]->pc[0]);
      putFitsCard(chan, "PC1_2", wcs_[ww]->pc[1]);
      putFitsCard(chan, "PC2_1", wcs_[ww]->pc[2]);
      putFitsCard(chan, "PC2_2", wcs_[ww]->pc[3]);
    } 
    // fall back
    else {
      putFitsCard(chan, "CD1_1", wcs_[ww]->cd[0]);
      putFitsCard(chan, "CD1_2", wcs_[ww]->cd[1]);
      putFitsCard(chan, "CD2_1", wcs_[ww]->cd[2]);
      putFitsCard(chan, "CD2_2", wcs_[ww]->cd[3]);
    }
  }

  // equatorial keywords
  if (wcs_[ww]->prjcode>0 && wcs_[ww]->prjcode<34) {
    // equiniox
    putFitsCard(chan, "EQUINOX", wcs_[ww]->equinox);

    // from wcssub/wcsinit.c line 800
    // wcs[ww]->epoch = 1900.0 + (mjd - 15019.81352) / 365.242198781;
    // only set if MJD-OBS or DATE-OBS is present
    if (hd->find("MJD-OBS") || hd->find("DATE-OBS") || 
	(prim && prim->find("MJD-OBS")) || (prim && prim->find("DATE-OBS")))
      putFitsCard(chan, "MJD-OBS", 
		  (wcs_[ww]->epoch-1900)*365.242198781+15019.81352);

    ostringstream radesys;
    radesys << "RADESYS" << alt << ends;
    if (hd->find(radesys.str().c_str())) {
      // if RADESYS present, use it
      putFitsCard(chan, "RADESYS", hd->getString(radesys.str().c_str()));
    }
    else if (prim && prim->find(radesys.str().c_str())) {
      // if RADESYS present, use it
      putFitsCard(chan, "RADESYS", prim->getString(radesys.str().c_str()));
    }
    else if (hd->find("RADECSYS")) {
      // look for old RADECSYS
      putFitsCard(chan, "RADESYS", hd->getString("RADECSYS"));
    }
    else if (prim && prim->find("RADECSYS")) {
      // look for old RADECSYS
      putFitsCard(chan, "RADESYS", prim->getString("RADECSYS"));
    }
    else {
      // fall back on wcssubs
      if (!strncmp("RA",wcs_[ww]->ctype[0],2) || 
	  !strncmp("RA",wcs_[ww]->ctype[1],2)) {
	if (!strncmp("FK4",wcs_[ww]->radecsys,3) ||
	    !strncmp("FK4-NO-E",wcs_[ww]->radecsys,8) ||
	    !strncmp("FK5",wcs_[ww]->radecsys,3) ||
	    !strncmp("ICRS",wcs_[ww]->radecsys,4))
	  putFitsCard(chan, "RADESYS", wcs_[ww]->radecsys);
      }
    }
  }

  // ast is picky about latpole/longpole
  if ((wcs_[ww]->latpole == 999 && wcs_[ww]->longpole == 999) ||
      (wcs_[ww]->latpole == 0 && wcs_[ww]->longpole == 0))
    ;
  else {
    if (wcs_[ww]->latpole != 999)
      putFitsCard(chan, "LATPOLE", wcs_[ww]->latpole);
    if (wcs_[ww]->longpole != 999)
      putFitsCard(chan, "LONPOLE", wcs_[ww]->longpole);
  }

  // Projection parameters- PV, QV, WAT
  // TAN+PV (old SCAMP-backward compatibility)
  // TPV+PV (new SCAMP)
  // xxx+PV (ZPN generic)
  // xxx+QV (TAN AUTOASTROM)
  // TNX/ZPX+WAT (IRAF)
  // TAN/LIN-SIP (SIP)

  // PVx_y (old SCAMP, SCAMP, generic)
  // MAXPV defined in wcs.h
  for (int ii=1; ii<=2; ii++) {
    for (int mm=0; mm<=MAXPV; mm++) {
      ostringstream str,str2;
      str << "PV" << ii << '_' << mm << alt << ends;
      str2 << "PV" << ii << '_' << mm << ends;
      if (hd->find(str.str().c_str())) {
	double val = hd->getReal(str.str().c_str(),0);
	putFitsCard(chan, str2.str().c_str(), val);
      }
      else if (prim && prim->find(str.str().c_str())) {
	double val = prim->getReal(str.str().c_str(),0);
	putFitsCard(chan, str2.str().c_str(), val);
      }
    }
  }

  // QVx_y (Autoastrom)
  for (int ii=1; ii<=2; ii++) {
    for (int mm=0; mm<=MAXPV; mm++) {
      ostringstream str,str2;
      str << "QV" << ii << '_' << mm << alt << ends;
      str2 << "QV" << ii << '_' << mm << ends;
      if (hd->find(str.str().c_str())) {
	double val = hd->getReal(str.str().c_str(),0);
	putFitsCard(chan, str2.str().c_str(), val);
      }
      else if (prim && prim->find(str.str().c_str())) {
	double val = prim->getReal(str.str().c_str(),0);
	putFitsCard(chan, str2.str().c_str(), val);
      }
    }
  }

  // WATx_ (IRAF) (primary only)
  if ((wcs_[ww]->prjcode == WCS_TNX || wcs_[ww]->prjcode == WCS_ZPX) && !ww) {
    for (int jj=0; jj<=2; jj++) {
      for (int ii=1; ii<=9; ii++) {
	ostringstream str;
	str << "WAT" << jj << "_00" << ii << ends;
	if (hd->find(str.str().c_str())) {
	  char* val = hd->getString(str.str().c_str());
	  if (val) {
	    putFitsCard(chan, str.str().c_str(), val);
	    delete [] val;
	  }
	}
	else if (prim && prim->find(str.str().c_str())) {
	  char* val = prim->getString(str.str().c_str());
	  if (val) {
	    putFitsCard(chan, str.str().c_str(), val);
	    delete [] val;
	  }
	}
      }
    }
  }

  // SIP (TAN-SIP/LIN-SIP) (primary only)
  if ((wcs_[ww]->prjcode == WCS_TAN || wcs_[ww]->prjcode == WCS_LIN) && 
      !ww && wcs_[ww]->distcode) {
    if (hd->find("A_ORDER")) {
      int val = hd->getInteger("A_ORDER",0);
      putFitsCard(chan, "A_ORDER", val);
    }
    else if (prim && prim->find("A_ORDER")) {
      int val = prim->getInteger("A_ORDER",0);
      putFitsCard(chan, "A_ORDER", val);
    }

    if (hd->find("AP_ORDER")) {
      int val = hd->getInteger("AP_ORDER",0);
      putFitsCard(chan, "AP_ORDER", val);
    }
    else if (prim && prim->find("AP_ORDER")) {
      int val = prim->getInteger("AP_ORDER",0);
      putFitsCard(chan, "AP_ORDER", val);
    }

    if (hd->find("A_DMAX")) {
      double val = hd->getReal("A_DMAX",0);
      putFitsCard(chan, "A_DMAX", val);
    }
    else if (prim && prim->find("A_DMAX")) {
      double val = prim->getReal("A_DMAX",0);
      putFitsCard(chan, "A_DMAX", val);
    }

    if (hd->find("B_ORDER")) {
      int val = hd->getInteger("B_ORDER",0);
      putFitsCard(chan, "B_ORDER", val);
    }
    else if (prim && prim->find("B_ORDER")) {
      int val = prim->getInteger("B_ORDER",0);
      putFitsCard(chan, "B_ORDER", val);
    }

    if (hd->find("BP_ORDER")) {
      int val = hd->getInteger("BP_ORDER",0);
      putFitsCard(chan, "BP_ORDER", val);
    }
    else if (prim && prim->find("BP_ORDER")) {
      int val = prim->getInteger("BP_ORDER",0);
      putFitsCard(chan, "BP_ORDER", val);
    }

    if (hd->find("B_DMAX")) {
      double val = hd->getReal("B_DMAX",0);
      putFitsCard(chan, "B_DMAX", val);
    }
    else if (prim && prim->find("B_DMAX")) {
      double val = prim->getReal("B_DMAX",0);
      putFitsCard(chan, "B_DMAX", val);
    }

    for (int jj=0; jj<=9; jj++) {
      for (int ii=0; ii<=9; ii++) {
	{
	  ostringstream str;
	  str << "A_" << jj << "_" << ii << ends;
	  if (hd->find(str.str().c_str())) {
	    double val = hd->getReal(str.str().c_str(),0);
	    putFitsCard(chan, str.str().c_str(), val);
	  }
	  else if (prim && prim->find(str.str().c_str())) {
	    double val = prim->getReal(str.str().c_str(),0);
	    putFitsCard(chan, str.str().c_str(), val);
	  }
	}
	{
	  ostringstream str;
	  str << "AP_" << jj << "_" << ii << ends;
	  if (hd->find(str.str().c_str())) {
	    double val = hd->getReal(str.str().c_str(),0);
	    putFitsCard(chan, str.str().c_str(), val);
	  }
	  else if (prim && prim->find(str.str().c_str())) {
	    double val = prim->getReal(str.str().c_str(),0);
	    putFitsCard(chan, str.str().c_str(), val);
	  }
	}
	{
	  ostringstream str;
	  str << "B_" << jj << "_" << ii << ends;
	  if (hd->find(str.str().c_str())) {
	    double val = hd->getReal(str.str().c_str(),0);
	    putFitsCard(chan, str.str().c_str(), val);
	  }
	  else if (prim && prim->find(str.str().c_str())) {
	    double val = prim->getReal(str.str().c_str(),0);
	    putFitsCard(chan, str.str().c_str(), val);
	  }
	}
	{
	  ostringstream str;
	  str << "BP_" << jj << "_" << ii << ends;
	  if (hd->find(str.str().c_str())) {
	    double val = hd->getReal(str.str().c_str(),0);
	    putFitsCard(chan, str.str().c_str(), val);
	  }
	  else if (prim && prim->find(str.str().c_str())) {
	    double val = prim->getReal(str.str().c_str(),0);
	    putFitsCard(chan, str.str().c_str(), val);
	  }
	}
      }
    }
  }
}

void FitsImage::wcs2ast0(int ww, FitsHead* hd, FitsHead* prim, void* chan) 
{
  putFitsCard(chan, "CTYPE1", wcs_[ww]->ctype[0]);
  putFitsCard(chan, "CTYPE2", wcs_[ww]->ctype[1]);

  // CRPIX/CRVAL
  putFitsCard(chan, "CRPIX1", wcs_[ww]->crpix[0]);
  putFitsCard(chan, "CRPIX2", wcs_[ww]->crpix[1]);
  putFitsCard(chan, "CRVAL1", wcs_[ww]->crval[0]);
  putFitsCard(chan, "CRVAL2", wcs_[ww]->crval[1]);

  putFitsCard(chan, "CD1_1", wcs_[ww]->cd[0]);
  putFitsCard(chan, "CD1_2", wcs_[ww]->cd[1]);
  putFitsCard(chan, "CD2_1", wcs_[ww]->cd[2]);
  putFitsCard(chan, "CD2_2", wcs_[ww]->cd[3]);

  putFitsCard(chan, "EQUINOX", wcs_[ww]->equinox);

  // from wcssub/wcsinit.c line 800
  // wcs[ww]->epoch = 1900.0 + (mjd - 15019.81352) / 365.242198781;
  // only set if MJD-OBS or DATE-OBS is present
    if (hd->find("MJD-OBS") || hd->find("DATE-OBS") || 
	(prim && prim->find("MJD-OBS")) || (prim && prim->find("DATE-OBS")))
      putFitsCard(chan, "MJD-OBS", 
		  (wcs_[ww]->epoch-1900)*365.242198781+15019.81352);

  putFitsCard(chan, "RADESYS", wcs_[ww]->radecsys);
}

void FitsImage::putFitsCard(void* chan, const char* key, const char* value)
{
  char buf[80];
  memset(buf,'\0', 80);

  ostringstream str;
  str.setf(ios::left,ios::adjustfield);
  str.width(8);
  str << key << "= '" << value << "'";
  memcpy(buf,str.str().c_str(),str.str().length());

  astPutFits(chan, buf, 0);
  astClearStatus;

  if (DebugAST)
    cerr << str.str().c_str() << endl;
}

void FitsImage::putFitsCard(void* chan, const char* key, int value)
{
  char buf[80];
  memset(buf,'\0', 80);

  ostringstream str;
  str.setf(ios::left,ios::adjustfield);
  str.width(8);
  str << key << "= " << value;
  memcpy(buf,str.str().c_str(),str.str().length());

  astPutFits(chan, buf, 0);
  astClearStatus;

  if (DebugAST)
    cerr << str.str().c_str() << endl;
}

void FitsImage::putFitsCard(void* chan, const char* key, double value)
{
  char buf[80];
  memset(buf,'\0', 80);

  ostringstream str;
  str.setf(ios::left,ios::adjustfield);
  str.setf(ios::scientific,ios::floatfield);
  str.width(8);
  str.precision(16);
  str << key << "= " << value;
  memcpy(buf,str.str().c_str(),str.str().length());

  astPutFits(chan, buf, 0);
  astClearStatus;

  if (DebugAST)
    cerr << str.str().c_str() << endl;
}
