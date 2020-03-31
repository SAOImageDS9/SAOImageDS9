// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colorbartruecolor8.h"

// Tk Canvas Widget Function Declarations

int ColorbarTrueColor8CreateProc(Tcl_Interp*, Tk_Canvas, Tk_Item*, int,
				 Tcl_Obj *const []);

// Colorbar Specs

static Tk_CustomOption tagsOption = {
  NULL, NULL, NULL
};

static Tk_ConfigSpec colorbarTrueColor8Specs[] = {

  {TK_CONFIG_STRING, (char*)"-command", NULL, NULL, "colorbar",
   Tk_Offset(ColorbarBaseOptions, cmdName), TK_CONFIG_OPTION_SPECIFIED, 
   NULL},
  {TK_CONFIG_INT, (char*)"-x", NULL, NULL, "1",
   Tk_Offset(ColorbarBaseOptions, x), TK_CONFIG_OPTION_SPECIFIED, 
   NULL},
  {TK_CONFIG_INT, (char*)"-y", NULL, NULL, "1",
   Tk_Offset(ColorbarBaseOptions, y), TK_CONFIG_OPTION_SPECIFIED, 
   NULL},
  {TK_CONFIG_INT, (char*)"-width", NULL, NULL, "512",
   Tk_Offset(ColorbarBaseOptions, width), TK_CONFIG_OPTION_SPECIFIED, 
   NULL},
  {TK_CONFIG_INT, (char*)"-height", NULL, NULL, "22",
   Tk_Offset(ColorbarBaseOptions, height), TK_CONFIG_OPTION_SPECIFIED, 
   NULL},
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

static Tk_ItemType colorbarTrueColor8Type = {
  (char*)"colorbartruecolor8",        // name
  sizeof(ColorbarBaseOptions), // size
  ColorbarTrueColor8CreateProc, // configProc
  colorbarTrueColor8Specs,     // configSpecs
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

int ColorbarTrueColor8_Init(Tcl_Interp* interp)
{
  tagsOption.parseProc = Tk_CanvasTagsParseProc;
  tagsOption.printProc = Tk_CanvasTagsPrintProc;

  Tk_CreateItemType(&colorbarTrueColor8Type);
  return TCL_OK;
}

int ColorbarTrueColor8CreateProc(Tcl_Interp* interp, Tk_Canvas canvas, 
				 Tk_Item* item, int argc, 
				 Tcl_Obj *const argv[])
{
  ColorbarTrueColor8* colorbar = new ColorbarTrueColor8(interp, canvas, item);

  // and set default configuration
  if (colorbar->configure(argc, (const char**)argv, 0) != TCL_OK) {
    delete colorbar;
    Tcl_AppendResult(interp, " error occured while creating colorbar.", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

// ColorbarTrueColor8

ColorbarTrueColor8::ColorbarTrueColor8(Tcl_Interp* i, Tk_Canvas c, 
				       Tk_Item* item)
  : Colorbar(i,c,item), TrueColor8(visual)
{
  configSpecs = colorbarTrueColor8Specs;  // colorbar configure options

  loadDefaultCMaps();
}

void ColorbarTrueColor8::updateColorsHorz()
{
  int width = options->width-2;
  int height = ((ColorbarBaseOptions*)options)->size-2;
  char* data = xmap->data;
    
  for (int ii=0; ii<width; ii++)
    data[ii] = 
      ((colorCells[((int)(double(ii)/width*colorCount))*3] & bm_) >> bs_) |
      ((colorCells[((int)(double(ii)/width*colorCount))*3+1] & gm_) >> gs_) |
      ((colorCells[((int)(double(ii)/width*colorCount))*3+2] & rm_) >> rs_);

  // --and duplicate for remaining rows
  for (int jj=1; jj<height; jj++)
    memcpy(data+(jj*xmap->bytes_per_line), data, xmap->bytes_per_line);
}

void ColorbarTrueColor8::updateColorsVert()
{
  int width = ((ColorbarBaseOptions*)options)->size-2;
  int height = options->height-2;
  char* data = xmap->data;
    
  for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {
    char a =
      ((colorCells[((int)(double(jj)/height*colorCount))*3] & bm_) >> bs_) |
      ((colorCells[((int)(double(jj)/height*colorCount))*3+1] & gm_) >> gs_) |
      ((colorCells[((int)(double(jj)/height*colorCount))*3+2] & rm_) >> rs_);

    for (int ii=0; ii<width; ii++)
      data[ii] = a;
  }
}

