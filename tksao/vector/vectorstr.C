// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "vectorstr.h"
#include "vector.h"
#include "util.h"

// VectorStr

VectorStr::~VectorStr()
{
  if (c[0])
    delete [] c[0];
  if (c[1])
    delete [] c[1];
}

VectorStr::VectorStr(const char* aa, const char* bb)
{
  c[0] = dupstr(aa);
  c[1] = dupstr(bb);
}

VectorStr::VectorStr(const VectorStr& vv)
{
  c[0] = dupstr(vv.c[0]);
  c[1] = dupstr(vv.c[1]);
}

VectorStr& VectorStr::operator=(const VectorStr& vv)
{
  if (c[0])
    delete [] c[0];
  c[0]=dupstr(vv.c[0]);
  if (c[1])
    delete [] c[1];
  c[1]=dupstr(vv.c[1]);
  return *this;
}

ostream& operator<<(ostream& os, const VectorStr& vv)
{
  unsigned char sep = (unsigned char)os.iword(Vector::separator);
  if (!sep)
    sep = ' ';

  unsigned char unit = (unsigned char)os.iword(Vector::unit);
  if (!unit)
    os << vv.c[0] << sep << vv.c[1];
  else
    os << vv.c[0] << unit << sep << vv.c[1] << unit;

  // reset unit
  os.iword(Vector::unit) = '\0';

  return os;
}

istream& operator>>(istream& ss, VectorStr& vv)
{
  ss >> vv.c[0] >> vv.c[1];
  return ss;
}
