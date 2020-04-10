// Copyright (C) 1999-2020
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <float.h>

#include "psutil.h"

double RGB2Gray(double red, double green, double blue)
{
  return 0.30*red + 0.59*green + 0.11*blue;
}

unsigned char RGB2Gray(unsigned char red, unsigned char green, 
		       unsigned char blue)
{
  // we have a round off problem here, add FLT_EPSILON to kick it over
  return (unsigned char)(0.30*red + 0.59*green + 0.11*blue + FLT_EPSILON);
}

void RGB2CMYK(unsigned char red, unsigned char green, unsigned char blue,
	      unsigned char* cyan, unsigned char* magenta, 
	      unsigned char* yellow, unsigned char* black)
{
  // convert To CMY

  *cyan = UCHAR_MAX-red;
  *magenta = UCHAR_MAX-green;
  *yellow = UCHAR_MAX-blue;
  *black =0;

  // determine black

  *black = UCHAR_MAX;
  if (*cyan < *black)
    *black = *cyan;
  if (*magenta < *black)
    *black = *magenta;
  if (*yellow < *black)
    *black = *yellow;

  // substract out black

  *cyan -= *black;
  *magenta -= *black;
  *yellow -= *black;
}

void RGB2CMYK(unsigned short red, unsigned short green, unsigned short blue,
	      unsigned short* cyan, unsigned short* magenta, 
	      unsigned short* yellow, unsigned short* black)
{
  // convert To CMY

  *cyan = USHRT_MAX-red;
  *magenta = USHRT_MAX-green;
  *yellow = USHRT_MAX-blue;
  *black =0;

  // determine black

  *black = USHRT_MAX;
  if (*cyan < *black)
    *black = *cyan;
  if (*magenta < *black)
    *black = *magenta;
  if (*yellow < *black)
    *black = *yellow;

  // substract out black

  *cyan -= *black;
  *magenta -= *black;
  *yellow -= *black;
}

ostream& psColorGray(XColor* clr, ostream& str)
{
  if (clr) {
    float red = clr->red/float(USHRT_MAX);
    float green = clr->green/float(USHRT_MAX);
    float blue = clr->blue/float(USHRT_MAX);
    str << dec << RGB2Gray(red,green,blue);
  }

  return str;
}

ostream& psColorRGB(XColor* clr, ostream& str)
{
  if (clr) {
    float red = clr->red/float(USHRT_MAX);
    float green = clr->green/float(USHRT_MAX);
    float blue = clr->blue/float(USHRT_MAX);
    str << dec << red << ' ' << green << ' ' << blue;
  }

  return str;
}

ostream& psColorCMYK(XColor* clr, ostream& str)
{
  if (clr) {
    unsigned short cyan;
    unsigned short magenta;
    unsigned short yellow;
    unsigned short black;
    
    RGB2CMYK(clr->red, clr->green, clr->blue, &cyan, &magenta, &yellow, &black);

    str << dec 
	<< cyan/float(USHRT_MAX) << ' ' 
	<< magenta/float(USHRT_MAX) << ' ' 
	<< yellow/float(USHRT_MAX) << ' ' 
	<< black/float(USHRT_MAX);
  }
  return str;
}

char* psStr = NULL; // psQuote returned string
char* psQuote(const char* str)
{
  // we must must quote '(', ')', and '\'
  if (psStr)
    delete [] psStr;

  psStr = new char[strlen(str)*2+1]; // worst case size
  
  char* out = psStr;
  const char* in = str;
  while (in && *in) {
    if (*in == '(' || *in == ')' || *in == '\\')
      *out++ = '\\';
    *out++ = *in++;
  }

  *out++ = '\0'; // terminating char
  return psStr;
}

const char* psFontName(const char* font)
{
  char* str = (char*)font;
  char* ff = str;
  while (*str && *str++ != ' ');
  //  char* zz = str;
  while (*str && *str++ != ' ');
  char* ww = str;
  while (*str && *str++ != ' ');
  char* ss = str;

  if (ff && ww && ss)
    return psFontName(ff,ww,ss);
  else
    return psFonts[0];
}

int psFontSize(const char* font)
{
  char* str = (char*)font;
  while (*str && *str++ != ' ');
  return atoi(str);
}

const char* psFontName(const char* font, const char* weight, const char* slant)
{
  int ptr = 0;
  if (!strncmp(font,"helvetica",4))
    ptr = 0;
  else if (!strncmp(font,"times",4))
    ptr = 4;
  else if (!strncmp(font,"courier",4))
    ptr = 8;

  if (!strncmp(weight,"normal",4))
    ;
  else if (!strncmp(weight,"bold",4))
    ptr +=2;

  if (!strncmp(slant,"roman",4))
    ;
  else if (!strncmp(slant,"italic",4))
    ptr++;

  return psFonts[ptr];
}


