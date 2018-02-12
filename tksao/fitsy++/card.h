// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitscard_h__
#define __fitscard_h__

#define	FTY_CARDLEN 80

#include <string.h>

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

class FitsCard {
private:
  char* card_;
  int managed;
  // only used to return pointer to internal string
  static char buf_[FTY_CARDLEN];

public:
  FitsCard();
  FitsCard(char*);
  FitsCard(const FitsCard&);
  ~FitsCard();
  FitsCard& operator=(const FitsCard&);

  char* card() {return card_;}

  FitsCard& clear();

  FitsCard& setKey(const char *name);

  FitsCard& setLogical(const char* name, int value, const char* comment);
  FitsCard& setLogical(int value, const char *comment)
    {return setLogical(NULL, value, comment);}

  FitsCard& setInteger(const char* name, int value, const char *comment);
  FitsCard& setInteger(int value, const char *comment)
    {return setInteger(NULL, value, comment);}

  FitsCard& setReal(const char* name, double value, int prec, const char *comment);
  FitsCard& setReal(double value, int prec, const char *comment) 
    {return setReal(NULL, value, prec, comment);}

  FitsCard& setComplex(const char* name, double real, double img,
		int prec, const char *comment);
  FitsCard& setComplex(double real, double img, int prec, const char *comment) 
    {return setComplex(NULL, real, img, prec, comment);}

  FitsCard& setString(const char* name, const char *value, const char *comm);
  FitsCard& setString(const char *value, const char *comment)
    {return setString(NULL, value, comment);}

  FitsCard& setComment(const char* name, const char* value);
  FitsCard& setComment(const char *value)
    {return setComment(NULL, value);}

  int getLogical();
  int getInteger();
  double getReal();
  void getComplex(double*, double*);
  char* getString();
  char* getComment();
  char* getKeyword();
};

#endif
