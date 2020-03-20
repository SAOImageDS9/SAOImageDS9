// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "attribute.h"
#include "widget.h"

Attribute::Attribute(Widget* p) : parent(p)
{
  style_ = SOLID;
  width_ = 1;

  font_ = 2; // helvetica normal roman
  size_ = 10;
  tkfont_ = NULL;
  psfont_ = NULL;
  initFonts();

  colour_ = 0xffffff; // white
  colorName_ = dupstr("white");
  color_ = parent->getColor("white");
}

Attribute::~Attribute()
{
  if (tkfont_)
    Tk_FreeFont(tkfont_);
  if (psfont_)
    Tk_FreeFont(psfont_);

  if (colorName_)
    delete [] colorName_;
}

void Attribute::setStyle(double v)
{
  switch ((int)v) {
  case SOLID:
  case DASH:
    break;
  default:
    return;
  }

  style_ = (Style)((int)v);
}

void Attribute::setWidth(double v)
{
  if (v>0)
    width_ = v;
  else
    width_ = 1;
}

void Attribute::setSize(double v)
{
  if (v >= 1) {
#ifdef MAC_OSX_TK
    size_ = int(v*parent->getDisplayRatio());
#else
    size_ = (int)v;
#endif
    initFonts();
  }
}

void Attribute::setFont(double v)
{
  font_ = (int)v;
  initFonts();
}

void Attribute::initFonts()
{
  if (tkfont_)
    Tk_FreeFont(tkfont_);
  tkfont_ = NULL;
  if (psfont_)
    Tk_FreeFont(psfont_);
  psfont_ = NULL;

  WidgetOptions* opts = parent->options;

  ostringstream fstr;
  ostringstream pstr;
  switch (font_) {
  case 0:
  case 2:
  case 3:
    fstr << '{' << opts->helvetica << '}' << ' ' << size_ << " normal roman" << ends;
    pstr << "helvetica " << size_ << " normal roman" << ends;
    break;
  case 1:
    fstr << '{' << opts->times << '}' << ' ' << size_ << " normal roman" << ends;
    pstr << "times " << size_ << " normal roman" << ends;
    break;
  case 4:
    fstr << '{' << opts->courier << '}' << ' ' << size_ << " normal roman" << ends;
    pstr << "courier " << size_ << " normal roman" << ends;
    break;

  case 10:
  case 12:
  case 13:
    fstr << '{' << opts->helvetica << '}' << ' ' << size_ << " bold roman" << ends;
    pstr << "helvetica " << size_ << " bold roman" << ends;
    break;
  case 11:
    fstr << '{' << opts->times << '}' << ' ' << size_ << " bold roman" << ends;
    pstr << "times " << size_ << " bold roman" << ends;
    break;
  case 14:
    fstr << '{' << opts->courier << '}' << ' ' << size_ << " bold roman" << ends;
    pstr << "courier " << size_ << " bold roman" << ends;
    break;

  case 20:
  case 22:
  case 23:
    fstr << '{' << opts->helvetica << '}' << ' ' << size_ << " normal italic" << ends;
    pstr << "helvetica " << size_ << " normal italic" << ends;
    break;
  case 21:
    fstr << '{' << opts->times << '}' << ' ' << size_ << " normal italic" << ends;
    pstr << "times " << size_ << " normal italic" << ends;
    break;
  case 24:
    fstr << '{' << opts->courier << '}' << ' ' << size_ << " normal italic" << ends;
    pstr << "courier " << size_ << " normal italic" << ends;
    break;

  case 30:
  case 32:
  case 33:
    fstr << '{' << opts->helvetica << '}' << ' ' << size_ << " bold italic" << ends;
    pstr << "helvetica " << size_ << " bold italic" << ends;
    break;
  case 31:
    fstr << '{' << opts->times << '}' << ' ' << size_ << " bold italic" << ends;
    pstr << "times " << size_ << " bold italic" << ends;
    break;
  case 34:
    fstr << '{' << opts->courier << '}' << ' ' << size_ << " bold italic" << ends;
    pstr << "courier " << size_ << " bold italic" << ends;
    break;

  default:
    fstr << '{' << opts->helvetica << '}' << ' ' << size_ << " normal roman" << ends;
    pstr << "helvetica " << size_ << " normal roman" << ends;
    font_ = 2;
    break;
  }

  tkfont_ = Tk_GetFont(parent->getInterp(), parent->getTkwin(), 
		       fstr.str().c_str());
  psfont_ = Tk_GetFont(parent->getInterp(), parent->getTkwin(), 
		       pstr.str().c_str());
}

void Attribute::setColour(double v)
{
  if (v == colour_)
    return;

  if (colorName_)
    delete [] colorName_;
  colorName_ = NULL;

  // still provide backward compatibility for old color scheme
  if (v==1)
    colour_ = (int)0xffffff; // white
  else if (v==2)
    colour_ = (int)0xff0000; // red
  else if (v==3)
    colour_ = (int)0x00ff00; // green
  else if (v==4)
    colour_ = (int)0x0000ff; // blue
  else if (v==5)
    colour_ = (int)0x00ffff; // cyan
  else if (v==6)
    colour_ = (int)0xff00ff; // magneta
  else if (v==7)
    colour_ = (int)0xffff00; // yellow
  else
    colour_ = (int)v;

  ostringstream str;
  str << '#' << setw(6) << setfill('0') << hex << colour_ << ends;
  colorName_ = dupstr(str.str().c_str());
  color_ = parent->getColor(str.str().c_str());
 }
