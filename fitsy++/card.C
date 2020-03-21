// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "card.h"

// only used to return pointer to internal string
char FitsCard::buf_[FTY_CARDLEN];

FitsCard::FitsCard()
{
  card_ = new char[FTY_CARDLEN];
  managed = 1;
}

FitsCard::FitsCard(char* c)
{
  card_ = c;
  managed = 0;
}

FitsCard::FitsCard(const FitsCard& a)
{
  card_ = new char[FTY_CARDLEN];
  managed = 1;
  memcpy(card_, a.card_, FTY_CARDLEN);
}

FitsCard::~FitsCard()
{
  if (managed)
    delete [] card_;
}

FitsCard& FitsCard::operator=(const FitsCard& a)
{
  memcpy(card_, a.card_, FTY_CARDLEN);
  return *this;
}

FitsCard& FitsCard::clear()
{
  memset(card_, ' ', FTY_CARDLEN);
  return *this;
}

FitsCard& FitsCard::setKey(const char* name)
{
  if (name) {
    memset(card_, ' ', 8);
    ostringstream str;
    str << name;
    memcpy(card_,str.str().c_str(),str.str().length());
  }

  return *this;
}

FitsCard& FitsCard::setLogical(const char* name, int value, 
			       const char* comment)
{
  setKey(name);
  memset(card_+8, ' ', FTY_CARDLEN-8);

  ostringstream str;
  str << "=                    " << (value ? 'T' : 'F');
  if (comment)
    str << " / " << comment;
  memcpy(card_+8,str.str().c_str(),str.str().length());

  return *this;
}

FitsCard& FitsCard::setInteger(const char* name, int value, 
			       const char* comment)
{
  setKey(name);
  memset(card_+8, ' ', FTY_CARDLEN-8);

  ostringstream str;
  str << "= " << setw(20) << value;
  if (comment)
    str << " / " << comment;
  memcpy(card_+8,str.str().c_str(),str.str().length());

  return *this;
}

FitsCard& FitsCard::setReal(const char* name, double value, 
			    int prec, const char* comment)
{
  setKey(name);
  memset(card_+8, ' ', FTY_CARDLEN-8);

  ostringstream str;
  str << "= " << setw(20) << setprecision(prec)
      << uppercase << value << nouppercase;
  if (comment)
    str << " / " << comment;
  memcpy(card_+8,str.str().c_str(),str.str().length());

  return *this;
}

FitsCard& FitsCard::setComplex(const char* name, double real, double img, 
			int prec, const char* comment)
{
  setKey(name);
  memset(card_+8, ' ', FTY_CARDLEN-8);

  ostringstream str;
  str << "= " << setw(20) << setprecision(prec) << real << img;
  if (comment)
    str << " / " << comment;
  memcpy(card_+8,str.str().c_str(),str.str().length());

  return *this;
}

FitsCard& FitsCard::setString(const char* name, const char* value, 
			      const char* comment)
{
  setKey(name);
  memset(card_+8, ' ', FTY_CARDLEN-8);

  ostringstream str;
  str << "= '" << value << '\'';
  if (comment)
    str << " / " << comment;
  memcpy(card_+8,str.str().c_str(),str.str().length());

  return *this;
}

FitsCard& FitsCard::setComment(const char* name, const char* value)
{
  setKey(name);
  memset(card_+8, ' ', FTY_CARDLEN-8);

  ostringstream str;
  str << "= " << value;
  memcpy(card_+8,str.str().c_str(),str.str().length());

  return *this;
}

int FitsCard::getLogical()
{
  for (int i=10; i<80; i++)
    if (card_[i] != ' ')
      return (card_[i] == 'T' || card_[i] == 't');

  return 0;
}

int FitsCard::getInteger()
{
  string x(card_+10,FTY_CARDLEN-10);
  istringstream str(x);
  int r;
  str >> r;
  return r;
}

double FitsCard::getReal()
{
  // support 'D' as well as 'E' format
  char buf[FTY_CARDLEN-10+1];
  memcpy(buf, card_+10, FTY_CARDLEN-10);
  buf[FTY_CARDLEN-10] = '\0';

  char* ptr = buf;
  while (*ptr && *ptr != '/') {
    if (*ptr == 'D' || *ptr == 'E') {
      *ptr = 'E';
      break;
    }
    ptr++;
  }

  string x(buf,FTY_CARDLEN-10);
  istringstream str(x);
  double r;
  str >> r;
  return r;
}

void FitsCard::getComplex(double* r, double* i)
{
  // support 'D' as well as 'E' format
  char buf[FTY_CARDLEN-10+1];
  memcpy(buf, card_+10, FTY_CARDLEN-10);
  buf[FTY_CARDLEN-10] = '\0';

  char* ptr = buf;
  while (*ptr && *ptr != '/') {
    if (*ptr == 'D' || *ptr == 'E') {
      *ptr = 'E';
    }
    ptr++;
  }

  string x(buf,FTY_CARDLEN-10);
  istringstream str(x);
  str >> *r >> *i;
}

char* FitsCard::getString()
{
  buf_[0] = '\0';
  buf_[FTY_CARDLEN-1] = '\0';

  int i,j;

  // find first '
  for (i=10; i<FTY_CARDLEN; i++)
    if (card_[i] == '\'')
      break;

  // now find last '
  i++;
  for (j=0; i<FTY_CARDLEN; i++,j++) {
    if (card_[i] == '\'') {
      if (i+1 == FTY_CARDLEN || card_[i+1] != '\'')
	break;
      else
	i++;
    }
    buf_[j] = card_[i];
  }

  // DON'T strip any spaces
  //  for (; j && buf_[j-1]==' '; j--);
  buf_[j] = '\0';

  return buf_;
}

char* FitsCard::getComment()
{
  char* cpy = new char[FTY_CARDLEN-7];
  memcpy(cpy, card_+8, FTY_CARDLEN-8);
  cpy[FTY_CARDLEN-8] = '\0';

  return cpy;
}

char* FitsCard::getKeyword()
{
  char value[FTY_CARDLEN];
  value[0] = '\0';

  int ii,jj;
  int str =0;

  for (ii=10; ii<FTY_CARDLEN; ii++) {
    if (card_[ii] != ' ') {
      if (card_[ii] == '\'' || card_[ii] == '\"') {
	str = 1;
	ii++;
      }
      break;
    }
  }

  for (jj=0; ii<FTY_CARDLEN; ii++,jj++) {
    if (!str) {
      if (card_[ii] == '/')
	break;
    }
    else {
      if (card_[ii] == '\'' || card_[ii] == '\"')
	break;
    }

    value[jj] = card_[ii];
  }

  // strip any spaces
  for (; jj && value[jj-1]==' '; jj--);
  value[jj] = '\0';

  // return result
  char* cpy = new char[strlen(value)+1];
  strcpy(cpy, value);
  return cpy;
}

