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

  int table(int, const char*[]);
  int dir(int, const char*[]);
};

extern TclFITSY* tclfitsy;

#endif
