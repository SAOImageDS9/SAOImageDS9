// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colormap_h__
#define __colormap_h__

#include <string.h>
#include <stdlib.h>
#include <limits.h>

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

class Colorbar;

// ColorMapInfo

class ColorMapInfo {
protected:
  Colorbar* parent_;

  int id;
  char* name;
  char* fileName;
  ColorMapInfo* next_;
  ColorMapInfo* previous_;

public:
  ColorMapInfo(Colorbar* p);
  virtual ~ColorMapInfo();

  Colorbar* parent() {return parent_;}

  const char* getName() {return name;}
  int getID() {return id;}
  void setName(const char*);
  const char* getFileName() {return fileName;}
  void setFileName(const char*);
  
  ColorMapInfo* next() 
  {return next_;}
  ColorMapInfo* previous()
  {return previous_;}
  void setNext(ColorMapInfo* n) 
  {next_ = n;}
  void setPrevious(ColorMapInfo* p)
  {previous_=p;}

  virtual ColorMapInfo* dup() =0;
  virtual int load() =0;
  virtual int load(const char*) =0;
  virtual int save(const char*) =0;

  virtual unsigned char getRedChar(int, int) =0;
  virtual unsigned char getGreenChar(int, int) =0;
  virtual unsigned char getBlueChar(int, int) =0;

  virtual unsigned short getRedShrt(int, int) =0;
  virtual unsigned short getGreenShrt(int, int) =0;
  virtual unsigned short getBlueShrt(int, int) =0;
};

#endif

