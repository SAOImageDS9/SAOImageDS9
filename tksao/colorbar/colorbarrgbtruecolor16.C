// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colorbarrgbtruecolor16.h"

// Tk Canvas Widget Function Declarations

int ColorbarRGBTrueColor16CreateProc(Tcl_Interp*, Tk_Canvas, Tk_Item*, int, 
				  Tcl_Obj *const []);

// ColorbarRGB Specs

static Tk_CustomOption tagsOption = {
  NULL, NULL, NULL
};

static Tk_ConfigSpec colorbarRGBTrueColor16Specs[] = {

  {TK_CONFIG_STRING, (char*)"-command", NULL, NULL, "colorbarrgb",
   Tk_Offset(ColorbarBaseOptions, cmdName), 
   TK_CONFIG_OPTION_SPECIFIED,NULL},
  {TK_CONFIG_INT, (char*)"-x", NULL, NULL, "1",
   Tk_Offset(ColorbarBaseOptions, x), 
   TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-y", NULL, NULL, "1",
   Tk_Offset(ColorbarBaseOptions, y), 
   TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-width", NULL, NULL, "512",
   Tk_Offset(ColorbarBaseOptions, width), 
   TK_CONFIG_OPTION_SPECIFIED, 
   NULL},
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
				     Tk_Item* item, int argc, 
				     Tcl_Obj *const argv[])
{
  ColorbarRGBTrueColor16* colorbar = 
    new ColorbarRGBTrueColor16(interp, canvas, item);

  // and set default configuration
  if (colorbar->configure(argc, (const char**)argv, 0) != TCL_OK) {
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
  int width = options->width-2;
  int height = ((ColorbarBaseOptions*)options)->size-2;
  char* data = xmap->data;
    
  // if we have cross platforms, we need to byte swap
  unsigned char row[xmap->bytes_per_line];
  if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
    // red
    for (int ii=0; ii<width; ii++) {
      unsigned short r = colorCells[((int)(double(ii)/width*colorCount))*3];
      unsigned short a = 0;
      a |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
      memcpy(row+ii*2, &a, 2);
    }
    for (int jj=0; jj<(int)(height/3.); jj++)
      memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

    // green
    for (int ii=0; ii<width; ii++) {
      unsigned short g = colorCells[((int)(double(ii)/width*colorCount))*3+1];
      unsigned short a = 0;
      a |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
      memcpy(row+ii*2, &a, 2);
    }
    for (int jj=(int)(height/3.); jj<(int)(height*2/3.); jj++)
      memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

    // blue
    for (int ii=0; ii<width; ii++) {
      unsigned short b = colorCells[((int)(double(ii)/width*colorCount))*3+2];
      unsigned short a = 0;
      a |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);
      memcpy(row+ii*2, &a, 2);
    }
    for (int jj=(int)(height*2/3.); jj<height; jj++)
      memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

  }
  else {
    // red
    for (int ii=0; ii<width; ii++) {
      unsigned short r = colorCells[((int)(double(ii)/width*colorCount))*3];
      unsigned short a = 0;
      a |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*2) = *(rr+1);
      *(row+ii*2+1) = *(rr);
    }
    for (int jj=0; jj<(int)(height/3.); jj++)
      memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

    // green
    for (int ii=0; ii<width; ii++) {
      unsigned short g = colorCells[((int)(double(ii)/width*colorCount))*3+1];
      unsigned short a = 0;
      a |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*2) = *(rr+1);
      *(row+ii*2+1) = *(rr);
    }
    for (int jj=(int)(height/3.); jj<(int)(height*2/3.); jj++)
      memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

    // blue
    for (int ii=0; ii<width; ii++) {
      unsigned short b = colorCells[((int)(double(ii)/width*colorCount))*3+2];
      unsigned short a = 0;
      a |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);
      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*2) = *(rr+1);
      *(row+ii*2+1) = *(rr);
    }
    for (int jj=(int)(height*2/3.); jj<height; jj++)
      memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);
  }
}

void ColorbarRGBTrueColor16::updateColorsVert()
{
  int width = ((ColorbarBaseOptions*)options)->size-2;
  int height = options->height-2;
  char* data = xmap->data;
    
  // if we have cross platforms, we need to byte swap
  if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
    for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {

      // red
      {
	unsigned short r = colorCells[((int)(double(jj)/height*colorCount))*3];
	unsigned short a = 0;
	a |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
	for (int ii=0; ii<(int)(width/3.); ii++)
	  memcpy(data+ii*2, &a, 2);
      }

      // green
      {
	unsigned short g =colorCells[((int)(double(jj)/height*colorCount))*3+1];
	unsigned short a = 0;
	a |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
	for (int ii=(int)(width/3.); ii<(int)(width*2/3.); ii++)
	  memcpy(data+ii*2, &a, 2);
      }

      // blue
      {
	unsigned short b =colorCells[((int)(double(jj)/height*colorCount))*3+2];
	unsigned short a = 0;
	a |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);
	for (int ii=(int)(width*2/3.); ii<width; ii++)
	  memcpy(data+ii*2, &a, 2);
      }
    }
  }
  else {
    for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {

      // red
      {
	unsigned short r = colorCells[((int)(double(jj)/height*colorCount))*3];
	unsigned short a = 0;
	a |= rs_>0 ? ((r & rm_) << rs_) : ((r & rm_) >> -rs_);
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=0; ii<(int)(width/3.); ii++) {
	  *(data+ii*2) = *(rr+1);
	  *(data+ii*2+1) = *(rr);
	}
      }

      // green
      {
	unsigned short g =colorCells[((int)(double(jj)/height*colorCount))*3+1];
	unsigned short a = 0;
	a |= gs_>0 ? ((g & gm_) << gs_) : ((g & gm_) >> -gs_);
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=(int)(width/3.); ii<(int)(width*2/3.); ii++) {
	  *(data+ii*2) = *(rr+1);
	  *(data+ii*2+1) = *(rr);
	}
      }

      // blue
      {
	unsigned short b =colorCells[((int)(double(jj)/height*colorCount))*3+2];
	unsigned short a = 0;
	a |= bs_>0 ? ((b & bm_) << bs_) : ((b & bm_) >> -bs_);
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=(int)(width*2/3.); ii<width; ii++) {
	  *(data+ii*2) = *(rr+1);
	  *(data+ii*2+1) = *(rr);
	}
      }
    }
  }
}

