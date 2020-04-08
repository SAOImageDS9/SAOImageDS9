// Copyright (C) 1999-2020
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __ps_h__
#define __ps_h__

#include <stdint.h>

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include "zlib.h"
extern int DebugGZ;

// we need this large for gzip
#define GZIPSIZE 8192
#define BUFSIZE GZIPSIZE*8
#define RLESIZE 128
#define LINELIMIT 80

// Filter Base Class
class Filter {
protected:
  unsigned char* buf_;
  unsigned char* ptr_;

  virtual void cflush() =0;
  virtual void eflush(ostream&) =0;

public:
  Filter();
  virtual ~Filter();

  virtual void in(unsigned char) =0;
  virtual void out(ostream&) =0;
  void flush(ostream&);

  friend Filter& operator<<(Filter& f, unsigned char c) {f.in(c); return f;}
  friend ostream& operator<<(ostream& s, Filter& f) {f.out(s); return s;}
};

// Compress Base Class
class Compress : public virtual Filter {
public:
  virtual void in(unsigned char) =0;
  virtual void cflush() =0;
};

class NoCompress : public virtual Filter, public Compress {
public:
  void in(unsigned char);
  void cflush() {}
};

// RLE
class RLE : public virtual Filter, public Compress {
private:
  int state;
  unsigned char current;
  unsigned char rle[RLESIZE];
  int num;

  void dumpNonRepeat();
  void dumpRepeat();

public:
  RLE();

  void in(unsigned char);
  void cflush();
};

// GZIP
class GZIP : public virtual Filter, public Compress {
private:
  z_stream* stream_;
  unsigned char* gzip_;

  int deflategz(int);

public:
  GZIP();
  ~GZIP();

  void in(unsigned char);
  void cflush();
};

// Encode Base Class
class Encode : public virtual Filter {
protected:
  int level;
  int lineCount;

public:
  Encode(int);

  virtual void out(ostream&) =0;
  virtual void eflush(ostream&) =0;
};

// AsciiHex
class AsciiHex : public virtual Filter, public Encode {
public:
  AsciiHex(int);

  void out(ostream&);
  void eflush(ostream&);
};

// Ascii85
class Ascii85 : public virtual Filter, public Encode {
private:
  int index;
  int byteswap;
  union {
    unsigned char b[4];
    uint32_t c;
  } buf85;

  void dump(ostream&);
  int32_t swap(uint32_t* ptr);

public:
  Ascii85(int);

  void out(ostream&);
  void eflush(ostream&);
};

// PS Filters
class NoCompressAsciiHex : 
public virtual Filter, public NoCompress, public AsciiHex {
 public:
 NoCompressAsciiHex(int l) : AsciiHex(l) {};
};

class NoCompressAscii85 : 
public virtual Filter, public NoCompress, public Ascii85 {
 public:
 NoCompressAscii85(int l) : Ascii85(l) {};
};

class RLEAsciiHex :
public virtual Filter, public RLE, public AsciiHex {
 public:
 RLEAsciiHex(int l) : AsciiHex(l) {};
};

class RLEAscii85 :
public virtual Filter, public RLE, public Ascii85 {
 public:
 RLEAscii85(int l) : Ascii85(l) {};
};

class GZIPAsciiHex : 
public virtual Filter, public GZIP, public AsciiHex {
 public:
 GZIPAsciiHex(int l) : AsciiHex(l) {};
};

class GZIPAscii85 : 
public virtual Filter, public GZIP, public Ascii85 {
 public:
 GZIPAscii85(int l) : Ascii85(l) {};
};

#endif
