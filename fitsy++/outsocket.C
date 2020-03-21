// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "outsocket.h"
#include "util.h"

#ifndef __WIN32

#include <sys/types.h>
#include <sys/socket.h>

#include "file.h"

OutFitsSocket::OutFitsSocket(int s)
{
  id_ = s;
  valid_ = 1;
}

int OutFitsSocket::write(char* where, size_t size)
{
  // size_t size is unsigned
  long long ss = size;
  size_t rr =0;
  int r;
  do {
    r = (ss>B4KB) ? B4KB : ss;
    send(id_, where+rr, r, 0);
    if (r == -1) {
      internalError("Fitsy++ outsocket write error");
      return -1;
    }
    ss -= r;
    rr += r;
  } while (r>0 && rr<size);

  return rr;
}

OutFitsSocketGZ::OutFitsSocketGZ(int s)
{
  id_ = s;
  stream_ = new z_stream;
  buf_ = new unsigned char[B4KB];

  crc_ = crc32(0L, Z_NULL, 0);

  stream_->next_in = NULL;
  stream_->avail_in = 0;
  stream_->next_out = NULL;
  stream_->avail_out = 0;

  stream_->zalloc = NULL;
  stream_->zfree = NULL;
  stream_->opaque = NULL;

  if (deflateInit2(stream_, Z_DEFAULT_COMPRESSION, Z_DEFLATED, 
		   -MAX_WBITS, 8, Z_DEFAULT_STRATEGY) != Z_OK) {
    internalError("Fitsy++ outsocket deflateInit error");
    return;
  }

  // dump simple header
  unsigned char header[10] =
    {0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x03};
  send(id_, header, 10, 0);
  
  stream_->next_out = buf_;
  stream_->avail_out = B4KB;

  valid_ = 1;
}

OutFitsSocketGZ::~OutFitsSocketGZ()
{
  // flush any pending output
  while (deflategz(Z_FINISH) == Z_OK);

  // output crc/length
  putlong(crc_);
  putlong(stream_->total_in);

  if (deflateEnd(stream_) != Z_OK)
    internalError("Fitsy++ outsocket deflateEnd error");

  if (stream_)
    delete stream_;

  if (buf_)
    delete [] buf_;
}

int OutFitsSocketGZ::write(char* where, size_t size)
{
  stream_->next_in = (unsigned char*)where;
  stream_->avail_in = size;

  if (DebugGZ)
    cerr << "write " << size << endl;

  while (stream_->avail_in > 0 && deflategz(Z_NO_FLUSH) == Z_OK);

  // update crc
  crc_ = crc32(crc_, (const Bytef *)where, size);

  return size - stream_->avail_in;
}

int OutFitsSocketGZ::deflategz(int flush)
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
    int s = B4KB - stream_->avail_out;
    unsigned char* d = buf_;

    while (s>0) {
      int r = send(id_, d, s, 0);

      if (r == -1) {
	internalError("Fitsy++ outsocket deflate send error");
	return Z_ERRNO;
      }
	  
      if (DebugGZ)
	cerr << "deflate send " << r << " out of " << s << endl;

      s -= r;
      d += r;
    }

    stream_->next_out = buf_;
    stream_->avail_out = B4KB;
  }

  return result;
}

void OutFitsSocketGZ::putlong(unsigned long l)
{
  // dump in LSB order
  for (int n = 0; n < 4; n++) {
    unsigned char foo = (int)(l & 0xff);
    send(id_, &foo, 1, 0);
    l >>= 8;
  }
}

#else

OutFitsSocket::OutFitsSocket(int s)
{
  id_ = s;
  valid_ = 0;
}

int OutFitsSocket::write(char* where, size_t size)
{
  return 0;
}

OutFitsSocketGZ::OutFitsSocketGZ(int s)
{
  id_ = s;
  valid_ = 0;
}

OutFitsSocketGZ::~OutFitsSocketGZ() {}

int OutFitsSocketGZ::write(char* where, size_t size)
{
  return 0;
}

int OutFitsSocketGZ::deflategz(int flush)
{
  return 0;
}

void OutFitsSocketGZ::putlong(unsigned long l) {}

#endif
