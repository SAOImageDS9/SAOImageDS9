// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colormap_h__
#define __colormap_h__

#include <string.h>
#include <stdlib.h>
#include <limits.h>

#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
using namespace std;

class Colorbar;

// ColorMapInfo

class ColorMapInfo {
protected:
  Colorbar* parent_;

  int id_;
  char* name_;
  char* filename_;
  ColorMapInfo* next_;
  ColorMapInfo* previous_;

public:
  ColorMapInfo(Colorbar* p);
  virtual ~ColorMapInfo();

  Colorbar* parent() {return parent_;}

  int id() {return id_;}
  const char* name() {return name_;}
  const char* filename() {return filename_;}
  void setName(const char*);
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
  virtual int saveVar(const char*) =0;

  virtual unsigned char getRedChar(int, int) =0;
  virtual unsigned char getGreenChar(int, int) =0;
  virtual unsigned char getBlueChar(int, int) =0;

  virtual unsigned short getRedShrt(int, int) =0;
  virtual unsigned short getGreenShrt(int, int) =0;
  virtual unsigned short getBlueShrt(int, int) =0;
};

#endif

