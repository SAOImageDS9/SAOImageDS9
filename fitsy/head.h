// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitshead_h__
#define __fitshead_h__

#define FTY_BLOCK 2880
#define FTY_CARDS (FTY_BLOCK/FTY_CARDLEN)

#include "card.h"
#include "hdu.h"

class FitsHead {
 public:
  enum Memory {ALLOC, EXTERNAL, MMAP, SHARE};

 private:
  char* cards_; // pointer to start of cards
  char* mapdata_; // pointer to start of memory segment
  size_t mapsize_; // size of memory segment
  Memory memory_; // type memory mangement

  int ncard_; // actual number of cards
  int acard_; // number of cards block filled
  int ccard_; // number of current card in seq

  char** index_;

  int valid_;
  int inherit_;

  FitsHDU* hdu_;

public:
  FitsHead(char*, size_t, Memory);
  FitsHead(char*, size_t, char*, size_t, Memory);
  FitsHead(int width, int height, int depth, int bitpix, char* =NULL);
  FitsHead(int width, int height, int depth, int bitpix, char*, size_t, Memory);
  FitsHead(const FitsHead&);
  ~FitsHead();
   
  char* cards() {return cards_;}
  int ncard() {return ncard_;}
  int acard() {return acard_;}
  FitsHDU* hdu() {return hdu_;}

  int inherit() {return inherit_;}
  int isValid() {return valid_;}
  int isImage();
  int isTable();
  int isAsciiTable();
  int isBinTable();
  int isHeap();
  int cardblocks() {return ncard_/FTY_CARDS;}
  int cardbytes() {return ncard_*FTY_CARDLEN;}
  int headblocks() {return acard_/FTY_CARDS;}
  int headbytes() {return acard_*FTY_CARDLEN;}

  const char* extname() {return hdu_ ? hdu_->extname() : NULL;}
  int extver() {return hdu_ ? hdu_->extver() : 1;}
  int extlevel() {return hdu_ ? hdu_->extlevel() : 1;}
  int bitpix() {return hdu_ ? hdu_->bitpix() : 0;}
  int naxes() {return hdu_ ? hdu_->naxes() : 0;}
  int naxis(int ii) {return hdu_ ? hdu_->naxis(ii) : 0;}

  size_t realbytes() {return hdu_ ? hdu_->realbytes() : 0;}
  size_t heapbytes() {return hdu_ ? hdu_->heapbytes() : 0;}
  size_t allbytes() {return hdu_ ? hdu_->allbytes() : 0;}
  size_t padbytes() {return hdu_ ? hdu_->padbytes() : 0;}
  size_t databytes() {return hdu_ ? hdu_->databytes() : 0;}
  size_t datablocks() {return hdu_ ? hdu_->datablocks() : 0;}

  void buildIndex();
  void updateHDU();
  void updateCards() {if (hdu_) hdu_->updateCards(this);}

  char* find(const char* name);
  char* findSeq(const char* name);
  char* findIndex(const char* name);

  char* cardins(char* card, char* here);
  char* carddel(const char* card);
  char* cardclear(const char* card);

  char* setKey(const char* name, const char* value);
  char* setLogical(const char* name, int value, const char* comm);
  char* setInteger(const char* name, int value, const char* comm);
  char* setReal(const char* name, double value, int prec, const char* comm);
  char* setComplex(const char* name, double real, double img, int prec,
		   const char* comm);
  char* setString(const char* name, const char* value, const char* comm);
  char* setComment(const char* name, const char* value);

  char* insertLogical(const char* name, int value, const char* comm, 
		      const char* here);
  char* insertInteger(const char* name, int value, const char* comm, 
		      const char* here);
  char* insertReal(const char* name, double value,
		   int prec, const char* comm, const char* here);
  char* insertComplex(const char* name, double real, double img,
		      int prec, const char* comm, const char* here);
  char* insertString(const char* name, const char* value, const char* comm,
		     const char* here);
  char* insertComment(const char* name, const char* value, const char* here);

  char* appendLogical(const char* name, int value, const char* comm)
    {return insertLogical(name, value, comm, NULL);}
  char* appendInteger(const char* name, int value, const char* comm)
    {return insertInteger(name, value, comm, NULL);}
  char* appendReal(const char* name, double value, int prec, const char* comm)
    {return insertReal(name, value, prec, comm, NULL);}
  char* appendComplex(const char* name, double real, double img,
		      int prec, const char* comm)
    {return insertComplex(name, real, img, prec, comm, NULL);}
  char* appendString(const char* name, const char* value, const char* comm)
    {return insertString(name, value, comm, NULL);}

  int getLogical(const char* name, int def);
  int getInteger(const char* name, int def);
  double getReal(const char* name, double def);
  void getComplex(const char* name, double* real, double* img, 
		  double rdef, double idef);
  char* getString(const char* name);
  char* getComment(const char* name);

  char* getKeyword(const char* name);

  char* first();
  char* next();
};

#endif
