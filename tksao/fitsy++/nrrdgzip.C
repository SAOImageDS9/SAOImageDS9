// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include "nrrdgzip.h"
#include "zlib.h"
#include "util.h"

template<class T> FitsNRRDGzipm<T>::FitsNRRDGzipm(FitsFile* fits) 
  : FitsNRRDm<T>(fits)
{
  FitsNRRDm<T>::uncompress(fits);
}

template <class T> int FitsNRRDGzipm<T>::compressed(T* dest, char* src, 
						    size_t sz)

{
  z_stream zstrm;
  zstrm.zalloc = NULL;
  zstrm.zfree = NULL;
  zstrm.opaque = NULL;
  zstrm.avail_in = sz;
  zstrm.next_in = (Bytef*)src;
  zstrm.avail_out = this->size_*sizeof(T);
  zstrm.next_out = (Bytef*)dest;

  // look for both zlib and gzip headers
  if (inflateInit2(&zstrm, MAX_WBITS+32) != Z_OK) {
    internalError("Fitsy++ gzip inflateInit error");
    return 0;
  }

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
    internalError("Fitsy++ gzip inflate error");
    return 0;
  }

  inflateEnd(&zstrm);

  return 1;
}

template class FitsNRRDGzipm<unsigned char>;
template class FitsNRRDGzipm<short>;
template class FitsNRRDGzipm<unsigned short>;
template class FitsNRRDGzipm<int>;
template class FitsNRRDGzipm<long long>;
template class FitsNRRDGzipm<float>;
template class FitsNRRDGzipm<double>;

