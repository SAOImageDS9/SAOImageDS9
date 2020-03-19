// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "frame3dtruecolor16.h"
#include "colorscaletrue16.h"

// Tk Canvas Widget Function Declarations

int Frame3dTrueColor16CreateProc(Tcl_Interp*, Tk_Canvas, Tk_Item*, int, Tcl_Obj *const []);

// Frame3dTrueColor16 Specs

static Tk_CustomOption tagsOption = {
  NULL, NULL, NULL
};

static Tk_ConfigSpec frame3dTrueColor16Specs[] = {
  {TK_CONFIG_STRING, (char*)"-command", NULL, NULL, "frame3d",
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

static Tk_ItemType frame3dTrueColor16Type = {
  (char*)"frame3dtruecolor16",           // name
  sizeof(WidgetOptions),        // item size
  Frame3dTrueColor16CreateProc,   // configProc
  frame3dTrueColor16Specs,        // configSpecs
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

int Frame3dTrueColor16_Init(Tcl_Interp* interp)
{
  tagsOption.parseProc = Tk_CanvasTagsParseProc;
  tagsOption.printProc = Tk_CanvasTagsPrintProc;

  Tk_CreateItemType(&frame3dTrueColor16Type);
  return TCL_OK;
}

int Frame3dTrueColor16CreateProc(Tcl_Interp* interp, Tk_Canvas canvas, 
			       Tk_Item* item, int argc, Tcl_Obj *const argv[])
{
  Frame3dTrueColor16* frame = new Frame3dTrueColor16(interp, canvas, item);

  // and set default configuration

  if (frame->configure(argc, (const char**)argv, 0) != TCL_OK) {
    delete frame;
    Tcl_AppendResult(interp, " error occured while creating frame.", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

// Frame3dTrueColor16 Member Functions

Frame3dTrueColor16::Frame3dTrueColor16(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item)
  : Frame3d(i,c,item), TrueColor16(visual)
{
  configSpecs = frame3dTrueColor16Specs;  // frame configure options
}

Frame3dTrueColor16::~Frame3dTrueColor16()
{
  // we must do this at this level, because updateColorScale is called
  unloadAllFits();
}

void Frame3dTrueColor16::updateColorScale()
{
  // we need colors before we can construct a scale
  if (!colorCells)
    return;

  if (colorScale)
    delete colorScale;

  switch (context->colorScaleType()) {
  case FrScale::LINEARSCALE:
    colorScale = 
      new LinearScaleTrueColor16(colorCount, colorCells, colorCount,
				 visual, byteorder_);
    break;
  case FrScale::LOGSCALE:
    colorScale =
      new LogScaleTrueColor16(SCALESIZE, colorCells, colorCount,
			      context->expo(), visual, byteorder_);
    break;
  case FrScale::POWSCALE:
    colorScale =
      new PowScaleTrueColor16(SCALESIZE, colorCells, colorCount,
			      context->expo(), visual, byteorder_);
    break;
  case FrScale::SQRTSCALE:
    colorScale =
      new SqrtScaleTrueColor16(SCALESIZE, colorCells, colorCount,
			       visual, byteorder_);
    break;
  case FrScale::SQUAREDSCALE:
    colorScale =
      new SquaredScaleTrueColor16(SCALESIZE, colorCells, colorCount,
				  visual, byteorder_);
    break;
  case FrScale::ASINHSCALE:
    colorScale =
      new AsinhScaleTrueColor16(SCALESIZE, colorCells, colorCount,
				visual, byteorder_);
    break;
  case FrScale::SINHSCALE:
    colorScale =
      new SinhScaleTrueColor16(SCALESIZE, colorCells, colorCount,
			       visual, byteorder_);
    break;
  case FrScale::HISTEQUSCALE:
    colorScale = 
      new HistEquScaleTrueColor16(SCALESIZE, colorCells, colorCount, 
				  context->histequ(), HISTEQUSIZE,
				  visual, byteorder_);
    break;
  case FrScale::IISSCALE:
    colorScale = 
      new IISScaleTrueColor16(colorCells, colorCount, visual, byteorder_);
    break;
  }
}
