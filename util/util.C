// Copyright (C) 1999-2020
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include <tcl.h>

#include "util.h"

void internalError(const char* msg)
{
  extern Tcl_Interp *global_interp;
  Tcl_SetVar2(global_interp, "ds9", "msg", msg, TCL_GLOBAL_ONLY);
  Tcl_SetVar2(global_interp, "ds9", "msg,level", "error", TCL_GLOBAL_ONLY);
}

void swap2(char* src, char* dest) {
  *(dest  ) = *(src+1);
  *(dest+1) = *(src  );
}

void swap4(char* src, char* dest) {
  *(dest  ) = *(src+3);
  *(dest+1) = *(src+2);
  *(dest+2) = *(src+1);
  *(dest+3) = *(src  );
}

void swap8(char* src, char* dest) {
  *(dest  ) = *(src+7);
  *(dest+1) = *(src+6);
  *(dest+2) = *(src+5);
  *(dest+3) = *(src+4);
  *(dest+4) = *(src+3);
  *(dest+5) = *(src+2);
  *(dest+6) = *(src+1);
  *(dest+7) = *(src  );
}

int lsb()
{
  return (*(short *)"\001\000" & 0x0001);
}

char* dupstr(const char* str)
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

char* trim(const char* str)
{
  char* rr = dupstr(str);
  char* ptr = rr;
  while (ptr && *ptr)
    ptr++;
  ptr--;
  while (ptr && (*ptr == ' '))
    ptr--;
  ptr++;
  *ptr = '\0';

  return rr;
}

char* toLower(const char* str)
{
  char* rr = dupstr(str);
  char* ptr = rr;
  while (*ptr) {
    *ptr = (char)(tolower(((int)(*ptr))));
    ptr++;
  }
  return rr;
}

char* toUpper(const char* str)
{
  char* rr = dupstr(str);
  char* ptr = rr;
  while (*ptr) {
    *ptr = (char)(toupper(((int)(*ptr))));
    ptr++;
  }
  return rr;
}

static char tobuf[1024];

char* toConstLower(const char* str)
{
  strncpy(tobuf,str,1024);
  char* ptr = tobuf;
  while (*ptr) {
    *ptr = (char)(tolower(((int)(*ptr))));
    ptr++;
  }
  return tobuf;
}

char* toConstUpper(const char* str)
{
  strncpy(tobuf,str,1024);
  char* ptr = tobuf;
  while (*ptr) {
    *ptr = (char)(toupper(((int)(*ptr))));
    ptr++;
  }
  return tobuf;
}
