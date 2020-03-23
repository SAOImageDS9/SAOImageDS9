// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

// important note: needs to be included first as X11 defs are here

#ifndef __util_h__
#define __util_h__

#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#include <math.h>

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

extern int lsb();

extern void swap2(char* src, char* dest);
extern void swap4(char* src, char* dest);
extern void swap8(char* src, char* dest);

extern void internalError(const char*);

extern char* dupstr(const char*);
extern char* trim(const char*);
extern char* toLower(const char*);
extern char* toUpper(const char*);
extern char* toConstLower(const char*);
extern char* toConstUpper(const char*);

#endif
