// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include "hdu.h"
#include "head.h"
#include "util.h"
#include "file.h"

FitsHDU::FitsHDU(FitsHead* head)
{
  extname_ = dupstr(head->getString("EXTNAME"));
  // trim any spaces at end
  if (extname_) {
    for (int ii=strlen(extname_)-1; ii>=0; ii--) {
      if (extname_[ii] == ' ')
	extname_[ii] = '\0';
      else
	break;
    }
  }

  extver_ = head->getInteger("EXTVER", 1);
  extlevel_ = head->getInteger("EXTLEVEL", 1);

  bitpix_ = head->getInteger("BITPIX", 0);
  naxes_ = head->getInteger("NAXIS", 0);
  if (naxes_>FTY_MAXAXES)
    naxes_ = FTY_MAXAXES;

  // init naxis_
  for(int i=0; i<FTY_MAXAXES; i++)
    naxis_[i] = 0;

  for(int i=0; i<naxes_; i++)
    naxis_[i] = head->getInteger(keycat("NAXIS",(i+1)), 0);

  // NOTE: naxis_[1]=0 is legal
  // special case: 1D image
  //  if (naxis_[0]>0 && naxis_[1]==0)
  //    naxis_[1] = 1;

  realbytes_ = 0;
  heapbytes_ = head->getInteger("PCOUNT",0);
  allbytes_ = 0;
  padbytes_ = 0;
  databytes_ = 0;
  datablocks_ = 0;
}

FitsHDU::~FitsHDU()
{
  if (extname_)
    delete [] extname_;
}

char* FitsHDU::keycat(const char* name, int i)
{
  ostringstream str;
  str << name << i << ends;
  memcpy(keybuf,str.str().c_str(),str.str().length());
  return keybuf;
}

void FitsHDU::updateCards(FitsHead* head)
{
  head->setInteger("BITPIX", bitpix_, NULL);
  head->setInteger("NAXIS", naxes_, NULL);

  for (int i=1; i<=naxes_; i++)
      head->setInteger(keycat("NAXIS", i), naxis_[i-1], NULL);
}

// FitsImageHDU

FitsImageHDU::FitsImageHDU(FitsHead* head) : FitsHDU(head)
{
  size_t imgpixels = (size_t)naxis_[0]*naxis_[1];
  imgbytes_ = imgpixels * (abs(bitpix_)/8);

  size_t realpixels;
  if (naxes_>0) {
    realpixels = 1;
    for (int i=0; i<naxes_; i++ )
      realpixels *= naxis_[i];
  }
  else
    realpixels = 0;

  realbytes_ = realpixels * (abs(bitpix_)/8);
  allbytes_ = realbytes_ + heapbytes_;
  datablocks_ = (allbytes_ + (FTY_BLOCK-1))/FTY_BLOCK;
  databytes_ = datablocks_ * FTY_BLOCK;
  padbytes_ = databytes_ - allbytes_;

  bzero_ = head->getReal("BZERO", 0.0);
  bscale_ = head->getReal("BSCALE", 1.0);
  hasblank_ = head->find("BLANK") ? 1:0;
  blank_ = head->getInteger("BLANK", 0);
}

void FitsImageHDU::updateCards(FitsHead* head)
{
  FitsHDU::updateCards(head);
  if (blank_)
    if (bitpix_ > 0)
      head->setInteger("BLANK", blank_, NULL);

  if (bzero_)
    head->setReal("BZERO", bzero_ , 7, NULL);
  if (bscale_ != 1)
    head->setReal("BSCALE", bscale_, 7, NULL);
}

// FitsTableHDU

FitsTableHDU::FitsTableHDU(FitsHead* head) : FitsHDU(head)
{
  tfields_ = head->getInteger("TFIELDS", 0);
  cols_ = NULL;

  // number of rows * width of row in bytes
  realbytes_ = (size_t)naxis_[0]*naxis_[1]; 
  allbytes_ = realbytes_ + heapbytes_;
  datablocks_ = (allbytes_ + (FTY_BLOCK-1))/FTY_BLOCK;
  databytes_ = datablocks_ * FTY_BLOCK;
  padbytes_ = databytes_ - allbytes_;
}

FitsTableHDU::~FitsTableHDU()
{
  if (cols_) {
    for (int i=0; i<tfields_; i++)
      if (cols_[i])
	delete cols_[i];

    delete [] cols_;
  }
}

char* FitsTableHDU::list()
{
  ostringstream str;
  for (int i=0; i<tfields_; i++)
    if (cols_[i])
      str << cols_[i]->ttype() << ' ';
  str << ends;
  return dupstr(str.str().c_str());
}

FitsColumn* FitsTableHDU::find(const char* name)
{
  char* n = toUpper(name);
  // trim any spaces
  char* nn = n;
  while (*nn)
    nn++;
  nn--;
  while (*nn == ' ')
    *nn-- = '\0';

  for (int i=0; i<tfields_; i++) {
    if (cols_[i]) {

      char* t = toUpper(cols_[i]->ttype());
      // trim any spaces
      char* tt=t;
      while (*tt)
	tt++;
      tt--;
      while (*tt == ' ')
	*tt-- = '\0';

      if (!strncmp(n,t,strlen(n)) && strlen(n)==strlen(t)) {
	delete [] n;
	delete [] t;
	return cols_[i];
      }

      delete [] t;
    }
  }

  delete [] n;
  return NULL;
}

FitsColumn* FitsTableHDU::find(int i)
{
  if (i>=0 && i<tfields_)
    return cols_[i];

  return NULL;
}

FitsAsciiTableHDU::FitsAsciiTableHDU(FitsHead* head) : FitsTableHDU(head)
{
  cols_ = new FitsColumn*[tfields_];

  size_t offset = 0;
  for (int i=0; i<tfields_; i++) {
    char* tform = head->getString(keycat("TFORM",i+1));
    char type = 'F';
    if (tform) {
      string x(tform);
      istringstream str(x);
      str >> type;
    }

    switch (type) {
    case 'A':
      cols_[i] = new FitsAsciiColumnStr(head, i+1, offset);
      break;
    case 'I':
      cols_[i] = new FitsAsciiColumnT<int>(head, i+1, offset);
      break;
    case 'F':
      cols_[i] = new FitsAsciiColumnT<float>(head, i+1, offset);
      break;
    case 'E':
      cols_[i] = new FitsAsciiColumnT<float>(head, i+1, offset);
      break;
    case 'D':
      cols_[i] = new FitsAsciiColumnT<double>(head, i+1, offset);
      break;
    }

    if (cols_[i])
      offset += cols_[i]->width();
  }
}

FitsBinTableHDU::FitsBinTableHDU(FitsHead* head) : FitsTableHDU(head)
{
  cols_ = new FitsColumn*[tfields_];

  int offset =0;
  for (int i=0; i<tfields_; i++) {
    char* tform = head->getString(keycat("TFORM",i+1));
    int repeat;
    char type = 'J';
    if (tform) {
      string x(tform);
      istringstream str(x);
      if (isalpha(tform[0]))
	str >> type;
      else
	str >> repeat >> type;
    }

    switch (type) {
    case 'A':
      cols_[i] = new FitsBinColumnStr(head, i+1, offset);
      break;
    case 'L':
      cols_[i] = new FitsBinColumnLogical(head, i+1, offset);
      break;
    case 'X':
      cols_[i] = new FitsBinColumnBit(head, i+1, offset);
      break;
    case 'B':
      cols_[i] = new FitsBinColumnT<unsigned char>(head, i+1, offset);
      break;
    case 'I':
      cols_[i] = new FitsBinColumnT<short>(head, i+1, offset);
      break;
    case 'U':
      cols_[i] = new FitsBinColumnT<unsigned short>(head, i+1, offset);
      break;
    case 'J':
      cols_[i] = new FitsBinColumnT<int>(head, i+1, offset);
      break;
    case 'V':
      cols_[i] = new FitsBinColumnT<unsigned int>(head, i+1, offset);
      break;
    case 'K':
      cols_[i] = new FitsBinColumnT<long long>(head, i+1, offset);
      break;
    case 'E':
      cols_[i] = new FitsBinColumnT<float>(head, i+1, offset);
      break;
    case 'D':
      cols_[i] = new FitsBinColumnT<double>(head, i+1, offset);
      break;
    case 'C':
      cols_[i] = NULL;
      internalError("Fitsy++ hdu single precision complex column type not supported");
      break;
    case 'M':
      cols_[i] = NULL;
      internalError("Fitsy++ hdu double precision complex column type not supported");
      break;
    case 'P':
      cols_[i] = new FitsBinColumnArrayP(head, i+1, offset);
      break;
    case 'Q':
      cols_[i] = new FitsBinColumnArrayQ(head, i+1, offset);
      break;

    default:
      cols_[i] = NULL;
      internalError("Fitsy++ hdu unknown table column type");
      break;
    }

    if (cols_[i])
      offset += cols_[i]->width();
  }
}

