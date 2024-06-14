// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "colorbarhlstruecolor8.h"

// Tk Canvas Widget Function Declarations

int ColorbarHLSTrueColor8CreateProc(Tcl_Interp*, Tk_Canvas, Tk_Item*, int,
				    Tcl_Obj *const []);

// Colorbar Specs

static Tk_CustomOption tagsOption = {
  NULL, NULL, NULL
};

static Tk_ConfigSpec colorbarHLSTrueColor8Specs[] = {
  {TK_CONFIG_STRING, (char*)"-command", NULL, NULL, "colorbarhls",
   Tk_Offset(ColorbarBaseOptions, cmdName), 
   TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-x", NULL, NULL, "1",
   Tk_Offset(ColorbarBaseOptions, x), 
   TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-y", NULL, NULL, "1",
   Tk_Offset(ColorbarBaseOptions, y), 
   TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-width", NULL, NULL, "512",
   Tk_Offset(ColorbarBaseOptions, width), 
   TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-height", NULL, NULL, "22",
   Tk_Offset(ColorbarBaseOptions, height), 
   TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_ANCHOR, (char*)"-anchor", NULL, NULL, "nw",
   Tk_Offset(ColorbarBaseOptions, anchor), 0, NULL},
  {TK_CONFIG_CUSTOM, (char*)"-tags", NULL, NULL, NULL,
   0, TK_CONFIG_NULL_OK, &tagsOption},

  {TK_CONFIG_STRING, (char*)"-helvetica", NULL, NULL, "helvetica",
   Tk_Offset(ColorbarBaseOptions, helvetica), 0, NULL},
  {TK_CONFIG_STRING, (char*)"-courier", NULL, NULL, "courier",
   Tk_Offset(ColorbarBaseOptions, courier), 0, NULL},
  {TK_CONFIG_STRING, (char*)"-times", NULL, NULL, "times",
   Tk_Offset(ColorbarBaseOptions, times), 0, NULL},

  {TK_CONFIG_SYNONYM, "-bg", "background", NULL, NULL, 0, 0, NULL},
  {TK_CONFIG_COLOR, "-background", "background", "Background", "white",
   Tk_Offset(ColorbarBaseOptions, bgColor), 0, NULL},
  {TK_CONFIG_SYNONYM, "-fg", "foreground", NULL, NULL, 0, 0, NULL},
  {TK_CONFIG_COLOR, "-foreground", "foreground", "Foreground", "black",
   Tk_Offset(ColorbarBaseOptions, fgColor), 0, NULL},

  {TK_CONFIG_BOOLEAN, (char*)"-orientation", NULL, NULL, "0",
   Tk_Offset(ColorbarBaseOptions, orientation), 0, NULL},
  {TK_CONFIG_INT, (char*)"-size", NULL, NULL, "20",
   Tk_Offset(ColorbarBaseOptions, size), 0, NULL},

  {TK_CONFIG_STRING, (char*)"-font", NULL, NULL, "helvetica",
   Tk_Offset(ColorbarBaseOptions, font), 0, NULL},
  {TK_CONFIG_INT, (char*)"-fontsize", NULL, NULL, "10",
   Tk_Offset(ColorbarBaseOptions, fontSize), 0, NULL},
  {TK_CONFIG_STRING, (char*)"-fontweight", "fontweight", NULL, "normal",
   Tk_Offset(ColorbarBaseOptions, fontWeight), 0, NULL},
  {TK_CONFIG_SYNONYM, (char*)"-fontstyle", "fontweight", NULL, NULL, 0, 0},
  {TK_CONFIG_STRING, (char*)"-fontslant", NULL, NULL, "roman",
   Tk_Offset(ColorbarBaseOptions, fontSlant), 0, NULL},

  {TK_CONFIG_BOOLEAN, (char*)"-numerics", NULL, NULL, "1",
   Tk_Offset(ColorbarBaseOptions, numerics), 0, NULL},
  {TK_CONFIG_BOOLEAN, (char*)"-space", NULL, NULL, "1",
   Tk_Offset(ColorbarBaseOptions, space), 0, NULL},
  {TK_CONFIG_INT, (char*)"-ticks", NULL, NULL, "11",
   Tk_Offset(ColorbarBaseOptions, ticks), 0, NULL},

  {TK_CONFIG_INT, (char*)"-colors", NULL, NULL, "1024",
   Tk_Offset(ColorbarBaseOptions, colors), 0, NULL},

  {TK_CONFIG_END, NULL, NULL, NULL, NULL, 0, 0, NULL},
};

// Tk Static Structure

static Tk_ItemType colorbarHLSTrueColor8Type = {
  (char*)"colorbarhlstruecolor8",        // name
  sizeof(ColorbarBaseOptions), // size
  ColorbarHLSTrueColor8CreateProc, // configProc
  colorbarHLSTrueColor8Specs,     // configSpecs
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
  (Tk_ItemCursorProc*)NULL,     // icursorProc
  (Tk_ItemSelectionProc*)NULL,  // selectionProc
  (Tk_ItemInsertProc*)NULL,     // insertProc
  (Tk_ItemDCharsProc*)NULL,     // dCharsProc
  (Tk_ItemType*)NULL            // nextPtr
};

// Non-Member Functions

int ColorbarHLSTrueColor8_Init(Tcl_Interp* interp)
{
  tagsOption.parseProc = Tk_CanvasTagsParseProc;
  tagsOption.printProc = Tk_CanvasTagsPrintProc;

  Tk_CreateItemType(&colorbarHLSTrueColor8Type);
  return TCL_OK;
}

int ColorbarHLSTrueColor8CreateProc(Tcl_Interp* interp, Tk_Canvas canvas, 
				    Tk_Item* item, int argc, 
				    Tcl_Obj *const argv[])
{
  ColorbarHLSTrueColor8* colorbar = 
    new ColorbarHLSTrueColor8(interp, canvas, item);

  // and set default configuration
  if (colorbar->configure(argc, (const char**)argv, 0) != TCL_OK) {
    delete colorbar;
    Tcl_AppendResult(interp, " error occured while creating colorbar.", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

// ColorbarHLSTrueColor8

ColorbarHLSTrueColor8::ColorbarHLSTrueColor8(Tcl_Interp* i, Tk_Canvas c, 
					     Tk_Item* item)
: ColorbarT(i,c,item), ColorbarHLS(i,c,item), ColorbarTTrueColor8(i,c,item)
{
  configSpecs = colorbarHLSTrueColor8Specs;  // colorbar configure options
  loadDefaultCmaps();
}
