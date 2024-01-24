// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __tclxmlrpc_h__
#define __tclxmlrpc_h__

#include <string.h>
#include <stdlib.h>

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include <tcl.h>

class TclXMLRPC {
public:
  Tcl_Interp* interp_;         // Tcl interp

protected:
  int result;                 // result of TCL command

public:
  TclXMLRPC(Tcl_Interp*);
  ~TclXMLRPC();

  int parseCmd(int argc, const char* argv[]);
  int parse(istringstream&);            // parse subcommands
  void error(const char* m);
};

#endif
