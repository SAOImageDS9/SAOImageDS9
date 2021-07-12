// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <pthread.h>

#include "util.h"
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
#include "wcsast.h"

WCSState::WCSState()
{
  wcsSystem_ = Coord::WCS;
  wcsSkyFrame_ = Coord::FK5;
};

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

  imageToRef3d = imageToData3d;
  refToImage3d = dataToImage3d;

  manageWCS_ =1;
  ast_ =NULL;
  encoding_ =NULL;
  wcs_ =NULL;
  wcsNaxes_ =NULL;

  wcsCel_ =NULL;
  wcsEqu_ =NULL;
  wcsCelLon_ =NULL;
  wcsCelLat_ =NULL;

  wcsSize_ =NULL;
  wcsState_ =NULL;

  wcsInv_ =1;
  wcsHPX_ =0;
  wcsXPH_ =0;

  wcsAltHeader_ =NULL;
  wfpc2Header_ =NULL;
  wcs0Header_ =NULL;

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

  if (manageWCS_)
    clearWCS();

  if (wcsAltHeader_)
    delete wcsAltHeader_;
  if (wfpc2Header_)
    delete wfpc2Header_;
  if (wcs0Header_)
    delete wcs0Header_;
}

// Fits

FitsImageFitsAlloc::FitsImageFitsAlloc(Context* cx, Tcl_Interp* pp, 
				       const char* ch, const char* fn, 
				       FitsFile::FlushMode flush, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsAlloc(ch, FitsFile::RELAXIMAGE, flush);
  process(fn,id);
}

FitsImageFitsAllocGZ::FitsImageFitsAllocGZ(Context* cx, Tcl_Interp* pp, 
					   const char* ch, const char* fn, 
					   FitsFile::FlushMode flush, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsAllocGZ(ch, FitsFile::RELAXIMAGE, flush);
  process(fn,id);
}

FitsImageFitsChannel::FitsImageFitsChannel(Context* cx, Tcl_Interp* pp, 
					   const char* ch, const char* fn, 
					   FitsFile::FlushMode flush, int id) 
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsChannel(pp, ch, fn, FitsFile::RELAXIMAGE, flush);
  process(fn,id);
}

FitsImageFitsMMap::FitsImageFitsMMap(Context* cx, Tcl_Interp* pp, 
				     const char* fn, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsMMap(fn, FitsFile::RELAXIMAGE);
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
  fits_ = new FitsFitsMMapIncr(fn, FitsFile::RELAXIMAGE);
  process(fn,id);
}

FitsImageFitsShare::FitsImageFitsShare(Context* cx, Tcl_Interp* pp, 
				       Base::ShmType type, 
				       int sid, const char* fn, int id)
  : FitsImage(cx, pp)
{
  switch (type) {
  case Base::SHMID:
    fits_ = new FitsFitsShareID(sid, fn, FitsFile::RELAXIMAGE);
    break;
  case Base::KEY:
    fits_ = new FitsFitsShareKey(sid, fn, FitsFile::RELAXIMAGE);
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
  fits_ = new FitsFitsSocket(s, fn, FitsFile::RELAXIMAGE, flush);
  process(fn,id);
}

FitsImageFitsSocketGZ::FitsImageFitsSocketGZ(Context* cx, Tcl_Interp* pp,
					     int s, const char* fn, 
					     FitsFile::FlushMode flush, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsSocketGZ(s, fn, FitsFile::RELAXIMAGE, flush);
  process(fn,id);
}

FitsImageFitsVar::FitsImageFitsVar(Context* cx, Tcl_Interp* pp, 
				   const char* var, const char* fn, int id)
  : FitsImage(cx, pp)
{
  fits_ = new FitsFitsVar(pp, var, fn, FitsFile::RELAXIMAGE);
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

void FitsImage::wfpc2WCS(FitsHead* pp, istream& str)
{
  FitsHead* hh = parseWCS(str);

  // EQUINOX
  if (pp->find("EQUINOX")) {
    char* equ = pp->getString("EQUINOX");
    hh->appendString("EQUINOX", equ, NULL);
  }

  // DATE-OBS
  if (pp->find("DATE-OBS")) {
    char* equ = pp->getString("DATE-OBS");
    hh->appendString("DATE-OBS", equ, NULL);
  }

  // Process OBJECT keyword
  if (objectKeyword_)
    delete [] objectKeyword_;
  objectKeyword_ = dupstr(hh->getString("OBJECT"));

  // Process WCS keywords
  if (wfpc2Header_)
    delete wfpc2Header_;

  wfpc2Header_ = hh;
  initWCS(wfpc2Header_);
}

void FitsImage::appendWCS(istream& str)
{
  FitsHead* hh = parseWCS(str);

  // process OBJECT keyword
  char* obj = dupstr(hh->getString("OBJECT"));
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
  if (wcsAltHeader_)
    delete wcsAltHeader_;

  wcsAltHeader_ = new FitsHead(cards,ll,FitsHead::ALLOC);
  initWCS(wcsAltHeader_);
}

void FitsImage::clearWCS()
{
  if (ast_)
    astAnnul(ast_);
  ast_ =NULL;

  if (encoding_)
    delete [] encoding_;
  encoding_ =NULL;

  if (wcs_)
    delete [] wcs_;
  wcs_ =NULL;
  if (wcsNaxes_)
    delete [] wcsNaxes_;
  wcsNaxes_ =NULL;

  if (wcsCel_)
    delete [] wcsCel_;
  wcsCel_ =NULL;
  if (wcsEqu_)
    delete [] wcsEqu_;
  wcsEqu_ =NULL;
  if (wcsCelLon_)
    delete [] wcsCelLon_;
  wcsCelLon_ =NULL;
  if (wcsCelLat_)
    delete [] wcsCelLat_;
  wcsCelLat_ =NULL;

  if (wcsSize_)
    delete [] wcsSize_;
  wcsSize_ =NULL;

  if (wcsState_)
    delete wcsState_;
  wcsState_ =NULL;

  wcsInv_ = 1;
  wcsHPX_ = 0;
  wcsXPH_ = 0;

  // reset to process LTMV keywords
  keyLTMV =0;
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
  if (wcsAltHeader_)
    return display(wcsAltHeader_);
  else if (wfpc2Header_)
    return display(wfpc2Header_);
  else if (wcs0Header_)
    return display(wcs0Header_);
  else
    return display(image_->head());
}

FitsBound* FitsImage::getDataParams(FrScale::SecMode which)
{
  // params in DATA coords 0-n
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

void FitsImage::initWCS(FitsHead* hd)
{
  if (manageWCS_)
    clearWCS();

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
	  ast_ = ptr->ast_;
	  encoding_ = ptr->encoding_;

	  wcs_ = ptr->wcs_;
	  wcsNaxes_ = ptr->wcsNaxes_;

	  wcsCel_ = ptr->wcsCel_;
	  wcsEqu_ = ptr->wcsEqu_;
	  wcsCelLon_ = ptr->wcsCelLon_;
	  wcsCelLat_ = ptr->wcsCelLat_;

	  wcsSize_ = ptr->wcsSize_;
	  wcsState_ = ptr->wcsState_;

	  wcsInv_ = ptr->wcsInv_;
	  wcsHPX_ = ptr->wcsHPX_;
	  wcsXPH_ = ptr->wcsXPH_;

	  wcsPhyInit(hd);
	  manageWCS_ =0;
	  return;
	}
	sptr = sptr->nextSlice();
      }
      ptr = ptr->nextMosaic();
    }
  }

  // clear WCS vars
  // not sure if this is needed
  clearWCS();
  
  ast_ = fits2ast(hd);
  // check to see if header processed successfully
  if (!astOK || !ast_) {
    clearWCS();
    return;
  }
  
  // special case
  if (astGetI(ast_,"Naxes") == 2 &&
      astIsASkyFrame(astGetFrame(ast_,AST__CURRENT)) &&
      astGetI(ast_,"LatAxis") == 1) {
    int orr[] = {2,1};
    astPermAxes(ast_,orr);
  }

  if (DebugWCS)
    astShow(ast_);

  scanWCS(hd);

  // init wcsState
  wcsState_ = new WCSState();

  astBegin;
  wcsSystem(ast_,wcsState_->wcsSystem_);
  if (hasWCSEqu(wcsState_->wcsSystem_))
    wcsSkyFrame(ast_,wcsState_->wcsSkyFrame_);
  astEnd;

  // must wait until wcsState_ is realized
  wcsSize_ = new double[MULTWCS];
  for (int ii=0; ii<MULTWCS; ii++)
    wcsSize_[ii] = calcWCSSize((Coord::CoordSystem)(ii+Coord::WCS));

  // ok, this is the final chance to verify a good WCS
  // if it makes it here, we're golden
  if (!astOK) {
    clearWCS();
    return;
  }

  wcsPhyInit(hd);
}

void FitsImage::resetWCS()
{
  // Process OBJECT keyword
  if (objectKeyword_)
    delete [] objectKeyword_;
  objectKeyword_ = dupstr(image_->getString("OBJECT"));

  if (wcsAltHeader_)
    delete wcsAltHeader_;
  wcsAltHeader_ =NULL;

  if (wcs0Header_)
    delete wcs0Header_;
  wcs0Header_ =NULL;

  if (wfpc2Header_)
    initWCS(wfpc2Header_);
  else
    initWCS(image_->head());

  // apply block factor
  if (ast_) {
    Vector block = context_->blockFactor();
    if (block[0] != 1 || block[1] != 1) {
      astClearStatus; // just to make sure
      astBegin; // start memory management

      Vector ll(.5,.5);
      Vector ur(1.5,1.5);
      Vector rr = ur*Translate(-.5,-.5)*Scale(block)*Translate(.5,.5);
      AstWinMap* winmap = wcsWinMap(ast_, ll, ur, rr);
      if (winmap)
	astRemapFrame(ast_, AST__BASE, winmap);

      astEnd;
    }
  }

  // WCSNAMEP may have been cleared, check for LTMV
  processKeywordsPhysical();
  processKeywordsParams();
}

void FitsImage::initWCS0(const Vector& pix)
{
  if (!ast_)
    return;

  FitsHead* hd = new FitsHead(naxis(0), naxis(1), 1, -32);

  // CTYPE
  hd->appendString("CTYPE1", "RA---TAN", NULL);
  hd->appendString("CTYPE2", "DEC--TAN", NULL);

  // CRPIX
  Vector cc = mapFromRef(pix, Coord::IMAGE, Coord::FK5);
  hd->appendReal("CRPIX1", cc[1], 9, NULL);
  hd->appendReal("CRPIX2", cc[0], 9, NULL);

  // CRVAL
  hd->appendReal("CRVAL1", 0, 15, NULL);
  hd->appendReal("CRVAL2", 0, 15, NULL);

  // CD
  double ss = getWCSSize(Coord::WCS);
  double ang = getWCSRotation(Coord::WCS,Coord::FK5);
  Matrix flip;
  switch (getWCSOrientation(Coord::WCS,Coord::FK5)) {
  case Coord::NORMAL:
  case Coord::YY:
    flip = FlipX();
    break;
  case Coord::XX:
  case Coord::XY:
    break;
  };
  Matrix mx = flip*Rotate(ang)*Scale(ss);
  hd->appendReal("CD1_1", mx[0][0], 15, NULL);
  hd->appendReal("CD1_2", mx[0][1], 15, NULL);
  hd->appendReal("CD2_1", mx[1][0], 15, NULL);
  hd->appendReal("CD2_2", mx[1][1], 15, NULL);

  // EPOCH, EQUINOX
  hd->appendReal("EPOCH", 2000, 9, NULL);
  hd->appendReal("EQUINOX", 2000, 9, NULL);
  
  // RADESYS
  hd->appendString("RADESYS", "FK5", NULL);

  if (wcs0Header_)
    delete wcs0Header_;
  wcs0Header_ = hd;
  initWCS(wcs0Header_);
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

void FitsImage::match(const char* xxname1, const char* yyname1,
		      Coord::CoordSystem sys1, Coord::SkyFrame sky1,
		      const char* xxname2, const char* yyname2,
		      Coord::CoordSystem sys2, Coord::SkyFrame sky2,
		      double rad, Coord::CoordSystem sys, 
		      Coord::DistFormat dist,
		      const char* rrname)
{
  if (!hasWCS(sys1) || !hasWCS(sys2))
    return;

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

  if (!hasWCSCel(sys1) || !hasWCSCel(sys2))
    return;

  // get doubles
  double* ixx1 = new double[nxx1];
  for (int ii=0 ; ii<nxx1 ; ii++)
    Tcl_GetDoubleFromObj(interp_, objxx1[ii], ixx1+ii);
  double* iyy1 = new double[nyy1];
  for (int ii=0 ; ii<nyy1 ; ii++)
    Tcl_GetDoubleFromObj(interp_, objyy1[ii], iyy1+ii);
  double* ixx2 = new double[nxx2];
  for (int ii=0 ; ii<nxx2 ; ii++)
    Tcl_GetDoubleFromObj(interp_, objxx2[ii], ixx2+ii);
  double* iyy2 = new double[nyy2];
  for (int ii=0 ; ii<nyy2 ; ii++)
    Tcl_GetDoubleFromObj(interp_, objyy2[ii], iyy2+ii);

  Vector* in1 = new Vector[nxx1];
  for (int ii=0; ii<nxx1; ii++)
    in1[ii] = vDegToRad(Vector(ixx1[ii],iyy1[ii]),sys1);

  Vector* ptr2 = new Vector[nxx2];
  for (int ii=0; ii<nxx2; ii++)
    ptr2[ii] = vDegToRad(Vector(ixx2[ii],iyy2[ii]),sys2);

  double rr = rad;
  switch (dist) {
  case Coord::DEGREE:
    break;
  case Coord::ARCMIN:
    rr /= 60.;
    break;
  case Coord::ARCSEC:
    rr /= 60.*60.;
    break;
  }
  rr = zeroTWOPI(degToRad(rr));

  Vector* ptr1 =NULL;
  if (sky1 != sky2) {
    AstFrameSet* wcs1 = (AstFrameSet*)astCopy(ast_);
    wcsSystem(wcs1,sys1);
    if (hasWCSEqu(sys1))
      wcsSkyFrame(wcs1,sky1);

    AstFrameSet* wcs2 = (AstFrameSet*)astCopy(ast_);
    wcsSystem(wcs2,sys2);
    if (hasWCSEqu(sys2))
      wcsSkyFrame(wcs2,sky2);

    AstFrameSet* cvt = (AstFrameSet*)astConvert(wcs1, wcs2, "SKY");
    if (cvt != AST__NULL) {
      ptr1 = new Vector[nxx1];
      wcsTran(context_, cvt, nxx1, in1, 1, ptr1);
    }
  }
  else
    ptr1 = in1;

  // now compare
  if (ptr1 && ptr2) {
    AstFrameSet* wcs = (AstFrameSet*)astCopy(ast_);
    wcsSystem(wcs,sys2);
    if (hasWCSEqu(sys2))
      wcsSkyFrame(wcs,sky2);

    Tcl_Obj* objrr = Tcl_NewListObj(0,NULL);
    for(int jj=0; jj<nxx2; jj++) {
      for (int ii=0; ii<nxx1; ii++) {
	double dd = wcsDistance(wcs,ptr1[ii],ptr2[jj]);

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
  }

  // clean up
  astEnd; // now, clean up memory

  // clean up
  if (ixx1)
    delete [] ixx1;
  if (iyy1)
    delete [] iyy1;
  if (ixx2)
    delete [] ixx2;
  if (iyy2)
    delete [] iyy2;

  if (!ptr1 && ptr1!=in1)
    delete [] ptr1;
  if (in1)
    delete [] in1;
  if (ptr2)
    delete [] ptr2;
}

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

    physicalToImage3d =
      Matrix3d(ltm11, ltm12, 0, ltm21, ltm22, 0, 0, 0, 1, ltv1, ltv2, 0);
    imageToPhysical3d = physicalToImage3d.invert();
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

  physicalToDetector3d =
    Matrix3d(dtm11, dtm12, 0, dtm21, dtm22, 0, 0, 0, 1, dtv1, dtv2, 0);
  detectorToPhysical3d = physicalToDetector3d.invert();

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

  physicalToAmplifier3d =
    Matrix3d(atm11, atm12, 0, atm21, atm22, 0, 0, 0, 1, atv1, atv2, 0);
  amplifierToPhysical3d = physicalToAmplifier3d.invert();

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
  double cdelt2 = fabs(image_->getReal("CDELT2",0));
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
  // params in DATA coords 0-n
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
  if (!(detstr && *detstr && parseSection(detstr,&dv1,&dv2)))
    return 0;

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
    if (!(parseSection(sizestr,&sv1,&sv2)))
      return 0;
  }

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
  objectKeyword_ = dupstr(hh->getString("OBJECT"));

  // Process WCS keywords
  if (wcsAltHeader_)
    delete wcsAltHeader_;

  wcsAltHeader_ = hh;
  initWCS(wcsAltHeader_);
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
  // params in DATA coords 0-n
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
  // params in DATA coords 0-n
  FitsBound* params;
  if (!datasec)
    params = &iparams;
  else
    params = &dparams;

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

  physicalToRef3d = physicalToImage3d * imageToData3d * dataToRef3d;
  refToPhysical3d = physicalToRef3d.invert();

  amplifierToRef3d = amplifierToPhysical3d * physicalToRef3d;
  refToAmplifier3d = amplifierToRef3d.invert();

  detectorToRef3d = detectorToPhysical3d * physicalToRef3d;
  refToDetector3d = detectorToRef3d.invert();
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

double FitsImage::getWCSSize(Coord::CoordSystem sys)
{
  if (!wcsSize_ || sys<Coord::WCS)
    return 0;
  else
    return wcsSize_[sys-Coord::WCS];
}

double FitsImage::calcWCSSize(Coord::CoordSystem sys)
{
  if (!hasWCS(sys))
    return 0;

  astClearStatus; // just to make sure
  setWCSSystem(sys);
  
  // only check lon axis as it will not change near poles
  Vector in[3];
  Vector out[3];
  in[0] = center();
  in[1] = center()+Vector(0,1);
  wcsTran(context_, ast_, 2, in, 1, out);

  double dd = wcsDistance(ast_, out[0], out[1]);
  return hasWCSCel(sys) ? radToDeg(dd) : dd;
}

Coord::Orientation FitsImage::getWCSOrientation(Coord::CoordSystem sys,
						Coord::SkyFrame sky)
{
  if (!hasWCS(sys))
    return Coord::NORMAL;
  
  // special case, makes no sense
  if (wcsXPH_)
    return Coord::NORMAL;

  astClearStatus; // just to make sure
  astBegin; // start memory management

  setWCSSysSkyFrame(sys,sky);

  Vector in[3];
  Vector out[3];
  in[0] = center();
  in[1] = center()+Vector(0,1);
  in[2] = center()+Vector(1,0);
  wcsTran(context_, ast_, 3, in, 1, out);
  double ang = wcsAngle(ast_,out[1],out[0],out[2]);

  astEnd;
  
  if (!(isnan(ang)||isinf(ang)||(ang == -DBL_MAX)||(ang == DBL_MAX))) {
    if ((hasWCSCel(sys) && ang>0) || (!hasWCSCel(sys) && ang<0))
      return Coord::XX;
    else
      return Coord::NORMAL;
  }
  else
    return Coord::NORMAL;
}

double FitsImage::getWCSRotation(Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  if (!hasWCS(sys))
    return 0;
  
  // special case, makes no sense
  if (wcsXPH_)
    return 0;

  astClearStatus; // just to make sure
  astBegin; // start memory management

  setWCSSysSkyFrame(sys,sky);

  if (!wcsHPX_) {
    Vector in[3];
    Vector out[3];
    in[0] = center();
    in[1] = center()+Vector(0,1);
    in[2] = center()+Vector(1,0);
    wcsTran(context_, ast_, 3, in, 1, out);
    double ang = wcsAxAngle(ast_,out[0], out[1]);
    double ang3 = wcsAngle(ast_,out[1],out[0],out[2]);

    astEnd;
    
    if ((!(isnan(ang )||isinf(ang) ||(ang ==-DBL_MAX)||(ang ==DBL_MAX))) &&
	(!(isnan(ang3)||isinf(ang3)||(ang3==-DBL_MAX)||(ang3==DBL_MAX)))) {
      if ((hasWCSCel(sys) && ang3>0) || (!hasWCSCel(sys) && ang3<0))
	return -ang;
      else
	return ang;
    }
    else
      return 0;
  }
  else { // special case for HPX
    Vector cc = center();
    Vector wcc = wcsTran(context_, ast_, cc, 1);
    Vector wnorth = wcc + Vector(0,.001);
    Vector north = wcsTran(context_, ast_, wnorth,0);

    int current = astGetI(ast_,"Current");
    int base = astGetI(ast_,"Base");
    astSetI(ast_,"Current",base);
    double ang = wcsAxAngle(ast_,cc,north);
    astSetI(ast_,"Current",current);

    astEnd;

    if (!(isnan(ang)||isinf(ang)||(ang == -DBL_MAX)||(ang == DBL_MAX)))
      return ang;
    else
      return 0;
  }
}

double FitsImage::getWCSDist(const Vector& vv1, const Vector& vv2,
			     Coord::CoordSystem sys)
{
  if (!hasWCS(sys))
    return 0;

  astClearStatus; // just to make sure
  astBegin; // start memory management

  setWCSSystem(sys);

  astEnd;
  
  return hasWCSCel(sys) ?
    radToDeg(wcsDistance(ast_,vDegToRad(vv1,sys),vDegToRad(vv2,sys))) :
    wcsDistance(ast_,vv1,vv2);
}

const char* FitsImage::getWCSDomain(Coord::CoordSystem sys) 
{
  if (!hasWCS(sys))
    return NULL;

  astClearStatus; // just to make sure
  astBegin; // start memory management

  setWCSSystem(sys);

  astEnd;

  const char* domain = astGetC(ast_, "Domain");
  return domain;
}

const char* FitsImage::getWCSSystem(Coord::CoordSystem sys) 
{
  if (!hasWCSCel(sys))
    return NULL;

  astClearStatus; // just to make sure
  astBegin; // start memory management

  AstFrameSet* fs =
    (AstFrameSet*)astFindFrame(ast_, astSkyFrame(" MaxAxes=4")," ");
  const char* str =NULL;
  if (fs)
    str = astGetC(fs, "System");

  astEnd;
  return str;
}

const char* FitsImage::getWCSAxisSymbol(Coord::CoordSystem sys, int axis) 
{
  if (!hasWCS(sys))
    return NULL;

  int id = sys-Coord::WCS;
  if (wcsNaxes_[id] <= axis)
    return NULL;

  ostringstream str;
  str << "Symbol(" << axis+1 << ")" << ends;
  return astGetC(ast_, str.str().c_str());
}

Vector FitsImage::pix2wcs(const Vector& in, Coord::CoordSystem sys,
			  Coord::SkyFrame sky)
{
  if (!hasWCS(sys))
    return Vector();
  
  astClearStatus; // just to make sure
  astBegin; // start memory management

  setWCSSysSkyFrame(sys,sky);

  Vector out = wcsTran(context_, ast_, in, 1);
  if (!astOK || !checkWCS(out))
    return Vector();

  astNorm(ast_, out.v);
  astEnd;

  return vRadToDeg(out,sys);
}

VectorStr FitsImage::pix2wcs(const Vector& in, Coord::CoordSystem sys,
			     Coord::SkyFrame sky, Coord::SkyFormat format)
{
  if (!hasWCS(sys))
    return VectorStr();

  astClearStatus; // just to make sure
  astBegin; // start memory management

  setWCSSysSkyFrame(sys,sky);
  
  Vector out = wcsTran(context_, ast_, in, 1);
  if (!astOK || !checkWCS(out))
    return VectorStr();

  setWCSFormat(sys,sky,format);
  astNorm(ast_, out.v);
  astEnd;

  int naxes = astGetI(ast_,"Naxes");
  switch (naxes) {
  case 1:
    {
      ostringstream str;
      str << setprecision(context_->parent_->precLinear_) << in[1] << ends;
      return VectorStr(astFormat(ast_,1,out[0]), str.str().c_str());
    }
  case 2:
  case 3:
  case 4:
    return VectorStr(astFormat(ast_,1,out[0]), astFormat(ast_,2,out[1]));
  }

  return VectorStr();
}

Vector3d FitsImage::pix2wcs(const Vector3d& in, Coord::CoordSystem sys,
			    Coord::SkyFrame sky)
{
  if (!hasWCS(sys))
    return Vector();

  astClearStatus; // just to make sure
  astBegin; // start memory management

  setWCSSysSkyFrame(sys,sky);

  Vector3d out = wcsTran(context_, ast_, in, 1);
  if (!astOK || !checkWCS(out))
    return Vector3d();
  astNorm(ast_, out.v);
  astEnd;
  
  return vRadToDeg(out,sys);
}

VectorStr3d FitsImage::pix2wcs(const Vector3d& in, Coord::CoordSystem sys,
			       Coord::SkyFrame sky, Coord::SkyFormat format)
{
  if (!hasWCS(sys))
    return VectorStr3d();

  astClearStatus; // just to make sure
  astBegin; // start memory management

  setWCSSysSkyFrame(sys,sky);
  
  Vector3d out = wcsTran(context_, ast_, in, 1);
  if (!astOK || !checkWCS(out))
    return VectorStr3d();

  setWCSFormat(sys,sky,format);
  astNorm(ast_, out.v);
  astEnd;

  int naxes = astGetI(ast_,"Naxes");
  switch (naxes) {
  case 1:
    {
      ostringstream str1;
      str1 << setprecision(context_->parent_->precLinear_) << in[1] << ends;
      ostringstream str2;
      str2 << setprecision(context_->parent_->precLinear_) << in[2] << ends;
      return VectorStr3d(astFormat(ast_,1,out[0]),
			 str1.str().c_str(),
			 str2.str().c_str());
    }
  case 2:
    {
      ostringstream str;
      str << setprecision(context_->parent_->precLinear_) << in[1] << ends;
      return VectorStr3d(astFormat(ast_,1,out[0]),
			 astFormat(ast_,2,out[1]),
			 str.str().c_str());

    }
  case 3:
  case 4:
    return VectorStr3d(astFormat(ast_,1,out[0]),
		       astFormat(ast_,2,out[1]),
		       astFormat(ast_,3,out[2]));
  }

  return VectorStr3d();
}

Vector FitsImage::wcs2pix(const Vector& vv, Coord::CoordSystem sys,
			  Coord::SkyFrame sky)
{
  if (!hasWCS(sys) || !wcsInv_) {
    maperr =1;
    return Vector();
  }

  astClearStatus; // just to make sure
  astBegin; // start memory management

  setWCSSysSkyFrame(sys,sky);

  Vector in = vDegToRad(vv,sys);
  Vector out = wcsTran(context_, ast_, in, 0);
  astEnd;
  if (!astOK || !checkWCS(out)) {
    maperr =1;
    return Vector();
  }
  
  maperr =0;
  return out;
}

Vector3d FitsImage::wcs2pix(const Vector3d& vv, Coord::CoordSystem sys,
			    Coord::SkyFrame sky)
{
  if (!hasWCS(sys) || !wcsInv_)
    return Vector3d();
    
  astClearStatus; // just to make sure
  astBegin; // start memory management

  setWCSSysSkyFrame(sys,sky);

  Vector3d in = vDegToRad(vv,sys);
  Vector3d out = wcsTran(context_, ast_, in, 0);
  astEnd;
  if (!astOK || !checkWCS(out))
    return Vector3d();
  
  return out;
}

int FitsImage::hasWCS(Coord::CoordSystem sys)
{
  if (!wcs_ || sys<Coord::WCS)
    return 0;
  else
    return wcs_[sys-Coord::WCS];
}

int FitsImage::hasWCSCel(Coord::CoordSystem sys)
{
  if (!wcsCel_ || sys<Coord::WCS)
    return 0;
  else
    return wcsCel_[sys-Coord::WCS];
}

int FitsImage::hasWCSEqu(Coord::CoordSystem sys)
{
  if (!wcsEqu_ || sys<Coord::WCS)
    return 0;
  else
    return wcsEqu_[sys-Coord::WCS];
}

int FitsImage::hasWCSLinear(Coord::CoordSystem sys)
{
  if (!wcs_ || !wcsCel_ || sys<Coord::WCS)
    return 0;
  else
    return wcs_[sys-Coord::WCS] && !wcsCel_[sys-Coord::WCS];
}

int FitsImage::hasWCS3D(Coord::CoordSystem sys)
{
  if (!wcsNaxes_ || sys<Coord::WCS)
    return 0;
  else
    return (wcsNaxes_[sys-Coord::WCS]>2) ? 1 : 0;
}

void FitsImage::scanWCS(FitsHead* hd)
{
  // init wcs_ array
  wcs_ = new int[MULTWCS];
  for (int ii=0; ii<MULTWCS; ii++)
    wcs_[ii] =0;

  wcsNaxes_ = new int[MULTWCS];
  for (int ii=0; ii<MULTWCS; ii++)
    wcsNaxes_[ii] =0;
  
  // init wcsCel_ array
  wcsCel_ = new int[MULTWCS];
  for (int ii=0; ii<MULTWCS; ii++)
    wcsCel_[ii] =0;
  wcsEqu_ = new int[MULTWCS];
  for (int ii=0; ii<MULTWCS; ii++)
    wcsEqu_[ii] =0;
  wcsCelLon_ = new int[MULTWCS];
  for (int ii=0; ii<MULTWCS; ii++)
    wcsCelLon_[ii] =0;
  wcsCelLat_ = new int[MULTWCS];
  for (int ii=0; ii<MULTWCS; ii++)
    wcsCelLat_[ii] =0;

  if (!ast_)
    return;

  // easy one, HPX?
  char key[] = "CTYPE1 ";
  if (image_) {
    const char* str = image_->getKeyword(key);
    if (str) {
      if (!strncmp(str+5,"HPX",3))
	wcsHPX_ =1;
      if (!strncmp(str+5,"XPH",3))
	wcsXPH_ =1;
      delete [] str;
    }
  }

  astClearStatus;
  astBegin;
  int nframes = astGetI(ast_, "Nframe");

  // special case for AST native encoding
  if (findKeyword("BEGAST_A")) {
    wcs_[0] =1; 
    wcsNaxes_[0] = astGetI(ast_,"Naxes");
  }
  else {
    // fill out wcs_ array
    for (int kk=0; kk<nframes; kk++) {
      AstFrameSet* ff = (AstFrameSet*)astGetFrame(ast_,kk+1);
      const char* id = astGetC(ff, "Ident");
      if (id && *id) {
	int jj = (*id == ' ') ? 0 : *id-'@';
	wcs_[jj] = 1;
	wcsNaxes_[jj] = astGetI(ff,"Naxes");
      }
    }
  }
  
  // wcsCel_[]
  for (int kk=0; kk<nframes; kk++) {
    AstFrame* ff = (AstFrame*)astGetFrame(ast_,kk+1);
    int ii=0; // current WCS
    const char* id = astGetC(ff, "Ident");
    if (id && *id)
      ii = (*id == ' ') ? 0 : *id-'@';
    AstFrameSet* fs =
      (AstFrameSet*)astFindFrame(ff, astSkyFrame(" MaxAxes=4")," ");

    if (fs) {
      wcsCel_[ii] =1;
      const char* sys = astGetC(ff, "System");
      if (sys && *sys) {
	//	cerr << "System: " << sys << endl;
	if (strncmp(sys,"Unknown",7))
	  wcsEqu_[ii] =1;

	for (int jj=0; jj<wcsNaxes_[ii]; jj++) {
	  ostringstream str;
	  str << "Symbol(" << jj+1 << ")" << ends;
	  const char* ss = astGetC(ff, str.str().c_str());
	  size_t lss = strlen(ss);
	  //	  cerr << "Symbol: " << ss << endl;
	  if (ss) {
	    if (!strcmp(ss,"RA") ||
		!strcmp(ss,"l") ||
		!strcmp(ss,"Lambda") ||
		(lss>1 && !strcmp(ss+1,"LON")) ||
		(lss>2 && !strcmp(ss+2,"LN")))
	      wcsCelLon_[ii] = jj+1;
	    else if (!strcmp(ss,"Dec") ||
		     !strcmp(ss,"b") ||
		     !strcmp(ss,"Beta") ||
		     (lss>1 && !strcmp(ss+1,"LAT")) ||
		     (lss>2 && !strcmp(ss+2,"LT")))
	      wcsCelLat_[ii] = jj+1;
	  }
	}
	//	cerr << "wcsCelLon(" << ii << "): " << wcsCelLon_[ii] << endl;
	//	cerr << "wcsCelLat(" << ii << "): " << wcsCelLat_[ii] << endl;
      }
    }
  }

  astEnd;
}

void FitsImage::wcsPhyInit(FitsHead* hd)
{
  // now see if we have a 'physical' in WCSP, if so, set LTMV keywords
  keyLTMV =0;

  char* wcsname = hd->getString("WCSNAMEP");
  if (wcsname && *wcsname && !strncmp(wcsname, "PHYSICAL", 8)) {
    Vector ll2 = center() - Vector(10,10);
    Vector ur2 = center() + Vector(10,10);
    double ll[4];
    ll[0] =ll2[0];
    ll[1] =ll2[1];
    ll[2] =1;
    ll[3] =1;
    double ur[4];
    ur[0] =ur2[0];
    ur[1] =ur2[1];
    ur[2] =1;
    ur[3] =1;

    setWCSSystem(Coord::WCSP);
    int naxes1 = astGetI(astGetFrame(ast_,AST__BASE),"Naxes");
    int naxes2 = astGetI(astGetFrame(ast_,AST__CURRENT),"Naxes");

    int ss = (naxes1+1)*naxes2;
    double* fit = new double[ss];
    double tol = 1;
    if (astLinearApprox(ast_, ll, ur, tol, fit) != AST__BAD) {
      keyLTMV = 1;
      imageToPhysical =  Matrix(fit[naxes2], fit[naxes2+naxes1],
				fit[naxes2+1], fit[naxes2+naxes1+1],
				fit[0], fit[1]);
      physicalToImage = imageToPhysical.invert();
    }

    if (fit)
      delete [] fit;
  }
}

int FitsImage::checkWCS(Vector& vv)
{
  // check for reasonable values
  return (fabs(vv[0]) < FLT_MAX &&
	  fabs(vv[1]) < FLT_MAX) ? 1 : 0;
}

int FitsImage::checkWCS(Vector3d& vv)
{
  // check for reasonable values
  return (fabs(vv[0]) < FLT_MAX &&
	  fabs(vv[1]) < FLT_MAX &&
	  fabs(vv[2]) < FLT_MAX ) ? 1 : 0;
}

void FitsImage::setWCSSystem(Coord::CoordSystem sys)
{
  if (wcsState_->wcsSystem_ != sys)
    if (wcsSystem(ast_,sys))
      wcsState_->wcsSystem_ = sys;
}

void FitsImage::setWCSSysSkyFrame(Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  if (wcsState_->wcsSystem_ != sys)
    if (wcsSystem(ast_,sys))
      wcsState_->wcsSystem_ = sys;

  if (wcsState_->wcsSkyFrame_ != sky)
    if (hasWCSEqu(sys)) {
      wcsSkyFrame(ast_,sky);
      wcsState_->wcsSkyFrame_ = sky;
    }
}

void FitsImage::setWCSFormat(Coord::CoordSystem sys, Coord::SkyFrame sky,
			     Coord::SkyFormat format)
{
  int id = sys-Coord::WCS;

  // spacial axes
  if (wcsCelLon_[id] && wcsCelLat_[id]) {
    switch (format) {
    case Coord::DEGREES:
      {
	ostringstream str;
	str << "d." << context_->parent_->precDeg_;

	wcsFormat(ast_, wcsCelLon_[id], str.str().c_str());
	wcsFormat(ast_, wcsCelLat_[id], str.str().c_str());
      }
      break;

    case Coord::SEXAGESIMAL:
      {
	ostringstream hms;
	ostringstream dms;
	hms << "hms." << context_->parent_->precHMS_;
	dms << "+dms." << context_->parent_->precDMS_;

	switch (sky) {
	case Coord::FK4:
	case Coord::FK5:
	case Coord::ICRS:
	  wcsFormat(ast_, wcsCelLon_[id], hms.str().c_str());
	  wcsFormat(ast_, wcsCelLat_[id], dms.str().c_str());
	  break;
	case Coord::GALACTIC:
	case Coord::ECLIPTIC:
	  wcsFormat(ast_, wcsCelLon_[id], dms.str().c_str());
	  wcsFormat(ast_, wcsCelLat_[id], dms.str().c_str());
	  break;
	}
      }
      break;
    }
  }

  // any other axes
  ostringstream str;
  str << "%%1." << context_->parent_->precLinear_ << 'G';

  for (int ii=0; ii<wcsNaxes_[id]; ii++)
    if (!(wcsCelLon_[id] && wcsCelLat_[id]))
      wcsFormat(ast_, ii+1, str.str().c_str());
}

Vector FitsImage::vRadToDeg(const Vector& vv, Coord::CoordSystem sys)
{
  Vector out = vv;
  if (hasWCSCel(sys)) {
    int id = sys-Coord::WCS;
    for (int ii=0; ii<2; ii++) {
      if (wcsCelLon_[id] == ii+1 || wcsCelLat_[id] == ii+1)
	out[ii] = radToDeg(out[ii]);
    }
  }
  return out;
}

Vector3d FitsImage::vRadToDeg(const Vector3d& vv, Coord::CoordSystem sys)
{
  Vector3d out = vv;
  if (hasWCSCel(sys)) {
    int id = sys-Coord::WCS;
    for (int ii=0; ii<3; ii++) {
      if (wcsCelLon_[id] == ii+1 || wcsCelLat_[id] == ii+1)
	out[ii] = radToDeg(out[ii]);
    }
  }
  return out;
}

Vector FitsImage::vDegToRad(const Vector& vv, Coord::CoordSystem sys)
{
  Vector out = vv;
  if (hasWCSCel(sys)) {
    int id = sys-Coord::WCS;
    for (int ii=0; ii<2; ii++) {
      if (wcsCelLon_[id] == ii+1 || wcsCelLat_[id] == ii+1)
	out[ii] = degToRad(out[ii]);
    }
  }
  return out;
}

Vector3d FitsImage::vDegToRad(const Vector3d& vv, Coord::CoordSystem sys)
{
  Vector3d out = vv;
  if (hasWCSCel(sys)) {
    int id = sys-Coord::WCS;
    for (int ii=0; ii<3; ii++) {
      if (wcsCelLon_[id] == ii+1 || wcsCelLat_[id] == ii+1)
	out[ii] = degToRad(out[ii]);
    }
  }
  return out;
}

static void fits2TAB(AstFitsChan* chan, const char* extname,
		     int extver, int extlevel, int* status)
{
  FitsFile* ext = ((FitsImage*)astChannelData)->fitsFile();
  // just in case
  if (!ext) {
    *status = 0;
    return;
  }

  // skip the current HDU
  ext = new FitsMosaicNextMMapIncr(ext);

  while (1) {
    // EOF?
    if (!ext || !ext->isValid()) {
      if (ext)
	delete ext;
      *status = 0;
      return;
    }

    // is it a bin table?
    if (ext->isBinTable()) {
      // check its extname
      const char* name = ext->extname();
      int ver = ext->extver();
      int level = ext->extlevel();

      if (name && !strcmp(extname,name) && extver==ver && extlevel==level)
	break;
    }

    FitsFile* ptr = ext;
    ext = new FitsMosaicNextMMapIncr(ptr);
    delete ptr;
  }  

  // ok, found it
  astClearStatus; // just to make sure
  astBegin; // start memory management

  FitsHead* hd = ext->head();
  FitsBinTableHDU* hdu = (FitsBinTableHDU*)hd->hdu();
  int cols = hdu->cols();
  int rows = hdu->rows();
  int rowlen = hdu->width();

  // create fitstable
  AstFitsChan* header = astFitsChan(NULL, NULL, " ");
  char* cards = hd->cards();
  int ncards = hd->ncard();

  for (int ii=0; ii<ncards; ii++) {
    char buf[81];
    strncpy(buf,cards+(ii*80),80);
    buf[80] = '\0';

    astPutFits(header, buf, 0);
  }
  AstFitsTable* table = (AstFitsTable*)astFitsTable(header," ");

  for (int ii=0; ii<cols; ii++) {
    FitsBinColumnB* col = (FitsBinColumnB*)hdu->find(ii);
    int width = col->width();
    int repeat = col->repeat();

    char* ptr = (char*)ext->data();
    unsigned char* data = new unsigned char[width*rows];
    memset(data,0,width*rows);
    switch (col->type()) {
    case 'I':
      for (int ii=0; ii<rows; ii++, ptr+=rowlen)
	for (int jj=0; jj<repeat; jj++) {
	  short vv = col->value(ptr,jj);
	  memcpy(data+ii*width+jj*2,&vv,2);
	}
      break;
    case 'J':
      for (int ii=0; ii<rows; ii++, ptr+=rowlen)
	for (int jj=0; jj<repeat; jj++) {
	  int vv = col->value(ptr,jj);
	  memcpy(data+ii*width+jj*4,&vv,4);
	}
      break;
    case 'E':
      for (int ii=0; ii<rows; ii++, ptr+=rowlen)
	for (int jj=0; jj<repeat; jj++) {
	  float vv = col->value(ptr,jj);
	  memcpy(data+ii*width+jj*4,&vv,4);
	}
      break;
    case 'D':
      for (int ii=0; ii<rows; ii++, ptr+=rowlen)
	for (int jj=0; jj<repeat; jj++) {
	  double vv = col->value(ptr,jj);
	  memcpy(data+ii*width+jj*8,&vv,8);
	}
      break;
    }
    astPutColumnData(table, col->ttype(), 0, width*rows, data);
    if (data)
      delete [] data;
  }  

  astPutTable(chan, table, extname);

  astEnd; // now, clean up memory
  if (ext)
    delete ext;

  *status = 1;
}

AstFrameSet* FitsImage::fits2ast(FitsHead* hd) 
{
  // we may have an error, just reset
  astClearStatus;
  astBegin;

  // new fitschan
  AstFitsChan* chan = astFitsChan(NULL, NULL, " ");
  if (!astOK || chan == AST__NULL)
    return NULL;

  // enable -TAB
  astSetI(chan,"TabOK",1);
  astSetI(chan,"SipReplace",0);
  astPutChannelData(chan, this);
  astTableSource(chan, fits2TAB);

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

  // encoding
  // must come after astPutsFits and before astRead
  const char* encode = astGetC(chan, "Encoding");
  if (encode)
    encoding_ = dupstr(encode);
  //  astSet (chan, "Encoding=FITS-WCS");

  // we may have an error, just reset
  astClearStatus;
  astClear(chan, "Card");

  // parse header
  AstFrameSet* frameSet = (AstFrameSet*)astRead(chan);

  // do we have anything?
  if (!astOK || frameSet == AST__NULL || 
      strncmp(astGetC(frameSet,"Class"), "FrameSet", 8))
    return NULL;

  // warn if no inverse
  wcsInv_ = astGetI(frameSet, "TranInverse");
  if (!wcsInv_)
    internalError("Warning: the WCS has no defined inverse. Some functionality may not be available.");
  
  astExport(frameSet);
  astEnd;

  return frameSet;
}
