// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colorbarrgbtruecolor24.h"

// Tk Canvas Widget Function Declarations

int ColorbarRGBTrueColor24CreateProc(Tcl_Interp*, Tk_Canvas, Tk_Item*, int, 
				  Tcl_Obj *const []);

// ColorbarRGB Specs

static Tk_CustomOption tagsOption = {
  NULL, NULL, NULL
};

static Tk_ConfigSpec colorbarRGBTrueColor24Specs[] = {
  {TK_CONFIG_STRING, (char*)"-command", NULL, NULL, "colorbarrgb",
   offsetof(ColorbarBaseOptions, cmdName), 
   TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-x", NULL, NULL, "1",
   offsetof(ColorbarBaseOptions, x), 
   TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-y", NULL, NULL, "1",
   offsetof(ColorbarBaseOptions, y), 
   TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-width", NULL, NULL, "512",
   offsetof(ColorbarBaseOptions, width), 
   TK_CONFIG_OPTION_SPECIFIED, NULL},
  {TK_CONFIG_INT, (char*)"-height", NULL, NULL, "22",
   offsetof(ColorbarBaseOptions, height), 
   TK_CONFIG_OPTION_SPECIFIED, NULL},
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

static Tk_ItemType colorbarRGBTrueColor24Type = {
  (char*)"colorbarrgbtruecolor24",        // name
  sizeof(ColorbarBaseOptions), // size
  ColorbarRGBTrueColor24CreateProc, // configProc
  colorbarRGBTrueColor24Specs,     // configSpecs
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

int ColorbarRGBTrueColor24_Init(Tcl_Interp* interp)
{
  tagsOption.parseProc = Tk_CanvasTagsParseProc;
  tagsOption.printProc = Tk_CanvasTagsPrintProc;

  Tk_CreateItemType(&colorbarRGBTrueColor24Type);
  return TCL_OK;
}

int ColorbarRGBTrueColor24CreateProc(Tcl_Interp* interp, Tk_Canvas canvas, 
				  Tk_Item* item, int argc, 
				  Tcl_Obj *const argv[])
{
  ColorbarRGBTrueColor24* colorbar = 
    new ColorbarRGBTrueColor24(interp,canvas,item);

  // and set default configuration
  if (colorbar->configure(argc, (const char**)argv, 0) != TCL_OK) {
    delete colorbar;
    Tcl_AppendResult(interp, " error occured while creating colorbar.", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

// ColorbarRGBTrueColor24

ColorbarRGBTrueColor24::ColorbarRGBTrueColor24(Tcl_Interp* i, Tk_Canvas c, 
					       Tk_Item* item) 
  : ColorbarRGB(i,c,item), TrueColor24(visual)
{
  configSpecs = colorbarRGBTrueColor24Specs;  // colorbar configure options
}

void ColorbarRGBTrueColor24::updateColorsHorz()
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
  }
}

void ColorbarRGBTrueColor24::updateColorsVert()
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
  }
}

void ColorbarRGBTrueColor24::updateColors24Horz(int width, int height,
						char* data)
{
  unsigned char row[xmap->bytes_per_line];

  // red
  for (int ii=0; ii<width; ii++) {
    unsigned int r = colorCells[(int)(double(ii)/width*colorCount)*3];
    unsigned int a = 0;
    a |= r << rs_;

    if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
      memcpy(row+ii*3, &a, 3);
    }
    else {
      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*3) = *(rr+3);
      *(row+ii*3+1) = *(rr+2);
      *(row+ii*3+2) = *(rr+1);
    }
  }
  for (int jj=0; jj<(int)(height/3.); jj++)
    memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

  // green
  for (int ii=0; ii<width; ii++) {
    unsigned int g = colorCells[(int)(double(ii)/width*colorCount)*3+1];
    unsigned int a = 0;
    a |= g << gs_;

    if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
      memcpy(row+ii*3, &a, 3);
    }
    else {
      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*3) = *(rr+3);
      *(row+ii*3+1) = *(rr+2);
      *(row+ii*3+2) = *(rr+1);
    }
  }
  for (int jj=(int)(height/3.); jj<(int)(height*2/3.); jj++)
    memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

  // blue
  for (int ii=0; ii<width; ii++) {
    unsigned int b = colorCells[(int)(double(ii)/width*colorCount)*3+2];
    unsigned int a = 0;
    a |= b << bs_;

    if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
      memcpy(row+ii*3, &a, 3);
    }
    else {
      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*3) = *(rr+3);
      *(row+ii*3+1) = *(rr+2);
      *(row+ii*3+2) = *(rr+1);
    }
  }
  for (int jj=(int)(height*2/3.); jj<height; jj++)
    memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);
}

void ColorbarRGBTrueColor24::updateColors24Vert(int width, int height,
						char* data)
{
  for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {

    // red
    {
      unsigned int r = colorCells[(int)(double(jj)/height*colorCount)*3];
      unsigned int a = 0;
      a |= r << rs_;

      if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
	for (int ii=0; ii<(int)(width/3.); ii++)
	  memcpy(data+ii*3, &a, 3);
      }
      else {
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=0; ii<(int)(width/3.); ii++) {
	  *(data+ii*3) = *(rr+3);
	  *(data+ii*3+1) = *(rr+2);
	  *(data+ii*3+2) = *(rr+1);
	}
      }
    }

    // green
    {
      unsigned int g = colorCells[(int)(double(jj)/height*colorCount)*3+1];
      unsigned int a = 0;
      a |= g << gs_;

      if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
	for (int ii=(int)(width/3.); ii<(int)(width*2/3.); ii++)
	  memcpy(data+ii*3, &a, 3);
      }
      else {
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=(int)(width/3.); ii<(int)(width*2/3.); ii++) {
	  *(data+ii*3) = *(rr+3);
	  *(data+ii*3+1) = *(rr+2);
	  *(data+ii*3+2) = *(rr+1);
	}
      }
    }

    // blue
    {
      unsigned int b = colorCells[(int)(double(jj)/height*colorCount)*3+2];
      unsigned int a = 0;
      a |= b << bs_;

      if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
	for (int ii=(int)(width*2/3.); ii<width; ii++)
	  memcpy(data+ii*3, &a, 3);
      }
      else {
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=(int)(width*2/3.); ii<width; ii++) {
	  *(data+ii*3) = *(rr+3);
	  *(data+ii*3+1) = *(rr+2);
	  *(data+ii*3+2) = *(rr+1);
	}
      }
    }
  }
}

void ColorbarRGBTrueColor24::updateColors32Horz(int width, int height, 
						char* data)
{
  unsigned char row[xmap->bytes_per_line];

  // red
  for (int ii=0; ii<width; ii++) {
    unsigned int r = colorCells[(int)(double(ii)/width*colorCount)*3];
    unsigned int a = 0;
#ifdef MAC_OSX_TK
    a |= 0xff << 24;
#endif
    a |= r << rs_;

    if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
      memcpy(row+ii*4, &a, 4);
    }
    else {
      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*4) = *(rr+3);
      *(row+ii*4+1) = *(rr+2);
      *(row+ii*4+2) = *(rr+1);
      *(row+ii*4+3) = *(rr);
    }
  }
  for (int jj=0; jj<(int)(height/3.); jj++)
    memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

  // green
  for (int ii=0; ii<width; ii++) {
    unsigned int g = colorCells[(int)(double(ii)/width*colorCount)*3+1];
    unsigned int a = 0;
#ifdef MAC_OSX_TK
    a |= 0xff << 24;
#endif
    a |= g << gs_;

    if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
      memcpy(row+ii*4, &a, 4);
    }
    else {
      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*4) = *(rr+3);
      *(row+ii*4+1) = *(rr+2);
      *(row+ii*4+2) = *(rr+1);
      *(row+ii*4+3) = *(rr);
    }
  }
  for (int jj=(int)(height/3.); jj<(int)(height*2/3.); jj++)
    memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);

  // blue
  for (int ii=0; ii<width; ii++) {
    unsigned int b = colorCells[(int)(double(ii)/width*colorCount)*3+2];
    unsigned int a = 0;
#ifdef MAC_OSX_TK
    a |= 0xff << 24;
#endif
    a |= b << bs_;

    if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
      memcpy(row+ii*4, &a, 4);
    }
    else {
      unsigned char* rr = (unsigned char*)(&a);
      *(row+ii*4) = *(rr+3);
      *(row+ii*4+1) = *(rr+2);
      *(row+ii*4+2) = *(rr+1);
      *(row+ii*4+3) = *(rr);
    }
  }
  for (int jj=(int)(height*2/3.); jj<height; jj++)
    memcpy(data+(jj*xmap->bytes_per_line), row, xmap->bytes_per_line);
}

void ColorbarRGBTrueColor24::updateColors32Vert(int width, int height, 
						char* data)
{
  for (int jj=height-1; jj>=0; jj--, data+=xmap->bytes_per_line) {
    // red
    {
      unsigned int r = colorCells[(int)(double(jj)/height*colorCount)*3];
      unsigned int a = 0;
#ifdef MAC_OSX_TK
      a |= 0xff << 24;
#endif
      a |= r << rs_;

      if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
	for (int ii=0; ii<(int)(width/3.); ii++)
	  memcpy(data+ii*4, &a, 4);
      }
      else {
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=0; ii<(int)(width/3.); ii++) {
	  *(data+ii*4) = *(rr+3);
	  *(data+ii*4+1) = *(rr+2);
	  *(data+ii*4+2) = *(rr+1);
	  *(data+ii*4+3) = *(rr);
	}
      }
    }
      
    // green
    {
      unsigned int g = colorCells[(int)(double(jj)/height*colorCount)*3+1];
      unsigned int a = 0;
#ifdef MAC_OSX_TK
      a |= 0xff << 24;
#endif
      a |= g << gs_;
      
      if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
	for (int ii=(int)(width/3.); ii<(int)(width*2/3.); ii++)
	  memcpy(data+ii*4, &a, 4);
      }
      else {
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=(int)(width/3.); ii<(int)(width*2/3.); ii++) {
	  *(data+ii*4) = *(rr+3);
	  *(data+ii*4+1) = *(rr+2);
	  *(data+ii*4+2) = *(rr+1);
	  *(data+ii*4+3) = *(rr);
	}
      }
    }

    // blue
    {
      unsigned int b = colorCells[(int)(double(jj)/height*colorCount)*3+2];
      unsigned int a = 0;
#ifdef MAC_OSX_TK
      a |= 0xff << 24;
#endif
      a |= b << bs_;

      if ((!xmap->byte_order && lsb()) || (xmap->byte_order && !lsb())) {
	for (int ii=(int)(width*2/3.); ii<width; ii++)
	  memcpy(data+ii*4, &a, 4);
      }
      else {
	unsigned char* rr = (unsigned char*)(&a);
	for (int ii=(int)(width*2/3.); ii<width; ii++) {
	  *(data+ii*4) = *(rr+3);
	  *(data+ii*4+1) = *(rr+2);
	  *(data+ii*4+2) = *(rr+1);
	  *(data+ii*4+3) = *(rr);
	}
      }
    }
  }
}
