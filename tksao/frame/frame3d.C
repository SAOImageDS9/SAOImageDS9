// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "frame3d.h"
#include "fitsimage.h"
#include "sigbus.h"

#include <pthread.h>

void render3dTimer(void* ptr) {
  int rr = ((Frame3d*)ptr)->processDetach();
  if (rr) {
    Tcl_TimerToken tt = Tcl_CreateTimerHandler(125,render3dTimer,ptr);
    ((Frame3d*)ptr)->setTimer(tt);
  }
  else
    ((Frame3d*)ptr)->setTimer(0);
}

Frame3d::Frame3d(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item) 
  : Frame3dBase(i,c,item)
{
  context = new Context();
  context->parent(this);

  currentContext = context;
  keyContext = context;

  cmapID = 1;
  bias = 0.5;
  contrast = 1.0;

  colormapData = NULL;

  colorCount = 0;
  colorScale = NULL;
  colorCells = NULL;

  thread_ =NULL;

  targ_ =NULL;
  status_ = 0;
  nrays_ =0;
  xid_ =NULL;
  yid_ =NULL;
  timer_ =0;

  rt_ =NULL;
  rtb_ =NULL;
  rtbcnt_ = 0;

  // scope is alway global
  keyContext->setClipScope(FrScale::GLOBAL);
}

Frame3d::~Frame3d()
{
  // be sure the timer is shutdown
  if (timer_)
    Tcl_DeleteTimerHandler(timer_);
      
  if (context)
    delete context;

  if (colorScale)
    delete colorScale;

  if (colormapData)
    delete [] colormapData;

  if (colorCells)
    delete [] colorCells;

  if (thread_)
    delete [] thread_;

  if (targ_)
    delete [] targ_;

  if (xid_)
    delete [] xid_;
  if (yid_)
    delete [] yid_;

  if (rt_)
    delete rt_;
  if (rtb_)
    delete rtb_;
}

unsigned char* Frame3d::fillImage(int width, int height, 
				  Coord::InternalSystem sys)
{
  // just in case
  if (!context->fits)
    return NULL;

  unsigned char* img =NULL;
  Matrix3d mm = context->fits->matrixToData3d(sys);

  switch (sys) {
  case Coord::WIDGET:
    if (syncUpdate) {
      RayTrace* rt = findInCache(cache_, az_, el_);
      if (!rt) {
	BBox3d bb = imageBounds(width, height, mm);
	rt = new RayTrace(az_, el_, width, height, mm, bb);
	if (!fillImageJoin(rt))
	  return NULL;
	cacheIt(cache_, rt);
      }
      img = fillImageColor(rt);
    }
    else {
      if (!rt_) {
	RayTrace* ptr = findInCache(cache_, az_, el_);
	if (ptr) {
	  img = fillImageColor(ptr);

	  // start background
	  switch (render_) {
	  case NONE:
	    break;
	  case AZIMUTH:
	  case ELEVATION:
	    if (timer_) {
	      if (!status_)
		status_ = 2;
	    }
	    else {
	      status_ = 2;
	      render3dTimer(this);
	    }
	    break;
	  }
	}
	else {
	  // just in case
	  if (thread_)
	    cancelDetach();

	  BBox3d bb = imageBounds(width, height, mm);
	  rt_ = new RayTrace(az_, el_, width, height, mm, bb);

	  // are we very small?
	  if (bb.volume() < 1.25e7*nthreads_) {
	    // yes, just do it
	    if (!fillImageJoin(rt_))
	      return NULL;
	    img = fillImageColor(rt_);
	    cacheIt(cache_, rt_);
	    rt_ =NULL;

	    // start background
	    switch (render_) {
	    case NONE:
	      break;
	    case AZIMUTH:
	    case ELEVATION:
	      status_ = 2;
	      if (!timer_)
		render3dTimer(this);
	      break;
	    }
	  }
	  else {
	    // ok, start the build process
	    fillImageDetach(rt_);
	    img = fillImageColor(rt_);

	    // start primary
	    status_ = 1;
	    if (!timer_)
	      render3dTimer(this);
	  }
	}
      }
      else
	img = fillImageColor(rt_);
    }
    break;
  case Coord::PANNER:
    {
      RayTrace* rt = findInCache(pannerCache_, az_, el_);
      if (!rt) {
	BBox3d bb = imageBounds(width, height, mm);
	rt = new RayTrace(az_, el_, width, height, mm, bb);
	if (!fillImageJoin(rt))
	  return NULL;
	cacheIt(pannerCache_, rt);
      }
      img = fillImageColor(rt);
    }
    break;
  case Coord::PS:
    {
      BBox3d bb = imageBounds(width, height, mm);
      RayTrace* rt = new RayTrace(az_, el_, width, height, mm, bb);
      if (!fillImageJoin(rt))
	return NULL;
      img = fillImageColor(rt);
      if (rt)
	delete rt;
    }
    break;
  default:
    // na
    break;
  }

  return img;
}

void* raytrace(void* arg)
{
  t_arg* targ = (t_arg*)arg;
  Frame3dBase::RenderMethod renderMethod = targ->renderMethod;
  int width = targ->width;
  float* zbuf = targ->zbuf;
  unsigned char* mkzbuf = targ->mkzbuf;
  Context* context = targ->context;

  int* xid = targ->xid;
  int* yid = targ->yid;
  int start = targ->start;
  int stop = targ->stop;
  int zstart = targ->zstart;
  int zstop = targ->zstop;

  // this will be incorrect for multiple ext/file cubes
  int srcd = context->naxis(2);
  double* mm = targ->matrix.mm();

  FitsImage* ptr = context->fits;

  // if more than 3 axes, walk it forward
  int num = context->calcSlice();
  for (int ii=1; ii<num; ii++)
    if (ptr)
      ptr = ptr->nextSlice();

  // slice jump vector
  FitsImage* sjv[srcd];
  FitsImage* sptr = ptr;
  int ii=0;
  while (sptr) {
    sjv[ii++] = sptr;
    if (sptr)
      sptr = sptr->nextSlice();
  }

  FitsBound* params = context->fits->getDataParams(context->secMode());
  FitsZBound* zparams = context->getDataParams(context->secMode());
  int srcw = context->fits->width();

  targ->rays =0;
  for (int ll=start; ll<=stop; ll++, targ->rays++) {
    int& jj = yid[ll];
    int& ii = xid[ll];

    double ii0 = ii*mm[0];
    double ii1 = ii*mm[1];
    double ii2 = ii*mm[2];
    double jj4 = jj*mm[4];
    double jj5 = jj*mm[5];
    double jj6 = jj*mm[6];

    int cnt=0;
    float acc=0;
    float max = -FLT_MAX;

    int kks = zstart;
    int kkt = zstop;

    // good abort point
    if (targ->abort) {
      targ->done =1;
      return 0;
    }

    int inside =0;
    for (int kk=kks; kk<kkt; kk++) {
      double xx = ii0 + jj4 + kk*mm[8]  + mm[12];
      double yy = ii1 + jj5 + kk*mm[9]  + mm[13];
      double zz = ii2 + jj6 + kk*mm[10] + mm[14];

      if (xx>=params->xmin && xx<params->xmax && 
	  yy>=params->ymin && yy<params->ymax &&
	  zz>=zparams->zmin && zz<zparams->zmax) {
	float value = sjv[int(zz)]->getValueDouble(long(yy)*srcw+long(xx));
	inside =1;

	// ignore nan
	if (isfinite(value)) {
	  if (value>max)
	    max = value;
	  cnt++;
	  acc+=value;
	}
      }
      else {
	// early determination
	if (inside)
	  break;
      }
    }

    if (cnt) {
      float* dest = zbuf + jj*width + ii;
      unsigned char* mkdest = mkzbuf + jj*width + ii;

      switch (renderMethod) {
      case Frame3dBase::MIP:
	*dest =max;
	break;
      case Frame3dBase::AIP:
	*dest =acc/cnt;
	break;
      }

      *mkdest=1;
    }
  }

  targ->done=1;
  return NULL;
}

int Frame3d::fillImageJoin(RayTrace* rt)
{
  BBox3d& bb = rt->bb_;

  Vector3d dd=bb.size();
  int ww = dd[0];
  int hh = dd[1];
  int zz = dd[2];

  // sanity check
  if (ww<=0 || hh<=0 || zz<=0)
    return 1;

  // local var overide
  int nrays = ww*hh;
  float incr = nrays/nthreads_;
  int* xid = new int[nrays];
  int* yid = new int[nrays];
  int x=bb.ll[0]+.5; // don't know why;
  int y=bb.ll[1]+.5; // don't know why

  // init array
  for (int jj=0; jj<hh; jj++) {
    for (int ii=0; ii<ww; ii++) {
      xid[jj*ww+ii] = ii+x;
      yid[jj*ww+ii] = jj+y;
    }
  }

  // local var overide
  pthread_t thread[nthreads_];
  t_arg* targ = new t_arg[nthreads_];

  for (int ii=0; ii<nthreads_; ii++) {
    targ[ii].renderMethod = renderMethod_;
    targ[ii].width = rt->width_;
    targ[ii].zbuf = rt->zbuf_;
    targ[ii].mkzbuf = rt->mkzbuf_;
    targ[ii].context = context;

    targ[ii].matrix = rt->mm_;

    targ[ii].xid = xid;
    targ[ii].yid = yid;
    targ[ii].start = incr*ii;
    if (ii+1<nthreads_)
      targ[ii].stop = incr*(ii+1)-1;
    else
      targ[ii].stop = nrays-1;
    targ[ii].zstart = bb.ll[2];
    targ[ii].zstop = bb.ur[2];

    targ[ii].rays =0;
    targ[ii].abort =0;
    targ[ii].done =0;
  }

  for (int ii=0; ii<nthreads_; ii++) {
    int rr = pthread_create(&thread[ii], NULL, raytrace, &targ[ii]);
    if (rr)
      internalError("Unable to Create Thread");
  }

  // clean up threads
  for (int ii=0; ii<nthreads_; ii++) {
    int rr = pthread_join(thread[ii], NULL);
    if (rr)
      internalError("Unable to Join Thread");
  }

  if (targ)
    delete [] targ;
  if (xid)
    delete [] xid;
  if (yid)
    delete [] yid;

  return 1;
}

void Frame3d::fillImageDetach(RayTrace* rt)
{
  BBox3d& bb = rt->bb_;

  Vector3d dd=bb.size();
  int ww = dd[0];
  int hh = dd[1];
  int zz = dd[2];

  // sanity check
  if (ww<=0 || hh<=0 || zz<=0)
    return;

  nrays_ = ww*hh;
  float incr = nrays_/nthreads_;
  if (xid_)
    delete [] xid_;
  xid_ = new int[nrays_];
  if (yid_)
    delete [] yid_;
  yid_ = new int[nrays_];
  int x=bb.ll[0]+.5; // don't know why
  int y=bb.ll[1]+.5; // don't know why

  // init array
  for (int jj=0; jj<hh; jj++) {
    for (int ii=0; ii<ww; ii++) {
      xid_[jj*ww+ii] = ii+x;
      yid_[jj*ww+ii] = jj+y;
    }
  }

  // randomize array
  for (int kk=nrays_-1; kk>0; kk--) {
    int ll = rand() % (kk+1); // 0 <= ll <= kk
    if (ll!=kk) {
      int tx = xid_[kk];
      int ty = yid_[kk];
      xid_[kk]=xid_[ll];
      yid_[kk]=yid_[ll];
      xid_[ll]=tx;
      yid_[ll]=ty;
    }
  }

  // init threads
  thread_ = new pthread_t[nthreads_];
  targ_ = new t_arg[nthreads_];

  for (int ii=0; ii<nthreads_; ii++) {
    targ_[ii].renderMethod = renderMethod_;
    targ_[ii].width = rt->width_;
    targ_[ii].zbuf = rt->zbuf_;
    targ_[ii].mkzbuf = rt->mkzbuf_;
    targ_[ii].context = context;

    targ_[ii].matrix = rt->mm_;

    targ_[ii].xid = xid_;
    targ_[ii].yid = yid_;
    targ_[ii].start = incr*ii;
    if (ii+1<nthreads_)
      targ_[ii].stop = incr*(ii+1)-1;
    else
      targ_[ii].stop = nrays_-1;

    targ_[ii].zstart = bb.ll[2];
    targ_[ii].zstop = bb.ur[2];

    targ_[ii].rays =0;
    targ_[ii].abort =0;
    targ_[ii].done =0;
  }

  for (int ii=0; ii<nthreads_; ii++) {
    int rr = pthread_create(&thread_[ii], NULL, raytrace, &targ_[ii]);
    if (rr)
      internalError("Unable to Create Thread");
  }

  return;
}

void Frame3d::cancelDetach()
{
  // this will only be called for fillImageDetach()

  // abort any threads
  if (thread_) {
    // set cancel flag
    for (int ii=0; ii<nthreads_; ii++)
      targ_[ii].abort =1;

    // now wait until done
    for (int ii=0; ii<nthreads_; ii++) {
      int rr = pthread_join(thread_[ii], NULL);
      if (rr)
	internalError("Unable to Join Thread");
    }
  }

  if (thread_)
    delete [] thread_;
  thread_ = NULL;
  if (targ_)
    delete [] targ_;
  targ_ = NULL;

  status_ =0;
  nrays_ =0;

  if (xid_)
    delete [] xid_;
  xid_ =NULL;
  if (yid_)
    delete [] yid_;
  yid_ =NULL;

  // delete primary
  if (rt_)
    delete rt_;
  rt_ = NULL;

  // delete background
  if (rtb_)
    delete rtb_;
  rtb_ = NULL;
  rtbcnt_ =0;
}

int Frame3d::processDetach()
{
  // this will only be called for fillImageDetach()

  switch (status_) {
  case 0:
    // clear progress bar
    Tcl_SetVar2(interp,"ithreed","status","0",TCL_GLOBAL_ONLY);

    // make sure magnifier is updated
    updateMagnifier();

    // stop running
    return 0;

  case 1:
    // process primary image
    {
      // anything running?
      // should not see this
      if (!thread_) {
	status_ = 0;
	return 1;
      }

      // we done yet?
      int sum=0;
      for (int ii=0; ii<nthreads_; ii++)
	sum += targ_[ii].done;

      if (sum == nthreads_) {
	for (int ii=0; ii<nthreads_; ii++) {
	  int rr = pthread_join(thread_[ii], NULL);
	  if (rr)
	    internalError("Unable to Join Thread");
	}

	if (thread_)
	  delete [] thread_;
	thread_ = NULL;
	if (targ_)
	  delete [] targ_;
	targ_ = NULL;

	status_ =0;
	nrays_ =0;

	if (xid_)
	  delete [] xid_;
	xid_ = NULL;
	if (yid_)
	  delete [] yid_;
	yid_ =NULL;

	// cache
	cacheIt(cache_, rt_);
	rt_ =NULL;

	// clear progress bar
	Tcl_SetVar2(interp,"ithreed","status","0",TCL_GLOBAL_ONLY);

	// update image
	update(BASEONLY);

	status_ = 2;
	return 1;
      }
      else {
	//progressbar
	int rays=0;
	for (int ii=0; ii<nthreads_; ii++)
	  rays += targ_[ii].rays;

	ostringstream str;
	str << int(float(rays)/nrays_*100.) << ends;
	Tcl_SetVar2(interp,"ithreed","status",str.str().c_str(),
		    TCL_GLOBAL_ONLY);

	// update image
	update(BASEONLY);
      }
    }
    return 1;

  case 2:
    // anything running?
    // should not see this
    if (thread_) {
      status_ = 0;
      return 1;
    }

    // init background
    {
      rtbcnt_ =0;

      // alternate back in forth about current position,
      // looking for unrendered postions
      switch (render_) {
      case NONE:
	break;

      case AZIMUTH:
	{
	  int org = floor(radToDeg(az_));
	  if (org>180)
	    org = org-360;
	  int cnt =1;
	  while (!((org+cnt)>180 && (org-cnt)<-180)) {
	    if ((org+cnt)<=180)
	      if (bkgDetach(degToRad(org+cnt),el_))
		return 1;

	    if ((org-cnt)>=-180)
	      if (bkgDetach(degToRad(org-cnt),el_))
		return 1;

	    cnt++;
	  }
	}
	break;

      case ELEVATION:
	{
	  int org = floor(radToDeg(el_));
	  if (org>180)
	    org = org-360;
	  int cnt =1;
	  while (!((org+cnt)>90 && (org-cnt)<-90)) {
	    if ((org+cnt)<=90)
	      if (bkgDetach(az_,degToRad(org+cnt)))
		return 1;

	    if ((org-cnt)>=-90)
	      if (bkgDetach(az_,degToRad(org-cnt)))
		return 1;

	    cnt++;
	  }
	}
	break;
      }

      status_ = 0;
      return 1;
    }

  case 3:
    // process background
    {
      if (!thread_) {
	// cache
	cacheIt(cache_, rtb_);
	rtb_ =NULL;

	// and do the next one
	status_ = 2;
      }
      else {
	// we done yet?
	int sum=0;
	for (int ii=0; ii<nthreads_; ii++)
	  sum += targ_[ii].done;

	if (sum == nthreads_) {
	  for (int ii=0; ii<nthreads_; ii++) {
	    int rr = pthread_join(thread_[ii], NULL);
	    if (rr)
	      internalError("Unable to Join Thread");
	  }

	  if (thread_)
	    delete [] thread_;
	  thread_ = NULL;
	  if (targ_)
	    delete [] targ_;
	  targ_ = NULL;

	  status_ =0;
	  nrays_ =0;

	  if (xid_)
	    delete [] xid_;
	  xid_ = NULL;
	  if (yid_)
	    delete [] yid_;
	  yid_ =NULL;

	  // cache
	  cacheIt(cache_, rtb_);
	  rtb_ =NULL;

	  // and do the next one
	  status_ = 2;
	}
      }

      //progressbar
      int nn=0;
      switch (render_) {
      case NONE:
	break;
      case AZIMUTH:
	nn = 360+1;
	break;
      case ELEVATION:
	nn = 180+1;
	break;
      }

      ostringstream str;
      str << int(float(rtbcnt_)/nn*100.) << ends;
      Tcl_SetVar2(interp,"ithreed","status",str.str().c_str(),TCL_GLOBAL_ONLY);
    }

    return 1;
  }

  return 0;
}

int Frame3d::bkgDetach(double az, double el) {
  if (!findInCache(cache_, az,el)) {
    if (rtb_)
      delete rtb_;

    // hardcoded for WIDGET
    Matrix3d userToWidget3d =
      Matrix3d(wcsOrientationMatrix) *
      Matrix3d(orientationMatrix) *
      RotateZ3d(-wcsRotation) *
      RotateZ3d(-rotation) *

      RotateY3d(az) * 
      RotateX3d(el) *

      Translate3d(viewCursor_) *
      Scale3d(zoom_, zzoom_) *

      // must be int to align with screen pixels
      Translate3d((int)(options->width/2.), (int)(options->height/2.), 
		  (int)(zdepth_/2.));

    Matrix3d refToWidget3d = refToUser3d * userToWidget3d;
    Matrix3d mm = (context->fits->dataToRef3d * refToWidget3d).invert();
    BBox3d bb = imageBounds(options->width, options->height, mm);

    rtb_ = new RayTrace(az, el, options->width, options->height, mm, bb);
    fillImageDetach(rtb_);

    status_ =3;
    return 1;
  }

  rtbcnt_++;
  return 0;
}

void Frame3d::cacheIt(List<RayTrace>& cache, RayTrace* rt)
{
  // hard coded
  int max = (render_ == NONE) ? 256 : 361+181;

  if (rt) {
    cache.append(rt);
    if (cache.count() >= max) {
      RayTrace* ptr = cache.fifo();
      if (ptr)
	delete ptr;
    }
  }
}

unsigned char* Frame3d::fillImageColor(RayTrace* rt)
{
  int width = rt->width_;
  int height = rt->height_;
  float* zbuf = rt->zbuf_;
  unsigned char* mkzbuf = rt->mkzbuf_;

  unsigned char* img = new unsigned char[width*height*3];
  if (!img)
    return NULL;
  memset(img, 0, width*height*3);

  int length = colorScale->size() - 1;
  const unsigned char* table = colorScale->psColors();

  double ll = keyContext->fits->low();
  double hh = keyContext->fits->high();
  double diff = hh - ll;

  XColor* bgColor = useBgColor? getXColor(bgColourName) :
    ((WidgetOptions*)options)->bgColor;

  unsigned char* dest = img;
  float* src = zbuf;
  unsigned char* mksrc = mkzbuf;

  for (int jj=0; jj<height; jj++) {
    for (int ii=0; ii<width; ii++, dest+=3, src++, mksrc++) {
      *dest = (unsigned char)bgColor->red;
      *(dest+1) = (unsigned char)bgColor->green;
      *(dest+2) = (unsigned char)bgColor->blue;

      // will not see nan
      if (isfinite(diff)) {
	if (*mksrc) {
	  float value = *src;

	  if (value <= ll) {
	    *(dest+2) = table[0];
	    *(dest+1) = table[1];
	    *dest = table[2];
	  }
	  else if (value >= hh) {
	    *(dest+2) = table[length*3];
	    *(dest+1) = table[length*3+1];
	    *dest = table[length*3+2];
	  }
	  else {
	    int l = (int)(((value - ll)/diff * length) + .5);
	    *(dest+2) = table[l*3];
	    *(dest+1) = table[l*3+1];
	    *dest = table[l*3+2];
	  }
	}
      }
    }
  }

  return img;
}

RayTrace* Frame3d::findInCache(List<RayTrace>& cache, double az, double el)
{
  double rr = degToRad(.5);
  RayTrace* ptr = cache.head();
  while (ptr) {
    double raz = ptr->az_ - az;
    double rel = ptr->el_ - el;
    if ((raz*raz + rel*rel) < rr*rr)
      return ptr;
    ptr=ptr->next();
  }

  return NULL;
}

BBox3d Frame3d::imageBounds(int width, int height, Matrix3d mm)
{
  Matrix3d mx = mm.invert();

  FitsBound* params = keyContext->fits->getDataParams(keyContext->secMode());
  FitsZBound* zparams = keyContext->getDataParams(keyContext->secMode());

  // add a buffer around due to round off
  int xmin = params->xmin -1;
  int xmax = params->xmax +1;
  int ymin = params->ymin -1;
  int ymax = params->ymax +1;
  int zmin = zparams->zmin -1;
  int zmax = zparams->zmax +1;

  Vector3d llf = Vector3d(xmin,ymin,zmin) * mx;
  Vector3d lrf = Vector3d(xmax,ymin,zmin) * mx;
  Vector3d urf = Vector3d(xmax,ymax,zmin) * mx;
  Vector3d ulf = Vector3d(xmin,ymax,zmin) * mx;

  Vector3d llb = Vector3d(xmin,ymin,zmax) * mx;
  Vector3d lrb = Vector3d(xmax,ymin,zmax) * mx;
  Vector3d urb = Vector3d(xmax,ymax,zmax) * mx;
  Vector3d ulb = Vector3d(xmin,ymax,zmax) * mx;

  BBox3d bb(llf);
  bb.bound(lrf);
  bb.bound(urf);
  bb.bound(ulf);
  bb.bound(llb);
  bb.bound(lrb);
  bb.bound(urb);
  bb.bound(ulb);

  if (bb.ll[0]<0)
    bb.ll[0] = 0;
  if (bb.ll[1]<0)
    bb.ll[1] = 0;
    
  if (bb.ur[0]>width)
    bb.ur[0] = width;
  if (bb.ur[1]>height)
    bb.ur[1] = height;
    
  // try to limit the z depth, sometime will fail
  double zz0 = zdepth_;
  double zz1 = 0;
  for (int kk=zmin; kk<=zmax; kk++) {
    // 4 corners
    ibv3d(Vector3d(xmin,ymin,kk), mx, width, height, &zz0, &zz1);
    ibv3d(Vector3d(xmax,ymin,kk), mx, width, height, &zz0, &zz1);
    ibv3d(Vector3d(xmax,ymax,kk), mx, width, height, &zz0, &zz1);
    ibv3d(Vector3d(xmin,ymax,kk), mx, width, height, &zz0, &zz1);
    // center
    ibv3d(Vector3d((xmax-xmin)/2.,(ymax-ymin)/2.,kk), mx, width, height,
	  &zz0, &zz1);
  }
  
  if (zz0<zz1) {
    bb.ll[2]=zz0;
    bb.ur[2]=zz1;
  }

  return bb;
}

void Frame3d::ibv3d(Vector3d uu, Matrix3d& mm, int ww, int hh, 
		  double* zz0, double* zz1)
{
  Vector3d vv = uu*mm;
  if (vv[0]>=0 && vv[0]<=ww && vv[1]>=0 && vv[1]<=hh) {
    if (vv[2] < *zz0)
      *zz0 = vv[2];
    if (vv[2] > *zz1)
      *zz1 = vv[2];
  }
}

void Frame3d::reset()
{
  // don't change cmap
  //  cmapID = 1;
  //  bias = 0.5;
  //  contrast = 1.0;
  keyContext->resetSecMode();
  keyContext->updateClip();

  Base::reset();
}

void Frame3d::updateColorCells(unsigned char* cells, int cnt)
{
  colorCount = cnt;
  if (colorCells)
    delete [] colorCells;
  colorCells = new unsigned char[cnt*3];
  if (!colorCells) {
    internalError("Unable to Alloc colorCells");
    return;
  }
  memcpy(colorCells, cells, cnt*3);
}

void Frame3d::pushMatrices()
{
  // alway identity
  Matrix rgbToRef; 
  Base::pushMatrices(keyContext->fits, rgbToRef);

  FitsImage* ptr = keyContext->fits;
  while (ptr) {
    FitsImage* sptr = ptr;
    while (sptr) {
      sptr->updateMatrices(refToUser3d, userToWidget3d, widgetToCanvas3d,
			   canvasToWindow3d);
      sptr = sptr->nextSlice();
    }
    ptr = ptr->nextMosaic();
  }
}

void Frame3d::pushPannerMatrices()
{
  Base::pushPannerMatrices(keyContext->fits);

  FitsImage* ptr = keyContext->fits;
  while (ptr) {
    FitsImage* sptr = ptr;
    while (sptr) {
      sptr->updatePannerMatrices(refToPanner3d);
      sptr = sptr->nextSlice();
    }
    ptr = ptr->nextMosaic();
  }
}

void Frame3d::pushMagnifierMatrices()
{
  Base::pushMagnifierMatrices(keyContext->fits);

  FitsImage* ptr = keyContext->fits;
  while (ptr) {
    FitsImage* sptr = ptr;
    while (sptr) {
      sptr->updateMagnifierMatrices(refToMagnifier3d);
      sptr = sptr->nextSlice();
    }
    ptr = ptr->nextMosaic();
  }
}

void Frame3d::pushPSMatrices(float scale, int width, int height)
{
  Base::pushPSMatrices(keyContext->fits, scale, width, height);

  Matrix3d mx = psMatrix(scale, width, height);
  FitsImage* ptr = keyContext->fits;
  while (ptr) {
    FitsImage* sptr = ptr;
    while (sptr) {
      sptr->updatePS(mx);
      sptr = sptr->nextSlice();
    }
    ptr = ptr->nextMosaic();
  }
}

void Frame3d::unloadFits()
{
  if (DebugPerf)
    cerr << "Frame3d::unloadFits()" << endl;

  // kill any active threads
  cancelDetach();

  keyContext->unload();

  Base::unloadFits();
}

// Commands

void Frame3d::colormapCmd(int id, float b, float c, int i, 
				   unsigned char* cells, int cnt)
{
  cmapID = id;
  bias = b;
  contrast = c;
  invert = i;

  updateColorCells(cells, cnt);
  updateColorScale();
  update(BASE);
}

void Frame3d::colormapEndCmd()
{
  update(BASE);
}

void Frame3d::getColorbarCmd()
{
  ostringstream str;
  str << cmapID << ' ' << bias << ' ' << contrast << ' ' << invert << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Frame3d::getRGBChannelCmd()
{
  Tcl_AppendResult(interp, "red", NULL);
}

void Frame3d::getRGBViewCmd()
{
  Tcl_AppendResult(interp, "1 1 1", NULL);
}

void Frame3d::getRGBSystemCmd()
{
  Tcl_AppendResult(interp, "image", NULL);
}

void Frame3d::getTypeCmd()
{
  Tcl_AppendResult(interp, "3d", NULL);
}

void Frame3d::savePhotoCmd(const char* ph)
{
  FitsImage* fits = currentContext->cfits;
  if (!fits)
    return;

  // basics
  int length = colorScale->size() - 1;
  const unsigned char* table = colorScale->psColors();

  // variable
  FitsBound* params = fits->getDataParams(context->secMode());
  double ll = fits->low();
  double hh = fits->high();
  double diff = hh - ll;

  int width = params->xmax - params->xmin;
  int height = params->ymax - params->ymin;

  // photo
  if (*ph == '\0') {
    Tcl_AppendResult(interp, "bad image name ", NULL);
    return;
  }
  Tk_PhotoHandle photo = Tk_FindPhoto(interp, ph);
  if (!photo) {
    Tcl_AppendResult(interp, "bad image handle ", NULL);
    return;
  }
  if (Tk_PhotoSetSize(interp, photo, width, height) != TCL_OK) {
    Tcl_AppendResult(interp, "bad photo set size ", NULL);
    return;
  }    
  Tk_PhotoBlank(photo);
  Tk_PhotoImageBlock block;
  if (!Tk_PhotoGetImage(photo,&block)) {
    Tcl_AppendResult(interp, "bad image block ", NULL);
    return;
  }

  if (block.pixelSize<4) {
    Tcl_AppendResult(interp, "bad pixel size ", NULL);
    return;
  }

  XColor* nanColor = getXColor(nanColourName);

  // main loop
  SETSIGBUS
  unsigned char* dest = block.pixelPtr;
  for (long jj=params->ymax-1; jj>=params->ymin; jj--) {
    for (long ii=params->xmin; ii<params->xmax; ii++, dest += block.pixelSize) {
      double value = fits->getValueDouble(Vector(ii,jj));

      if (isfinite(value)) {
	if (value <= ll) {
	  *(dest+block.offset[0]) = table[2];
	  *(dest+block.offset[1]) = table[1];
	  *(dest+block.offset[2]) = table[0];
	  *(dest+block.offset[3]) = 255;
	}
	else if (value >= hh) {
	  *(dest+block.offset[0]) = table[length*3+2];
	  *(dest+block.offset[1]) = table[length*3+1];
	  *(dest+block.offset[2]) = table[length*3];
	  *(dest+block.offset[3]) = 255;
	}
	else {
	  int l = (int)(((value - ll)/diff * length) + .5);
	  *(dest+block.offset[0]) = table[l*3+2];
	  *(dest+block.offset[1]) = table[l*3+1];
	  *(dest+block.offset[2]) = table[l*3];
	  *(dest+block.offset[3]) = 255;
	}
      }
      else {
	*(dest+block.offset[0]) = nanColor->red;
	*(dest+block.offset[1]) = nanColor->green;
	*(dest+block.offset[2]) = nanColor->blue;
	*(dest+block.offset[3]) = 255;
      }
    }
  }
  CLEARSIGBUS

  if (Tk_PhotoPutBlock(interp, photo, &block, 0, 0, width, height, 
			TK_PHOTO_COMPOSITE_SET) != TCL_OK) {
    Tcl_AppendResult(interp, "bad put block ", NULL);
    return;
  }
}
