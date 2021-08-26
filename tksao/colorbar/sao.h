// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __sao_h__
#define __sao_h__

#include "colormap.h"
#include "list.h"

class Colorbar;

// LIColor
class LIColor {
 private:
  float x;
  float y;
  LIColor* next_;
  LIColor* previous_;

 public:
  LIColor()
    {x=0; y=0; next_=NULL; previous_=NULL;}
  LIColor(float ll, float ii)
    {x=ll; y=ii, next_=NULL; previous_=NULL;}

  LIColor(const LIColor& a) 
    {x=a.x; y=a.y; next_=a.next_; previous_=a.previous_;}
  LIColor& operator=(const LIColor& a)
    {x=a.x; y=a.y; next_=a.next_; previous_=a.previous_; return *this;}
 
  LIColor* next() 
  {return next_;}
  LIColor* previous()
  {return previous_;}
  void setNext(LIColor* n) 
  {next_ = n;}
  void setPrevious(LIColor* p)
  {previous_=p;}

  float getX() {return x;}
  float getY() {return y;}

  friend ostream& operator<<(ostream&, LIColor&);
};

// SAOColorMap
class SAOColorMap : public ColorMapInfo {
 public:
  enum ChannelType {RED,GREEN,BLUE};

protected:
  List<LIColor> red;
  List<LIColor> green;
  List<LIColor> blue;
  List<LIColor>* current;

protected:
  unsigned char getColorChar(int, int, List<LIColor>*);
  unsigned short getColorShrt(int, int, List<LIColor>*);

public:
  SAOColorMap(Colorbar* p);

  ColorMapInfo* dup() {return new SAOColorMap(*this);}
  int load();
  int load(const char* var);
  int save(const char*);
  int saveVar(const char*);

  unsigned char getRedChar(int i, int c) {return getColorChar(i,c,&red);}
  unsigned char getGreenChar(int i, int c) {return getColorChar(i,c,&green);}
  unsigned char getBlueChar(int i, int c) {return getColorChar(i,c,&blue);}

  unsigned short getRedShrt(int i, int c) {return getColorShrt(i,c,&red);}
  unsigned short getGreenShrt(int i, int c) {return getColorShrt(i,c,&green);}
  unsigned short getBlueShrt(int i, int c) {return getColorShrt(i,c,&blue);}

  void setChannel(ChannelType);
  void newLIColor(float,float);

  friend ostream& operator<<(ostream&, SAOColorMap&);
};

#endif

