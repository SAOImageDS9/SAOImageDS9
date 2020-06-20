// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsstream_h__
#define __fitsstream_h__

#include "file.h"
#include "zlib.h"

typedef struct gzStream_ {
  z_stream zstream;
  int id;
  int transparent;
  unsigned char header[2];
  int useHeader;
  unsigned char* buf;
} *gzStream;

template<class T>
class FitsStream : public FitsFile {
 protected:
  T stream_;
  FitsFile::FlushMode flush_;
  int dataManage_;           // flag, true if we manage data

  FitsHead* headRead();
  int dataRead(size_t bytes, int validate =1);
  void dataSkip(size_t);
  void dataSkipBlock(size_t);
  void skipEnd();

  size_t read(char*, size_t);
  void close();
  void found();
  void error();

public:
  FitsStream();
  virtual ~FitsStream();

  T stream() {return stream_;}
  FitsFile::FlushMode flush() {return flush_;}
  int dataManage() {return dataManage_;}

  void done() {close();}
};

template<class T>
class FitsFitsStream : public virtual FitsStream<T> {
protected:
  void processExactImage();
  void processRelaxImage();
  void processExactTable();
  void processRelaxTable();

public:
  FitsFitsStream(FitsFile::FlushMode);
  FitsFitsStream(FitsFile::ScanMode, FitsFile::FlushMode);
};

template<class T>
class FitsFitsNextStream : public FitsStream<T> {
public:
  FitsFitsNextStream(FitsFile* prev);
};

template<class T>
class FitsArrStream : public virtual FitsStream<T> {
public:
  FitsArrStream(FitsFile::FlushMode);
};

template<class T>
class FitsNRRDStream : public virtual FitsStream<T> {
public:
  FitsNRRDStream(FitsFile::FlushMode);
};

template<class T>
class FitsMosaicStream : public virtual FitsStream<T> {
public:
  FitsMosaicStream(FitsFile::FlushMode);
};

template<class T>
class FitsMosaicNextStream : public FitsStream<T> {
public:
  FitsMosaicNextStream(FitsFile* prev, FitsFile::FlushMode);
};

#endif
