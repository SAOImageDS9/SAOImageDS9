// Copyright (C) 1999-2015
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
using namespace std;

#include <string.h>
#include <tk.h>

#include "tkmpeg.h"

extern "C" {
  int Tkmpeg_Init(Tcl_Interp* interp);
  int TkmpegCmd(ClientData data, Tcl_Interp *interp, int argc, 
	       const char* argv[]);
}

TkMPEG* tkmpeg=NULL;

int Tkmpeg_Init(Tcl_Interp* interp) {

  if (Tcl_InitStubs(interp, TCL_PATCH_LEVEL, 0) == NULL)
    return TCL_ERROR;

  if (Tk_InitStubs(interp, TK_PATCH_LEVEL, 0) == NULL)
    return TCL_ERROR;

  Tcl_CreateCommand(interp, "mpeg", TkmpegCmd,
		    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  if (Tcl_PkgProvide(interp, PACKAGE_NAME, PACKAGE_VERSION) != TCL_OK)
    return TCL_ERROR;

  tkmpeg = new TkMPEG(interp);

  if (tkmpeg)
    return TCL_OK;
  else
    return TCL_ERROR;
}

int TkmpegCmd(ClientData data,Tcl_Interp *interp,int argc,const char* argv[])
{
  if (argc>=2) {
    if (!strncmp(argv[1], "create", 3))
      return tkmpeg->create(argc, argv);
    else if (!strncmp(argv[1], "add", 3))
      return tkmpeg->add(argc, argv);
    else if (!strncmp(argv[1], "close", 3))
      return tkmpeg->close(argc, argv);
    else {
      Tcl_AppendResult(interp, "tkmpeg: unknown command: ", argv[1], NULL);
      return TCL_ERROR;
    }
  }
  else {
    Tcl_AppendResult(interp, "usage: tkmpeg ?create?close?add?", NULL);
    return TCL_ERROR;
  }
}

TkMPEG::TkMPEG(Tcl_Interp* intp)
{
  interp = intp;

  width = 512;
  height = 512;
  quality = 2;
}

 int TkMPEG::create(int argc, const char* argv[])
{
  if (argc == 8) {
    if (*argv[2] == '\0') {
	Tcl_AppendResult(interp, "bad filename", NULL);
	return TCL_ERROR;
    }

    {
      string s(argv[3]);
      istringstream str(s);
      str >> width;
    }
    {
      string s(argv[4]);
      istringstream str(s);
      str >> height;
    }
    {
      string s(argv[5]);
      istringstream str(s);
      str >> fps;
    }
    {
      string s(argv[6]);
      istringstream str(s);
      str >> gop;
    }
    {
      string s(argv[7]);
      istringstream str(s);
      str >> quality;
    }

    // width and height must be a multiple of 16
    int ww = int(width/16.+1)*16;
    int hh = int(height/16.+1)*16;

    if(!ezMPEG_Init(&ms, argv[2], ww, hh, fps, gop, quality)) {
      Tcl_AppendResult(interp, "ezMPEG_Init ", ezMPEG_GetLastError(&ms), NULL);
      return TCL_ERROR;
    }
    if(!ezMPEG_Start(&ms)) {
      Tcl_AppendResult(interp, "ezMPEG_Start ", ezMPEG_GetLastError(&ms),NULL);
      return TCL_ERROR;
    }
  }
  else {
    Tcl_AppendResult(interp, "usage: tkmpeg create <filename> <width> <height> <fps> <gop> <quality>", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

int TkMPEG::add(int argc, const char* argv[])
{
  if (*argv[2] == '\0') {
    Tcl_AppendResult(interp, "bad image name", NULL);
    return TCL_ERROR;
  }
  Tk_PhotoHandle photo = Tk_FindPhoto(interp, argv[2]);
  if (!photo) {
    Tcl_AppendResult(interp, "bad image handle", NULL);
    return TCL_ERROR;
  }
  Tk_PhotoImageBlock block;
  if (!Tk_PhotoGetImage(photo,&block)) {
    Tcl_AppendResult(interp, "bad image block", NULL);
    return TCL_ERROR;
  }

  int ww = ms.hsize*16;
  int hh = ms.vsize*16;

  unsigned char* pict = new unsigned char[ww*hh*3];
  if (!pict) {
    Tcl_AppendResult(interp, "unable to alloc memory", NULL);
    return TCL_ERROR;
  }
  memset(pict,0,ww*hh*3);
  
  unsigned char* src = block.pixelPtr;
  unsigned char* dst = pict;

  for (int jj=0; jj<hh; jj++)
    for (int ii=0; ii<ww; ii++) {
      if (jj<height && ii<width) {
	*dst++ = src[(jj*width+ii)*block.pixelSize+block.offset[0]];
	*dst++ = src[(jj*width+ii)*block.pixelSize+block.offset[1]];
	*dst++ = src[(jj*width+ii)*block.pixelSize+block.offset[2]];
      }
      else {
	*dst++ = 255;
	*dst++ = 255;
	*dst++ = 255;
      }
    }

  if(!ezMPEG_Add(&ms, pict)) {
    Tcl_AppendResult(interp, "ezMPEG_Add ", ezMPEG_GetLastError(&ms), NULL);
    if (pict)
      delete [] pict;

    return TCL_ERROR;
  }

  if (pict)
    delete [] pict;
  return TCL_OK;
}

int TkMPEG::close(int argc, const char* argv[])
{
  if(!ezMPEG_Finalize(&ms)) {
    Tcl_AppendResult(interp, "ezMPEG_Finalize", ezMPEG_GetLastError(&ms),NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

