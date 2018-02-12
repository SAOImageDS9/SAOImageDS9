// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __attribute_h__
#define __attribute_h__

#include <tk.h>

#include "vector.h"

class Widget;

class Attribute {
 public:
  enum Style {SOLID,DASH};
  enum Colour {BLACK,WHITE,RED,GREEN,BLUE,CYAN,MAGENTA,YELLOW};

 private:
  Widget* parent;

  Style style_;
  float width_;

  int font_;
  int size_;
  Tk_Font tkfont_;
  Tk_Font psfont_;

  unsigned long colour_; 
  char* colorName_;
  unsigned long color_;

 private:
  void initFonts();

 public:
  Attribute(Widget*);
  ~Attribute();

  void setStyle(double);
  void setWidth(double);

  void setSize(double);
  void setFont(double);

  void setColour(double);

  Style style() {return style_;}
  float width() {return width_;}

  int size() {return size_;}
  int font() {return font_;}
  Tk_Font tkfont() {return tkfont_;}
  Tk_Font psfont() {return psfont_;}

  unsigned long colour() {return colour_;}
  char* colorName() {return colorName_;}
  unsigned long color() {return color_;}
};

#endif
