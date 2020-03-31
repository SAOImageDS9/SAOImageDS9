// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colortag_h__
#define __colortag_h__

#include <tk.h>

class Colorbar;

class ColorTag {
protected:
  int id_;
  Colorbar* parent_;

  const char* colorname_;
  XColor* color_;

  int start_;
  int stop_;

  ColorTag* next_;
  ColorTag* previous_;

public:
  ColorTag(Colorbar*, int, int, const char*);
  virtual ~ColorTag();

  int id() {return id_;}
  Colorbar* parent() {return parent_;}

  int start() {return start_;}
  int stop() {return stop_;}
  const char* colorname() {return colorname_;}
  void move(int,int);
  void set(int,int,const char*);
  void width(int);

  unsigned short colorRed() {return color_ ? color_->red : 0;}
  unsigned short colorGreen() {return color_ ? color_->green : 0;}
  unsigned short colorBlue() {return color_ ? color_->blue : 0;}

  ColorTag* next() {return next_;}
  ColorTag* previous() {return previous_;}
  void setNext(ColorTag* n) {next_ = n;}
  void setPrevious(ColorTag* p) {previous_=p;}
};

#endif

