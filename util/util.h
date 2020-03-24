// Copyright (C) 1999-2020
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __util_h__
#define __util_h__

extern int lsb();

extern void internalError(const char*);

extern void swap2(char* src, char* dest);
extern void swap4(char* src, char* dest);
extern void swap8(char* src, char* dest);

extern char* dupstr(const char*);
extern char* trim(const char*);
extern char* toLower(const char*);
extern char* toUpper(const char*);
extern char* toConstLower(const char*);
extern char* toConstUpper(const char*);

#endif
