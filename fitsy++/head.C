// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>

#ifndef __WIN32
#include <sys/mman.h>
#include <sys/shm.h>
#endif

#include "file.h"
#include "head.h"
#include "util.h"

FitsHead::FitsHead(char* raw, size_t bytes, Memory mem)
{
  cards_ = raw;
  mapdata_ = raw;
  mapsize_ = bytes;
  memory_ = mem;
  ncard_ = 0;
  acard_ = 0;
  ccard_ = 0;

  index_ = NULL;

  valid_ = 0;
  inherit_ = 0;

  hdu_ = NULL;

  char* c;
  int i;
  for (c = cards_, i=0; c < cards_+bytes; c+=FTY_CARDLEN, i++) {
    // only compare 4 chars
    if (!strncmp(c, "END ", 4)) {
      ncard_ = i + 1;
      acard_ = ((ncard_+FTY_CARDS-1)/FTY_CARDS) * FTY_CARDS;
      valid_ = 1;

      buildIndex();
      updateHDU();
      return;
    }
  }
}

FitsHead::FitsHead(char* raw, size_t bytes, char* mm, 
		   size_t sz, Memory mem)
{
  cards_ = raw;
  mapdata_ = mm;
  mapsize_ = sz;
  memory_ = mem;
  ncard_ = 0;
  acard_ = 0;
  ccard_ = 0;

  index_ = NULL;

  valid_ = 0;
  inherit_ = 0;

  hdu_ = NULL;

  char* c;
  int i;
  for (c = cards_, i=0; c < cards_+bytes; c+=FTY_CARDLEN, i++) {
    // only compare 4 chars
    if (!strncmp(c, "END ", 4)) {
      ncard_ = i + 1;
      acard_ = ((ncard_+FTY_CARDS-1)/FTY_CARDS) * FTY_CARDS;
      valid_ = 1;

      buildIndex();
      updateHDU();
      return;
    }
  }
}

// Create Image FitsHead

FitsHead::FitsHead(int width, int height, int depth, int bitpix, char* xtension)
{
  cards_ = new char[FTY_BLOCK];
  memset(cards_, ' ', FTY_BLOCK);
  memcpy(cards_, "END", 3);

  mapdata_ = NULL;
  mapsize_ = 0;
  memory_ = ALLOC;

  ncard_ = 1;
  acard_ = FTY_CARDS;
  ccard_ = 0;

  index_ = NULL;

  if (!xtension)
    appendLogical("SIMPLE", 1, "Fits Standard");
  else
    appendString("XTENSION", xtension, "Fits Standard");

  appendInteger("BITPIX", bitpix, "Bits per pixel");
  appendInteger("NAXIS", depth>1 ? 3 : 2, "Number of axes");
  appendInteger("NAXIS1", width, "Axis Length");
  appendInteger("NAXIS2", height, "Axis Length");
  if (depth>1)
    appendInteger("NAXIS3", depth, "Axis Length");

  valid_ = 1;
  inherit_ = 0;

  hdu_ = NULL;

  buildIndex();
  updateHDU();
}

FitsHead::FitsHead(int width, int height, int depth, int bitpix,
		   char* mm, size_t sz, Memory mem)
{
  cards_ = new char[FTY_BLOCK];
  memset(cards_, ' ', FTY_BLOCK);
  memcpy(cards_, "END", 3);

  mapdata_ = mm;
  mapsize_ = sz;
  memory_ = mem;

  ncard_ = 1;
  acard_ = FTY_CARDS;
  ccard_ = 0;

  index_ = NULL;

  appendLogical("SIMPLE", 1, "Fits Standard");
  appendInteger("BITPIX", bitpix, "Bits per pixel");
  appendInteger("NAXIS", depth==1 ? 2 : 3, "Number of axes");
  appendInteger("NAXIS1", width, "Axis Length");
  appendInteger("NAXIS2", height, "Axis Length");
  if (depth>1)
    appendInteger("NAXIS3", depth, "Axis Length");

  valid_ = 1;
  inherit_ = 0;

  hdu_ = NULL;

  buildIndex();
  updateHDU();
}

FitsHead::FitsHead(const FitsHead& a)
{
  cards_ = new char[a.acard_*FTY_CARDLEN];
  memmove(cards_, a.cards_, a.acard_*FTY_CARDLEN);
  mapdata_ = NULL;
  mapsize_ = 0;
  memory_ = ALLOC;

  index_ = NULL;
  acard_ = a.acard_;
  ncard_ = a.ncard_;
  ccard_ = a.ccard_;

  valid_ = 1;
  inherit_ = 0;

  hdu_ = NULL;

  buildIndex();
  updateHDU();
}

FitsHead::~FitsHead()
{
  if (index_)
    delete [] index_;

  if (hdu_)
    delete hdu_;

  switch (memory_) {
  case ALLOC:
    if (cards_)
      delete [] cards_;
    break;
  case MMAP:
#ifndef __WIN32
    if (mapdata_)
      munmap((caddr_t)mapdata_, mapsize_);
#endif
    break;
  case SHARE:
#ifndef __WIN32
    if (mapdata_)
      shmdt(mapdata_);
#endif
  case EXTERNAL:
    break;
  }
}

int FitsHead::isImage()
{
  // just look for SIMPLE, if present it may be of value 'F'
  char* xtension = getString("XTENSION");
  char* simple = find("SIMPLE");
  int r = 
    (simple || (xtension && !strncmp(xtension, "IMAGE", 5))) &&
    naxes() > 0 && 
    naxis(0) > 0 && 
    naxis(1) > 0;
  return r;
}

int FitsHead::isTable()
{
  char* xtension = getString("XTENSION");
  int r = (xtension && (!strncmp(xtension, "TABLE", 5) ||
			!strncmp(xtension, "BINTABLE", 8)));
  return r;
}

int FitsHead::isAsciiTable()
{
  char* xtension = getString("XTENSION");
  int r = (xtension && (!strncmp(xtension, "TABLE", 5)));
  return r;
}

int FitsHead::isBinTable()
{
  char* xtension = getString("XTENSION");
  int r = (xtension && (!strncmp(xtension, "BINTABLE", 8)));
  return r;
}

int FitsHead::isHeap()
{
  return getInteger("PCOUNT",0) ? 1 : 0;
}

void FitsHead::updateHDU()
{
  if (hdu_)
    delete hdu_;
  hdu_ = NULL;

  // just find simple, it might be present but of value 'F'
  char* simple = find("SIMPLE");
  char* xtension = getString("XTENSION");

  if (xtension)
    inherit_ = getLogical("INHERIT",0);

  if (simple || (xtension && !strncmp(xtension, "IMAGE", 5)))
    hdu_ = new FitsImageHDU(this);

  if (xtension && !strncmp(xtension, "TABLE", 5))
    hdu_ = new FitsAsciiTableHDU(this);

  if (xtension && !strncmp(xtension, "BINTABLE", 8))
    hdu_ = new FitsBinTableHDU(this);
}

int FitsHead::getLogical(const char* name, int def)
{
  char* card = find(name);
  if (card) {
    FitsCard c(card);
    return c.getLogical();
  }
  else
    return def;
}

int FitsHead::getInteger(const char* name, int def)
{
  char* card = find(name);
  if (card) {
    FitsCard c(card);
    return c.getInteger();
  }
  else
    return def;
}

double FitsHead::getReal(const char* name, double def)
{
  char* card = find(name);
  if (card) {
    FitsCard c(card);
    return c.getReal();
  }
  else
    return def;
}

void FitsHead::getComplex(const char* name, double* real, double* img,
			  double rdef, double idef)
{
  char* card = find(name);
  if (card) {
    FitsCard c(card);
    c.getComplex(real, img);
  }
  else {
    *real = rdef;
    *img = idef;
  }
}

char* FitsHead::getString(const char* name)
{
  char* card = find(name);
  if (card) {
    FitsCard c(card);
    return c.getString();
  }
  else
    return NULL;
}

char* FitsHead::getComment(const char* name)
{
  char* card = find(name);
  if (card) {
    FitsCard c(card);
    return c.getComment();
  }
  else
    return NULL;
}

char* FitsHead::getKeyword(const char* name)
{
  char* card = find(name);
  if (card) {
    FitsCard c(card);
    return c.getKeyword();
  }
  else
    return NULL;
}

char* FitsHead::setKey(const char* name, const char* value)
{
  char* card = find(name);
  if (card)
    FitsCard(card).setKey(value);

  buildIndex();
  return card;
}

char* FitsHead::setLogical(const char* name, int value, const char* comm)
{
  char* card = find(name);
  if (card)
    FitsCard(card).setLogical(value, comm);

  return card;
}

char* FitsHead::setInteger(const char* name, int value, const char* comm)
{
  char* card = find(name);
  if (card)
    FitsCard(card).setInteger(value, comm);

  return card;
}

char* FitsHead::setReal(const char* name, double value, int prec, 
			const char* comm)
{
  char* card = find(name);
  if (card)
    FitsCard(card).setReal(value, prec, comm);

  return card;
}

char* FitsHead::setComplex(const char* name, double real, double img, int prec,
			   const char* comm)
{
  char* card = find(name);
  if (card)
    FitsCard(card).setComplex(real, img, prec, comm);

  return card;
}

char* FitsHead::setString(const char* name, const char* value, const char* comm)
{
  char* card = find(name);
  if (card)
    FitsCard(card).setString(value, comm);

  return card;
}

char* FitsHead::setComment(const char* name, const char* value)
{
  char* card = find(name);
  if (card)
    FitsCard(card).setComment(value);

  return card;
}

char* FitsHead::cardins(char* card, char* here)
{
  // do we need to allocate another block?
  if (ncard_+1 > acard_) {
    switch (memory_) {
    case ALLOC:
      {
	char* old = cards_;
	int oldsz = acard_*FTY_CARDLEN;
	int sz = oldsz+FTY_BLOCK;

	acard_ = sz/FTY_CARDLEN;
	cards_ = new char[sz];
	memset(cards_, ' ', sz);
	memcpy(cards_, old, oldsz);

	// don't forget to redirect here if needed
	if (here) {
	  size_t diff = here-old;
	  here = cards_+diff;
	}
	delete [] old;
      }
      break;
    case MMAP:
    case SHARE:
    case EXTERNAL:
      internalError("Fitsy++ head can't add card: readonly memory"); 
      return NULL;
    }
  }

  char* where = here ? here : cards_+((ncard_-1)*FTY_CARDLEN);
  memmove(where+FTY_CARDLEN, where, (cards_+(ncard_*FTY_CARDLEN))-where);
  memmove(where, card, FTY_CARDLEN);
  ncard_++;

  buildIndex();

  return where;
}

char* FitsHead::carddel(const char* name)
{
  char* card = find(name);
  if (card) {
    char* next = card+FTY_CARDLEN;
    char* last = cards_+((ncard_-1)*FTY_CARDLEN);
    memmove(card, next, last-card);
    memset(last,' ', FTY_CARDLEN);
  }

  buildIndex();
  return card;
}

char* FitsHead::cardclear(const char* name)
{
  char* card = find(name);
  if (card)
    FitsCard(card).clear();

  buildIndex();
  return card;
}

char* FitsHead::insertLogical(const char* name, int value, const char* comm, 
			      const char* here)
{
  FitsCard key;
  key.setLogical(name, value, comm);
  return cardins(key.card(), (char*)here);
}

char* FitsHead::insertInteger(const char* name, int value, const char* comm, 
			      const char* here)
{
  FitsCard key;
  key.setInteger(name, value, comm);
  return cardins(key.card(), (char*)here);
}

char* FitsHead::insertReal(const char* name, double value, int prec, 
			   const char* comm, const char* here)
{
  FitsCard key;
  key.setReal(name, value, prec, comm);
  return cardins(key.card(), (char*)here);
}

char* FitsHead::insertComplex(const char* name, double real, double img, 
			      int prec, const char* comm, const char* here)
{
  FitsCard key;
  key.setComplex(name, real, img, prec, comm);
  return cardins(key.card(), (char*)here);
}

char* FitsHead::insertString(const char* name, const char* value,
			     const char* comm, const char* here)
{
  FitsCard key;
  key.setString(name, value, comm);
  return cardins(key.card(), (char*)here);
}

char* FitsHead::insertComment(const char* name, const char* value,
			      const char* here)
{
  FitsCard key;
  key.setComment(name, value);
  return cardins(key.card(), (char*)here);
}

char* FitsHead::first()
{
  ccard_ = 0;
  return (ccard_<ncard_) ? &cards_[ccard_*FTY_CARDLEN] : NULL;
}

char* FitsHead::next()
{
  ccard_++;
  return (ccard_<ncard_) ? &cards_[ccard_*FTY_CARDLEN] : NULL;
}

char* FitsHead::find(const char* key)
{
  if (index_)
    return findIndex(key);
  else
    return findSeq(key);
}

char* FitsHead::findSeq(const char* key)
{
  if (key == NULL)
    return NULL;

  char k[8];
  memset(k,' ',8);
  int len = strlen(key);

  // convert to uppercase
  int l = (len>8 ? 8 : len);
  for (int i=0; i<l; i++)
    k[i] = toupper(key[i]);

  for (char* card=cards_; card!=&cards_[ncard_*FTY_CARDLEN]; card+=FTY_CARDLEN)
    if (!strncmp(k, card, 8))
      return card;

  return NULL;
}

char* FitsHead::findIndex(const char* key)
{
  if (key == NULL)
    return NULL;

  char k[8];
  memset(k,' ',8);
  int len = strlen(key);

  // convert to uppercase
  int l = (len>8 ? 8 : len);
  for (int i=0; i<l; i++)
    k[i] = toupper(key[i]);

  char** base = index_;
  int length = ncard_;

  int lo = -1;
  int hi = length;
  int cut = length/2;

  while (hi-lo > 1) {
    int i = strncmp(k, base[cut], 8);
    if (!i)
      return base[cut];
 
    if (i < 0) {
      hi = cut;
      cut = (lo+hi)/2;
    }
    else { 
      lo = cut;
      cut = (lo+hi)/2;
    } 
  }

  if (!strncmp(k, base[cut], 8))
    return base[cut];

  return NULL;
}
 
static int compare(const void* a, const void* b)
{
  char** aa = (char**)a;
  char** bb = (char**)b;
  return strncmp(*aa, *bb, 8);
}

void FitsHead::buildIndex()
{
  if (index_)
    delete [] index_;

  index_ = new char*[ncard_];
  for (int i=0; i<ncard_; i++)
    index_[i] = cards_ + (i*FTY_CARDLEN);

  qsort(index_, ncard_, sizeof(char**), compare);
}

