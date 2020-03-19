// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include "vectorstr.h"
#include "vector.h"
#include "vector3d.h"

static char* dupstr(const char* str)
{
  char* copy;
  if (str) {
    copy=new char[strlen(str)+1];
    strcpy(copy,str);
  }
  else
    copy=NULL;

  return copy;
}

int parseSection(char* lbuf, Vector* v1, Vector* v2)
{
  double x1, y1, x2, y2;
  char d1,d2,d3,d4,d5; // dummy char
  string x(lbuf);
  istringstream str(x);
  str >> d1 >> x1 >> d2 >> x2 >> d3 >> y1 >> d4 >> y2 >> d5;

  // verify input
  if (!(d1=='[' && d2==':' && d3==',' && d4==':' && d5==']'))
    return 0;

  // it looks ok
  *v1 = Vector(x1,y1);
  *v2 = Vector(x2,y2);

  return 1;
}

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

VectorStr::VectorStr(const Vector& vv)
{
  ostringstream str0;
  str0 << vv[0];
  c[0] = dupstr(str0.str().c_str());

  ostringstream str1;
  str1 << vv[1];
  c[1] = dupstr(str1.str().c_str());
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

VectorStr& VectorStr::operator=(const Vector& vv)
{
  if (c[0])
    delete [] c[0];
  ostringstream str0;
  str0 << vv[0];
  c[0] = dupstr(str0.str().c_str());

  if (c[1])
    delete [] c[1];
  ostringstream str1;
  str1 << vv[1];
  c[1] = dupstr(str1.str().c_str());

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

// VectorStr3d

VectorStr3d::~VectorStr3d()
{
  if (c[0])
    delete [] c[0];
  if (c[1])
    delete [] c[1];
  if (c[2])
    delete [] c[2];
}

VectorStr3d::VectorStr3d(const char* aa, const char* bb, const char* cc)
{
  c[0] = dupstr(aa);
  c[1] = dupstr(bb);
  c[2] = dupstr(cc);
}

VectorStr3d::VectorStr3d(const VectorStr3d& vv)
{
  c[0] = dupstr(vv.c[0]);
  c[1] = dupstr(vv.c[1]);
  c[2] = dupstr(vv.c[2]);
}

VectorStr3d::VectorStr3d(const Vector3d& vv)
{
  ostringstream str0;
  str0 << vv[0];
  c[0] = dupstr(str0.str().c_str());

  ostringstream str1;
  str1 << vv[1];
  c[1] = dupstr(str1.str().c_str());

  ostringstream str2;
  str2 << vv[2];
  c[2] = dupstr(str2.str().c_str());
}

VectorStr3d& VectorStr3d::operator=(const VectorStr3d& vv)
{
  if (c[0])
    delete [] c[0];
  c[0]=dupstr(vv.c[0]);

  if (c[1])
    delete [] c[1];
  c[1]=dupstr(vv.c[1]);

  if (c[2])
    delete [] c[2];
  c[2]=dupstr(vv.c[2]);

  return *this;
}

VectorStr3d& VectorStr3d::operator=(const Vector3d& vv)
{
  if (c[0])
    delete [] c[0];
  ostringstream str0;
  str0 << vv[0];
  c[0] = dupstr(str0.str().c_str());

  if (c[1])
    delete [] c[1];
  ostringstream str1;
  str1 << vv[1];
  c[1] = dupstr(str1.str().c_str());

  if (c[2])
    delete [] c[2];
  ostringstream str2;
  str2 << vv[2];
  c[2] = dupstr(str2.str().c_str());

  return *this;
}

ostream& operator<<(ostream& os, const VectorStr3d& vv)
{
  unsigned char sep = (unsigned char)os.iword(Vector::separator);
  if (!sep)
    sep = ' ';

  unsigned char unit = (unsigned char)os.iword(Vector::unit);
  if (!unit)
    os << vv.c[0] << sep << vv.c[1] << sep << vv.c[2];
  else
    os << vv.c[0] << unit << sep << vv.c[1] << unit << sep << vv.c[2] << unit;

  // reset unit
  os.iword(Vector::unit) = '\0';

  return os;
}
