// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>

#include "ps.h"
#include "util.h"

double RGB2Gray(double red, double green, double blue)
{
  return 0.30*red + 0.59*green + 0.11*blue;
}

unsigned char RGB2Gray(unsigned char red, unsigned char green, 
		       unsigned char blue)
{
  // we have a round off problem here, add FLT_EPSILON to kick it over
  return (unsigned char)(0.30*red + 0.59*green + 0.11*blue + FLT_EPSILON);
}

void RGB2CMYK(unsigned char red, unsigned char green, unsigned char blue,
	      unsigned char* cyan, unsigned char* magenta, 
	      unsigned char* yellow, unsigned char* black)
{
  // convert To CMY

  *cyan = UCHAR_MAX-red;
  *magenta = UCHAR_MAX-green;
  *yellow = UCHAR_MAX-blue;
  *black =0;

  // determine black

  *black = UCHAR_MAX;
  if (*cyan < *black)
    *black = *cyan;
  if (*magenta < *black)
    *black = *magenta;
  if (*yellow < *black)
    *black = *yellow;

  // substract out black

  *cyan -= *black;
  *magenta -= *black;
  *yellow -= *black;
}

void RGB2CMYK(unsigned short red, unsigned short green, unsigned short blue,
	      unsigned short* cyan, unsigned short* magenta, 
	      unsigned short* yellow, unsigned short* black)
{
  // convert To CMY

  *cyan = USHRT_MAX-red;
  *magenta = USHRT_MAX-green;
  *yellow = USHRT_MAX-blue;
  *black =0;

  // determine black

  *black = USHRT_MAX;
  if (*cyan < *black)
    *black = *cyan;
  if (*magenta < *black)
    *black = *magenta;
  if (*yellow < *black)
    *black = *yellow;

  // substract out black

  *cyan -= *black;
  *magenta -= *black;
  *yellow -= *black;
}

ostream& psColorGray(XColor* clr, ostream& str)
{
  if (clr) {
    float red = clr->red/float(USHRT_MAX);
    float green = clr->green/float(USHRT_MAX);
    float blue = clr->blue/float(USHRT_MAX);
    str << dec << RGB2Gray(red,green,blue);
  }

  return str;
}

ostream& psColorRGB(XColor* clr, ostream& str)
{
  if (clr) {
    float red = clr->red/float(USHRT_MAX);
    float green = clr->green/float(USHRT_MAX);
    float blue = clr->blue/float(USHRT_MAX);
    str << dec << red << ' ' << green << ' ' << blue;
  }

  return str;
}

ostream& psColorCMYK(XColor* clr, ostream& str)
{
  if (clr) {
    unsigned short cyan;
    unsigned short magenta;
    unsigned short yellow;
    unsigned short black;
    
    RGB2CMYK(clr->red, clr->green, clr->blue, &cyan, &magenta, &yellow, &black);

    str << dec 
	<< cyan/float(USHRT_MAX) << ' ' 
	<< magenta/float(USHRT_MAX) << ' ' 
	<< yellow/float(USHRT_MAX) << ' ' 
	<< black/float(USHRT_MAX);
  }
  return str;
}

char* psStr = NULL; // psQuote returned string
char* psQuote(const char* str)
{
  // we must must quote '(', ')', and '\'
  if (psStr)
    delete [] psStr;

  psStr = new char[strlen(str)*2+1]; // worst case size
  
  char* out = psStr;
  const char* in = str;
  while (in && *in) {
    if (*in == '(' || *in == ')' || *in == '\\')
      *out++ = '\\';
    *out++ = *in++;
  }

  *out++ = '\0'; // terminating char
  return psStr;
}

const char* psFontName(const char* font)
{
  char* str = (char*)font;
  char* ff = str;
  while (*str && *str++ != ' ');
  //  char* zz = str;
  while (*str && *str++ != ' ');
  char* ww = str;
  while (*str && *str++ != ' ');
  char* ss = str;

  if (ff && ww && ss)
    return psFontName(ff,ww,ss);
  else
    return psFonts[0];
}

int psFontSize(const char* font)
{
  char* str = (char*)font;
  while (*str && *str++ != ' ');
  return atoi(str);
}

const char* psFontName(const char* font, const char* weight, const char* slant)
{
  int ptr = 0;
  if (!strncmp(font,"helvetica",4))
    ptr = 0;
  else if (!strncmp(font,"times",4))
    ptr = 4;
  else if (!strncmp(font,"courier",4))
    ptr = 8;

  if (!strncmp(weight,"normal",4))
    ;
  else if (!strncmp(weight,"bold",4))
    ptr +=2;

  if (!strncmp(slant,"roman",4))
    ;
  else if (!strncmp(slant,"italic",4))
    ptr++;

  return psFonts[ptr];
}

Filter::Filter()
{
  buf_ = new unsigned char[BUFSIZE];
  ptr_ = buf_;
}

Filter::~Filter()
{
  if (buf_)
    delete [] buf_;
}

void Filter::flush(ostream& str)
{
  cflush();
  eflush(str);
}

// Compress

void NoCompress::in(unsigned char c)
{
  *ptr_++ = c;
}

// RLE

RLE::RLE()
{
  state = 0;
  num = 0;
}

void RLE::in(unsigned char c)
{
  current = c;
  switch (state) {
  case 0:                   // start state
    if (num == 0)           // not enough info yet
      rle[num++] = current;
    else {
      if (current != rle[num-1]) { // looks like non repeating
	rle[num++] = current;
	state = 1;
      }
      else {                // looks like repeating
	num++;
	state = 2;
      }
    }
    break;

  case 1:                   // non repeat state
    if (current != rle[num-1]) {
      rle[num++] = current;

      if (num >= RLESIZE) {      // time to dump the rlefer
	dumpNonRepeat();    // dump the buffer
	num = 0;            // and reset counter
	state = 0;
      }
    }
    else {
      num--;                // decr
      dumpNonRepeat();      // dump the buffer

      state = 2;            // repeat state
      rle[0] = current;     // save repeat char
      num = 2;              // we aready have two now
    }
    break;

  case 2:                   // repeat state
    if (current == rle[0]) {
      if (++num >= RLESIZE) {
	dumpRepeat();       // dump the repeat count
	state = 0;
	num = 0;
      }
    }
    else {
      dumpRepeat();         // dump the repeat count
      state = 1;            // back to non repeat state
      rle[0] = current;     // save first char
      num = 1;              // we have one now
    }
    break;
  }
}

void RLE::dumpNonRepeat()
{
  if (num) {
    *ptr_++ = (unsigned char)(num-1);
    for (int i=0; i<num; i++)
      *ptr_++ = rle[i];
  }
}

void RLE::dumpRepeat()
{
  if (num) {
    *ptr_++ = (unsigned char)(257-num);
    *ptr_++ = rle[0];
  }
}

void RLE::cflush()
{
  switch (state) {
  case 0:
  case 1:
    dumpNonRepeat();
    break;
  case 2:
    dumpRepeat();
    break;
  }
}

// GZIP

GZIP::GZIP()
{
  stream_ = new z_stream;
  gzip_ = new unsigned char[GZIPSIZE];

  stream_->next_in = NULL;
  stream_->avail_in = 0;
  stream_->next_out = NULL;
  stream_->avail_out = 0;

  stream_->zalloc = NULL;
  stream_->zfree = NULL;
  stream_->opaque = NULL;

  if (deflateInit(stream_, Z_DEFAULT_COMPRESSION) != Z_OK) {
    if (DebugGZ)
      cerr << "deflateInit error" << endl;
    return;
  }

  stream_->next_out = gzip_;
  stream_->avail_out = GZIPSIZE;
}

GZIP::~GZIP()
{
  if (deflateEnd(stream_) != Z_OK)
    if (DebugGZ)
      cerr << "deflateEnd error" << endl;

  if (gzip_)
    delete [] gzip_;

  if (stream_)
    delete stream_;
}

void GZIP::in(unsigned char c)
{
  stream_->next_in = &c;
  stream_->avail_in = 1;

  while (stream_->avail_in > 0 && deflategz(Z_NO_FLUSH) == Z_OK);
}

void GZIP::cflush()
{
  // flush any pending output
  while (deflategz(Z_FINISH) == Z_OK);
}

int GZIP::deflategz(int flush)
{
  int result = deflate(stream_, flush);

  switch (result) {
  case Z_OK:
    if (DebugGZ)
      cerr << "deflate OK: avail_in " << stream_->avail_in
	   << " avail_out " << stream_->avail_out << endl;
    break;
  case Z_STREAM_END:
    if (DebugGZ)
      cerr << "deflate STRM_END: avail_in " << stream_->avail_in
	   << " avail_out " << stream_->avail_out << endl;
    break;
  default:
    if (DebugGZ)
      cerr << "deflate Error " << result << endl;
    return result;
  }

  if (stream_->avail_out == 0 || result != Z_OK) {
    int s = GZIPSIZE - stream_->avail_out;
    unsigned char* d = gzip_;

    if (s>0) {
      if (ptr_+s > buf_+BUFSIZE) {
	cerr << "deflate buffer overflow " 
	     << stream_->avail_out << ' ' << result << endl;
	return result;
      }

      memcpy(ptr_,d,s);
      ptr_ += s;

      if (DebugGZ)
	cerr << "deflate send " << s << ' ' << result << endl;
    }

    stream_->next_out = gzip_;
    stream_->avail_out = GZIPSIZE;
  }

  return result;
}

// Encode

Encode::Encode(int l)
{
  level = l;
  lineCount = 0;
}

// AsciiHex

AsciiHex::AsciiHex(int l) : Encode(l) {}

void AsciiHex::out(ostream& str)
{
  unsigned char* p = buf_;
  while (p < ptr_) {
    unsigned short c = *p++;
    str << hex << setfill('0') << setw(2) << c;

    lineCount += 2;
    if (lineCount >= LINELIMIT) {
      str << endl;
      lineCount = 0;
    }
  }
  ptr_ = buf_; // reset buffer
}

void AsciiHex::eflush(ostream& str)
{
  out(str);
  switch (level) {
  case 1:
    str << endl;
    break;
  case 2:
  case 3:
    str << endl << '>' << endl;
    break;
  }
}

// Ascii85

Ascii85::Ascii85(int l) : Encode(l)
{
  byteswap = (*(short *)"\001\000" & 0x0001);

  buf85.c = 0;
  index = 0;
}

int32_t Ascii85::swap(uint32_t* p)
{
  int32_t r;
  swap4((char*)p, (char*)&r);
  return r;
}

void Ascii85::out(ostream& str)
{
  unsigned char* p = buf_;
  while (p < ptr_) {
    buf85.b[index++] = *p++;
    if (index==4) {
      dump(str);
    }
  }

  ptr_ = buf_; // reset buffer
}

void Ascii85::dump(ostream& str)
{
  // all zeros?
  if (buf85.c == 0) {
    str << 'z';
    if (++lineCount >= LINELIMIT) {
      str << endl;
      lineCount = 0;
    }
  }
  else {
    uint32_t b;
    if (!byteswap)
      b = buf85.c;
    else
      b = swap(&buf85.c);

    for (int ii=4; ii>=0 ; ii--) {
      uint32_t base = 1;
      for (int jj=0; jj<ii; jj++)
	base *= 85;

      uint32_t a = b / base;
      b -= a * base;
      str << (char)(a + '!');
      if (++lineCount >= LINELIMIT) {
	str << endl;
	lineCount = 0;
      }
    }
  }
  index = 0;
  buf85.c = 0;
}

void Ascii85::eflush(ostream& str)
{
  // dump the remainder
  out(str);

  // we can't have any z's here
  // also, only write index+1 chars
  if (index) {
    uint32_t b;
    if (!byteswap)
      b = buf85.c;
    else
      b = swap(&buf85.c);
 
    for (int ii=4; ii>=(4-index); ii--) {
      uint32_t base = 1;
      for (int jj=0; jj<ii; jj++)
	base *= 85;
 
      uint32_t a = b / base;
      b -= a * base;
      str << (char)(a + '!');
       if (++lineCount >= LINELIMIT) {
	str << endl;
	lineCount = 0;
      }
    }
  }
  index = 0;
  buf85.c = 0;

  switch (level) {
  case 1:
    str << endl;
    break;
  case 2:
  case 3:
    str << endl << "~>" << endl;
    break;
  }
}

