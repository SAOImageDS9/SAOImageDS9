// Copyright (C) 1999-2015
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __tkmpeg_h__
#define __tkmpeg_h__

extern "C" {
#include "ezmpeg.h"
}

class TkMPEG {
 private:
  Tcl_Interp* interp;
  ezMPEGStream ms;
  int width;
  int height;
  int fps;
  int gop;
  int quality;

 public:
  TkMPEG(Tcl_Interp*);
  ~TkMPEG();

  int create(int, const char*[]);
  int add(int, const char*[]);
  int close(int, const char*[]);
};

extern TkMPEG* tkmpeg;

#endif
