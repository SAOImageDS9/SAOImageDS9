// Copyright (C) 1999-2015
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <math.h>
#include <float.h>

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
    Tcl_AppendResult(interp, "usage: tkagif ?create?add?close?",  NULL);
    return TCL_ERROR;
  }
}

TkAGIF::TkAGIF(Tcl_Interp* interp)
{
  interp_ = interp;
  out_ =NULL;
  width_ = height_ = 512;
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

  // *** Header ***
  {
    char header[] = "GIF89a";
    out_->write(header,6);
  }
  
  // *** Logical Screen Descriptor ***
  {
    // width
    unsigned short ww = width_;
    out_->write((char*)&ww,2);
    // height
    unsigned short hh = height_;
    out_->write((char*)&hh,2);

    // Packed Field: msb to lsb
    // global color table flag (1): 0 no gct, 1: gct
    // color resolution (3): number bits-1
    // sort flag (1): 0 not ordered, 1 ordered decreasing importance
    // size of global color table (3): size 2^(x+1)
    //    char pkg=0xF6;
    char pkg=0x00;
    out_->write(&pkg,1);

    // BG Color
    char bg=0x00;
    out_->write(&bg,1);

    // Pixel Aspect Ratio
    char ar=0x00;
    out_->write(&ar,1);
  }
  
  // *** Global Color Table ***
  if (0) {
    int sz = 128;
    // colortable
    unsigned char red[sz];
    unsigned char green[sz];
    unsigned char blue[sz];
    memset(red,0,sz);
    memset(green,0,sz);
    memset(blue,0,sz);

    for(int ii=0; ii<sz; ii++)
      red[ii] = green[ii] = blue[ii] = ii*2;
      
    for (int ii=0; ii<sz; ii++) {
      out_->write((char*)red+ii,1);
      out_->write((char*)green+ii,1);
      out_->write((char*)blue+ii,1);
    }
  }

  // *** Comment Extension
  // no present

  // *** Application Extension Block ***
  {
    // Extention Introducer
    char ext = 0x21;
    out_->write(&ext,1);
    // Extention Lable
    char lable = 0xFF;
    out_->write(&lable,1);
    // Block Size
    char ss= 0x0B;
    out_->write(&ss,1);
    // Applcation Identifier
    char id[] = "NETSCAPE";
    out_->write(id,8);
    // Authentication Code
    char code[] = "2.0";
    out_->write(code,3);
    // Application Data Size
    char dd=0x03;
    out_->write(&dd,1);
    // Application Data
    char rep[] = {0x01,0x00,0x00};
    out_->write(rep,3);
    // Block Terminator
    char end=0x00;
    out_->write(&end,1);
  }
  
  // *** Graphic Control Extension ***
  {
    // Extention Introducer
    char ext = 0x21;
    out_->write(&ext,1);
    // Extention Lable
    char lable = 0xF9;
    out_->write(&lable,1);
    // Block Size
    char ss= 0x04;
    out_->write(&ss,1);
    // Packed Field msb to lsb
    // Reserved (3)
    // Displosal Method (3): 0 none, 1 do not dispose, 2 restore bg, 3 restore
    // User Input Flag (1): 0 none, 1 expected
    // Transparent Color Flag (1): 0 not given, 1 color index
    char pkg= 0x00;
    out_->write(&pkg,1);
    // Delay Time
    unsigned short delay = 0x00;
    out_->write((char*)&delay,2);
    // Transparent Color Index
    char trans= 0x00;
    out_->write(&trans,1);
    // Block Terminator
    char end= 0x00;
    out_->write(&end,1);
  }
  
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

  // colortable
  int sz =128;
  int cnt =8;
  int tt =0;
  unsigned char red[sz];
  unsigned char green[sz];
  unsigned char blue[sz];
  memset(red,0,sz);
  memset(green,0,sz);
  memset(blue,0,sz);
  // 0: black
  // 1: white
  red[1] = green[1] = blue[1] = 255;
  // 2: red
  red[2] = 255;
  // 3: green
  green[3] = 255;
  // 4: blue
  blue[4] = 255;
  // 5: cyan
  green[5] = blue[5] = 255;
  // 6: magenta
  red[6] = blue[6] = 255;
  // 7: yellow
  red[7] = green[7] = 255;
  
  // map RGB to Color index
  unsigned char* pict = new unsigned char[width_*height_];
  memset(pict,0,width_*height_);

  {
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

    unsigned char* src = block.pixelPtr;
    unsigned char* dst = pict;

    for (int jj=0; jj<height_; jj++) {
      for (int ii=0; ii<width_; ii++) {
	unsigned char rr =
	  src[(jj*width_+ii)*block.pixelSize+block.offset[0]];
	unsigned char gg =
	  src[(jj*width_+ii)*block.pixelSize+block.offset[1]];
	unsigned char bb =
	  src[(jj*width_+ii)*block.pixelSize+block.offset[2]];

	int done =0;
	// first try all known colors
	for (int kk=0; kk<cnt; kk++) {
	  if (rr==red[kk] && gg==green[kk] && bb==blue[kk]) {
	    *dst++ = (unsigned char)kk;
	    done =1;
	    break;
	  }
	}

	// add color
	if (!done) {
	  tt++;
	  if (cnt<sz) {
	    red[cnt] = rr;
	    green[cnt] = gg;
	    blue[cnt] = bb;
	    *dst++ = cnt;
	    cnt++;
	  }
	  else {
	    // out of room in colortable, find closest
	    int id =0;
	    double dd =FLT_MAX;
	    for (int kk=0; kk<cnt; kk++) {
	      double vv = pow((rr-red[kk])*.3,2) +
		pow((gg-green[kk])*.59,2) + 
		pow((bb-blue[kk])*.11,2);
	      if (vv<dd) {
		id = kk;
		dd = vv;
	      }
	    }
	    *dst++ = id;
	  }
	}
      }
    }
  }
  
  // *** Local Image Descriptor ***
  {
    // Image Separator
    char img= 0x2C;
    out_->write(&img,1);

    // Image Left Position
    unsigned short left = 0;
    out_->write((char*)&left,2);

    // Image Top Position
    unsigned short top = 0;
    out_->write((char*)&top,2);

    // Image Width
    unsigned short ww = width_;
    out_->write((char*)&ww,2);

    // Image Heght
    unsigned short hh = height_;
    out_->write((char*)&hh,2);

    // Packed Field msb to lsb
    // Local Table Flag (1): 1 local table, 0 no
    // Interlace Flag (1): 1 interlaced, 0 no
    // Sort Flag (1): 1 sorted, 0 no
    // Reserved (2):
    // Size of Local Table (3): size 2^(x+1)
    //    char pkg= 0x00;
    char pkg= 0x86;
    out_->write(&pkg,1);
  }
  
  // *** Local Color Table ***
  {
    for (int ii=0; ii<sz; ii++) {
      out_->write((char*)red+ii,1);
      out_->write((char*)green+ii,1);
      out_->write((char*)blue+ii,1);
    }
  }

  // *** Image Data ***
  {
    // LZW Min Code Size
    char lzw = 0x07;
    out_->write(&lzw,1);

    // clear code: 2^n
    unsigned char clear = 0x80;
    // stop code: 2^n + 1
    unsigned char stop = 0x81;
    // send clear code every 2^n - 2
    int reset = 126;

    // Data
    for (int jj=0; jj<height_; jj++) {
      int ii =0;
      while (ii<width_) {
	int ww = width_-ii;
	int ll = ww < reset ? ww : reset;
	unsigned char ss= ll+1;
	out_->write((char*)&ss,1);
	out_->write((char*)&clear,1);
	for (unsigned char kk=0; kk<ll; kk++) {
	  unsigned char pix = pict[jj*width_+ii];
	  out_->write((char*)&pix,1);
	  ii++;
	}
      }
    }
    char ss = 0x01;
    out_->write(&ss,1);
    out_->write((char*)&stop,1);

    char end= 0x00;
    out_->write(&end,1);
  }
  
  return TCL_OK;
}

int TkAGIF::close(int argc, const char* argv[])
{
  // *** Trailer ***
  char end = 0x3B;
  out_->write(&end,1);

  out_->close();
  delete out_;
  
  return TCL_OK;
}

