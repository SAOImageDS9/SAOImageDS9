// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "fitsdata.h"
#include "sigbus.h"

#ifdef INTERP
#undef INTERP
#endif
#define INTERP interp_

// ZSCALE

#define ZSMAX(a,b) ((a) > (b) ? (a) : (b))
#define ZSMIN(a,b) ((a) < (b) ? (a) : (b)) 
#define ZSMOD(a,b) ((a) % (b))
#define ZSNINT(a) ((int)(a + 0.5))
#define ZSINDEF 0
// smallest permissible sample
#define ZSMIN_NPIXELS 5
// max frac. of pixels to be rejected
#define ZSMAX_REJECT 0.5
// k-sigma pixel rejection factor
#define ZSKREJ 2.5
// maximum number of fitline iterations
#define ZSMAX_ITERATIONS 5

ostream& operator<<(ostream& ss, const FitsBound& fb)
{
  ss << ' ' << fb.xmin << ' ' << fb.ymin
     << ' ' << fb.xmax << ' ' << fb.ymax;
  return ss;
}

static int fCompare(const void* a, const void* b)
{
  float* aa = (float*)a;
  float* bb = (float*)b;

  if (*aa < *bb)
    return -1;
  if (*aa > *bb)
    return 1;
  return 0;
}

// FitsData

FitsData::FitsData(FitsFile* fits, Tcl_Interp* pp)
{
  interp_ = pp;
  
  FitsImageHDU* hdu = (FitsImageHDU*)fits->head()->hdu();
  width_ = hdu->naxis(0);
  height_ = hdu->naxis(1);

  buf_[0] = '\0';

  byteswap_ = fits->byteswap();

  bscale_ = hdu->bscale();
  bzero_ = hdu->bzero();
  blank_ = hdu->blank();

  hasscaling_ = hdu->hasscaling();
  switch (hdu->bitpix()) {
  case 8:
  case 16:
  case -16:
  case 32:
  case 64:
    hasblank_ = hdu->hasblank();
    break;
  case -32:
  case -64:
    hasblank_ = 0;
    break;
  }

  min_ =0;
  max_ =0;

  low_ =0;
  high_ =0;

  zLow_ = zHigh_ = 0;
  aLow_ = aHigh_ = 0;
  ulow_ = uhigh_ = 0;

  scanValid_ = 0;
  minmaxSample_ = 25;

  zContrast_ = .5;
  zSample_ = 600;
  zLine_ = 5;
  zscaleValid_ = 0;

  autoCutValid_ = 0;
  autoCutPer_ = 0;

  clipMode_ = FrScale::MINMAX;
  minmaxMode_ = FrScale::SCAN;

  if (fits->find("DATAMIN") && fits->find("DATAMAX")) {
    hasdatamin_ = 1;
    datamin_ = fits->getReal("DATAMIN", 0);
    datamax_ = fits->getReal("DATAMAX", 0);
  }
  else {
    hasdatamin_ = 0;
    datamin_ = datamax_ = 0;
  }

  if (fits->find("IRAF-MIN") && fits->find("IRAF-MAX")) {
    hasirafmin_ = 1;
    irafmin_ = fits->getReal("IRAF-MIN", 0);
    irafmax_ = fits->getReal("IRAF-MAX", 0);
  }
  else {
    hasirafmin_ = 0;
    irafmin_ = irafmax_ = 0;
  }

  secMode_ = FrScale::IMGSEC;
}

FitsData::~FitsData()
{
}

const char* FitsData::getLow()
{
  ostringstream str;
  str << low_ << ends;
  memcpy(buf_,str.str().c_str(),str.str().length());
  return buf_;
}

const char* FitsData::getHigh()
{
  ostringstream str;
  str << high_ << ends;
  memcpy(buf_,str.str().c_str(),str.str().length());
  return buf_;
}

int FitsData::calcIncr()
{
  switch (minmaxMode_) {
  case FrScale::SCAN:
  case FrScale::DATAMIN:
  case FrScale::IRAFMIN:
    return 1;
  case FrScale::SAMPLE:
    return minmaxSample_;
  }
}

// AutoCut
#define AUTOCUTSIZE 10240
void FitsData::autoCut(FitsBound* params)
{
  double amin = min();
  double amax = max();

  // bin it up
  double hst[AUTOCUTSIZE];
  memset(hst,0,sizeof(double)*AUTOCUTSIZE);
  hist(hst, AUTOCUTSIZE, amin, amax, params);

  // find total number of pixels
  int total = 0;
  for (int ii=0; ii<AUTOCUTSIZE; ii++)
    total += hst[ii];
  
  // calc cut off
  int cutoff = (total*(100.-autoCutPer_)/100.)/2.;
  int count;
  int ll, hh;
  for (ll=0,count=0; ll<AUTOCUTSIZE; ll++) {
    count += hst[ll];
    if (count > cutoff)
      break;
  }

  for (hh=AUTOCUTSIZE-1,count=0; hh>ll+1; hh--) {
    count += hst[hh];
    if (count > cutoff)
      break;
  }

  aLow_ = (amax-amin)/AUTOCUTSIZE*ll + amin;
  aHigh_ = (amax-amin)/AUTOCUTSIZE*hh + amin;
}

const char* FitsData::getMin()
{
  ostringstream str;

  switch (minmaxMode_) {
  case FrScale::SCAN:
  case FrScale::SAMPLE:
    str << min_ << ends;
    break;

  case FrScale::DATAMIN:
    if (hasdatamin_)
      str << datamin_ << ends;
    else
      str << ends;
    break;

  case FrScale::IRAFMIN:
    if (hasirafmin_)
      str << irafmin_ << ends;
    else
      str << ends;
    break;
  }

  memcpy(buf_,str.str().c_str(),str.str().length());
  return buf_;
}

const char* FitsData::getMinX()
{
  ostringstream str;
  str << minXY_[0] << ends;
  memcpy(buf_,str.str().c_str(),str.str().length());
  return buf_;
}

const char* FitsData::getMinY()
{
  ostringstream str;
  str << minXY_[1] << ends;
  memcpy(buf_,str.str().c_str(),str.str().length());
  return buf_;
}

const char* FitsData::getMax()
{
  ostringstream str;
  switch (minmaxMode_) {
  case FrScale::SCAN:
  case FrScale::SAMPLE:
    str << max_ << ends;
    break;

  case FrScale::DATAMIN:
    if (hasdatamin_)
      str << datamax_ << ends;
    else
      str << ends;
    break;

  case FrScale::IRAFMIN:
    if (hasirafmin_)
      str << irafmax_ << ends;
    else
      str << ends;
    break;
  }

  memcpy(buf_,str.str().c_str(),str.str().length());
  return buf_;
}

const char* FitsData::getMaxX()
{
  ostringstream str;
  str << maxXY_[0] << ends;
  memcpy(buf_,str.str().c_str(),str.str().length());
  return buf_;
}

const char* FitsData::getMaxY()
{
  ostringstream str;
  str << maxXY_[1] << ends;
  memcpy(buf_,str.str().c_str(),str.str().length());
  return buf_;
}

double FitsData::min()
{
  switch (minmaxMode_) {
  case FrScale::SCAN:
  case FrScale::SAMPLE:
    return min_;

  case FrScale::DATAMIN:
    if (hasdatamin_)
      return datamin_;
    else
      return 0;

  case FrScale::IRAFMIN:
    if (hasirafmin_)
      return irafmin_;
    else
      return 0;
  }
}

double FitsData::max()
{
  switch (minmaxMode_) {
  case FrScale::SCAN:
  case FrScale::SAMPLE:
    return max_;

  case FrScale::DATAMIN:
    if (hasdatamin_)
      return datamax_;
    else
      return 0;

  case FrScale::IRAFMIN:
    if (hasirafmin_)
      return irafmax_;
    return 0;
  }
}

// FitsDatam

template<class T> FitsDatam<T>::FitsDatam(FitsFile* fits, Tcl_Interp* pp) 
  : FitsData(fits, pp)
{
  data_ = (T*)fits->data();
}

// swap (optimized)

template <> unsigned char FitsDatam<unsigned char>::swap(unsigned char* ptr)
{
  return *ptr;
}

template <> short FitsDatam<short>::swap(short* ptr)
{
  const char* p = (const char*)ptr;
  union {
    char c[2];
    short s;
  } u;

  u.c[1] = *p++;
  u.c[0] = *p;

  return u.s;
}

template <> unsigned short FitsDatam<unsigned short>::swap(unsigned short* ptr)
{
  const char* p = (const char*)ptr;
  union {
    char c[2];
    unsigned short s;
  } u;

  u.c[1] = *p++;
  u.c[0] = *p;

  return u.s;
}

template <> int FitsDatam<int>::swap(int* ptr)
{
  const char* p = (const char*)ptr;
  union {
    char c[4];
    int i;
  } u;

  u.c[3] = *p++;
  u.c[2] = *p++;
  u.c[1] = *p++;
  u.c[0] = *p;

  return u.i;
}

template <> long long FitsDatam<long long>::swap(long long* ptr)
{
  const char* p = (const char*)ptr;
  union {
    char c[8];
    long long i;
  } u;

  u.c[7] = *p++;
  u.c[6] = *p++;
  u.c[5] = *p++;
  u.c[4] = *p++;
  u.c[3] = *p++;
  u.c[2] = *p++;
  u.c[1] = *p++;
  u.c[0] = *p;

  return u.i;
}

template <> float FitsDatam<float>::swap(float* ptr)
{
  const char* p = (const char*)ptr;
  union {
    char c[4];
    float f;
  } u;

  u.c[3] = *p++;
  u.c[2] = *p++;
  u.c[1] = *p++;
  u.c[0] = *p;

  return u.f;
}

template <> double FitsDatam<double>::swap(double* ptr)
{
  const char* p = (const char*)ptr;
  union {
    char c[8];
    double d;
  } u;

  u.c[7] = *p++;
  u.c[6] = *p++;
  u.c[5] = *p++;
  u.c[4] = *p++;
  u.c[3] = *p++;
  u.c[2] = *p++;
  u.c[1] = *p++;
  u.c[0] = *p;

  return u.d;
}

// Private/Protected

// output

template<class T> void FitsDatam<T>::output(ostringstream& str, T value)
{
  str << value << ends;
}

template <> void FitsDatam<unsigned char>::output(ostringstream& str, unsigned char value)
{
  str << (unsigned short)value << ends;
}

template <> void FitsDatam<unsigned short>::output(ostringstream& str, unsigned short value)
{
  str << (unsigned short)value << ends;
}

// scan (optimized)

template <> void FitsDatam<unsigned char>::scan(FitsBound* params)
{
  min_ = UCHAR_MAX;
  max_ = 0;
  minXY_.origin();
  maxXY_.origin();

  int kk =calcIncr();

  if (DebugPerf)
    cerr << "FitsDatam<unsigned char>::scan()..."
	 << " sample=" << minmaxSample_
	 << " (" << params->xmin << ',' << params->ymin 
	 << ") to (" << params->xmax << ',' << params->ymax << ") ";

  SETSIGBUS
  for (int jj=params->ymin; jj<params->ymax; jj+=kk) {
    unsigned char* ptr = data_ + jj*long(width_) + long(params->xmin);
    for (int ii=params->xmin; ii<params->xmax; ii+=kk, ptr+=kk) {
      register unsigned char value = *ptr;

      if (hasblank_ && value == blank_)
	continue; // skip nan's 

      if (value < min_) {
	min_ = value;
	minXY_ = Vector(ii+1, jj+1);
      }
      if (value > max_) {
	max_ = value;
	maxXY_ = Vector(ii+1, jj+1);
      }
    }
  }
  CLEARSIGBUS

  // sanity check
  if (min_ == UCHAR_MAX && max_ == 0) {
    min_ =NAN;
    max_ =NAN;
    minXY_.origin();
    maxXY_.origin();
  }
  else {
    if (hasscaling_) {
      min_ = min_*bscale_ + bzero_;
      max_ = max_*bscale_ + bzero_;
    }
  }

  if (DebugPerf) {
    cerr << "end" << endl;
    cerr << "min: " << min_ << " max: " << max_ << endl;
  }
}

template <> void FitsDatam<short>::scan(FitsBound* params)
{
  min_ = SHRT_MAX;
  max_ = SHRT_MIN;
  minXY_.origin();
  maxXY_.origin();

  int kk =calcIncr();

  if (DebugPerf)
    cerr << "FitsDatam<short>::scan()..." 
	 << " sample=" << minmaxSample_
	 << " (" << params->xmin << ',' << params->ymin
	 << ") to (" << params->xmax << ',' << params->ymax << ") ";

  SETSIGBUS
  for (int jj=params->ymin; jj<params->ymax; jj+=kk) {
    short* ptr = data_ + jj*long(width_) + long(params->xmin);
    for (int ii=params->xmin; ii<params->xmax; ii+=kk, ptr+=kk) {
      register short value;

      if (!byteswap_) 
	value = *ptr;
      else {
	const char* p = (const char*)ptr;
	union {
	  char c[2];
	  short s;
	} u;

	u.c[1] = *p++;
	u.c[0] = *p;

	value = u.s;
      }

      if (hasblank_ && value == blank_)
	continue; // skip nan's 

      if (value < min_) {
	min_ = value;
	minXY_ = Vector(ii+1, jj+1);
      }
      if (value > max_) {
	max_ = value;
	maxXY_ = Vector(ii+1, jj+1);
      }
    }
  }
  CLEARSIGBUS

  // sanity check
  if (min_ == SHRT_MAX && max_ == SHRT_MIN) {
    min_ =NAN;
    max_ =NAN;
    minXY_.origin();
    maxXY_.origin();
  }
  else {
    if (hasscaling_) {
      min_ = min_*bscale_ + bzero_;
      max_ = max_*bscale_ + bzero_;
    }
  }

  if (DebugPerf) {
    cerr << "end" << endl;
    cerr << "min: " << min_ << " max: " << max_ << endl;
  }
}

template <> void FitsDatam<unsigned short>::scan(FitsBound* params)
{
  min_ = USHRT_MAX;
  max_ = 0;
  minXY_.origin();
  maxXY_.origin();

  int kk =calcIncr();

  if (DebugPerf)
    cerr << "FitsDatam<unsigned short>::scan()..."
	 << " sample=" << minmaxSample_
	 << " (" << params->xmin << ',' << params->ymin
	 << ") to (" << params->xmax << ',' << params->ymax << ") ";

  SETSIGBUS
  for (int jj=params->ymin; jj<params->ymax; jj+=kk) {
    unsigned short* ptr = data_ + jj*long(width_) + long(params->xmin);
    for (int ii=params->xmin; ii<params->xmax; ii+=kk, ptr+=kk) {
      register unsigned short value;

      if (!byteswap_) 
	value = *ptr;
      else {
	const char* p = (const char*)ptr;
	union {
	  char c[2];
	  unsigned short s;
	} u;

	u.c[1] = *p++;
	u.c[0] = *p;

	value = u.s;
      }

      if (hasblank_ && value == blank_)
	continue; // skip nan's 

      if (value < min_) {
	min_ = value;
	minXY_ = Vector(ii+1, jj+1);
      }
      if (value > max_) {
	max_ = value;
	maxXY_ = Vector(ii+1, jj+1);
      }
    }
  }
  CLEARSIGBUS

  // sanity check
  if (min_ == USHRT_MAX && max_ == 0) {
    min_ =NAN;
    max_ =NAN;
    minXY_.origin();
    maxXY_.origin();
  }
  else {
    if (hasscaling_) {
      min_ = min_*bscale_ + bzero_;
      max_ = max_*bscale_ + bzero_;
    }
  }

  if (DebugPerf) {
    cerr << "end" << endl;
    cerr << "min: " << min_ << " max: " << max_ << endl;
  }
}

template <> void FitsDatam<int>::scan(FitsBound* params)
{
  min_ = INT_MAX;
  max_ = INT_MIN;
  minXY_.origin();
  maxXY_.origin();

  int kk =calcIncr();

  if (DebugPerf)
    cerr << "FitsDatam<int>::scan()..."
	 << " sample=" << minmaxSample_
	 << " (" << params->xmin << ',' << params->ymin
	 << ") to (" << params->xmax << ',' << params->ymax << ") ";

  SETSIGBUS
  for (int jj=params->ymin; jj<params->ymax; jj+=kk) {
    int* ptr = data_ + jj*long(width_) + long(params->xmin);
    for (int ii=params->xmin; ii<params->xmax; ii+=kk, ptr+=kk) {
      register int value;

      if (!byteswap_) 
	value = *ptr;
      else {
	const char* p = (const char*)ptr;
	union {
	  char c[4];
	  int i;
	} u;

	u.c[3] = *p++;
	u.c[2] = *p++;
	u.c[1] = *p++;
	u.c[0] = *p;

	value = u.i;
      }

      if (hasblank_ && value == blank_)
	continue; // skip nan's 

      if (value < min_) {
	min_ = value;
	minXY_ = Vector(ii+1, jj+1);
      }
      if (value > max_) {
	max_ = value;
	maxXY_ = Vector(ii+1, jj+1);
      }
    }
  }
  CLEARSIGBUS

  // sanity check
  if (min_ == INT_MAX && max_ == INT_MIN) {
    min_ =NAN;
    max_ =NAN;
    minXY_.origin();
    maxXY_.origin();
  }
  else {
    if (hasscaling_) {
      min_ = min_*bscale_ + bzero_;
      max_ = max_*bscale_ + bzero_;
    }
  }

  if (DebugPerf) {
    cerr << "end" << endl;
    cerr << "min: " << min_ << " max: " << max_ << endl;
  }
}

template <> void FitsDatam<long long>::scan(FitsBound* params)
{
  min_ = LLONG_MAX;
  max_ = LLONG_MIN;
  minXY_.origin();
  maxXY_.origin();

  int kk =calcIncr();

  if (DebugPerf)
    cerr << "FitsDatam<long long>::scan()..."
	 << " sample=" << minmaxSample_
	 << " (" << params->xmin << ',' << params->ymin
	 << ") to (" << params->xmax << ',' << params->ymax << ") ";

  SETSIGBUS
  for (int jj=params->ymin; jj<params->ymax; jj+=kk) {
    long long* ptr = data_ + jj*long(width_) + long(params->xmin);
    for (int ii=params->xmin; ii<params->xmax; ii+=kk, ptr+=kk) {
      register long long value;

      if (!byteswap_) 
	value = *ptr;
      else {
	const char* p = (const char*)ptr;
	union {
	  char c[8];
	  long long i;
	} u;

	u.c[7] = *p++;
	u.c[6] = *p++;
	u.c[5] = *p++;
	u.c[4] = *p++;
	u.c[3] = *p++;
	u.c[2] = *p++;
	u.c[1] = *p++;
	u.c[0] = *p;

	value = u.i;
      }

      if (hasblank_ && value == blank_)
	continue; // skip nan's 

      if (value < min_) {
	min_ = value;
	minXY_ = Vector(ii+1, jj+1);
      }
      if (value > max_) {
	max_ = value;
	maxXY_ = Vector(ii+1, jj+1);
      }
    }
  }
  CLEARSIGBUS

  // sanity check
  if (min_ == LLONG_MAX && max_ == LLONG_MIN) {
    min_ =NAN;
    max_ =NAN;
    minXY_.origin();
    maxXY_.origin();
  }
  else {
    if (hasscaling_) {
      min_ = min_*bscale_ + bzero_;
      max_ = max_*bscale_ + bzero_;
    }
  }

  if (DebugPerf) {
    cerr << "end" << endl;
    cerr << "min: " << min_ << " max: " << max_ << endl;
  }
}

template <> void FitsDatam<float>::scan(FitsBound* params)
{
  min_ = FLT_MAX;
  max_ = -FLT_MAX;
  minXY_.origin();
  maxXY_.origin();

  int kk =calcIncr();

  if (DebugPerf)
    cerr << "FitsDatam<float>::scan()..."
	 << " sample=" << minmaxSample_
	 << " (" << params->xmin << ',' << params->ymin
	 << ") to (" << params->xmax << ',' << params->ymax << ") ";

  SETSIGBUS
  for (int jj=params->ymin; jj<params->ymax; jj+=kk) {
    float* ptr = data_ + jj*long(width_) + long(params->xmin);
    for (int ii=params->xmin; ii<params->xmax; ii+=kk, ptr+=kk) {
      register float value;

      if (!byteswap_) 
	value = *ptr;
      else {
	const char* p = (const char*)ptr;
	union {
	  char c[4];
	  float f;
	} u;

	u.c[3] = *p++;
	u.c[2] = *p++;
	u.c[1] = *p++;
	u.c[0] = *p;

	value = u.f;
      }

      if (isfinite(value)) {
	if (value < min_) {
	  min_ = value;
	  minXY_ = Vector(ii+1, jj+1);
	}
	if (value > max_) {
	  max_ = value;
	  maxXY_ = Vector(ii+1, jj+1);
	}
      }
    }
  }
  CLEARSIGBUS

  // sanity check
  if (min_ == FLT_MAX && max_ == -FLT_MAX) {
    min_ =NAN;
    max_ =NAN;
    minXY_.origin();
    maxXY_.origin();
  }
  else {
    if (hasscaling_) {
      min_ = min_*bscale_ + bzero_;
      max_ = max_*bscale_ + bzero_;
    }
  }

  if (DebugPerf) {
    cerr << "end" << endl;
    cerr << "min: " << min_ << " max: " << max_ << endl;
  }
}

template <> void FitsDatam<double>::scan(FitsBound* params)
{
  min_ = DBL_MAX;
  max_ = -DBL_MAX;
  minXY_.origin();
  maxXY_.origin();

  int kk =calcIncr();

  if (DebugPerf)
    cerr << "FitsDatam<double>::scan()..."
	 << " sample=" << minmaxSample_
	 << " (" << params->xmin << ',' << params->ymin
	 << ") to (" << params->xmax << ',' << params->ymax << ") ";

  SETSIGBUS
  for (int jj=params->ymin; jj<params->ymax; jj+=kk) {
    double* ptr = data_ + jj*long(width_) + long(params->xmin);
    for (int ii=params->xmin; ii<params->xmax; ii+=kk, ptr+=kk) {
      register double value;

      if (!byteswap_) 
	value = *ptr;
      else {
	const char* p = (const char*)ptr;
	union {
	  char c[8];
	  double d;
	} u;

	u.c[7] = *p++;
	u.c[6] = *p++;
	u.c[5] = *p++;
	u.c[4] = *p++;
	u.c[3] = *p++;
	u.c[2] = *p++;
	u.c[1] = *p++;
	u.c[0] = *p;

	value = u.d;
      }

      if (isfinite(value)) {
	if (value < min_) {
	  min_ = value;
	  minXY_ = Vector(ii+1, jj+1);
	}
	if (value > max_) {
	  max_ = value;
	  maxXY_ = Vector(ii+1, jj+1);
	}
      }
    }
  }
  CLEARSIGBUS

  // sanity check
  if (min_ == DBL_MAX && max_ == -DBL_MAX) {
    min_ =NAN;
    max_ =NAN;
    minXY_.origin();
    maxXY_.origin();
  }
  else {
    if (hasscaling_) {
      min_ = min_*bscale_ + bzero_;
      max_ = max_*bscale_ + bzero_;
    }
  }

  if (DebugPerf) {
    cerr << "end" << endl;
    cerr << "min: " << min_ << " max: " << max_ << endl;
  }
}

// Public

// updateClip
template<class T> void FitsDatam<T>::updateClip(FrScale* fr, FitsBound* params)
{
  if (DebugPerf)
    cerr << "FitsDatam<T>::updateClip()" << endl;

  clipMode_ = fr->clipMode();
  ulow_ = fr->ulow();
  uhigh_ = fr->uhigh();

  // force min/max scan
  if (fr->force()) {
    fr->setForce(0);
    scanValid_ = 0;
    zscaleValid_ = 0;
    autoCutValid_ = 0;
  }

  // DATASEC
  if (secMode_ != fr->secMode()) {
    scanValid_ = 0;
    zscaleValid_ = 0;
    autoCutValid_ = 0;
  }
  secMode_ = fr->secMode();

  // MINMAX
  if (minmaxMode_ != fr->minmaxMode() || minmaxSample_ != fr->minmaxSample())
    scanValid_ = 0;
  minmaxMode_ = fr->minmaxMode();
  minmaxSample_ = fr->minmaxSample();

  // ZSCALE
  if (zContrast_ != fr->zContrast() || 
      zSample_ != fr->zSample() || 
      zLine_ != fr->zLine())
    zscaleValid_ = 0;
  zContrast_ = fr->zContrast();
  zSample_ = fr->zSample();
  zLine_ = fr->zLine();

  // AUTOCUT
  if (minmaxMode_ != fr->minmaxMode() || autoCutPer_ != fr->autoCutPer())
    autoCutValid_ = 0;
  autoCutPer_ = fr->autoCutPer();

  // always update min/max because everyone needs it
  if (!scanValid_) {
    scan(params);
    scanValid_ = 1;
  }

  switch (clipMode_) {
  case FrScale::MINMAX:
    low_ = min();
    high_ = max();
    break;

  case FrScale::ZSCALE:
    if (!zscaleValid_) {
      zscale(params);
      zscaleValid_ = 1;
    }

    low_ = zLow_;
    high_ = zHigh_;
    break;

  case FrScale::ZMAX:
    // set low via zscale, high via minmax
    if (!zscaleValid_) {
      zscale(params);
      zscaleValid_ = 1;
    }

    low_ = zLow_;
    high_ = max();
    break;

  case FrScale::AUTOCUT:
    if (!autoCutValid_) {
      autoCut(params);
      autoCutValid_ = 1;
    }

    low_ = aLow_;
    high_ = aHigh_;
    break;

  case FrScale::USERCLIP:
    low_ = ulow_;
    high_ = uhigh_;
    break;
  }
}

// getValue

template<class T> const char* FitsDatam<T>::getValue(const Vector& vv)
{
  Vector v(vv);

  long x = (long)v[0];
  long y = (long)v[1];

  ostringstream str;

  if (x >= 0 && x < width_ && y >= 0 && y < height_) {
    register T value = !byteswap_ ? data_[y*width_ + x] : 
      swap(data_+(y*width_ + x));

    if (hasblank_ && value == blank_)
      str << "blank" << ends;
    else if (hasscaling_)
      str << value * bscale_ + bzero_ << ends;
    else
      output(str, value);
  }
  else
    str << ends;

  memcpy(buf_,str.str().c_str(),str.str().length());
  return buf_;
}

template <> const char* FitsDatam<float>::getValue(const Vector& vv)
{
  Vector v(vv);

  long x = (long)v[0];
  long y = (long)v[1];

  ostringstream str;

  if (x >= 0 && x < width_ && y >= 0 && y < height_) {
    register float value = 
      !byteswap_ ? data_[y*width_ + x] : swap(data_+(y*width_ + x));

    if (isinf(value))
      str << "inf" << ends;
    else if (isnan(value))
      str << "nan" << ends;
    else if (hasscaling_)
      str << value * bscale_ + bzero_ << ends;
    else
      str << value << ends;
  }
  else
    str << ends;

  memcpy(buf_,str.str().c_str(),str.str().length());
  return buf_;
}

template <> const char* FitsDatam<double>::getValue(const Vector& vv)
{
  Vector v(vv);

  long x = (long)v[0];
  long y = (long)v[1];

  ostringstream str;

  if (x >= 0 && x < width_ && y >= 0 && y < height_) {
    register double value = 
      !byteswap_ ? data_[y*width_ + x] : swap(data_+(y*width_ + x));

    if (isinf(value))
      str << "inf" << ends;
    else if (isnan(value))
      str << "nan" << ends;
    else if (hasscaling_)
      str << value * bscale_ + bzero_ << ends;
    else
      str << value << ends;
  }
  else
    str << ends;

  memcpy(buf_,str.str().c_str(),str.str().length());
  return buf_;
}

// getValueFloat(long) (optimized)
// no bounds checking, we need the speed

template <> float FitsDatam<unsigned char>::getValueFloat(long i)
{
  if (!hasblank_ && !hasscaling_)
    return data_[i];

  if (hasblank_ && data_[i] == blank_)
    return NAN;
  else
    return hasscaling_ ? data_[i] * bscale_ + bzero_ : data_[i];
}

template <> float FitsDatam<short>::getValueFloat(long i)
{
  if (!byteswap_ && !hasblank_ && !hasscaling_)
    return data_[i];

  if (!byteswap_) {
    if (hasblank_ && data_[i] == blank_)
      return NAN;
    else
      return hasscaling_ ? data_[i] * bscale_ + bzero_ : data_[i];
  }
  else {
    const char* p = (const char*)(data_+i);
    union {
      char c[2];
      short s;
    } u;

    u.c[1] = *p++;
    u.c[0] = *p;

    if (!hasblank_ && !hasscaling_)
      return u.s;

    if (hasblank_ && u.s == blank_)
      return NAN;
    else
      return hasscaling_ ? u.s * bscale_ + bzero_ : u.s;
  }
}

template <> float FitsDatam<unsigned short>::getValueFloat(long i)
{
  if (!byteswap_ && !hasblank_ && !hasscaling_) 
    return data_[i];

  if (!byteswap_) {
    if (hasblank_ && data_[i] == blank_)
      return NAN;
    else
      return hasscaling_ ? data_[i] * bscale_ + bzero_ : data_[i];
  }
  else {
    const char* p = (const char*)(data_+i);
    union {
      char c[2];
      unsigned short s;
    } u;

    u.c[1] = *p++;
    u.c[0] = *p;

    if (!hasblank_ && !hasscaling_) 
      return u.s;

    if (hasblank_ && u.s == blank_)
      return NAN;
    else
      return hasscaling_ ? u.s * bscale_ + bzero_ : u.s;
  }
}

template <> float FitsDatam<int>::getValueFloat(long i)
{
  if (!byteswap_ && !hasblank_ && !hasscaling_) 
    return data_[i];

  if (!byteswap_) {
    if (hasblank_ && data_[i] == blank_)
      return NAN;
    else
      return hasscaling_ ? data_[i] * bscale_ + bzero_ : data_[i];
  }
  else {
    const char* p = (const char*)(data_+i);
    union {
      char c[4];
      int i;
    } u;

    u.c[3] = *p++;
    u.c[2] = *p++;
    u.c[1] = *p++;
    u.c[0] = *p;

    if (!hasblank_ && !hasscaling_) 
      return u.i;

    if (hasblank_ && u.i == blank_)
      return NAN;
    else
      return hasscaling_ ? u.i * bscale_ + bzero_ : u.i;
  }
}

template <> float FitsDatam<long long>::getValueFloat(long i)
{
  if (!byteswap_ && !hasblank_ && !hasscaling_) 
    return data_[i];

  if (!byteswap_) {
    if (hasblank_ && data_[i] == blank_)
      return NAN;
    else
      return hasscaling_ ? data_[i] * bscale_ + bzero_ : data_[i];
  }
  else {
    const char* p = (const char*)(data_+i);
    union {
      char c[8];
      long long i;
    } u;

    u.c[7] = *p++;
    u.c[6] = *p++;
    u.c[5] = *p++;
    u.c[4] = *p++;
    u.c[3] = *p++;
    u.c[2] = *p++;
    u.c[1] = *p++;
    u.c[0] = *p;

    if (!hasblank_ && !hasscaling_) 
      return u.i;

    if (hasblank_ && u.i == blank_)
      return NAN;
    else
      return hasscaling_ ? u.i * bscale_ + bzero_ : u.i;
  }
}

template <> float FitsDatam<float>::getValueFloat(long i)
{
  if (!byteswap_)
    if (isfinite(data_[i]))
      return hasscaling_ ? data_[i] * bscale_ + bzero_ : data_[i];
    else
      return NAN;
  else {
    const char* p = (const char*)(data_+i);
    union {
      char c[4];
      float f;
    } u;

    u.c[3] = *p++;
    u.c[2] = *p++;
    u.c[1] = *p++;
    u.c[0] = *p;

    if (isfinite(u.f))
      return hasscaling_ ? u.f * bscale_ + bzero_ : u.f;
    else
      return NAN;
  }
}

template <> float FitsDatam<double>::getValueFloat(long i)
{
  if (!byteswap_)
    if (isfinite(data_[i]))
      return hasscaling_ ? (float)data_[i] * bscale_ + bzero_ : (float)data_[i];
    else
      return NAN;
  else {
    const char* p = (const char*)(data_+i);
    union {
      char c[8];
      double d;
    } u;

    u.c[7] = *p++;
    u.c[6] = *p++;
    u.c[5] = *p++;
    u.c[4] = *p++;
    u.c[3] = *p++;
    u.c[2] = *p++;
    u.c[1] = *p++;
    u.c[0] = *p;

    if (isfinite(u.d))
      return hasscaling_ ? (float)u.d * bscale_ + bzero_ : (float)u.d;
    else
      return NAN;
  }
}

// getValueFloat(const Vector&)

template<class T> float FitsDatam<T>::getValueFloat(const Vector& v)
{
  Vector r = v;
  long x = (long)r[0];
  long y = (long)r[1];

  if (x >= 0 && x < width_ && y >= 0 && y < height_) {
    register T value = !byteswap_ ? data_[y*width_ + x] : 
      swap(data_+(y*width_ + x));

    if (hasblank_ && value == blank_)
      return NAN;

    return hasscaling_ ? value * bscale_ + bzero_ : value;
  }
  else
    return NAN;
}

template <> float FitsDatam<float>::getValueFloat(const Vector& v)
{
  Vector r = v;
  long x = (long)r[0];
  long y = (long)r[1];

  if (x >= 0 && x < width_ && y >= 0 && y < height_) {
    register float value = !byteswap_ ? data_[y*width_ + x] : 
      swap(data_+(y*width_ + x));

    if (isfinite(value))
      return hasscaling_ ? value * bscale_ + bzero_ : value;
    else
      return NAN;
  }
  else
    return NAN;
}

template <> float FitsDatam<double>::getValueFloat(const Vector& v)
{
  Vector r = v;
  long x = (long)r[0];
  long y = (long)r[1];

  if (x >= 0 && x < width_ && y >= 0 && y < height_) {
    register double value = !byteswap_ ? data_[y*width_ + x] : 
      swap(data_+(y*width_ + x));

    if (isfinite(value))
      return hasscaling_ ? (float)value * bscale_ + bzero_ : (float)value;
    else 
      return NAN;
  }
  else
    return NAN;
}

// getValueDouble(long) (optimized)
// no bounds checking, we need the speed

template <> double FitsDatam<unsigned char>::getValueDouble(long i)
{
  if (!hasblank_ && !hasscaling_) 
    return data_[i];

  if (hasblank_ && data_[i] == blank_)
    return NAN;
  else
    return hasscaling_ ? data_[i] * bscale_ + bzero_ : data_[i];
}

template <> double FitsDatam<short>::getValueDouble(long i)
{
  if (!byteswap_ && !hasblank_ && !hasscaling_) 
    return data_[i];

  if (!byteswap_) {
    if (hasblank_ && data_[i] == blank_)
      return NAN;
    else
      return hasscaling_ ? data_[i] * bscale_ + bzero_ : data_[i];
  }
  else {
    const char* p = (const char*)(data_+i);
    union {
      char c[2];
      short s;
    } u;

    u.c[1] = *p++;
    u.c[0] = *p;

    if (!hasblank_ && !hasscaling_) 
      return u.s;

    if (hasblank_ && u.s == blank_)
      return NAN;
    else
      return hasscaling_ ? u.s * bscale_ + bzero_ : u.s;
  }
}

template <> double FitsDatam<unsigned short>::getValueDouble(long i)
{
  if (!byteswap_ && !hasblank_ && !hasscaling_) 
    return data_[i];

  if (!byteswap_) {
    if (hasblank_ && data_[i] == blank_)
      return NAN;
    else
      return hasscaling_ ? data_[i] * bscale_ + bzero_ : data_[i];
  }
  else {
    const char* p = (const char*)(data_+i);
    union {
      char c[2];
      unsigned short s;
    } u;

    u.c[1] = *p++;
    u.c[0] = *p;

    if (!hasblank_ && !hasscaling_) 
      return u.s;

    if (hasblank_ && u.s == blank_)
      return NAN;
    else
      return hasscaling_ ? u.s * bscale_ + bzero_ : u.s;
  }
}

template <> double FitsDatam<int>::getValueDouble(long i)
{
  if (!byteswap_ && !hasblank_ && !hasscaling_) 
    return data_[i];

  if (!byteswap_) {
    if (hasblank_ && data_[i] == blank_)
      return NAN;
    else
      return hasscaling_ ? data_[i] * bscale_ + bzero_ : data_[i];
  }
  else {
    const char* p = (const char*)(data_+i);
    union {
      char c[4];
      int i;
    } u;

    u.c[3] = *p++;
    u.c[2] = *p++;
    u.c[1] = *p++;
    u.c[0] = *p;

    if (!hasblank_ && !hasscaling_) 
      return u.i;

    if (hasblank_ && u.i == blank_)
      return NAN;
    else
      return hasscaling_ ? u.i * bscale_ + bzero_ : u.i;
  }
}

template <> double FitsDatam<long long>::getValueDouble(long i)
{
  if (!byteswap_ && !hasblank_ && !hasscaling_) 
    return data_[i];

  if (!byteswap_) {
    if (hasblank_ && data_[i] == blank_)
      return NAN;
    else
      return hasscaling_ ? data_[i] * bscale_ + bzero_ : data_[i];
  }
  else {
    const char* p = (const char*)(data_+i);
    union {
      char c[8];
      long long i;
    } u;

    u.c[7] = *p++;
    u.c[6] = *p++;
    u.c[5] = *p++;
    u.c[4] = *p++;
    u.c[3] = *p++;
    u.c[2] = *p++;
    u.c[1] = *p++;
    u.c[0] = *p;

    if (!hasblank_ && !hasscaling_) 
      return u.i;

    if (hasblank_ && u.i == blank_)
      return NAN;
    else
      return hasscaling_ ? u.i * bscale_ + bzero_ : u.i;
  }
}

template <> double FitsDatam<float>::getValueDouble(long i)
{
  if (!byteswap_ && !hasscaling_)  
    return (double)data_[i];

  if (!byteswap_) {
    if (isfinite(data_[i]))
      return hasscaling_ ? (double)data_[i] * bscale_ + bzero_ : (double)data_[i];
    else
      return NAN;
  }
  else {
    const char* p = (const char*)(data_+i);
    union {
      char c[4];
      float f;
    } u;

    u.c[3] = *p++;
    u.c[2] = *p++;
    u.c[1] = *p++;
    u.c[0] = *p;

    if (isfinite(u.f))
      return hasscaling_ ? (double)u.f * bscale_ + bzero_ : (double)u.f;
    else 
      return NAN;
  }
}

template <> double FitsDatam<double>::getValueDouble(long i)
{
  if (!byteswap_ && !hasscaling_)  
    return (double)data_[i];

  if (!byteswap_) {
    if (isfinite(data_[i]))
      return hasscaling_ ? data_[i] * bscale_ + bzero_ : data_[i];
    else
      return NAN;
  }
  else {
    const char* p = (const char*)(data_+i);
    union {
      char c[8];
      double d;
    } u;

    u.c[7] = *p++;
    u.c[6] = *p++;
    u.c[5] = *p++;
    u.c[4] = *p++;
    u.c[3] = *p++;
    u.c[2] = *p++;
    u.c[1] = *p++;
    u.c[0] = *p;

    if (isfinite(u.d))
      return hasscaling_ ? u.d * bscale_ + bzero_ : u.d;
    else
      return NAN;
  }
}

// getValueDouble(const Vector&)

template<class T> double FitsDatam<T>::getValueDouble(const Vector& v)
{
  Vector r = v;
  long x = (long)r[0];
  long y = (long)r[1];

  if (x >= 0 && x < width_ && y >= 0 && y < height_) {
    register T value = !byteswap_ ? data_[y*width_ + x] : 
      swap(data_+(y*width_ + x));

    if (hasblank_ && value == blank_)
      return NAN;

    return hasscaling_ ? value * bscale_ + bzero_ : value;
  }
  else
    return NAN;
}

template <> double FitsDatam<float>::getValueDouble(const Vector& v)
{
  Vector r = v;
  long x = (long)r[0];
  long y = (long)r[1];

  if (x >= 0 && x < width_ && y >= 0 && y < height_) {
    register float value = !byteswap_ ? data_[y*width_ + x] : 
      swap(data_+(y*width_ + x));

    if (isfinite(value))
      return hasscaling_ ? (double)value * bscale_ + bzero_ : (double)value;
    else
      return NAN;
  }
  else 
    return NAN;
}

template <> double FitsDatam<double>::getValueDouble(const Vector& v)
{
  Vector r = v;
  long x = (long)r[0];
  long y = (long)r[1];

  if (x >= 0 && x < width_ && y >= 0 && y < height_) {
    register double value = !byteswap_ ? data_[y*width_ + x] : 
      swap(data_+(y*width_ + x));

    if (isfinite(value))
      return hasscaling_ ? value * bscale_ + bzero_ : value;
    else 
      return NAN;
  }
  else 
    return NAN;
}

// bin

template<class T> void FitsDatam<T>::hist(double* arr, int length, double mn, 
					  double mx, FitsBound* params)
{
  if (DebugPerf)
    cerr << "FitsDatam<T>::hist()" << endl;

  double diff = mx-mn;
  int last = length-1;
  int kk =calcIncr();

  // special case: mx-mn=0
  if (!diff) {
    arr[0] = (params->xmax-params->xmin)*(params->ymax-params->ymin);
    return;
  }

  SETSIGBUS
  for (int jj=params->ymin; jj<params->ymax; jj+=kk) {
    T* ptr = data_ + jj*long(width_) + long(params->xmin);
    for (int ii=params->xmin; ii<params->xmax; ii+=kk, ptr+=kk) {

      register double value = !byteswap_ ? *ptr : swap(ptr);
      if (hasblank_ && value == blank_)
      	continue; // skip nan's

      if (hasscaling_)
	value = value * bscale_ + bzero_;

      if (value>=mn && value <=mx)
	arr[(int)((value-mn)/diff*last+.5)]++;
    }
  }
  CLEARSIGBUS
}

template <> void FitsDatam<float>::hist(double* arr, int length, double mn, 
					double mx, FitsBound* params)
{
  if (DebugPerf)
    cerr << "FitsDatam<float>::hist()" << endl;

  double diff = mx-mn;
  // the last location is always 0
  int last = length-2;
  int kk =calcIncr();

  // special case: mx-mn=0
  if (!diff) {
    arr[0] = (params->xmax-params->xmin)*(params->ymax-params->ymin);
    return;
  }

  SETSIGBUS
  for (int jj=params->ymin; jj<params->ymax; jj+=kk) {
    float* ptr = data_ + jj*long(width_) + long(params->xmin);
    for (int ii=params->xmin; ii<params->xmax; ii+=kk, ptr+=kk) {

      register double value = !byteswap_ ? *ptr : swap(ptr);
      if (!isfinite(value))
	continue; // skip nan's

      if (hasscaling_)
	value = value * bscale_ + bzero_;

      if (value>=mn && value<=mx)
	arr[(int)((value-mn)/diff*last+.5)]++;
    }
  }
  CLEARSIGBUS
}

template <> void FitsDatam<double>::hist(double* arr, int length, double mn, 
					double mx, FitsBound* params)
{
  if (DebugPerf)
    cerr << "FitsDatam<double>::hist()" << endl;

  double diff = mx-mn;
  int last = length-1;
  int kk =calcIncr();

  // special case: mx-mn=0
  if (!diff) {
    arr[0] = (params->xmax-params->xmin)*(params->ymax-params->ymin);
    return;
  }

  SETSIGBUS
  for (int jj=params->ymin; jj<params->ymax; jj+=kk) {
    double* ptr = data_ + jj*long(width_) + long(params->xmin);
    for (int ii=params->xmin; ii<params->xmax; ii+=kk, ptr+=kk) {

      register double value = !byteswap_ ? *ptr : swap(ptr);
      if (!isfinite(value))
	continue; // skip nan's

      if (hasscaling_)
	value = value * bscale_ + bzero_;

      if (value>=mn && value <=mx)
	arr[(int)((value-mn)/diff*last+.5)]++;
    }
  }
  CLEARSIGBUS
}

// ZSCALE

// ZSCALE -- Compute the optimal Z1, Z2 (range of greyscale values to be
// displayed) of an image.  For efficiency a statistical subsample of an image
// is used.  The pixel sample evenly subsamples the image in x and y.  The
// entire image is used if the number of pixels in the image is smaller than
// the desired sample.
//
// The sample is accumulated in a buffer and sorted by greyscale value.
// The median value is the central value of the sorted array.  The slope of a
// straight line fitted to the sorted sample is a measure of the standard
// deviation of the sample about the median value.  Our algorithm is to sort
// the sample and perform an iterative fit of a straight line to the sample,
// using pixel rejection to omit gross deviants near the endpoints.  The fitted
// straight line is the transfer function used to map image Z into display Z.
// If more than half the pixels are rejected the full range is used.  The slope
// of the fitted line is divided by the user-supplied contrast factor and the
// final Z1 and Z2 are computed, taking the origin of the fitted line at the
// median value.

template<class T> void FitsDatam<T>::zscale(FitsBound* params)
{
  // Subsample the image

  float* sample;
  int npix = zSampleImage(&sample,params);
  int center_pixel = ZSMAX(1, (npix + 1) / 2);

  // Sort the sample, compute the minimum, maximum, and median pixel values

  qsort((void*)sample, npix, sizeof(float), fCompare);
  float zmin = *sample;
  float zmax = *(sample+ZSMAX(npix,1)-1);

  // The median value is the average of the two central values if there 
  // are an even number of pixels in the sample.

  float* left = &(sample[center_pixel - 1]);

  float median;
  if (ZSMOD(npix, 2) == 1 || center_pixel >= npix)
    median = *left;
  else
    median = (*left + *(left+1)) / 2;

  // Fit a line to the sorted sample vector.  If more than half of the
  // pixels in the sample are rejected give up and return the full range.
  // If the user-supplied contrast factor is not 1.0 adjust the scale
  // accordingly and compute zLow and zHigh, the y intercepts at indices 1 and
  // npix.

  int minpix = ZSMAX(ZSMIN_NPIXELS, (int)(npix * ZSMAX_REJECT));
  int ngrow = ZSMAX(1, ZSNINT(npix * .01));
  float zstart, zslope;

  int ngoodpix = zFitLine(sample, npix, &zstart, &zslope, 
			  ZSKREJ, ngrow, ZSMAX_ITERATIONS);

  if (ngoodpix < minpix) {
    zLow_ = zmin;
    zHigh_ = zmax;
  }
  else {
    if (zContrast_ > 0)
      zslope = zslope / zContrast_;
    zLow_ = ZSMAX(zmin, median - (center_pixel - 1) * zslope);
    zHigh_ = ZSMIN(zmax, median + (npix - center_pixel) * zslope);
  }

  delete [] sample;
}

// sampleImage -- Extract an evenly gridded subsample of the pixels from
// a two-dimensional image into a one-dimensional vector.

template<class T> int FitsDatam<T>::zSampleImage(float** sample, FitsBound* params)
{
  // Compute the number of pixels each line will contribute to the sample,
  // and the subsampling step size for a line.  The sampling grid must
  // span the whole line on a uniform grid.

  int wd = params->xmax - params->xmin;
  int opt_npix_per_line = ZSMAX(1, ZSMIN(wd, zLine_));
  int col_step = ZSMAX(2, (wd + opt_npix_per_line-1) / opt_npix_per_line);
  int npix_per_line = ZSMAX(1, (wd + col_step-1) / col_step);

  /*
  int opt_npix_per_line = ZSMAX(1, ZSMIN(width, zLine));
  int col_step = ZSMAX(2, (width + opt_npix_per_line-1) / opt_npix_per_line);
  int npix_per_line = ZSMAX(1, (width + col_step-1) / col_step);
  */

  // Compute the number of lines to sample and the spacing between lines.
  // We must ensure that the image is adequately sampled despite its
  // size, hence there is a lower limit on the number of lines in the
  // sample.  We also want to minimize the number of lines accessed when
  // accessing a large image, because each disk seek and read is ex-
  // pensive. The number of lines extracted will be roughly the sample
  // size divided by zLine, possibly more if the lines are very
  // short.

  int hd = params->ymax-params->ymin;
  int min_nlines_in_sample = ZSMAX(1, zSample_ / zLine_);
  int opt_nlines_in_sample = ZSMAX(min_nlines_in_sample, 
				 ZSMIN(hd, (zSample_ + npix_per_line-1) / 
				 npix_per_line));
  int line_step = ZSMAX(2, hd / opt_nlines_in_sample);
  int max_nlines_in_sample = (hd + line_step-1) / line_step;

  /*
  int min_nlines_in_sample = ZSMAX(1, zSample / zLine);
  int opt_nlines_in_sample = ZSMAX(min_nlines_in_sample, 
  			     ZSMIN(height, (zSample + npix_per_line-1) / 
			     npix_per_line));
  int line_step = ZSMAX(2, height / opt_nlines_in_sample);
  int max_nlines_in_sample = (height + line_step-1) / line_step;
  */

  // Allocate space for the output vector.  Buffer must be freed by our caller.

  int maxpix = npix_per_line * max_nlines_in_sample;
  *sample = new float[maxpix];
  //  float* row = new float[width];
  float* row = new float[wd];

  // Extract the vector

  int npix = 0;
  float* op = *sample;

  //  for (int line = (line_step + 1)/2; line < height; line+=line_step) {
  for (int line = (line_step + 1)/2 + params->ymin; line < params->ymax; line+=line_step) {

    // Load a row of values from the image

    //    for (int i=0; i < width; i++) {
    for (int i=0; i<wd; i++) {
      //      T* ptr = data + (line-1)*width + i;
      T* ptr = data_ + (line-1)*long(width_) + i + long(params->xmin);
      T value = !byteswap_ ? *ptr : swap(ptr);

      if (hasblank_ && (value == blank_))
	row[i] = NAN;
      else
	row[i] = hasscaling_ ? value * bscale_ + bzero_ : value;
    }    

    int got = zSubSample(row, op, npix_per_line, col_step);
    op += got;
    npix += got;
    if (npix >= maxpix)
      break;
  }

  delete [] row;
  return npix;
}

template <> int FitsDatam<float>::zSampleImage(float** sample, FitsBound* params)
{
  // Compute the number of pixels each line will contribute to the sample,
  // and the subsampling step size for a line.  The sampling grid must
  // span the whole line on a uniform grid.

  int wd = params->xmax - params->xmin;
  int opt_npix_per_line = ZSMAX(1, ZSMIN(wd, zLine_));
  int col_step = ZSMAX(2, (wd + opt_npix_per_line-1) / opt_npix_per_line);
  int npix_per_line = ZSMAX(1, (wd + col_step-1) / col_step);

  /*
  int opt_npix_per_line = ZSMAX(1, ZSMIN(width, zLine));
  int col_step = ZSMAX(2, (width + opt_npix_per_line-1) / opt_npix_per_line);
  int npix_per_line = ZSMAX(1, (width + col_step-1) / col_step);
  */

  // Compute the number of lines to sample and the spacing between lines.
  // We must ensure that the image is adequately sampled despite its
  // size, hence there is a lower limit on the number of lines in the
  // sample.  We also want to minimize the number of lines accessed when
  // accessing a large image, because each disk seek and read is ex-
  // pensive. The number of lines extracted will be roughly the sample
  // size divided by zLine, possibly more if the lines are very
  // short.

  int hd = params->ymax-params->ymin;
  int min_nlines_in_sample = ZSMAX(1, zSample_ / zLine_);
  int opt_nlines_in_sample = ZSMAX(min_nlines_in_sample, 
				 ZSMIN(hd, (zSample_ + npix_per_line-1) / 
				 npix_per_line));
  int line_step = ZSMAX(2, hd / opt_nlines_in_sample);
  int max_nlines_in_sample = (hd + line_step-1) / line_step;

  /*
  int min_nlines_in_sample = ZSMAX(1, zSample / zLine);
  int opt_nlines_in_sample = ZSMAX(min_nlines_in_sample, 
  			     ZSMIN(height, (zSample + npix_per_line-1) / 
			     npix_per_line));
  int line_step = ZSMAX(2, height / opt_nlines_in_sample);
  int max_nlines_in_sample = (height + line_step-1) / line_step;
  */

  // Allocate space for the output vector.  Buffer must be freed by our caller.

  int maxpix = npix_per_line * max_nlines_in_sample;
  *sample = new float[maxpix];
  //  float* row = new float[width];
  float* row = new float[wd];

  // Extract the vector

  int npix = 0;
  float* op = *sample;

  //  for (int line = (line_step + 1)/2; line < height; line+=line_step) {
  for (int line = (line_step + 1)/2 + params->ymin; line < params->ymax; line+=line_step) {

    // Load a row of values from the image

    //    for (int i=0; i < width; i++) {
    for (int i=0; i<wd; i++) {
      //      T* ptr = data + (line-1)*width + i;
      float* ptr = data_ + (line-1)*long(width_) + i + long(params->xmin);
      float value = !byteswap_ ? *ptr : swap(ptr);

      if (isfinite(value))
	row[i] = hasscaling_ ? value * bscale_ + bzero_ : value;
      else
	row[i] = NAN;
    }    

    int got = zSubSample(row, op, npix_per_line, col_step);
    op += got;
    npix += got;
    if (npix >= maxpix)
      break;
  }

  delete [] row;
  return npix;
}

template <> int FitsDatam<double>::zSampleImage(float** sample, FitsBound* params)
{
  // Compute the number of pixels each line will contribute to the sample,
  // and the subsampling step size for a line.  The sampling grid must
  // span the whole line on a uniform grid.

  int wd = params->xmax - params->xmin;
  int opt_npix_per_line = ZSMAX(1, ZSMIN(wd, zLine_));
  int col_step = ZSMAX(2, (wd + opt_npix_per_line-1) / opt_npix_per_line);
  int npix_per_line = ZSMAX(1, (wd + col_step-1) / col_step);

  /*
  int opt_npix_per_line = ZSMAX(1, ZSMIN(width, zLine));
  int col_step = ZSMAX(2, (width + opt_npix_per_line-1) / opt_npix_per_line);
  int npix_per_line = ZSMAX(1, (width + col_step-1) / col_step);
  */

  // Compute the number of lines to sample and the spacing between lines.
  // We must ensure that the image is adequately sampled despite its
  // size, hence there is a lower limit on the number of lines in the
  // sample.  We also want to minimize the number of lines accessed when
  // accessing a large image, because each disk seek and read is ex-
  // pensive. The number of lines extracted will be roughly the sample
  // size divided by zLine, possibly more if the lines are very
  // short.

  int hd = params->ymax-params->ymin;
  int min_nlines_in_sample = ZSMAX(1, zSample_ / zLine_);
  int opt_nlines_in_sample = ZSMAX(min_nlines_in_sample, 
				 ZSMIN(hd, (zSample_ + npix_per_line-1) / 
				 npix_per_line));
  int line_step = ZSMAX(2, hd / opt_nlines_in_sample);
  int max_nlines_in_sample = (hd + line_step-1) / line_step;

  /*
  int min_nlines_in_sample = ZSMAX(1, zSample / zLine);
  int opt_nlines_in_sample = ZSMAX(min_nlines_in_sample, 
  			     ZSMIN(height, (zSample + npix_per_line-1) / 
			     npix_per_line));
  int line_step = ZSMAX(2, height / opt_nlines_in_sample);
  int max_nlines_in_sample = (height + line_step-1) / line_step;
  */

  // Allocate space for the output vector.  Buffer must be freed by our caller.

  int maxpix = npix_per_line * max_nlines_in_sample;
  *sample = new float[maxpix];
  //  float* row = new float[width];
  float* row = new float[wd];

  // Extract the vector

  int npix = 0;
  float* op = *sample;

  //  for (int line = (line_step + 1)/2; line < height; line+=line_step) {
  for (int line = (line_step + 1)/2 + params->ymin; line < params->ymax; line+=line_step) {

    // Load a row of values from the image

    //    for (int i=0; i < width; i++) {
    for (int i=0; i<wd; i++) {
      //      T* ptr = data + (line-1)*width + i;
      double* ptr = data_ + (line-1)*long(width_) + i + long(params->xmin);
      double value = !byteswap_ ? *ptr : swap(ptr);

      if (isfinite(value))
	row[i] = hasscaling_ ? (float)value * bscale_ + bzero_ : (float)value;
      else
	row[i] = NAN;
    }    

    int got = zSubSample(row, op, npix_per_line, col_step);
    op += got;
    npix += got;
    if (npix >= maxpix)
      break;
  }

  delete [] row;
  return npix;
}

// subSample -- Subsample an image line.  Extract the first pixel and
// every "step"th pixel thereafter for a total of npix pixels.

int FitsData::zSubSample(float* a, float* b, int npix, int step)
{
  if (step <= 1)
    step = 1;

  int got = 0;
  int ip = 0;
  for (int i=0; i<npix; i++) {
    if (isfinite(a[ip])) // we skip over the nan pixels
      b[got++] = a[ip];

    ip += step;
  }

  return got;
}

// fitLine -- Fit a straight line to a data array of type real.  This is
// an iterative fitting algorithm, wherein points further than ksigma from the
// current fit are excluded from the next fit.  Convergence occurs when the
// next iteration does not decrease the number of pixels in the fit, or when
// there are no pixels left.  The number of pixels left after pixel rejection
// is returned as the function value.

int FitsData::zFitLine (float* sampleData, int npix, float* zstart, 
			float* zslope, float krej, int ngrow, int maxiter)
{
  float	xscale;
  if (npix <= 0)
    return (0);
  else if (npix == 1) {
    *zstart = sampleData[1];
    *zslope = 0.0;

    return (1);
  }
  else
    xscale = 2.0 / (npix - 1);

  // Allocate a buffer for data minus fitted curve, another for the
  // normalized X values, and another to flag rejected pixels.

  float* flat = new float[npix];
  float* normx = new float[npix];
  short* badpix = new short[npix];

  for (int k=0; k<npix; k++)
    badpix[k]=0;

  // Compute normalized X vector.  The data X values [1:npix] are
  // normalized to the range [-1:1].  This diagonalizes the lsq matrix
  // and reduces its condition number.

  for (int i=0; i<npix; i++)
    normx[i] = i * xscale - 1.0;

  // Fit a line with no pixel rejection.  Accumulate the elements of the
  // matrix and data vector.  The matrix M is diagonal with
  // M[1,1] = sum x**2 and M[2,2] = ngoodpix.  The data vector is
  // DV[1] = sum (data[i] * x[i]) and DV[2] = sum (data[i]).

  double sumxsqr = 0;
  double sumxz = 0;
  double sumx = 0;
  double sumz = 0;

  for (int j=0; j<npix; j++) {
    float x = normx[j];
    float z = sampleData[j];
    sumxsqr = sumxsqr + (x * x);
    sumxz   = sumxz + z * x;
    sumz    = sumz + z;
  }

  // Solve for the coefficients of the fitted line

  float z0 = sumz / npix;
  float dz = sumxz / sumxsqr;

  // Iterate, fitting a new line in each iteration. Compute the flattened
  // data vector and the sigma of the flat vector.  Compute the lower and
  // upper k-sigma pixel rejection thresholds.  Run down the flat array
  // and detect pixels to be rejected from the fit.  Reject pixels from
  // the fit by subtracting their contributions from the matrix sums and
  // marking the pixel as rejected.

  int ngoodpix = npix;
  int last_ngoodpix;
  int minpix = ZSMAX(ZSMIN_NPIXELS, (int) (npix * ZSMAX_REJECT));

  for (int niter=0;  niter < maxiter;  niter++) {
    last_ngoodpix = ngoodpix;

    // Subtract the fitted line from the data array

    zFlattenData(sampleData, flat, normx, npix, z0, dz);

    // Compute the k-sigma rejection threshold.  In principle this
    // could be more efficiently computed using the matrix sums
    // accumulated when the line was fitted, but there are problems with
    // numerical stability with that approach.

    float mean;
    float sigma;
    ngoodpix = zComputeSigma (flat, badpix, npix, &mean, &sigma);
    float threshold = sigma * krej;

    // Detect and reject pixels further than ksigma from the fitted
    // line.

    ngoodpix = zRejectPixels(sampleData, flat, normx,
			     badpix, npix, &sumxsqr, &sumxz, &sumx, &sumz, 
			     threshold, ngrow);

    // Solve for the coefficients of the fitted line.  Note that after
    // pixel rejection the sum of the X values need no longer be zero.

    if (ngoodpix > 0) {
      double rowrat = sumx / sumxsqr;
      z0 = (sumz - rowrat * sumxz) / (ngoodpix - rowrat * sumx);
      dz = (sumxz - z0 * sumx) / sumxsqr;
    }

    if (ngoodpix >= last_ngoodpix || ngoodpix < minpix)
      break;
  }

  // Transform the line coefficients back to the X range [1:npix]

  *zstart = z0 - dz;
  *zslope = dz * xscale;

  delete [] flat;
  delete [] normx;
  delete [] badpix;

  return ngoodpix;
}


// flattenData -- Compute and subtract the fitted line from the data array,
// returned the flattened data in FLAT.

void FitsData::zFlattenData(float* sampleData, float* flat, float* x, 
			     int npix, float z0, float dz)
{
  for (int i=0; i < npix; i++) 
    flat[i] = sampleData[i] - (x[i] * dz + z0);
}

// computeSigma -- Compute the root mean square deviation from the
// mean of a flattened array.  Ignore rejected pixels.

int FitsData::zComputeSigma(float* a, short* badpix, int npix, 
			    float* mean, float* sigma)
{
  int ngoodpix = 0;
  double sum = 0.0;
  double sumsq = 0.0;

  // Accumulate sum and sum of squares

  for (int i=0; i < npix; i++)
    if (badpix[i] == GOOD_PIXEL) {
      float pixval = a[i];
      ngoodpix = ngoodpix + 1;
      sum = sum + pixval;
      sumsq = sumsq + pixval * pixval;
    }

  // Compute mean and sigma

  switch (ngoodpix) {
  case 0:
    *mean = ZSINDEF;
    *sigma = ZSINDEF;
    break;
  case 1:
    *mean = sum;
    *sigma = ZSINDEF;
    break;
  default:
    *mean = sum / ngoodpix;
    double temp = sumsq / (ngoodpix-1) - (sum*sum) / (ngoodpix*(ngoodpix - 1));
    if (temp < 0)		// possible with roundoff error
      *sigma = 0.0;
    else
      *sigma = sqrt(temp);
  }

  return ngoodpix;
}

// rejectPixels -- Detect and reject pixels more than "threshold" greyscale
// units from the fitted line.  The residuals about the fitted line are given
// by the "flat" array, while the raw data is in "data".  Each time a pixel
// is rejected subtract its contributions from the matrix sums and flag the
// pixel as rejected.  When a pixel is rejected reject its neighbors out to
// a specified radius as well.  This speeds up convergence considerably and
// produces a more stringent rejection criteria which takes advantage of the
// fact that bad pixels tend to be clumped.  The number of pixels left in the
// fit is returned as the function value.

int FitsData::zRejectPixels(float* sampleData, float* flat, float *normx, 
			    short *badpix, int npix, double* sumxsqr, 
			    double* sumxz, double* sumx, double* sumz, 
			    float threshold, int ngrow)
{
  int ngoodpix = npix;
  float lcut = -threshold;
  float hcut = threshold;

  for (int i=0; i < npix; i++) {
    if (badpix[i] == BAD_PIXEL)
      ngoodpix = ngoodpix - 1;
    else {
      float residual = flat[i];
      if (residual < lcut || residual > hcut) {

	// Reject the pixel and its neighbors out to the growing
	// radius.  We must be careful how we do this to avoid
	// directional effects.  Do not turn off thresholding on
	// pixels in the forward direction; mark them for rejection
	// but do not reject until they have been thresholded.
	// If this is not done growing will not be symmetric.

	for (int j=ZSMAX(0,i-ngrow); j < ZSMIN(npix,i+ngrow); j++) {
	  if (badpix[j] != BAD_PIXEL) {
	    if (j <= i) {
	      double x = normx[j];
	      double z = sampleData[j];
	      *sumxsqr = *sumxsqr - (x * x);
	      *sumxz = *sumxz - z * x;
	      *sumx = *sumx - x;
	      *sumz = *sumz - z;
	      badpix[j] = BAD_PIXEL;
	      ngoodpix = ngoodpix - 1;
	    } else
	      badpix[j] = REJECT_PIXEL;
	  }
	}
      }
    }
  }

  return ngoodpix;
}

template class FitsDatam<unsigned char>;
template class FitsDatam<short>;
template class FitsDatam<unsigned short>;
template class FitsDatam<int>;
template class FitsDatam<long long>;
template class FitsDatam<float>;
template class FitsDatam<double>;
