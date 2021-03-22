// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
using namespace std;

#include <string.h>

//#include <tkMacOSXPrivate.h>
#include "tkmacosx.h"

extern "C" {
  int Tkmacosx_Init(Tcl_Interp* interp);
  int TkmacosxCmd(ClientData data, Tcl_Interp *interp, int argc, 
		  const char* argv[]);
}

TkMacosx* tkmacosx=NULL;

int Tkmacosx_Init(Tcl_Interp* interp) {

  if (Tcl_InitStubs(interp, TCL_PATCH_LEVEL, 0) == NULL)
    return TCL_ERROR;

  if (Tk_InitStubs(interp, TK_PATCH_LEVEL, 0) == NULL)
    return TCL_ERROR;

  Tcl_CreateCommand(interp, "macos", TkmacosxCmd,
		    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  if (Tcl_PkgProvide(interp, PACKAGE_NAME, PACKAGE_VERSION))
    return TCL_ERROR;

  tkmacosx = new TkMacosx(interp);

  return tkmacosx ? TCL_OK : TCL_ERROR;
}

int TkmacosxCmd(ClientData data,Tcl_Interp *interp,int argc,const char* argv[])
{
  if (argc>=2) {
    if (!strncmp(argv[1], "sc", 2))
      return tkmacosx->sc(argc, argv);
    else {
      Tcl_AppendResult(interp, "macos: unknown command: ", argv[1], NULL);
      return TCL_ERROR;
    }
  }
  else {
    Tcl_AppendResult(interp, "usage: macos ?sc?", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

TkMacosx::TkMacosx(Tcl_Interp* intp)
{
  interp = intp;
}

TkMacosx::~TkMacosx()
{
}

// major kludge, located in hacked tk8.6/macosx/tkMacOSXImage.c
extern int enableScreenCapture;
int TkMacosx::sc(int argc, const char* argv[])
{
  if (argc >= 1) {
    if (!strncmp(argv[2], "yes", 3)) {
      enableScreenCapture =1;
      return TCL_OK;
    }
    else if (!strncmp(argv[2], "no", 2)) {
      enableScreenCapture =0;
      return TCL_OK;
    }
    else {
      Tcl_AppendResult(interp, "macos sc: unknown command: ", argv[2], NULL);
      return TCL_ERROR;
    }
  }
  Tcl_AppendResult(interp, "usage: macos sc yes|no", NULL);
  return TCL_ERROR;
}

