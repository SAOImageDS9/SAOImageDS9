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
#endif




