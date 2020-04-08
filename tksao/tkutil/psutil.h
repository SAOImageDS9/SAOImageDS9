// Copyright (C) 1999-2020
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __psutil_h__
#define __psutil_h__

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include <tk.h>

enum PSColorSpace {BW, GRAY, RGB, CMYK};

static const char psFonts[12][32] = {
  {"Helvetica"},
  {"Helvetica-Oblique"},
  {"Helvetica-Bold"},
  {"Helvetica-BoldOblique"},

  {"Times-Roman"},
  {"Times-Italic"},
  {"Times-Bold"},
  {"Times-BoldItalic"},

  {"Courier"},
  {"Courier-Oblique"},
  {"Courier-Bold"},
  {"Courier-BoldOblique"}
};

extern double RGB2Gray(double, double, double);
extern unsigned char RGB2Gray(unsigned char, unsigned char, unsigned char);
extern void RGB2CMYK(unsigned char, unsigned char, unsigned char,
		     unsigned char*, unsigned char*, unsigned char*, 
		     unsigned char*);
extern void RGB2CMYK(unsigned short, unsigned short, unsigned short,
		     unsigned short*, unsigned short*, unsigned short*, 
		     unsigned short*);
extern ostream& psColorGray(XColor*, ostream&);
extern ostream& psColorRGB(XColor*, ostream&);
extern ostream& psColorCMYK(XColor*, ostream&);

extern char* psQuote(const char*);

extern const char* psFontName(const char*);
extern int psFontSize(const char*);
extern const char* psFontName(const char*, const char*, const char*);

#endif
