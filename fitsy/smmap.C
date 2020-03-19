// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "smmap.h"

#ifndef __WIN32

#include <unistd.h>

#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/mman.h>

FitsSMMap::FitsSMMap(const char* hdr, const char* fn)
{
  // reset
  valid_ =0;

  // header
  {
    // Map the header.
    int file = open(hdr, O_RDONLY);
    if (file == -1)
      return;

    struct stat info;
    if (fstat(file, &info) < 0)
      return;

    // check for empty file
    if (info.st_size == 0)
      return;

    // map it
    hmapsize_ = info.st_size;
    hmapdata_ = (char*)mmap(NULL, hmapsize_, PROT_READ, MAP_SHARED, file, 0);

    // close the file
    close(file);

    // are we valid?
    if ((long)hmapdata_ == -1)
      return;
  }

  // data
  {
    // parse the fn and options
    parse(fn);
    if (!valid_)
      return;

    // reset
    valid_ =0;

    if (!pName_)
      return;

    // Map the file.
    int file = open(pName_, O_RDONLY);
    if (file == -1)
      return;

    struct stat info;
    if (fstat(file, &info) < 0)
      return;

    // check for empty file
    if (info.st_size == 0)
      return;

    // map it
    mapsize_ = info.st_size;
    mapdata_ = (char*)mmap(NULL, mapsize_, PROT_READ, MAP_SHARED, file, 0);

    // close the file
    close(file);

    // are we valid?
    if ((long)mapdata_ == -1)
      return;
  }

  // so far, so good
  valid_ = 1;
}

FitsSMMap::~FitsSMMap()
{
  if (mapdata_)
    munmap((caddr_t)mapdata_, mapsize_);
}

#else

FitsSMMap::FitsSMMap(const char* hdr, const char* fn)
{
  valid_ =0;
}

FitsSMMap::~FitsSMMap() {}

#endif
