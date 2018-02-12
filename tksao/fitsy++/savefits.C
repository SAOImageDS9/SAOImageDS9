// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include <tcl.h>

#include "file.h"
#include "util.h"
#include "outfile.h"
#include "outchannel.h"
#include "outsocket.h"

int FitsFile::saveFitsPrimHeader(OutFitsStream& str)
{
  // write fake primary header
  char buf[FTY_BLOCK];
  memset(buf,' ',FTY_BLOCK);

  char* hdu = buf;

  memcpy(hdu,"SIMPLE  = ",10);
  memcpy(hdu+32-3,"T /",3);
  hdu += FTY_CARDLEN;

  memcpy(hdu,"BITPIX  = ",10);
  memcpy(hdu+32-3,"8 /",3);
  hdu += FTY_CARDLEN;

  memcpy(hdu,"NAXIS   = ",10);
  memcpy(hdu+32-3,"0 /",3);
  hdu += FTY_CARDLEN;

  memcpy(hdu,"END",3);
  str.write(buf, FTY_BLOCK);

  return FTY_BLOCK;
}

int FitsFile::saveFitsHeaderCards(OutFitsStream& str, int depth, int cc)
{
  char buf[FTY_CARDLEN];
  int cnt = 0;

  char* ptr = head()->cards() + cc;
  char* end = head()->cards() + head()->headbytes();

  while (ptr<end) {
    if (!strncmp(ptr,"BITPIX",6) && head()->bitpix() == -16) {
      memset(buf,' ',FTY_CARDLEN);
      memcpy(buf,"BITPIX  = ",10);
      memcpy(buf+32-4,"32 /",4);
      str.write(buf, FTY_CARDLEN);
    } 
    else if (!strncmp(ptr,"NAXIS ",6)) {
      memset(buf,' ',FTY_CARDLEN);
      memcpy(buf,"NAXIS   = ",10);
      if (depth>1)
	memcpy(buf+32-3,"3 /",3);
      else
	if (head()->naxis(1)>1)
	  memcpy(buf+32-3,"2 /",3);
	else
	  memcpy(buf+32-3,"1 /",3);
      str.write(buf, FTY_CARDLEN);
    } 
    else if (!strncmp(ptr,"NAXIS2",6)) {
      str.write(ptr, FTY_CARDLEN);

      if (depth>1) {
	ostringstream ddstr;
	ddstr << depth << " /" << ends;
	const char* ddptr = dupstr(ddstr.str().c_str());
	int ll = strlen(ddptr);

	memset(buf,' ',FTY_CARDLEN);
	memcpy(buf,"NAXIS3  = ",10);
	memcpy(buf+32-ll, ddptr, ll);
	str.write(buf, FTY_CARDLEN);
	cnt += FTY_CARDLEN;
	delete [] ddptr;
      }
    } 
    else if (!strncmp(ptr,"NAXIS3",6)) {
      // skip, we already take care of it above
      cnt -= FTY_CARDLEN;
    } 
    else if (!strncmp(ptr,"NAXIS4",6)) {
      // skip, better not be here
      cnt -= FTY_CARDLEN;
    } 
    else if (!strncmp(ptr,"NAXIS5",6)) {
      // skip, better not be here
      cnt -= FTY_CARDLEN;
    } 
    else if (!strncmp(ptr,"PCOUNT",6)) {
      // skip
      cnt -= FTY_CARDLEN;
    } 
    else if (!strncmp(ptr,"GCOUNT",6)) {
      // skip
      cnt -= FTY_CARDLEN;
    } 
    else if (!strncmp(ptr,"END   ",6)) {
      // skip, will insert at the end
      cnt -= FTY_CARDLEN;
    }
    else if (!strncmp(ptr,"CRVAL3",6) && depth==1)
      // skip
      cnt -= FTY_CARDLEN;
    else if (!strncmp(ptr,"CRPIX3",6) && depth==1)
      // skip
      cnt -= FTY_CARDLEN;
    else if (!strncmp(ptr,"CDELT3",6) && depth==1)
      // skip
      cnt -= FTY_CARDLEN;
    else if (!strncmp(ptr,"CTYPE3",6) && depth==1)
      // skip
      cnt -= FTY_CARDLEN;
    else if (!strncmp(ptr,"CUNIT3",6) && depth==1)
      // skip
      cnt -= FTY_CARDLEN;
    else if (!strncmp(ptr,"CD3_",4) && depth==1)
      // skip
      cnt -= FTY_CARDLEN;
    else if (!strncmp(ptr,"PC3_",4) && depth==1)
      // skip
      cnt -= FTY_CARDLEN;
    else
      str.write(ptr, FTY_CARDLEN);

    ptr += FTY_CARDLEN;
    cnt += FTY_CARDLEN;
  }

  // final END
  memset(buf,' ',FTY_CARDLEN);
  memcpy(buf,"END",3);
  str.write(buf, FTY_CARDLEN);
  cnt += FTY_CARDLEN;

  return cnt;
}

int FitsFile::saveFitsHeader(OutFitsStream& str, int depth)
{
  int cnt =0;
  char buf[FTY_CARDLEN];

  memset(buf,' ',FTY_CARDLEN);
  memcpy(buf,"SIMPLE  = ",10);
  memcpy(buf+32-3,"T /",3);
  str.write(buf, FTY_CARDLEN);
  cnt += FTY_CARDLEN;

  cnt += saveFitsHeaderCards(str,depth,cnt);
  cnt += saveFitsPad(str,cnt,' ');

  return cnt;
}

int FitsFile::saveFitsXtHeader(OutFitsStream& str, int depth)
{
  // write xtension header
  // the header may be an xtension, or primary, so lets force a
  // first line of 'SIMPLE' and then write the rest of the header
  int cnt =0;
  char buf[FTY_CARDLEN];

  memset(buf,' ',FTY_CARDLEN);
  memcpy(buf,"XTENSION= 'IMAGE   '",20);
  str.write(buf, FTY_CARDLEN);
  cnt += FTY_CARDLEN;

  cnt += saveFitsHeaderCards(str,depth,cnt);
  cnt += saveFitsPad(str,cnt,' ');

  return cnt;
}

int FitsFile::saveFits(OutFitsStream& str)
{
  FitsImageHDU* hdu = (FitsImageHDU*)(head()->hdu());

  if (hdu->bitpix() != -16) {
    switch (endian_) {
    case BIG:
      str.write((char*)data(), hdu->imgbytes());
      break;
    case LITTLE:
      str.writeSwap((char*)data(), hdu->imgbytes(), head()->bitpix());
      break;
    case NATIVE:
      break;
    }
  
    return hdu->imgbytes();
  }
  
  // convert bitpix=-16 to bitpix=32
  int nx = head()->naxis(0);
  int ny = head()->naxis(1);
  int ss = nx*ny;
  int* dest = new int[ss];
  for(int jj=0; jj<ny; jj++) {
    for (int ii=0; ii<nx; ii++) {
      unsigned short* data = (unsigned short*)data_;
      unsigned short* ptr = data + jj*nx +ii;

      unsigned short vv;
      if (byteswap_) 
	swap2((char*)ptr, (char*)&vv);
      else
	vv = *ptr;

      dest[jj*nx + ii] = int(vv);
    }
  }

  if (!lsb())
    str.write((char*)dest, 4*ss);
  else
    str.writeSwap((char*)dest, 4*ss, 32);

  delete [] dest;
  return 4*ss;
}

int FitsFile::saveFitsPad(OutFitsStream& str, size_t cnt, char fil)
{
  // write any padding
  char buf[FTY_BLOCK];
  memset(buf,fil,FTY_BLOCK);

  int npad = FTY_BLOCK - (cnt % FTY_BLOCK);
  if (npad == FTY_BLOCK)
    npad = 0;
  if( npad > 0 )
    str.write(buf, npad);

  return npad;
}

int FitsFile::saveFitsTable(OutFitsStream& str)
{
  int cnt =0;
  // primary header
  str.write(primary()->cards(), primary()->headbytes());
  cnt += primary()->headbytes();

  // now, ext header
  str.write(head()->cards(), head()->headbytes());
  cnt += head()->headbytes();

  // write valid data
  // our data may be short (mmap or bad fits), so write valid data
  // then write the pad, becareful with arch, if array

  switch (endian_) {
  case BIG:
    str.write((char*)data(), head()->allbytes());
    break;
  case LITTLE:
    str.writeSwap((char*)data(), head()->allbytes(), head()->bitpix());
    break;
  case NATIVE:
    break;
  }
  cnt += head()->allbytes();

  // we may need to add a buffer to round out to block size
  int diff = head()->padbytes();
  if (diff>0) {
    char* buf = new char[diff];
    memset(buf,'\0',diff);
    str.write(buf, diff);
    delete [] buf;
  }
  cnt += head()->padbytes();

  return cnt;
}

int FitsFile::saveFitsIISHeader(OutFitsStream& str)
{
  int cnt =0;
  char buf[FTY_CARDLEN];

  char* ptr = head()->cards();
  char* end = head()->cards() + head()->headbytes();
  while (ptr<end) {
    if (!strncmp(ptr,"BITPIX",6)) {
      memset(buf,' ',FTY_CARDLEN);
      memcpy(buf,"BITPIX   = ",10);
      memcpy(buf+32-4,"-32 /",5);
      str.write(buf, FTY_CARDLEN);
    } 
    else
      str.write(ptr, FTY_CARDLEN);

    ptr+=FTY_CARDLEN;
    cnt += FTY_CARDLEN;
  }

  cnt += saveFitsPad(str,cnt,' ');

  return cnt;
}

int FitsFile::saveFitsIIS(OutFitsStream& str, Vector& iisz)
{
  FitsImageHDU* hdu = (FitsImageHDU*)(head()->hdu());

  unsigned char* src = (unsigned char*)data();
  int size = hdu->imgbytes();
  float* dest = new float[size];

  for (int ii=0; ii<size; ii++)
    if (src[ii] == 0)
      dest[ii] = NAN;
    else if (src[ii] == 1)
      dest[ii] = iisz[0];
    else if (src[ii] == 200)
      dest[ii] = iisz[1];
    else if (src[ii] > 200)
      dest[ii] = NAN;
    else
      dest[ii] = ((src[ii]-1) * (iisz[1]-iisz[0]))/199 + iisz[0];

  if (!lsb())
    str.write((char*)dest, size*sizeof(float));
  else
    str.writeSwap((char*)dest, size*sizeof(float), -32);

  if (dest)
    delete [] dest;

  return size*sizeof(float);
}

int FitsFile::saveArray(OutFitsStream& str, ArchType which)
{
  // only save one slice
  size_t size = head_->naxis(0)*head_->naxis(1)*abs(head_->bitpix()/8);
  int bitpix = head_->bitpix();

  if (which == endian_)
    str.write((char*)data(), size);
  else
    str.writeSwap((char*)data(), size, bitpix);

  return size;
}

