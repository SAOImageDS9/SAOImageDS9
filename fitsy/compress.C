// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "compress.h"
#include "head.h"
#include "zlib.h"
#include "util.h"

FitsCompress::FitsCompress(FitsFile* fits)
{
  bitpix_ = fits->getInteger("ZBITPIX",0);
  type_ = dupstr(fits->getString("ZCMPTYPE"));

  znaxes_ = fits->getInteger("ZNAXIS",0);
  {
    char key[] = "ZNAXIS ";
    for (int ii=0; ii<2; ii++) {
      key[6] = '1'+ii;
      znaxis_[ii] = fits->getInteger(key,0);
    }
    for (int ii=2; ii<FTY_MAXAXES; ii++) {
      key[6] = '1'+ii;
      znaxis_[ii] = fits->getInteger(key,1);
      if (znaxis_[ii]<1)
	znaxis_[ii] =1;
    }
  }
  {
    ztile_[0] = fits->getInteger("ZTILE1",znaxis_[0]);
    char key[] = "ZTILE ";
    for (int ii=1; ii<FTY_MAXAXES; ii++) {
      key[5] = '1'+ii;
      ztile_[ii] = fits->getInteger(key,1);
      if (ztile_[ii]<1)
	ztile_[ii] =1;
    }
  }
  
  bscale_ = fits->getReal("ZSCALE",1);
  bzero_ = fits->getReal("ZZERO",0);
  blank_ = fits->getInteger("ZBLANK",0);
  zmaskcmp_ = dupstr(fits->getString("ZMASKCMP"));

  quantize_ = NODITHER;
  char keyword[] = "ZQUANTIZ";
  if (fits->find(keyword)) {
    char* str = fits->getString(keyword);
    if (!strncmp(str,"NONE",4))
      quantize_ = NONE;
    if (!strncmp(str,"NO_DITHER",4))
      quantize_ = NODITHER;
    else if (!strncmp(str,"SUBTRACTIVE_DITHER_1",20))
      quantize_ = SUBDITHER1;
    else if (!strncmp(str,"SUBTRACTIVE_DITHER_2",20))
      quantize_ = SUBDITHER2;
  }
  quantOffset_ = fits->getInteger("ZDITHER0",1);

  size_ = (size_t)znaxis_[0];
  tilesize_ = (size_t)ztile_[0];
  for (int ii=1; ii<FTY_MAXAXES; ii++) {
    size_ *= (size_t)znaxis_[ii];
    tilesize_ *= (size_t)ztile_[ii];
  }

  FitsHead* srcHead = fits->head();
  FitsTableHDU* srcHDU = (FitsTableHDU*)srcHead->hdu();
  uncompress_ = srcHDU->find("UNCOMPRESSED_DATA");
  gzcompress_ = srcHDU->find("GZIP_COMPRESSED_DATA");
  compress_ = srcHDU->find("COMPRESSED_DATA");
  null_ = srcHDU->find("NULL_PIXEL_MASK");
  zscale_ = srcHDU->find("ZSCALE");
  zzero_ = srcHDU->find("ZZERO");
  zblank_ = srcHDU->find("ZBLANK");

  hasScaling_ = (zscale_ && zzero_) || (fits->find("ZSCALE") && fits->find("ZZERO")) ? 1 : 0;
  hasBlank_ = zblank_ || fits->find("ZBLANK") ? 1 : 0;

  // Random seq
  double aa =16807;
  double mm =2147483647;
  double seed =1;
  numRandom_ =10000;
  random_ = new float[numRandom_];

  for (int ii=0; ii<numRandom_; ii++) {
    double tmp = aa*seed;
    seed = tmp-mm*((int)(tmp/mm));
    random_[ii] = (float)(seed/mm);
  }

  if (seed != 1043618065)
    internalError("Fitsy++ generated incorrect random number sequence");
}

FitsCompress::~FitsCompress()
{
  if (type_)
    delete [] type_;
  if (zmaskcmp_)
    delete [] zmaskcmp_;
  if (data_)
    delete [] (char*)data_;
  if (random_)
    delete [] random_;
}

int FitsCompress::initHeader(FitsFile* fits) 
{
  // simple check
  if (!compress_ || !znaxis_[0] || !znaxis_[1] || !bitpix_)
    return 0;

  // create header
  FitsHead* srcHead = fits->head();
  //  FitsTableHDU* srcHDU = (FitsTableHDU*)(srcHead->hdu());

  if (srcHead->find("ZTENSION")) {
    char* str = srcHead->getString("ZTENSION");
    head_ = new FitsHead(znaxes_, znaxis_, bitpix_, str);
  }
  else
    head_ = new FitsHead(znaxes_, znaxis_, bitpix_);

  if (!head_->isValid())
    return 0;

  char* ptr = srcHead->cards();
  for (int ii=0; ii<srcHead->ncard(); ii++, ptr+=80) {
    char key[9];
    key[8] = '\0';
    memcpy(key,ptr,8);
    if (!strncmp(key,"ZIMAGE",6) ||
	!strncmp(key,"ZCMPTYPE",8) ||
	!strncmp(key,"ZBITPIX",7) ||
	!strncmp(key,"ZNAXIS",6) ||
	!strncmp(key,"ZTILE",5) ||
	!strncmp(key,"ZNAME",5) ||
	!strncmp(key,"ZVAL",4) ||
	!strncmp(key,"ZMASKCMP",8) ||

	!strncmp(key,"ZSIMPLE",7) ||
	!strncmp(key,"ZTENSION",8) ||
	!strncmp(key,"ZEXTEND",7) ||

	!strncmp(key,"SIMPLE",6) ||
	!strncmp(key,"BITPIX",6) ||
	!strncmp(key,"NAXIS",5) ||
	!strncmp(key,"END",3) ||
	!strncmp(key,"XTENSION",8) ||
	!strncmp(key,"PCOUNT",6) ||
	!strncmp(key,"GCOUNT",6) ||
	!strncmp(key,"EXTEND",6) ||

	!strncmp(key,"CHECKSUM",8) ||
	!strncmp(key,"DATASUM",7) ||

	!strncmp(key,"TFIELDS",7) ||
	!strncmp(key,"TBCOL",5) ||
	!strncmp(key,"TFORM",5) ||
	!strncmp(key,"TSCAL",5) ||
	!strncmp(key,"TZERO",5) ||
	!strncmp(key,"TNULL",5) ||
	!strncmp(key,"TTYPE",5) ||
	!strncmp(key,"TUNIT",5) ||
	!strncmp(key,"TDISP",5) ||
	!strncmp(key,"THEAP",5) ||
	!strncmp(key,"TDIM",4))
      continue;

    // eat this one
    if (!strncmp(key,"EXTNAME",7)) {
      FitsCard cc(ptr);
      char* str = cc.getString();
      if (str) {
	if (!strncmp(str,"COMPRESSED_IMAGE",8))
	  continue;
      }
    }

    // substitute these

    if (!strncmp(key,"ZBLOCK",6)) {
      FitsCard cc(ptr);
      head_->appendInteger("BLOCK",cc.getInteger(),NULL);
      continue;
    }
    if (!strncmp(key,"ZPCOUNT",7)) {
      FitsCard cc(ptr);
      head_->appendInteger("PCOUNT",cc.getInteger(),NULL);
      continue;
    }
    if (!strncmp(key,"ZGCOUNT",7)) {
      FitsCard cc(ptr);
      head_->appendInteger("GCOUNT",cc.getInteger(),NULL);
      continue;
    }
    if (!strncmp(key,"ZHECKSUM",8)) {
      FitsCard cc(ptr);
      char* str = cc.getString();
      if (str) {
	head_->appendString("CHECKSUM",str,NULL);
	continue;
      }
    }
    if (!strncmp(key,"ZDATASUM",8)) {
      FitsCard cc(ptr);
      char* str = cc.getString();
      if (str) {
	head_->appendString("DATASUM",str,NULL);
	continue;
      }
    }

    // pass these unaltered
    head_->cardins(ptr,NULL);
  }

  // we added cards
  head_->updateHDU();

  // other
  primary_ = fits->primary();
  managePrimary_ = 0;

  inherit_ = head_->inherit();

  return 1;
}

void FitsCompress::initRandom(int row)
{
  row++;
  int rrow = row + quantOffset_-1;
  randSeed_ = (int)((rrow-1) % numRandom_);
  randNext_ = (int)(random_[randSeed_]*500);
}

double FitsCompress::unquantize(double val, double zs, double zz)
{
  double rr = (val-random_[randNext_]+.5)*zs + zz;

  randNext_++;
  if (randNext_ == numRandom_) {
    randSeed_++;
    if (randSeed_ == numRandom_)
      randSeed_ = 0;
    randNext_ = (int)(random_[randSeed_]*500);
  }

  return rr;
}

#define ZERO_VALUE -2147483646 /* value used to represent zero-valued pixels */
double FitsCompress::unquantizeZero(double val, double zs, double zz)
{
  double rr = (val == ZERO_VALUE) ? 0 : (val-random_[randNext_]+.5)*zs + zz;

  randNext_++;
  if (randNext_ == numRandom_) {
    randSeed_++;
    if (randSeed_ == numRandom_)
      randSeed_ = 0;
    randNext_ = (int)(random_[randSeed_]*500);
  }

  return rr;
}

template<class T> FitsCompressm<T>::FitsCompressm(FitsFile* fits) 
  : FitsCompress(fits) {}

template <class T> void FitsCompressm<T>::uncompress(FitsFile* fits)
{
  if (!initHeader(fits))
    return;

  if (!inflate(fits))
    return;

  swapBytes();

  // all done
  valid_ = 1;
}

template <class T> int FitsCompressm<T>::inflate(FitsFile* fits)
{
  FitsHead* srcHead = fits->head();
  FitsTableHDU* srcHDU = (FitsTableHDU*)(srcHead->hdu());

  if (null_) {
    internalError("Fitsy++ does not support NULL_PIXEL_MASK at this time.");
    return 0;
  }

  T* dest = new T[size_];
  if (!dest) {
    internalError("Fitsy++ compress unable to allocate memory");
    return 0;
  }

  // init image
  memset(dest, 0, size_*sizeof(T));

  // src
  char* sdata = (char*)fits->data(); 
  char* sptr = sdata;
  int heap = srcHDU->realbytes();
  int rowlen = srcHDU->width();
  int rows = srcHDU->rows();

  // dest
  int start[FTY_MAXAXES];
  int stop[FTY_MAXAXES];

  for (int ii=0; ii<FTY_MAXAXES; ii++) {
    start[ii] =0;
    stop[ii] = ztile_[ii];
    if (stop[ii] > znaxis_[ii])
      stop[ii] = znaxis_[ii];
  }

  for (int rr=0; rr<rows; rr++, sptr+=rowlen) {
    // we can't use incr paging due to the location of the heap
    //    sptr = fits->page(sptr, rowlen);

    int ok=0;
    if (gzcompress_ && !ok) {
      if (gzcompressed(dest, sptr, sdata+heap, start, stop)) {
	ok=1;
      }
    }

    if (compress_ && !ok) {
      initRandom(rr);
      if (compressed(dest, sptr, sdata+heap, start, stop)) {
	ok=1;
      }
    }

    if (uncompress_ && !ok) {
      if (uncompressed(dest, sptr, sdata+heap, start, stop)) {
	ok=1;
      }
    }

    if (!ok)
      return 0;

    // tiles may not be an even multiple of the image size
    inflateAdjust(0, start, stop);
  }

  // we can't use incr paging due to the location of the heap
  //  fits->resetpage();

  data_ = dest;

  dataSize_ = size_;
  dataSkip_ = 0;

  return 1;
}

template <class T> void FitsCompressm<T>::inflateAdjust(int ii, int* start, int* stop)
{
  start[ii] += ztile_[ii];
  stop[ii] += ztile_[ii];
  if (stop[ii] > znaxis_[ii])
    stop[ii] = znaxis_[ii];

  if (start[ii] >= znaxis_[ii]) {
    start[ii] = 0;
    stop[ii] = ztile_[ii];
    if (stop[ii] > znaxis_[ii])
      stop[ii] = znaxis_[ii];

    if (ii+1<FTY_MAXAXES)
      inflateAdjust(ii+1, start, stop);
  }
}

template <class T> size_t FitsCompressm<T>::calcIndex(int* xx)
{
  size_t id =0;
  for (int jj=0; jj<FTY_MAXAXES; jj++) {
    size_t kk =1;
    for (int ii=0; ii<jj; ii++)
      kk *=znaxis_[ii];
    id += xx[jj]*kk;
  }

  return id;
}

// uncompressed

template<class T> int FitsCompressm<T>::uncompressed(T* dest, char* sptr, 
						     char* heap,
						     int* start, int* stop)
{
  int ocnt=0;
  T* obuf = (T*)(((FitsBinColumnArray*)uncompress_)->get(heap, sptr, &ocnt));

  // obuf can be NULL
  if (!obuf || !ocnt)
    return 0;

  int xx[FTY_MAXAXES];

  int ll=0;
  // hard coded. hack.
  for (xx[8]=start[8]; xx[8]<stop[8]; xx[8]++)
    for (xx[7]=start[7]; xx[7]<stop[7]; xx[7]++)
      for (xx[6]=start[6]; xx[6]<stop[6]; xx[6]++)
	for (xx[5]=start[5]; xx[5]<stop[5]; xx[5]++)
	  for (xx[4]=start[4]; xx[4]<stop[4]; xx[4]++)
	    for (xx[3]=start[3]; xx[3]<stop[3]; xx[3]++)
	      for (xx[2]=start[2]; xx[2]<stop[2]; xx[2]++)
		for (xx[1]=start[1]; xx[1]<stop[1]; xx[1]++)
		  for (xx[0]=start[0]; xx[0]<stop[0]; xx[0]++,ll++)
		    dest[calcIndex(xx)] =  swap(obuf+ll);

  return 1;
}

// gzcompressed

template <class T> int FitsCompressm<T>::gzcompressed(T* dest, char* sptr, 
						      char* heap,
						      int* start, int* stop)
{
  int icnt=0;
  unsigned char* ibuf = (unsigned char*)((FitsBinColumnArray*)gzcompress_)->get(heap, sptr, &icnt);

  // ibuf can be NULL
  if (!ibuf || !icnt)
    return 0;

  int ocnt = tilesize_;
  char obuf[ocnt*sizeof(T)];

  z_stream zstrm;
  zstrm.next_in = NULL;
  zstrm.avail_in = 0;
  zstrm.zalloc = NULL;
  zstrm.zfree = NULL;
  zstrm.opaque = NULL;

  // look for both zlib and gzcompressed headers
  if (inflateInit2(&zstrm, MAX_WBITS+32) != Z_OK) {
    internalError("Fitsy++ gzcompressed inflateInit error");
    return 0;
  }

  zstrm.avail_in = icnt;
  zstrm.next_in = ibuf;
  zstrm.avail_out = ocnt*sizeof(T);
  zstrm.next_out = (Bytef*)obuf;

  if (DebugCompress)
    cerr << "  inflate START: avail_in " << zstrm.avail_in
	 << " avail_out " << zstrm.avail_out
	 << " total_in " << zstrm.total_in 
	 << " total_out " << zstrm.total_out << endl;

  int result = ::inflate(&zstrm, Z_FINISH);

  switch (result) {
  case Z_OK:
    if (DebugCompress)
      cerr << "  inflate OK: avail_in " << zstrm.avail_in
	   << " avail_out " << zstrm.avail_out
	   << " total_in " << zstrm.total_in 
	   << " total_out " << zstrm.total_out << endl;
    break;
  case Z_STREAM_END:
    if (DebugCompress)
      cerr << "  inflate STREAM_END: avail_in " << zstrm.avail_in
	   << " avail_out " << zstrm.avail_out
	   << " total_in " << zstrm.total_in 
	   << " total_out " << zstrm.total_out << endl;
    break;
  case Z_BUF_ERROR:
    if (DebugCompress)
      cerr << "  inflate BUF_ERROR: avail_in " << zstrm.avail_in
	   << " avail_out " << zstrm.avail_out << endl;
    return 0;
  default:
    internalError("Fitsy++ gzcompressed inflate error");
    return 0;
  }

  inflateEnd(&zstrm);

  int xx[FTY_MAXAXES];

  // hard coded. hack.
  int ll=0;
  for (xx[8]=start[8]; xx[8]<stop[8]; xx[8]++)
    for (xx[7]=start[7]; xx[7]<stop[7]; xx[7]++)
      for (xx[6]=start[6]; xx[6]<stop[6]; xx[6]++)
	for (xx[5]=start[5]; xx[5]<stop[5]; xx[5]++)
	  for (xx[4]=start[4]; xx[4]<stop[4]; xx[4]++)
	    for (xx[3]=start[3]; xx[3]<stop[3]; xx[3]++)
	      for (xx[2]=start[2]; xx[2]<stop[2]; xx[2]++)
		for (xx[1]=start[1]; xx[1]<stop[1]; xx[1]++)
		  for (xx[0]=start[0]; xx[0]<stop[0]; xx[0]++,ll++) {
		    // swap if needed
		    if (byteswap_)
		      *((T*)obuf+ll) = swap((T*)obuf+ll);
		    dest[calcIndex(xx)] = *((T*)obuf+ll);
		  }
  
  return 1;
}

// swap

template<class T> void FitsCompressm<T>::swapBytes() 
{
  if (byteswap_) {
    T* dest = (T*)data_;
    for (size_t ii=0; ii<size_; ii++)
      dest[ii] = swap(dest+ii);
  }
}

template <> unsigned char FitsCompressm<unsigned char>::swap(unsigned char* ptr)
{
  return *ptr;
}

template <> short FitsCompressm<short>::swap(short* ptr)
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

template <> unsigned short FitsCompressm<unsigned short>::swap(unsigned short* ptr)
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

template <> int FitsCompressm<int>::swap(int* ptr)
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

template <> long long FitsCompressm<long long>::swap(long long* ptr)
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

template <> float FitsCompressm<float>::swap(float* ptr)
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

template <> double FitsCompressm<double>::swap(double* ptr)
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

// getValue char

template <class T> T FitsCompressm<T>::getValue(char* ptr, double zs,
						double zz, int blank)
{
  return hasScaling_ ? T((*ptr)*zs + zz) : *ptr;
}

template <> float FitsCompressm<float>::getValue(char* ptr, double zs, 
						 double zz, int blank)
{
  if (!hasBlank_ && !hasScaling_ && quantize_==NONE)
    return *ptr;

  if (hasBlank_ && *ptr == blank)
    return NAN;

  switch (quantize_) {
  case NONE:
  case NODITHER:
    return hasScaling_ ? (*ptr)*zs + zz : *ptr;
  case SUBDITHER1:
  case SUBDITHER2:
    return unquantize(*ptr,zs,zz);
  }
}

template <> double FitsCompressm<double>::getValue(char* ptr, double zs, 
						   double zz, int blank)
{
  if (!hasBlank_ && !hasScaling_ && quantize_==NONE)
    return *ptr;

  if (hasBlank_ && *ptr == blank)
    return NAN;

  switch (quantize_) {
  case NONE:
  case NODITHER:
    return hasScaling_ ? (*ptr)*zs + zz : *ptr;
  case SUBDITHER1:
  case SUBDITHER2:
    return unquantize(*ptr,zs,zz);
  }
}

// getValue short

template <class T> T FitsCompressm<T>::getValue(short* ptr, double zs,
						double zz, int blank)
{
  return hasScaling_ ? T((*ptr)*zs + zz) : *ptr;
}

template <> float FitsCompressm<float>::getValue(short* ptr, double zs, 
						 double zz, int blank)
{
  if (!hasBlank_ && !hasScaling_ && quantize_==NONE)
    return *ptr;

  if (hasBlank_ && *ptr == blank)
    return NAN;

  switch (quantize_) {
  case NONE:
  case NODITHER:
    return hasScaling_ ? (*ptr)*zs + zz : *ptr;
  case SUBDITHER1:
  case SUBDITHER2:
    return unquantize(*ptr,zs,zz);
  }
}

template <> double FitsCompressm<double>::getValue(short* ptr, double zs, 
						   double zz, int blank)
{
  if (!hasBlank_ && !hasScaling_ && quantize_==NONE)
    return *ptr;

  if (hasBlank_ && *ptr == blank)
    return NAN;

  switch (quantize_) {
  case NONE:
  case NODITHER:
    return hasScaling_ ? (*ptr)*zs + zz : *ptr;
  case SUBDITHER1:
  case SUBDITHER2:
    return unquantize(*ptr,zs,zz);
  }
}

// getValue int

template <class T> T FitsCompressm<T>::getValue(int* ptr, double zs,
						double zz, int blank)
{
  return hasScaling_ ? T((*ptr)*zs + zz) : *ptr;
}

template <> float FitsCompressm<float>::getValue(int* ptr, double zs, 
						 double zz, int blank)
{
  if (!hasBlank_ && !hasScaling_ && quantize_==NONE)
    return *ptr;

  if (hasBlank_ && *ptr == blank)
    return NAN;

  switch (quantize_) {
  case NONE:
  case NODITHER:
    return hasScaling_ ? (*ptr)*zs + zz : *ptr;
  case SUBDITHER1:
    return unquantize(*ptr,zs,zz);
  case SUBDITHER2:
    return unquantizeZero(*ptr,zs,zz);
  }
}

template <> double FitsCompressm<double>::getValue(int* ptr, double zs, 
						   double zz, int blank)
{
  if (!hasBlank_ && !hasScaling_ && quantize_==NONE)
    return *ptr;

  if (hasBlank_ && *ptr == blank)
    return NAN;

  switch (quantize_) {
  case NONE:
  case NODITHER:
    return hasScaling_ ? (*ptr)*zs + zz : *ptr;
  case SUBDITHER1:
    return unquantize(*ptr,zs,zz);
  case SUBDITHER2:
    return unquantizeZero(*ptr,zs,zz);
  }
}

// getValue long long

template <class T> T FitsCompressm<T>::getValue(long long* ptr, double zs,
						double zz, int blank)
{
  return hasScaling_ ? T((*ptr)*zs + zz) : *ptr;
}

template <> float FitsCompressm<float>::getValue(long long* ptr, double zs, 
						 double zz, int blank)
{
  if (!hasBlank_ && !hasScaling_ && quantize_==NONE)
    return *ptr;

  if (hasBlank_ && *ptr == blank)
    return NAN;

  switch (quantize_) {
  case NONE:
  case NODITHER:
    return hasScaling_ ? (*ptr)*zs + zz : *ptr;
  case SUBDITHER1:
    return unquantize(*ptr,zs,zz);
  case SUBDITHER2:
    return unquantizeZero(*ptr,zs,zz);
  }
}

template <> double FitsCompressm<double>::getValue(long long* ptr, double zs, 
						   double zz, int blank)
{
  if (!hasBlank_ && !hasScaling_ && quantize_==NONE)
    return *ptr;

  if (hasBlank_ && *ptr == blank)
    return NAN;

  switch (quantize_) {
  case NONE:
  case NODITHER:
    return hasScaling_ ? (*ptr)*zs + zz : *ptr;
  case SUBDITHER1:
    return unquantize(*ptr,zs,zz);
  case SUBDITHER2:
    return unquantizeZero(*ptr,zs,zz);
  }
}

// getValue float

template <class T> T FitsCompressm<T>::getValue(float* ptr, double zs,
						double zz, int blank)
{
  return hasScaling_ ? T((*ptr)*zs + zz) : *ptr;
}

// getValue double

template <class T> T FitsCompressm<T>::getValue(double* ptr, double zs,
						double zz, int blank)
{
  return hasScaling_ ? T((*ptr)*zs + zz) : *ptr;
}

template class FitsCompressm<unsigned char>;
template class FitsCompressm<short>;
template class FitsCompressm<unsigned short>;
template class FitsCompressm<int>;
template class FitsCompressm<long long>;
template class FitsCompressm<float>;
template class FitsCompressm<double>;

FitsPostNext::FitsPostNext(FitsFile* p)
{
  FitsCompress* prev = (FitsCompress*)p;

  primary_ = prev->primary();
  managePrimary_ = 0;

  head_ = prev->head();
  manageHead_ = 0;

  FitsImageHDU* hdu = (FitsImageHDU*)head_->hdu();
  data_ = (char*)prev->data() + hdu->imgbytes();
  dataSize_ = 0;
  dataSkip_ = 0;

  ext_ = prev->ext();
  inherit_ = head_->inherit();
  byteswap_ = prev->byteswap();
  endian_ = prev->endian();
  valid_ = 1;

  return;
}
