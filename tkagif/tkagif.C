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

typedef struct {
  int count;
  unsigned char red;
  unsigned char green;
  unsigned char blue;
} Color;

typedef struct {
  unsigned char red;
  unsigned char green;
  unsigned char blue;
} Pixel;

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
  colorRes_ = 4; // pseudocolor
  //colorRes_ = 16; // rgb

  // state vars
  colorTableSize_ =0;
  resolution_ =0;
  pict_ =NULL;
  pictCount_ =0;

  // Compress
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
  {
    string s(argv[5]);
    istringstream str(s);
    str >> colorRes_;
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

  // *** Comment Extension
  // no present

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
    unsigned short delay = 0x00;
    out_->write((char*)&delay,2);
    // Transparent Color Index
    unsigned char trans= 0x00;
    out_->write((char*)&trans,1);
    // Block Terminator
    unsigned char end= 0x00;
    out_->write((char*)&end,1);
  }
  
  return TCL_OK;
}

static int cmpColor(const void* a, const void* b)
{
  Color* aa = (Color*)a;
  Color* bb = (Color*)b;

  int diff = aa->count - bb->count;
  if (diff > 0) return -1;
  if (diff == 0) return 0;
  return 1;
}

#define ALMOST(aa,bb)  (abs(aa-bb) <= colorRes_ ? 1 : 0)

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
  int maxColors = 4096;
  int totalColors =11;
  Color cc[maxColors];
  memset(cc,0,sizeof(Color)*maxColors);
  
  // Base Colors
  
  // 0: black
  // 1: white
  cc[1].red = cc[1].green = cc[1].blue = 255;
  cc[1].count++;
  // 2: red
  cc[2].red = 255;
  cc[2].count++;
  // 3: green
  cc[3].green = 255;
  cc[3].count++;
  // 4: blue
  cc[4].blue = 255;
  cc[4].count++;
  // 5: cyan
  cc[5].green = cc[5].blue = 255;
  cc[5].count++;
  // 6: magenta
  cc[6].red = cc[6].blue = 255;
  cc[6].count++;
  // 7: yellow
  cc[7].red = cc[7].green = 255;
  cc[7].count++;
  
  // some Greys for numerics

  // 8: 1/4 grey
  cc[8].red = cc[8].green = cc[8].blue = 64;
  cc[8].count++;
  // 9: 1/2 grey
  cc[9].red = cc[9].green = cc[9].blue = 128;
  cc[9].count++;
  // 10: 3/4 grey
  cc[10].red = cc[10].green = cc[10].blue = 192;
  cc[10].count++;

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
  
  // Scan and sort all colors
  {
    Pixel* dst = pixels;
    for (int jj=0; jj<height_; jj++) {
      for (int ii=0; ii<width_; ii++, dst++) {
	// first try all known colors
	int done =0;
	for (int kk=0; kk<totalColors; kk++) {
	  if (ALMOST(dst->red, cc[kk].red) &&
	      ALMOST(dst->green, cc[kk].green) &&
	      ALMOST(dst->blue, cc[kk].blue)) {
	    cc[kk].count++;
	    done =1;
	    break;
	  }
	}

	// add color
	if (!done) {
	  if (totalColors<maxColors) {
	    cc[totalColors].red = dst->red;
	    cc[totalColors].green = dst->green;
	    cc[totalColors].blue = dst->blue;
	    cc[totalColors].count++;
	    totalColors++;
	  }
	}
      }
    }

    // now sort color array
    // leave first 11 alone
    qsort(&cc[11], totalColors-11, sizeof(Color), cmpColor);
  }
  
  resolution_ =0;
  while (totalColors >> resolution_)
    resolution_++;
  if (resolution_>8)
      resolution_ =8;
  colorTableSize_ = 1 << resolution_;
  
  if (0) {
    cerr << "Resolution: " << resolution_ << endl;
    cerr << "ColorTableSize: " << colorTableSize_ << endl;
    cerr << "Total Colors: " << totalColors << endl;
    for (int ii=0; ii<totalColors; ii++) {
      cerr << ii << ' '
	   << cc[ii].count << ' '
	   << (unsigned short)(cc[ii].red) << ' '
	   << (unsigned short)cc[ii].green << ' '
	   << (unsigned short)cc[ii].blue << endl;
    }
  }

  // build colortable
  Color ct[colorTableSize_];
  memset(ct,0,sizeof(Color)*colorTableSize_);

  for (int ii=0; ii<colorTableSize_; ii++) {
    ct[ii].count = cc[ii].count;
    ct[ii].red = cc[ii].red;
    ct[ii].green = cc[ii].green;
    ct[ii].blue = cc[ii].blue;
  }
  
  if (0) {
    cerr << "ColorTable Size: " << colorTableSize_ << endl;
    for (int ii=0; ii<colorTableSize_; ii++) {
      cerr << ii << ' '
	   << ct[ii].count << ' '
	   << (unsigned short)(ct[ii].red) << ' '
	   << (unsigned short)ct[ii].green << ' '
	   << (unsigned short)ct[ii].blue << endl;
    }
  }

  // now indexed image
  if (pict_)
    delete [] pict_;
  pict_ =NULL;
  pictCount_ =0;

  pict_ = new unsigned char[width_*height_];
  memset(pict_,0,width_*height_);
  {
    Pixel* src = pixels;
    unsigned char* dst = pict_;
    for (int jj=0; jj<height_; jj++) {
      for (int ii=0; ii<width_; ii++, src++, dst++) {
	
	// first try all known colors
	int done =0;
	for (int kk=0; kk<colorTableSize_; kk++) {
	  if (ALMOST(src->red, ct[kk].red) &&
	      ALMOST(src->green, ct[kk].green) &&
	      ALMOST(src->blue, ct[kk].blue)) {
	    *dst = (unsigned char)kk;
	    done =1;
	    break;
	  }
	}

	// nope, find closest
	if (!done) {
	  int id =0;
	  double dd =FLT_MAX;
	  for (int kk=0; kk<colorTableSize_; kk++) {
	    double vv =
	      pow((src->red   - ct[kk].red)   *.3,2) +
	      pow((src->green - ct[kk].green) *.59,2) + 
	      pow((src->blue  - ct[kk].blue)  *.11,2);
	    if (vv<dd) {
	      id = kk;
	      dd = vv;
	    }
	  }
	  *dst = id;
	}
      }
    }
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
    out_->write((char*)&ct[ii].red,1);
    out_->write((char*)&ct[ii].green,1);
    out_->write((char*)&ct[ii].blue,1);
  }

  // *** Image Data ***
  //    noCompress();
  compress();
  
  // end of Image Data
  unsigned char end= 0x00;
  out_->write((char*)&end,1);

  // cleanup
  if (pict_)
    delete [] pict_;
  pict_ =NULL;
  pictCount_ =0;

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

void TkAGIF::noCompress()
{
  // only works for color table size 128 (i.e. whole bytes)
  // LZW minium code size
  unsigned char lzw = 0x07;
  out_->write((char*)&lzw,1);

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
	unsigned char pix = pict_[jj*width_+ii];
	out_->write((char*)&pix,1);
	ii++;
      }
    }
  }
  unsigned char ss = 0x01;
  out_->write((char*)&ss,1);
  out_->write((char*)&stop,1);
}

#define GIFBITS	12
#define MAXCODE(numBits) (((long) 1 << (numBits)) - 1)

void TkAGIF::compress()
{
  // LZW minium code size
  out_->write((char*)&resolution_,1);

  unsigned int codeTable[HSIZE];
  int outCount = 0;
  int inCount = 1;

  // init
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
  while ((c = input()) != EOF) {
    inCount++;

    fcode = (long) (((long) c << GIFBITS) + ent);
    // XOR hashing
    i = ((long)c << hshift) ^ ent;

    if (hashTable_[i] == fcode) {
      ent = codeTable[i];
      continue;
    }
    else if ((long) hashTable_[i] < 0) {
      // Empty slot
      goto nomatch;
    }

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
    if ((long) hashTable_[i] > 0)
      goto probe;

  nomatch:
    output((long)ent);
    outCount++;
    ent = c;
    if (freeEntry_ < (long)1 << GIFBITS) {
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
  int *hashTablePtr = hashTable_ + HSIZE;
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
