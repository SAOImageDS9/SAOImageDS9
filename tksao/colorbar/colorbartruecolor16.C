// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colorbartruecolor16.h"

// Tk Canvas Widget Function Declarations

int ColorbarTrueColor16CreateProc(Tcl_Interp*, Tk_Canvas, Tk_Item*, int, 
				  Tcl_Obj *const []);

// Colorbar Specs

static Tk_CustomOption tagsOption = {
  NULL, NULL, NULL
};

static Tk_ConfigSpec colorbarTrueColor16Specs[] = {

  {TK_CONFIG_STRING, (char*)"-command", NULL, NULL, "colorbar",
   Tk_Offset(ColorbarBaseOptions, cmdName), TK_CONFIG_OPTION_SPECIFIED,
   NULL},
  {TK_CONFIG_INT, (char*)"-x", NULL, NULL, "1",
   Tk_Offset(ColorbarBaseOptions, x), TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-y", NULL, NULL, "1",
   Tk_Offset(ColorbarBaseOptions, y), TK_CONFIG_OPTION_SPECIFIED, NULL},
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

static Tk_ItemType colorbarTrueColor16Type = {
  (char*)"colorbartruecolor16",        // name
  sizeof(ColorbarBaseOptions), // size
  ColorbarTrueColor16CreateProc, // configProc
  colorbarTrueColor16Specs,     // configSpecs
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

int ColorbarTrueColor16_Init(Tcl_Interp* interp)
{
  tagsOption.parseProc = Tk_CanvasTagsParseProc;
  tagsOption.printProc = Tk_CanvasTagsPrintProc;

  Tk_CreateItemType(&colorbarTrueColor16Type);
  return TCL_OK;
}

int ColorbarTrueColor16CreateProc(Tcl_Interp* interp, Tk_Canvas canvas, 
				  Tk_Item* item, int argc, 
				  Tcl_Obj *const argv[])
{
  ColorbarTrueColor16* colorbar = 
    new ColorbarTrueColor16(interp, canvas, item);

  // and set default configuration
  if (colorbar->configure(argc, (const char**)argv, 0) != TCL_OK) {
    delete colorbar;
    Tcl_AppendResult(interp, " error occured while creating colorbar.", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

// ColorbarTrueColor16

ColorbarTrueColor16::ColorbarTrueColor16(Tcl_Interp* i, Tk_Canvas c, 
					 Tk_Item* item) 
  : Colorbar(i,c,item), TrueColor16(visual)
{
  configSpecs = colorbarTrueColor16Specs;  // colorbar configure options

  loadDefaultCMaps();
}

void ColorbarTrueColor16::updateColorsHorz()
{
  int width = options->width-2;
  int height = ((ColorbarBaseOptions*)options)->size-2;
  char* data = xmap->data;
    
  // if we have cross platforms, we need to byte swap
  if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
    for (int ii=0; ii<width; ii++) {
      unsigned short r = colorCells[((int)(double(ii)/width*colorCount))*3+2];
      unsigned short g = colorCells[((int)(double(ii)/width*colorCount))*3+1];
      unsigned short b = colorCells[((int)(double(ii)/width*colorCount))*3];
      unsigned short a = 0;
      a |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
      a |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
      a |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);

      memcpy(data+ii*2, &a, 2);
    }
  }
  else {
    for (int ii=0; ii<width; ii++) {
      unsigned short r = colorCells[((int)(double(ii)/width*colorCount))*3+2];
      unsigned short g = colorCells[((int)(double(ii)/width*colorCount))*3+1];
      unsigned short b = colorCells[((int)(double(ii)/width*colorCount))*3];
      unsigned short a = 0;
      a |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
      a |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
      a |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);

      unsigned char* rr = (unsigned char*)(&a);
      *(data+ii*2) = *(rr+1);
      *(data+ii*2+1) = *(rr);
    }
  }

  // --and duplicate for remaining rows
  for (int jj=1; jj<height; jj++)
    memcpy(data+(jj*xmap->bytes_per_line), data, xmap->bytes_per_line);
}

void ColorbarTrueColor16::updateColorsVert()
{
  int width = ((ColorbarBaseOptions*)options)->size-2;
  int height = options->height-2;
  char* data = xmap->data;
    
  // if we have cross platforms, we need to byte swap
  if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
    for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {
      unsigned short r = colorCells[((int)(double(jj)/height*colorCount))*3+2];
      unsigned short g = colorCells[((int)(double(jj)/height*colorCount))*3+1];
      unsigned short b = colorCells[((int)(double(jj)/height*colorCount))*3];
      unsigned short a = 0;
      a |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
      a |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
      a |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);

      for (int ii=0; ii<width; ii++)
	memcpy(data+ii*2, &a, 2);
    }
  }
  else {
    for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {
      unsigned short r = colorCells[((int)(double(jj)/height*colorCount))*3+2];
      unsigned short g = colorCells[((int)(double(jj)/height*colorCount))*3+1];
      unsigned short b = colorCells[((int)(double(jj)/height*colorCount))*3];
      unsigned short a = 0;
      a |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
      a |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
      a |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);

      unsigned char* rr = (unsigned char*)(&a);
      for (int ii=0; ii<width; ii++) {
	*(data+ii*2) = *(rr+1);
	*(data+ii*2+1) = *(rr);
      }
    }
  }
}

