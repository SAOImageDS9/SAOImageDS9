// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <stdio.h>
// FreeBSD
#include <unistd.h>
#include "alloc.h"

FitsAlloc::FitsAlloc(const char* fn)
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
    stream_ = fdopen(dup(fileno(stdin)), "rb");
  else 
    stream_ = fopen(pName_, "rb");

  valid_ = stream_ ? 1 : 0;
}


