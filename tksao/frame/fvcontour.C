// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "fvcontour.h"
#include "context.h"
#include "base.h"
#include "fitsimage.h"
#include "convolve.h"

#include "sigbus.h"

#ifdef INTERP
#undef INTERP
#endif
#define INTERP (((Base*)parent_)->interp)

static const char* methodName_[] = { 
    "smooth",
    "block"
  };

enum Edge {TOP, RIGHT, BOTTOM, LEFT, NONE};

static void build(t_fvcontour_arg* tt);
static void trace(long xdim, long ydim, double cntr,
		  long xCell, long yCell, int side, 
		  double** rows, char* usedGrid, 
		  Matrix& mx, ContourLevel* cl);

// It is a modified version of contour code found in Fv 2.4
// Fv may be obtained from the HEASARC (High Energy Astrophysics Science
// Archive Research Center) FTOOLS Web site at:
// http://heasarc.gsfc.nasa.gov/ftools/fv.html

// The original author is unknown.

FVContour::FVContour()
{
  parent_ =NULL;

  colorName_ = dupstr("green");
  lineWidth_ =1;
  dash_ =0;
  dlist_[0] =8;
  dlist_[1] =3;

  method_ = BLOCK;
  smooth_ =4;
  numLevel_ =5;

  level_ =NULL;
  scale_ =NULL;
  kernel_ =NULL;
}

FVContour::~FVContour()
{
  if (colorName_)
    delete [] colorName_;

  if (level_)
    delete [] level_;

  if (scale_)
    delete scale_;

  if (kernel_)
    delete [] kernel_;
}

void FVContour::create(Base* pp, FitsImage* fits, FrScale* fr,
		       const char* cc, int ww, int dd, 
		       Method mm, int nn, int rr, 
		       const char* ll)
{
  lcontourlevel_.deleteAll();

  parent_ = pp;

  colorName_ = dupstr(cc);
  lineWidth_ = ww;
  dash_ = dd;

  method_ = mm;
  smooth_ = rr;
  numLevel_ = nn;
  frScale_ = *fr;

  level_ = dupstr(ll);

  if (level_ && strlen(level_)>0) {
    int cnt = 0;
    double levels[100];
    string x(level_);
    istringstream str(x);

    while ((cnt<100) && (str >> levels[cnt]))
      cnt++;

    scale_ = new InverseScale(cnt, levels);
  }
  else
    buildScale(fits);

  // generate kernel
  if (kernel_)
    delete [] kernel_;
  kernel_ = gaussian(smooth_-1, (smooth_-1)/2.);
}

void FVContour::buildScale(FitsImage* fits)
{
  switch (frScale_.colorScaleType()) {
  case FrScale::LINEARSCALE:
    scale_ = new LinearInverseScale(numLevel_, frScale_.low(), frScale_.high());
    break;
  case FrScale::LOGSCALE:
    scale_ = new LogInverseScale(numLevel_, frScale_.low(), frScale_.high(), frScale_.expo());
    break;
  case FrScale::POWSCALE:
    scale_ =  new PowInverseScale(numLevel_, frScale_.low(), frScale_.high(), frScale_.expo());
    break;
  case FrScale::SQRTSCALE:
    scale_ =  new SqrtInverseScale(numLevel_, frScale_.low(), frScale_.high());
    break;
  case FrScale::SQUAREDSCALE:
    scale_ =  new SquaredInverseScale(numLevel_, frScale_.low(), frScale_.high());
    break;
  case FrScale::ASINHSCALE:
    scale_ =  new AsinhInverseScale(numLevel_, frScale_.low(), frScale_.high());
    break;
  case FrScale::SINHSCALE:
    scale_ =  new SinhInverseScale(numLevel_, frScale_.low(), frScale_.high());
    break;
  case FrScale::HISTEQUSCALE:
    scale_ =  new HistEquInverseScale(numLevel_, frScale_.low(), frScale_.high(), frScale_.histequ(fits), HISTEQUSIZE);
    break;
  case FrScale::IISSCALE:
    scale_ = new IISInverseScale(numLevel_, frScale_.low(), frScale_.high(), fits->iisz());
    break;
  }
}

void FVContour::update(FitsImage* fits)
{
  lcontourlevel_.deleteAll();

  switch (frScale_.clipScope()) {
  case FrScale::GLOBAL:
    break;
  case FrScale::LOCAL:
    if (scale_)
      delete scale_;

    buildScale(fits);

    if (level_)
      delete [] level_;
    {
      ostringstream str;
      str << *scale_ << ends;
      level_ = dupstr(str.str().c_str());
    }
    break;
  }
}

const char* FVContour::methodName()
{
  return methodName_[method_];
}

void FVContour::append(List<ContourLevel> *lcl)
{
  while (lcl->head()) {
    ContourLevel* ncl = lcl->extract();
    lcontourlevel_.append(ncl);
  }
}

void FVContour::append(FitsImage* fits, pthread_t* thread, void* targ)
{
  if (smooth_ == 1)
    unity(fits, thread, targ);
  else
    switch (method_) {
    case SMOOTH:
      smooth(fits, thread, targ);
      break;
    case BLOCK:
      block(fits, thread, targ);
      break;
    }
}

static void* fvUnityThread(void*vv)
{
  t_fvcontour_arg* tt = (t_fvcontour_arg*)vv;
  build(tt);
  return NULL;
}

void FVContour::unity(FitsImage* fits, pthread_t* thread, void* targ)
{
  FitsBound* params = 
    fits->getDataParams(((Base*)parent_)->currentContext->secMode());
  long width = fits->width();
  long height = fits->height();
  Matrix mm = fits->dataToRef;

  long size = width*height;
  double* dest = new double[size];
  if (!dest) {
    internalError("FVContour could not allocate enough memory");
    return;
  }
  for (long ii=0; ii<size; ii++)
    dest[ii] = FLT_MIN;

  SETSIGBUS
  for(long jj=params->ymin; jj<params->ymax; jj++) {
    for(long ii=params->xmin; ii<params->xmax; ii++) {
      long kk = jj*width + ii;
      double vv = fits->getValueDouble(kk);
      if (isfinite(vv))
	dest[kk] = vv;
    }
  }
  CLEARSIGBUS

  int numcontour = scale()->size();
  double* contour = new double[numcontour];
  for (long ii=0; ii<numcontour; ii++)
    contour[ii] = scale()->level(ii);

  // contours
  t_fvcontour_arg* tt = (t_fvcontour_arg*)targ;
  tt->kernel = NULL;
  tt->src = NULL;
  tt->dest = dest;
  tt->xmin = 0;
  tt->xmax = 0;
  tt->ymin = 0;
  tt->ymax = 0;
  tt->width = width;
  tt->height = height;
  tt->r = 0;
  tt->mm = mm;
  tt->parent = parent_;
  tt->numcontour = numcontour;
  tt->contour = contour;
  tt->colorName = colorName_;
  tt->color = parent_->getColor(colorName_);
  tt->lineWidth = lineWidth_;
  tt->dash = dash_;
  tt->dlist = dlist_;
  tt->lcl = new List<ContourLevel>;

  int result = pthread_create(thread, NULL, fvUnityThread, targ);
  if (result)
    internalError("Unable to Create Thread");
}

static void* fvSmoothThread(void*vv)
{
  t_fvcontour_arg* tt = (t_fvcontour_arg*)vv;
  convolve(tt->kernel, tt->src, tt->dest,
	   tt->xmin, tt->ymin, tt->xmax, tt->ymax,
	   tt->width, tt->r);
  build(tt);
  return NULL;
}

void FVContour::smooth(FitsImage* fits, pthread_t* thread, void* targ)
{
  FitsBound* params =
    fits->getDataParams(((Base*)parent_)->currentContext->secMode());
  long width = fits->width();
  long height = fits->height();
  Matrix mm = fits->dataToRef;

  long size = width*height;
  double* src = new double[size];
  if (!src) {
    internalError("FVContour could not allocate enough memory");
    return;
  }
  for (long ii=0; ii<size; ii++)
    src[ii] = FLT_MIN;

  double* dest = new double[size];
  if (!dest) {
    internalError("FVContour could not allocate enough memory");
    return;
  }
  for (long ii=0; ii<size; ii++)
    dest[ii] = FLT_MIN;

  SETSIGBUS
  for(long jj=params->ymin; jj<params->ymax; jj++) {
    for(long ii=params->xmin; ii<params->xmax; ii++) {
      long kk = jj*width + ii;
      double vv = fits->getValueDouble(kk);
      if (isfinite(vv))
	src[kk] = vv;
    }
  }
  CLEARSIGBUS

  int numcontour = scale()->size();
  double* contour = new double[numcontour];
  for (long ii=0; ii<numcontour; ii++)
    contour[ii] = scale()->level(ii);

  // convolve
  t_fvcontour_arg* tt = (t_fvcontour_arg*)targ;
  tt->kernel = kernel_;
  tt->src = src;
  tt->dest = dest;
  tt->xmin = params->xmin;
  tt->xmax = params->xmax;
  tt->ymin = params->ymin;
  tt->ymax = params->ymax;
  tt->width = width;
  tt->height = height;
  tt->r = smooth_-1;
  tt->mm = mm;
  tt->parent = parent_;
  tt->numcontour = numcontour;
  tt->contour = contour;
  tt->colorName = colorName_;
  tt->color = parent_->getColor(colorName_);
  tt->lineWidth = lineWidth_;
  tt->dash = dash_;
  tt->dlist = dlist_;
  tt->lcl = new List<ContourLevel>;

  int result = pthread_create(thread, NULL, fvSmoothThread, targ);
  if (result)
    internalError("Unable to Create Thread");
}

static void* fvBlockThread(void*vv)
{
  t_fvcontour_arg* tt = (t_fvcontour_arg*)vv;
  build(tt);
  return NULL;
}

void FVContour::block(FitsImage* fits, pthread_t* thread, void* targ)
{
  FitsBound* params = 
    fits->getDataParams(((Base*)parent_)->currentContext->secMode());
  long width = fits->width();
  long height = fits->height();

  long w2 = (long)(width/smooth_);
  long h2 = (long)(height/smooth_);

  Matrix m = 
    Translate((Vector(-width,-height)/2).floor()) * 
    Scale(1./smooth_) * 
    Translate((Vector(w2,h2)/2).floor());
  Matrix n = m.invert();
  double* mx = m.mm();

  long size = w2*h2;
  double* dest = new double[size];
  if (!dest) {
    internalError("FVContour could not allocate enough memory");
    return;
  }
  for (long ii=0; ii<size; ii++)
    dest[ii] = FLT_MIN;

  short* count = new short[size];
  if (!count) {
    internalError("FVContour could not allocate enough memory");
    return;
  }
  memset(count, 0, size*sizeof(short));

  SETSIGBUS
  for (long jj=params->ymin; jj<params->ymax; jj++) {
    for (long ii=params->xmin; ii<params->xmax; ii++) {
      double xx = ii*mx[0] + jj*mx[3] + mx[6];
      double yy = ii*mx[1] + jj*mx[4] + mx[7];

      if (xx >= 0 && xx < w2 && yy >= 0 && yy < h2) {
	long kk = (long(yy)*w2 + long(xx));
	double v = fits->getValueDouble(jj*width + ii);
	if (isfinite(v)) {
	  if (count[kk])
	    dest[kk] += v;
	  else
	    dest[kk] = v;

	  count[kk]++;
	}
      }
    }
  }
  CLEARSIGBUS

  for (long kk=0; kk<size; kk++)
    if (count[kk])
      dest[kk] /= count[kk];
  delete [] count;

  int numcontour = scale()->size();
  double* contour = new double[numcontour];
  for (long ii=0; ii<numcontour; ii++)
    contour[ii] = scale()->level(ii);

  // contours
  Matrix mm = n * fits->dataToRef;
  t_fvcontour_arg* tt = (t_fvcontour_arg*)targ;
  tt->kernel = NULL;
  tt->src = NULL;
  tt->dest = dest;
  tt->xmin = 0;
  tt->xmax = 0;
  tt->ymin = 0;
  tt->ymax = 0;
  tt->width = w2;
  tt->height = h2;
  tt->r = 0;
  tt->mm = mm;
  tt->parent = parent_;
  tt->numcontour = numcontour;
  tt->contour = contour;
  tt->colorName = colorName_;
  tt->color = parent_->getColor(colorName_);
  tt->lineWidth = lineWidth_;
  tt->dash = dash_;
  tt->dlist = dlist_;
  tt->lcl = new List<ContourLevel>;

  int result = pthread_create(thread, NULL, fvBlockThread, targ);
  if (result)
    internalError("Unable to Create Thread");
}

void build(t_fvcontour_arg* tt)
{
  long xdim = tt->width;
  long ydim = tt->height;
  double* image = tt->dest;
  Matrix& mx = tt->mm;
  Base* parent = tt->parent;
  int numcontour = tt->numcontour;
  double* contour = tt->contour;
  char* colorName = tt->colorName;
  unsigned long color = tt->color;
  int lineWidth = tt->lineWidth;
  int dash = tt->dash;
  int* dlist = tt->dlist;
  List<ContourLevel>* lcl = tt->lcl;

  long nelem = xdim*ydim;
  char* usedGrid = new char[nelem];
  double** rows = new double*[ydim];

  for (long jj=0; jj<ydim; jj++)
    rows[jj] = image + jj*xdim;

  for (int kk=0; kk<numcontour; kk++) {
    double ct = contour[kk];

    ContourLevel* cl =new ContourLevel(parent, ct, colorName, color,
				       lineWidth, dash, dlist);
    memset(usedGrid,0,nelem);

    //  Search outer edge
    long ii,jj;

    //  Search top
    for (jj=0, ii=0; ii<xdim-1; ii++)
      if (rows[jj][ii]<ct && ct<=rows[jj][ii+1])
	trace(xdim, ydim, ct, ii, jj, TOP, rows, usedGrid, mx, cl);

    //  Search right
    for (jj=0; jj<ydim-1; jj++)
      if (rows[jj][ii]<ct && ct<=rows[jj+1][ii])
	trace(xdim, ydim, ct, ii-1, jj, RIGHT, rows, usedGrid, mx, cl);

    //  Search Bottom
    for (ii--; ii>=0; ii--)
      if (rows[jj][ii+1]<ct && ct<=rows[jj][ii])
	trace(xdim, ydim, ct, ii, jj-1, BOTTOM, rows, usedGrid, mx, cl);

    //  Search Left
    for (ii=0, jj--; jj>=0; jj--)
      if (rows[jj+1][ii]<ct && ct<=rows[jj][ii])
	trace(xdim, ydim, ct, ii, jj, LEFT, rows, usedGrid, mx, cl);

    //  Search each row of the image
    for (jj=1; jj<ydim-1; jj++)
      for (ii=0; ii<xdim-1; ii++)
	if (!usedGrid[jj*xdim + ii] && 
	    rows[jj][ii]<ct && 
	    ct<=rows[jj][ii+1])
	  trace(xdim, ydim, ct, ii, jj, TOP, rows, usedGrid, mx, cl);

    if (!cl->lcontour().isEmpty())
      lcl->append(cl);
      //      fv->lcontourlevel().append(cl);
  }

  delete [] usedGrid;
  delete [] rows;
}

void trace(long xdim, long ydim, double cntr,
	   long xCell, long yCell, int side, 
	   double** rows, char* usedGrid, 
	   Matrix& mx, ContourLevel* cl)
{
  long ii = xCell;
  long jj = yCell;
  int origSide = side;

  int init = 1;
  int done = (ii<0 || ii>=xdim-1 || (jj<0 && jj>=ydim-1));

  Contour* cc = new Contour(cl);

  while (!done) {
    int flag = 0;
    double a = rows[jj][ii];
    double b = rows[jj][ii+1];
    double c = rows[jj+1][ii+1];
    double d = rows[jj+1][ii];

    double X, Y;
    if (init) {
      init = 0;
      switch (side) {
      case TOP:
	X = (cntr-a) / (b-a) + ii;
	Y = jj;
	break;
      case RIGHT:
	X = ii+1;
	Y = (cntr-b) / (c-b) + jj;
	break;
      case BOTTOM:
	X = (cntr-c) / (d-c) + ii;
	Y = jj+1;
	break;
      case LEFT:
	X = ii;
	Y = (cntr-a) / (d-a) + jj;
	break;
      }

    }
    else {
      if (side==TOP)
	usedGrid[jj*xdim + ii] = 1;

      do {
	if (++side == NONE)
	  side = TOP;

	switch (side) {
	case TOP:
	  if (a>=cntr && cntr>b) {
	    flag = 1;
	    X = (cntr-a) / (b-a) + ii;
	    Y = jj;
	    jj--;
	  }
	  break;
	case RIGHT:
	  if( b>=cntr && cntr>c ) {
	    flag = 1;
	    X = ii+1;
	    Y = (cntr-b) / (c-b) + jj;
	    ii++;
	  }
	  break;
	case BOTTOM:
	  if( c>=cntr && cntr>d ) {
	    flag = 1;
	    X = (cntr-d) / (c-d) + ii;
	    Y = jj+1;
	    jj++;
	  }
	  break;
	case LEFT:
	  if( d>=cntr && cntr>a ) {
	    flag = 1;
	    X = ii;
	    Y = (cntr-a) / (d-a) + jj;
	    ii--;
	  }
	  break;
	}
      } while (!flag);

      if (++side == NONE)
	side = TOP;
      if (++side == NONE)
	side = TOP;
      if (ii==xCell && jj==yCell && side==origSide)
	done = 1;
      if (ii<0 || ii>=xdim-1 || jj<0 || jj>=ydim-1)
	done = 1;
    }

    cc->lvertex().append(new Vertex(Vector(X+.5,Y+.5) * mx));
  }

  if (!cc->lvertex().isEmpty())
    cl->lcontour().append(cc);
  else
    delete cc;
}
