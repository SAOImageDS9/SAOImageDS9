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
  out_ =NULL;
  width_ = height_ = 512;
  colorTableType_ = GREY;
}

int TkAGIF::create(int argc, const char* argv[])
{
  if (argc == 5) {
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
  out_ = new ofstream(argv[2]);
  if (!out_) {
    Tcl_AppendResult(interp_, "Error: unable to open filename ", NULL);
    if (*argv[2])
      Tcl_AppendResult(interp_, argv[2], NULL);
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

  // header
  char header[] = "GIF89a";
  out_->write(header,6);
  unsigned short ww = width_;
  unsigned short hh = height_;
  out_->write((char*)&ww,2);
  out_->write((char*)&hh,2);
  
  return TCL_OK;
}

int TkAGIF::colortable(int argc, const char* argv[])
{
  if (argc == 3) {
    if (!strncmp(argv[2],"grey",3))
      colorTableType_ = GREY;
    else if (!strncmp(argv[2],"red",3))
      colorTableType_ = RED;
    else if (!strncmp(argv[2],"green",3))
      colorTableType_ = GREEN;
    else if (!strncmp(argv[2],"blue",3))
      colorTableType_ = BLUE;
    else if (!strncmp(argv[2],"pseudo",3))
      colorTableType_ = PSEUDO;
    else if (!strncmp(argv[2],"rgb",3))
      colorTableType_ = RGB;
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
  unsigned char red[256];
  unsigned char green[256];
  unsigned char blue[256];
  memset(red,0,256);
  memset(green,0,256);
  memset(blue,0,256);
  
  switch (colorTableType_) {
  case GREY:
    for(int ii=0; ii<256; ii++)
      red[ii] = green[ii] = blue[ii] = ii;
    break;
  case RED:
    for(int ii=0; ii<256; ii++)
      red[ii] = ii;
    break;
  case GREEN:
    for(int ii=0; ii<256; ii++)
      green[ii] = ii;
    break;
  case BLUE:
    for(int ii=0; ii<256; ii++)
      blue[ii] = ii;
    break;
  case PSEUDO:
    break;
  case RGB:
    for (int rr=0, ii=0; rr<8; rr++) {
      for (int gg=0; gg<8; gg++) {
	for (int bb=0; bb<8; bb++) {
	  red[ii] = rr*32;
	  green[ii] = gg*32;
	  blue[ii] = bb*32;
	  ii++;
	}
      }
    }
    red[255] = 0xFF;
    green[255] = 0xFF;
    blue[255] = 0xFF;
    break;
  }
      
  // Logical Screen Descriptor
  // bits per pixel-1 (3), sort flag (1), color resolution-1 (3),
  // global flag (1)
  char gct=0xF7;
  out_->write(&gct,1);

  // bg color
  char bg=0x00;
  out_->write(&bg,1);

  // default pixel aspect ratio
  char rr=0x00;
  out_->write(&rr,1);

  // color table
  for (int ii=0; ii<256; ii++) {
    out_->write((char*)red+ii,1);
    out_->write((char*)green+ii,1);
    out_->write((char*)blue+ii,1);
  }

  // Application Extension Block
  char aeb[2] = {0x21,0xFF};
  out_->write(aeb,2);
  char ss= 0x0B;
  out_->write(&ss,1);
  char nn[] = "NETSCAPE2.0";
  out_->write(nn,11);
  char dd=0x03;
  out_->write(&dd,1);
  char rep[] = {0x01,0xFF,0xFF};
  out_->write(rep,3);
  char end=0x00;
  out_->write(&end,1);

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
  char gce[] = {0x21,0xF9};
  out_->write(gce,2);
  char ss= 0x04;
  out_->write(&ss,1);
  // Graphics disposal
  // Transparent color flag (1), User input flag (1), disposal method (3),
  // reserved (3)
  char bf= 0x08;
  out_->write(&bf,1);
  char delay[] = {0xFF,0x00};
  out_->write(delay,2);
  char notrans= 0x00;
  out_->write(&notrans,1);
  char gcend= 0x00;
  out_->write(&gcend,1);
  
  // Local Image Descriptor
  char img= 0x2C;
  out_->write(&img,1);
  unsigned short zz = 0;
  out_->write((char*)&zz,2);
  out_->write((char*)&zz,2);
  unsigned short ww = width_;
  out_->write((char*)&ww,2);
  unsigned short hh = height_;
  out_->write((char*)&hh,2);
  // local table flag (1), interlace flag (1), sort flag (1),
  // reserved (2), size local table (3)
  char nolut= 0x00;
  out_->write(&nolut,1);
  
  // Image Data
  char lzw = 0x08;
  out_->write(&lzw,1);

  for (int jj=0; jj<height_; jj++) {
    int ii =0;
    while (ii<width_) {
      int ww = width_-ii;
      int ll = ww < 0xF0 ? ww : 0xF0;
      char ss= ll+1;
      out_->write(&ss,1);
      char clear = 0x80;
      out_->write(&clear,1);
      for (unsigned char kk=0; kk<ll; kk++) {
	char pix = rand() % 128;
	out_->write(&pix,1);
	ii++;
      }
    }
  }
  char stop[] = {0x01,0x81};
  out_->write(stop,2);
  char end= 0x00;
  out_->write(&end,1);
  
  return TCL_OK;
}

int TkAGIF::close(int argc, const char* argv[])
{
  // GIF file terminator
  char end = 0x3B;
  out_->write(&end,1);

  out_->close();
  delete out_;
  
  return TCL_OK;
}

