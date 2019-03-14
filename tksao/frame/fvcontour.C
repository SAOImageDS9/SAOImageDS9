// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

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
}

FVContour::~FVContour()
{
  if (colorName_)
    delete [] colorName_;

  if (level_)
    delete [] level_;

  if (scale_)
    delete scale_;
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

  append(fits);
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

  append(fits);
}

const char* FVContour::methodName()
{
  return methodName_[method_];
}

void FVContour::append(FitsImage* fits)
{
  if (smooth_ == 1)
    unity(fits);
  else
    switch (method_) {
    case SMOOTH:
      nobin(fits);
      break;
    case BLOCK:
      bin(fits);
      break;
    }
}

void FVContour::unity(FitsImage* fits)
{
  FitsBound* params = 
    fits->getDataParams(((Base*)parent_)->currentContext->secMode());
  long width = fits->width();
  long height = fits->height();

  // blank img
  long size = width*height;
  double* img = new double[size];
  if (!img) {
    internalError("FVContour could not allocate enough memory");
    return;
  }
  for (long ii=0; ii<size; ii++)
    img[ii] = FLT_MIN;

  // fill img
  SETSIGBUS
  for(long jj=params->ymin; jj<params->ymax; jj++) {
    for(long ii=params->xmin; ii<params->xmax; ii++) {
      long kk = jj*width + ii;

      double vv = fits->getValueDouble(kk);
      if (isfinite(vv))
	img[kk] = vv;
    }
  }
  CLEARSIGBUS

  // do contours
  build(width, height, img, fits->dataToRef);

  // clean up
  delete [] img;
}

void FVContour::nobin(FitsImage* fits)
{
  long width = fits->width();
  long height = fits->height();

  // blank img
  long size = width*height;
  double* img = new double[size];
  if (!img) {
    internalError("FVContour could not allocate enough memory");
    return;
  }
  for (long ii=0; ii<size; ii++)
    img[ii] = FLT_MIN;

  // generate kernel
  int r = smooth_-1;
  double* kernel = NULL;

  if (0)
    kernel = gaussian(r);
  else {
    int rr = 2*r+1;
    double sigma = r/2.;
    int ksz = rr*rr;
    kernel = new double[ksz];
    memset(kernel, 0, ksz*sizeof(double));
    ::gaussian(kernel, r, sigma);
  }

  // convolve
  convolve(fits,kernel,img,r);
  
  // now, do contours
  build(width, height, img, fits->dataToRef);

  // cleanup
  delete kernel;
  delete [] img;
}

void FVContour::convolve(FitsImage* fits, double* kernel, double* dest, int r)
{
  FitsBound* params = 
    fits->getDataParams(((Base*)parent_)->currentContext->secMode());
  long width = fits->width();
  int rr = 2*r+1;

  SETSIGBUS
  for (long jj=params->ymin; jj<params->ymax; jj++) {
    for (long ii=params->xmin; ii<params->xmax; ii++) {
      long ir  = ii-r;
      long irr = ii+r;
      long jr = jj-r;
      long jrr = jj+r;

      for (long n=jr, nn=0; n<=jrr; n++, nn++) {
	if (n>=params->ymin && n<params->ymax) {
	  for (long m=ir, mm=0; m<=irr; m++, mm++) {
	    if (m>=params->xmin && m<params->xmax) {
	      double vv = fits->getValueDouble(n*width+m);
	      if (isfinite(vv)) {
		double kk = kernel[nn*rr+mm];
		double* ptr = dest+(jj*width+ii);
		if (*ptr == FLT_MIN)
		  *ptr  = vv*kk;
		else
		  *ptr += vv*kk;
	      }
	    }
	  }
	}
      }
    }
  }
  CLEARSIGBUS
}

double* FVContour::tophat(int r)
{
  int rr = 2*r+1;
  int ksz = rr*rr;
  double* kernel = new double[ksz];
  memset(kernel, 0, ksz*sizeof(double));
  
  double kt = 0;
  for (int yy=-r; yy<=r; yy++) {
    for (int xx=-r; xx<=r; xx++) { 
      if ((xx*xx + yy*yy) <= r*r) {
	kernel[(yy+r)*rr+(xx+r)] = 1;
	kt++;
      }
    }
  }

  // normalize kernel
  for (int aa=0; aa<ksz; aa++)
    kernel[aa] /= kt;

  return kernel;
}

double* FVContour::gaussian(int r)
{
  int rr = 2*r+1;
  int ksz = rr*rr;
  double sigma = r/2.;
  double* kernel = new double[ksz];
  memset(kernel, 0, ksz*sizeof(double));
  
  double kt = 0;
  double aa = 1./(sigma*sigma);
  double cc = 1./(sigma*sigma);
  for (int yy=-r; yy<=r; yy++) {
    for (int xx=-r; xx<=r; xx++) { 
      if ((xx*xx + yy*yy) <= r*r) {
	double vv = exp(-.5*(aa*xx*xx + cc*yy*yy));
	kernel[(yy+r)*rr+(xx+r)] = vv;
	kt += vv;
      }
    }
  }

  // normalize kernel
  for (int aa=0; aa<ksz; aa++)
    kernel[aa] /= kt;

  return kernel;
}

void FVContour::bin(FitsImage* fits)
{
  FitsBound* params = 
    fits->getDataParams(((Base*)parent_)->currentContext->secMode());
  long width = fits->width();
  long height = fits->height();

  int rr = smooth_;

  long w2 = (long)(width/rr);
  long h2 = (long)(height/rr);

  Matrix m = 
    Translate((Vector(-width,-height)/2).floor()) * 
    Scale(1./rr) * 
    Translate((Vector(w2,h2)/2).floor());
  Matrix n = m.invert();
  double* mm = m.mm();

  double* img = new double[w2 * h2];
  {
    for (long jj=0; jj<h2; jj++)
      for (long ii=0; ii<w2; ii++)
	img[jj*w2 + ii] = FLT_MIN;
  }

  short* count = new short[w2 * h2];
  memset(count, 0, w2*h2*sizeof(short));

  SETSIGBUS
  for (long jj=params->ymin; jj<params->ymax; jj++) {
    for (long ii=params->xmin; ii<params->xmax; ii++) {
      double xx = ii*mm[0] + jj*mm[3] + mm[6];
      double yy = ii*mm[1] + jj*mm[4] + mm[7];

      if (xx >= 0 && xx < w2 && yy >= 0 && yy < h2) {
	long kk = (long(yy)*w2 + long(xx));
	double v = fits->getValueDouble(jj*width + ii);
	if (isfinite(v)) {
	  if (count[kk])
	    img[kk] += v;
	  else
	    img[kk] = v;

	  count[kk]++;
	}
      }
    }
  }

  for (long kk=0; kk<w2*h2; kk++)
    if (count[kk])
      img[kk] /= count[kk];

  CLEARSIGBUS

  delete [] count;

  Matrix w = n * fits->dataToRef;
  build(w2, h2, img, w);

  delete [] img;
}

void FVContour::build(long xdim, long ydim, double *image, Matrix& mx)
{
  long nelem = xdim*ydim;
  char* usedGrid = new char[nelem];
  double** rows = new double*[ydim];

  for (long jj=0; jj<ydim; jj++)
    rows[jj] = image + jj*xdim;

  for (long c=0; c<scale_->size(); c++) {
    double cntour = scale_->level(c);

    ContourLevel* cl =new ContourLevel(parent_, cntour, colorName_, lineWidth_, 
				       dash_, dlist_);
    memset(usedGrid,0,nelem);

    //  Search outer edge
    long ii,jj;

    //  Search top
    for (jj=0, ii=0; ii<xdim-1; ii++)
      if (rows[jj][ii]<cntour && cntour<=rows[jj][ii+1])
	trace(xdim, ydim, cntour, ii, jj, top, rows, usedGrid, mx, cl);

    //  Search right
    for (jj=0; jj<ydim-1; jj++)
      if (rows[jj][ii]<cntour && cntour<=rows[jj+1][ii])
	trace(xdim, ydim, cntour, ii-1, jj, right, rows, usedGrid, mx, cl);

    //  Search Bottom
    for (ii--; ii>=0; ii--)
      if (rows[jj][ii+1]<cntour && cntour<=rows[jj][ii])
	trace(xdim, ydim, cntour, ii, jj-1, bottom, rows, usedGrid, mx, cl);

    //  Search Left
    for (ii=0, jj--; jj>=0; jj--)
      if (rows[jj+1][ii]<cntour && cntour<=rows[jj][ii])
	trace(xdim, ydim, cntour, ii, jj, left, rows, usedGrid, mx, cl);

    //  Search each row of the image
    for (jj=1; jj<ydim-1; jj++)
      for (ii=0; ii<xdim-1; ii++)
	if (!usedGrid[jj*xdim + ii] && 
	    rows[jj][ii]<cntour && 
	    cntour<=rows[jj][ii+1])
	  trace(xdim, ydim, cntour, ii, jj, top, rows, usedGrid, mx, cl);

    if (!cl->lcontour().isEmpty())
      lcontourlevel_.append(cl);
  }

  delete [] usedGrid;
  delete [] rows;
}

void FVContour::trace(long xdim, long ydim, double cntr,
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
      case top:
	X = (cntr-a) / (b-a) + ii;
	Y = jj;
	break;
      case right:
	X = ii+1;
	Y = (cntr-b) / (c-b) + jj;
	break;
      case bottom:
	X = (cntr-c) / (d-c) + ii;
	Y = jj+1;
	break;
      case left:
	X = ii;
	Y = (cntr-a) / (d-a) + jj;
	break;
      }

    }
    else {
      if (side==top)
	usedGrid[jj*xdim + ii] = 1;

      do {
	if (++side == none)
	  side = top;

	switch (side) {
	case top:
	  if (a>=cntr && cntr>b) {
	    flag = 1;
	    X = (cntr-a) / (b-a) + ii;
	    Y = jj;
	    jj--;
	  }
	  break;
	case right:
	  if( b>=cntr && cntr>c ) {
	    flag = 1;
	    X = ii+1;
	    Y = (cntr-b) / (c-b) + jj;
	    ii++;
	  }
	  break;
	case bottom:
	  if( c>=cntr && cntr>d ) {
	    flag = 1;
	    X = (cntr-d) / (c-d) + ii;
	    Y = jj+1;
	    jj++;
	  }
	  break;
	case left:
	  if( d>=cntr && cntr>a ) {
	    flag = 1;
	    X = ii;
	    Y = (cntr-a) / (d-a) + jj;
	    ii--;
	  }
	  break;
	}
      } while (!flag);

      if (++side == none)
	side = top;
      if (++side == none)
	side = top;
      if (ii==xCell && jj==yCell && side==origSide)
	done = 1;
      if (ii<0 || ii>=xdim-1 || jj<0 || jj>=ydim-1)
	done = 1;
    }

    cc->lvertex().append(new Vertex(Vector(X+.5,Y+.5)*mx));
  }

  if (!cc->lvertex().isEmpty())
    cl->lcontour().append(cc);
  else
    delete cc;
}

