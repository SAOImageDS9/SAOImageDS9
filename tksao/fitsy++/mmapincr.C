// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "mmapincr.h"

#ifndef __WIN32

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>

FitsMMapIncr::FitsMMapIncr(const char* fn)
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
  int fd = open(pName_, O_RDONLY);
  if (fd == -1)
    return;

  struct stat info;
  if (fstat(fd, &info) < 0)
    return;

  close(fd);

  // check to see if we have something, we may have a small array
  if (info.st_size <= 0)
    return;

  filesize_ = info.st_size;

  // so far, so good
  valid_ = 1;
}

#else

FitsMMapIncr::FitsMMapIncr(const char* fn) {}

#endif
