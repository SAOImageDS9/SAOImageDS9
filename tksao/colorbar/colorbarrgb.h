// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarrgb_h__
#define __colorbarrgb_h__

#include "colorbart.h"

class Filter;

class ColorbarRGB : public ColorbarT {
protected:
  int multiColorMode;
  int multiColorCount;
  int multiColorCurrent;
  char** multiColorName;
  float* multiColorBias;
  float* multiColorContrast;
  unsigned char colorCellBuffer[3];

  void psHorz(ostream&, Filter&, int, int);
  void psVert(ostream&, Filter&, int, int);
  void pdfHorz(unsigned char*, int, int);
  void pdfVert(unsigned char*, int, int);
  void updateColorCells();
  int initColormap();
  void clearMultiColorNames();
  const unsigned char* colorCell(int, int);
  int lineCount();
  int lineFromHorz(int, int);
  int lineFromVert(int, int);
  int sampleFromHorz(int, int);
  int sampleFromVert(int, int);

#ifdef MAC_OSX_TK
  void macosx(float, int, int, const Vector&, const Vector&);
#endif

#ifdef __WIN32
  void win32(float, int, int, const Vector&, const Vector&);
#endif

public:
  ColorbarRGB(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~ColorbarRGB();

  // SubCommandFunctions

  void getColorbarCmd();
  void getColormapCmd();
  void getColormapNameCmd(int);
  void getColormapFileNameCmd(int);
  void getColormapFileNameCmd(const char*);
  void getCurrentFileNameCmd();
  void getCurrentIDCmd();
  void getCurrentNameCmd();
  void getTypeCmd();
  void getRGBChannelCmd();
  void adjustCmd(float, float);
  void setRGBChannelCmd(const char*);
  void setColorbarCmd(float, float, float, float, float, float, int);
  void setMultiColorCmd(int, const char*);
  void setMultiColorCmd(float, float, int, const char*);
  void setMultiColorCmd(int, int, const char*, const char*, const char*);
};

#endif
