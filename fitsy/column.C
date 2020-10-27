// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include <float.h>

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include "column.h"
#include "file.h"
#include "head.h"
#include "util.h"

FitsColumn::FitsColumn(FitsHead* head, int i, int off)
{
  index_ = i;
  width_ = 0;
  offset_ = off;
  type_ = ' ';
  repeat_ = 1;

  tform_ = dupstr(head->getString(keycat("TFORM",i)));
  ttype_ = dupstr(head->getString(keycat("TTYPE",i)));
  tunit_ = dupstr(head->getString(keycat("TUNIT",i)));
  tscal_ = head->getReal(keycat("TSCAL",i), 1);
  tzero_ = head->getReal(keycat("TZERO",i), 0);
  hastnull_ = head->find(keycat("TNULL",i)) ? 1:0;
  tnull_ = head->getInteger(keycat("TNULL",i), 0);

  char* td = head->find(keycat("TDMAX",i));
  char* tl = head->find(keycat("TLMAX",i));
  char* ta = head->find(keycat("TALEN",i));
  char* ax = head->find(keycat("AXLEN",i));

  // this provides backward compatibility
  if (td) {
    hastlmin_ = head->find(keycat("TDMIN",i)) ? 1:0;
    hastlmax_ = 1;
    tlmin_ = head->getReal(keycat("TDMIN",i), 0);
    tlmax_ = head->getReal(keycat("TDMAX",i), 0);
  }
  else if (tl) {
    hastlmin_ = head->find(keycat("TLMIN",i)) ? 1:0;
    hastlmax_ = 1;
    tlmin_ = head->getReal(keycat("TLMIN",i), 0);
    tlmax_ = head->getReal(keycat("TLMAX",i), 0);
  }
  else if (ta) {
    hastlmin_ = 0;
    hastlmax_ = 1;
    tlmin_ = 1;
    tlmax_ = head->getReal(keycat("TALEN",i), 0);
  }
  else if (ax) {
    hastlmin_ = 0;
    hastlmax_ = 1;
    tlmin_ = 1;
    tlmax_ = head->getReal(keycat("AXLEN",i), 0);
  }
  else {
    hastlmin_ = 0;
    hastlmax_ = 0;
    tlmin_ = 0;
    tlmax_ = 0;
  }

  // now, make sure they are valid
  if (tlmin_>tlmax_) {
    hastlmin_ = 0;
    hastlmax_ = 0;
    tlmin_ = 0;
    tlmax_ = 0;
  }

  // use tlmin/tlmax if available
  if (hastlmin_ || hastlmax_) {
    min_ = tlmin_;
    max_ = tlmax_;
  }
  else {
    min_ = -DBL_MAX;
    max_ = DBL_MAX;
  }
}

FitsColumn::~FitsColumn()
{
  if (tform_)
    delete [] tform_;
  if (tunit_)
    delete [] tunit_;
  if (ttype_)
    delete [] ttype_;
}

char* FitsColumn::str(const char* ptr, int i)
{
  buf_[0] = '\0';
  return buf_;
}

char* FitsColumn::keycat(const char* name, int i)
{
  ostringstream str;
  str << name << i << ends;
  memcpy(keybuf,str.str().c_str(),str.str().length());
  return keybuf;
}

// FitsAsciiColumn

FitsAsciiColumn::FitsAsciiColumn(FitsHead* head, int i, int offset)
  : FitsColumn(head, i, offset)
{
  int tbcol = head->getInteger(keycat("TBCOL",i),0);
  if (tbcol)
    offset_ = tbcol-1;
}

char* FitsAsciiColumn::str(const char* ptr, int i)
{
  strncpy(buf_, ptr+offset_, width_);
  buf_[width_] = '\0';
  return buf_;
}

FitsAsciiColumnStr::FitsAsciiColumnStr(FitsHead* head, int i, int offset)
  : FitsAsciiColumn(head, i, offset) 
{
  if (tform_) {
    string x(tform_);
    istringstream str(x);
    str >> type_ >> width_;
  }
}

FitsAsciiColumnA::FitsAsciiColumnA(FitsHead* head, int i, int offset)
  : FitsAsciiColumn(head, i, offset) 
{
  prec_ = 0;

  if (tform_) {
    char s;
    string x(tform_);
    istringstream str(x);
    str >> type_ >> width_ >> s >> prec_;
  }
}

double FitsAsciiColumnA::value(const char* ptr, int i)
{
  string x(ptr+offset_);
  istringstream str(x);
  double r;
  str >> r;

  return r;
}

template<class T> FitsAsciiColumnT<T>::FitsAsciiColumnT(FitsHead* head,
							int i, int off)
  : FitsAsciiColumnA(head, i, off) {}

template <> int FitsAsciiColumnT<int>::isInt() {return 1;}

template <> Vector FitsAsciiColumnT<int>::dimension()
{
  return (hastlmin_ || hastlmax_) ? Vector(tlmin_,tlmax_) 
    : Vector(INT_MIN,INT_MAX);
}

template <> int FitsAsciiColumnT<float>::isInt() {return 0;}

template <> Vector FitsAsciiColumnT<float>::dimension()
{
  return (hastlmin_ || hastlmax_) ? Vector(tlmin_,tlmax_) 
    : Vector(-FLT_MAX,FLT_MAX);
}

template <> int FitsAsciiColumnT<double>::isInt() {return 0;}

template <> Vector FitsAsciiColumnT<double>::dimension()
{
  return (hastlmin_ || hastlmax_) ? Vector(tlmin_,tlmax_) 
    : Vector(-DBL_MAX,DBL_MAX);
}

// FitsBinColumn

FitsBinColumn::FitsBinColumn(FitsHead* head, int i, int offset)
  : FitsColumn(head, i, offset)
{
  tdisp_ = dupstr(head->getString(keycat("TDISP",i)));

  if (tform_) {
    string x(tform_);
    istringstream str(x);
    if (isalpha(tform_[0]))
      str >> type_;
    else
      str >> repeat_ >> type_;
  }

  tdim_ = dupstr(head->getString(keycat("TDIM",i)));
  tdimM_ =0;
  tdimK_ =NULL;
  char dummy;
  if (tdim_) {
    string x(tdim_);
    istringstream str(x);
    str >> dummy >> tdimM_;
    if (tdimM_>0) {
      tdimK_ = new int[tdimM_];
      for (int ii=0; ii<tdimM_; ii++)
	str >> dummy >> tdimK_[ii];
    }
  }
}

FitsBinColumn::~FitsBinColumn()
{
  if (tdisp_)
    delete [] tdisp_;

  if (tdim_)
    delete [] tdim_;

  if (tdimK_)
    delete [] tdimK_;
}

// FitsBinColumnStr

FitsBinColumnStr::FitsBinColumnStr(FitsHead* head, int i, int offset)
  : FitsBinColumn(head, i, offset)
{
  width_ = repeat_;
}

char* FitsBinColumnStr::str(const char* ptr, int i)
{
  strncpy(buf_, ptr+offset_, width_);
  buf_[width_] = '\0';
  return buf_;
}

// FitsbinColumnBit

FitsBinColumnBit::FitsBinColumnBit(FitsHead* head, int i, int off)
  : FitsBinColumn(head, i, off)
{
  width_ = (repeat_+7)/8;
}

char* FitsBinColumnBit::str(const char* ptr, int i)
{
  ostringstream ost;
  ost << showbase << internal << setfill('0') << hex << uppercase;
  if (repeat_ <= 8) {
    unsigned char vv = *(ptr+offset_+i);
    if (vv)
      ost << setw(4) << (unsigned short)vv << ends;
    else
      ost << "0X00" << ends;
  }
  else if (repeat_ > 8 && repeat_ <= 16) {
    unsigned short vv = *(ptr+offset_+i);
    if (vv)
      ost << setw(6) << vv << ends;
    else
      ost << "0X0000" << ends;
  }
  else if (repeat_ > 16 && repeat_ <= 32) {
    unsigned long vv = *(ptr+offset_+i);
    if (vv)
      ost << setw(10) << vv << ends;
    else
      ost << "0X00000000" << ends;
  }
  else {
    unsigned long long vv = *(ptr+offset_+i);
    if (vv)
      ost << setw(18) << vv << ends;
    else
      ost << "0X0000000000000000" << ends;
  }
  return (char*)dupstr(ost.str().c_str());
}

// FitsBinColumnLogical

FitsBinColumnLogical::FitsBinColumnLogical(FitsHead* head, int i, int offset)
  : FitsBinColumn(head, i, offset)
{
  width_ = repeat_;
}

char* FitsBinColumnLogical::str(const char* ptr, int i)
{
  strncpy(buf_, ptr+offset_+i, 1);
  buf_[width_] = '\0';
  return buf_;
}

// FitsBinColumnArray

FitsBinColumnArray::FitsBinColumnArray(FitsHead* head, int i, int offset)
  : FitsBinColumn(head, i, offset)
{
  ptype_ = ' ';
  psize_ = 1;
  pmax_ = 1;
  abuf_ = NULL;

  byteswap_ = lsb();

  if (tform_) {
    int rr;
    char tt;
    string x(tform_);
    istringstream str(x);
    if (isalpha(tform_[0]))
      str >> tt;
    else
      str >> rr >> tt;

    char s;
    str >> ptype_ >> s >> pmax_ >> s;

    switch (ptype_) {
    case 'L':
      psize_ = 1;
      break;
    case 'X':
      psize_ = 1;
      break;
    case 'B':
      psize_ = 1;
      break;
    case 'I':
      psize_ = 2;
      break;
    case 'J':
      psize_ = 4;
      break;
    case 'K':
      psize_ = 8;
      break;
    case 'A':
      psize_ = 1;
      break;
    case 'E':
      psize_ = 4;
      break;
    case 'D':
      psize_ = 8;
      break;
    case 'C':
      psize_ = 8;
      break;
    case 'M':
      psize_ = 16;
      break;

    default:
      internalError("Fitsy++ column unknown table column type.");
      return;
    }

    // sanity check
    pmax_ *= psize_;

    if (pmax_ > 0)
      abuf_ = new char[pmax_];
  }
}

FitsBinColumnArray::~FitsBinColumnArray()
{
  if (abuf_)
    delete [] abuf_;
}

void* FitsBinColumnArray::get(const char* heap, const char* ptr, int* cnt)
{
  *cnt = swap(ptr,0);
  if (*cnt > pmax_) {
    // just in case
    internalError("Fitsy++ column variable array size greater than specified");
    *cnt = pmax_;
  }
  size_t pp = swap(ptr,1);

  if (abuf_) {
    memset(abuf_,0,pmax_);
    memcpy(abuf_,heap+pp,(*cnt)*psize_);
  }

  return abuf_;
}

FitsBinColumnArrayP::FitsBinColumnArrayP(FitsHead* head, int i, int offset)
  : FitsBinColumnArray(head, i, offset)
{
  width_ = 8;
}

int FitsBinColumnArrayP::swap(const char* ptr, int i)
{
  const char* p = ptr+offset_+i*4;
  union {
    char c[4];
    int i;
  } u;

  if (byteswap_) {
    u.c[3] = *p++;
    u.c[2] = *p++;
    u.c[1] = *p++;
    u.c[0] = *p;
  }
  else
    memcpy(u.c,p,4);

  return u.i;
}

FitsBinColumnArrayQ::FitsBinColumnArrayQ(FitsHead* head, int i, int offset)
  : FitsBinColumnArray(head, i, offset)
{
  width_ = 16;
}

int FitsBinColumnArrayQ::swap(const char* ptr, int i)
{
  const char* p = ptr+offset_+i*8;
  union {
    char c[8];
    long l;
  } u;

  if (byteswap_) {
    u.c[7] = *p++;
    u.c[6] = *p++;
    u.c[5] = *p++;
    u.c[4] = *p++;
    u.c[3] = *p++;
    u.c[2] = *p++;
    u.c[1] = *p++;
    u.c[0] = *p;
  }
  else
    memcpy(u.c,p,8);

  return u.l;
}

// FitsBinColumnB

FitsBinColumnB::FitsBinColumnB(FitsHead* head, int i, int offset)
  : FitsBinColumn(head, i, offset)
{
  byteswap_ = lsb();
}

// FitsBinColumnT

template<class T> FitsBinColumnT<T>::FitsBinColumnT(FitsHead* head,
						    int i, int off)
  : FitsBinColumnB(head, i, off)
{
  width_ = repeat_ * sizeof(T);
}

template<class T> char* FitsBinColumnT<T>::str(const char* ptr, int i)
{
  ostringstream ost;
  ost << setprecision(13) << value(ptr,i) << ends;
  return (char*)dupstr(ost.str().c_str());
}

// unsigned char

template <> int FitsBinColumnT<unsigned char>::isInt() {return 1;}
  
template <> Vector FitsBinColumnT<unsigned char>::dimension()
{
  return (hastlmin_ || hastlmax_) ? Vector(tlmin_-.5,tlmax_+.5) 
    : Vector(0,UCHAR_MAX);
}

template <> double FitsBinColumnT<unsigned char>::value(const char* ptr, int i)
{
  return (unsigned char)(*(ptr+offset_+i));
}

// short

template <> int FitsBinColumnT<short>::isInt() {return 1;}

template <> Vector FitsBinColumnT<short>::dimension()
{
  return (hastlmin_ || hastlmax_) ? Vector(tlmin_-.5,tlmax_+.5) 
    : Vector(SHRT_MIN,SHRT_MAX);
}

template <> double FitsBinColumnT<short>::value(const char* ptr, int i)
{
  const char* p = ptr+offset_+i*2;
  union {
    char c[2];
    short s;
  } u;

  if (byteswap_) {
    u.c[1] = *p++;
    u.c[0] = *p;
  }
  else {
    u.c[0] = *p++;
    u.c[1] = *p;
  }

  return u.s;
}

// unsigned short

template <> int FitsBinColumnT<unsigned short>::isInt() {return 1;}

template <> Vector FitsBinColumnT<unsigned short>::dimension()
{
  return (hastlmin_ || hastlmax_) ? Vector(tlmin_-.5,tlmax_+.5) 
    : Vector(0,USHRT_MAX);
}

template <> double FitsBinColumnT<unsigned short>::value(const char* ptr, int i)
{
  const char* p = ptr+offset_+i*2;
  union {
    char c[2];
    unsigned short s;
  } u;

  if (byteswap_) {
    u.c[1] = *p++;
    u.c[0] = *p;
  }
  else {
    u.c[0] = *p++;
    u.c[1] = *p;
  }

  return u.s;
}

// int

template <> int FitsBinColumnT<int>::isInt() {return 1;}

template <> Vector FitsBinColumnT<int>::dimension()
{
  return (hastlmin_ || hastlmax_) ? Vector(tlmin_-.5,tlmax_+.5) 
    : Vector(INT_MIN,INT_MAX);
}

template <> double FitsBinColumnT<int>::value(const char* ptr, int i)
{
  const char* p = ptr+offset_+i*4;
  union {
    char c[4];
    int i;
  } u;

  if (byteswap_) {
    u.c[3] = *p++;
    u.c[2] = *p++;
    u.c[1] = *p++;
    u.c[0] = *p;
  }
  else
    memcpy(u.c,p,4);

  return u.i;
}

// unsigned int

template <> int FitsBinColumnT<unsigned int>::isInt() {return 1;}

template <> Vector FitsBinColumnT<unsigned int>::dimension()
{
  return (hastlmin_ || hastlmax_) ? Vector(tlmin_-.5,tlmax_+.5) 
    : Vector(0,UINT_MAX);
}

template <> double FitsBinColumnT<unsigned int>::value(const char* ptr, int i)
{
  const char* p = ptr+offset_+i*4;
  union {
    char c[4];
    unsigned int i;
  } u;

  if (byteswap_) {
    u.c[3] = *p++;
    u.c[2] = *p++;
    u.c[1] = *p++;
    u.c[0] = *p;
  }
  else
    memcpy(u.c,p,4);

  return u.i;
}

// some older versions of gcc do not have LLONG
#ifndef LLONG_MIN
#  ifdef LONG_LONG_MIN
#    define LLONG_MIN LONG_LONG_MIN
#  else
#    define LLONG_MIN LONG_MIN
#  endif
#endif

#ifndef LLONG_MAX
#  ifdef LONG_LONG_MAX
#    define LLONG_MAX LONG_LONG_MAX
#  else
#    define LLONG_MAX LONG_MAX
#  endif
#endif

// long long

template <> int FitsBinColumnT<long long>::isInt() {return 1;}

template <> Vector FitsBinColumnT<long long>::dimension()
{
  return (hastlmin_ || hastlmax_) ? Vector(tlmin_-.5,tlmax_+.5) 
    : Vector(LLONG_MIN,LLONG_MAX);
}

template <> double FitsBinColumnT<long long>::value(const char* ptr, int i)
{
  const char* p = ptr+offset_+i*8;
  union {
    char c[8];
    long long i;
  } u;

  if (byteswap_) {
    u.c[7] = *p++;
    u.c[6] = *p++;
    u.c[5] = *p++;
    u.c[4] = *p++;
    u.c[3] = *p++;
    u.c[2] = *p++;
    u.c[1] = *p++;
    u.c[0] = *p;
  }
  else
    memcpy(u.c,p,8);

  return u.i;
}

// float

template <> int FitsBinColumnT<float>::isInt() {return 0;}

template <> Vector FitsBinColumnT<float>::dimension()
{
  return (hastlmin_ || hastlmax_) ? Vector(tlmin_,tlmax_) 
    : Vector(-FLT_MAX,FLT_MAX);
}

template <> double FitsBinColumnT<float>::value(const char* ptr, int i)
{
  const char* p = ptr+offset_+i*4;
  union {
    char c[4];
    float f;
  } u;

  if (byteswap_) {
    u.c[3] = *p++;
    u.c[2] = *p++;
    u.c[1] = *p++;
    u.c[0] = *p;
  }
  else
    memcpy(u.c,p,4);

  return u.f;
}

// double

template <> int FitsBinColumnT<double>::isInt() {return 0;}

template <> Vector FitsBinColumnT<double>::dimension()
{
  return (hastlmin_ || hastlmax_) ? Vector(tlmin_,tlmax_) 
    : Vector(-DBL_MAX,DBL_MAX);
}

template <> double FitsBinColumnT<double>::value(const char* ptr, int i)
{
  const char* p = ptr+offset_+i*8;
  union {
    char c[8];
    double d;
  } u;

  if (byteswap_) {
    u.c[7] = *p++;
    u.c[6] = *p++;
    u.c[5] = *p++;
    u.c[4] = *p++;
    u.c[3] = *p++;
    u.c[2] = *p++;
    u.c[1] = *p++;
    u.c[0] = *p;
  }
  else
    memcpy(u.c,p,8);

  return u.d;
}

template class FitsAsciiColumnT<int>;
template class FitsAsciiColumnT<float>;
template class FitsAsciiColumnT<double>;

template class FitsBinColumnT<unsigned char>;
template class FitsBinColumnT<short>;
template class FitsBinColumnT<unsigned short>;
template class FitsBinColumnT<int>;
template class FitsBinColumnT<unsigned int>;
template class FitsBinColumnT<long long>;
template class FitsBinColumnT<float>;
template class FitsBinColumnT<double>;
