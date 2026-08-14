// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "base.h"
#include "context.h"
#include "fitsimage.h"

#include "projection.h"
extern "C" {
#include "tkbltVector.h"
}

#include "sigbus.h"

#include <string>

static void appendFitsCard(std::string& out, const char* key, const char* value)
{
  char card[81];
  snprintf(card, sizeof(card), "%-8s= %20s", key, value);
  size_t len = strlen(card);
  memset(card + len, ' ', 80 - len);
  card[80] = '\0';
  out.append(card, 80);
}

static void appendFitsEnd(std::string& out)
{
  char card[81];
  memset(card, ' ', 80);
  memcpy(card, "END", 3);
  card[80] = '\0';
  out.append(card, 80);
}

static void padFitsBlock(std::string& out)
{
  size_t pad = 2880 - (out.size() % 2880);
  if (pad != 2880)
    out.append(pad, ' ');
}

static void appendFitsFloat(std::string& out, float value)
{
  union {
    float f;
    unsigned char b[4];
  } u;
  u.f = value;

#if WORDS_BIGENDIAN
  out.append((char*)u.b, 4);
#else
  out.push_back(u.b[3]);
  out.push_back(u.b[2]);
  out.push_back(u.b[1]);
  out.push_back(u.b[0]);
#endif
}

static int dCompare(const void* a, const void* b)
{
  double* aa = (double*)a;
  double* bb = (double*)b;

  if (*aa < *bb)
    return -1;
  if (*aa > *bb)
    return 1;
  return 0;
}

void Base::markerAnalysisHistogram(Marker* pp, double** x, double** y,
				  const BBox& bb, int num)
{
  // does not extend across mosaic boundries
  // uses currentContext
  FitsImage* ptr = isInCFits(pp->getCenter(),Coord::REF,NULL);
  if (!ptr)
    ptr = currentContext->cfits;

  int srcw = ptr->width();
  FitsBound* params = ptr->getDataParams(currentContext->secMode());

  double min =DBL_MAX;
  double max =-DBL_MAX;

  // take the bbox and extend to lower/upper pixel boundaries
  Vector ll = (bb.ll*ptr->refToData).floor();
  Vector ur = (bb.ur*ptr->refToData).ceil();

  int msize = int(ur[1]-ll[1])*int(ur[0]-ll[0]);
  double* marr = new double[msize];
  int* mask = new int[msize];
  memset(marr,0,msize*sizeof(double));
  memset(mask,0,msize*sizeof(int));

  // main loop
  SETSIGBUS
    int cnt =0;
    for (int jj=ll[1]; jj<ur[1]; jj++) {
      for (int ii=ll[0]; ii<ur[0]; ii++, cnt++) {
	if (ii>=params->xmin && ii<params->xmax && 
	    jj>=params->ymin && jj<params->ymax) {
	  // shift to center of pixel in DATA
	  Vector rr = Vector(ii,jj)+Vector(.5,.5);
	  Vector ss = rr*ptr->dataToRef;

	  if (pp->isIn(ss,Coord::REF)) {
	    double val =ptr->getValueDouble(long(jj)*srcw+long(ii));
	    // check for nan
	    if (isfinite(val)) {
	      marr[cnt] =val;
	      mask[cnt] =1;
	      if (val<min)
		min =val;
	      if (val>max)
		max =val;
	    }
	  }
	}
      }
    }
  CLEARSIGBUS

  // sanity check
  if (num<1)
    num = 1;

  // we need one extra max,0 value at the end
  int nn = num+1;
  *x = (double*)malloc(nn*sizeof(double));
  *y = (double*)malloc(nn*sizeof(double));
  memset(*x,0,nn*sizeof(double));
  memset(*y,0,nn*sizeof(double));

  double diff = max-min;
  int last = num-1;
  double* xx = *x;
  double* yy = *y;

  // check if we have any data
  if (!isfinite(diff))
    goto end;

  if (diff>0) {
    for (int ii=0; ii<nn; ii++)
      xx[ii] = (double)ii/last*diff + min;

    for (int ii=0; ii<msize; ii++) {
      if (mask[ii]) {
	double& val = marr[ii];
	if (val>=min && val<=max)
	  yy[(int)((val-min)/diff*last+.5)]++;
      }
    }
  }
  else {
    for (int ii=0; ii<nn; ii++)
      xx[ii] = min;

    for (int ii=0; ii<msize; ii++)
      if (mask[ii])
	yy[0]++;
  }


 end:
  if (marr)
    delete [] marr;
  if (mask)
    delete [] mask;
}

int Base::markerAnalysisPlot2d(Marker* pp, double** x, double** y, 
			       double** xc, double** yc, 
			       Vector& p1, Vector& p2, int width,
			       Coord::CoordSystem sys, Coord::SkyFrame sky,
			       Marker::AnalysisMethod method)
{
  Vector vv = p2-p1;
  int num = vv.length() +1;
  Vector ss = vv.normalize();
  Vector uu = Vector(-ss[1],ss[0]);
  int cnt[num];

  *x = (double*)malloc(num*sizeof(double));
  *y = (double*)malloc(num*sizeof(double));
  *xc = (double*)malloc(num*sizeof(double));
  *yc = (double*)malloc(num*sizeof(double));

  int mosaic = isMosaic();
  FitsImage* sptr = currentContext->cfits;
  FitsBound* params = sptr->getDataParams(currentContext->secMode());

  if (width==0)
    width =1;

  double* marr = new double[width];

  // main loop

  SETSIGBUS
  for (int ii=0; ii<num; ii++) {
    int found=0;

    (*x)[ii] = ii+1;
    (*y)[ii] = 0;
    (*xc)[ii] = ii+1;
    (*yc)[ii] = 0;
    cnt[ii] = 0;

    memset(marr,0,width*sizeof(double));

    for (int jj=0; jj<width; jj++) {
      Vector tt = p1 + ss*ii + uu*jj;

      if (mosaic) {
	sptr = currentContext->cfits;
	params = sptr->getDataParams(currentContext->secMode());
      }

      do {
	Vector zz = tt * sptr->refToData;
	if (zz[0]>=params->xmin && zz[0]<params->xmax && 
	    zz[1]>=params->ymin && zz[1]<params->ymax) {

	  if (!found) {
	    Vector tv = sptr->mapFromRef(tt, sys, sky);
	    (*xc)[ii] = tv[0];
	    (*yc)[ii] = tv[1];
	    found =1;
	  }

	  // check for nan
	  double val = sptr->getValueDouble(zz);
	  if (isfinite(val)) {
	    (*y)[ii] += val;
	    cnt[ii]++;
	    marr[jj] = val;
	  }
	  break;
	}
	else {
	  if (mosaic) {
	    sptr = sptr->nextMosaic();
	    if (sptr)
	      params = sptr->getDataParams(currentContext->secMode());
	  }
	}
      }
      while (mosaic && sptr);
    }

    switch (method) {
    case Marker::AVERAGE:
      if (cnt[ii])
	(*y)[ii] /= cnt[ii];
      break;
    case Marker::SUM:
      break;
    case Marker::MEDIAN:
      qsort((void*)marr,width,sizeof(double),dCompare);
      (*y)[ii] = marr[int(width/2.)];
      break;
    }   
  }
  CLEARSIGBUS

  if (marr)
    delete [] marr;

  return num;
}

void Base::markerAnalysisCutout3d(Marker* pp, const char* varname,
				  const BBox& bb)
{
  if (!currentContext || !pp || !varname || !*varname)
    return;

  FitsImage* ptr = isInCFits(pp->getCenter(),Coord::REF,NULL);
  if (!ptr)
    ptr = currentContext->cfits;
  if (!ptr)
    return;

  FitsBound* params = ptr->getDataParams(currentContext->secMode());
  if (!params)
    return;

  int srcw = ptr->width();
  if (srcw <= 0)
    return;

  Vector ll = (bb.ll*ptr->refToData).floor();
  Vector ur = (bb.ur*ptr->refToData).ceil();

  int xmin = max((int)ll[0], params->xmin);
  int ymin = max((int)ll[1], params->ymin);
  int xmax = min((int)ur[0], params->xmax);
  int ymax = min((int)ur[1], params->ymax);

  int width = xmax - xmin;
  int depth = ymax - ymin;
  if (width <= 0 || depth <= 0)
    return;

  int colorCount = this->colorCount > 0 ? this->colorCount : 1;
  double low = ptr->low();
  double high = ptr->high();
  FrScale::ColorScaleType scaleType = currentContext->colorScaleType();
  float expo = currentContext->expo();
  double* hist = currentContext->histequ();
  int height = max(1, max(width, depth));

  float* plane = new float[width*depth];
  int* heights = new int[width*depth];
  memset(plane, 0, width*depth*sizeof(float));
  memset(heights, 0, width*depth*sizeof(int));

  Matrix bck = pp->bckMatrix();

  SETSIGBUS
    for (int jj=ymin; jj<ymax; jj++) {
      for (int ii=xmin; ii<xmax; ii++) {
	Vector rr = Vector(ii,jj)+Vector(.5,.5);
	int inside = pp->isFixed() ? pp->isIn(rr*ptr->dataToRef,Coord::REF) :
	  pp->isIn(rr*ptr->dataToRef,bck);
	if (inside) {
	  double val = ptr->getValueDouble(long(jj)*srcw+long(ii));
	  if (isfinite(val)) {
	    int ndx = (jj-ymin)*width + (ii-xmin);
	    int index = FrScale::colorIndex(val, low, high, colorCount,
					    scaleType, expo, hist,
					    HISTEQUSIZE, colorbarBias,
					    colorbarContrast, invert);
	    int scaledHeight = (index*height)/colorCount;
	    if (scaledHeight >= height)
	      scaledHeight = height - 1;
	    plane[ndx] = val;
	    heights[ndx] = scaledHeight;
	  }
	}
      }
    }
  CLEARSIGBUS

  std::string fits;
  appendFitsCard(fits, "SIMPLE", "T");
  appendFitsCard(fits, "BITPIX", "-32");
  appendFitsCard(fits, "NAXIS", "3");

  char buf[64];
  snprintf(buf, sizeof(buf), "%d", width);
  appendFitsCard(fits, "NAXIS1", buf);
  snprintf(buf, sizeof(buf), "%d", height);
  appendFitsCard(fits, "NAXIS2", buf);
  snprintf(buf, sizeof(buf), "%d", depth);
  appendFitsCard(fits, "NAXIS3", buf);
  appendFitsCard(fits, "BZERO", "0");
  appendFitsCard(fits, "BSCALE", "1");
  appendFitsEnd(fits);
  padFitsBlock(fits);

  for (int kk=0; kk<depth; kk++)
    for (int jj=0; jj<height; jj++)
      for (int ii=0; ii<width; ii++) {
	int ndx = kk*width + ii;
	float val = plane[ndx];
	appendFitsFloat(fits, heights[ndx] >= jj ? val : 0);
      }

  padFitsBlock(fits);
  Tcl_Obj* obj = Tcl_NewByteArrayObj((unsigned char*)fits.data(), fits.size());
  if (Tcl_SetVar2Ex(interp, varname, NULL, obj, TCL_GLOBAL_ONLY)) {
    snprintf(buf, sizeof(buf), "%s %d %d %d", varname, width, height, depth);
    Tcl_AppendResult(interp, buf, NULL);
  }

  delete [] plane;
  delete [] heights;
}

int Base::markerAnalysisPlot3d(Marker* pp, double** x, double** y,
			       const BBox& bb, 
			       Coord::CoordSystem sys,
			       Marker::AnalysisMethod method)
{
  // does not extend across mosaic boundries
  // different, need all slices 
  FitsImage* ptr = isInFits(pp->getCenter(),Coord::REF,NULL);
  if (!ptr)
    ptr = currentContext->fits;

  // if more than 3 axes, walk it forward
  int num = currentContext->calcSlice();
  for (int ii=1; ii<num; ii++)
    if (ptr)
      ptr = ptr->nextSlice();

  FitsBound* params = ptr->getDataParams(currentContext->secMode());
  FitsZBound* zparams=currentContext->getDataParams(currentContext->secMode());

  int srcw = ptr->width();
  int srcd = zparams->zmax - zparams->zmin;

  // slice jump vector
  FitsImage* sjv[srcd];
  FitsImage* sptr = ptr;
  for (int ii=0; ii<zparams->zmin; ii++)
    sptr = sptr->nextSlice();

  for (int ii=0; ii<srcd; ii++) {
    sjv[ii] = sptr;
    sptr = sptr->nextSlice();
  }

  // init
  *x = (double*)malloc(srcd*sizeof(double));
  *y = (double*)malloc(srcd*sizeof(double));
  memset(*x,0,srcd*sizeof(double));
  memset(*y,0,srcd*sizeof(double));

  int* cnt = new int[srcd];
  memset(cnt,0,srcd*sizeof(int));

  // take the bbox and extend to lower/upper pixel boundaries
  Vector ll = (bb.ll*ptr->refToData).floor();
  Vector ur = (bb.ur*ptr->refToData).ceil();

  // mask
  int ss = (ur[0]-ll[0])*(ur[1]-ll[1]);
  bool* msk = new bool[ss];
  long* idx = new long[ss];
  memset(msk,0,ss*sizeof(bool));
  memset(idx,0,ss*sizeof(long));

  bool* mptr=msk;
  long* iptr=idx;
  if (!pp->isFixed()) {
    Matrix bck = pp->bckMatrix();
    for (int jj=ll[1]; jj<ur[1]; jj++) {
      for (int ii=ll[0]; ii<ur[0]; ii++,mptr++,iptr++) {
	if (ii>=params->xmin && ii<params->xmax && 
	    jj>=params->ymin && jj<params->ymax) {
	  // shift to center of pixel in DATA
	  Vector rr = Vector(ii,jj)+Vector(.5,.5);
	  if (pp->isIn(rr*ptr->dataToRef,bck)) {
	    *mptr=1;
	    *iptr=long(jj)*srcw+long(ii);
	  }
	}
      }
    }
  }
  else {
    for (int jj=ll[1]; jj<ur[1]; jj++) {
      for (int ii=ll[0]; ii<ur[0]; ii++,mptr++,iptr++) {
	if (ii>=params->xmin && ii<params->xmax && 
	    jj>=params->ymin && jj<params->ymax) {
	  // shift to center of pixel in DATA
	  Vector rr = Vector(ii,jj)+Vector(.5,.5);
	  if (pp->isIn(rr*ptr->dataToRef,Coord::REF)) {
	    *mptr=1;
	    *iptr=long(jj)*srcw+long(ii);
	  }
	}
      }
    }
  }

  // median
  int mcnt =0;
  for (int nn=0; nn<ss; nn++)
    if (msk[nn])
      mcnt++;
  double* marr = new double[mcnt];

  // main loop
  SETSIGBUS
    for (int kk=0; kk<srcd; kk++) {
      double tt = kk+.5+.5+zparams->zmin;
      Vector3d dd = Vector3d(ptr->center(),tt) * Translate3d(-.5,-.5,-.5);
      Vector3d out = ptr->mapFromRef(dd,sys,Coord::ICRS);
      (*x)[kk] = out[2];

      memset(marr,0,mcnt*sizeof(double));

      bool* mptr=msk;
      long* iptr=idx;
      int mm=0;
      for (int ll=0; ll<ss; ll++,mptr++,iptr++) {
	if (*mptr) {
	  double val =sjv[kk]->getValueDouble(*iptr);
	  // check for nan
	  if (isfinite(val)) {
	    (*y)[kk] += val;
	    cnt[kk]++;
	    marr[mm++] = val;
	  }
	}
      }

      switch (method) {
      case Marker::AVERAGE:
	if (cnt[kk]!=0)
	  (*y)[kk] /= cnt[kk];
	break;
      case Marker::SUM:
	break;
      case Marker::MEDIAN:
	qsort((void*)marr,mcnt,sizeof(double),dCompare);
	(*y)[kk] = marr[int(mcnt/2.)];
	break;
      }   
    }
  CLEARSIGBUS

  if (cnt)
    delete [] cnt;
  if (msk)
    delete [] msk;
  if (idx)
    delete [] idx;
  if (marr)
    delete [] marr;

  return srcd;
}

// for annulus regions
int Base::markerAnalysisRadial(Marker* pp, double** x, double** y, double** e, 
			       int num, Vector* annuli, 
			       BBox* bb, Coord::CoordSystem sys)

{
  // does not extend across mosaic boundries
  // uses currentContext
  FitsImage* ptr = isInCFits(pp->getCenter(),Coord::REF,NULL);
  if (!ptr)
    ptr = currentContext->cfits;

  int srcw = ptr->width();
  FitsBound* params = ptr->getDataParams(currentContext->secMode());

  double sum[num];
  memset(sum,0,num*sizeof(double));
  int cnt[num];
  memset(cnt,0,num*sizeof(int));

  for (int kk=0; kk<num; kk++) {
    // take the bbox and extend to lower/upper pixel boundaries
    Vector ll = (bb[kk+1].ll*ptr->refToData).floor();
    Vector ur = (bb[kk+1].ur*ptr->refToData).ceil();

    // main loop
    SETSIGBUS
      for (int jj=ll[1]; jj<ur[1]; jj++) {
	for (int ii=ll[0]; ii<ur[0]; ii++) {
	  if (ii>=params->xmin && ii<params->xmax && 
	      jj>=params->ymin && jj<params->ymax) {
	    // shift to center of pixel in DATA
	    Vector rr = Vector(ii,jj)+Vector(.5,.5);
	    Vector ss = rr*ptr->dataToRef;
	  
	    if (pp->isIn(ss,Coord::REF,kk+1) && !pp->isIn(ss,Coord::REF,kk)) {
	      double val =ptr->getValueDouble(long(jj)*srcw+long(ii));
	      // check for nan
	      if (isfinite(val)) {
		sum[kk] += val;
		cnt[kk]++;
	      }
	    }
	  }
	}
      }
    CLEARSIGBUS
  }

  *x = (double*)malloc(num*sizeof(double));
  *y = (double*)malloc(num*sizeof(double));
  *e = (double*)malloc(num*sizeof(double));

  int unit =0;
  double xaxis =1;
  if (ptr->hasWCS(sys)) {
    double ll = ptr->getWCSSize(sys);

    if (ptr->hasWCSCel(sys)) {
      unit =1;
      xaxis = ll*60*60;
    }
    else {
      unit =2;
      xaxis = ll;
    }
  }
    
  double rr = ptr->getWCSSize(sys);
  double aa = rr*rr;

  for (int kk=0; kk<num; kk++) {
    double err = sqrt(fabs(sum[kk]));
    double area =0;
    double bri =0;
    double brierr =0;
    switch (unit) {
    case 0:
      // pixels
      area = abs(cnt[kk]);
      break;
    case 1:
      // Cel WCS
      area = aa*60*60*60*60*cnt[kk];
      break;
    case 2:
      // Linear WCS
      area = aa*cnt[kk];
      break;
    }

    // area can be zero
    if (area) {
      bri = sum[kk]/area;
      brierr = err/area;
    }

    double rr0 = (annuli[kk+1][0]-annuli[kk][0])/2. +annuli[kk][0];
    double rr1 = (annuli[kk+1][1]-annuli[kk][1])/2. +annuli[kk][1];
    double rad = (rr0 + rr1)/2.;

    (*x)[kk] = rad*xaxis;
    (*y)[kk] = bri;
    (*e)[kk] = brierr;
  }

  return num;
}

// for panda regions
int Base::markerAnalysisPanda(Marker* pp, double** x, double** y, double** e, 
			      int num, Vector* annuli, 
			      int angnum,
			      BBox* bb, Coord::CoordSystem sys)
{
  // does not extend across mosaic boundries
  // uses currentContext
  FitsImage* ptr = isInCFits(pp->getCenter(),Coord::REF,NULL);
  if (!ptr)
    ptr = currentContext->cfits;

  int srcw = ptr->width();
  FitsBound* params = ptr->getDataParams(currentContext->secMode());

  double sum[num];
  memset(sum,0,num*sizeof(double));
  int cnt[num];
  memset(cnt,0,num*sizeof(int));

  for (int kk=0; kk<num; kk++) {
    // take the bbox and extend to lower/upper pixel boundaries
    Vector ll = (bb[kk+1].ll*ptr->refToData).floor();
    Vector ur = (bb[kk+1].ur*ptr->refToData).ceil();

    // main loop
    SETSIGBUS
      for (int jj=ll[1]; jj<ur[1]; jj++) {
	for (int ii=ll[0]; ii<ur[0]; ii++) {
	  if (ii>=params->xmin && ii<params->xmax && 
	      jj>=params->ymin && jj<params->ymax) {
	    // shift to center of pixel in DATA
	    Vector rr = Vector(ii,jj)+Vector(.5,.5);
	    Vector ss = rr*ptr->dataToRef;
	  
	    if (pp->isIn(ss,Coord::REF,kk+1,angnum) && 
		!pp->isIn(ss,Coord::REF,kk,angnum)) {
	      double val =ptr->getValueDouble(long(jj)*srcw+long(ii));
	      // check for nan
	      if (isfinite(val)) {
		sum[kk] += val;
		cnt[kk]++;
	      }
	    }
	  }
	}
      }
    CLEARSIGBUS
  }

  *x = (double*)malloc(num*sizeof(double));
  *y = (double*)malloc(num*sizeof(double));
  *e = (double*)malloc(num*sizeof(double));

  int unit =0;
  double xaxis =1;
  if (ptr->hasWCS(sys)) {
    double ll = ptr->getWCSSize(sys);

    if (ptr->hasWCSCel(sys)) {
      unit =1;
      xaxis = ll*60*60;
    }
    else {
      unit =2;
      xaxis = ll;
    }
  }

  double rr = ptr->getWCSSize(sys);
  double aa = rr*rr;


  for (int kk=0; kk<num; kk++) {
    double err = sqrt(fabs(sum[kk]));
    double area =0;
    double bri =0;
    double brierr =0;
    switch (unit) {
    case 0:
      // pixels
      area = abs(cnt[kk]);
      break;
    case 1:
      // Cel WCS
      area = aa*60*60*60*60*cnt[kk];
      break;
    case 2:
      // Linear WCS
      area = aa*cnt[kk];
      break;
    }

    // area can be zero
    if (area) {
      bri = sum[kk]/area;
      brierr = err/area;
    }

    double rr0 = (annuli[kk+1][0]-annuli[kk][0])/2. +annuli[kk][0];
    double rr1 = (annuli[kk+1][1]-annuli[kk][1])/2. +annuli[kk][1];
    double rad = (rr0 + rr1)/2.;

    (*x)[kk] = rad*xaxis;
    (*y)[kk] = bri;
    (*e)[kk] = brierr;
  }

  return num;
}

const std::vector<RegionStatisticField>& regionStatisticFields()
{
  static const RegionStatisticField fieldArray[] = {
    {"core.sum", "sum", RegionStatisticField::FIELD_REAL,
     RegionStatisticField::DATA_VALUE, "Sum of valid pixels", "", 8},
    {"core.error", "error", RegionStatisticField::FIELD_REAL,
     RegionStatisticField::DATA_ERROR, "Poisson error sqrt(abs(sum))", "", 6},
    {"core.area", "area", RegionStatisticField::FIELD_REAL,
     RegionStatisticField::AREA, "Area of valid pixels", "", 6},
    {"core.surface_brightness", "surf_bri", RegionStatisticField::FIELD_REAL,
     RegionStatisticField::DATA_PER_AREA, "Sum divided by area", "", 6},
    {"core.surface_error", "surf_err", RegionStatisticField::FIELD_REAL,
     RegionStatisticField::DATA_PER_AREA, "Poisson error divided by area", "", 6},
    {"core.pixel_count", "npix", RegionStatisticField::FIELD_INTEGER,
     RegionStatisticField::PIXEL_COUNT, "Number of valid pixels", "", 0},
    {"core.mean", "mean", RegionStatisticField::FIELD_REAL,
     RegionStatisticField::DATA_VALUE, "Arithmetic mean", "", 6},
    {"core.median", "median", RegionStatisticField::FIELD_REAL,
     RegionStatisticField::DATA_VALUE, "Upper middle pixel value", "", 6},
    {"core.minimum", "min", RegionStatisticField::FIELD_REAL,
     RegionStatisticField::DATA_VALUE, "Minimum pixel value", "", 6},
    {"core.maximum", "max", RegionStatisticField::FIELD_REAL,
     RegionStatisticField::DATA_VALUE, "Maximum pixel value", "", 6},
    {"core.variance", "var", RegionStatisticField::FIELD_REAL,
     RegionStatisticField::DATA_VALUE, "Population variance", "", 6},
    {"core.standard_deviation", "stddev", RegionStatisticField::FIELD_REAL,
     RegionStatisticField::DATA_VALUE, "Population standard deviation", "", 6},
    {"core.rms", "rms", RegionStatisticField::FIELD_REAL,
     RegionStatisticField::DATA_VALUE, "Root mean square", "", 6},
    {"core.centroid_image_x", "centroid_x", RegionStatisticField::FIELD_REAL,
     RegionStatisticField::IMAGE_COORDINATE,
     "Intensity-weighted centroid image X", "pos.cartesian.x", 10},
    {"core.centroid_image_y", "centroid_y", RegionStatisticField::FIELD_REAL,
     RegionStatisticField::IMAGE_COORDINATE,
     "Intensity-weighted centroid image Y", "pos.cartesian.y", 10},
    {"core.centroid_wcs_x", "centroid_wcs_x", RegionStatisticField::FIELD_REAL,
     RegionStatisticField::WCS_COORDINATE,
     "Intensity-weighted centroid WCS first coordinate", "", 10},
    {"core.centroid_wcs_y", "centroid_wcs_y", RegionStatisticField::FIELD_REAL,
     RegionStatisticField::WCS_COORDINATE,
     "Intensity-weighted centroid WCS second coordinate", "", 10}
  };
  static const std::vector<RegionStatisticField> fields(
    fieldArray, fieldArray + sizeof(fieldArray)/sizeof(fieldArray[0]));
  return fields;
}

RegionStatisticResult Base::markerAnalysisStatsResult(
  Marker* pp, FitsImage* ptr,
  std::vector<RegionStatisticAccumulator>& accumulators,
  Coord::CoordSystem sys)
{
  RegionStatisticResult seed;
  seed.regionId = pp->getId();
  seed.shape = pp->getType();
  seed.center = pp->getCenter();
  seed.background = pp->getProperty(Marker::SOURCE) ? 0 : 1;
  seed.exclude = pp->getProperty(Marker::INCLUDE) ? 0 : 1;
  return markerAnalysisStatsResult(seed,ptr,accumulators,sys);
}

RegionStatisticResult Base::markerAnalysisStatsResult(
  const RegionStatisticResult& seed, FitsImage* ptr,
  std::vector<RegionStatisticAccumulator>& accumulators,
  Coord::CoordSystem sys)
{
  RegionStatisticResult result = seed;
  result.components.clear();
  double areaScale =1;

  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    result.areaUnit = RegionStatisticResult::PIXEL_AREA;
    break;
  default:
    {
      double size = ptr->getWCSSize(sys);
      areaScale = size*size;
      if (ptr->hasWCSCel(sys)) {
        areaScale *= 60*60*60*60;
        result.areaUnit = RegionStatisticResult::ARCSEC_AREA;
      }
      else
        result.areaUnit = RegionStatisticResult::LINEAR_PIXEL_AREA;
    }
    break;
  }

  for (size_t ii=0; ii<accumulators.size(); ii++) {
    RegionStatisticAccumulator& accumulator = accumulators[ii];
    RegionStatisticComponent component = RegionStatisticComponent(int(ii)+1);
    const long count = long(accumulator.count());
    component.set("core.pixel_count", count);

    if (count) {
      const double dcount = double(count);
      const double sum = accumulator.sum();
      const double sum2 = accumulator.sum2();
      const double error = sqrt(fabs(sum));
      const double area = areaScale*dcount;
      const double mean = sum/dcount;
      const double variance = fabs(sum2/dcount - (sum*sum)/(dcount*dcount));

      component.set("core.sum", sum);
      component.set("core.error", error);
      component.set("core.area", area);
      component.set("core.surface_brightness", sum/area);
      component.set("core.surface_error", error/area);
      component.set("core.mean", mean);
      component.set("core.median", accumulator.median());
      component.set("core.minimum", accumulator.minimum());
      component.set("core.maximum", accumulator.maximum());
      component.set("core.variance", variance);
      component.set("core.standard_deviation", sqrt(variance));
      component.set("core.rms", sqrt(sum2/dcount));
      if (accumulator.hasCentroid()) {
	component.hasCentroid =1;
	component.centroid = accumulator.centroid();
      }
    }

    result.components.push_back(component);
  }

  return result;
}

RegionStatisticJob::RegionStatisticJob()
  : order(0), workSize(0), geometryKind(SIMPLE_GEOMETRY),
    radialComponents(1), angularComponents(1), geometry(NULL), image(NULL)
{}

RegionStatisticJob::~RegionStatisticJob()
{
  if (geometry)
    delete geometry;
}

void RegionStatisticJob::measure()
{
  accumulators.clear();
  accumulators.resize(radialComponents*angularComponents);

  for (int kk=0; kk<radialComponents; kk++) {
    const std::vector<RegionStatisticPixel>& pixels = pixelSets[kk];
    for (int qq=0; qq<angularComponents; qq++) {
      RegionStatisticAccumulator& accumulator =
	accumulators[kk*angularComponents+qq];
      if (angularComponents > 1)
	accumulator.reserve(pixels.size()/angularComponents+1);
      else
	accumulator.reserve(pixels.size());

      for (size_t ii=0; ii<pixels.size(); ii++) {
	const RegionStatisticPixel& pixel = pixels[ii];
	int inside =0;
	switch (geometryKind) {
	case SIMPLE_GEOMETRY:
	  inside = geometry->isIn(pixel.reference,backMatrix);
	  break;
	case ANNULUS_GEOMETRY:
	  inside = geometry->isIn(pixel.reference,backMatrix,kk+1) &&
	    !geometry->isIn(pixel.reference,backMatrix,kk);
	  break;
	case PANDA_GEOMETRY:
	  inside = geometry->isIn(pixel.reference,backMatrix,kk+1,qq) &&
	    !geometry->isIn(pixel.reference,backMatrix,kk,qq);
	  break;
	}
	if (inside)
	  accumulator.add(pixel.value,pixel.reference);
      }
    }
  }
}

int Base::markerAnalysisStatsJobPrepare(
  Marker* pp, RegionStatisticJob* job,
  RegionStatisticJob::GeometryKind kind, int radial, int angular,
  const std::vector<BBox>& bounds, Coord::CoordSystem sys)
{
  (void)sys;
  if (!job || !currentContext || !currentContext->cfits)
    return 0;

  job->geometryKind = kind;
  job->radialComponents = radial;
  job->angularComponents = angular;
  job->geometry = pp->dup();
  job->backMatrix = job->geometry->bckMatrix();
  job->image = isInCFits(pp->getCenter(),Coord::REF,NULL);
  if (!job->image)
    job->image = currentContext->cfits;
  job->seed.regionId = pp->getId();
  job->seed.shape = pp->getType();
  job->seed.center = pp->getCenter();
  job->seed.background = pp->getProperty(Marker::SOURCE) ? 0 : 1;
  job->seed.exclude = pp->getProperty(Marker::INCLUDE) ? 0 : 1;
  job->pixelSets.clear();
  job->pixelSets.resize(radial);
  job->workSize =0;

  const int srcw = job->image->width();
  FitsBound* params =
    job->image->getDataParams(currentContext->secMode());
  for (int kk=0; kk<radial; kk++) {
    Vector ll = (bounds[kk].ll*job->image->refToData).floor();
    Vector ur = (bounds[kk].ur*job->image->refToData).ceil();
    std::vector<RegionStatisticPixel>& pixels = job->pixelSets[kk];
    const int size = int(ur[1]-ll[1])*int(ur[0]-ll[0]);
    if (size > 0)
      pixels.reserve(size);

    // Validate and copy image values on the main thread. Workers operate only
    // on this owned snapshot and therefore do not install signal handlers.
    SETSIGBUS
      for (int jj=ll[1]; jj<ur[1]; jj++) {
	for (int ii=ll[0]; ii<ur[0]; ii++) {
	  if (ii>=params->xmin && ii<params->xmax &&
	      jj>=params->ymin && jj<params->ymax) {
	    double value =
	      job->image->getValueDouble(long(jj)*srcw+long(ii));
	    if (isfinite(value)) {
	      Vector data = Vector(ii,jj)+Vector(.5,.5);
	      pixels.push_back(RegionStatisticPixel(
		data*job->image->dataToRef,value));
	    }
	  }
	}
      }
    CLEARSIGBUS
    job->workSize += pixels.size()*angular;
  }
  return 1;
}

int Base::markerAnalysisStatsJob(Marker* pp, RegionStatisticJob* job,
                                 const BBox& bb, Coord::CoordSystem sys)
{
  std::vector<BBox> bounds(1,bb);
  return markerAnalysisStatsJobPrepare(
    pp,job,RegionStatisticJob::SIMPLE_GEOMETRY,1,1,bounds,sys);
}

int Base::markerAnalysisStatsJob(Marker* pp, RegionStatisticJob* job,
                                 int num, BBox* bb,
                                 Coord::CoordSystem sys)
{
  std::vector<BBox> bounds;
  bounds.reserve(num);
  for (int kk=0; kk<num; kk++)
    bounds.push_back(bb[kk+1]);
  return markerAnalysisStatsJobPrepare(
    pp,job,RegionStatisticJob::ANNULUS_GEOMETRY,num,1,bounds,sys);
}

int Base::markerAnalysisStatsJob(Marker* pp, RegionStatisticJob* job,
                                 int num, int angular, BBox* bb,
                                 Coord::CoordSystem sys)
{
  std::vector<BBox> bounds;
  bounds.reserve(num);
  for (int kk=0; kk<num; kk++)
    bounds.push_back(bb[kk+1]);
  return markerAnalysisStatsJobPrepare(
    pp,job,RegionStatisticJob::PANDA_GEOMETRY,num,angular,bounds,sys);
}

static double regionStatisticReal(const RegionStatisticComponent& component,
                                  const char* key)
{
  const RegionStatisticValue* value = component.find(key);
  return value ? value->realValue() : 0;
}

static long regionStatisticInteger(const RegionStatisticComponent& component,
                                   const char* key)
{
  const RegionStatisticValue* value = component.find(key);
  return value ? value->integerValue() : 0;
}

static Coord::CoordSystem regionStatisticWCSSystem(
  FitsImage* ptr, Coord::CoordSystem requested)
{
  if (requested >= Coord::WCS && ptr->hasWCS(requested))
    return requested;
  return Coord::WCS;
}

void Base::markerAnalysisStatsFormat(Marker* pp, FitsImage* ptr, ostream& str,
                                     const RegionStatisticResult& result,
                                     Coord::CoordSystem sys,
                                     Coord::SkyFrame sky)
{
  str << "center=" << setprecision(8)
      << ptr->mapFromRef(pp->getCenter(),sys,sky) << endl;
  coord.listCoordSystem(str, sys, sky, ptr);
  str << endl;

  switch (result.areaUnit) {
  case RegionStatisticResult::PIXEL_AREA:
    str << endl;
    str << "reg\t" << "sum\t\t" << "error\t"
        << "area\t\t" << "surf_bri\t\t" << "surf_err" << endl
        << "\t" << "\t" << "\t\t"
        << "(pix**2)\t\t" << "(sum/pix**2)\t\t" << "(sum/pix**2)" << endl
        << "---\t" << "---\t\t" << "-----\t"
        << "--------\t\t" << "------------\t\t" << "------------" << endl;
    break;
  case RegionStatisticResult::ARCSEC_AREA:
    str << "1 pixel = " << ptr->getWCSSize(sys)*60*60 << " arcsec";
    str << endl << endl;
    str << "reg\t" << "sum\t\t" << "error\t"
        << "area\t\t" << "surf_bri\t\t" << "surf_err" << endl
        << "\t" << "\t" << "\t\t"
        << "(arcsec**2)\t\t" << "(sum/arcsec**2)\t" << "(sum/arcsec**2)" << endl
        << "---\t" << "---\t\t" << "-----\t"
        << "-----------\t\t" << "---------------\t" << "---------------" << endl;
    break;
  case RegionStatisticResult::LINEAR_PIXEL_AREA:
    str << "1 pixel = " << ptr->getWCSSize(sys);
    str << endl << endl;
    str << "reg\t" << "sum\t\t" << "error\t"
        << "area\t\t" << "surf_bri\t\t" << "surf_err" << endl
        << "\t" << "\t" << "\t\t"
        << "(pix**2)\t\t" << "(sum/pix**2)\t\t" << "(sum/pix**2)" << endl
        << "---\t" << "---\t\t" << "-----\t"
        << "--------\t\t" << "------------\t\t" << "------------" << endl;
    break;
  }

  for (size_t ii=0; ii<result.components.size(); ii++) {
    const RegionStatisticComponent& component = result.components[ii];
    if (!regionStatisticInteger(component, "core.pixel_count"))
      continue;

    str << component.component << '\t'
        << setprecision(8)
        << regionStatisticReal(component, "core.sum") << "\t\t"
        << setprecision(6)
        << regionStatisticReal(component, "core.error") << "\t"
        << regionStatisticReal(component, "core.area") << "\t\t"
        << regionStatisticReal(component, "core.surface_brightness") << "\t\t"
        << regionStatisticReal(component, "core.surface_error") << endl;
  }

  str << endl
      << "reg\t" << "sum\t" << "npix\t" << "mean\t" << "median\t"
      << "min\t" << "max\t" << "var\t" << "stddev\t" << "rms\t"
      << "centroid_x\t" << "centroid_y\t"
      << "centroid_wcs_x\t" << "centroid_wcs_y\t" << endl
      << "---\t" << "---\t" << "----\t" << "----\t" << "------\t"
      << "---\t" << "---\t" << "---\t" << "------\t" << "---\t"
      << "----------\t" << "----------\t"
      << "--------------\t" << "--------------\t" << endl;

  const Coord::CoordSystem centroidWCS = regionStatisticWCSSystem(ptr,sys);
  const int hasCentroidWCS = ptr->hasWCS(centroidWCS);

  for (size_t ii=0; ii<result.components.size(); ii++) {
    const RegionStatisticComponent& component = result.components[ii];
    const long count = regionStatisticInteger(component, "core.pixel_count");
    if (!count)
      continue;

    str << component.component << '\t'
        << setprecision(8)
        << regionStatisticReal(component, "core.sum") << '\t'
        << count << '\t'
        << setprecision(6)
        << regionStatisticReal(component, "core.mean") << '\t'
        << regionStatisticReal(component, "core.median") << '\t'
        << regionStatisticReal(component, "core.minimum") << '\t'
        << regionStatisticReal(component, "core.maximum") << '\t'
        << regionStatisticReal(component, "core.variance") << '\t'
        << regionStatisticReal(component, "core.standard_deviation") << '\t'
        << regionStatisticReal(component, "core.rms") << '\t';
    if (component.hasCentroid) {
      const Vector image = ptr->mapFromRef(
	component.centroid,Coord::IMAGE,sky);
      str << setprecision(10) << image[0] << '\t' << image[1] << '\t';
      if (hasCentroidWCS) {
	const Vector wcs = ptr->mapFromRef(component.centroid,centroidWCS,sky);
	str << wcs[0] << '\t' << wcs[1] << '\t';
      }
      else
	str << "\t\t";
    }
    else
      str << "\t\t\t\t";
    str << endl;
  }
}

// for simple regions
RegionStatisticResult Base::markerAnalysisStatsData(
  Marker* pp, const BBox& bb, Coord::CoordSystem sys)
{
  // does not extend across mosaic boundaries; uses currentContext
  FitsImage* ptr = isInCFits(pp->getCenter(),Coord::REF,NULL);
  if (!ptr)
    ptr = currentContext->cfits;

  const int srcw = ptr->width();
  FitsBound* params = ptr->getDataParams(currentContext->secMode());
  std::vector<RegionStatisticAccumulator> accumulators(1);

  Vector ll = (bb.ll*ptr->refToData).floor();
  Vector ur = (bb.ur*ptr->refToData).ceil();
  const int msize = int(ur[1]-ll[1])*int(ur[0]-ll[0]);
  if (msize > 0)
    accumulators[0].reserve(msize);

  SETSIGBUS
    for (int jj=ll[1]; jj<ur[1]; jj++) {
      for (int ii=ll[0]; ii<ur[0]; ii++) {
        if (ii>=params->xmin && ii<params->xmax &&
            jj>=params->ymin && jj<params->ymax) {
          Vector rr = Vector(ii,jj)+Vector(.5,.5);
          Vector ss = rr*ptr->dataToRef;
          if (pp->isIn(ss,Coord::REF)) {
            double value = ptr->getValueDouble(long(jj)*srcw+long(ii));
            if (isfinite(value))
              accumulators[0].add(value,ss);
          }
        }
      }
    }
  CLEARSIGBUS

  return markerAnalysisStatsResult(pp,ptr,accumulators,sys);
}

void Base::markerAnalysisStats(Marker* pp, ostream& str, const BBox& bb,
                               Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  RegionStatisticResult result = markerAnalysisStatsData(pp,bb,sys);
  FitsImage* ptr = isInCFits(pp->getCenter(),Coord::REF,NULL);
  if (!ptr)
    ptr = currentContext->cfits;
  markerAnalysisStatsFormat(pp,ptr,str,result,sys,sky);
}

// for annulus regions
RegionStatisticResult Base::markerAnalysisStatsData(
  Marker* pp, int num, BBox* bb, Coord::CoordSystem sys)
{
  // does not extend across mosaic boundaries; uses currentContext
  FitsImage* ptr = isInCFits(pp->getCenter(),Coord::REF,NULL);
  if (!ptr)
    ptr = currentContext->cfits;

  const int srcw = ptr->width();
  FitsBound* params = ptr->getDataParams(currentContext->secMode());
  std::vector<RegionStatisticAccumulator> accumulators(num);

  for (int kk=0; kk<num; kk++) {
    Vector ll = (bb[kk+1].ll*ptr->refToData).floor();
    Vector ur = (bb[kk+1].ur*ptr->refToData).ceil();

    SETSIGBUS
      for (int jj=ll[1]; jj<ur[1]; jj++) {
        for (int ii=ll[0]; ii<ur[0]; ii++) {
          if (ii>=params->xmin && ii<params->xmax &&
              jj>=params->ymin && jj<params->ymax) {
            Vector rr = Vector(ii,jj)+Vector(.5,.5);
            Vector ss = rr*ptr->dataToRef;
            if (pp->isIn(ss,Coord::REF,kk+1) &&
                !pp->isIn(ss,Coord::REF,kk)) {
              double value = ptr->getValueDouble(long(jj)*srcw+long(ii));
              if (isfinite(value))
                accumulators[kk].add(value,ss);
            }
          }
        }
      }
    CLEARSIGBUS
  }

  return markerAnalysisStatsResult(pp,ptr,accumulators,sys);
}

void Base::markerAnalysisStats(Marker* pp, ostream& str, int num, BBox* bb,
                               Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  RegionStatisticResult result = markerAnalysisStatsData(pp,num,bb,sys);
  FitsImage* ptr = isInCFits(pp->getCenter(),Coord::REF,NULL);
  if (!ptr)
    ptr = currentContext->cfits;
  markerAnalysisStatsFormat(pp,ptr,str,result,sys,sky);
}

// for panda regions
RegionStatisticResult Base::markerAnalysisStatsData(
  Marker* pp, int num, int na, BBox* bb, Coord::CoordSystem sys)
{
  // does not extend across mosaic boundaries; uses currentContext
  FitsImage* ptr = isInCFits(pp->getCenter(),Coord::REF,NULL);
  if (!ptr)
    ptr = currentContext->cfits;

  const int srcw = ptr->width();
  FitsBound* params = ptr->getDataParams(currentContext->secMode());
  std::vector<RegionStatisticAccumulator> accumulators(num*na);

  for (int kk=0; kk<num; kk++) {
    Vector ll = (bb[kk+1].ll*ptr->refToData).floor();
    Vector ur = (bb[kk+1].ur*ptr->refToData).ceil();

    for (int qq=0; qq<na; qq++) {
      RegionStatisticAccumulator& accumulator = accumulators[kk*na+qq];

      SETSIGBUS
        for (int jj=ll[1]; jj<ur[1]; jj++) {
          for (int ii=ll[0]; ii<ur[0]; ii++) {
            if (ii>=params->xmin && ii<params->xmax &&
                jj>=params->ymin && jj<params->ymax) {
              Vector rr = Vector(ii,jj)+Vector(.5,.5);
              Vector ss = rr*ptr->dataToRef;
              if (pp->isIn(ss,Coord::REF,kk+1,qq) &&
                  !pp->isIn(ss,Coord::REF,kk,qq)) {
                double value = ptr->getValueDouble(long(jj)*srcw+long(ii));
                if (isfinite(value))
                  accumulator.add(value,ss);
              }
            }
          }
        }
      CLEARSIGBUS
    }
  }

  return markerAnalysisStatsResult(pp,ptr,accumulators,sys);
}

void Base::markerAnalysisStats(Marker* pp, ostream& str, int num, int na,
                               BBox* bb, Coord::CoordSystem sys,
                               Coord::SkyFrame sky)
{
  RegionStatisticResult result = markerAnalysisStatsData(pp,num,na,bb,sys);
  FitsImage* ptr = isInCFits(pp->getCenter(),Coord::REF,NULL);
  if (!ptr)
    ptr = currentContext->cfits;
  markerAnalysisStatsFormat(pp,ptr,str,result,sys,sky);
}

void Base::bltCut(char* xname, char* yname, Coord::Orientation axis, 
		  const Vector& rr, int thick, Base::CutMethod method)
{
  int size;
  if (axis == Coord::XX)
    size = options->width;
  else
    size = options->height;

  long length = (size+1) * 2;
  double* xx = (double*)malloc(sizeof(double)*length);
  double* yy = (double*)malloc(sizeof(double)*length);

  // check for data or undefined low()/high()
  if (!currentContext->cfits || !isfinite(currentContext->low())) {
    for (int ii=0; ii<=size; ii++) {
      xx[ii*2] = ii;
      xx[ii*2+1] = ii;
      yy[ii*2] = 0;
      yy[ii*2+1] = 0;
    }
  }
  else
    bltCutFits(xx, yy, size, axis, rr, thick, method);

  Blt_Vector* xv;
  if (Blt_GetVector(interp, xname, &xv) != TCL_OK)
    goto error;

  if (Blt_ResetVector(xv, xx, length, length*sizeof(double), TCL_DYNAMIC) != 
      TCL_OK)
    goto error;

  Blt_Vector* yv;
  if (Blt_GetVector(interp, yname, &yv) != TCL_OK)
    goto error;

  if (Blt_ResetVector(yv, yy, length, length*sizeof(double), TCL_DYNAMIC) != 
      TCL_OK)
    goto error;

  return;

 error:
    result = TCL_ERROR;
    return;
}

void Base::bltCutFits(double* xx, double* yy, int size, Coord::Orientation axis,
		      const Vector& r, int thick, Base::CutMethod method)
{
  Vector rr = r * refToWidget;

  FitsImage* sptr = currentContext->cfits;
  FitsBound* params = sptr->getDataParams(currentContext->secMode());

  int mosaic = isMosaic();
  double prev = currentContext->low();

  double* marr = new double[thick];

  // main loop

  SETSIGBUS
  for (int ii=0; ii<=size; ii++) {
    double vv =0;
    int cnt =0;

    memset(marr,0,thick*sizeof(double));

    Vector img;
    int ww = thick/2;
    for (int jj=0; jj<thick; jj++) {

      if (mosaic) {
	sptr = currentContext->cfits;
	params = sptr->getDataParams(currentContext->secMode());
      }

      do {
	if (axis == Coord::XX)
	  img = Vector(1+ii,rr[1]-ww+jj) * sptr->widgetToData;
	else
	  img = Vector(rr[0]-ww+jj,1+ii) * sptr->widgetToData;

	if (img[0]>=params->xmin && img[0]<params->xmax && 
	    img[1]>=params->ymin && img[1]<params->ymax) {
	  double value = sptr->getValueDouble(img);

	  if (isfinite(value)) {
	    vv += value;
	    cnt++;
	    marr[jj] = value;
	  }
	  break;
	}
	else {
	  if (mosaic) {
	    sptr = sptr->nextMosaic();
	    if (sptr)
	      params = sptr->getDataParams(currentContext->secMode());
	  }
	}
      }
      while (mosaic && sptr);
    }

    xx[2*ii] = ii;
    xx[2*ii +1] = ii;
    yy[2*ii] = prev;

    switch (method) {
    case Base::AVERAGE:
      if (cnt)
	yy[2*ii +1] = prev = vv/cnt;
      else
	yy[2*ii +1] = prev = currentContext->low();
      break;
    case Base::SUM:
      yy[2*ii +1] = prev = vv;
      break;
    case Base::MEDIAN:
      qsort((void*)marr,thick,sizeof(double),dCompare);
      yy[2*ii +1] = prev = marr[int(thick/2.)];
    }
  }
  CLEARSIGBUS

  if (marr)
    delete [] marr;
}
