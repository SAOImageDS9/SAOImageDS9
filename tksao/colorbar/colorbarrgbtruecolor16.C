// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colorbarrgbtruecolor16.h"

// Tk Canvas Widget Function Declarations

int ColorbarRGBTrueColor16CreateProc(Tcl_Interp*, Tk_Canvas, Tk_Item*,
				     Tcl_Size, Tcl_Obj *const []);

// ColorbarRGB Specs

static Tk_CustomOption tagsOption = {
  NULL, NULL, NULL
};

static Tk_ConfigSpec colorbarRGBTrueColor16Specs[] = {

  {TK_CONFIG_STRING, (char*)"-command", NULL, NULL, "colorbarrgb",
   offsetof(ColorbarBaseOptions, cmdName), 0, NULL},
  {TK_CONFIG_INT, (char*)"-x", NULL, NULL, "1",
   offsetof(ColorbarBaseOptions, x), 0, NULL},
  {TK_CONFIG_INT, (char*)"-y", NULL, NULL, "1",
   offsetof(ColorbarBaseOptions, y), 0, NULL},
  {TK_CONFIG_INT, (char*)"-width", NULL, NULL, "512",
   offsetof(ColorbarBaseOptions, width), 0, NULL},
  {TK_CONFIG_INT, (char*)"-height", NULL, NULL, "22",
   offsetof(ColorbarBaseOptions, height), 0, NULL},
  {TK_CONFIG_ANCHOR, (char*)"-anchor", NULL, NULL, "nw",
   offsetof(ColorbarBaseOptions, anchor), 0, NULL},
  {TK_CONFIG_CUSTOM, (char*)"-tags", NULL, NULL, NULL,
   0, TK_CONFIG_NULL_OK, &tagsOption},

  {TK_CONFIG_STRING, (char*)"-helvetica", NULL, NULL, "helvetica",
   offsetof(ColorbarBaseOptions, helvetica), 0, NULL},
  {TK_CONFIG_STRING, (char*)"-courier", NULL, NULL, "courier",
   offsetof(ColorbarBaseOptions, courier), 0, NULL},
  {TK_CONFIG_STRING, (char*)"-times", NULL, NULL, "times",
   offsetof(ColorbarBaseOptions, times), 0, NULL},

  {TK_CONFIG_SYNONYM, "-bg", "background", NULL, NULL, 0, 0, NULL},
  {TK_CONFIG_COLOR, "-background", "background", "Background", "white",
   offsetof(ColorbarBaseOptions, bgColor), 0, NULL},
  {TK_CONFIG_SYNONYM, "-fg", "foreground", NULL, NULL, 0, 0, NULL},
  {TK_CONFIG_COLOR, "-foreground", "foreground", "Foreground", "black",
   offsetof(ColorbarBaseOptions, fgColor), 0, NULL},

  {TK_CONFIG_BOOLEAN, (char*)"-orientation", NULL, NULL, "0",
   offsetof(ColorbarBaseOptions, orientation), 0, NULL},
  {TK_CONFIG_INT, (char*)"-size", NULL, NULL, "20",
   offsetof(ColorbarBaseOptions, size), 0, NULL},
  {TK_CONFIG_DOUBLE, (char*)"-center", NULL, NULL, "0.5",
   offsetof(ColorbarBaseOptions, center), 0, NULL},
  {TK_CONFIG_DOUBLE, (char*)"-barwidth", NULL, NULL, "1",
   offsetof(ColorbarBaseOptions, widthFactor), 0, NULL},

  {TK_CONFIG_STRING, (char*)"-font", NULL, NULL, "helvetica",
   offsetof(ColorbarBaseOptions, font), 0, NULL},
  {TK_CONFIG_INT, (char*)"-fontsize", NULL, NULL, "10",
   offsetof(ColorbarBaseOptions, fontSize), 0, NULL},
  {TK_CONFIG_STRING, (char*)"-fontweight", "fontweight", NULL, "normal",
   offsetof(ColorbarBaseOptions, fontWeight), 0, NULL},
  {TK_CONFIG_SYNONYM, (char*)"-fontstyle", "fontweight", NULL, NULL, 0, 0},
  {TK_CONFIG_STRING, (char*)"-fontslant", NULL, NULL, "roman",
   offsetof(ColorbarBaseOptions, fontSlant), 0, NULL},

  {TK_CONFIG_BOOLEAN, (char*)"-numerics", NULL, NULL, "1",
   offsetof(ColorbarBaseOptions, numerics), 0, NULL},
  {TK_CONFIG_BOOLEAN, (char*)"-space", NULL, NULL, "1",
   offsetof(ColorbarBaseOptions, space), 0, NULL},
  {TK_CONFIG_INT, (char*)"-ticks", NULL, NULL, "11",
   offsetof(ColorbarBaseOptions, ticks), 0, NULL},

  {TK_CONFIG_INT, (char*)"-colors", NULL, NULL, "1024",
   offsetof(ColorbarBaseOptions, colors), 0, NULL},

  {TK_CONFIG_END, NULL, NULL, NULL, NULL, 0, 0, NULL},
};

// Tk Static Structure

static Tk_ItemType colorbarRGBTrueColor16Type = {
  (char*)"colorbarrgbtruecolor16",        // name
  sizeof(ColorbarBaseOptions), // size
  ColorbarRGBTrueColor16CreateProc, // configProc
  colorbarRGBTrueColor16Specs,     // configSpecs
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

int ColorbarRGBTrueColor16_Init(Tcl_Interp* interp)
{
  tagsOption.parseProc = Tk_CanvasTagsParseProc;
  tagsOption.printProc = Tk_CanvasTagsPrintProc;

  Tk_CreateItemType(&colorbarRGBTrueColor16Type);
  return TCL_OK;
}

int ColorbarRGBTrueColor16CreateProc(Tcl_Interp* interp, Tk_Canvas canvas, 
				     Tk_Item* item, Tcl_Size argc, 
				     Tcl_Obj *const argv[])
{
  ColorbarRGBTrueColor16* colorbar = 
    new ColorbarRGBTrueColor16(interp, canvas, item);

  // and set default configuration
  if (colorbar->configure(argc, (const char**)argv, 0, 1) != TCL_OK) {
    delete colorbar;
    Tcl_AppendResult(interp, " error occured while creating colorbar.", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

// ColorbarRGBTrueColor16

ColorbarRGBTrueColor16::ColorbarRGBTrueColor16(Tcl_Interp* i, Tk_Canvas c, 
					       Tk_Item* item) 
  : ColorbarRGB(i,c,item), TrueColor16(visual)
{
  configSpecs = colorbarRGBTrueColor16Specs;  // colorbar configure options
}

void ColorbarRGBTrueColor16::updateColorsHorz()
{
  int width = xmap->width;
  int height = xmap->height;
  char* data = xmap->data;
    
  unsigned char row[xmap->bytes_per_line];

  for (int jj=0; jj<height; jj++) {
    int line = lineFromHorz(jj, height);
    for (int ii=0; ii<width; ii++) {
      const unsigned char* clr = colorCell(line, sampleFromHorz(ii, width));
      unsigned short a = 0;
      a |= rs_>0 ? ((clr[0] & rm_) << rs_) : ((clr[0] & rm_) >> -rs_);
      a |= gs_>0 ? ((clr[1] & gm_) << gs_) : ((clr[1] & gm_) >> -gs_);
      a |= bs_>0 ? ((clr[2] & bm_) << bs_) : ((clr[2] & bm_) >> -bs_);

      if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
	memcpy(row+ii*2, &a, 2);
      }
      else {
	unsigned char* rr = (unsigned char*)(&a);
	*(row+ii*2) = *(rr+1);
	*(row+ii*2+1) = *(rr);
      }
    }
    memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);
  }
}

void ColorbarRGBTrueColor16::updateColorsVert()
{
  int width = xmap->width;
  int height = xmap->height;
  char* data = xmap->data;
    
  for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {
    for (int ii=0; ii<width; ii++) {
      const unsigned char* clr =
	colorCell(lineFromVert(ii, width), sampleFromVert(jj, height));
      unsigned short a = 0;
      a |= rs_>0 ? ((clr[0] & rm_) << rs_) : ((clr[0] & rm_) >> -rs_);
      a |= gs_>0 ? ((clr[1] & gm_) << gs_) : ((clr[1] & gm_) >> -gs_);
      a |= bs_>0 ? ((clr[2] & bm_) << bs_) : ((clr[2] & bm_) >> -bs_);

      if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
	memcpy(data+ii*2, &a, 2);
      }
      else {
	unsigned char* rr = (unsigned char*)(&a);
	*(data+ii*2) = *(rr+1);
	*(data+ii*2+1) = *(rr);
      }
    }
  }
}

