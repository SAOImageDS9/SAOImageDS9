// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <stdio.h>
#include "outfile.h"

OutFitsFile::OutFitsFile(const char* fn)
{
  if ((fd_ = fopen(fn, "wb")))
    valid_ = 1;
}

OutFitsFile::~OutFitsFile()
{
  if (fd_)
    fclose(fd_);
}

int OutFitsFile::write(char* where, size_t size)
{
  // size_t size is unsigned
  long long ss =size;
  size_t rr = 0;
  int r = 0;

  do {
    r = fwrite(where+rr, 1, (ss>B1MB) ? B1MB : ss, fd_);
    ss -= r;
    rr += r;
  } while (r>0 && rr<size);

  return rr;
}

OutFitsFileGZ::OutFitsFileGZ(const char* fn)
{
  if ((fd_ = gzopen(fn, "wb")))
    valid_ = 1;
}

OutFitsFileGZ::~OutFitsFileGZ()
{
  if (fd_)
    gzclose(fd_);
}

int OutFitsFileGZ::write(char* where, size_t size)
{
  // size_t size is unsigned
  long long ss =size;
  size_t rr = 0;
  int r = 0;

  do {
    r = gzwrite(fd_, where+rr, (ss>B1MB) ? B1MB : ss);
    ss -= r;
    rr += r;
  } while (r>0 && rr<size);

  return rr;
}

