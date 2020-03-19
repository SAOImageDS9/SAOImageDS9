// Copyright (C) 1999-2018
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

  // main loop

  SETSIGBUS
  for (int ii=0; ii<num; ii++) {
    int found=0;

    (*x)[ii] = ii+1;
    (*y)[ii] = 0;
    (*xc)[ii] = ii+1;
    (*yc)[ii] = 0;
    cnt[ii] = 0;

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
	  double dd = sptr->getValueDouble(zz);
	  if (isfinite(dd)) {
	    (*y)[ii] += dd;
	    cnt[ii]++;
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
  }
  CLEARSIGBUS

  // average if needed
  if (method == Marker::AVERAGE)
    for (long ii=0; ii<num; ii++)
      if (isfinite((*y)[ii]) && cnt[ii]!=0)
	(*y)[ii] /= cnt[ii];

  return num;
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

  // main loop
  SETSIGBUS
    for (int kk=0; kk<srcd; kk++) {
      double tt = kk+.5+.5+zparams->zmin;
      Vector3d dd = Vector3d(ptr->center(),tt) * Translate3d(-.5,-.5,-.5);
      Vector3d out = ptr->mapFromRef(dd,sys,Coord::FK5);
      (*x)[kk] = out[2];

      bool* mptr=msk;
      long* iptr=idx;
      for (int ll=0; ll<ss; ll++,mptr++,iptr++) {
	if (*mptr) {
	  double val =sjv[kk]->getValueDouble(*iptr);
	  // check for nan
	  if (isfinite(val)) {
	    (*y)[kk] += val;
	    cnt[kk]++;
	  }
	}
      }
    }
  CLEARSIGBUS

  // average if needed
  if (method == Marker::AVERAGE)
    for (long kk=0; kk<srcd; kk++)
      if (cnt[kk]!=0)
	(*y)[kk] /= cnt[kk];

  if (cnt)
    delete [] cnt;
  if (msk)
    delete [] msk;
  if (idx)
    delete [] idx;

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

// for simple regions
void Base::markerAnalysisStats(Marker* pp, ostream& str, const BBox& bb,
			       Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  // does not extend across mosaic boundries
  // uses currentContext
  FitsImage* ptr = isInCFits(pp->getCenter(),Coord::REF,NULL);
  if (!ptr)
    ptr = currentContext->cfits;

  int srcw = ptr->width();
  FitsBound* params = ptr->getDataParams(currentContext->secMode());

  double sum =0;
  double sum2 =0;
  int cnt =0;
  double min =DBL_MAX;
  double max =-DBL_MAX;

  // take the bbox and extend to lower/upper pixel boundaries
  Vector ll = (bb.ll*ptr->refToData).floor();
  Vector ur = (bb.ur*ptr->refToData).ceil();

  int msize = int(ur[1]-ll[1])*int(ur[0]-ll[0]);
  double* marr = new double[msize];
  memset(marr,0,msize*sizeof(double));

  // main loop
  SETSIGBUS
    for (int jj=ll[1]; jj<ur[1]; jj++) {
      for (int ii=ll[0]; ii<ur[0]; ii++) {
	if (ii>=params->xmin && ii<params->xmax && 
	    jj>=params->ymin && jj<params->ymax) {
	  // shift to center of pixel in DATA
	  Vector rr = Vector(ii,jj)+Vector(.5,.5);
	  Vector ss = rr*ptr->dataToRef;

	  if (pp->isIn(ss,Coord::REF)) {
	    double val =ptr->getValueDouble(long(jj)*srcw+long(ii));
	    // check for nan
	    if (isfinite(val)) {
	      sum += val;
	      sum2 += val*val;
	      if (cnt<msize)
		marr[cnt] = val;
	      if (val<min)
		min =val;
	      if (val>max)
		max =val;

	      cnt++;
	    }
	  }
	}
      }
    }
  CLEARSIGBUS

  qsort((void*)marr,cnt,sizeof(double),dCompare);
  double median = marr[int(cnt/2.)];
  if (marr)
    delete [] marr;

  int unit = markerAnalysisStats1(pp,ptr,str,sys,sky);
  if (cnt)
    markerAnalysisStats2(ptr,str,sys,0,cnt,sum,unit);
  markerAnalysisStats3(str);
  if (cnt)
    markerAnalysisStats4(str,0,cnt,sum,sum2,median,min,max);
}

// for annulus regions
void Base::markerAnalysisStats(Marker* pp, ostream& str, 
			       int num, BBox* bb,
			       Coord::CoordSystem sys, Coord::SkyFrame sky)
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
  double sum2[num];
  memset(sum2,0,num*sizeof(double));
  int cnt[num];
  memset(cnt,0,num*sizeof(int));
  double min[num];
  double max[num];
  for (int ii=0; ii<num; ii++) {
    min[ii] =DBL_MAX;
    max[ii] =-DBL_MAX;
  }
  double median[num];
  memset(median,0,num*sizeof(double));

  for (int kk=0; kk<num; kk++) {
    // take the bbox and extend to lower/upper pixel boundaries
    Vector ll = (bb[kk+1].ll*ptr->refToData).floor();
    Vector ur = (bb[kk+1].ur*ptr->refToData).ceil();

    int msize = int(ur[1]-ll[1])*int(ur[0]-ll[0]);
    double* marr = new double[msize];
    memset(marr,0,msize*sizeof(double));

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
		sum2[kk] += val*val;
		if (cnt[kk]<msize)
		  marr[cnt[kk]] = val;
		if (val<min[kk])
		  min[kk] =val;
		if (val>max[kk])
		  max[kk] =val;

		cnt[kk]++;
	      }
	    }
	  }
	}
      }
    CLEARSIGBUS

    qsort((void*)marr,cnt[kk],sizeof(double),dCompare);
    median[kk] = marr[int(cnt[kk]/2.)];
    if (marr)
      delete [] marr;
  }

  int unit = markerAnalysisStats1(pp,ptr,str,sys,sky);
  for (int kk=0; kk<num; kk++) 
    if (cnt[kk])
      markerAnalysisStats2(ptr,str,sys,kk,cnt[kk],sum[kk],unit);

  markerAnalysisStats3(str);

  for (int kk=0; kk<num; kk++)
    if (cnt[kk])
      markerAnalysisStats4(str,kk,cnt[kk],sum[kk],sum2[kk],
			   median[kk],min[kk],max[kk]);
}

// for panda regions
void Base::markerAnalysisStats(Marker* pp, ostream& str, 
			       int num, int na, BBox* bb, 
			       Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  // does not extend across mosaic boundries
  // uses currentContext
  FitsImage* ptr = isInCFits(pp->getCenter(),Coord::REF,NULL);
  if (!ptr)
    ptr = currentContext->cfits;

  int srcw = ptr->width();
  FitsBound* params = ptr->getDataParams(currentContext->secMode());

  double sum[num][na];
  memset(sum,0,num*na*sizeof(double));
  double sum2[num][na];
  memset(sum2,0,num*na*sizeof(double));
  int cnt[num][na];
  memset(cnt,0,num*na*sizeof(int));
  double min[num][na];
  double max[num][na];
  for (int ii=0; ii<num; ii++) {
    for (int jj=0; jj<na; jj++) {
      min[ii][jj] =DBL_MAX;
      max[ii][jj] =-DBL_MAX;
    }
  }
  double median[num][na];
  memset(median,0,num*na*sizeof(double));

  for (int kk=0; kk<num; kk++) {
    // take the bbox and extend to lower/upper pixel boundaries
    Vector ll = (bb[kk+1].ll*ptr->refToData).floor();
    Vector ur = (bb[kk+1].ur*ptr->refToData).ceil();

    int msize = int(ur[1]-ll[1])*int(ur[0]-ll[0]);
    double* marr = new double[msize];

    // main loop
    SETSIGBUS
      for (int qq=0; qq<na; qq++) {
	memset(marr,0,msize*sizeof(double));

	for (int jj=ll[1]; jj<ur[1]; jj++) {
	  for (int ii=ll[0]; ii<ur[0]; ii++) {
	    if (ii>=params->xmin && ii<params->xmax && 
		jj>=params->ymin && jj<params->ymax) {
	      // shift to center of pixel in DATA
	      Vector rr = Vector(ii,jj)+Vector(.5,.5);
	      Vector ss = rr*ptr->dataToRef;
	  
	      if (pp->isIn(ss,Coord::REF,kk+1,qq) && 
		  !pp->isIn(ss,Coord::REF,kk,qq)) {
		double val =ptr->getValueDouble(long(jj)*srcw+long(ii));
		// check for nan
		if (isfinite(val)) {
		  sum[kk][qq] += val;
		  sum2[kk][qq] += val*val;

		  if (cnt[kk][qq]<msize)
		    marr[cnt[kk][qq]] = val;

		  if (val<min[kk][qq])
		    min[kk][qq] = val;
		  if (val>max[kk][qq])
		    max[kk][qq] = val;

		  cnt[kk][qq]++;
		}
	      }
	    }
	  }
	}

	qsort((void*)marr,cnt[kk][qq],sizeof(double),dCompare);
	median[kk][qq] = marr[int(cnt[kk][qq]/2.)];
      }
    CLEARSIGBUS

    if (marr)
      delete [] marr;
  }

  int unit = markerAnalysisStats1(pp,ptr,str,sys,sky);

  for (int kk=0; kk<num; kk++) 
    for (int qq=0; qq<na; qq++)
      if (cnt[kk][qq])
	markerAnalysisStats2(ptr,str,sys,kk*na+qq,cnt[kk][qq],sum[kk][qq],unit);

  markerAnalysisStats3(str);

  for (int kk=0; kk<num; kk++)
    for (int qq=0; qq<na; qq++)
      if (cnt[kk][qq])
	markerAnalysisStats4(str,kk*na+qq,cnt[kk][qq],sum[kk][qq],sum2[kk][qq],
			     median[kk][qq],min[kk][qq],max[kk][qq]);
}

int Base::markerAnalysisStats1(Marker* pp,FitsImage* ptr, ostream& str, 
			       Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  str << "center=" << setprecision(8) 
      << ptr->mapFromRef(pp->getCenter(),sys,sky) << endl;
  coord.listCoordSystem(str, sys, sky, ptr);
  str << endl;

  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    str << endl;
    str << "reg\t" << "sum\t\t" << "error\t" 
	<< "area\t\t" << "surf_bri\t\t" << "surf_err" << endl
	<< "\t" << "\t" << "\t\t" 
	<< "(pix**2)\t\t" << "(sum/pix**2)\t\t" << "(sum/pix**2)" << endl
	<< "---\t" << "---\t\t" << "-----\t" 
	<< "--------\t\t" << "------------\t\t" << "------------" << endl;
    return 0;
  default: 
    {
      double ll = ptr->getWCSSize(sys);
      if (ptr->hasWCSCel(sys)) {
	str << "1 pixel = "<< ll*60*60 << " arcsec";
	str << endl << endl;
	str << "reg\t" << "sum\t\t" << "error\t" 
	    << "area\t\t" << "surf_bri\t\t" << "surf_err" << endl
	    << "\t" << "\t" << "\t\t" 
	    << "(arcsec**2)\t\t" << "(sum/arcsec**2)\t" << "(sum/arcsec**2)" << endl
	    << "---\t" << "---\t\t" << "-----\t" 
	    << "-----------\t\t" << "---------------\t" << "---------------" << endl;
	return 1;
      }
      else {
	str << "1 pixel = "<< ll;
	str << endl << endl;
	str << "reg\t" << "sum\t\t" << "error\t" 
	    << "area\t\t" << "surf_bri\t\t" << "surf_err" << endl
	    << "\t" << "\t" << "\t\t" 
	    << "(pix**2)\t\t" << "(sum/pix**2)\t\t" << "(sum/pix**2)" << endl
	    << "---\t" << "---\t\t" << "-----\t" 
	    << "--------\t\t" << "------------\t\t" << "------------" << endl;
	return 2;
      }
    }
    break;
  }
}

void Base::markerAnalysisStats2(FitsImage* ptr, ostream& str, 
				Coord::CoordSystem sys,
				int kk, int cnt, double sum, int unit)
{
  double area =0;
  switch (unit) {
  case 0:
    // pixels
    area = cnt;
    break;
  case 1:
    {
      // Cel WCS
      double rr = ptr->getWCSSize(sys);
      double aa = rr*rr;
      area = aa*60*60*60*60*cnt;
    }
    break;
  case 2:
    {
      // Linear WCS
      double rr = ptr->getWCSSize(sys);
      double aa = rr*rr;
      area = aa*cnt;
    }
    break;
  }
  double err = sqrt(fabs(sum));
  double bri = sum/area;
  double brierr = err/area;

  str << kk+1 << '\t' 
      << setprecision(8)
      << sum << "\t\t"
      << setprecision(6)
      << err << "\t"
      << area << "\t\t"
      << bri << "\t\t"
      << brierr << endl;
}

void Base::markerAnalysisStats3(ostream& str)
{
  str << endl
      << "reg\t" << "sum\t" << "npix\t" << "mean\t" << "median\t"
      << "min\t" << "max\t" << "var\t" << "stddev\t" << "rms\t" << endl
      << "---\t" << "---\t" << "----\t" << "----\t" << "------\t" 
      << "---\t" << "---\t" << "---\t" << "------\t" << "---\t" << endl;
}

void Base::markerAnalysisStats4(ostream& str, int kk, 
				double cnt, double sum, double sum2, 
				double median, double min, double max)
{
  // up cast int cnt to double to avoid int overflow
  double mean =0;
  double std =0;
  double var =0;
  double rms =0;
  if (cnt) {
    mean = sum/cnt;
    var = fabs(sum2/cnt - (sum*sum)/(cnt*cnt));
    std = sqrt(var);
    rms = sqrt(sum2/cnt);
  }

  str << kk+1 << '\t' 
      << setprecision(8)
      << sum << '\t'
      << cnt << '\t'
      << setprecision(6)
      << mean << '\t'
      << median << '\t'
      << min << '\t'
      << max << '\t'
      << var << '\t'
      << std << '\t'
      << rms << '\t'
      << endl;
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

  // main loop

  SETSIGBUS
  for (int ii=0; ii<=size; ii++) {
    double vv =0;
    int cnt =0;

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
	    cnt +=1;
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
    }
      
  }
  CLEARSIGBUS
}

