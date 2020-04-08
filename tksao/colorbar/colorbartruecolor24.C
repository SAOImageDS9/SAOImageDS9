// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colorbartruecolor24.h"

// Tk Canvas Widget Function Declarations

int ColorbarTrueColor24CreateProc(Tcl_Interp*, Tk_Canvas, Tk_Item*, int, 
				  Tcl_Obj *const []);

// Colorbar Specs

static Tk_CustomOption tagsOption = {
  NULL, NULL, NULL
};

static Tk_ConfigSpec colorbarTrueColor24Specs[] = {

  {TK_CONFIG_STRING, (char*)"-command", NULL, NULL, "colorbar",
   Tk_Offset(ColorbarBaseOptions, cmdName), 
   TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-x", NULL, NULL, "1",
   Tk_Offset(ColorbarBaseOptions, x), TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-y", NULL, NULL, "1",
   Tk_Offset(ColorbarBaseOptions, y), TK_CONFIG_OPTION_SPECIFIED, NULL},
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

static Tk_ItemType colorbarTrueColor24Type = {
  (char*)"colorbartruecolor24",        // name
  sizeof(ColorbarBaseOptions), // size
  ColorbarTrueColor24CreateProc, // configProc
  colorbarTrueColor24Specs,     // configSpecs
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

int ColorbarTrueColor24_Init(Tcl_Interp* interp)
{
  tagsOption.parseProc = Tk_CanvasTagsParseProc;
  tagsOption.printProc = Tk_CanvasTagsPrintProc;

  Tk_CreateItemType(&colorbarTrueColor24Type);
  return TCL_OK;
}

int ColorbarTrueColor24CreateProc(Tcl_Interp* interp, Tk_Canvas canvas, 
				  Tk_Item* item, int argc, 
				  Tcl_Obj *const argv[])
{
  ColorbarTrueColor24* colorbar = new ColorbarTrueColor24(interp,canvas,item);

  // and set default configuration
  if (colorbar->configure(argc, (const char**)argv, 0) != TCL_OK) {
    delete colorbar;
    Tcl_AppendResult(interp, " error occured while creating colorbar.", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

// ColorbarTrueColor24

ColorbarTrueColor24::ColorbarTrueColor24(Tcl_Interp* i, Tk_Canvas c, 
					 Tk_Item* item) 
  : Colorbar(i,c,item), TrueColor24(visual)
{
  configSpecs = colorbarTrueColor24Specs;  // colorbar configure options

  loadDefaultCMaps();
}

void ColorbarTrueColor24::updateColorsHorz()
{
  int width = options->width-2;
  int height = ((ColorbarBaseOptions*)options)->size-2;
  char* data = xmap->data;

  switch (xmap->bits_per_pixel) {
  case 32:
    updateColors32Horz(width, height, data);
    break;
  case 24:
    updateColors24Horz(width, height, data);
    break;
  default:
    internalError("Colorbar: bad bits/pixel");
    return;
  }
}

void ColorbarTrueColor24::updateColorsVert()
{
  int width = ((ColorbarBaseOptions*)options)->size-2;
  int height = options->height-2;
  char* data = xmap->data;
    
  switch (xmap->bits_per_pixel) {
  case 32:
    updateColors32Vert(width, height, data);
    break;
  case 24:
    updateColors24Vert(width, height, data);
    break;
  default:
    internalError("Colorbar: bad bits/pixel");
    return;
  }
}

void ColorbarTrueColor24::updateColors24Horz(int width, int height, char* data)
{
  // if we have cross platforms, we need to byte swap
  if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
    for (int ii=0; ii<width; ii++) {
      unsigned int r = colorCells[(int)(double(ii)/width*colorCount)*3+2];
      unsigned int g = colorCells[(int)(double(ii)/width*colorCount)*3+1];
      unsigned int b = colorCells[(int)(double(ii)/width*colorCount)*3];
      unsigned int a = 0;
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      memcpy(data+ii*3, &a, 3);
    }
  }
  else {
    for (int ii=0; ii<width; ii++) {
      unsigned int r = colorCells[(int)(double(ii)/width*colorCount)*3+2];
      unsigned int g = colorCells[(int)(double(ii)/width*colorCount)*3+1];
      unsigned int b = colorCells[(int)(double(ii)/width*colorCount)*3];
      unsigned int a = 0;
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      unsigned char* rr = (unsigned char*)(&a);
      *(data+ii*3) = *(rr+3);
      *(data+ii*3+1) = *(rr+2);
      *(data+ii*3+2) = *(rr+1);
    }
  }

  // --and duplicate for remaining rows
  for (int jj=1; jj<height; jj++)
    memcpy(data+(jj*xmap->bytes_per_line), data, xmap->bytes_per_line);
}

void ColorbarTrueColor24::updateColors24Vert(int width, int height, char* data)
{
  // if we have cross platforms, we need to byte swap
  if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
    for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {
      unsigned int r = colorCells[(int)(double(jj)/height*colorCount)*3+2];
      unsigned int g = colorCells[(int)(double(jj)/height*colorCount)*3+1];
      unsigned int b = colorCells[(int)(double(jj)/height*colorCount)*3];
      unsigned int a = 0;
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      for (int ii=0; ii<width; ii++)
	memcpy(data+ii*3, &a, 3);
    }
  }
  else {
    for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {
      unsigned int r = colorCells[(int)(double(jj)/height*colorCount)*3+2];
      unsigned int g = colorCells[(int)(double(jj)/height*colorCount)*3+1];
      unsigned int b = colorCells[(int)(double(jj)/height*colorCount)*3];
      unsigned int a = 0;
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      unsigned char* rr = (unsigned char*)(&a);
      for (int ii=0; ii<width; ii++) {
	*(data+ii*3) = *(rr+3);
	*(data+ii*3+1) = *(rr+2);
	*(data+ii*3+2) = *(rr+1);
      }
    }
  }
}

void ColorbarTrueColor24::updateColors32Horz(int width, int height, char* data)
{
  // if we have cross platforms, we need to byte swap
  if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
    for (int ii=0; ii<width; ii++) {
      unsigned int r = colorCells[(int)(double(ii)/width*colorCount)*3+2];
      unsigned int g = colorCells[(int)(double(ii)/width*colorCount)*3+1];
      unsigned int b = colorCells[(int)(double(ii)/width*colorCount)*3];
      unsigned int a = 0;
#ifdef MAC_OSX_TK
      a |= 0xff << 24;
#endif
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      memcpy(data+ii*4, &a, 4);
    }
  }
  else {
    for (int ii=0; ii<width; ii++) {
      unsigned int r = colorCells[(int)(double(ii)/width*colorCount)*3+2];
      unsigned int g = colorCells[(int)(double(ii)/width*colorCount)*3+1];
      unsigned int b = colorCells[(int)(double(ii)/width*colorCount)*3];
      unsigned int a = 0;
#ifdef MAC_OSX_TK
      a |= 0xff << 24;
#endif
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      unsigned char* rr = (unsigned char*)(&a);
      *(data+ii*4) = *(rr+3);
      *(data+ii*4+1) = *(rr+2);
      *(data+ii*4+2) = *(rr+1);
      *(data+ii*4+3) = *(rr);
    }
  }

  // --and duplicate for remaining rows
  for (int jj=1; jj<height; jj++)
    memcpy(data+(jj*xmap->bytes_per_line), data, xmap->bytes_per_line);
}

void ColorbarTrueColor24::updateColors32Vert(int width, int height, char* data)
{
  // if we have cross platforms, we need to byte swap
  if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
    for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {
      unsigned int r = colorCells[(int)(double(jj)/height*colorCount)*3+2];
      unsigned int g = colorCells[(int)(double(jj)/height*colorCount)*3+1];
      unsigned int b = colorCells[(int)(double(jj)/height*colorCount)*3];
      unsigned int a = 0;
#ifdef MAC_OSX_TK
      a |= 0xff << 24;
#endif
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      for (int ii=0; ii<width; ii++)
	memcpy(data+ii*4, &a, 4);
    }
  }
  else {
    for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {
      unsigned int r = colorCells[(int)(double(jj)/height*colorCount)*3+2];
      unsigned int g = colorCells[(int)(double(jj)/height*colorCount)*3+1];
      unsigned int b = colorCells[(int)(double(jj)/height*colorCount)*3];
      unsigned int a = 0;
#ifdef MAC_OSX_TK
      a |= 0xff << 24;
#endif
      a |= r << rs_;
      a |= g << gs_;
      a |= b << bs_;

      unsigned char* rr = (unsigned char*)(&a);
      for (int ii=0; ii<width; ii++) {
	*(data+ii*4) = *(rr+3);
	*(data+ii*4+1) = *(rr+2);
	*(data+ii*4+2) = *(rr+1);
	*(data+ii*4+3) = *(rr);
      }
    }
  }
}

