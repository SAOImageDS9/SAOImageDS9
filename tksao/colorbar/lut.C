// Copyright (C) 1999-200
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "lut.h"
#include "colorbar.h"

// LUT Parser Stuf
#undef yyFlexLexer
#define yyFlexLexer rgbFlexLexer
#include <FlexLexer.h>

void* rgblval;
rgbFlexLexer* rgblexx;
extern int rgbparse(LUTColorMap*, rgbFlexLexer*);

int rgblex(void* vval, rgbFlexLexer* ll)
{
  rgblval = vval;
  rgblexx = ll;
  return ll ? ll->yylex() : 0;
}

void rgberror(LUTColorMap* cm, rgbFlexLexer* ll, const char* m) {}

// RGBColor
istream& operator>>(istream& str, RGBColor& cc)
{
  str >> cc.red_ >> cc.green_ >> cc.blue_;
  return str;
}

ostream& operator<<(ostream& str, RGBColor& cc)
{
  str.setf(ios::fixed, ios::floatfield);
  str << setw(8) << setprecision(6) 
      << cc.red_ << " " << cc.green_ << " " << cc.blue_ << endl;
  return str;
}

// LUTColorMap

LUTColorMap::LUTColorMap(Colorbar* p) : ColorMapInfo(p)
{
}

void LUTColorMap::newRGBColor(float r, float g, float b)
{
  colors.append(new RGBColor(r,g,b));
}

int LUTColorMap::load()
{
  ifstream str(filename_);
  if (!str)
    return 0;
  
  rgbFlexLexer* ll = new rgbFlexLexer(&str);
  rgbparse(this, ll);
  delete ll;

  if (colors.isEmpty())
    return 0;  // bailout
  else
    return 1;  // we found at least one RGBColor
}

int LUTColorMap::load(const char* var)
{
  const char* ccmd = Tcl_GetVar(parent_->getInterp(), var,
				TCL_GLOBAL_ONLY | TCL_LEAVE_ERR_MSG);
  if (!ccmd)
    return 0;

  // only make command string as long as needed
  // or the rest will be processed as garbage
  int len = strlen(ccmd)+2;
  char* buf = new char[len];
  memcpy(buf, ccmd, len);

  // add terminator to make parser happy
  buf[len-2] = '\n';
  buf[len-1] = '\0';

  string x(buf);
  istringstream istr(x);

  rgbFlexLexer* ll = new rgbFlexLexer(&istr);
  rgbparse(this, ll);
  delete ll;
  delete [] buf;

  if (colors.isEmpty())
    return 0;  // bailout
  else
    return 1;  // we found at least one RGBColor
}

int LUTColorMap::save(const char* fn)
{
  ofstream fstr(fn);
  if (!fstr)
    return 0;
  fstr << *this;
  return 1;
}

int LUTColorMap::saveVar(const char* var)
{
  ostringstream str;
  str << *this;

  Tcl_SetVar(parent_->getInterp(), var, str.str().c_str(),
	     TCL_GLOBAL_ONLY | TCL_LEAVE_ERR_MSG);
  return 1;
}

unsigned char LUTColorMap::getRedChar(int ii, int count)
{
  int size = colors.count();
  int index = (int)((ii*size/count) + .5);
  if (index>=0 && index<size)
    return (unsigned char)(colors[index]->red() * UCHAR_MAX);
  else
    return 0;
}

unsigned char LUTColorMap::getGreenChar(int ii, int count)
{
  int size = colors.count();
  int index = (int)((ii*size/count) + .5);
  if (index>=0 && index<size)
    return (unsigned char)(colors[index]->green() * UCHAR_MAX);
  else
    return 0;
}

unsigned char LUTColorMap::getBlueChar(int ii, int count)
{
  int size = colors.count();
  int index = (int)((ii*size/count) + .5);
  if (index>=0 && index<size)
    return (unsigned char)(colors[index]->blue() * UCHAR_MAX);
  else
    return 0;
}

unsigned short LUTColorMap::getRedShrt(int ii, int count)
{
  int size = colors.count();
  int index = (int)((ii*size/count) + .5);
  if (index >=0 && index < size)
    return (unsigned short)(colors[index]->red() * USHRT_MAX);
  else
    return 0;
}

unsigned short LUTColorMap::getGreenShrt(int ii, int count)
{
  int size = colors.count();
  int index = (int)((ii*size/count) + .5);
  if (index>=0 && index<size)
    return (unsigned short)(colors[index]->green() * USHRT_MAX);
  else
    return 0;
}

unsigned short LUTColorMap::getBlueShrt(int ii, int count)
{
  int size = colors.count();
  int index = (int)((ii*size/count) + .5);
  if (index>=0 && index<size)
    return (unsigned short)(colors[index]->blue() * USHRT_MAX);
  else
    return 0;
}

ostream& operator<<(ostream& str, LUTColorMap& cc)
{
  cc.colors.head();
  do
    str << *cc.colors.current();
  while (cc.colors.next());
  return str;
}
