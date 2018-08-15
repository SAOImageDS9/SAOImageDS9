// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __vectorstr_h__
#define __vectorstr_h__

#include <iostream>
using namespace std;

class VectorStr {
 public:
  char* c[2];

 public:
  VectorStr() {c[0]=NULL; c[1]=NULL;}
  ~VectorStr();
  VectorStr(const char*, const char*);
  VectorStr(const VectorStr&);
  VectorStr& operator=(const VectorStr&);

  const char* operator[](int i) const {return c[i];} // return element
  char** cc() {return c;} // return vector
};

ostream& operator<<(ostream&, const VectorStr&);
istream& operator>>(istream&, VectorStr&);

class VectorStr3d {
 public:
  char* c[3];

 public:
  VectorStr3d() {c[0]=NULL; c[1]=NULL; c[2]=NULL;}
  ~VectorStr3d();
  VectorStr3d(const char*, const char*, const char*);
  VectorStr3d(const VectorStr3d&);
  VectorStr3d& operator=(const VectorStr3d&);

  const char* operator[](int i) const {return c[i];} // return element
  char** cc() {return c;} // return vector
};

ostream& operator<<(ostream&, const VectorStr3d&);
istream& operator>>(istream&, VectorStr3d&);
#endif




