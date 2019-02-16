// Copyright (C) 1999-2015
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

#include <string.h>
#include <tk.h>

#include "tkagif.h"

extern "C" {
  int Tkagif_Init(Tcl_Interp* interp);
  int TkagifCmd(ClientData data, Tcl_Interp *interp, int argc, 
	       const char* argv[]);
}

TkAGIF* tkagif=NULL;

int Tkagif_Init(Tcl_Interp* interp) {

  if (Tcl_InitStubs(interp, TCL_PATCH_LEVEL, 0) == NULL)
    return TCL_ERROR;

  if (Tk_InitStubs(interp, TK_PATCH_LEVEL, 0) == NULL)
    return TCL_ERROR;

  Tcl_CreateCommand(interp, "agif", TkagifCmd,
		    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  if (Tcl_PkgProvide(interp, PACKAGE_NAME, PACKAGE_VERSION) != TCL_OK)
    return TCL_ERROR;

  tkagif = new TkAGIF(interp);

  if (tkagif)
    return TCL_OK;
  else
    return TCL_ERROR;
}

int TkagifCmd(ClientData data,Tcl_Interp *interp,int argc,const char* argv[])
{
  if (argc>=2) {
    if (!strncmp(argv[1], "create", 3))
      return tkagif->create(argc, argv);
    else if (!strncmp(argv[1], "colortable", 3))
      return tkagif->colortable(argc, argv);
    else if (!strncmp(argv[1], "add", 3))
      return tkagif->add(argc, argv);
    else if (!strncmp(argv[1], "close", 3))
      return tkagif->close(argc, argv);
    else {
      Tcl_AppendResult(interp, "tkagif: unknown command: ", argv[1], NULL);
      return TCL_ERROR;
    }
  }
  else {
    Tcl_AppendResult(interp, "usage: tkagif ?create?colortable?add?close?",  NULL);
    return TCL_ERROR;
  }
}

TkAGIF::TkAGIF(Tcl_Interp* interp)
{
  interp_ = interp;
  outstr =NULL;
}

int TkAGIF::create(int argc, const char* argv[])
{
  if (argc == 3) {
    if (*argv[2] == '\0') {
	Tcl_AppendResult(interp_, "bad filename", NULL);
	return TCL_ERROR;
    }
  }
  else {
    Tcl_AppendResult(interp_, "usage: tkagif create <filename>", NULL);
    return TCL_ERROR;
  }

  // open fn
  outstr = new ofstream(argv[2]);
  if (!outstr) {
    Tcl_AppendResult(interp_, "Error: unable to open filename ", NULL);
    if (*argv[2])
      Tcl_AppendResult(interp_, argv[2], NULL);
    return TCL_ERROR;
  }

  // header

  // size

  return TCL_OK;
}

int TkAGIF::colortable(int argc, const char* argv[])
{
  if (argc == 3) {
    if (!strncmp(argv[2],"grey",3)) {
    }
    else if (!strncmp(argv[2],"red",3)) {
    }
    else if (!strncmp(argv[2],"green",3)) {
    }
    else if (!strncmp(argv[2],"blue",3)) {
    }
    else if (!strncmp(argv[2],"pseudo",3)) {
    }
    else if (!strncmp(argv[2],"rgb",3)) {
    }
    else {
	Tcl_AppendResult(interp_, "bad colortable option", NULL);
	return TCL_ERROR;
    }
  }
  else {
    Tcl_AppendResult(interp_, "usage: tkagif colortable grey|red|green|blue|pseudo}rgb", NULL);
    return TCL_ERROR;
  }

  // colortable

  return TCL_OK;
}

int TkAGIF::add(int argc, const char* argv[])
{
  if (argc == 3) {
    if (*argv[2] == '\0') {
	Tcl_AppendResult(interp_, "bad filename", NULL);
	return TCL_ERROR;
    }
  }
  else {
    Tcl_AppendResult(interp_, "usage: tkagif add <image>", NULL);
    return TCL_ERROR;
  }

  Tk_PhotoHandle photo = Tk_FindPhoto(interp_, argv[2]);
  if (!photo) {
    Tcl_AppendResult(interp_, "bad image handle", NULL);
    return TCL_ERROR;
  }
  Tk_PhotoImageBlock block;
  if (!Tk_PhotoGetImage(photo,&block)) {
    Tcl_AppendResult(interp_, "bad image block", NULL);
    return TCL_ERROR;
  }

  // Graphic Control Extension

  // Image Descriptor

  // Image
  
  return TCL_OK;
}

int TkAGIF::close(int argc, const char* argv[])
{
  // GIF file terminator
  if (outstr) {
    outstr->close();

    delete outstr;
  }
  
  return TCL_OK;
}

