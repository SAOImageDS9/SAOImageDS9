// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "sao.h"
#include "colorbar.h"

SAOColorMap* cm;

// SAO Parser Stuf
#undef yyFlexLexer
#define yyFlexLexer liFlexLexer
#include <FlexLexer.h>

void* lilval;
liFlexLexer* lilexx;
extern int liparse(SAOColorMap*, liFlexLexer*);

int lilex(void* vval, liFlexLexer* ll)
{
  lilval = vval;
  lilexx = ll;
  return ll ? ll->yylex() : 0;
}

void lierror(SAOColorMap* cm, liFlexLexer* ll, const char* m) {}

// LIColor
ostream& operator<<(ostream& s, LIColor& c)
{
  s << "(" << c.x << "," << c.y << ")";
  return s;
}

// SAOColorMap
SAOColorMap::SAOColorMap(Colorbar* p) : ColorMapInfo(p)
{
  current =&red;
}

void SAOColorMap::newLIColor(float aa, float bb)
{
  current->append(new LIColor(aa,bb));
}

void SAOColorMap::setChannel(ChannelType which)
{
  switch (which) {
  case RED:
    current = &red;
    break;
  case GREEN:
    current = &green;
    break;
  case BLUE:
    current = &blue;
    break;
  }
}

int SAOColorMap::load()
{
  ifstream str(filename_);
  if (!str)
    return 0;
  
  liFlexLexer* ll = new liFlexLexer(&str);
  liparse(this, ll);
  delete ll;

  if (red.isEmpty() || green.isEmpty() || blue.isEmpty())
    return 0;  // something is missing, bailout
  else
    return 1;  // we found at least one LIColor for each RGB
}

int SAOColorMap::load(const char* var)
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

  liFlexLexer* ll = new liFlexLexer(&istr);
  liparse(this, ll);
  delete ll;
  delete [] buf;

  if (red.isEmpty() || green.isEmpty() || blue.isEmpty())
    return 0;  // something is missing, bailout
  else
    return 1;  // we found at least one LIColor for each RGB
}

int SAOColorMap::save(const char* fn)
{
  ofstream fstr(fn);
  if (!fstr)
    return 0;
  fstr << *this;
  return 1;
}

int SAOColorMap::saveVar(const char* var)
{
  ostringstream str;
  str << *this;

  Tcl_SetVar(parent_->getInterp(), var, str.str().c_str(),
	     TCL_GLOBAL_ONLY | TCL_LEAVE_ERR_MSG);
  return 1;
}

unsigned char SAOColorMap::getColorChar(int i, int count, List<LIColor>* cc)
{
  float x = (float)i/count;

  LIColor* head = cc->head();
  LIColor* tail = NULL;

  while (head && (head->getX() < x))
    if (head) {
      tail = head;
      head = head->next();
    }

  if (tail && head) {       // interpolate between head and tail
    float m = (head->getY() - tail->getY()) / (head->getX() - tail->getX());
    if (m) {
      float y = m * (x - tail->getX()) + tail->getY(); //point slope form
      return (unsigned char)(y * UCHAR_MAX);
    }
    else
      return (unsigned char)(head->getY() * UCHAR_MAX);

  }
  else if (!tail && head)   // return first LIColor
    return (unsigned char)(head->getY() * UCHAR_MAX);

  else if (tail && !head)   // return last LIColor
    return (unsigned char)(tail->getY() * UCHAR_MAX);

  else
    return 0;               // there is something very wrong-- bail out
}

unsigned short SAOColorMap::getColorShrt(int i, int count, List<LIColor>* cc)
{
  float x = (float)i/count;

  LIColor* head = cc->head();
  LIColor* tail = NULL;

  while (head && (head->getX() < x))
    if (head) {
      tail = head;
      head = head->next();
    }

  if (tail && head) {       // interpolate between head and tail
    float m = (head->getY() - tail->getY()) / (head->getX() - tail->getX());
    if (m) {
      float y = m * (x - tail->getX()) + tail->getY(); //point slope form
      return (unsigned short)(y * USHRT_MAX);
    }
    else
      return (unsigned short)(head->getY() * USHRT_MAX);

  }
  else if (!tail && head)   // return first LIColor
    return (unsigned short)(head->getY() * USHRT_MAX);

  else if (tail && !head)   // return last LIColor
    return (unsigned short)(tail->getY() * USHRT_MAX);

  else
    return 0;               // there is something very wrong-- bail out
}

ostream& operator<<(ostream& str, SAOColorMap& c)
{
  str << "# SAOimage color table" << endl;
  str << "PSEUDOCOLOR" << endl;

  str << "RED:" << endl;
  c.red.head();
  do
    str << *c.red.current();
  while (c.red.next());
  str << endl;

  str << "GREEN:" << endl;
  c.green.head();
  do
    str << *c.green.current();
  while (c.green.next());
  str << endl;

  str << "BLUE:" << endl;
  c.blue.head();
  do
    str << *c.blue.current();
  while (c.blue.next());
  str << endl;

  return str;
}
