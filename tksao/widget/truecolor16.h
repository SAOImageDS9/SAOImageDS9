// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __truecolor16_h__
#define __truecolor16_h__

#include <string.h>

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include <tk.h>

class TrueColor16 {
 protected:
  unsigned long rx_;
  unsigned long gx_;
  unsigned long bx_;
  unsigned short rm_;
  unsigned short gm_;
  unsigned short bm_;
  int rs_;
  int gs_;
  int bs_;

 private:
  unsigned short decodeMask(unsigned short, int*);

 protected:
  void decodeTrueColor(char*, XColor*, XImage*);
  void encodeTrueColor(XColor*, char*, XImage*);
  void encodeTrueColor(unsigned char*, XImage*);

 public:
  TrueColor16(Visual*);
};

#endif

