// Copyright (C) 2019
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <math.h>
#include <float.h>

#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

#include <stdlib.h>
#include <string.h>
#include <tk.h>

#include "tkagif.h"

#define MAXCOLORS 256

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
  width_ = 512;
  height_ = 512;
  resolution_ =0;

  pict_ =NULL;
  colorTable_ =NULL;

  // Actual size of colortable to be saved
  colorTableSize_ =0;

  // Compress
  pictCount_ =0;

  initialBits_ =0;
  numBits_ =0;
  currentBits_ =0;

  maxCode_ =0;
  clearCode_ =0;
  eofCode_ =0;

  clearFlag_ =0;
  freeEntry_ =0;

  accumulatedByteCount_ =0;
  currentAccumulated_ =0;
}

int TkAGIF::create(int argc, const char* argv[])
{
  if (argc == 6) {
    if (*argv[2] == '\0') {
      Tcl_AppendResult(interp_, "bad filename", NULL);
      return TCL_ERROR;
    }
  }
  else {
    Tcl_AppendResult(interp_, "usage: tkagif create <filename> <width> <height> <delay>", NULL);
    return TCL_ERROR;
  }

  // open fn
  out_ = new ofstream(argv[2], std::ios::binary);
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
  {
    string s(argv[5]);
    istringstream str(s);
    str >> delay_;
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
    union qq {
      struct pp {
	unsigned int size: 3;
	unsigned int sort: 1;
	unsigned int resolution: 3;
	unsigned int gt: 1;
      } tt;
      unsigned char cc;
    };
    union qq pkg;

    pkg.tt.gt = 0;
    pkg.tt.resolution = 0;
    pkg.tt.sort = 0;
    pkg.tt.size = 0;

    out_->write((char*)&pkg.cc,1);

    // BG Color
    unsigned char bg=0x00;
    out_->write((char*)&bg,1);

    // Pixel Aspect Ratio
    unsigned char ar=0x00;
    out_->write((char*)&ar,1);
  }
  
  // *** Global Color Table ***
  // not present

  // *** Comment Extension
  // not present

  // *** Application Extension Block ***
  {
    // Extention Introducer
    unsigned char ext = 0x21;
    out_->write((char*)&ext,1);
    // Extention Lable
    unsigned char lable = 0xFF;
    out_->write((char*)&lable,1);
    // Block Size
    unsigned char ss= 0x0B;
    out_->write((char*)&ss,1);
    // Applcation Identifier
    unsigned char id[] = "NETSCAPE";
    out_->write((char*)id,8);
    // Authentication Code
    unsigned char code[] = "2.0";
    out_->write((char*)code,3);
    // Application Data Size
    unsigned char dd=0x03;
    out_->write((char*)&dd,1);
    // Application Data
    unsigned char rep[] = {0x01,0x00,0x00};
    out_->write((char*)rep,3);
    // Block Terminator
    unsigned char end=0x00;
    out_->write((char*)&end,1);
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

  // RGB img
  Pixel* pixels = new Pixel[width_*height_];
  memset(pixels,0,sizeof(Pixel)*width_*height_);
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
    Pixel* dst = pixels;
    for (int jj=0; jj<height_; jj++) {
      for (int ii=0; ii<width_; ii++, dst++) {
	dst->red = src[(jj*width_+ii)*block.pixelSize+block.offset[0]];
	dst->green = src[(jj*width_+ii)*block.pixelSize+block.offset[1]];
	dst->blue = src[(jj*width_+ii)*block.pixelSize+block.offset[2]];
      }
    }
  }

  // Indexed img
  if (pict_)
    delete [] pict_;
  pict_ = new unsigned char[width_*height_];
  memset(pict_,0,width_*height_);

  if (colorTable_)
    delete [] colorTable_;
  colorTable_ = new Color[MAXCOLORS];

  scanImage(pixels);
  
  // *** Graphic Control Extension ***
  {
    // Extention Introducer
    unsigned char ext = 0x21;
    out_->write((char*)&ext,1);
    // Extention Lable
    unsigned char lable = 0xF9;
    out_->write((char*)&lable,1);
    // Block Size
    unsigned char ss= 0x04;
    out_->write((char*)&ss,1);

    // Packed Field msb to lsb
    // Reserved (3)
    // Displosal Method (3): 0 none, 1 do not dispose, 2 restore bg, 3 restore
    // User Input Flag (1): 0 none, 1 expected
    // Transparent Color Flag (1): 0 not given, 1 color index
    union qq {
      struct pp {
	unsigned int transparent: 1;
	unsigned int input: 1;
	unsigned int dispose: 3;
	unsigned int reserve: 3;
      } tt;
      unsigned char cc;
    };
    union qq pkg;

    pkg.tt.reserve =0;
    pkg.tt.dispose =0;
    pkg.tt.input =0;
    pkg.tt.transparent =0;
    out_->write((char*)&pkg.cc,1);

    // Delay Time
    //    unsigned short delay = 0x00;
    out_->write((char*)&delay_,2);
    // Transparent Color Index
    unsigned char trans= 0x00;
    out_->write((char*)&trans,1);
    // Block Terminator
    unsigned char end= 0x00;
    out_->write((char*)&end,1);
  }
  
  // *** Local Image Descriptor ***
  {
    // Image Separator
    unsigned char img= 0x2C;
    out_->write((char*)&img,1);

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
    union qq {
      struct pp {
	unsigned int size: 3;
	unsigned int reserve: 2;
	unsigned int sort: 1;
	unsigned int interlace: 1;
	unsigned int ct: 1;
      } tt;
      unsigned char cc;
    };
    union qq pkg;

    pkg.tt.ct = 1;
    pkg.tt.interlace =0;
    pkg.tt.sort = 0;
    pkg.tt.reserve = 0;
    pkg.tt.size = resolution_-1;

    out_->write((char*)&pkg.cc,1);
  }
  
  // *** Local Color Table ***
  for (int ii=0; ii<colorTableSize_; ii++) {
    out_->write((char*)&colorTable_[ii].red,1);
    out_->write((char*)&colorTable_[ii].green,1);
    out_->write((char*)&colorTable_[ii].blue,1);
  }

  // *** Image Data ***
  compress();
  
  // end of Image Data
  unsigned char end= 0x00;
  out_->write((char*)&end,1);

  // cleanup
  if (pict_)
    delete [] pict_;
  pict_ =NULL;

  if (colorTable_)
    delete [] colorTable_;
  colorTable_ =NULL;

  return TCL_OK;
}

int TkAGIF::close(int argc, const char* argv[])
{
  // *** Trailer ***
  unsigned char end = 0x3B;
  out_->write((char*)&end,1);

  out_->close();
  delete out_;
  
  return TCL_OK;
}

void TkAGIF::initColorTable()
{
  memset(colorTable_,0,sizeof(Color)*MAXCOLORS);

  // Base Colors
  // 0: black
  // 1: white
  colorTable_[1].red = colorTable_[1].green = colorTable_[1].blue = 255;
  colorTable_[1].count++;
  // 2: red
  colorTable_[2].red = 255;
  colorTable_[2].count++;
  // 3: green
  colorTable_[3].green = 255;
  colorTable_[3].count++;
  // 4: blue
  colorTable_[4].blue = 255;
  colorTable_[4].count++;
  // 5: cyan
  colorTable_[5].green = colorTable_[5].blue = 255;
  colorTable_[5].count++;
  // 6: magenta
  colorTable_[6].red = colorTable_[6].blue = 255;
  colorTable_[6].count++;
  // 7: yellow
  colorTable_[7].red = colorTable_[7].green = 255;
  colorTable_[7].count++;
  
  // some Greys for numerics
  // 8: 1/4 grey
  colorTable_[8].red = colorTable_[8].green = colorTable_[8].blue = 64;
  colorTable_[8].count++;
  // 9: 1/2 grey
  colorTable_[9].red = colorTable_[9].green = colorTable_[9].blue = 128;
  colorTable_[9].count++;
  // 10: 3/4 grey
  colorTable_[10].red = colorTable_[10].green = colorTable_[10].blue = 192;
  colorTable_[10].count++;
}

#define ALMOST2(aa,bb) (abs(aa-bb) <= iter)

void TkAGIF::scanImage(Pixel* pixels)
{
  int finished =0;
  int iter = 1;
  int totalColors =11;

  do {
    initColorTable();
    totalColors =11;

    Pixel* src = pixels;
    unsigned char* dst = pict_;
    for (int jj=0; jj<height_; jj++) {
      for (int ii=0; ii<width_; ii++, src++, dst++) {
	// first try all known colors
	int done =0;
	for (int kk=0; kk<totalColors; kk++) {
	  if (ALMOST2(src->red, colorTable_[kk].red) &&
	      ALMOST2(src->green, colorTable_[kk].green) &&
	      ALMOST2(src->blue, colorTable_[kk].blue)) {
	    colorTable_[kk].count++;
	    *dst = kk;
	    done =1;
	    break;
	  }
	}

	// add color
	if (!done) {
	  if (totalColors<MAXCOLORS) {
	    colorTable_[totalColors].red = src->red;
	    colorTable_[totalColors].green = src->green;
	    colorTable_[totalColors].blue = src->blue;
	    colorTable_[totalColors].count++;
	    *dst = totalColors;
	    totalColors++;
	  }
	  else {
	    // abort, try again
	    iter ++;
	    goto end;
	  }
	}
      }
    }
    finished =1;

  end:
    ;
  } while (!finished);
  
  resolution_ =0;
  while (totalColors >> resolution_)
    resolution_++;
  if (resolution_>8)
      resolution_ =8;
  colorTableSize_ = 1 << resolution_;

  if (0) {
    cerr << "Iteration: " << iter << endl;
    cerr << "Total Colors: " << totalColors << endl;
    cerr << "Resolution: " << resolution_ << endl;
    cerr << "ColorTableSize: " << colorTableSize_ << endl;
    for (int ii=0; ii<totalColors; ii++) {
      cerr << ii << ' '
	   << colorTable_[ii].count << ' '
	   << (unsigned short)(colorTable_[ii].red) << ' '
	   << (unsigned short)colorTable_[ii].green << ' '
	   << (unsigned short)colorTable_[ii].blue << endl;
    }
  }
}

#define GIFBITS	12
#define MAXCODE(numBits) (((long)1 << (numBits))-1)
#define U(x) ((unsigned)(x))

void TkAGIF::compress()
{
  // LZW minium code size
  out_->write((char*)&resolution_,1);

  unsigned int codeTable[HSIZE];
  unsigned int outCount = 0;
  unsigned int inCount = 1;

  // init
  pictCount_ =0;

  initialBits_ = resolution_+1;
  numBits_ = initialBits_;
  currentBits_ = 0;

  maxCode_ = MAXCODE(numBits_);
  clearCode_ = 1 << (initialBits_ - 1);
  eofCode_ = clearCode_ + 1;

  clearFlag_ = 0;
  freeEntry_ = clearCode_ + 2;

  accumulatedByteCount_ = 0;
  currentAccumulated_ = 0;

  long ent = input();

  int hshift =0;
  long fcode =0;
  for (fcode = (long)HSIZE; fcode < 65536L; fcode *= 2L)
    hshift++;

  // Set hash code range bound
  hshift = 8 - hshift;  

  long hSize = HSIZE;
  clearHashTable();

  output((long)clearCode_);

  long disp =0;
  long i =0;
  int c =0;
  while (U(c = input()) != U(EOF)) {
    inCount++;

    fcode = (long)(((long) c << GIFBITS) + ent);
    i = ((long)c << hshift) ^ ent; // XOR hashing

    if (hashTable_[i] == fcode) {
      ent = codeTable[i];
      continue;
    }
    else if ((long) hashTable_[i] < 0)
      goto nomatch; // Empty slot

    // Secondary hash (after G. Knott)
    disp = hSize - i;
    if (i == 0)
      disp = 1;

  probe:
    if ((i -= disp) < 0)
      i += hSize;

    if (hashTable_[i] == fcode) {
      ent = codeTable[i];
      continue;
    }
    if ((long)hashTable_[i] > 0)
      goto probe;

  nomatch:
    output((long)ent);
    outCount++;
    ent = c;
    if (U(freeEntry_) < U((long)1 << GIFBITS)) {
      // code -> hashtable
      codeTable[i] = freeEntry_++;
      hashTable_[i] = fcode;
    }
    else
      clearForBlock();
  }

  // Put out the final code.
  output((long)ent);
  outCount++;
  output((long)eofCode_);
}

int TkAGIF::input()
{
  if (pictCount_ < width_*height_) {
    int rr = pict_[pictCount_];
    pictCount_++;
    return rr;
  }  
  else
    return EOF;
}

void TkAGIF::output(long code)
{
  static const unsigned long masks[] = {
					0x0000,
					0x0001, 0x0003, 0x0007, 0x000F,
					0x001F, 0x003F, 0x007F, 0x00FF,
					0x01FF, 0x03FF, 0x07FF, 0x0FFF,
					0x1FFF, 0x3FFF, 0x7FFF, 0xFFFF
  };

  currentAccumulated_ &= masks[currentBits_];
  if (currentBits_ > 0) {
    currentAccumulated_ |= ((long) code << currentBits_);
  } else {
    currentAccumulated_ = code;
  }
  currentBits_ += numBits_;

  while (currentBits_ >= 8) {
    charOut((unsigned)(currentAccumulated_ & 0xff));
    currentAccumulated_ >>= 8;
    currentBits_ -= 8;
  }

  // If the next entry is going to be too big for the code size, then
  // increase it, if possible.
  if ((freeEntry_ > maxCode_) || clearFlag_) {
    if (clearFlag_) {
      maxCode_ = MAXCODE(numBits_ = initialBits_);
      clearFlag_ = 0;
    }
    else {
      numBits_++;
      if (numBits_ == GIFBITS)
	maxCode_ = (long)1 << GIFBITS;
      else
	maxCode_ = MAXCODE(numBits_);
    }
  }

  if (code == eofCode_) {
    // At EOF, write the rest of the buffer.
    while (currentBits_ > 0) {
      charOut((unsigned)(currentAccumulated_ & 0xff));
      currentAccumulated_ >>= 8;
      currentBits_ -= 8;
    }
    flushChar();
  }
}

void TkAGIF::clearForBlock()
{
  clearHashTable();
  freeEntry_ = clearCode_ + 2;
  clearFlag_ = 1;

  output((long)clearCode_);
}

void TkAGIF::clearHashTable()
{
  int *hashTablePtr = hashTable_ + int(HSIZE);
  long m1 = -1;
  long ii = HSIZE - 16;

  do {
    *(hashTablePtr-16) = m1;
    *(hashTablePtr-15) = m1;
    *(hashTablePtr-14) = m1;
    *(hashTablePtr-13) = m1;
    *(hashTablePtr-12) = m1;
    *(hashTablePtr-11) = m1;
    *(hashTablePtr-10) = m1;
    *(hashTablePtr-9) = m1;
    *(hashTablePtr-8) = m1;
    *(hashTablePtr-7) = m1;
    *(hashTablePtr-6) = m1;
    *(hashTablePtr-5) = m1;
    *(hashTablePtr-4) = m1;
    *(hashTablePtr-3) = m1;
    *(hashTablePtr-2) = m1;
    *(hashTablePtr-1) = m1;
    hashTablePtr -= 16;
  } while ((ii -= 16) >= 0);

  for (ii += 16; ii > 0; ii--)
    *--hashTablePtr = m1;
}

void TkAGIF::charOut(int cc)
{
  packetAccumulator_[accumulatedByteCount_++] = cc;
  if (accumulatedByteCount_ >= 254)
    flushChar();
}

void TkAGIF::flushChar()
{
  if (accumulatedByteCount_ > 0) {
    unsigned char cc = accumulatedByteCount_;
    out_->write((char*)&cc,1);
    out_->write((char*)packetAccumulator_, accumulatedByteCount_);
    accumulatedByteCount_ = 0;
  }
}
