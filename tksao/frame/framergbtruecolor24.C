// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "framergbtruecolor24.h"
#include "fitsimage.h"

// Tk Canvas Widget Function Declarations

int FrameRGBTrueColor24CreateProc(Tcl_Interp*, Tk_Canvas, Tk_Item*, int, 
				  Tcl_Obj *const []);

// FrameRGBTrueColor24 Specs

static Tk_CustomOption tagsOption = {
  NULL, NULL, NULL
};

static Tk_ConfigSpec frameRGBTrueColor24Specs[] = {
  {TK_CONFIG_STRING, (char*)"-command", NULL, NULL, "framergb",
   Tk_Offset(WidgetOptions, cmdName), TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-x", NULL, NULL, "1",
   Tk_Offset(WidgetOptions, x), TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-y", NULL, NULL, "1",
   Tk_Offset(WidgetOptions, y), TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-width", NULL, NULL, "512",
   Tk_Offset(WidgetOptions, width), TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-height", NULL, NULL, "512",
   Tk_Offset(WidgetOptions, height), TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_ANCHOR, (char*)"-anchor", NULL, NULL, "nw",
   Tk_Offset(WidgetOptions, anchor), 0, NULL},
  {TK_CONFIG_CUSTOM, (char*)"-tags", NULL, NULL, NULL,
   0, TK_CONFIG_NULL_OK, &tagsOption},

  {TK_CONFIG_STRING, (char*)"-helvetica", NULL, NULL, "helvetica",
   Tk_Offset(WidgetOptions, helvetica), 0, NULL},
  {TK_CONFIG_STRING, (char*)"-courier", NULL, NULL, "courier",
   Tk_Offset(WidgetOptions, courier), 0, NULL},
  {TK_CONFIG_STRING, (char*)"-times", NULL, NULL, "times",
   Tk_Offset(WidgetOptions, times), 0, NULL},

  {TK_CONFIG_SYNONYM, "-bg", "background", NULL, NULL, 0, 0, NULL},
  {TK_CONFIG_COLOR, "-background", "background", "Background", "white",
   Tk_Offset(WidgetOptions, bgColor), 0, NULL},
  {TK_CONFIG_SYNONYM, "-fg", "foreground", NULL, NULL, 0, 0, NULL},
  {TK_CONFIG_COLOR, "-foreground", "foreground", "Foreground", "black",
   Tk_Offset(WidgetOptions, fgColor), 0, NULL},

  {TK_CONFIG_END, NULL, NULL, NULL, NULL, 0, 0, NULL},
};

// Tk Static Structure

static Tk_ItemType frameRGBTrueColor24Type = {
  (char*)"framergbtruecolor24",           // name
  sizeof(WidgetOptions),        // item size
  FrameRGBTrueColor24CreateProc,   // configProc
  frameRGBTrueColor24Specs,        // configSpecs
  WidgetConfigProc,             // configProc
  WidgetCoordProc,              // coordProc
  WidgetDeleteProc,             // deleteProc
  WidgetDisplayProc,            // displayProc
  0,                            // alwaysRedraw
  WidgetPointProc,              // pointProc
  WidgetAreaProc,               // areaProc
  WidgetPostscriptProc,         // postscriptProc
  WidgetScaleProc,              // scaleProc
  WidgetTranslateProc,          // translateProc
  (Tk_ItemIndexProc*)NULL,      // indexProc
  WidgetICursorProc,            // icursorProc
  (Tk_ItemSelectionProc*)NULL,  // selectionProc
  (Tk_ItemInsertProc*)NULL,     // insertProc
  (Tk_ItemDCharsProc*)NULL,     // dCharsProc
  (Tk_ItemType*)NULL            // nextPtr
};

// Non-Member Functions

int FrameRGBTrueColor24_Init(Tcl_Interp* interp)
{
  tagsOption.parseProc = Tk_CanvasTagsParseProc;
  tagsOption.printProc = Tk_CanvasTagsPrintProc;

  Tk_CreateItemType(&frameRGBTrueColor24Type);
  return TCL_OK;
}

int FrameRGBTrueColor24CreateProc(Tcl_Interp* interp, Tk_Canvas canvas, 
				  Tk_Item* item, int argc, 
				  Tcl_Obj *const argv[])
{
  FrameRGBTrueColor24* frame = new FrameRGBTrueColor24(interp, canvas, item);

  // and set default configuration

  if (frame->configure(argc, (const char**)argv, 0) != TCL_OK) {
    delete frame;
    Tcl_AppendResult(interp, " error occured while creating frame.", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

// FrameRGBTrueColor24 Member Functions

FrameRGBTrueColor24::FrameRGBTrueColor24(Tcl_Interp* i, Tk_Canvas c, 
					 Tk_Item* item)
  : FrameRGB(i, c, item), TrueColor24(visual)
{
  configSpecs = frameRGBTrueColor24Specs;  // frame configure options
}

FrameRGBTrueColor24::~FrameRGBTrueColor24()
{
  // we must do this at this level, because updateColorScale is called
  unloadAllFits();
}





