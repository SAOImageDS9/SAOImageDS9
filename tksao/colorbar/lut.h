// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __lut_h__
#define __lut_h__

#include "colormap.h"
#include "list.h"

// RGBColor
class RGBColor {
private:
  float red_;
  float green_;
  float blue_;
  RGBColor* next_;
  RGBColor* previous_;

public:
  RGBColor() {red_=green_=blue_=0;}
  RGBColor(float r, float g, float b) {red_=r; green_=g; blue_=b;}
  RGBColor(const RGBColor& a) {
    red_=a.red_; green_=a.green_; blue_=a.blue_; 
    next_=a.next_; previous_=a.previous_;
  }
  RGBColor& operator=(const RGBColor& a) {
    red_=a.red_; green_=a.green_; blue_=a.blue_; 
    next_=a.next_; previous_=a.previous_; return *this;
  }

  RGBColor* next() 
  {return next_;}
  RGBColor* previous()
  {return previous_;}
  void setNext(RGBColor* n) 
  {next_ = n;}
  void setPrevious(RGBColor* p)
  {previous_=p;}

  float red() {return red_;}
  float green() {return green_;}
  float blue() {return blue_;}

  friend istream& operator>>(istream&, RGBColor&);
  friend ostream& operator<<(ostream&, RGBColor&);
};

// LUTColorMap
class LUTColorMap : public ColorMapInfo {
protected:
  List<RGBColor> colors;

public:
  LUTColorMap(Colorbar* p);

  ColorMapInfo* dup() {return new LUTColorMap(*this);}
  int load();
  int load(const char* var);
  int save(const char*);
  int saveVar(const char*);

  unsigned char getRedChar(int, int);
  unsigned char getGreenChar(int, int);
  unsigned char getBlueChar(int, int);

  unsigned short getRedShrt(int, int);
  unsigned short getGreenShrt(int, int);
  unsigned short getBlueShrt(int, int);

  void newRGBColor(float,float,float);

  friend ostream& operator<<(ostream&, LUTColorMap&);
};

#endif

