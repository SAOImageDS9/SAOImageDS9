// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "socketgz.h"
#include "util.h"

#ifndef __WIN32

#include <sys/types.h>
#include <sys/socket.h>

#define ASCII_FLAG   0x01 /* bit 0 set: file probably ascii text */
#define HEAD_CRC     0x02 /* bit 1 set: header CRC present */
#define EXTRA_FIELD  0x04 /* bit 2 set: extra field present */
#define ORIG_NAME    0x08 /* bit 3 set: original file name present */
#define COMMENT      0x10 /* bit 4 set: file comment present */
#define RESERVED     0xE0 /* bits 5..7: reserved */

FitsSocketGZ::FitsSocketGZ(int s, const char* ext) 
{
  parse(ext);
  if (!valid_)
    return;

  // reset
  valid_ =0;

  if (!s)
    return;

  stream_ = new gzStream_;
  stream_->id = s;
  stream_->transparent = 0;
  memset(stream_->header,'\0',2);
  stream_->useHeader = 0;
  stream_->buf = new unsigned char[B4KB];

  // magic bytes
  if (recv(stream_->id , stream_->header, 2, 0) != 2) {
    internalError("Fitsy++ socketgz can't read magic bytes in header");
    return;
  }

  if (stream_->header[0] != 0x1f || stream_->header[1] != 0x8b) {
    stream_->transparent = 1;
    stream_->useHeader = 1;
  }
  else {
    ((z_stream*)stream_)->next_in = NULL;
    ((z_stream*)stream_)->avail_in = 0;
    ((z_stream*)stream_)->zalloc = NULL;
    ((z_stream*)stream_)->zfree = NULL;
    ((z_stream*)stream_)->opaque = NULL;

    if (inflateInit2((z_stream*)stream_, -MAX_WBITS) != Z_OK) {
      internalError("Fitsy++ socketgz inflateInit error");
      return;
    }

    unsigned char buf[128];

    // method/flags
    if (recv(stream_->id , buf, 2, 0) != 2) {
      internalError("Fitsy++ socketgz can't read method/flags bytes in header");
      return;
    }
    int method = buf[0];
    int flags = buf[1];

    if (method != Z_DEFLATED || (flags & RESERVED) != 0) {
      internalError("Fitsy++ socketgz bad method/flags");
      return;
    }

    // Discard time, xflags and OS code
    if (recv(stream_->id , buf, 6, 0) != 6) {
      internalError("Fitsy++ socketgz can't read time/xflags/os bytes in header");
      return;
    }

    // skip the extra field
    if ((flags & EXTRA_FIELD) != 0) {
      if (recv(stream_->id , buf, 2, 0) != 2) {
	internalError("Fitsy++ socketgz can't read extra field length bytes in header");
	return;
      }

      int len  =  buf[0];
      len += buf[1]<<8;

      if (recv(stream_->id , buf, len, 0) != len) {
	internalError("Fitsy++ socketgz can't read extra field bytes in header");
	return;
      }
    }

    // skip the original file name
    if ((flags & ORIG_NAME) != 0) { 
      while (recv(stream_->id , buf, 1, 0) == 1 && buf[0] != 0) ;
    }

    // skip the .gz file comment
    if ((flags & COMMENT) != 0) {
      while (recv(stream_->id , buf, 1, 0) == 1 && buf[0] != 0) ;
    }

    // skip the header crc
    if ((flags & HEAD_CRC) != 0) {
      if (recv(stream_->id , buf, 2, 0) != 2) {
	internalError("Fitsy++ socketgz can't read header crc bytes in header");
	return;
      }
    }
  }

  if (DebugGZ)
    cerr << "inflateInt Complete" << endl;

  // so far, so good
  valid_ = 1;
}

FitsSocketGZ::~FitsSocketGZ() 
{
  if (stream_->buf)
    delete [] stream_->buf;
  if (stream_)
    delete stream_;
  stream_ = NULL;
}

#else

FitsSocketGZ::FitsSocketGZ(int s, const char* ext)
{
  valid_ =0;
}

FitsSocketGZ::~FitsSocketGZ() {}

#endif
