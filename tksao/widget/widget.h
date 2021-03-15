// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __widget_h__
#define __widget_h__

#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include <tk.h>

#include <X11/Xlib.h>
#include <X11/Xutil.h>

#include "vector.h"
#include "psutil.h"

class Attribute;

extern float psScale;

// General Defines

#define WIDGET(x) (*(((WidgetOptions*)(x))->widget))

// Widget ConfigSpecs Defines

#define CONFIGX       1
#define CONFIGY       2
#define CONFIGWIDTH   3
#define CONFIGHEIGHT  4
#define CONFIGANCHOR  5
#define CONFIGCOMMAND 6
#define CONFIGHELVETICA 7
#define CONFIGCOURIER 8
#define CONFIGTIMES 9

// Tk Canvas Widget Function Declarations

extern int WidgetConfigProc(Tcl_Interp*, Tk_Canvas, Tk_Item*, int, 
			    Tcl_Obj *const [],int);
extern int WidgetCoordProc(Tcl_Interp*, Tk_Canvas, Tk_Item*, int, Tcl_Obj *const []);
extern void WidgetDeleteProc(Tk_Canvas, Tk_Item*, Display*);
extern void WidgetDisplayProc(Tk_Canvas, Tk_Item*, Display*, Drawable, 
			      int, int, int, int);
extern double WidgetPointProc(Tk_Canvas, Tk_Item*, double*);
extern int WidgetAreaProc(Tk_Canvas, Tk_Item*, double*);
extern int WidgetPostscriptProc(Tcl_Interp*, Tk_Canvas, Tk_Item*, int);
extern void WidgetScaleProc(Tk_Canvas, Tk_Item*, double, double, 
			    double, double);
extern void WidgetTranslateProc(Tk_Canvas, Tk_Item*, double, double);
extern int WidgetIndexProc(Tcl_Interp*, Tk_Canvas, Tk_Item*, char, int*);
extern void WidgetICursorProc(Tk_Canvas, Tk_Item*, int);
extern int WidgetSelectionProc(Tk_Canvas, Tk_Item*, int, char*, int);
extern void WidgetInsertProc(Tk_Canvas, Tk_Item*, int, char*);
extern void WidgetDCharsProc(Tk_Canvas, Tk_Item*, int, int);

extern int WidgetParse(ClientData, Tcl_Interp*, int, char**);

class Widget;

// this structure is returned by each Canvas Function Proc

struct WidgetOptions {
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
};

// Widget Class

class Widget {
  friend class Attribute;

 public:
  Tcl_Interp* interp;         // Tcl interp

 protected:
  WidgetOptions* options;     // Pointer to Tk Options
  Tk_ConfigSpec* configSpecs; // configure specs
  Tk_Canvas canvas;           // handle to canvas
  Tk_Window tkwin;            // Tk window id

  Display* display;           // display of canvas
  Visual* visual;             // visual of canvas
  int depth;                  // depth of canvas
  int screenNumber;           // screen number of canvas

  Pixmap pixmap;              // size of canvas item
  GC widgetGC;                // gc for pixmap XCopyArea
  int visible;                // redraw when true

  int originX;                // widget upper left origin
  int originY;                // widget upper left origin

  char* cmd;                  // actual command name used
  int result;                 // result of TCL command

  int psResolution;          // postscript resolution
  int psLevel;               // postscript level
  PSColorSpace psColorSpace; // postscript color space

 protected:
  virtual int updatePixmap(const BBox&) =0; // render into pixmap
  virtual void invalidPixmap();  // pixmap is invalid
  virtual void reset() {};       // reset widget

  void clearPixmap();

  void createCommand();          // create tcl command
  void updateBBox();             // update item bounding box

  int checkArgs(int, int, char**); // check args utility

  void psHead1(ostream&, int, int);
  void psHead2(ostream&, int, int, const char*, const char*);
  Vector psOrigin();

 public:
  Widget(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~Widget();

  Tcl_Interp* getInterp() {return interp;}

  void redraw();                 // ping tk to redraw this widget
  void redraw(BBox);             // ping tk to redraw this bbox
  void redrawNow();              // force update now this widget
  void redrawNow(BBox);          // force update now this bbox

  virtual int parse(istringstream&) =0;           // parse subcommands

  virtual int configure(int, const char**, int); // parse config options
  void error(const char*);                     // parse error function
  void msg(const char*);                       // parse msg function

  Tk_Window getTkwin() {return tkwin;}
  Display* getDisplay() {return display;}
  double getDisplayRatio();
  Visual* getVisual() {return visual;}
  int getWidth() {return options->width;}
  int getHeight() {return options->height;}
  int getDepth() {return depth;}
  int getScreenNumber() {return screenNumber;}
  Tk_Canvas getCanvas() {return canvas;}

  int getColor(const char*);
  XColor* getXColor(const char*);

  void warp(Vector&);
  void warpTo(Vector&);
  int setClipRectangles(Display *d, GC gc, int x, int y,
			XRectangle* rects, int n, int order);

  Vector TkCanvasPs(const Vector&);
  void psColor(PSColorSpace mode, XColor* clr);

  // Required Canvas Functions
  int coordProc(int, char**);
  void displayProc(Drawable, int, int, int, int);
  double pointProc(double*);
  int areaProc(double*);
  virtual int postscriptProc(int);
  void scaleProc(double, double, double, double);
  void translateProc(double, double);
  virtual int indexProc(char indexString, int* indexPtr) {return TCL_OK;}
  virtual void icursorProc(int index) {}
  virtual int selectionProc(int offset, char* buffer, int maxBytes) 
    {return maxBytes;}
  virtual void insertProc(int index, char* string) {}
  virtual void dcharsProc(int first, int last) {}

  // Subcommand Functions
  int configCmd(int, const char**); // configure command
  void getHeightCmd();              // return height of widget
  void getWidthCmd();               // return width of widget
  void hideCmd();                   // hide item command
  void queryCursorCmd();            // get cursor coords
  void resetCmd();                  // reset item command
  void showCmd();                   // show item command

  // Postscript Commands
  void psLevelCmd(int l) {psLevel = l;}
  void psResolutionCmd(int r) {psResolution = r;}
  void psColorSpaceCmd(PSColorSpace c) {psColorSpace = c;}

#ifdef MAC_OSX_TK
  virtual void macsosxPrintCmd() {}
#endif
};

#endif

