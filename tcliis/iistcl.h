// Copyright (C) 1999-2013
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __iistcl_h__
#define __iistcl_h__

extern "C" {
  #include "ximtool.h"
}

extern int IISDebug;

#ifdef __WIN32
#define MAXCHANNEL 255
#else
#define MAXCHANNEL 40
#endif

class IIS {
 private:
  Tcl_Interp* interp;

 public:
  XimData xim;
  IoChan* chan[MAXCHANNEL];
  void (*func[MAXCHANNEL])(IoChan*, int*, void*);

 public:
  IIS(Tcl_Interp*);
  ~IIS();

  void eval(char*);
  const char* evalstr(char*);
  const char* result();
  int open(int, const char*[]);
  int close();
  int retcur(int, const char*[]);
  int encodewcs(int, const char*[]);
  int debug(int, const char*[]);
};

extern IIS* iis;

#endif
