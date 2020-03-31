// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "cbgrid.h"
#include "colorbarbase.h"

extern "C" {
  #include "ast.h"
}

extern Grid2dBase* astGrid2dPtr;

CBGrid::CBGrid(Widget* p, int cc, double* ll) 
  : Grid2dBase(p), cnt_(cc), lut_(ll)
{
  ColorbarBaseOptions* opts = 
    (ColorbarBaseOptions*)(((ColorbarBase*)parent_)->options);

  ostringstream str;

  // basics
  str << "Grid=0, DrawAxes=0, MinTickLen(1)=0, MinTickLen(2)=0, Width(ticks)=.5, Style(ticks)=0, Border=1, Width(border)=.5, Style(border)=0, Labelling=exterior, Colour(numlab)=0, TextLab=0, DrawTitle=0";

  str << ", Colour(ticks)=0, Colour(border)=0";

  if (!opts->orientation) {
    // horizontal
    str << ", Edge(1)=top, Edge(2)=left, LabelUp(1)=1, MajTickLen(1)=-.15, MajTickLen(2)=0, NumLab(1)=1, NumLab(2)=0, NumLabGap(1)=.5";
  }
  else {
    // vertical
    str << ", Edge(1)=bottom, Edge(2)=right, LabelUp(2)=1, MajTickLen(1)=0, MajTickLen(2)=-.15, NumLab(1)=0, NumLab(2)=1, NumLabGap(2)=.5";
  }

  // font
  {
    char* fn = opts->font;
    int fz = opts->fontSize;
    char* fw = opts->fontWeight;
    char* fs = opts->fontSlant;
    int ff;
    if (!(strncmp(fn,"times",4) || strncmp(fw,"normal",4) || strncmp(fs,"roman",4)))
      ff = 1;
    else if (!(strncmp(fn,"helvetica",4) || strncmp(fw,"normal",4) || strncmp(fs,"roman",4)))
      ff = 2;
    else if (!(strncmp(fn,"courier",4) || strncmp(fw,"normal",4) || strncmp(fs,"roman",4)))
      ff = 4;
    else if (!(strncmp(fn,"times",4) || strncmp(fw,"bold",4) || strncmp(fs,"roman",4)))
      ff = 11;
    else if (!(strncmp(fn,"helvetica",4) || strncmp(fw,"bold",4) || strncmp(fs,"roman",4)))
      ff = 12;
    else if (!(strncmp(fn,"courier",4) || strncmp(fw,"bold",4) || strncmp(fs,"roman",4)))
      ff = 14;
    else if (!(strncmp(fn,"times",4) || strncmp(fw,"normal",4) || strncmp(fs,"italic",4)))
      ff = 21;
    else if (!(strncmp(fn,"helvetica",4) || strncmp(fw,"normal",4) || strncmp(fs,"italic",4)))
      ff = 22;
    else if (!(strncmp(fn,"courier",4) || strncmp(fw,"normal",4) || strncmp(fs,"italic",4)))
      ff = 24;
    else if (!(strncmp(fn,"times",4) || strncmp(fw,"bold",4) || strncmp(fs,"italic",4)))
      ff = 31;
    else if (!(strncmp(fn,"helvetica",4) || strncmp(fw,"bold",4) || strncmp(fs,"italic",4)))
      ff = 32;
    else if (!(strncmp(fn,"courier",4) || strncmp(fw,"bold",4) || strncmp(fs,"italic",4)))
      ff = 34;
    else
      ff = 1;
    str << ", Font(numlab)=" << ff << ", Size(numlab)=" << fz << ends;
  }

  option_ = dupstr(str.str().c_str());
}

int CBGrid::render()
{
  pixmap_ = ((ColorbarBase*)parent_)->pixmap;
  gridGC_ = ((ColorbarBase*)parent_)->gridGC_;
  return doit(X11);
}

int CBGrid::ps(PSColorSpace mode, int x, int y)
{
  matrix_ =  Translate(x,y);
  mode_ = mode;

  return doit(PS);
}

#ifdef MAC_OSX_TK
int CBGrid::macosx(int x, int y)
{
  matrix_ =  Translate(x,y);

  return doit(MACOSX);
}
#endif

#ifdef __WIN32
int CBGrid::win32(int x, int y)
{
  matrix_ =  Translate(x,y);

  return doit(GWIN32);
}
#endif

int CBGrid::doit(RenderMode rm)
{
  ColorbarBaseOptions* opts = 
    (ColorbarBaseOptions*)(((ColorbarBase*)parent_)->options);

  astClearStatus; // just to make sure
  astBegin; // start memory management

  AstFrameSet* frameSet = NULL;
  AstCmpMap* cmp = NULL;
  AstLutMap* aa = NULL;
  AstUnitMap* bb = NULL;
  AstPlot* plot = NULL;

  if (!(frameSet = astFrameSet(astFrame(2,"Domain=WIDGET"),"")))
    goto error;

  if (!(bb = astUnitMap(1,"")))
    goto error;

  if (!opts->orientation) {
    if (!(aa = astLutMap(cnt_, lut_, 0, double(opts->width)/(cnt_-1), "")))
      goto error;
    if (!(cmp = astCmpMap(aa, bb, 0, "")))
      goto error;
  }
  else {
    if (!(aa = astLutMap(cnt_, lut_, 0, double(opts->height)/(cnt_-1), "")))
      goto error;
    if (!(cmp = astCmpMap(bb, aa, 0, "")))
      goto error;
  }

  astAddFrame(frameSet, AST__CURRENT, cmp, astFrame(2, "Domain=LUT"));

  astSet(frameSet,"Title=%s", " ");

  if (0) {
    int status = astStatus;
    astClearStatus;
    astShow(frameSet);
    astSetStatus(status);
  }

  // create astPlot
  float gbox[4];
  double pbox[4];

  int ww,hh,zz;
  if (!opts->orientation) {
    ww = opts->width;
    hh = opts->size;
  }
  else {
    ww = opts->size;
    hh = opts->height;
  }
  zz =0;

  switch (rm) {
  case X11:
    ww -= 1;
    hh -= 1;
    break;
  case PS:
    zz = 1;
    break;
  case MACOSX:
    break;
  case GWIN32:
    break;
  }

  if (!opts->orientation) {
    gbox[0] = pbox[0] = 0;
    gbox[1] = pbox[1] = zz;
    gbox[2] = pbox[2] = ww;
    gbox[3] = pbox[3] = hh;
  }
  else {
    gbox[0] = 0;
    gbox[1] = zz;
    gbox[2] = ww;
    gbox[3] = hh;

    pbox[0] = zz;
    pbox[1] = hh;
    pbox[2] = ww;
    pbox[3] = 0;
  }

  plot = astPlot(frameSet, gbox, pbox, option_);

  // and now create astGrid
  astGrid2dPtr = this;
  renderMode_ = rm;
  astGrid(plot);

  astEnd; // now, clean up memory
  return 1;

error:
  astEnd;
  return 0;
}
