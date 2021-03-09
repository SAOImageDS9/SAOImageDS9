// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "context.h"
#include "fitsimage.h"
#include "fvcontour.h"
#include "convolve.h"

#include "alloc.h"
#include "allocgz.h"
#include "channel.h"
#include "colorscale.h"
#include "mmap.h"
#include "mmapincr.h"
#include "share.h"
#include "sshare.h"
#include "socket.h"
#include "socketgz.h"
#include "var.h"
#include "head.h"

extern "C" {
#include "tkbltVector.h"
}

// Contour Parser Stuff
#undef yyFlexLexer
#define yyFlexLexer ctFlexLexer
#include <FlexLexer.h>

void* ctlval;
ctFlexLexer* ctlexx;
extern int ctparse(Context*, ctFlexLexer*);

int ctlex(void* vval, ctFlexLexer* ll)
{
  ctlval = vval;
  ctlexx = ll;
  return ll ? ll->yylex() : 0;
}

void cterror(Context* ct, ctFlexLexer* ll, const char* mm)
{
  Base* fr = ct->parent_;
  fr->error(mm);
  const char* cmd = ll ? ll->YYText() : (const char*)NULL;
  if (cmd && cmd[0] != '\n') {
    fr->error(": ");
    fr->error(cmd);
  }
}

typedef struct {
  char* dest;
  char** sjv;
  int ww;
  int hh;
  int dd;
  int bz;
  int mm;
} t_reorder_arg;

ostream& operator<<(ostream& ss, const FitsZBound& bb)
{
  ss << bb.zmin << ' ' << bb.zmax;
  return ss;
}

Context::Context()
{
  parent_ = NULL;

  bfits_ =NULL;
  fits =NULL;
  cfits =NULL;

  shareWCS_ =0;

  manageAxes_ =0;
  axesOrder_ =123;

  loadInit(0, Base::NOMOSAIC, Coord::WCS);

  binFunction_ = FitsHist::SUM;
  binFactor_ = Vector(1,1);
  binBufferSize_ = 1024;
  binDepth_ = 1;

  blockFactor_ = Vector(1,1);

  doSmooth_ =0;
  smoothFunction_ =GAUSSIAN;
  smoothRadius_ =3;
  smoothRadiusMinor_ =3;
  smoothSigma_ =1.5;
  smoothSigmaMinor_ =1.5;
  smoothAngle_ =0;

  thread_ =NULL;

  contourWCSSystem_ = Coord::WCS;
  contourWCSSkyFrame_ = Coord::FK5;
}

Context::~Context()
{
}

void Context::analysis()
{
  if (DebugPerf)
    cerr << "Context::analysis()" << endl;

  if (thread_)
    delete [] thread_;
  thread_ = new pthread_t[parent_->nthreads_];
  t_smooth_arg* targ = new t_smooth_arg[parent_->nthreads_];

  int cnt =0;
  FitsImage* ptr = fits;
  while (ptr) {
    FitsImage* sptr = ptr;
    while (sptr) {
      sptr->analysis(doSmooth_, &thread_[cnt], &targ[cnt]);

      cnt++;
      if (cnt == parent_->nthreads_) {
	if (doSmooth_) {
	  for (int ii=0; ii<cnt; ii++) {
	    int rr = pthread_join(thread_[ii], NULL);
	    if (rr)
	      internalError("Unable to Join Thread");

	    if (targ[ii].kernel)
	      delete [] targ[ii].kernel;
	    if (targ[ii].src)
	      delete [] targ[ii].src;
	  }
	}
	cnt =0;
      }
      sptr = sptr->nextSlice();
    }
    ptr = ptr->nextMosaic();
  }

  if (doSmooth_) {
    for (int ii=0; ii<cnt; ii++) {
      int rr = pthread_join(thread_[ii], NULL);
      if (rr)
	internalError("Unable to Join Thread");

      if (targ[ii].kernel)
	delete [] targ[ii].kernel;
      if (targ[ii].src)
	delete [] targ[ii].src;
    }
  }

  delete [] targ;
  delete [] thread_;
  thread_ =NULL;

  clearHist();
  updateClip();
}

Matrix Context::bin(const Vector& vv)
{
  Matrix mm;
  if (fits) {
    mm = fits->bin(vv);
    binFinish();
  }
  return mm;
}

Matrix Context::binCenter()
{
  Matrix mm;
  if (fits) {
    mm = fits->binCenter();
    binFinish();
  }
  return mm;
}

Matrix Context::binCursor()
{
  Matrix mm;
  if (fits) {
    mm = fits->binCursor();
    binFinish();
  }
  return mm;
}

void Context::binFinish()
{
  if (DebugPerf)
    cerr << "Context::binFinish()" << endl;

  if (!fits->isHist())
    return;

  // delete any previous slices
  {
    FitsImage* ptr = fits->nextSlice();
    fits->setNextSlice(NULL);
    while (ptr) {
      FitsImage* tmp = ptr->nextSlice();
      delete ptr;
      ptr = tmp;
    }
  }

  // finish bin
  loadInit(1, Base::NOMOSAIC,Coord::WCS);
  cfits = fits;

  // bin data cube
  int bd = binDepth_;
  if (bd > 1) {
    naxis_[2] =1; // first
    shareWCS_ =1;
    FitsImage* ptr = fits;
    for (int ii=1; ii<bd; ii++) {
      FitsImage* next = new FitsImageFitsNextHist(this, parent_->interp, fits, ptr->baseFile(), ii+1);
      if (next->isValid()) {
	ptr->setNextSlice(next);
	ptr = next;
	naxis_[2]++;
      }
      else {
	delete next;
	break;
      }
    }
  }

  // params in DATA coords 0-n
  iparams.set(0,naxis_[2]);
  cparams.set(0,naxis_[2]);

  resetSecMode();
  loadFinish();
}

int Context::block()
{
  if (DebugPerf)
    cerr << "Context::block()" << endl;

  int doBlock = (blockFactor_[0] != 1 && blockFactor_[1] != 1) ? 1 : 0;
  int rr =1;

  // primary
  if (thread_)
    delete [] thread_;
  thread_ = new pthread_t[parent_->nthreads_];
  {
    int cnt =0;
    FitsImage* ptr = fits;
    while (ptr) {
      FitsImage* sptr = ptr;
      while (sptr) {
	sptr->block(&thread_[cnt]);
	cnt++;
	if (cnt == parent_->nthreads_) {
	  if (doBlock) {
	    for (int ii=0; ii<cnt; ii++) {
	      int tt = pthread_join(thread_[ii], NULL);
	      if (tt) {
		internalError("Unable to Join Thread");
		rr =0;
	      }
	    }
	  }
	  cnt =0;
	}
	sptr = sptr->nextSlice();
      }
      ptr = ptr->nextMosaic();
    }

    if (doBlock) {
      for (int ii=0; ii<cnt; ii++) {
	int tt = pthread_join(thread_[ii], NULL);
	if (tt) {
	  internalError("Unable to Join Thread");
	  rr =0;
	}
      }
    }
  }
  delete [] thread_;
  thread_ =NULL;

  resetSecMode();

  switch (mosaicType) {
  case Base::IRAF:
  case Base::WCSMOSAIC:
    rr &= processMosaicKeywords(fits);
    break;
  default:
    break;
  }

  return rr;
}

void Context::bltHist(char* xname, char* yname, int num)
{
  if (!fits)
    return;

  switch (frScale.clipScope()) {
  case FrScale::GLOBAL:
    frScale.histogram(fits,num);
    break;
  case FrScale::LOCAL:
    frScale.histogram(cfits,num);
    break;
  }

  int nn = num+1;
  double* x = frScale.histogramX();
  double* y = frScale.histogramY();

  Blt_Vector* xx;
  Blt_GetVector(parent_->interp, xname, &xx);
  Blt_ResetVector(xx, x, nn, nn*sizeof(double), TCL_VOLATILE);

  Blt_Vector* yy;
  Blt_GetVector(parent_->interp, yname, &yy);
  Blt_ResetVector(yy, y, nn, nn*sizeof(double), TCL_VOLATILE);
}

int Context::calcSlice()
{
  int cnt =1;
  for (int jj=3; jj<FTY_MAXAXES; jj++) {
    int cc =1;
    for (int ii=2; ii<jj; ii++)
      cc *= naxis_[ii];
    cnt += (slice_[jj]-1) * cc;
  }

  return cnt;
}

void Context::clearHist()
{
  frScale.clearHistogram();
  frScale.clearHistequ();
}

void Context::contourAppendAux(ContourLevel* ct)
{
  auxcontours_.append(ct);
  hasAuxContour_ =1;
}

void Context::contourCreateFV(const char* color, int width, int dash,
			      FVContour::Method method, int numlevel, 
			      int smooth, 
			      FrScale::ColorScaleType colorScaleType,
			      float expo,
			      FrScale::ClipMode clipMode, float autoCutPer,
			      FrScale::ClipScope clipScope,
			      double low, double high, const char* level)
{
  FrScale fr = frScale;
  fr.setColorScaleType(colorScaleType);
  fr.setExpo(expo);
  fr.setClipMode(clipMode);
  fr.setAutoCutPer(autoCutPer);
  fr.setClipScope(clipScope);
  fr.setLow(low);
  fr.setHigh(high);

  FitsImage* ptr = isMosaic() ? fits : cfits;
  if (!ptr)
    return;
  
  fvcontour_.create(parent_, ptr, &fr,
		    color, width, dash, method, numlevel, smooth, level);
  contourThreadFV(ptr);
  hasContour_ =1;
}

void Context::contourUpdateFV()
{
  if (!cfits)
    return;

  if (!hasContour_)
    return;

  switch (fvcontour_.frScale()->clipScope()) {
  case FrScale::GLOBAL:
    break;
  case FrScale::LOCAL:
    updateClip(fvcontour_.frScale());
    break;
  }

  FitsImage* ptr = isMosaic() ? fits : cfits;
  if (!ptr)
    return;

  fvcontour_.update(ptr);
  contourThreadFV(ptr);
}

void Context::contourThreadFV(FitsImage* ptr)
{
  if (thread_)
    delete [] thread_;
  thread_ = new pthread_t[parent_->nthreads_];
  t_fvcontour_arg* targ = new t_fvcontour_arg[parent_->nthreads_];

  int cnt =0;
  while (ptr) {
    fvcontour_.append(ptr, &thread_[cnt], &targ[cnt]);

    cnt++;
    if (cnt == parent_->nthreads_) {
      for (int ii=0; ii<cnt; ii++) {
	int rr = pthread_join(thread_[ii], NULL);
	if (rr)
	  internalError("Unable to Join Thread");

	fvcontour_.append(targ[ii].lcl);

	if (targ[ii].contour)
	  delete [] targ[ii].contour;
	if (targ[ii].lcl)
	  delete targ[ii].lcl;
	if (targ[ii].src)
	  delete [] targ[ii].src;
	if (targ[ii].dest)
	  delete [] targ[ii].dest;
      }
      cnt =0;
    }

    ptr = ptr->nextMosaic();
  }


  for (int ii=0; ii<cnt; ii++) {
    int rr = pthread_join(thread_[ii], NULL);
    if (rr)
      internalError("Unable to Join Thread");

    fvcontour_.append(targ[ii].lcl);

    if (targ[ii].contour)
      delete [] targ[ii].contour;
    if (targ[ii].lcl)
      delete targ[ii].lcl;
    if (targ[ii].src)
      delete [] targ[ii].src;
    if (targ[ii].dest)
      delete [] targ[ii].dest;
  }
  
  delete [] targ;
  delete [] thread_;
  thread_ =NULL;
}

void Context::contourDeleteFV()
{
  fvcontour_.lcontourlevel().deleteAll();
  hasContour_ =0;
}

void Context::contourDeleteAux()
{
  auxcontours_.deleteAll();
  hasAuxContour_ =0;
}

void Context::contourListFV(ostream& str, Coord::CoordSystem sys,
			    Coord::SkyFrame sky)
{
  if (!cfits)
    return;

  if (!hasContour_)
    return;

  contourList(str, sys, sky, fvcontour_.lcontourlevel());
}

void Context::contourListAux(ostream& str, Coord::CoordSystem sys, 
			     Coord::SkyFrame sky)
{
  if (!cfits)
    return;

  if (!hasAuxContour_)
    return;

  contourList(str, sys, sky, auxcontours_);
}

void Context::contourList(ostream& str, Coord::CoordSystem sys,
			  Coord::SkyFrame sky, List<ContourLevel>& cl)
{
  if (cl.head()) {
    str << "# Contour file format: DS9 version 7.5" << endl;

    // just in case
    cl.head();
    str << "# levels=( ";
    do
      str << cl.current()->level() << ' ';
    while (cl.next());
    str << ')' << endl;
    // reset
    cl.head();

    str << "global color=green width=1 dash=no dashlist=8 3" << endl;
    coord.listCoordSystem(str, sys, sky, cfits);
    str << endl;
    do
      cl.current()->list(str, cfits, sys, sky);
    while (cl.next());
  }
}

void Context::contourLoadAux(istream& str)
{
  if (!cfits)
    return;

  contourWCSSystem_ = parent_->getWCSSystem();
  contourWCSSkyFrame_ = parent_->getWCSSkyFrame();

  ctFlexLexer* ll = new ctFlexLexer(&str);
  ctparse(this, ll);
  delete ll;
}

void Context::contourLoadAux(istream& str, const char* color, 
			     int width, int dash)
{
  if (!cfits)
    return;

  // remember where we are
  int cnt = auxcontours_.count();

  contourWCSSystem_ = parent_->getWCSSystem();
  contourWCSSkyFrame_ = parent_->getWCSSkyFrame();

  ctFlexLexer* ll = new ctFlexLexer(&str);
  ctparse(this, ll);
  delete ll;

  // override line attributes
  if (auxcontours_.head()) {
    for (int ii=0; ii<cnt; ii++)
      auxcontours_.next();

    do {
      auxcontours_.current()->setColor(color);
      auxcontours_.current()->setLineWidth(width);
      auxcontours_.current()->setDash(dash);
    }
    while (auxcontours_.next());
  }
}

// backward compatibility
void Context::contourLoadAux(istream& str, 
			     Coord::CoordSystem sys, Coord::SkyFrame sky,
			     const char* color, int width, int dash)
{
  // remember where we are
  int cnt = auxcontours_.count();

  contourWCSSystem_ = sys;
  contourWCSSkyFrame_ = sky;

  ctFlexLexer* ll = new ctFlexLexer(&str);
  ctparse(this, ll);
  delete ll;

  // override line attributes
  if (auxcontours_.head()) {
    for (int ii=0; ii<cnt; ii++)
      auxcontours_.next();

    do {
      auxcontours_.current()->setColor(color);
      auxcontours_.current()->setLineWidth(width);
      auxcontours_.current()->setDash(dash);
    }
    while (auxcontours_.next());
  }
}

void Context::contourPS(PSColorSpace cs)
{
  if (!cfits)
    return;
  
  // render back to front
  // aux contours
  if (hasAuxContour_) {
    if (auxcontours_.tail())
      do
	auxcontours_.current()->ps(cs);
      while (auxcontours_.previous());
  }

  if (hasContour_) {
    List<ContourLevel>& cc = fvcontour_.lcontourlevel();
    if (cc.head())
      do
	cc.current()->ps(cs);
      while (cc.next());
  }
}

void Context::contourX11(Pixmap pm, Coord::InternalSystem sys, const BBox& bbox)
{
  if (!cfits)
    return;
  
  // render back to front
  // aux contours
  if (hasAuxContour_) {
    if (auxcontours_.tail())
      do
	auxcontours_.current()->render(pm, sys, bbox);
      while (auxcontours_.previous());
  }

  if (hasContour_) {
    List<ContourLevel>& cc = fvcontour_.lcontourlevel();
    if (cc.head())
      do
	cc.current()->render(pm, sys, bbox);
      while (cc.next());
  }
}

#ifdef __WIN32
void Context::contourWin32()
{
  if (!cfits)
    return;
  
  // render back to front
  // aux contours
  if (hasAuxContour_) {
    if (auxcontours_.tail())
      do
	auxcontours_.current()->win32();
      while (auxcontours_.previous());
  }

  if (hasContour_) {
    List<ContourLevel>& cc = fvcontour_.lcontourlevel();
    if (cc.head())
      do
	cc.current()->win32();
      while (cc.next());
  }
}
#endif

int Context::fitsCount()
{
  int cnt =1;
  for (int ii=2; ii<FTY_MAXAXES; ii++)
    if (naxis_[ii])
      cnt *= naxis_[ii];
  return mosaicCount_ * cnt;
}

void Context::deleteFits(FitsImage* img)
{
  FitsImage* ptr = img;
  while (ptr) {
    FitsImage* sptr = ptr->nextSlice();
    while (sptr) {
      FitsImage* stmp = sptr->nextSlice();
      delete sptr;
      sptr = stmp;
    }

    FitsImage* tmp = ptr->nextMosaic();
    delete ptr;
    ptr = tmp;
  }
}

Vector Context::getClip()
{
  return Vector(frScale.low(), frScale.high());
}

Vector Context::getClip(FrScale::ClipMode cm, FrScale::ClipScope sc, float ac)
{
  if (DebugPerf)
    cerr << "Context::getClip()" << endl;

  // we already have the scale?
  if (frScale.clipMode() == cm && 
      frScale.clipScope() == sc && 
      frScale.autoCutPer() == ac)
    return Vector(frScale.low(),frScale.high());

  FrScale cl = frScale;
  cl.setClipMode(cm);
  cl.setClipScope(sc);
  cl.setAutoCutPer(ac);
  updateClip(&cl);

  // now reset
  updateClip(&frScale);

  return Vector(cl.low(),cl.high());
}

FitsZBound* Context::getDataParams(FrScale::SecMode which)
{
  // params in DATA coords 0-n
  switch (which) {
  case FrScale::IMGSEC:
  case FrScale::DATASEC:
    return &iparams;
  case FrScale::CROPSEC:
    return &cparams;
  }
}

Vector Context::getMinMax()
{
  return Vector(frScale.min(), frScale.max());
}

int Context::load(Base::MemType which, const char* fn, 
		  FitsImage* img)
{
  if (!img || !img->isValid()) {
    if (img)
      delete img;
    
    unload();
    return 0;
  }

  bfits_ = img;
  loadInit(1, Base::NOMOSAIC,Coord::WCS);
  for (int ii=2; ii<FTY_MAXAXES; ii++) {
    int nn = img->naxis(ii);
    baxis_[ii] = nn ? nn : 1;
  }

  // params in DATA coords 0-n
  // do it here because of fits section
  iparams.set(0,baxis_[2]);
  cparams.set(0,baxis_[2]);

  if (img->isHist())
    which = Base::HIST;
  else if (img->isPost())
    which = Base::POST;

  if (img->nhdu() > 1)
    shareWCS_ =1;

  FitsImage* ptr = img;
  for (int ii=1; ii<img->nhdu(); ii++) {
    FitsImage* next = NULL;
    switch (which) {
    case Base::ALLOC:
      next = new FitsImageFitsNextAlloc(this, parent_->interp, fn, ptr->fitsFile(), ii+1);
      break;
    case Base::ALLOCGZ:
      next = new FitsImageFitsNextAllocGZ(this, parent_->interp, fn, ptr->fitsFile(), ii+1);
      break;
    case Base::CHANNEL:
      next = new FitsImageFitsNextChannel(this, parent_->interp, fn, ptr->fitsFile(), ii+1);
      break;
    case Base::MMAP:
      next = new FitsImageFitsNextMMap(this, parent_->interp, fn, ptr->fitsFile(), ii+1);
      break;
    case Base::SMMAP:
      next = new FitsImageFitsNextSMMap(this, parent_->interp, fn, ptr->fitsFile(), ii+1);
      break;
    case Base::MMAPINCR:
      next = new FitsImageFitsNextMMapIncr(this, parent_->interp, fn, ptr->fitsFile(), ii+1);
      break;
    case Base::SHARE:
      next = new FitsImageFitsNextShare(this, parent_->interp, fn, ptr->fitsFile(), ii+1);
      break;
    case Base::SSHARE:
      next = new FitsImageFitsNextSShare(this, parent_->interp, fn, ptr->fitsFile(), ii+1);
      break;
    case Base::SOCKET:
      next = new FitsImageFitsNextSocket(this, parent_->interp, fn, ptr->fitsFile(), ii+1);
      break;
    case Base::SOCKETGZ:
      next = new FitsImageFitsNextSocketGZ(this, parent_->interp, fn, ptr->fitsFile(), ii+1);
      break;
    case Base::VAR:
      next = new FitsImageFitsNextVar(this, parent_->interp, fn, ptr->fitsFile(), ii+1);
      break;
    case Base::POST:
      next = new FitsImageFitsNextPost(this, parent_->interp, img, ptr->baseFile(), ii+1);
      break;
    case Base::PHOTO:
      next = new FitsImagePhotoCubeNext(this, parent_->interp, fn, ptr->baseFile(), ii+1);
      break;
    default:
      // na
      break;
    }

    if (next->isValid()) {
      ptr->setNextSlice(next);
      ptr = next;
    }
    else {
      delete next;
      break;
    }
  }

  // finish up
  img->close();
  loadFinish();

  return 1;
}

int Context::loadExtCube(Base::MemType which, const char* fn, FitsImage* img)
{
  if (!img || !img->isValid()) {
    if (img)
      delete img;
    
    unload();
    return 0;
  }

  bfits_ = img;
  loadInit(1, Base::NOMOSAIC,Coord::WCS);

  // get the rest
  FitsImage* ptr = img;
  FitsImage* mptr = ptr;
  FitsImage* tmp =NULL;
  while (1) {
    FitsImage* next = NULL;
    switch (which) {
    case Base::ALLOC:
      next = new FitsImageMosaicNextAlloc(this, parent_->interp, fn, ptr->fitsFile(), FitsFile::NOFLUSH ,1);
      break;
    case Base::ALLOCGZ:
      next = new FitsImageMosaicNextAllocGZ(this, parent_->interp,fn,ptr->fitsFile(), FitsFile::NOFLUSH ,1);
      break;
    case Base::CHANNEL:
      next = new FitsImageMosaicNextChannel(this, parent_->interp,fn,ptr->fitsFile(), FitsFile::NOFLUSH, 1);
      break;
    case Base::MMAP:
      next = new FitsImageMosaicNextMMap(this, parent_->interp, fn, ptr->fitsFile(), 1);
      break;
    case Base::MMAPINCR:
      next = new FitsImageMosaicNextMMapIncr(this, parent_->interp, fn, ptr->fitsFile(), 1);
      break;
    case Base::SHARE:
      next = new FitsImageMosaicNextShare(this, parent_->interp, fn, ptr->fitsFile(), 1);
      break;
    case Base::SOCKET:
      next = new FitsImageMosaicNextSocket(this, parent_->interp, fn,ptr->fitsFile(), FitsFile::FLUSH,1 );
      break;
    case Base::SOCKETGZ:
      next =new FitsImageMosaicNextSocketGZ(this, parent_->interp,fn,ptr->fitsFile(), FitsFile::FLUSH,1 );
      break;
    case Base::VAR:
      next = new FitsImageMosaicNextVar(this, parent_->interp, fn, ptr->fitsFile(), 1);
      break;
    default:
      // na
      break;
    }

    // if previous was a unknown table, delete now, we're done with it
    if (tmp) {
      delete tmp;
      tmp =NULL;
    }

    // first check if fits_ is a known extension, aka we loaded something
    if (next->isImage() || next->isTable()) {
      // now check to see if it resolved into an image, no event tables
      // since any table can be a valid event table
      if (next->isValid() && !next->isHist()) {
	mptr->setNextSlice(next);
	ptr = next;
	mptr = ptr;
	baxis_[2]++;
      }
      else {
	// must be a unknown table, just ignore, and delete next time thru
	ptr = next;
	tmp = next;
      }
    }
    else {
      delete next;
      break;
    }
  }

  // finish up
  img->close();

  // params in DATA coords 0-n
  // must wait untill all loaded
  iparams.set(0,baxis_[2]);
  cparams.set(0,baxis_[2]);

  loadFinish();
  return 1;
}

void Context::loadInit(int cnt, Base::MosaicType type, Coord::CoordSystem sys)
{
  shareWCS_ =0;

  mosaicCount_ = cnt;
  mosaicType = type;
  mosaicSystem = sys;
  for (int ii=0; ii<FTY_MAXAXES; ii++) {
    baxis_[ii] =1;
    slice_[ii] =1;
  }
  naxis_ = baxis_;

  // params in DATA coords 0-n
  iparams.set(0,1);
  cparams.set(0,1);
}

int Context::loadMosaic(Base::MemType which, const char* fn, 
			FitsImage* img, Base::MosaicType type,
			Coord::CoordSystem sys)
{
  if (!img || !img->isValid()) {
    if (img)
      delete img;
    return 0;
  }

  if (bfits_) {
    FitsImage* ptr = bfits_;
    while (ptr && ptr->nextMosaic())
      ptr = ptr->nextMosaic();
    ptr->setNextMosaic(img);
    mosaicCount_++;
  }
  else {
    bfits_ = img;
    loadInit(1, type,sys);
    for (int ii=2; ii<FTY_MAXAXES; ii++) {
      int nn = img->naxis(ii);
      baxis_[ii] = nn ? nn : 1;
    }

    // params in DATA coords 0-n
    // do it here because of fits section
    iparams.set(0,baxis_[2]);
    cparams.set(0,baxis_[2]);
  }

  if (img->isPost())
    which = Base::POST;

  // get the rest of slices
  if (img->nhdu() > 1)
    shareWCS_ =1;

  FitsImage* sptr = img;
  for (int ii=1; ii<img->nhdu(); ii++) {
    FitsImage* next = NULL;
    switch (which) {
    case Base::ALLOC:
      next = new FitsImageFitsNextAlloc(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::ALLOCGZ:
      next = new FitsImageFitsNextAllocGZ(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::CHANNEL:
      next = new FitsImageFitsNextChannel(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::MMAP:
      next = new FitsImageFitsNextMMap(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::SMMAP:
      next = new FitsImageFitsNextSMMap(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::MMAPINCR:
      next = new FitsImageFitsNextMMapIncr(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::SHARE:
      next = new FitsImageFitsNextShare(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::SSHARE:
      next = new FitsImageFitsNextSShare(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::SOCKET:
      next = new FitsImageFitsNextSocket(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::SOCKETGZ:
      next = new FitsImageFitsNextSocketGZ(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::VAR:
      next = new FitsImageFitsNextVar(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::POST:
      next = new FitsImageFitsNextPost(this, parent_->interp, img, sptr->baseFile(), ii+1);
      break;
    case Base::PHOTO:
      next = new FitsImagePhotoCubeNext(this, parent_->interp, fn, sptr->baseFile(), ii+1);
      break;
    default:
      // na
      break;
    }

    if (next->isValid()) {
      sptr->setNextSlice(next);
      sptr = next;
    }
    else {
      delete next;
      break;
    }
  }

  // finish up
  img->close();

  loadFinishMosaic(fits);
  if (!loadFinish()) {
    unload();
    return 0;
  }

  return 1;
}

int Context::loadMosaicImage(Base::MemType which, const char* fn,
			     FitsImage* img, Base::MosaicType type,
			     Coord::CoordSystem sys)
{
  if (!img || !img->isValid()) {
    if (img)
      delete img;

      unload();
      return 0;
  }

  bfits_ = img;
  loadInit(1, type,sys);
  for (int ii=2; ii<FTY_MAXAXES; ii++) {
    int nn = img->naxis(ii);
    baxis_[ii] = nn ? nn : 1;
  }

  // params in DATA coords 0-n
  // do it here because of fits section
  iparams.set(0,baxis_[2]);
  cparams.set(0,baxis_[2]);

  Base::MemType sav = which;

  // get the rest of slices
  FitsImage* sptr = img;
  if (img->isPost())
    which = Base::POST;

  if (img->nhdu() > 1)
    shareWCS_ =1;

  for (int ii=1; ii<img->nhdu(); ii++) {
    FitsImage* next = NULL;
    switch (which) {
    case Base::ALLOC:
      next = new FitsImageFitsNextAlloc(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::ALLOCGZ:
      next = new FitsImageFitsNextAllocGZ(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::CHANNEL:
      next = new FitsImageFitsNextChannel(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::MMAP:
      next = new FitsImageFitsNextMMap(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::SMMAP:
      next = new FitsImageFitsNextSMMap(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::MMAPINCR:
      next = new FitsImageFitsNextMMapIncr(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::SHARE:
      next = new FitsImageFitsNextShare(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::SSHARE:
      next = new FitsImageFitsNextSShare(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::SOCKET:
      next = new FitsImageFitsNextSocket(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::SOCKETGZ:
      next = new FitsImageFitsNextSocketGZ(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::VAR:
      next = new FitsImageFitsNextVar(this, parent_->interp, fn, sptr->fitsFile(), ii+1);
      break;
    case Base::POST:
      next = new FitsImageFitsNextPost(this, parent_->interp, img, sptr->baseFile(), ii+1);
      break;
    default:
      // na
      break;
    }

    if (next->isValid()) {
      sptr->setNextSlice(next);
      sptr = next;
    }
    else {
      delete next;
      break;
    }
  }

  // get the rest of mosaic
  FitsImage* ptr = img;
  FitsImage* tmp =NULL;
  while (1) {
    // restore which
    which = sav;

    FitsImage* next = NULL;
    switch (which) {
    case Base::ALLOC:
      next = new FitsImageMosaicNextAlloc(this, parent_->interp, fn, ptr->fitsFile(), FitsFile::NOFLUSH, 1);
      break;
    case Base::ALLOCGZ:
      next = new FitsImageMosaicNextAllocGZ(this, parent_->interp,fn,ptr->fitsFile(), FitsFile::NOFLUSH, 1);
      break;
    case Base::CHANNEL:
      next = new FitsImageMosaicNextChannel(this, parent_->interp,fn,ptr->fitsFile(), FitsFile::NOFLUSH, 1);
      break;
    case Base::MMAP:
      next = new FitsImageMosaicNextMMap(this, parent_->interp, fn, ptr->fitsFile(), 1);
      break;
    case Base::MMAPINCR:
      next = new FitsImageMosaicNextMMapIncr(this, parent_->interp, fn, ptr->fitsFile(), 1);
      break;
    case Base::SHARE:
      next = new FitsImageMosaicNextShare(this, parent_->interp, fn, ptr->fitsFile(), 1);
      break;
    case Base::SOCKET:
      next = new FitsImageMosaicNextSocket(this, parent_->interp, fn,ptr->fitsFile(), FitsFile::FLUSH, 1);
      break;
    case Base::SOCKETGZ:
      next = new FitsImageMosaicNextSocketGZ(this, parent_->interp,fn,ptr->fitsFile(), FitsFile::FLUSH, 1);
      break;
    case Base::VAR:
      next = new FitsImageMosaicNextVar(this, parent_->interp, fn, ptr->fitsFile(), 1);
      break;
    default:
      // na
      break;
    }

    // if previous was a unknown table, delete now, we're done with it
    if (tmp) {
      delete tmp;
      tmp =NULL;
    }

    // first check if fits_ is a known extension, aka we loaded something
    if (!next->isImage() && !next->isTable()) {
      // ok, we're done
      delete next;
      break;
    }

    // now check to see if it resolved into an image, no event tables
    // since any table can be a valid event table
    if (!next->isValid() || next->isHist()) {
      // must be a unknown table, just ignore, and delete next time thru
	ptr = next;
	tmp = next;
      }
    else {
      ptr->setNextMosaic(next);
      ptr = next;

      mosaicCount_++;

      if (img->isPost())
	which = Base::POST;

      // get rest of slices
      for (int ii=1; ii<img->nhdu(); ii++) {
	FitsImage* snext = NULL;
	switch (which) {
	case Base::ALLOC:
	  snext = new FitsImageFitsNextAlloc(this, parent_->interp, fn, next->fitsFile(),ii+1);
	  break;
	case Base::ALLOCGZ:
	  snext = new FitsImageFitsNextAllocGZ(this, parent_->interp, fn, next->fitsFile(),ii+1);
	  break;
	case Base::CHANNEL:
	  snext = new FitsImageFitsNextChannel(this, parent_->interp, fn, next->fitsFile(),ii+1);
	  break;
	case Base::MMAP:
	  snext = new FitsImageFitsNextMMap(this, parent_->interp, fn, next->fitsFile(),ii+1);
	  break;
	case Base::SMMAP:
	  snext = new FitsImageFitsNextSMMap(this, parent_->interp, fn, next->fitsFile(),ii+1);
	  break;
	case Base::MMAPINCR:
	  snext = new FitsImageFitsNextMMapIncr(this, parent_->interp, fn, next->fitsFile(),ii+1);
	  break;
	case Base::SHARE:
	  snext = new FitsImageFitsNextShare(this, parent_->interp, fn, next->fitsFile(),ii+1);
	  break;
	case Base::SSHARE:
	  snext = new FitsImageFitsNextSShare(this, parent_->interp, fn, next->fitsFile(),ii+1);
	  break;
	case Base::SOCKET:
	  snext = new FitsImageFitsNextSocket(this, parent_->interp, fn, next->fitsFile(),ii+1);
	  break;
	case Base::SOCKETGZ:
	  snext = new FitsImageFitsNextSocketGZ(this, parent_->interp, fn, next->fitsFile(),ii+1);
	  break;
	case Base::VAR:
	  snext = new FitsImageFitsNextVar(this, parent_->interp, fn, next->fitsFile(),ii+1);
	  break;
	case Base::POST:
	  snext = new FitsImageFitsNextPost(this, parent_->interp, ptr, next->baseFile(),ii+1);
	  break;
	default:
	  // na
	  break;
	}

	if (snext->isValid()) {
	  next->setNextSlice(snext);
	  next = snext;
	}
	else {
	  delete snext;
	  break;
	}
      }
    }
  }
  
  // finish up
  img->close();

  loadFinishMosaic(fits);
  if (!loadFinish()) {
    unload();
    return 0;
  }

  return 1;
}

int Context::loadMosaicWFPC2(Base::MemType which, const char* fn,
			     FitsImage* img)
{
  if (!img || !img->isValid()) {
    if (img)
      delete img;

    unload();
    return 0;
  }

  // Its legal, save it
  bfits_ = img;
  loadInit(1, Base::WCSMOSAIC, Coord::WCS);

  // remember in case of compress
  Base::MemType sav = which;

  if (img->isPost())
    which = Base::POST;

  // get the rest
  {
    FitsImage* ptr = img;
    for (int i=1; i<4; i++) {
      FitsImage* next = NULL;
      switch (which) {
      case Base::ALLOC:
	next = new FitsImageFitsNextAlloc(this, parent_->interp, fn, ptr->fitsFile(), 1);
	break;
      case Base::ALLOCGZ:
	next = new FitsImageFitsNextAllocGZ(this, parent_->interp, fn, ptr->fitsFile(), 1);
	break;
      case Base::CHANNEL:
	next = new FitsImageFitsNextChannel(this, parent_->interp, fn, ptr->fitsFile(), 1);
	break;
      case Base::MMAP:
	next = new FitsImageFitsNextMMap(this, parent_->interp, fn, ptr->fitsFile(), 1);
	break;
      case Base::MMAPINCR:
	next = new FitsImageFitsNextMMapIncr(this, parent_->interp, fn, ptr->fitsFile(), 1);
	break;
      case Base::SHARE:
	next = new FitsImageFitsNextShare(this, parent_->interp, fn, ptr->fitsFile(), 1);
	break;
      case Base::SOCKET:
	next = new FitsImageFitsNextSocket(this, parent_->interp, fn, ptr->fitsFile(), 1);
	break;
      case Base::SOCKETGZ:
	next = new FitsImageFitsNextSocketGZ(this, parent_->interp, fn, ptr->fitsFile(), 1);
	break;
      case Base::VAR:
	next = new FitsImageFitsNextVar(this, parent_->interp, fn, ptr->fitsFile(), 1);
	break;
      case Base::POST:
	next = new FitsImageFitsNextPost(this, parent_->interp, img, ptr->baseFile(), 1);
	break;
      default:
	// na
	break;
      }

      if (next->isValid()) {
	ptr->setNextMosaic(next);
	ptr = next;
	mosaicCount_++;
      }
      else {
	delete next;
	break;
      }
    }
  }

  // restore which
  which = sav;

  // ok, do we have 4 images?
  if (mosaicCount_ != 4) {
    unload();
    return 0;
  }

  // now, find WCS table
  FitsFile* table =NULL;
  switch (which) {
  case Base::ALLOC:
    table = new FitsMosaicNextAlloc(img->fitsFile(), FitsFile::NOFLUSH);
    break;
  case Base::ALLOCGZ:
    table = new FitsMosaicNextAllocGZ(img->fitsFile(), FitsFile::NOFLUSH);
    break;
  case Base::CHANNEL:
    table = new FitsMosaicNextChannel(img->fitsFile(), FitsFile::NOFLUSH);
    break;
  case Base::MMAP:
    table = new FitsMosaicNextMMap(img->fitsFile());
    break;
  case Base::MMAPINCR:
    table = new FitsMosaicNextMMapIncr(img->fitsFile());
    break;
  case Base::SHARE:
    table = new FitsMosaicNextShare(img->fitsFile());
    break;
  case Base::SOCKET:
    table = new FitsMosaicNextSocket(img->fitsFile(), FitsFile::FLUSH);
    break;
  case Base::SOCKETGZ:
    table = new FitsMosaicNextSocketGZ(img->fitsFile(), FitsFile::FLUSH);
    break;
  case Base::VAR:
    table = new FitsMosaicNextVar(img->fitsFile());
    break;
  default:
    // na
    break;
  }

  if (!table || !table->isValid() || !table->isAsciiTable()) {
    if (table)
      delete table;

    unload();
    return 0;
  }

  // read WCS from table
  {
    FitsHead* th = table->head();
    if (th->naxes() != 2) {
      if (table)
	delete table;

      unload();
      return 0;
    }

    FitsAsciiTableHDU* thdu = (FitsAsciiTableHDU*)th->hdu();

    FitsColumn* crval1 = thdu->find("CRVAL1");
    FitsColumn* crval2 = thdu->find("CRVAL2");
    FitsColumn* crpix1 = thdu->find("CRPIX1");
    FitsColumn* crpix2 = thdu->find("CRPIX2");

    FitsColumn* cd1_1 = thdu->find("CD1_1");
    FitsColumn* cd1_2 = thdu->find("CD1_2");
    FitsColumn* cd2_1 = thdu->find("CD2_1");
    FitsColumn* cd2_2 = thdu->find("CD2_2");

    FitsColumn* ctype1 = thdu->find("CTYPE1");
    FitsColumn* ctype2 = thdu->find("CTYPE2");

    char* tptr = (char*)table->data();
    int rows = thdu->rows();
    int rowlen = thdu->width();

    if (rows != 4) {
      unload();
      return 0;
    }

    FitsImage* ptr = bfits_;

    // reset count for processKeyWords()
    mosaicCount_ =0;

    for (int ii=0; ii<rows; ii++, tptr+=rowlen) {
      istringstream istr(ios::in|ios::out);
      ostream ostr(istr.rdbuf());
      ostr << "CRVAL1 = " << crval1->str(tptr) << endl
	   << "CRVAL2 = " << crval2->str(tptr) << endl
	   << "CRPIX1 = " << crpix1->str(tptr) << endl
	   << "CRPIX2 = " << crpix2->str(tptr) << endl
	   << "CD1_1  = " <<  cd1_1->str(tptr) << endl
	   << "CD1_2  = " <<  cd1_2->str(tptr) << endl
	   << "CD2_1  = " <<  cd2_1->str(tptr) << endl
	   << "CD2_2  = " <<  cd2_2->str(tptr) << endl
	   << "CTYPE1 = " << '\'' << ctype1->str(tptr) << '\'' << endl
	   << "CTYPE2 = " << '\'' << ctype2->str(tptr) << '\'' << endl
	   << ends;

      // fix fitsimage params
      ptr->wfpc2WCS(bfits_->head(), istr);

      Matrix mm = parent_->calcAlignWCS(bfits_, ptr, Coord::WCS,
					Coord::WCS, Coord::FK5);
      ptr->setwcsToRef(mm);

      ptr = ptr->nextMosaic();
      mosaicCount_++;
    }
  }

  if (table)
    delete table;

  // finish up
  img->close();

  loadFinish();
  return 1;
}

int Context::loadFinish()
{
  if (DebugPerf)
    cerr << "Context::loadFinish()" << endl;

  // just in case of 3d
  parent_->cancelDetach();

  if (manageAxes_) {
    delete [] naxis_;
    deleteFits(fits);
    manageAxes_ =0;
  }
  fits = bfits_;
  naxis_ = baxis_;

  if (axesOrder_ != 123)
    reorderAxes();
  
  for (int ii=0; ii<FTY_MAXAXES; ii++)
    slice_[ii] =1;
  cfits = fits;

  if (!block())
    return 0;

  FitsImage* ptr = fits;
  while (ptr) {
    FitsImage* sptr = ptr;
    while (sptr) {
      sptr->processKeywordsFitsSection();
      sptr = sptr->nextSlice();
    }
    ptr = ptr->nextMosaic();
  }

  analysis();

  return 1;
}

void Context::loadFinishMosaic(FitsImage* ptr)
{
  while (ptr && ptr->nextMosaic()) {
    int jj=0;
    FitsImage* sptr = ptr;
    while (sptr) {
      if (sptr->nextMosaic() == NULL) {
	// ok, let's figure out next inline
	FitsImage* mptr = ptr->nextMosaic();
	for (int nn=0; nn<jj; nn++)
	  mptr = mptr->nextSlice();
	sptr->setNextMosaic(mptr);
      }
      jj++;
      sptr = sptr->nextSlice();
    }
    ptr = ptr->nextMosaic();
  }
}

int Context::loadSlice(Base::MemType which, const char* fn,
		       FitsImage* img)
{
  if (!img || !img->isValid()) {
    if (img)
      delete img;
    return 0;
  }

  if (bfits_) {
    FitsImage* ptr = bfits_;
    while (ptr && ptr->nextSlice())
      ptr = ptr->nextSlice();
    ptr->setNextSlice(img);
    baxis_[2]++;
  }
  else {
    bfits_ = img;
    loadInit(1, Base::NOMOSAIC,Coord::WCS);
  }

  // finish up
  img->close();

  // params in DATA coords 0-n
  // must wait untill all loaded
  iparams.set(0,baxis_[2]);
  cparams.set(0,baxis_[2]);

  loadFinish();
  return 1;
}

int Context::naxes()
{
  for (int ii=FTY_MAXAXES-1; ii>=2; ii--) {
    if (naxis_[ii]>1)
      return ii+1;
  }
  return 2;
}

int Context::nhdu()
{
  int dd =1;
  for (int ii=2; ii<FTY_MAXAXES; ii++)
    if (naxis_[ii]>1)
      dd *= naxis_[ii];
  return dd;
}

int Context::processMosaicKeywords(FitsImage* ptr)
{
  while (ptr) {
    FitsImage* sptr = ptr;
    while (sptr) {
      switch (mosaicType) {
      case Base::IRAF:
	if (!sptr->processKeywordsIRAF(fits))
	  return 0;
	break;
      case Base::WCSMOSAIC:
	{
	  if (!sptr->hasWCS(mosaicSystem))
	    return 0;

	  Matrix mm = parent_->calcAlignWCS(fits, sptr, mosaicSystem, 
					   mosaicSystem, Coord::FK5);
	  sptr->setwcsToRef(mm);
	}
	break;
      default:
	// na
	break;
      }
      sptr = sptr->nextSlice();
    }
    ptr = ptr->nextMosaic();
  }

  return 1;
}

void* reorder132(void* tt)
{
  t_reorder_arg* targ = (t_reorder_arg*)tt;
  char* dest = targ->dest;
  char** sjv = targ->sjv;
  int ww = targ->ww;
  //  int hh = targ->hh;
  int dd = targ->dd;
  int bz = targ->bz;
  int jj = targ->mm;

  for (int kk=0; kk<dd; kk++) {
    memcpy(dest, sjv[kk]+(jj*ww)*bz, ww*bz);
    dest += ww*bz;
    /*
      for (int ii=0; ii<ww; ii++) {
      memcpy(dest, sjv[kk]+(jj*ww+ii)*bz, bz);
      dest += bz;
      }
    */
  }
  return NULL;
}

void* reorder213(void* tt)
{
  t_reorder_arg* targ = (t_reorder_arg*)tt;
  char* dest = targ->dest;
  char** sjv = targ->sjv;
  int ww = targ->ww;
  int hh = targ->hh;
  //  int dd = targ->dd;
  int bz = targ->bz;
  int kk = targ->mm;

  for (int ii=0; ii<ww; ii++) {
    for (int jj=0; jj<hh; jj++) {
      memcpy(dest, sjv[kk]+(jj*ww+ii)*bz, bz);
      dest += bz;
    }
  }
  return NULL;
}

void* reorder231(void* tt)
{
  t_reorder_arg* targ = (t_reorder_arg*)tt;
  char* dest = targ->dest;
  char** sjv = targ->sjv;
  int ww = targ->ww;
  int hh = targ->hh;
  int dd = targ->dd;
  int bz = targ->bz;
  int ii = targ->mm;

  for (int kk=0; kk<dd; kk++) {
    for (int jj=0; jj<hh; jj++) {
      memcpy(dest, sjv[kk]+(jj*ww+ii)*bz, bz);
      dest += bz;
    }
  }
  return NULL;
}

void* reorder312(void* tt)
{
  t_reorder_arg* targ = (t_reorder_arg*)tt;
  char* dest = targ->dest;
  char** sjv = targ->sjv;
  int ww = targ->ww;
  //  int hh = targ->hh;
  int dd = targ->dd;
  int bz = targ->bz;
  int jj = targ->mm;

  for (int ii=0; ii<ww; ii++) {
    for (int kk=0; kk<dd; kk++) {
      memcpy(dest, sjv[kk]+(jj*ww+ii)*bz, bz);
      dest += bz;
    }
  }
  return NULL;
}

void* reorder321(void* tt)
{
  t_reorder_arg* targ = (t_reorder_arg*)tt;
  char* dest = targ->dest;
  char** sjv = targ->sjv;
  int ww = targ->ww;
  int hh = targ->hh;
  int dd = targ->dd;
  int bz = targ->bz;
  int ii = targ->mm;

  for (int jj=0; jj<hh; jj++) {
    for (int kk=0; kk<dd; kk++) {
      memcpy(dest, sjv[kk]+(jj*ww+ii)*bz, bz);
      dest += bz;
    }
  }
  return NULL;
}

void Context::reorderThread(void* tt, char* data, void* proc(void*), int* cnt)
{
  t_reorder_arg* targ = (t_reorder_arg*)tt;
  
  for (int mm=0; mm<naxis_[2]; mm++) {
    targ[*cnt].dest = data + (size_t)naxis_[0]*naxis_[1]*mm*targ[*cnt].bz;
    targ[*cnt].mm = mm;
    if (pthread_create(&thread_[*cnt], NULL, proc, &targ[*cnt]))
      internalError("Unable to Create Thread");

    (*cnt)++;
    if (*cnt == parent_->nthreads_) {
      for (int pp=0; pp<*cnt; pp++) {
	if (pthread_join(thread_[pp], NULL))
	  internalError("Unable to Join Thread");
      }
      *cnt =0;
    }
  }
}

void Context::reorderAxis(char* data, char** sjv, int ww, int hh, int dd, 
			  size_t bz)
{
  if (thread_)
    delete [] thread_;
  thread_ = new pthread_t[parent_->nthreads_];
  t_reorder_arg* targ = new t_reorder_arg[parent_->nthreads_];

  for (int ii=0; ii<parent_->nthreads_; ii++) {
    targ[ii].sjv = sjv;
    targ[ii].ww = ww;
    targ[ii].hh = hh;
    targ[ii].dd = dd;
    targ[ii].bz = bz;
  }

  int cnt =0;
  switch (axesOrder_) {
  case 123:
    return;
  case 132:
    naxis_[0] =ww;
    naxis_[1] =dd;
    naxis_[2] =hh;
    reorderThread(targ, data, reorder132, &cnt);
    break;
  case 213:
    naxis_[0] =hh;
    naxis_[1] =ww;
    naxis_[2] =dd;
    reorderThread(targ, data, reorder213, &cnt);
    break;
  case 231:
    naxis_[0] =hh;
    naxis_[1] =dd;
    naxis_[2] =ww;
    reorderThread(targ, data, reorder231, &cnt);
    break;
  case 312:
    naxis_[0] =dd;
    naxis_[1] =ww;
    naxis_[2] =hh;
    reorderThread(targ, data, reorder312, &cnt);
    break;
  case 321:
    naxis_[0] =dd;
    naxis_[1] =hh;
    naxis_[2] =ww;
    reorderThread(targ, data, reorder321, &cnt);
    break;
  }

  for (int pp=0; pp<cnt; pp++)
    if (pthread_join(thread_[pp], NULL))
      internalError("Unable to Join Thread");

  delete [] targ;
  delete [] thread_;
  thread_ =NULL;
}

void Context::reorderAxes()
{
  if (DebugPerf)
    cerr << "Context::reorderAxes()" << endl;

  int bitpix = bfits_->baseFile()->head()->bitpix();
  int bz = abs(bitpix)/8;

  int ww = bfits_->baseFile()->head()->naxis(0);
  int hh = bfits_->baseFile()->head()->naxis(1);
  int dd = baxis_[2];
  size_t sz = (size_t)ww*hh*dd*bz;

  // Data
  char* data = new char[sz];
  if (!data)
    return;
  memset(data,0,sz);

  naxis_ = new int[FTY_MAXAXES];
  for (int ii=0; ii<FTY_MAXAXES; ii++)
    naxis_[ii] =1;

  // slice jump vector
  char* sjv[dd];
  FitsImage* sptr = bfits_;
  int ii=0;
  while (sptr) {
    sjv[ii++] = (char*)sptr->basedata();
    if (sptr)
      sptr = sptr->nextSlice();
  }

  reorderAxis(data, sjv, ww, hh, dd, bz);

  // Header
  FitsHead* hdr = new FitsHead(*(bfits_->baseFile()->head()));
  hdr->setInteger("NAXES", 3, "");
  hdr->setInteger("NAXIS1", naxis_[0], "");
  hdr->setInteger("NAXIS2", naxis_[1], "");
  if (hdr->find("NAXIS3"))
    hdr->setInteger("NAXIS3", naxis_[2], "");
  else {
    char* n2= hdr->find("NAXIS2");
    hdr->insertInteger("NAXIS3", naxis_[2], "", n2);
  }

  for (int ii=0; ii<MULTWCS; ii++) {
    char alt = (ii==0) ? ' ' : (char)('@'+ii);

    reorderWCSi(hdr, (char*)"CROTA  ", 5, alt); // real

    reorderWCSi(hdr, (char*)"CRVAL  ", 5, alt); // real
    reorderWCSi(hdr, (char*)"CRPIX  ", 5, alt); // real
    reorderWCSi(hdr, (char*)"CDELT  ", 5, alt); // real
    reorderWCSi(hdr, (char*)"CTYPE  ", 5, alt); // str
    reorderWCSi(hdr, (char*)"CUNIT  ", 5, alt); // str
    reorderWCSi(hdr, (char*)"CRDER  ", 5, alt); // real
    reorderWCSi(hdr, (char*)"CSYER  ", 5, alt); // real

    reorderWCSij(hdr, (char*)"CD _  ", 2, alt); // real
    reorderWCSij(hdr, (char*)"PC _  ", 2, alt); // real
    reorderWCSij(hdr, (char*)"PV _  ", 2, alt); // real

    reorderWCSi(hdr, (char*)"LTV  ", 3, alt); // real
    reorderWCSij(hdr, (char*)"LTM _  ", 3, alt); // real
    reorderWCSi(hdr, (char*)"ATV  ", 3, alt); // real
    reorderWCSij(hdr, (char*)"ATM _  ", 3, alt); // real
    reorderWCSi(hdr, (char*)"DTV  ", 3, alt); // real
    reorderWCSij(hdr, (char*)"DTM _  ", 3, alt); // real
  }

  // be sure to have CTYPE1/CTYPE2 or wcs will not process
  if (!hdr->find("CTYPE1") && hdr->find("CTYPE2")) {
    char* c2= hdr->find("CTYPE2");
    hdr->insertString("CTYPE1", "LINEAR", "", c2);
  }
  else if (!hdr->find("CTYPE2") && hdr->find("CTYPE1")) {
    char* c1= hdr->find("CTYPE1");
    hdr->insertString("CTYPE2", "LINEAR", "", c1);
  }

  // Load it
  fits = new FitsImageFitsOrder(this, parent_->interp, bfits_, hdr, data, sz, 1);
  FitsImage* ptr = fits;
  for (int ii=1; ii<naxis_[2]; ii++) {
    FitsImage* next = new FitsImageFitsNextOrder(this, parent_->interp, fits, ptr->fitsFile(), ii+1);

    if (next->isValid()) {
      ptr->setNextSlice(next);
      ptr = next;
    }
    else {
      delete next;
      break;
    }
  }

  // params in DATA coords 0-n
  iparams.set(0,naxis_[2]);
  cparams.set(0,naxis_[2]);

  manageAxes_ =1;
}

void Context::reorderWCSi(FitsHead* hdr, char* kk, int ii, char ww)
{
  char key[8];
  strcpy(key,kk);

  key[ii+1] = ww;

  key[ii] = '1';
  char* c1 = hdr->find(key);
  key[ii] = '2';
  char* c2 = hdr->find(key);
  key[ii] = '3';
  char* c3 = hdr->find(key);

  switch (axesOrder_) {
  case 123:
    return;
  case 132:
    {
      if (c1) {
	key[ii] = '1';
	FitsCard(c1).setKey(key);
      }
      if (c2) {
	key[ii] = '3';
	FitsCard(c2).setKey(key);
      }
      if (c3) {
	key[ii] = '2';
	FitsCard(c3).setKey(key);
      }
    }
    break;
  case 213:
    {
      if (c1) {
	key[ii] = '2';
	FitsCard(c1).setKey(key);
      }
      if (c2) {
	key[ii] = '1';
	FitsCard(c2).setKey(key);
      }
      if (c3) {
	key[ii] = '3';
	FitsCard(c3).setKey(key);
      }
    }
    break;
  case 231:
    {
      if (c1) {
	key[ii] = '3';
	FitsCard(c1).setKey(key);
      }
      if (c2) {
	key[ii] = '1';
	FitsCard(c2).setKey(key);
      }
      if (c3) {
	key[ii] = '2';
	FitsCard(c3).setKey(key);
      }
    }
    break;
  case 312:
    {
      if (c1) {
	key[ii] = '2';
	FitsCard(c1).setKey(key);
      }
      if (c2) {
	key[ii] = '3';
	FitsCard(c2).setKey(key);
      }
      if (c3) {
	key[ii] = '1';
	FitsCard(c3).setKey(key);
      }
    }
    break;
  case 321:
    {
      if (c1) {
	key[ii] = '3';
	FitsCard(c1).setKey(key);
      }
      if (c2) {
	key[ii] = '2';
	FitsCard(c2).setKey(key);
      }
      if (c3) {
	key[ii] = '1';
	FitsCard(c3).setKey(key);
      }
    }
    break;
  }
}

void Context::reorderWCSij(FitsHead* hdr, char* kk, int ii, char ww)
{
  char key[8];
  strcpy(key,kk);

  key[ii+3] = ww;

  key[ii] = '1';
  key[ii+2] = '1';
  char* c11 = hdr->find(key);
  key[ii+2] = '2';
  char* c12 = hdr->find(key);
  key[ii+2] = '3';
  char* c13 = hdr->find(key);

  key[ii] = '2';
  key[ii+2] = '1';
  char* c21 = hdr->find(key);
  key[ii+2] = '2';
  char* c22 = hdr->find(key);
  key[ii+2] = '3';
  char* c23 = hdr->find(key);

  key[ii] = '3';
  key[ii+2] = '1';
  char* c31 = hdr->find(key);
  key[ii+2] = '2';
  char* c32 = hdr->find(key);
  key[ii+2] = '3';
  char* c33 = hdr->find(key);

  switch (axesOrder_) {
  case 123:
    return;
  case 132:
    {
      if (c11) {
	key[ii] = '1';
	key[ii+2] = '1';
	FitsCard(c11).setKey(key);
      }
      if (c12) {
	key[ii] = '1';
	key[ii+2] = '3';
	FitsCard(c12).setKey(key);
      }
      if (c13) {
	key[ii] = '1';
	key[ii+2] = '2';
	FitsCard(c13).setKey(key);
      }

      if (c21) {
	key[ii] = '3';
	key[ii+2] = '1';
	FitsCard(c21).setKey(key);
      }
      if (c22) {
	key[ii] = '3';
	key[ii+2] = '3';
	FitsCard(c22).setKey(key);
      }
      if (c23) {
	key[ii] = '3';
	key[ii+2] = '2';
	FitsCard(c23).setKey(key);
      }

      if (c31) {
	key[ii] = '2';
	key[ii+2] = '1';
	FitsCard(c31).setKey(key);
      }
      if (c32) {
	key[ii] = '2';
	key[ii+2] = '3';
	FitsCard(c32).setKey(key);
      }
      if (c33) {
	key[ii] = '2';
	key[ii+2] = '2';
	FitsCard(c33).setKey(key);
      }
    }
    break;
  case 213:
    {
      if (c11) {
	key[ii] = '2';
	key[ii+2] = '2';
	FitsCard(c11).setKey(key);
      }
      if (c12) {
	key[ii] = '2';
	key[ii+2] = '1';
	FitsCard(c12).setKey(key);
      }
      if (c13) {
	key[ii] = '2';
	key[ii+2] = '3';
	FitsCard(c13).setKey(key);
      }

      if (c21) {
	key[ii] = '1';
	key[ii+2] = '2';
	FitsCard(c21).setKey(key);
      }
      if (c22) {
	key[ii] = '1';
	key[ii+2] = '1';
	FitsCard(c22).setKey(key);
      }
      if (c23) {
	key[ii] = '1';
	key[ii+2] = '3';
	FitsCard(c23).setKey(key);
      }

      if (c31) {
	key[ii] = '3';
	key[ii+2] = '2';
	FitsCard(c31).setKey(key);
      }
      if (c32) {
	key[ii] = '3';
	key[ii+2] = '1';
	FitsCard(c32).setKey(key);
      }
      if (c33) {
	key[ii] = '3';
	key[ii+2] = '3';
	FitsCard(c33).setKey(key);
      }
    }
    break;
  case 231:
    {
      if (c11) {
	key[ii] = '3';
	key[ii+2] = '3';
	FitsCard(c11).setKey(key);
      }
      if (c12) {
	key[ii] = '3';
	key[ii+2] = '1';
	FitsCard(c12).setKey(key);
      }
      if (c13) {
	key[ii] = '3';
	key[ii+2] = '2';
	FitsCard(c13).setKey(key);
      }

      if (c21) {
	key[ii] = '1';
	key[ii+2] = '3';
	FitsCard(c21).setKey(key);
      }
      if (c22) {
	key[ii] = '1';
	key[ii+2] = '1';
	FitsCard(c22).setKey(key);
      }
      if (c23) {
	key[ii] = '1';
	key[ii+2] = '2';
	FitsCard(c23).setKey(key);
      }

      if (c31) {
	key[ii] = '2';
	key[ii+2] = '3';
	FitsCard(c31).setKey(key);
      }
      if (c32) {
	key[ii] = '2';
	key[ii+2] = '1';
	FitsCard(c32).setKey(key);
      }
      if (c33) {
	key[ii] = '2';
	key[ii+2] = '2';
	FitsCard(c33).setKey(key);
      }
    }
    break;
  case 312:
    {
      if (c11) {
	key[ii] = '2';
	key[ii+2] = '2';
	FitsCard(c11).setKey(key);
      }
      if (c12) {
	key[ii] = '2';
	key[ii+2] = '3';
	FitsCard(c12).setKey(key);
      }
      if (c13) {
	key[ii] = '2';
	key[ii+2] = '1';
	FitsCard(c13).setKey(key);
      }

      if (c21) {
	key[ii] = '3';
	key[ii+2] = '2';
	FitsCard(c21).setKey(key);
      }
      if (c22) {
	key[ii] = '3';
	key[ii+2] = '3';
	FitsCard(c22).setKey(key);
      }
      if (c23) {
	key[ii] = '3';
	key[ii+2] = '1';
	FitsCard(c23).setKey(key);
      }

      if (c31) {
	key[ii] = '1';
	key[ii+2] = '2';
	FitsCard(c31).setKey(key);
      }
      if (c32) {
	key[ii] = '1';
	key[ii+2] = '3';
	FitsCard(c32).setKey(key);
      }
      if (c33) {
	key[ii] = '1';
	key[ii+2] = '1';
	FitsCard(c33).setKey(key);
      }
    }
    break;
  case 321:
    {
      if (c11) {
	key[ii] = '3';
	key[ii+2] = '3';
	FitsCard(c11).setKey(key);
      }
      if (c12) {
	key[ii] = '3';
	key[ii+2] = '2';
	FitsCard(c12).setKey(key);
      }
      if (c13) {
	key[ii] = '3';
	key[ii+2] = '1';
	FitsCard(c13).setKey(key);
      }

      if (c21) {
	key[ii] = '2';
	key[ii+2] = '3';
	FitsCard(c21).setKey(key);
      }
      if (c22) {
	key[ii] = '2';
	key[ii+2] = '2';
	FitsCard(c22).setKey(key);
      }
      if (c23) {
	key[ii] = '2';
	key[ii+2] = '1';
	FitsCard(c23).setKey(key);
      }

      if (c31) {
	key[ii] = '1';
	key[ii+2] = '3';
	FitsCard(c31).setKey(key);
      }
      if (c32) {
	key[ii] = '1';
	key[ii+2] = '2';
	FitsCard(c32).setKey(key);
      }
      if (c33) {
	key[ii] = '1';
	key[ii+2] = '1';
	FitsCard(c33).setKey(key);
      }
    }
    break;
  }

  hdr->buildIndex();
}

void Context::resetIIS()
{
  frScale.setClipMode(FrScale::MINMAX);
  frScale.setMinMaxMode(FrScale::SCAN);
  frScale.setULow(DEFAULTLOW);
  frScale.setUHigh(DEFAULTHIGH);
  frScale.setColorScaleType(FrScale::LINEARSCALE);
}

void Context::resetSecMode()
{
  frScale.resetSecMode();
  clearHist();
}

void Context::setAxesOrder(int order)
{
  switch (order) {
  case 123:
  case 132:
  case 213:
  case 231:
  case 312:
  case 321:
    axesOrder_ = order;
    break;
  default:
    axesOrder_ = 123;
    break;
  }

  if (bfits_)
    loadFinish();
}

void Context::setBinFactor(const Vector& b) {
  Vector bb = b;
  binFactor_[0] *= bb[0] <= 0 ? 1 : bb[0];
  binFactor_[1] *= bb[1] <= 0 ? 1 : bb[1];
}

void Context::setBinToFactor(const Vector& b) {
  Vector bb = b;
  binFactor_[0] = bb[0] <= 0 ? 1 : bb[0];
  binFactor_[1] = bb[1] <= 0 ? 1 : bb[1];
}

Vector Context::setBlockFactor(const Vector& b) {
  Vector bb = b;
  Vector old = blockFactor_;
  blockFactor_[0] *= bb[0] <= 0 ? 1 : bb[0];
  blockFactor_[1] *= bb[1] <= 0 ? 1 : bb[1];

  return Vector(old[0]/blockFactor_[0],old[1]/blockFactor_[1]);
}

Vector Context::setBlockToFactor(const Vector& b) {
  Vector bb = b;
  Vector old = blockFactor_;
  blockFactor_[0] = bb[0] <= 0 ? 1 : bb[0];
  blockFactor_[1] = bb[1] <= 0 ? 1 : bb[1];

  return Vector(old[0]/blockFactor_[0],old[1]/blockFactor_[1]);
}

void Context::setCrop3dParams()
{
  // params in DATA coords 0-n
  cparams = iparams;
}

void Context::setCrop3dParams(double z0, double z1)
{
  // params in DATA coords 0-n
  double zmin = z0;
  double zmax = z1;

  // always have at least 1
  if (zmin+1>zmax)
    zmax = z0+1;

  // round to int
  cparams.set(int(zmin+.5), int(zmax+.5));
}

void Context::setCrop3dParams(int z0, int z1)
{
  // params in DATA coords 0-n
  if (z0<iparams.zmin) {
    z0=iparams.zmin;
    if (z0+1>z1)
      z1=z0+1;
  }

  if (z1>iparams.zmax) {
    z1=iparams.zmax;
    if (z0+1>z1)
      z0=z1-1;
  }

  cparams.set(z0,z1);
}

void Context::setIIS()
{
  frScale.setClipMode(FrScale::USERCLIP);
  frScale.setMinMaxMode(FrScale::SCAN);
  frScale.setULow(0);
  frScale.setUHigh(IISSIZE);
  frScale.setColorScaleType(FrScale::IISSCALE);
}

void Context::setSecMode(FrScale::SecMode mode)
{
  frScale.setSecMode(mode);
  clearHist();
}

void Context::setSmooth(int dd, SmoothFunction ff, int rr, int rm, 
			double ss, double sm, double aa)
{
  doSmooth_=dd;
  smoothFunction_=ff;
  smoothRadius_=rr;
  smoothRadiusMinor_=rm;
  smoothSigma_=ss;
  smoothSigmaMinor_=sm;
  smoothAngle_=aa;
}

// backward compatibility backup
void Context::setSmooth(int dd, SmoothFunction ff, int rr)
{
  doSmooth_=dd;
  smoothFunction_=ff;
  smoothRadius_=rr;
}

void Context::unload()
{
  if (DebugPerf)
    cerr << "Context::unload()" << endl;

  deleteFits(bfits_);

  if (manageAxes_) {
    delete [] naxis_;
    deleteFits(fits);
    manageAxes_ =0;
  }

  bfits_ =NULL;
  fits =NULL;
  cfits =NULL;

  loadInit(0, Base::NOMOSAIC, Coord::WCS);

  fvcontour_.lcontourlevel().deleteAll();
  auxcontours_.deleteAll();
  hasContour_ =0;
  hasAuxContour_ =0;

  resetSecMode();
  updateClip();
}

void Context::updateClip()
{
  if (DebugPerf)
    cerr << "Context::updateClip()" << endl;

  updateClip(&frScale);
}

void Context::rescanClip()
{
  if (DebugPerf)
    cerr << "Context::rescanClip()" << endl;

  frScale.setForce(1);
  updateClip(&frScale);
}

void Context::updateClip(FrScale* fr)
{
  if (DebugPerf)
    cerr << "Context::updateClip(FrScale*)" << endl;

  // no fits
  if (!fits) {
    if (fr->clipMode() != FrScale::USERCLIP) {
      fr->setLow(DEFAULTLOW);
      fr->setHigh(DEFAULTHIGH);
    }
    else {
      fr->setLow(fr->ulow());
      fr->setHigh(fr->uhigh());
    }

    return;
  }

  // find min/max
  fr->setMin(DBL_MAX, Vector());
  fr->setMax(-DBL_MAX, Vector());
  fr->setLow(DBL_MAX);
  fr->setHigh(-DBL_MAX);

  switch (fr->clipScope()) {
  case FrScale::GLOBAL:
    updateClipGlobal(fr);
    break;
  case FrScale::LOCAL:
    updateClipLocal(fr);
    break;
  }

  if (DebugPerf)
    cerr << *fr << endl;
}

void Context::updateClipGlobal(FrScale* fr)
{
  if (thread_)
    delete [] thread_;
  thread_ = new pthread_t[parent_->nthreads_];
  t_clip_arg* targ = new t_clip_arg[parent_->nthreads_];

  int cnt =0;
  FitsImage* ptr = fits;
  while (ptr) {
    FitsImage* sptr = ptr;
    while (sptr) {
      sptr->updateClip(fr, &thread_[cnt], &targ[cnt]);

      cnt++;
      if (cnt == parent_->nthreads_) {
	for (int ii=0; ii<cnt; ii++) {
	  int rr = pthread_join(thread_[ii], NULL);
	  if (rr)
	    internalError("Unable to Join Thread");
	}
	cnt =0;
      }
      sptr = sptr->nextSlice();
    }
    ptr = ptr->nextMosaic();
  }

  for (int ii=0; ii<cnt; ii++) {
    int rr = pthread_join(thread_[ii], NULL);
    if (rr)
      internalError("Unable to Join Thread");
  }

  delete [] targ;
  delete [] thread_;
  thread_ =NULL;

  // set min/max low/high
  ptr = fits;
  while (ptr) {
    FitsImage* sptr = ptr;
    while (sptr) {
      if (fr->min() > sptr->min())
	fr->setMin(sptr->min(), sptr->minXY());
      if (fr->max() < sptr->max())
	fr->setMax(sptr->max(), sptr->maxXY());

      if (fr->low() > sptr->low())
	fr->setLow(sptr->low());
      if (fr->high() < sptr->high())
	fr->setHigh(sptr->high());

      sptr = sptr->nextSlice();
    }
    ptr = ptr->nextMosaic();
  }

  // sanity check
  if (fr->min() == DBL_MAX && fr->max() == -DBL_MAX) {
    fr->setMin(NAN, Vector());
    fr->setMax(NAN, Vector());
  }
  if (fr->low() == DBL_MAX && fr->high() == -DBL_MAX) {
    fr->setLow(NAN);
    fr->setHigh(NAN);
  }

  ptr = fits;
  while (ptr) {
    FitsImage* sptr = ptr;
    while (sptr) {
      sptr->setClip(fr->low(), fr->high());
      sptr = sptr->nextSlice();
    }
    ptr = ptr->nextMosaic();
  }
}

void Context::updateClipLocal(FrScale* fr)
{
  if (thread_)
    delete [] thread_;
  thread_ = new pthread_t[parent_->nthreads_];
  t_clip_arg* targ = new t_clip_arg[parent_->nthreads_];

  int cnt =0;
  FitsImage* ptr = cfits;
  while (ptr) {
    ptr->updateClip(fr, &thread_[cnt], &targ[cnt]);

    cnt++;
    if (cnt == parent_->nthreads_) {
      for (int ii=0; ii<cnt; ii++) {
	int rr = pthread_join(thread_[ii], NULL);
	if (rr)
	  internalError("Unable to Join Thread");
      }
      cnt =0;
    }
    ptr = ptr->nextMosaic();
  }

  for (int ii=0; ii<cnt; ii++) {
    int rr = pthread_join(thread_[ii], NULL);
    if (rr)
      internalError("Unable to Join Thread");
  }

  delete [] targ;
  delete [] thread_;
  thread_ =NULL;

  // set min/max low/high
  ptr = cfits;
  while (ptr) {
    if (fr->min() > ptr->min())
      fr->setMin(ptr->min(), ptr->minXY());
    if (fr->max() < ptr->max())
      fr->setMax(ptr->max(), ptr->maxXY());

    if (fr->low() > ptr->low())
      fr->setLow(ptr->low());
    if (fr->high() < ptr->high())
      fr->setHigh(ptr->high());

    ptr = ptr->nextMosaic();
  }

  // sanity check
  if (fr->min() == DBL_MAX && fr->max() == -DBL_MAX) {
    fr->setMin(NAN, Vector());
    fr->setMax(NAN, Vector());
  }
  if (fr->low() == DBL_MAX && fr->high() == -DBL_MAX) {
    fr->setLow(NAN);
    fr->setHigh(NAN);
  }
}

void Context::updateContours(const Matrix& mx)
{
  if (!cfits)
    return;
  
  // aux contours
  if (hasAuxContour_) {
    if (auxcontours_.head())
      do
	auxcontours_.current()->updateCoords(mx);
      while (auxcontours_.next());
  }

  if (hasContour_) {
    List<ContourLevel>& cc = fvcontour_.lcontourlevel();
    if (cc.head())
      do
	cc.current()->updateCoords(mx);
      while (cc.next());
  }
}

void Context::updateSlice(int id, int ss)
{
  // ranges 1-n
  if (!fits)
    return;

  // check bounds
  if (ss<1)
    ss = 1;
  else if (ss>naxis_[id])
    ss = naxis_[id];

  slice_[id] = ss;

  int cnt =slice_[2];
  for (int jj=3; jj<FTY_MAXAXES; jj++) {
    int cc =1;
    for (int ii=2; ii<jj; ii++)
      cc *= naxis_[ii];
    cnt += (slice_[jj]-1) * cc;
  }

  cfits = fits;
  for (int ii=1; ii<cnt; ii++)
    if (cfits)
      cfits = cfits->nextSlice();
}

int Context::updateClipScope(FrScale::ClipScope ss)
{
  if (frScale.clipScope() != ss) {
    frScale.setClipScope(ss);
    return 1;
  }
  return 0;
}

int Context::updateClipMode(FrScale::ClipMode mm)
{
  if (frScale.clipMode() != mm) {
    frScale.setClipMode(mm);
    return 1;
  }
  return 0;
}

int Context::updateClipMode(float per)
{
  if (per == 100)
    return updateClipMode(FrScale::MINMAX);
  else {
    if (frScale.clipMode() != FrScale::AUTOCUT || frScale.autoCutPer() != per) {
      frScale.setClipMode(FrScale::AUTOCUT);
      frScale.setAutoCutPer(per);
      return 1;
    }
  }
  return 0;
}

int Context::updateMinMax(FrScale::MinMaxMode mm, int ss)
{
  if (frScale.minmaxMode() != mm || frScale.minmaxSample() != ss) {
    frScale.setMinMaxMode(mm);
    frScale.setMinMaxSample(ss);
    return 1;
  }
  return 0;
}

// backward compatibility backup
int Context::updateMinMaxMode(FrScale::MinMaxMode mm)
{
  if (frScale.minmaxMode() != mm) {
    frScale.setMinMaxMode(mm);
    return 1;
  }
  return 0;
}

// backward compatibility backup
int Context::updateMinMaxSample(int ss)
{
  if (frScale.minmaxSample() != ss) {
    frScale.setMinMaxSample(ss);
    return 1;
  }
  return 0;
}

int Context::updateUser(float ll, float hh)
{
  if (frScale.ulow() != ll || frScale.uhigh() != hh) {
    frScale.setULow(ll);
    frScale.setUHigh(hh);
    return 1;
  }
  return 0;
}

int Context::updateZscale(float cc, int ss, int ll)
{
  if (frScale.zContrast() != cc ||
      frScale.zSample() != ss ||
      frScale.zLine() != ll) {
    frScale.setZContrast(cc);
    frScale.setZSample(ss);
    frScale.setZLine(ll);
    return 1;
  } 
  return 0;
}

// backward compatibility backup
int Context::updateZscaleContrast(float cc)
{
  if (frScale.zContrast() != cc) {
    frScale.setZContrast(cc);
    return 1;
  } 
  return 0;
}

// backward compatibility backup
int Context::updateZscaleSample(int ss)
{
  if (frScale.zSample() != ss) {
    frScale.setZSample(ss);
    return 1;
  } 
  return 0;
}

// backward compatibility backup
int Context::updateZscaleLine(int ll)
{
  if (frScale.zLine() != ll) {
    frScale.setZLine(ll);
    return 1;
  } 
  return 0;
}

int Context::updateDataSec(int ii)
{
  if (frScale.datasec() != ii) {
    frScale.setDataSec(ii);
    return 1;
  }
  return 0;
}

int Context::updateExpo(double exp)
{
  if (frScale.expo() != exp) {
    frScale.setExpo(exp);
    return 1;
  }
  return 0;
}
