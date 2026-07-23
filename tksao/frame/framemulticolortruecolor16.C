// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "framemulticolortruecolor16.h"

int FrameMultiColorTrueColor16CreateProc(Tcl_Interp*, Tk_Canvas, Tk_Item*,
					 Tcl_Size, Tcl_Obj *const []);

static Tk_CustomOption tagsOption = {
  NULL, NULL, NULL
};

static Tk_ConfigSpec frameMultiColorTrueColor16Specs[] = {
  {TK_CONFIG_STRING, (char*)"-command", NULL, NULL, "framemulticolor",
   offsetof(WidgetOptions, cmdName), 0, NULL},
  {TK_CONFIG_INT, (char*)"-x", NULL, NULL, "1",
   offsetof(WidgetOptions, x), 0, NULL},
  {TK_CONFIG_INT, (char*)"-y", NULL, NULL, "1",
   offsetof(WidgetOptions, y), 0, NULL},
  {TK_CONFIG_INT, (char*)"-width", NULL, NULL, "512",
   offsetof(WidgetOptions, width), 0, NULL},
  {TK_CONFIG_INT, (char*)"-height", NULL, NULL, "512",
   offsetof(WidgetOptions, height), 0, NULL},
  {TK_CONFIG_ANCHOR, (char*)"-anchor", NULL, NULL, "nw",
   offsetof(WidgetOptions, anchor), 0, NULL},
  {TK_CONFIG_CUSTOM, (char*)"-tags", NULL, NULL, NULL,
   0, TK_CONFIG_NULL_OK, &tagsOption},

  {TK_CONFIG_STRING, (char*)"-helvetica", NULL, NULL, "helvetica",
   offsetof(WidgetOptions, helvetica), 0, NULL},
  {TK_CONFIG_STRING, (char*)"-courier", NULL, NULL, "courier",
   offsetof(WidgetOptions, courier), 0, NULL},
  {TK_CONFIG_STRING, (char*)"-times", NULL, NULL, "times",
   offsetof(WidgetOptions, times), 0, NULL},

  {TK_CONFIG_SYNONYM, "-bg", "background", NULL, NULL, 0, 0, NULL},
  {TK_CONFIG_COLOR, "-background", "background", "Background", "white",
   offsetof(WidgetOptions, bgColor), 0, NULL},
  {TK_CONFIG_SYNONYM, "-fg", "foreground", NULL, NULL, 0, 0, NULL},
  {TK_CONFIG_COLOR, "-foreground", "foreground", "Foreground", "black",
   offsetof(WidgetOptions, fgColor), 0, NULL},

  {TK_CONFIG_END, NULL, NULL, NULL, NULL, 0, 0, NULL},
};

static Tk_ItemType frameMultiColorTrueColor16Type = {
  (char*)"framemulticolortruecolor16",
  sizeof(WidgetOptions),
  FrameMultiColorTrueColor16CreateProc,
  frameMultiColorTrueColor16Specs,
  WidgetConfigProc,
  WidgetCoordProc,
  WidgetDeleteProc,
  WidgetDisplayProc,
  0,
  WidgetPointProc,
  WidgetAreaProc,
  WidgetPostscriptProc,
  WidgetScaleProc,
  WidgetTranslateProc,
  (Tk_ItemIndexProc*)NULL,
  WidgetICursorProc,
  (Tk_ItemSelectionProc*)NULL,
  (Tk_ItemInsertProc*)NULL,
  (Tk_ItemDCharsProc*)NULL,
  (Tk_ItemType*)NULL
};

int FrameMultiColorTrueColor16_Init(Tcl_Interp* interp)
{
  tagsOption.parseProc = Tk_CanvasTagsParseProc;
  tagsOption.printProc = Tk_CanvasTagsPrintProc;

  Tk_CreateItemType(&frameMultiColorTrueColor16Type);
  return TCL_OK;
}

int FrameMultiColorTrueColor16CreateProc(Tcl_Interp* interp, Tk_Canvas canvas,
					 Tk_Item* item, Tcl_Size argc,
					 Tcl_Obj *const argv[])
{
  FrameMultiColorTrueColor16* frame =
    new FrameMultiColorTrueColor16(interp, canvas, item);

  if (frame->Widget::configure(argc, (const char**)argv, 0, 1) != TCL_OK) {
    delete frame;
    Tcl_AppendResult(interp, " error occured while creating frame.", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

FrameMultiColorTrueColor16::FrameMultiColorTrueColor16(Tcl_Interp* i,
						       Tk_Canvas c,
						       Tk_Item* item)
  : FrameMultiColor(i,c,item), TrueColor16(visual)
{
  configSpecs = frameMultiColorTrueColor16Specs;
}

FrameMultiColorTrueColor16::~FrameMultiColorTrueColor16()
{
  unloadAllFits();
}
