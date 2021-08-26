// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarbase_h__
#define __colorbarbase_h__

#include "widget.h"

// Widget ConfigSpecs Defines

#define CONFIGORIENTATION 7
#define CONFIGSIZE 8
#define CONFIGFONT 9
#define CONFIGFONTSTYLE 10
#define CONFIGFONTSIZE 11
#define CONFIGNUMERICS 12
#define CONFIGSPACE 13
#define CONFIGTICKS 14
#define CONFIGCOLORS 15

// ColorbarBase

class CBGrid;
class Filter;
class ColorTag;

struct ColorbarBaseOptions {
  Tk_Item item;              // required by tk
  int x, y;                  // Coordinates of positioning point on canvas
  int width;                 // widget width
  int height;                // widget height
  Tk_Anchor anchor;          // Where to anchor widget relative to x,y
  char* cmdName;             // Suggested Tcl command name

  char* helvetica;           // name of X11 font
  char* courier;             // name of X11 font
  char* times;               // name of X11 font

  XColor* fgColor;
  XColor* bgColor;

  Widget* widget;            // pointer to widget class

  int orientation;           // 0-horizontal, 1-vertical
  int size;

  char* font;
  int fontSize;
  char* fontWeight;
  char* fontSlant;

  int numerics;
  int space;              // 0-distance (linear), 1-value (AST)
  int ticks;

  int colors;
};

class ColorbarBase : public Widget {
  friend class CBGrid;
  friend class ColorTag;

 protected:
  XImage* xmap;
  unsigned char* colorCells;
  int colorCount;

  CBGrid* grid;
  GC gridGC_;

  XRectangle rectWidget[1];
  XRectangle rectWindow[1];

  Matrix widgetToCanvas;
  Matrix canvasToWidget;
  Matrix widgetToWindow;
  Matrix windowToWidget;

  Matrix canvasToWindow;
  Matrix windowToCanvas;

  int cnt;
  double* lut;

  int invert;

  char** ticktxt;
  int tickcnt;
  int skipcnt;

 private:
  int initColormap();

  Tk_Font getFont();
  void lutToText(Tk_Font);

  void renderGrid();
  void renderGridNumerics();
  void renderGridAST();

  void ps();
  void psHV(ostream&, Filter&, int, int);
  void psGrid();
  void psGridNumerics();
  void psGridAST();

#ifdef MAC_OSX_TK
  void macosxGrid();
  void macosxGridNumerics();
  void macosxGridAST();
#endif

#ifdef __WIN32
  void win32Grid();
  void win32GridNumerics();
  void win32GridAST();
#endif

 protected:
  void updateGCs();
  void updateMatrices();
  void invalidPixmap();

  int postscriptProc(int);   // generate postscript
  virtual void psHorz(ostream&, Filter&, int, int) =0;
  virtual void psVert(ostream&, Filter&, int, int) =0;

  virtual void reset() =0;

  void updateColors();
  virtual void updateColorCells() =0;
  virtual void updateColorsHorz() =0;
  virtual void updateColorsVert() =0;

  int updatePixmap(const BBox&);

#ifdef MAC_OSX_TK
  virtual void macosx(float, int, int, const Vector&, const Vector&) =0;
#endif

#ifdef __WIN32
  virtual void win32(float, int, int, const Vector&, const Vector&) =0;
#endif

 public:
  ColorbarBase(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~ColorbarBase();

  virtual void adjustCmd(float, float) =0;

  int configure(int, const char* [], int);

  virtual void getBiasCmd() =0;
  virtual void getColorbarCmd() =0;
  virtual void getColormapCmd() =0;
  virtual void getColormapNameCmd(int) =0;
  virtual void getColormapFileNameCmd(int) =0;
  virtual void getColormapFileNameCmd(const char*) =0;
  virtual void getContrastCmd() =0;
  virtual void getCurrentFileNameCmd() =0;
  virtual void getCurrentIDCmd() =0;
  virtual void getCurrentNameCmd() =0;
  void getInvertCmd();
  virtual void getTypeCmd() =0;
  void getNumericsCmd();
  virtual void getRGBChannelCmd() =0;
  void getValueCmd(int,int);

  void invertCmd(int);

  virtual void listIDCmd() {}
  virtual void listNameCmd() {}
  virtual void loadCmd(const char*, const char*) {}
  virtual void loadCmd(const char*, const char*, const char*) {}

  virtual void mapCmd(char*) {}
  virtual void mapCmd(int) {}

  int parse(istringstream&);

  virtual void saveCmd(const char*) {}
  virtual void saveCmd(int, const char*) {}
  virtual void saveCmd(const char*, const char*) {}
  virtual void saveVarCmd(const char*, const char*) {}
  virtual void setColorbarCmd(int, float, float, int) {}
  virtual void setColorbarCmd(float, float, float, float, float, float, int) {}
  void setColormapLevelCmd();
  void setColormapLevelCmd(int, double*);
  virtual void setColormapWindowCmd(char*) {}
  virtual void setRGBChannelCmd(const char*) {}

  virtual void getTagCmd() {}
  virtual void getTagCmd(int,int) {}
  virtual void tagCmd(const char*) {}
  virtual void tagCmd(int, const Vector&, const char*) {}
  virtual void tagDeleteCmd() {}
  virtual void tagDeleteCmd(int,int) {}
  virtual void tagEditBeginCmd(int,int,const char*) {}
  virtual void tagEditMotionCmd(int,int) {}
  virtual void tagEditEndCmd(int,int) {}
  virtual void tagLoadCmd(const char*) {}
  virtual void tagSaveCmd(const char*) {}

#ifdef MAC_OSX_TK
  void macosxPrintCmd();
#endif

#ifdef __WIN32
  void win32PrintCmd();
#endif
};

#endif

