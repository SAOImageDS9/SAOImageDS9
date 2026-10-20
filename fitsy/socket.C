// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "socket.h"

FitsSocket::FitsSocket(int s, const char* ext)
{
  parse(ext);
  if (!valid_)
    return;

  stream_ = s;

  valid_ = stream_ ? 1 : 0;
}
