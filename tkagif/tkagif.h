// Copyright (C) 1999-2015
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __tkagif_h__
#define __tkagif_h__

class TkAGIF {
 private:
  Tcl_Interp* interp_;
  ofstream* outstr;

 public:
  TkAGIF(Tcl_Interp*);

  int create(int, const char*[]);
  int colortable(int, const char*[]);
  int add(int, const char*[]);
  int close(int, const char*[]);
};

extern TkAGIF* tkagif;

#endif
