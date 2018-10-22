// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "context.h"
#include "fitsimage.h"

#include "alloc.h"
#include "allocgz.h"
#include "channel.h"
#include "mmap.h"
#include "mmapincr.h"
#include "share.h"
#include "sshare.h"
#include "socket.h"
#include "socketgz.h"
#include "var.h"

// *** Fits ***

void Base::loadFitsAllocCmd(const char* ch, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageFitsAlloc(currentContext, interp, 
					  ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->load(ALLOC, fn, img), ll);
}

void Base::loadFitsAllocGZCmd(const char* ch, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageFitsAllocGZ(currentContext, interp, 
					    ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->load(ALLOCGZ, fn, img), ll);
}

void Base::loadFitsChannelCmd(const char* ch, const char* fn,LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageFitsChannel(currentContext, interp, 
					    ch, fn, 
					    FitsFile::NOFLUSH, 1);
  loadDone(currentContext->load(CHANNEL, fn, img), ll);
}

void Base::loadFitsMMapCmd(const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageFitsMMap(currentContext, interp, 
					 fn, 1);
  loadDone(currentContext->load(MMAP, fn, img), ll);
}

void Base::loadFitsSMMapCmd(const char* hdr, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageFitsSMMap(currentContext, interp, 
					  hdr, fn, 1);
  loadDone(currentContext->load(SMMAP, fn, img), ll);
}

void Base::loadFitsMMapIncrCmd(const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsMMapIncr(currentContext, interp, fn, 1);
  loadDone(currentContext->load(MMAPINCR, fn, img), ll);
}

void Base::loadFitsShareCmd(ShmType stype, int id, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageFitsShare(currentContext, interp, 
					  stype, id, fn, 1);
  loadDone(currentContext->load(SHARE, fn, img), ll);
}

void Base::loadFitsSShareCmd(ShmType stype, int hdr, int id, 
			     const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageFitsSShare(currentContext, interp, 
					   stype, hdr, id, fn, 1);
  loadDone(currentContext->load(SSHARE, fn, img), ll);
}

void Base::loadFitsSocketCmd(int s, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageFitsSocket(currentContext, interp, 
					   s, fn, FitsFile::FLUSH, 1);
  loadDone(currentContext->load(SOCKET, fn, img), ll);
}

void Base::loadFitsSocketGZCmd(int s, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageFitsSocketGZ(currentContext, interp, 
					     s, fn, FitsFile::FLUSH, 1);
  loadDone(currentContext->load(SOCKETGZ, fn, img), ll);
}

void Base::loadFitsVarCmd(const char* ch, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageFitsVar(currentContext, interp, 
					ch, fn, 1);
  loadDone(currentContext->load(VAR, fn, img), ll);
}

// *** Array ***

void Base::loadArrAllocCmd(const char* ch, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageArrAlloc(currentContext, interp,
					 ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->load(ALLOC, fn, img), ll);
}

void Base::loadArrAllocGZCmd(const char* ch, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageArrAllocGZ(currentContext, interp,
					   ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->load(ALLOCGZ, fn, img), ll);
}

void Base::loadArrChannelCmd(const char* ch, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageArrChannel(currentContext, interp,
					   ch, fn, 
					   FitsFile::NOFLUSH, 1);
  loadDone(currentContext->load(CHANNEL, fn, img), ll);
}

void Base::loadArrMMapCmd(const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageArrMMap(currentContext, interp,
					fn, 1);
  loadDone(currentContext->load(MMAP, fn, img), ll);
}

void Base::loadArrMMapIncrCmd(const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageArrMMapIncr(currentContext, interp,
					    fn, 1);
  loadDone(currentContext->load(MMAPINCR, fn, img), ll);
}

void Base::loadArrShareCmd(ShmType stype, int id, const char* fn, 
			   LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageArrShare(currentContext, interp,
					 stype, id, fn, 1);
  loadDone(currentContext->load(SHARE, fn, img), ll);
}

void Base::loadArrSocketCmd(int s, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageArrSocket(currentContext, interp,
					  s, fn, FitsFile::FLUSH, 1);
  loadDone(currentContext->load(SOCKET, fn, img), ll);
}

void Base::loadArrSocketGZCmd(int s, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageArrSocketGZ(currentContext, interp,
					    s, fn, FitsFile::FLUSH, 1);
  loadDone(currentContext->load(SOCKETGZ, fn, img), ll);
}

void Base::loadArrVarCmd(const char* ch, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageArrVar(currentContext, interp,
				       ch, fn, 1);
  loadDone(currentContext->load(VAR, fn, img), ll);
}

// *** ENVI ***

void Base::loadENVISMMapCmd(const char* hdr, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageENVISMMap(currentContext, interp, hdr, fn, 1);
  loadDone(currentContext->load(SMMAP, fn, img), IMG);
}

// *** NRRD ***

void Base::loadNRRDAllocCmd(const char* ch, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageNRRDAlloc(currentContext, interp, 
					  ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->load(ALLOC, fn, img), ll);
}

void Base::loadNRRDChannelCmd(const char* ch, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageNRRDChannel(currentContext, interp, 
					    ch, fn, 
					   FitsFile::NOFLUSH, 1);
  loadDone(currentContext->load(CHANNEL, fn, img), ll);
}

void Base::loadNRRDMMapCmd(const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageNRRDMMap(currentContext, interp, fn, 1);
  loadDone(currentContext->load(MMAP, fn, img), ll);
}

void Base::loadNRRDShareCmd(ShmType stype, int id, const char* fn, 
			   LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageNRRDShare(currentContext, interp, 
					  stype, id, fn, 1);
  loadDone(currentContext->load(SHARE, fn, img), ll);
}

void Base::loadNRRDSocketCmd(int s, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageNRRDSocket(currentContext, interp, 
					   s, fn, FitsFile::FLUSH, 1);
  loadDone(currentContext->load(SOCKET, fn, img), ll);
}

void Base::loadNRRDVarCmd(const char* ch, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageNRRDVar(currentContext, interp, 
					ch, fn, 1);
  loadDone(currentContext->load(VAR, fn, img), ll);
}

// *** Photo ***

void Base::loadPhotoCmd(const char* ph, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImagePhoto(currentContext, interp, 
				      ph, fn, 1);
  loadDone(currentContext->load(PHOTO, fn, img), IMG);
}

void Base::loadSlicePhotoCmd(const char* ph, const char* fn)
{
  FitsImage* img = new FitsImagePhoto(currentContext, interp,
				      ph, fn, 1);
  loadDone(currentContext->loadSlice(PHOTO, fn, img), IMG);
}

// *** Data Cube ***

void Base::loadExtCubeAllocCmd(const char* ch, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsAlloc(currentContext, interp, 
					  ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadExtCube(ALLOC, fn, img), IMG);
}

void Base::loadExtCubeAllocGZCmd(const char* ch, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsAllocGZ(currentContext, interp, 
					    ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadExtCube(ALLOCGZ, fn, img), IMG);
}

void Base::loadExtCubeChannelCmd(const char* ch, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsChannel(currentContext, interp,
					    ch, fn, 
					    FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadExtCube(CHANNEL, fn, img), IMG);
}

void Base::loadExtCubeMMapCmd(const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsMMap(currentContext, interp,
					 fn, 1);
  loadDone(currentContext->loadExtCube(MMAP, fn, img), IMG);
}

void Base::loadExtCubeMMapIncrCmd(const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsMMapIncr(currentContext, interp,
					     fn, 1);
  loadDone(currentContext->loadExtCube(MMAPINCR, fn, img), IMG);
}

void Base::loadExtCubeShareCmd(ShmType stype, int id, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsShare(currentContext, interp,
					  stype, id, fn, 1);
  loadDone(currentContext->loadExtCube(SHARE, fn, img), IMG);
}

void Base::loadExtCubeSocketCmd(int s, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsSocket(currentContext, interp,
					   s, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadExtCube(SOCKET, fn, img), IMG);
}

void Base::loadExtCubeSocketGZCmd(int s, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsSocketGZ(currentContext, interp,
					     s, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadExtCube(SOCKETGZ, fn, img), IMG);
}

void Base::loadExtCubeVarCmd(const char* ch, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsVar(currentContext, interp,
					ch, fn, 1);
  loadDone(currentContext->loadExtCube(VAR, fn, img), IMG);
}

// *** Slice ***

void Base::loadSliceAllocCmd(const char* ch, const char* fn)
{
  FitsImage* img = new FitsImageFitsAlloc(currentContext, interp,
					  ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadSlice(ALLOC, fn, img), IMG);
}

void Base::loadSliceAllocGZCmd(const char* ch, const char* fn)
{
  FitsImage* img = new FitsImageFitsAllocGZ(currentContext, interp,
					    ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadSlice(ALLOCGZ, fn, img), IMG);
}

void Base::loadSliceChannelCmd(const char* ch, const char* fn)
{
  FitsImage* img = new FitsImageFitsChannel(currentContext, interp,
					    ch, fn,
					    FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadSlice(CHANNEL, fn, img), IMG);
}

void Base::loadSliceMMapCmd(const char* fn)
{
  FitsImage* img = new FitsImageFitsMMap(currentContext, interp,
					 fn, 1);
  loadDone(currentContext->loadSlice(MMAP, fn, img), IMG);
}

void Base::loadSliceSMMapCmd(const char* hdr, const char* fn)
{
  FitsImage* img = new FitsImageFitsSMMap(currentContext, interp,
					  hdr, fn, 1);
  loadDone(currentContext->loadSlice(MMAP, fn, img), IMG);
}

void Base::loadSliceMMapIncrCmd(const char* fn)
{
  FitsImage* img = new FitsImageFitsMMapIncr(currentContext, interp,
					     fn, 1);
  loadDone(currentContext->loadSlice(MMAPINCR, fn, img), IMG);
}

void Base::loadSliceShareCmd(ShmType stype, int id, const char* fn)
{
  FitsImage* img = new FitsImageFitsShare(currentContext, interp,
					  stype, id, fn, 1);
  loadDone(currentContext->loadSlice(SHARE, fn, img), IMG);
}

void Base::loadSliceSShareCmd(ShmType stype, int hdr, int id, const char* fn)
{
  FitsImage* img = new FitsImageFitsSShare(currentContext, interp,
					   stype, hdr, id, fn, 1);
  loadDone(currentContext->loadSlice(SSHARE, fn, img), IMG);
}

void Base::loadSliceSocketCmd(int s, const char* fn)
{
  FitsImage* img = new FitsImageFitsSocket(currentContext, interp,
					   s, fn, FitsFile::FLUSH, 1);
  loadDone(currentContext->loadSlice(SOCKET, fn, img), IMG);
}

void Base::loadSliceSocketGZCmd(int s, const char* fn)
{
  FitsImage* img = new FitsImageFitsSocketGZ(currentContext, interp,
					     s, fn, FitsFile::FLUSH, 1);
  loadDone(currentContext->loadSlice(SOCKETGZ, fn, img), IMG);
}

void Base::loadSliceVarCmd(const char* ch, const char* fn)
{
  FitsImage* img = new FitsImageFitsVar(currentContext, interp,
					ch, fn, 1);
  loadDone(currentContext->loadSlice(VAR, fn, img), IMG);
}

// *** Mosaic Image ***

void Base::loadMosaicImageAllocCmd(MosaicType type, Coord::CoordSystem sys,
				   const char* ch, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageMosaicAlloc(currentContext, interp,
					    ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicImage(ALLOC, fn, img, type, sys), ll);
}

void Base::loadMosaicImageAllocGZCmd(MosaicType type, Coord::CoordSystem sys, 
				     const char* ch, const char* fn, 
				     LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageMosaicAllocGZ(currentContext, interp,
					      ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicImage(ALLOCGZ, fn, img, type, sys), ll);
}

void Base::loadMosaicImageChannelCmd(MosaicType type, Coord::CoordSystem sys,
				     const char* ch, const char* fn, 
				     LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageMosaicChannel(currentContext, interp,
					      ch, fn, 
					      FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicImage(CHANNEL, fn, img, type, sys), ll);
}

void Base::loadMosaicImageMMapCmd(MosaicType type, Coord::CoordSystem sys,
				  const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageMosaicMMap(currentContext, interp,
					   fn, 1);
  loadDone(currentContext->loadMosaicImage(MMAP, fn, img, type, sys), ll);
}

void Base::loadMosaicImageMMapIncrCmd(MosaicType type, Coord::CoordSystem sys, 
				      const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageMosaicMMapIncr(currentContext, interp,
					       fn, 1);
  loadDone(currentContext->loadMosaicImage(MMAPINCR, fn, img, type, sys), ll);
}

void Base::loadMosaicImageShareCmd(MosaicType type, Coord::CoordSystem sys,
				   ShmType stype, int id, const char* fn, 
				   LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageMosaicShare(currentContext, interp,
					    stype, id, fn, 1);
  loadDone(currentContext->loadMosaicImage(SHARE, fn, img, type, sys), ll);
}

void Base::loadMosaicImageSocketCmd(MosaicType type, Coord::CoordSystem sys,
				    int s, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageMosaicSocket(currentContext, interp,
					     s, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicImage(SOCKET, fn, img, type, sys), ll);
}

void Base::loadMosaicImageSocketGZCmd(MosaicType type, 
				      Coord::CoordSystem sys, 
				      int s, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageMosaicSocketGZ(currentContext, interp,
					       s, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicImage(SOCKETGZ, fn, img, type, sys), ll);
}

void Base::loadMosaicImageVarCmd(MosaicType type, Coord::CoordSystem sys,
				 const char* ch, const char* fn, LayerType ll)
{
  if (ll == IMG)
    unloadFits();
  FitsImage* img = new FitsImageMosaicVar(currentContext, interp,
					  ch, fn, 1);
  loadDone(currentContext->loadMosaicImage(VAR, fn, img, type, sys), ll);
}

// *** Mosaic ***

void Base::loadMosaicAllocCmd(MosaicType type, Coord::CoordSystem sys, 
			      const char* ch, const char* fn, LayerType ll)
{
  FitsImage* img = new FitsImageFitsAlloc(currentContext, interp,
					  ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaic(ALLOC, fn, img, type, sys), ll);
}

void Base::loadMosaicAllocGZCmd(MosaicType type, Coord::CoordSystem sys, 
				const char* ch, const char* fn, LayerType ll)
{
  FitsImage* img = new FitsImageFitsAllocGZ(currentContext, interp,
					    ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaic(ALLOCGZ, fn, img, type, sys), ll);
}

void Base::loadMosaicChannelCmd(MosaicType type, Coord::CoordSystem sys,
				const char* ch, const char* fn, LayerType ll)
{
  FitsImage* img = new FitsImageFitsChannel(currentContext, interp,
					    ch, fn,
					    FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaic(CHANNEL, fn, img, type, sys), ll);
}

void Base::loadMosaicMMapCmd(MosaicType type, Coord::CoordSystem sys,
			     const char* fn, LayerType ll)
{
  FitsImage* img = new FitsImageFitsMMap(currentContext, interp,
					 fn, 1);
  loadDone(currentContext->loadMosaic(MMAP, fn, img, type, sys), ll);
}

void Base::loadMosaicSMMapCmd(MosaicType type, Coord::CoordSystem sys,
			      const char* hdr, const char* fn, 
			      LayerType ll)
{
  FitsImage* img = new FitsImageFitsSMMap(currentContext, interp,
					  hdr, fn, 1);
  loadDone(currentContext->loadMosaic(MMAP, fn, img, type, sys), ll);
}

void Base::loadMosaicMMapIncrCmd(MosaicType type, Coord::CoordSystem sys,
				 const char* fn, LayerType ll)
{
  FitsImage* img = new FitsImageFitsMMapIncr(currentContext, interp,
					     fn, 1);
  loadDone(currentContext->loadMosaic(MMAPINCR, fn, img, type, sys), ll);
}

void Base::loadMosaicShareCmd(MosaicType type, Coord::CoordSystem sys,
			      ShmType stype, int id, const char* fn, 
			      LayerType ll)
{
  FitsImage* img = new FitsImageFitsShare(currentContext, interp,
					  stype, id, fn, 1);
  loadDone(currentContext->loadMosaic(SHARE, fn, img, type, sys), ll);
}

void Base::loadMosaicSShareCmd(MosaicType type, Coord::CoordSystem sys,
			       ShmType stype, int hdr, int id, const char* fn, 
			       LayerType ll)
{
  FitsImage* img = new FitsImageFitsSShare(currentContext, interp,
					   stype, hdr, id, fn, 1);
  loadDone(currentContext->loadMosaic(SSHARE, fn, img, type, sys), ll);
}

void Base::loadMosaicSocketCmd(MosaicType type, Coord::CoordSystem sys,
			       int s, const char* fn, LayerType ll)
{
  FitsImage* img = new FitsImageFitsSocket(currentContext, interp,
					   s, fn, FitsFile::FLUSH, 1);
  loadDone(currentContext->loadMosaic(SOCKET, fn, img, type, sys), ll);
}

void Base::loadMosaicSocketGZCmd(MosaicType type, Coord::CoordSystem sys,
				 int s, const char* fn, LayerType ll)
{
  FitsImage* img = new FitsImageFitsSocketGZ(currentContext, interp,
					     s, fn, FitsFile::FLUSH, 1);
  loadDone(currentContext->loadMosaic(SOCKETGZ, fn, img, type, sys), ll);
}

void Base::loadMosaicVarCmd(MosaicType type, Coord::CoordSystem sys,
			    const char* ch, const char* fn, 
			    LayerType ll)
{
  FitsImage* img = new FitsImageFitsVar(currentContext, interp,
					ch, fn, 1);
  loadDone(currentContext->loadMosaic(VAR, fn, img, type, sys), ll);
}

// *** Mosaic Image WFPC2 ***

void Base::loadMosaicImageWFPC2AllocCmd(const char* ch, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsAlloc(currentContext, interp,
	 ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicWFPC2(ALLOC, fn, img), IMG);
}

void Base::loadMosaicImageWFPC2AllocGZCmd(const char* ch, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsAllocGZ(currentContext, interp,
	 ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicWFPC2(ALLOCGZ, fn, img), IMG);
}

void Base::loadMosaicImageWFPC2ChannelCmd(const char* ch, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsChannel(currentContext, interp,
					    ch, fn, 
					    FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicWFPC2(CHANNEL, fn, img), IMG);
}

void Base::loadMosaicImageWFPC2MMapCmd(const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsMMap(currentContext, interp,
	 fn, 1);
  loadDone(currentContext->loadMosaicWFPC2(MMAP, fn, img), IMG);
}

void Base::loadMosaicImageWFPC2MMapIncrCmd(const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsMMapIncr(currentContext, interp,
	 fn, 1);
  loadDone(currentContext->loadMosaicWFPC2(MMAPINCR, fn, img), IMG);
}

void Base::loadMosaicImageWFPC2ShareCmd(ShmType stype, int id, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsShare(currentContext, interp,
	 stype, id, fn, 1);
  loadDone(currentContext->loadMosaicWFPC2(SHARE, fn, img), IMG);
}

void Base::loadMosaicImageWFPC2SocketCmd(int s, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsSocket(currentContext, interp,
	 s, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicWFPC2(SOCKET, fn, img), IMG);
}

void Base::loadMosaicImageWFPC2SocketGZCmd(int s, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsSocketGZ(currentContext, interp,
	 s, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicWFPC2(SOCKETGZ, fn, img), IMG);
}

void Base::loadMosaicImageWFPC2VarCmd(const char* ch, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsVar(currentContext, interp,
					ch, fn, 1);
  loadDone(currentContext->loadMosaicWFPC2(VAR, fn, img), IMG);
}

// ***

void Base::loadDone(int rr, LayerType ll)
{
  loadDone(rr);
}

void Base::loadDone(int rr)
{
  if (rr) {
    alignWCS();
    if (!preservePan) {
      centerImage();
      crosshair = cursor;
    }
  }
  else {
    reset();
    Tcl_AppendResult(interp, "Unable to load file", NULL);
    result = TCL_ERROR;
  }

  // adjust current slice if needed
  if (currentContext->fits && isCube() && 
      currentContext->secMode()==FrScale::CROPSEC) {

    // context->slice() IMAGE (ranges 1-n)
    // params are in DATA coords, edge to edge
    // setSlice() IMAGE (ranges 1-n)
    double sl = currentContext->slice(2)-.5;
    FitsZBound* zparams = 
      currentContext->getDataParams(currentContext->secMode());
    double ff = zparams->zmin+.5;
    double tt = zparams->zmax-.5;
    if (sl<ff)
      setSlice(2,ff+.5);
    if (sl>tt)
      setSlice(2,tt+.5);
  }

  updateColorScale();
  update(MATRIX);
}

