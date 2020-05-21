// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __tkmacosx_h__
#define __tkmacosx_h__

#include <tk.h>

class TkMacosx {
 private:
  Tcl_Interp* interp;

  int pmPrint(int, const char**);
  int pmPrintBegin(int, const char**);
  int pmPrintEnd();
  int pmPrintText(int, const char**);
  int pmPageSetup();

 public:
  TkMacosx(Tcl_Interp*);
  ~TkMacosx();

  int pm(int, const char**);
  int sc(int, const char**);
  int locale(int, const char**);
};

extern TkMacosx* tkmacosx;

#endif
