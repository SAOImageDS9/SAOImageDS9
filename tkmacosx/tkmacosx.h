// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __tkmacosx_h__
#define __tkmacosx_h__

#include <tk.h>

class TkMacosx {
 private:
  Tcl_Interp* interp;
 public:
  TkMacosx(Tcl_Interp*);
  ~TkMacosx();

  int sc(int, const char**);
};

extern TkMacosx* tkmacosx;

#endif
