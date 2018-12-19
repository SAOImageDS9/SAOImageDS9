// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "frame.h"

// *** Fits ***

void Frame::loadFitsAllocCmd(const char* ch, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadFitsAllocCmd(ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsAlloc(cc, interp, ch, fn,
					    FitsFile::NOFLUSH, 1);
    loadDone(cc->load(ALLOC, fn, img));
    break;
  }
}

void Frame::loadFitsAllocGZCmd(const char* ch, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadFitsAllocGZCmd(ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsAllocGZ(cc, interp, ch, fn,
					      FitsFile::NOFLUSH, 1);
    loadDone(cc->load(ALLOCGZ, fn, img));
    break;
  }
}

void Frame::loadFitsChannelCmd(const char* ch, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadFitsChannelCmd(ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsChannel(cc, interp, ch, fn,
					      FitsFile::NOFLUSH, 1);
    loadDone(cc->load(CHANNEL, fn, img));
    break;
  }
}

void Frame::loadFitsMMapCmd(const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadFitsMMapCmd(fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsMMap(cc, interp, fn, 1);
    loadDone(cc->load(MMAP, fn, img));
    break;
  }
}

void Frame::loadFitsSMMapCmd(const char* hdr, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadFitsSMMapCmd(hdr, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsSMMap(cc, interp, hdr, fn, 1);
    loadDone(cc->load(SMMAP, fn, img));
    break;
  }
}

void Frame::loadFitsMMapIncrCmd(const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadFitsMMapIncrCmd(fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsMMapIncr(cc, interp, fn, 1);
    loadDone(cc->load(MMAPINCR, fn, img));
    break;
  }
}

void Frame::loadFitsShareCmd(ShmType stype, int id, const char* fn,
			     LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadFitsShareCmd(stype, id, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsShare(cc, interp,
					    stype, id, fn, 1);
    loadDone(cc->load(SHARE, fn, img));
    break;
  }
}

void Frame::loadFitsSShareCmd(ShmType stype, int hdr, int id, const char* fn,
			      LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadFitsSShareCmd(stype, hdr, id, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsSShare(cc, interp, 
					     stype, hdr, id, fn, 1);
    loadDone(cc->load(SSHARE, fn, img));
    break;
  }
}

void Frame::loadFitsSocketCmd(int s, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadFitsSocketCmd(s, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsSocket(cc, interp, 
					     s, fn, FitsFile::FLUSH, 1);
    loadDone(cc->load(SOCKET, fn, img));
    break;
  }
}

void Frame::loadFitsSocketGZCmd(int s, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadFitsSocketGZCmd(s, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsSocketGZ(cc, interp, 
					       s, fn, FitsFile::FLUSH, 1);
    loadDone(cc->load(SOCKETGZ, fn, img));
    break;
  }
}

void Frame::loadFitsVarCmd(const char* ch, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadFitsVarCmd(ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsVar(cc, interp, ch, fn, 1);
    loadDone(cc->load(VAR, fn, img));
    break;
  }
}

// *** Array ***

void Frame::loadArrAllocCmd(const char* ch, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadArrAllocCmd(ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageArrAlloc(cc, interp,
					   ch, fn, FitsFile::NOFLUSH, 1);
    loadDone(cc->load(ALLOC, fn, img));
    break;
  }
}

void Frame::loadArrAllocGZCmd(const char* ch, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadArrAllocGZCmd(ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageArrAllocGZ(cc, interp,
					   ch, fn, FitsFile::NOFLUSH, 1);
    loadDone(cc->load(ALLOCGZ, fn, img));
    break;
  }
}

void Frame::loadArrChannelCmd(const char* ch, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadArrChannelCmd(ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageArrChannel(cc, interp,
					     ch, fn, FitsFile::NOFLUSH, 1);
    loadDone(cc->load(CHANNEL, fn, img));
    break;
  }
}

void Frame::loadArrMMapCmd(const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadArrMMapCmd(fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageArrMMap(cc, interp, fn, 1);
    loadDone(cc->load(MMAP, fn, img));
    break;
  }
}

void Frame::loadArrMMapIncrCmd(const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadArrMMapIncrCmd(fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageArrMMapIncr(cc, interp, fn, 1);
    loadDone(cc->load(MMAPINCR, fn, img));
    break;
  }
}

void Frame::loadArrShareCmd(ShmType stype, int id, const char* fn, 
			   LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadArrShareCmd(stype, id, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageArrShare(cc, interp, stype, id, fn, 1);
    loadDone(cc->load(SHARE, fn, img));
    break;
  }
}

void Frame::loadArrSocketCmd(int s, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadArrSocketCmd(s, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageArrSocket(cc, interp,
					    s, fn, FitsFile::FLUSH, 1);
    loadDone(cc->load(SOCKET, fn, img));
    break;
  }
}

void Frame::loadArrSocketGZCmd(int s, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadArrSocketGZCmd(s, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageArrSocketGZ(cc, interp,
					      s, fn, FitsFile::FLUSH, 1);
    loadDone(cc->load(SOCKETGZ, fn, img));
    break;
  }
}

void Frame::loadArrVarCmd(const char* ch, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadArrVarCmd(ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageArrVar(cc, interp, ch, fn, 1);
    loadDone(cc->load(VAR, fn, img));
    break;
  }
}

// *** NRRD ***

void Frame::loadNRRDAllocCmd(const char* ch, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadNRRDAllocCmd(ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageNRRDAlloc(cc, interp, 
					    ch, fn, FitsFile::NOFLUSH, 1);
    loadDone(cc->load(ALLOC, fn, img));
    break;
  }
}

void Frame::loadNRRDChannelCmd(const char* ch, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadNRRDChannelCmd(ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageNRRDChannel(cc, interp, 
					      ch, fn, FitsFile::NOFLUSH, 1);
    loadDone(cc->load(CHANNEL, fn, img));
    break;
  }
}

void Frame::loadNRRDMMapCmd(const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadNRRDMMapCmd(fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageNRRDMMap(cc, interp, fn, 1);
    loadDone(cc->load(MMAP, fn, img));
    break;
  }
}

void Frame::loadNRRDShareCmd(ShmType stype, int id, const char* fn,
			     LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadNRRDShareCmd(stype, id, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageNRRDShare(cc, interp, stype, id, fn, 1);
    loadDone(cc->load(SHARE, fn, img));
    break;
  }
}

void Frame::loadNRRDSocketCmd(int s, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadNRRDSocketCmd(s, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageNRRDSocket(cc, interp, 
					     s, fn, FitsFile::FLUSH, 1);
    loadDone(cc->load(SOCKET, fn, img));
    break;
  }
}

void Frame::loadNRRDVarCmd(const char* ch, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadNRRDVarCmd(ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageNRRDVar(cc, interp, ch, fn, 1);
    loadDone(cc->load(VAR, fn, img));
    break;
  }
}

// *** Mosaic Image ***

void Frame::loadMosaicImageAllocCmd(MosaicType type, Coord::CoordSystem sys,
				    const char* ch, const char* fn,
				    LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicImageAllocCmd(type, sys, ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageMosaicAlloc(cc, interp,
					      ch, fn, FitsFile::NOFLUSH, 1);
    loadDone(cc->loadMosaicImage(ALLOC, fn, img, type, sys));
    break;
  }

}

void Frame::loadMosaicImageAllocGZCmd(MosaicType type, Coord::CoordSystem sys,
				      const char* ch, const char* fn,
				      LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicImageAllocGZCmd(type, sys, ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageMosaicAllocGZ(cc, interp,
						ch, fn, FitsFile::NOFLUSH, 1);
    loadDone(cc->loadMosaicImage(ALLOCGZ, fn, img, type, sys));
    break;
  }

}

void Frame::loadMosaicImageChannelCmd(MosaicType type, Coord::CoordSystem sys,
				      const char* ch, const char* fn,
				      LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicImageChannelCmd(type, sys, ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageMosaicChannel(cc, interp,
					      ch, fn, FitsFile::NOFLUSH, 1);
    loadDone(cc->loadMosaicImage(CHANNEL, fn, img, type, sys));
    break;
  }
}

void Frame::loadMosaicImageMMapCmd(MosaicType type, Coord::CoordSystem sys,
				   const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicImageMMapCmd(type, sys, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageMosaicMMap(cc, interp, fn, 1);
    loadDone(cc->loadMosaicImage(MMAP, fn, img, type, sys));
    break;
  }
}

void Frame::loadMosaicImageMMapIncrCmd(MosaicType type, Coord::CoordSystem sys,
				       const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicImageMMapIncrCmd(type, sys, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageMosaicMMapIncr(cc, interp, fn, 1);
    loadDone(cc->loadMosaicImage(MMAPINCR, fn, img, type, sys));
    break;
  }

}

void Frame::loadMosaicImageShareCmd(MosaicType type, Coord::CoordSystem sys,
				    ShmType stype, int id, const char* fn,
				    LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicImageShareCmd(type, sys, stype, id, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageMosaicShare(cc, interp, stype, id, fn, 1);
    loadDone(cc->loadMosaicImage(SHARE, fn, img, type, sys));
    break;
  }

}

void Frame::loadMosaicImageSocketCmd(MosaicType type, Coord::CoordSystem sys,
				     int s, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicImageSocketCmd(type, sys, s, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageMosaicSocket(cc, interp,
					       s, fn, FitsFile::NOFLUSH, 1);
    loadDone(cc->loadMosaicImage(SOCKET, fn, img, type, sys));
    break;
  }
}

void Frame::loadMosaicImageSocketGZCmd(MosaicType type, Coord::CoordSystem sys,
				       int s, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicImageSocketGZCmd(type, sys, s, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageMosaicSocketGZ(cc, interp,
						 s, fn, FitsFile::NOFLUSH, 1);
    loadDone(cc->loadMosaicImage(SOCKETGZ, fn, img, type, sys));
    break;
  }
}

void Frame::loadMosaicImageVarCmd(MosaicType type, Coord::CoordSystem sys,
				  const char* ch, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicImageVarCmd(type, sys, ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageMosaicVar(cc, interp, ch, fn, 1);
    loadDone(cc->loadMosaicImage(VAR, fn, img, type, sys));
    break;
  }
}

// *** Mosaic Image WFPC2 ***

void Frame::loadMosaicImageWFPC2AllocCmd(const char* ch, const char* fn,
					LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicImageWFPC2AllocCmd(ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsAlloc(cc, interp,
					    ch, fn, FitsFile::NOFLUSH, 1);
    loadDone(cc->loadMosaicWFPC2(ALLOC, fn, img));
    break;
  }

}

void Frame::loadMosaicImageWFPC2AllocGZCmd(const char* ch, const char* fn,
					  LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicImageWFPC2AllocGZCmd(ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsAllocGZ(cc, interp, ch, fn,
					      FitsFile::NOFLUSH, 1);
    loadDone(cc->loadMosaicWFPC2(ALLOCGZ, fn, img));
    break;
  }
}

void Frame::loadMosaicImageWFPC2ChannelCmd(const char* ch, const char* fn,
					  LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicImageWFPC2ChannelCmd(ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsChannel(cc, interp, ch, fn, 
					      FitsFile::NOFLUSH, 1);
    loadDone(cc->loadMosaicWFPC2(CHANNEL, fn, img));
    break;
  }
}

void Frame::loadMosaicImageWFPC2MMapCmd(const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicImageWFPC2MMapCmd(fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsMMap(cc, interp, fn, 1);
    loadDone(cc->loadMosaicWFPC2(MMAP, fn, img));
    break;
  }
}

void Frame::loadMosaicImageWFPC2MMapIncrCmd(const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicImageWFPC2MMapIncrCmd(fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsMMapIncr(cc, interp, fn, 1);
    loadDone(cc->loadMosaicWFPC2(MMAPINCR, fn, img));
    break;
  }
}

void Frame::loadMosaicImageWFPC2ShareCmd(ShmType stype, int id, const char* fn,
					LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicImageWFPC2ShareCmd(stype, id, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsShare(cc, interp, stype, id, fn, 1);
    loadDone(cc->loadMosaicWFPC2(SHARE, fn, img));
    break;
  }
}

void Frame::loadMosaicImageWFPC2SocketCmd(int s, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicImageWFPC2SocketCmd(s, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsSocket(cc, interp, s, fn,
					     FitsFile::NOFLUSH, 1);
    loadDone(cc->loadMosaicWFPC2(SOCKET, fn, img));
    break;
  }
}

void Frame::loadMosaicImageWFPC2SocketGZCmd(int s, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicImageWFPC2SocketGZCmd(s, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsSocketGZ(cc, interp, s, fn,
					       FitsFile::NOFLUSH, 1);
    loadDone(cc->loadMosaicWFPC2(SOCKETGZ, fn, img));
    break;
  }
}

void Frame::loadMosaicImageWFPC2VarCmd(const char* ch, const char* fn,
				      LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicImageWFPC2VarCmd(ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsVar(cc, interp, ch, fn, 1);
    loadDone(cc->loadMosaicWFPC2(VAR, fn, img));
    break;
  }
}

// *** Mosaic ***

void Frame::loadMosaicAllocCmd(MosaicType type, Coord::CoordSystem sys, 
			      const char* ch, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicAllocCmd(type, sys, ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsAlloc(cc, interp, ch, fn,
					    FitsFile::NOFLUSH, 1);
    loadDone(cc->loadMosaic(ALLOC, fn, img, type, sys));
    break;
  }
}

void Frame::loadMosaicAllocGZCmd(MosaicType type, Coord::CoordSystem sys, 
				const char* ch, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicAllocGZCmd(type, sys, ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsAllocGZ(cc, interp, ch, fn,
					      FitsFile::NOFLUSH, 1);
    loadDone(cc->loadMosaic(ALLOCGZ, fn, img, type, sys));
    break;
  }
}

void Frame::loadMosaicChannelCmd(MosaicType type, Coord::CoordSystem sys,
				const char* ch, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicChannelCmd(type, sys, ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsChannel(cc, interp, ch, fn,
					      FitsFile::NOFLUSH, 1);
    loadDone(cc->loadMosaic(CHANNEL, fn, img, type, sys));
    break;
  }
}

void Frame::loadMosaicMMapCmd(MosaicType type, Coord::CoordSystem sys,
			     const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicMMapCmd(type, sys, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsMMap(cc, interp, fn, 1);
    loadDone(cc->loadMosaic(MMAP, fn, img, type, sys));
    break;
  }
}

void Frame::loadMosaicSMMapCmd(MosaicType type, Coord::CoordSystem sys,
			      const char* hdr, const char* fn, 
			      LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicSMMapCmd(type, sys, hdr, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsSMMap(cc, interp, hdr, fn, 1);
    loadDone(cc->loadMosaic(MMAP, fn, img, type, sys));
    break;
  }
}

void Frame::loadMosaicMMapIncrCmd(MosaicType type, Coord::CoordSystem sys,
				 const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicMMapIncrCmd(type, sys, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsMMapIncr(cc, interp, fn, 1);
    loadDone(cc->loadMosaic(MMAPINCR, fn, img, type, sys));
    break;
  }
}

void Frame::loadMosaicShareCmd(MosaicType type, Coord::CoordSystem sys,
			      ShmType stype, int id, const char* fn, 
			      LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicShareCmd(type, sys, stype, id, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsShare(cc, interp, stype, id, fn, 1);
    loadDone(cc->loadMosaic(SHARE, fn, img, type, sys));
    break;
  }
}

void Frame::loadMosaicSShareCmd(MosaicType type, Coord::CoordSystem sys,
			       ShmType stype, int hdr, int id, const char* fn, 
			       LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicSShareCmd(type, sys, stype, hdr, id, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsSShare(cc, interp, stype, hdr, id, fn, 1);
    loadDone(cc->loadMosaic(SSHARE, fn, img, type, sys));
    break;
  }
}

void Frame::loadMosaicSocketCmd(MosaicType type, Coord::CoordSystem sys,
			       int s, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicSocketCmd(type, sys, s, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsSocket(cc, interp, s, fn,
					     FitsFile::FLUSH, 1);
    loadDone(cc->loadMosaic(SOCKET, fn, img, type, sys));
    break;
  }
}

void Frame::loadMosaicSocketGZCmd(MosaicType type, Coord::CoordSystem sys,
				 int s, const char* fn, LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicSocketGZCmd(type, sys, s, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsSocketGZ(cc, interp, s, fn,
					       FitsFile::FLUSH, 1);
    loadDone(cc->loadMosaic(SOCKETGZ, fn, img, type, sys));
    break;
  }
}

void Frame::loadMosaicVarCmd(MosaicType type, Coord::CoordSystem sys,
			    const char* ch, const char* fn, 
			    LayerType ll)
{
  switch (ll) {
  case IMG:
    Base::loadMosaicVarCmd(type, sys, ch, fn, ll);
    break;
  case MASK:
    Context* cc = loadMask();
    if (!cc)
      return;
    FitsImage* img = new FitsImageFitsVar(cc, interp, ch, fn, 1);
    loadDone(cc->loadMosaic(VAR, fn, img, type, sys));
    break;
  }
}

// Support

Context* Frame::loadMask()
{
  if (!keyContext->fits) {
    result = TCL_ERROR;
    return NULL;
  }
  FitsMask* msk =
    new FitsMask(this, maskColorName, maskMark, maskLow, maskHigh);
  mask.append(msk);
  return msk->context();
}

void Frame::loadDone(int rr)
{
  if (rr)
    updateMaskMatrices();
  Base::loadDone(rr);
}
