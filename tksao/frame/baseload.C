// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "base.h"
#include "context.h"

// *** Fits ***

void Base::loadFitsAllocCmd(const char* ch, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsAlloc(currentContext, interp, 
					  ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->load(ALLOC, fn, img));
}

void Base::loadFitsAllocGZCmd(const char* ch, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsAllocGZ(currentContext, interp, 
					    ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->load(ALLOCGZ, fn, img));
}

void Base::loadFitsChannelCmd(const char* ch, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsChannel(currentContext, interp, 
					    ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->load(CHANNEL, fn, img));
}

void Base::loadFitsMMapCmd(const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsMMap(currentContext, interp, fn, 1);
  loadDone(currentContext->load(MMAP, fn, img));
}

void Base::loadFitsSMMapCmd(const char* hdr, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsSMMap(currentContext, interp, hdr, fn, 1);
  loadDone(currentContext->load(SMMAP, fn, img));
}

void Base::loadFitsMMapIncrCmd(const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsMMapIncr(currentContext, interp, fn, 1);
  loadDone(currentContext->load(MMAPINCR, fn, img));
}

void Base::loadFitsShareCmd(ShmType stype, int id, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsShare(currentContext, interp,
					  stype, id, fn, 1);
  loadDone(currentContext->load(SHARE, fn, img));
}

void Base::loadFitsSShareCmd(ShmType stype, int hdr, int id, 
			     const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsSShare(currentContext, interp, 
					   stype, hdr, id, fn, 1);
  loadDone(currentContext->load(SSHARE, fn, img));
}

void Base::loadFitsSocketCmd(int s, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsSocket(currentContext, interp, 
					   s, fn, FitsFile::FLUSH, 1);
  loadDone(currentContext->load(SOCKET, fn, img));
}

void Base::loadFitsSocketGZCmd(int s, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsSocketGZ(currentContext, interp, 
					     s, fn, FitsFile::FLUSH, 1);
  loadDone(currentContext->load(SOCKETGZ, fn, img));
}

void Base::loadFitsVarCmd(const char* ch, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsVar(currentContext, interp, ch, fn, 1);
  loadDone(currentContext->load(VAR, fn, img));
}

// *** Array ***

void Base::loadArrAllocCmd(const char* ch, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageArrAlloc(currentContext, interp,
					 ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->load(ALLOC, fn, img));
}

void Base::loadArrAllocGZCmd(const char* ch, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageArrAllocGZ(currentContext, interp,
					   ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->load(ALLOCGZ, fn, img));
}

void Base::loadArrChannelCmd(const char* ch, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageArrChannel(currentContext, interp,
					   ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->load(CHANNEL, fn, img));
}

void Base::loadArrMMapCmd(const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageArrMMap(currentContext, interp, fn, 1);
  loadDone(currentContext->load(MMAP, fn, img));
}

void Base::loadArrMMapIncrCmd(const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageArrMMapIncr(currentContext, interp, fn, 1);
  loadDone(currentContext->load(MMAPINCR, fn, img));
}

void Base::loadArrShareCmd(ShmType stype, int id, const char* fn, 
			   LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageArrShare(currentContext, interp,
					 stype, id, fn, 1);
  loadDone(currentContext->load(SHARE, fn, img));
}

void Base::loadArrSocketCmd(int s, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageArrSocket(currentContext, interp,
					  s, fn, FitsFile::FLUSH, 1);
  loadDone(currentContext->load(SOCKET, fn, img));
}

void Base::loadArrSocketGZCmd(int s, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageArrSocketGZ(currentContext, interp,
					    s, fn, FitsFile::FLUSH, 1);
  loadDone(currentContext->load(SOCKETGZ, fn, img));
}

void Base::loadArrVarCmd(const char* ch, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageArrVar(currentContext, interp, ch, fn, 1);
  loadDone(currentContext->load(VAR, fn, img));
}

// *** ENVI ***

void Base::loadENVISMMapCmd(const char* hdr, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageENVISMMap(currentContext, interp, hdr, fn, 1);
  loadDone(currentContext->load(SMMAP, fn, img));
}

// *** NRRD ***

void Base::loadNRRDAllocCmd(const char* ch, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageNRRDAlloc(currentContext, interp, 
					  ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->load(ALLOC, fn, img));
}

void Base::loadNRRDChannelCmd(const char* ch, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageNRRDChannel(currentContext, interp, 
					    ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->load(CHANNEL, fn, img));
}

void Base::loadNRRDMMapCmd(const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageNRRDMMap(currentContext, interp, fn, 1);
  loadDone(currentContext->load(MMAP, fn, img));
}

void Base::loadNRRDShareCmd(ShmType stype, int id, const char* fn, 
			   LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageNRRDShare(currentContext, interp, 
					  stype, id, fn, 1);
  loadDone(currentContext->load(SHARE, fn, img));
}

void Base::loadNRRDSocketCmd(int s, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageNRRDSocket(currentContext, interp, 
					   s, fn, FitsFile::FLUSH, 1);
  loadDone(currentContext->load(SOCKET, fn, img));
}

void Base::loadNRRDVarCmd(const char* ch, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageNRRDVar(currentContext, interp, ch, fn, 1);
  loadDone(currentContext->load(VAR, fn, img));
}

// *** Photo ***

void Base::loadPhotoCmd(const char* ph, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImagePhoto(currentContext, interp, 
				      ph, fn, 1);
  loadDone(currentContext->load(PHOTO, fn, img));
}

void Base::loadSlicePhotoCmd(const char* ph, const char* fn)
{
  FitsImage* img = new FitsImagePhoto(currentContext, interp,
				      ph, fn, 1);
  loadDone(currentContext->loadSlice(PHOTO, fn, img));
}

// *** Data Cube ***

void Base::loadExtCubeAllocCmd(const char* ch, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsAlloc(currentContext, interp, 
					  ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadExtCube(ALLOC, fn, img));
}

void Base::loadExtCubeAllocGZCmd(const char* ch, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsAllocGZ(currentContext, interp, 
					    ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadExtCube(ALLOCGZ, fn, img));
}

void Base::loadExtCubeChannelCmd(const char* ch, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsChannel(currentContext, interp,
					    ch, fn, 
					    FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadExtCube(CHANNEL, fn, img));
}

void Base::loadExtCubeMMapCmd(const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsMMap(currentContext, interp,
					 fn, 1);
  loadDone(currentContext->loadExtCube(MMAP, fn, img));
}

void Base::loadExtCubeMMapIncrCmd(const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsMMapIncr(currentContext, interp,
					     fn, 1);
  loadDone(currentContext->loadExtCube(MMAPINCR, fn, img));
}

void Base::loadExtCubeShareCmd(ShmType stype, int id, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsShare(currentContext, interp,
					  stype, id, fn, 1);
  loadDone(currentContext->loadExtCube(SHARE, fn, img));
}

void Base::loadExtCubeSocketCmd(int s, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsSocket(currentContext, interp,
					   s, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadExtCube(SOCKET, fn, img));
}

void Base::loadExtCubeSocketGZCmd(int s, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsSocketGZ(currentContext, interp,
					     s, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadExtCube(SOCKETGZ, fn, img));
}

void Base::loadExtCubeVarCmd(const char* ch, const char* fn)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsVar(currentContext, interp,
					ch, fn, 1);
  loadDone(currentContext->loadExtCube(VAR, fn, img));
}

// *** Slice ***

void Base::loadSliceAllocCmd(const char* ch, const char* fn)
{
  FitsImage* img = new FitsImageFitsAlloc(currentContext, interp,
					  ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadSlice(ALLOC, fn, img));
}

void Base::loadSliceAllocGZCmd(const char* ch, const char* fn)
{
  FitsImage* img = new FitsImageFitsAllocGZ(currentContext, interp,
					    ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadSlice(ALLOCGZ, fn, img));
}

void Base::loadSliceChannelCmd(const char* ch, const char* fn)
{
  FitsImage* img = new FitsImageFitsChannel(currentContext, interp,
					    ch, fn,
					    FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadSlice(CHANNEL, fn, img));
}

void Base::loadSliceMMapCmd(const char* fn)
{
  FitsImage* img = new FitsImageFitsMMap(currentContext, interp,
					 fn, 1);
  loadDone(currentContext->loadSlice(MMAP, fn, img));
}

void Base::loadSliceSMMapCmd(const char* hdr, const char* fn)
{
  FitsImage* img = new FitsImageFitsSMMap(currentContext, interp,
					  hdr, fn, 1);
  loadDone(currentContext->loadSlice(MMAP, fn, img));
}

void Base::loadSliceMMapIncrCmd(const char* fn)
{
  FitsImage* img = new FitsImageFitsMMapIncr(currentContext, interp,
					     fn, 1);
  loadDone(currentContext->loadSlice(MMAPINCR, fn, img));
}

void Base::loadSliceShareCmd(ShmType stype, int id, const char* fn)
{
  FitsImage* img = new FitsImageFitsShare(currentContext, interp,
					  stype, id, fn, 1);
  loadDone(currentContext->loadSlice(SHARE, fn, img));
}

void Base::loadSliceSShareCmd(ShmType stype, int hdr, int id, const char* fn)
{
  FitsImage* img = new FitsImageFitsSShare(currentContext, interp,
					   stype, hdr, id, fn, 1);
  loadDone(currentContext->loadSlice(SSHARE, fn, img));
}

void Base::loadSliceSocketCmd(int s, const char* fn)
{
  FitsImage* img = new FitsImageFitsSocket(currentContext, interp,
					   s, fn, FitsFile::FLUSH, 1);
  loadDone(currentContext->loadSlice(SOCKET, fn, img));
}

void Base::loadSliceSocketGZCmd(int s, const char* fn)
{
  FitsImage* img = new FitsImageFitsSocketGZ(currentContext, interp,
					     s, fn, FitsFile::FLUSH, 1);
  loadDone(currentContext->loadSlice(SOCKETGZ, fn, img));
}

void Base::loadSliceVarCmd(const char* ch, const char* fn)
{
  FitsImage* img = new FitsImageFitsVar(currentContext, interp,
					ch, fn, 1);
  loadDone(currentContext->loadSlice(VAR, fn, img));
}

// *** Mosaic Image ***

void Base::loadMosaicImageAllocCmd(MosaicType type, Coord::CoordSystem sys,
				   const char* ch, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageMosaicAlloc(currentContext, interp,
					    ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicImage(ALLOC, fn, img, type, sys));
}

void Base::loadMosaicImageAllocGZCmd(MosaicType type, Coord::CoordSystem sys, 
				     const char* ch, const char* fn, 
				     LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageMosaicAllocGZ(currentContext, interp,
					      ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicImage(ALLOCGZ, fn, img, type, sys));
}

void Base::loadMosaicImageChannelCmd(MosaicType type, Coord::CoordSystem sys,
				     const char* ch, const char* fn, 
				     LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageMosaicChannel(currentContext, interp,
					      ch, fn, 
					      FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicImage(CHANNEL, fn, img, type, sys));
}

void Base::loadMosaicImageMMapCmd(MosaicType type, Coord::CoordSystem sys,
				  const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageMosaicMMap(currentContext, interp,
					   fn, 1);
  loadDone(currentContext->loadMosaicImage(MMAP, fn, img, type, sys));
}

void Base::loadMosaicImageMMapIncrCmd(MosaicType type, Coord::CoordSystem sys, 
				      const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageMosaicMMapIncr(currentContext, interp,
					       fn, 1);
  loadDone(currentContext->loadMosaicImage(MMAPINCR, fn, img, type, sys));
}

void Base::loadMosaicImageShareCmd(MosaicType type, Coord::CoordSystem sys,
				   ShmType stype, int id, const char* fn, 
				   LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageMosaicShare(currentContext, interp,
					    stype, id, fn, 1);
  loadDone(currentContext->loadMosaicImage(SHARE, fn, img, type, sys));
}

void Base::loadMosaicImageSocketCmd(MosaicType type, Coord::CoordSystem sys,
				    int s, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageMosaicSocket(currentContext, interp,
					     s, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicImage(SOCKET, fn, img, type, sys));
}

void Base::loadMosaicImageSocketGZCmd(MosaicType type, 
				      Coord::CoordSystem sys, 
				      int s, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageMosaicSocketGZ(currentContext, interp,
					       s, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicImage(SOCKETGZ, fn, img, type, sys));
}

void Base::loadMosaicImageVarCmd(MosaicType type, Coord::CoordSystem sys,
				 const char* ch, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageMosaicVar(currentContext, interp,
					  ch, fn, 1);
  loadDone(currentContext->loadMosaicImage(VAR, fn, img, type, sys));
}

// *** Mosaic Image WFPC2 ***

void Base::loadMosaicImageWFPC2AllocCmd(const char* ch, const char* fn,
					LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsAlloc(currentContext, interp,
	 ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicWFPC2(ALLOC, fn, img));
}

void Base::loadMosaicImageWFPC2AllocGZCmd(const char* ch, const char* fn,
					  LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsAllocGZ(currentContext, interp,
	 ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicWFPC2(ALLOCGZ, fn, img));
}

void Base::loadMosaicImageWFPC2ChannelCmd(const char* ch, const char* fn,
					  LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsChannel(currentContext, interp,
					    ch, fn, 
					    FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicWFPC2(CHANNEL, fn, img));
}

void Base::loadMosaicImageWFPC2MMapCmd(const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsMMap(currentContext, interp,
	 fn, 1);
  loadDone(currentContext->loadMosaicWFPC2(MMAP, fn, img));
}

void Base::loadMosaicImageWFPC2MMapIncrCmd(const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsMMapIncr(currentContext, interp,
	 fn, 1);
  loadDone(currentContext->loadMosaicWFPC2(MMAPINCR, fn, img));
}

void Base::loadMosaicImageWFPC2ShareCmd(ShmType stype, int id, const char* fn,
					LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsShare(currentContext, interp,
	 stype, id, fn, 1);
  loadDone(currentContext->loadMosaicWFPC2(SHARE, fn, img));
}

void Base::loadMosaicImageWFPC2SocketCmd(int s, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsSocket(currentContext, interp,
	 s, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicWFPC2(SOCKET, fn, img));
}

void Base::loadMosaicImageWFPC2SocketGZCmd(int s, const char* fn, LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsSocketGZ(currentContext, interp,
					     s, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaicWFPC2(SOCKETGZ, fn, img));
}

void Base::loadMosaicImageWFPC2VarCmd(const char* ch, const char* fn,
				      LayerType ll)
{
  unloadFits();
  FitsImage* img = new FitsImageFitsVar(currentContext, interp,
					ch, fn, 1);
  loadDone(currentContext->loadMosaicWFPC2(VAR, fn, img));
}

// *** Mosaic ***

void Base::loadMosaicAllocCmd(MosaicType type, Coord::CoordSystem sys, 
			      const char* ch, const char* fn, LayerType ll)
{
  FitsImage* img = new FitsImageFitsAlloc(currentContext, interp,
					  ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaic(ALLOC, fn, img, type, sys));
}

void Base::loadMosaicAllocGZCmd(MosaicType type, Coord::CoordSystem sys, 
				const char* ch, const char* fn, LayerType ll)
{
  FitsImage* img = new FitsImageFitsAllocGZ(currentContext, interp,
					    ch, fn, FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaic(ALLOCGZ, fn, img, type, sys));
}

void Base::loadMosaicChannelCmd(MosaicType type, Coord::CoordSystem sys,
				const char* ch, const char* fn, LayerType ll)
{
  FitsImage* img = new FitsImageFitsChannel(currentContext, interp,
					    ch, fn,
					    FitsFile::NOFLUSH, 1);
  loadDone(currentContext->loadMosaic(CHANNEL, fn, img, type, sys));
}

void Base::loadMosaicMMapCmd(MosaicType type, Coord::CoordSystem sys,
			     const char* fn, LayerType ll)
{
  FitsImage* img = new FitsImageFitsMMap(currentContext, interp,
					 fn, 1);
  loadDone(currentContext->loadMosaic(MMAP, fn, img, type, sys));
}

void Base::loadMosaicSMMapCmd(MosaicType type, Coord::CoordSystem sys,
			      const char* hdr, const char* fn, 
			      LayerType ll)
{
  FitsImage* img = new FitsImageFitsSMMap(currentContext, interp,
					  hdr, fn, 1);
  loadDone(currentContext->loadMosaic(MMAP, fn, img, type, sys));
}

void Base::loadMosaicMMapIncrCmd(MosaicType type, Coord::CoordSystem sys,
				 const char* fn, LayerType ll)
{
  FitsImage* img = new FitsImageFitsMMapIncr(currentContext, interp,
					     fn, 1);
  loadDone(currentContext->loadMosaic(MMAPINCR, fn, img, type, sys));
}

void Base::loadMosaicShareCmd(MosaicType type, Coord::CoordSystem sys,
			      ShmType stype, int id, const char* fn, 
			      LayerType ll)
{
  FitsImage* img = new FitsImageFitsShare(currentContext, interp,
					  stype, id, fn, 1);
  loadDone(currentContext->loadMosaic(SHARE, fn, img, type, sys));
}

void Base::loadMosaicSShareCmd(MosaicType type, Coord::CoordSystem sys,
			       ShmType stype, int hdr, int id, const char* fn, 
			       LayerType ll)
{
  FitsImage* img = new FitsImageFitsSShare(currentContext, interp,
					   stype, hdr, id, fn, 1);
  loadDone(currentContext->loadMosaic(SSHARE, fn, img, type, sys));
}

void Base::loadMosaicSocketCmd(MosaicType type, Coord::CoordSystem sys,
			       int s, const char* fn, LayerType ll)
{
  FitsImage* img = new FitsImageFitsSocket(currentContext, interp,
					   s, fn, FitsFile::FLUSH, 1);
  loadDone(currentContext->loadMosaic(SOCKET, fn, img, type, sys));
}

void Base::loadMosaicSocketGZCmd(MosaicType type, Coord::CoordSystem sys,
				 int s, const char* fn, LayerType ll)
{
  FitsImage* img = new FitsImageFitsSocketGZ(currentContext, interp,
					     s, fn, FitsFile::FLUSH, 1);
  loadDone(currentContext->loadMosaic(SOCKETGZ, fn, img, type, sys));
}

void Base::loadMosaicVarCmd(MosaicType type, Coord::CoordSystem sys,
			    const char* ch, const char* fn, 
			    LayerType ll)
{
  FitsImage* img = new FitsImageFitsVar(currentContext, interp,
					ch, fn, 1);
  loadDone(currentContext->loadMosaic(VAR, fn, img, type, sys));
}

// ***

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
