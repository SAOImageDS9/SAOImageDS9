// Copyright (C) 2020
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __tclfitsy_h__
#define __tclfitsy_h__

class TclFITSY {
 private:
  Tcl_Interp* interp_;
  
 public:
  TclFITSY(Tcl_Interp*);
  ~TclFITSY();

  int dir(int, const char*[]);
  int header(int, const char*[]);
  int isimage(int, const char*[]);
  int istable(int, const char*[]);
  int table(int, const char*[]);
};

extern TclFITSY* tclfitsy;

#endif
