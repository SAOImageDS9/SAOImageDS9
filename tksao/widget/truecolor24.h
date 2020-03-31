// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __truecolor24_h__
#define __truecolor24_h__

#include <string.h>

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include <tk.h>

class TrueColor24 {
 protected:
  unsigned long rx_;
  unsigned long gx_;
  unsigned long bx_;
  unsigned long ax_;
  int rs_;
  int gs_;
  int bs_;
  int as_;

 private:
  int decodeMask(unsigned long);
  void decodeTrueColor24(char*, XColor*, XImage*);
  void decodeTrueColor32(char*, XColor*, XImage*);
  void encodeTrueColor24(XColor*, char*, XImage*);
  void encodeTrueColor24(unsigned char*, XImage*);
  void encodeTrueColor32(XColor*, char*, XImage*);
  void encodeTrueColor32(unsigned char*, XImage*);

 protected:
  void decodeTrueColor(char*, XColor*, XImage*);
  void encodeTrueColor(XColor*, char*, XImage*);
  void encodeTrueColor(unsigned char*, XImage*);

 public:
  TrueColor24(Visual*);
};

#endif

