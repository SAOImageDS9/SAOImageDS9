// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tkInt.h>

#include "pannertrue.h"
#include "util.h"

// Tk Canvas Widget Function Declarations

int PannerTrueColorCreateProc(Tcl_Interp*, Tk_Canvas, Tk_Item*, int, 
			      Tcl_Obj *const []);

// PannerTrueColor Specs

static Tk_CustomOption tagsOption = {
  NULL, NULL, NULL
};

static Tk_ConfigSpec pannerTrueColorSpecs[] = {

  {TK_CONFIG_STRING, (char*)"-command", NULL, NULL, "panner",
   Tk_Offset(WidgetOptions, cmdName), TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-x", NULL, NULL, "1",
   Tk_Offset(WidgetOptions, x), TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-y", NULL, NULL, "1",
   Tk_Offset(WidgetOptions, y), TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-width", NULL, NULL, "256",
   Tk_Offset(WidgetOptions, width), TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-height", NULL, NULL, "256",
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

static Tk_ItemType pannerTrueColorType = {
  (char*)"pannertruecolor",            // name
  sizeof(WidgetOptions),        // size
  PannerTrueColorCreateProc,    // configProc
  pannerTrueColorSpecs,         // configSpecs
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

int PannerTrueColor_Init(Tcl_Interp* interp)
{
  tagsOption.parseProc = Tk_CanvasTagsParseProc;
  tagsOption.printProc = Tk_CanvasTagsPrintProc;

  Tk_CreateItemType(&pannerTrueColorType);
  return TCL_OK;
}

int PannerTrueColorCreateProc(Tcl_Interp* interp, Tk_Canvas canvas, 
			      Tk_Item* item, int argc, Tcl_Obj *const argv[])
{
  PannerTrueColor* panner = new PannerTrueColor(interp, canvas, item);

  // and set default configuration

  if (panner->configure(argc, (const char**)argv, 0) != TCL_OK) {
    delete panner;
    Tcl_AppendResult(interp, " error occured while creating pannerTrueColor.",
		     NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

PannerTrueColor::PannerTrueColor(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item)
  : Panner(i, c, item)
{
  configSpecs = pannerTrueColorSpecs;  // panner configure options
}
