// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <unistd.h>
#include "allocgz.h"

FitsAllocGZ::FitsAllocGZ(const char* fn)
{
  parse(fn);
  if (!valid_)
    return;

  // reset
  valid_ =0;

  if (!pName_)
    return;

  // we need the 'b' for windows...
  if (!strncmp(pName_, "stdin", 5) || 
      !strncmp(pName_, "STDIN", 5) || 
      !strncmp(pName_, "-", 1))
    stream_ = gzdopen(dup(STDIN_FILENO), "rb");
  else 
    stream_ = gzopen(pName_, "rb");

  valid_ = stream_ ? 1 : 0;
}

