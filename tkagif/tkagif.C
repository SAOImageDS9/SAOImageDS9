// Copyright (C) 1999-2015
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
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
    else if (!strncmp(argv[1], "color", 3))
      return tkagif->add(argc, argv);
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
    Tcl_AppendResult(interp, "usage: tkagif ?create?color?add?close?", NULL);
    return TCL_ERROR;
  }
}

TkAGIF::TkAGIF(Tcl_Interp* interp)
{
  interp_ = interp;

  width_ = 512;
  height_ = 512;

  color_ =NULL;
}

int TkAGIF::create(int argc, const char* argv[])
{
  if (argc == 5) {
    if (*argv[2] == '\0') {
	Tcl_AppendResult(interp_, "bad filename", NULL);
	return TCL_ERROR;
    }

    {
      string s(argv[3]);
      istringstream str(s);
      str >> width_;
    }
    {
      string s(argv[4]);
      istringstream str(s);
      str >> height_;
    }

  }
  else {
    Tcl_AppendResult(interp_,
		     "usage: tkagif create <filename> <width> <height>", NULL);
    return TCL_ERROR;
  }

  if (color_)
    Tcl_DeleteHashTable(color_);
  Tcl_InitHashTable(color_, TCL_ONE_WORD_KEYS);

  return TCL_OK;
}

int TkAGIF::color(int argc, const char* argv[])
{
  if (*argv[2] == '\0') {
    Tcl_AppendResult(interp_, "bad image name", NULL);
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

  int ww,hh;
  Tk_PhotoGetSize(photo,&ww,&hh);

  unsigned char* src = block.pixelPtr;
  for (int jj=0; jj<hh; jj++) {
    for (int ii=0; ii<ww; ii++) {
      union {
	unsigned char cc[8];
	unsigned long ss;
      } uu;

      uu.ss = 0;
      uu.cc[0] = src[(jj*ww+ii)*block.pixelSize+block.offset[0]];
      uu.cc[1] = src[(jj*ww+ii)*block.pixelSize+block.offset[1]];
      uu.cc[2] = src[(jj*ww+ii)*block.pixelSize+block.offset[2]];

      int newptr =0;
      Tcl_HashEntry* ptr =
	Tcl_CreateHashEntry(color_, (const void*)uu.ss, &newptr);
      if (ptr) {
	long vv = (long)Tcl_GetHashValue(ptr);
	Tcl_SetHashValue(ptr, vv+1);
      }
    }
  }
  char* str = Tcl_HashStats(color_);
  cerr << str << endl;
  ckfree(str);

  return TCL_OK;
}

int TkAGIF::add(int argc, const char* argv[])
{
  if (*argv[2] == '\0') {
    Tcl_AppendResult(interp_, "bad image name", NULL);
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

  /*
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
  */
  return TCL_OK;
}

int TkAGIF::close(int argc, const char* argv[])
{
  if (color_)
    Tcl_DeleteHashTable(color_);
  color_ =NULL;

  return TCL_OK;
}

