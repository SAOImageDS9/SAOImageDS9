// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include "gzip.h"
#include "zlib.h"
#include "util.h"

template<class T> FitsGzipm<T>::FitsGzipm(FitsFile* fits) 
  : FitsCompressm<T>(fits)
{
  FitsCompressm<T>::uncompress(fits);
}

template <class T> int FitsGzipm<T>::compressed(T* dest, char* sptr, 
						char* heap,
						int* start, int* stop)
{
  double zs = FitsCompressm<T>::bscale_;
  if (FitsCompressm<T>::zscale_)
    zs = FitsCompressm<T>::zscale_->value(sptr,0);

  double zz = FitsCompressm<T>::bzero_;
  if (FitsCompressm<T>::zzero_)
    zz = FitsCompressm<T>::zzero_->value(sptr,0);

  int blank = FitsCompressm<T>::blank_;
  if (FitsCompressm<T>::zblank_)
    blank = (int)FitsCompressm<T>::zblank_->value(sptr,0);

  int icnt=0;
  unsigned char* ibuf = (unsigned char*)((FitsBinColumnArray*)FitsCompressm<T>::compress_)->get(heap, sptr, &icnt);

  // ibuf can be NULL
  if (!ibuf || !icnt)
    return 0;

  int ocnt = FitsCompressm<T>::tilesize_;
  char* obuf = new char[ocnt*sizeof(long long)];
  if (!obuf) {
    internalError("Fitsy++ gzip unable to alloc.");
    return 0;
  }

  z_stream zstrm;
  zstrm.next_in = NULL;
  zstrm.avail_in = 0;
  zstrm.zalloc = NULL;
  zstrm.zfree = NULL;
  zstrm.opaque = NULL;

  // look for both zlib and gzip headers
  if (inflateInit2(&zstrm, MAX_WBITS+32) != Z_OK) {
    internalError("Fitsy++ gzip inflateInit error");
    if (obuf)
      delete [] obuf;
    return 0;
  }

  zstrm.avail_in = icnt;
  zstrm.next_in = ibuf;
  zstrm.avail_out = ocnt*sizeof(long long);
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
    if (obuf)
      delete [] obuf;
    return 0;
  default:
    internalError("Fitsy++ gzip inflate error");
    if (obuf)
      delete [] obuf;
    return 0;
  }

  int bytepix = zstrm.total_out/FitsCompressm<T>::tilesize_;

  inflateEnd(&zstrm);

  // GZIP_2- unshuffle if needed
  if (!strncmp(FitsCompressm<T>::type_,"GZIP_2",6)) {
    switch (bytepix) {
    case 1:
      break;
    case 2:
      {
	int ll = ocnt*sizeof(short);
	char* nbuf = new char[ll];
	if (!nbuf) {
	  internalError("Fitsy++ gzip unable to alloc.");
	  if (obuf)
	    delete [] obuf;
	  return 0;
	}
	char* optr = obuf+ll-1;
	char* nptr = nbuf+ll-1;

	for (int ii=0; ii<ocnt; ii++) {
	  *nptr = *optr;
	  nptr--;
	  *nptr = *(optr-ocnt);
	  nptr--;

	  optr--;
	}
	memcpy(obuf,nbuf,ll);
	delete [] nbuf;
      }
      break;
    case 4:
      {
	int ll = ocnt*sizeof(int);
	char* nbuf = new char[ll];
	if (!nbuf) {
	  internalError("Fitsy++ gzip unable to alloc.");
	  if (obuf)
	    delete [] obuf;
	  return 0;
	}
	char* optr = obuf+ll-1;
	char* nptr = nbuf+ll-1;

	for (int ii=0; ii<ocnt; ii++) {
	  *nptr = *optr;
	  nptr--;
	  *nptr = *(optr-ocnt);
	  nptr--;
	  *nptr = *(optr-(2*ocnt));
	  nptr--;
	  *nptr = *(optr-(3*ocnt));
	  nptr--;

	  optr--;
	}
	memcpy(obuf,nbuf,ll);
	delete [] nbuf;
      }
      break;
    case 8:
      {
	int ll = ocnt*sizeof(long long);
	char* nbuf = new char[ll];
	if (!nbuf) {
	  internalError("Fitsy++ gzip unable to alloc.");
	  if (obuf)
	    delete [] obuf;
	  return 0;
	}
	char* optr = obuf+ll-1;
	char* nptr = nbuf+ll-1;

	for (int ii=0; ii<ocnt; ii++) {
	  *nptr = *optr;
	  nptr--;
	  *nptr = *(optr-ocnt);
	  nptr--;
	  *nptr = *(optr-(2*ocnt));
	  nptr--;
	  *nptr = *(optr-(3*ocnt));
	  nptr--;
	  *nptr = *(optr-(4*ocnt));
	  nptr--;
	  *nptr = *(optr-(5*ocnt));
	  nptr--;
	  *nptr = *(optr-(6*ocnt));
	  nptr--;
	  *nptr = *(optr-(7*ocnt));
	  nptr--;

	  optr--;
	}
	memcpy(obuf,nbuf,ll);
	delete [] nbuf;
      }
      break;
    }
  }

  int xx[FTY_MAXAXES];

  int ll=0;
  switch (bytepix) {
  case 1:
    for (xx[2]=start[2]; xx[2]<stop[2]; xx[2]++)
      for (xx[1]=start[1]; xx[1]<stop[1]; xx[1]++)
	for (xx[0]=start[0]; xx[0]<stop[0]; xx[0]++,ll++) {
	  size_t id = xx[2]*FitsCompressm<T>::znaxis_[0]*FitsCompressm<T>::znaxis_[1] + xx[1]*FitsCompressm<T>::znaxis_[0] + xx[0];
	  // very carefull about type conversions
	  T val = FitsCompressm<T>::getValue(obuf+ll,zs,zz,blank);
	  dest[id] = val;
	}
    break;
  case 2:
    for (xx[2]=start[2]; xx[2]<stop[2]; xx[2]++)
      for (xx[1]=start[1]; xx[1]<stop[1]; xx[1]++)
	for (xx[0]=start[0]; xx[0]<stop[0]; xx[0]++,ll++) {
	  // swap if needed
	  if (FitsCompressm<T>::byteswap_) {
	    const char* p = (const char*)((short*)obuf+ll);
	    union {
	      char c[2];
	      short s;
	    } u;

	    u.c[1] = *p++;
	    u.c[0] = *p;

	    *((short*)obuf+ll) = u.s;
	  }
	  // very carefull about type conversions
	  size_t id = xx[2]*FitsCompressm<T>::znaxis_[0]*FitsCompressm<T>::znaxis_[1] + xx[1]*FitsCompressm<T>::znaxis_[0] + xx[0];
	  T val = FitsCompressm<T>::getValue((short*)obuf+ll,zs,zz,blank);
	  dest[id] = val;
	}
    break;
  case 4:
    for (xx[2]=start[2]; xx[2]<stop[2]; xx[2]++)
      for (xx[1]=start[1]; xx[1]<stop[1]; xx[1]++)
	for (xx[0]=start[0]; xx[0]<stop[0]; xx[0]++,ll++) {
	  // swap if needed
	  if (FitsCompressm<T>::byteswap_) {
	    const char* p = (const char*)((int*)obuf+ll);
	    union {
	      char c[4];
	      int i;
	    } u;

	    u.c[3] = *p++;
	    u.c[2] = *p++;
	    u.c[1] = *p++;
	    u.c[0] = *p;

	    *((int*)obuf+ll) = u.i;
	  }
	  // very carefull about type conversions
	  size_t id = xx[2]*FitsCompressm<T>::znaxis_[0]*FitsCompressm<T>::znaxis_[1] + xx[1]*FitsCompressm<T>::znaxis_[0] + xx[0];
	  T val =0;
	  switch (FitsCompressm<T>::quantize_) {
	  case FitsCompress::NONE:
	    val = FitsCompressm<T>::getValue((float*)obuf+ll,zs,zz,blank);
	    break;
	  case FitsCompress::NODITHER:
	  case FitsCompress::SUBDITHER1:
	  case FitsCompress::SUBDITHER2:
	    val = FitsCompressm<T>::getValue((int*)obuf+ll,zs,zz,blank);
	    break;
         }
	  dest[id] = val;
	}
    break;
  case 8:
    for (xx[2]=start[2]; xx[2]<stop[2]; xx[2]++)
      for (xx[1]=start[1]; xx[1]<stop[1]; xx[1]++)
	for (xx[0]=start[0]; xx[0]<stop[0]; xx[0]++,ll++) {
	  // swap if needed
	  if (FitsCompressm<T>::byteswap_) {
	    const char* p = (const char*)((long long*)obuf+ll);
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

	    *((long long*)obuf+ll) = u.i;
	  }
	  // very carefull about type conversions
	  size_t id = xx[2]*FitsCompressm<T>::znaxis_[0]*FitsCompressm<T>::znaxis_[1] + xx[1]*FitsCompressm<T>::znaxis_[0] + xx[0];
	  T val =0;
	  switch (FitsCompressm<T>::quantize_) {
	  case FitsCompress::NONE:
	    val = FitsCompressm<T>::getValue((double*)obuf+ll,zs,zz,blank);
	    break;
	  case FitsCompress::NODITHER:
	  case FitsCompress::SUBDITHER1:
	  case FitsCompress::SUBDITHER2:
	    val = FitsCompressm<T>::getValue((long long*)obuf+ll,zs,zz,blank);
	    break;
	  }
	  dest[id] = val;
	}
    break;

  default:
    internalError("Fitsy++ gzip illegal bytepix");
    if (obuf)
      delete [] obuf;
    return 0;
  }

  if (obuf)
    delete [] obuf;
  return 1;
}

template class FitsGzipm<unsigned char>;
template class FitsGzipm<short>;
template class FitsGzipm<unsigned short>;
template class FitsGzipm<int>;
template class FitsGzipm<long long>;
template class FitsGzipm<float>;
template class FitsGzipm<double>;

