// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tkInt.h>

#include "util.h"
#include "colorbarbase.h"
#include "cbgrid.h"
#include "ps.h"

#include <vector>

#define TICKLEN 3
#define TICKGAP 7

static int CbPdfEvalObjv(Tcl_Interp* interp, Tcl_Size objc, Tcl_Obj** objv)
{
  for (Tcl_Size ii=0; ii<objc; ii++)
    Tcl_IncrRefCount(objv[ii]);

  int rr = Tcl_EvalObjv(interp, objc, objv, TCL_EVAL_GLOBAL);

  for (Tcl_Size ii=0; ii<objc; ii++)
    Tcl_DecrRefCount(objv[ii]);

  return rr;
}

static int CbPdfMethod(Tcl_Interp* interp, Tcl_Obj* pdfObj,
		       const char* method, Tcl_Size objc, Tcl_Obj** args)
{
  Tcl_Obj** objv = new Tcl_Obj*[objc+2];
  objv[0] = pdfObj;
  objv[1] = Tcl_NewStringObj(method, -1);
  for (Tcl_Size ii=0; ii<objc; ii++)
    objv[ii+2] = args[ii];

  int rr = CbPdfEvalObjv(interp, objc+2, objv);
  delete [] objv;

  return rr;
}

static int CbPdfColor(Tcl_Interp* interp, Tcl_Obj* pdfObj,
		      double r, double g, double b)
{
  Tcl_Obj* args[3];
  args[0] = Tcl_NewDoubleObj(r);
  args[1] = Tcl_NewDoubleObj(g);
  args[2] = Tcl_NewDoubleObj(b);

  if (CbPdfMethod(interp, pdfObj, "setStrokeColor", 3, args) != TCL_OK)
    return TCL_ERROR;

  args[0] = Tcl_NewDoubleObj(r);
  args[1] = Tcl_NewDoubleObj(g);
  args[2] = Tcl_NewDoubleObj(b);

  return CbPdfMethod(interp, pdfObj, "setFillColor", 3, args);
}

static int CbPdfLine(Tcl_Interp* interp, Tcl_Obj* pdfObj,
		     double x1, double y1, double x2, double y2)
{
  Tcl_Obj* args[4];
  args[0] = Tcl_NewDoubleObj(x1);
  args[1] = Tcl_NewDoubleObj(y1);
  args[2] = Tcl_NewDoubleObj(x2);
  args[3] = Tcl_NewDoubleObj(y2);

  return CbPdfMethod(interp, pdfObj, "line", 4, args);
}

static int CbPdfPolygon(Tcl_Interp* interp, Tcl_Obj* pdfObj,
			const std::vector<double>& pts, int closed,
			int filled, int stroke)
{
  Tcl_Size objc = pts.size() + 6;
  Tcl_Obj** args = new Tcl_Obj*[objc];
  Tcl_Size jj = 0;

  for (size_t ii=0; ii<pts.size(); ii++)
    args[jj++] = Tcl_NewDoubleObj(pts[ii]);

  args[jj++] = Tcl_NewStringObj("-closed", -1);
  args[jj++] = Tcl_NewIntObj(closed);
  args[jj++] = Tcl_NewStringObj("-filled", -1);
  args[jj++] = Tcl_NewIntObj(filled);
  args[jj++] = Tcl_NewStringObj("-stroke", -1);
  args[jj++] = Tcl_NewIntObj(stroke);

  int rr = CbPdfMethod(interp, pdfObj, "polygon", objc, args);
  delete [] args;

  return rr;
}

static int CbPdfSetLineWidth(Tcl_Interp* interp, Tcl_Obj* pdfObj, double width)
{
  Tcl_Obj* args[1];
  args[0] = Tcl_NewDoubleObj(width);

  return CbPdfMethod(interp, pdfObj, "setLineWidth", 1, args);
}

static int CbPdfText(Tcl_Interp* interp, Tcl_Obj* pdfObj, const string& text,
		     double x, double y, const char* align)
{
  Tcl_Obj* fontArgs[2];
  fontArgs[0] = Tcl_NewIntObj(10);
  fontArgs[1] = Tcl_NewStringObj("Helvetica", -1);
  if (CbPdfMethod(interp, pdfObj, "setFont", 2, fontArgs) != TCL_OK)
    return TCL_ERROR;

  Tcl_Obj* args[7];
  args[0] = Tcl_NewStringObj(text.c_str(), -1);
  args[1] = Tcl_NewStringObj("-x", -1);
  args[2] = Tcl_NewDoubleObj(x);
  args[3] = Tcl_NewStringObj("-y", -1);
  args[4] = Tcl_NewDoubleObj(y);
  args[5] = Tcl_NewStringObj("-align", -1);
  args[6] = Tcl_NewStringObj(align, -1);

  return CbPdfMethod(interp, pdfObj, "text", 7, args);
}

static int CbDeletePhoto(Tcl_Interp* interp, const char* photoName)
{
  Tcl_Obj* deleteObjv[3];
  deleteObjv[0] = Tcl_NewStringObj("image", -1);
  deleteObjv[1] = Tcl_NewStringObj("delete", -1);
  deleteObjv[2] = Tcl_NewStringObj(photoName, -1);

  return CbPdfEvalObjv(interp, 3, deleteObjv);
}

// Parser Stuff
#undef yyFlexLexer
#define yyFlexLexer cbFlexLexer
#include <FlexLexer.h>

void* cblval;
extern int cbparse(ColorbarBase*, cbFlexLexer*);

int cblex(void* vval, cbFlexLexer* ll)
{
  cblval = vval;
  return ll ? ll->yylex() : 0;
}

void cberror(ColorbarBase* cb, cbFlexLexer* ll, const char* m)
{
  cb->error(m);
  const char* cmd = ll ? ll->YYText() : (const char*)NULL;
  if (cmd && cmd[0] != '\n') {
    cb->error(": ");
    cb->error(cmd);
  }
}

// Public Member Functions

ColorbarBase::ColorbarBase(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item) 
  : Widget(i,c,item)
{
  // no XCreateGC() at this level
  // this is needed because of a problem with Tk_ConfigureWidget
  ((ColorbarBaseOptions*)options)->font = NULL;
  ((ColorbarBaseOptions*)options)->fontWeight = NULL;
  ((ColorbarBaseOptions*)options)->fontSlant = NULL;

  xmap = NULL;
  colorCells = NULL;
  colorCount = 0;

  grid = NULL;
  gridGC_ = NULL;

  cnt = 0;
  lut = NULL;

  invert = 0;

  ticktxt = NULL;
  tickcnt =0;
  skipcnt =0;

  cmapid_ =1;
}

ColorbarBase::~ColorbarBase()
{
  if (xmap)
    XDestroyImage(xmap);

  if (colorCells)
    delete [] colorCells;

  if (grid)
    delete grid;

  if (gridGC_)
    XFreeGC(display, gridGC_);

  if (lut)
    delete [] lut;

  if (ticktxt) {
    for (int ii=0; ii<tickcnt; ii++)
      if (ticktxt[ii])
	delete [] ticktxt[ii];
    delete [] ticktxt;
  }

  // exchange pointer between widgets
  if (cellsparentptr_ == this) {
    cerr << "clear" << endl;
    cellsptr_ =NULL;
    cellsparentptr_ =NULL;
  }
}

int ColorbarBase::configure(int argc, const char* argv[], int flags)
{
  if (Widget::configure(argc, argv, flags) == TCL_ERROR)
    return TCL_ERROR;

  // only valid for the initial configuration call
  if (flags != TK_CONFIG_ARGV_ONLY)
    return initColormap();

  return TCL_OK;
}

void ColorbarBase::invalidPixmap()
{
  Widget::invalidPixmap();

  if (xmap)
    XDestroyImage(xmap);
  xmap = NULL;
}

int ColorbarBase::parse(istringstream& istr)
{
  result = TCL_OK;
  cbFlexLexer* ll = new cbFlexLexer(&istr);
  cbparse(this, ll);
  delete ll;

  return result;
}

Tk_Font ColorbarBase::getFont()
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  ostringstream fstr;
#ifdef MAC_OSX_TK
  int fz = int(opts->fontSize*getDisplayRatio());
#else
  int fz = opts->fontSize;
#endif

  if (!strncmp(opts->font,"helvetica",4))
    fstr << '{' << opts->helvetica << '}' << ' ' << fz << ' ' 
	 << opts->fontWeight << ' ' << opts->fontSlant << ends;
  else if (!strncmp(opts->font,"courier",4))
    fstr << '{' << opts->courier << '}' << ' ' << fz << ' ' 
	 << opts->fontWeight << ' ' << opts->fontSlant << ends;
  else if (!strncmp(opts->font,"times",4))
    fstr << '{' << opts->times << '}' << ' ' << fz << ' ' 
	 << opts->fontWeight << ' ' << opts->fontSlant << ends;
  else
    fstr << '{' << opts->helvetica << '}' << ' ' << fz << ' ' 
	 << opts->fontWeight << ' ' << opts->fontSlant << ends;

  return Tk_GetFont(interp, tkwin, fstr.str().c_str());
}

void ColorbarBase::lutToText(Tk_Font font)
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  // init
  if (ticktxt)
    for (int ii=0; ii<tickcnt; ii++)
      delete [] ticktxt[ii];
  delete [] ticktxt;
  tickcnt = opts->ticks;
  ticktxt = new char*[opts->ticks];
  for (int ii=0; ii<opts->ticks; ii++)
    ticktxt[ii] = NULL;
  skipcnt =0;

  // first estimate of prec
  int prec;
  {
    int aa = (int)(log10(fabs(lut[0])));
    int bb = (int)(log10(fabs(lut[cnt-1])));
    if (aa != bb)
      prec = aa>bb ? aa : bb;
    else {
      if (lut[0] == lut[cnt-1])
	prec = 1;
      else
	prec =2;
    }
  }

  // up to three tries
  for (int jj=0; jj<3; jj++) {
    // render text
    for (int ii=0; ii<opts->ticks; ii++) {
      int id = ii/double(opts->ticks-1)*cnt;
      // the last one will be one over
      if (id>=cnt)
	id = cnt-1;

      ostringstream str;
      if (prec < -2)
	str << scientific << setprecision(2+jj) << lut[id] << ends;
      else if (prec < 0)
	str << fixed << setprecision(abs(prec)+3+jj) << lut[id] << ends;
      else if (prec < 2)
	str << setprecision(2+jj) << lut[id] << ends;
      else if (prec < 5)
	str << fixed << setprecision(0+jj) << lut[id] << ends;
      else
	str << scientific << setprecision(2+jj) << lut[id] << ends;

      if (ticktxt[ii])
	delete [] ticktxt[ii];
      ticktxt[ii] = new char[strlen(str.str().c_str())+1];
      strcpy(ticktxt[ii],str.str().c_str());
    }

    // now see if all is unique
    int ok=1;
    for (int ii=1; ii<opts->ticks; ii++) {
      if (!strcmp(ticktxt[ii-1],ticktxt[ii]))
	ok=0;
    }    

    if (ok)
      break;
  }

  // determine skipcnt
  Tk_FontMetrics metrics;
  Tk_GetFontMetrics(font, &metrics);

  if (!opts->orientation) {
    // horizontal
    int ww =0;
    for (int ii=0; ii<opts->ticks; ii++) {
      if (ticktxt[ii]) {
	int aa = Tk_TextWidth(font, ticktxt[ii], strlen(ticktxt[ii]));
	if (aa>ww)
	  ww = aa;
      }
    }
    skipcnt = (ww+2)*opts->ticks/opts->width;
  }
  else {
    // vertical
    int total = (metrics.linespace+1)*opts->ticks;
    skipcnt = total/opts->height;
  }
}

void ColorbarBase::updateColors()
{
  updateColorCells();

  // fill in xmap
  // make sure we have a pixmap
  if (!pixmap || !xmap)
    return;

  if (!((ColorbarBaseOptions*)options)->orientation) {
    updateColorsHorz();
    TkPutImage(NULL,0,display, pixmap, widgetGC, xmap, 0, 0, 1, 1, 
	      options->width-2, ((ColorbarBaseOptions*)options)->size-2);
  }
  else {
    updateColorsVert();
    TkPutImage(NULL,0,display, pixmap, widgetGC, xmap, 0, 0, 1, 1, 
	      ((ColorbarBaseOptions*)options)->size-2, options->height-2);
  }

  redraw();
}

int ColorbarBase::calcContrastBias(int i, float bias, float contrast)
{
  // if default (contrast = 1.0 && bias = .5) return
  if (fabs(bias - 0.5) < 0.0001 && fabs(contrast - 1.0) < 0.0001)
    return i;
  
  // map i to range of 0 to 1.0
  // shift by bias (if invert, bias = 1-bias)
  // multiply by contrast
  // shift to center of region
  // expand back to number of dynamic colors
  float b = invert ? 1-bias : bias;
  int r = (int)(((((float)i / colorCount) - b) * contrast + .5 ) * colorCount);

  // clip to bounds if out of range
  if (r < 0)
    return 0;
  else if (r >= colorCount)
    return colorCount-1;
  else
    return r;
}

// X11

int ColorbarBase::updatePixmap(const BBox& bb)
{
  // create a valid pixmap
  // assume if no pixmap, no xmap
  // bb is in canvas coords

  // MacOS will generate an Expose event (dark mode), so need to update anyways
  #ifndef MAC_OSX_TK
  if (pixmap)
    return TCL_OK;
  #endif

  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  updateMatrices();

  if (!widgetGC)
    widgetGC = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);

  if (!gridGC_)
    gridGC_ = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);

  if (!pixmap) {
    if (!(pixmap = Tk_GetPixmap(display, Tk_WindowId(tkwin), options->width, 
				options->height, depth))) {
      internalError("Colorbar: Unable to Create Pixmap"); 
      return TCL_OK;

      // Geometry has changed, redefine our marker GCs including clip regions
      updateGCs();
    }
  }
      
  XSetForeground(display, widgetGC, opts->bgColor->pixel);
  XFillRectangle(display, pixmap, widgetGC, 0, 0, 
		 options->width,options->height);

  if (!xmap) {
    if (!opts->orientation) {
      if (!(xmap = XGetImage(display, pixmap, 1, 1,
			     options->width-2,
			     opts->size-2,
			     AllPlanes, ZPixmap))){
	internalError("Colorbar: Unable to Create XImage");
	return TCL_OK;
      }
    }
    else {
      if (!(xmap = XGetImage(display, pixmap, 1, 1,
			     opts->size-2,
			     options->height-2,
			     AllPlanes, ZPixmap))){
	internalError("Colorbar: Unable to Create XImage");
	return TCL_OK;
      }
    }
  }
    
  updateColors();

  if (opts->numerics && opts->space) {
    renderGridAST();
    return TCL_OK;
  }
      
  // we want a border, even with no numerics
  renderGrid();
  
  return TCL_OK;
}

void ColorbarBase::updateMatrices()
{
  widgetToCanvas = Translate(originX, originY);
  short xx, yy;
  Tk_CanvasWindowCoords(canvas, 0, 0, &xx, &yy);
  canvasToWindow = Translate(xx, yy);
  widgetToWindow = widgetToCanvas * canvasToWindow;
}

void ColorbarBase::updateGCs()
{
  // widget clip region
  BBox bbWidget = BBox(0, 0, options->width, options->height);
  Vector sizeWidget = bbWidget.size();

  rectWidget[0].x = (int)bbWidget.ll[0];
  rectWidget[0].y = (int)bbWidget.ll[1];
  rectWidget[0].width = (int)sizeWidget[0];
  rectWidget[0].height = (int)sizeWidget[1];

  // window clip region
  BBox bbWindow = bbWidget * widgetToWindow;
  Vector sizeWindow = bbWindow.size();

  rectWindow[0].x = (int)bbWindow.ll[0];
  rectWindow[0].y = (int)bbWindow.ll[1];
  rectWindow[0].width = (int)sizeWindow[0];
  rectWindow[0].height = (int)sizeWindow[1];

  // gridGC
  setClipRectangles(display, gridGC_, 0, 0, rectWidget, 1, Unsorted);
}

void ColorbarBase::renderGrid()
{
  // just in case (MacOS)
  if (!pixmap)
    return;

  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  // box
  XSetForeground(display, widgetGC, opts->fgColor->pixel);
  if (!opts->orientation)
    XDrawRectangle(display, pixmap, widgetGC, 0, 0,
		   options->width-1, opts->size-1);
  else
    XDrawRectangle(display, pixmap, widgetGC, 0, 0, 
		   opts->size-1, options->height-1);

  if (opts->numerics && lut)
    renderGridNumerics();
}

void ColorbarBase::renderGridNumerics()
{
  // just in case (MacOS)
  if (!pixmap)
    return;

  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  // font
  Tk_Font font = getFont();
  if (!font)
    return; // bad font, we're done
  Tk_FontMetrics metrics;
  Tk_GetFontMetrics(font, &metrics);

  // set font
  XSetFont(display, widgetGC, Tk_FontId(font));

  // generate text
  lutToText(font);

  // tick marks
  int incrcnt=0;
  for (int ii=1; ii<opts->ticks-1; ii++) {
    if (!opts->orientation) {
      // horizontal
      int ww = (int)(ii/double(opts->ticks-1)*opts->width);
      int h = opts->size-1;
      int hh = opts->size-1 + TICKLEN;
      XDrawLine(display, pixmap, widgetGC, ww, h, ww, hh);

      if (!incrcnt) {
	int txtwidth = Tk_TextWidth(font, ticktxt[ii], strlen(ticktxt[ii]));
	int www = ww - txtwidth/2.;
	int hhh = hh + TICKGAP + metrics.ascent;
	Tk_DrawChars(display, pixmap, widgetGC, font, ticktxt[ii], 
		     strlen(ticktxt[ii]), www, hhh);
      }
    }
    else {
      // vertical
      int w = opts->size-1;
      int ww = opts->size-1 + TICKLEN;
      int hh = opts->height - (int)(ii/double(opts->ticks-1)*opts->height);
      XDrawLine(display, pixmap, widgetGC, w, hh, ww, hh);

      if (!incrcnt) {
	int www = ww + TICKGAP;
	int hhh = hh + (metrics.ascent-metrics.descent)/2.;
	Tk_DrawChars(display, pixmap, widgetGC, font, ticktxt[ii], 
		     strlen(ticktxt[ii]), www, hhh);
      }
    }

    if (incrcnt<skipcnt)
      incrcnt++;
    else
      incrcnt=0;
  }

  Tk_FreeFont(font);
}

void ColorbarBase::renderGridAST()
{
  if (grid)
    delete grid;
  grid = NULL;

  if (cnt>1 && lut) {
    grid = new CBGrid(this, cnt, lut);
    if (grid)
      grid->render();
  }
}

// PS

int ColorbarBase::postscriptProc(int prepass)
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  if (!visible)
    return TCL_OK;

  if (prepass)
    return TCL_OK;

  // bar
  Tcl_AppendResult(interp, "gsave\n", NULL);
  ps();
  Tcl_AppendResult(interp, "grestore\n", NULL);

  // numerics
  Tcl_AppendResult(interp, "gsave\n", NULL);
  if (opts->numerics && opts->space && grid)
    psGridAST();
  else
    psGrid();
  Tcl_AppendResult(interp, "grestore\n", NULL);

  return TCL_OK;
}

int ColorbarBase::pdfCmd(Tcl_Obj* pdfObj, Tcl_Size, Tcl_Obj *const [])
{
  if (!visible)
    return TCL_OK;

  if (pdfImage(pdfObj) != TCL_OK)
    return TCL_ERROR;

  return pdfGrid(pdfObj);
}

int ColorbarBase::pdfImage(Tcl_Obj* pdfObj)
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  int width = !opts->orientation ? options->width : opts->size;
  int height = !opts->orientation ? opts->size : options->height;
  if (width <= 0 || height <= 0 || !colorCells || colorCount <= 0)
    return TCL_OK;

  updateColorCells();

  unsigned char* img = new unsigned char[width*height*3];
  memset(img, 0, width*height*3);
  if (!opts->orientation)
    pdfHorz(img, width, height);
  else
    pdfVert(img, width, height);

  char photoName[128];
  snprintf(photoName, sizeof(photoName), "::tksao_pdf_colorbar_%p",
	   (void*)this);

  Tcl_Obj* createObjv[4];
  createObjv[0] = Tcl_NewStringObj("image", -1);
  createObjv[1] = Tcl_NewStringObj("create", -1);
  createObjv[2] = Tcl_NewStringObj("photo", -1);
  createObjv[3] = Tcl_NewStringObj(photoName, -1);

  int rr = CbPdfEvalObjv(interp, 4, createObjv);
  if (rr != TCL_OK) {
    delete [] img;
    return rr;
  }

  Tk_PhotoHandle photo = Tk_FindPhoto(interp, photoName);
  if (!photo) {
    Tcl_AppendResult(interp, "unable to create temporary PDF colorbar image",
		     NULL);
    delete [] img;
    return TCL_ERROR;
  }

  Tk_PhotoImageBlock block;
  block.pixelPtr = img;
  block.width = width;
  block.height = height;
  block.pitch = width*3;
  block.pixelSize = 3;
  block.offset[0] = 0;
  block.offset[1] = 1;
  block.offset[2] = 2;
  block.offset[3] = 0;

  rr = Tk_PhotoPutBlock(interp, photo, &block, 0, 0, width, height,
			TK_PHOTO_COMPOSITE_SET);
  delete [] img;
  if (rr != TCL_OK) {
    CbDeletePhoto(interp, photoName);
    return rr;
  }

  Tcl_Obj* dataObjv[2];
  dataObjv[0] = Tcl_NewStringObj(photoName, -1);
  dataObjv[1] = Tcl_NewStringObj("data", -1);
  rr = CbPdfEvalObjv(interp, 2, dataObjv);
  if (rr != TCL_OK) {
    CbDeletePhoto(interp, photoName);
    return rr;
  }

  Tcl_Obj* dataObj = Tcl_GetObjResult(interp);
  Tcl_IncrRefCount(dataObj);

  Tcl_Obj* addArgs[1];
  addArgs[0] = dataObj;
  rr = CbPdfMethod(interp, pdfObj, "addRawImage", 1, addArgs);
  Tcl_DecrRefCount(dataObj);
  if (rr != TCL_OK) {
    CbDeletePhoto(interp, photoName);
    return rr;
  }

  Tcl_Obj* imageId = Tcl_GetObjResult(interp);
  Tcl_IncrRefCount(imageId);

  double x = originX;
  double y = originY;

  Tcl_Obj* putArgs[9];
  putArgs[0] = imageId;
  putArgs[1] = Tcl_NewDoubleObj(x);
  putArgs[2] = Tcl_NewDoubleObj(y);
  putArgs[3] = Tcl_NewStringObj("-width", -1);
  putArgs[4] = Tcl_NewDoubleObj(width);
  putArgs[5] = Tcl_NewStringObj("-height", -1);
  putArgs[6] = Tcl_NewDoubleObj(height);
  putArgs[7] = Tcl_NewStringObj("-anchor", -1);
  putArgs[8] = Tcl_NewStringObj("nw", -1);
  rr = CbPdfMethod(interp, pdfObj, "putImage", 9, putArgs);
  Tcl_DecrRefCount(imageId);

  if (rr != TCL_OK) {
    Tcl_Obj* errorObj = Tcl_GetObjResult(interp);
    Tcl_IncrRefCount(errorObj);
    CbDeletePhoto(interp, photoName);
    Tcl_SetObjResult(interp, errorObj);
    Tcl_DecrRefCount(errorObj);
    return rr;
  }

  return CbDeletePhoto(interp, photoName);
}

int ColorbarBase::pdfGrid(Tcl_Obj* pdfObj)
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  int width = !opts->orientation ? options->width : opts->size;
  int height = !opts->orientation ? opts->size : options->height;
  if (width <= 0 || height <= 0)
    return TCL_OK;

  double x = originX;
  double y = originY;

  double r = opts->fgColor ? opts->fgColor->red/65535. : 0;
  double g = opts->fgColor ? opts->fgColor->green/65535. : 0;
  double b = opts->fgColor ? opts->fgColor->blue/65535. : 0;

  int rr = TCL_OK;

  rr = CbPdfColor(interp, pdfObj, r, g, b);
  if (rr != TCL_OK)
    return rr;

  rr = CbPdfSetLineWidth(interp, pdfObj, .5);
  if (rr != TCL_OK)
    return rr;

  std::vector<double> box;
  box.push_back(x);
  box.push_back(y);
  box.push_back(x+width);
  box.push_back(y);
  box.push_back(x+width);
  box.push_back(y+height);
  box.push_back(x);
  box.push_back(y+height);
  rr = CbPdfPolygon(interp, pdfObj, box, 1, 0, 1);
  if (rr != TCL_OK)
    return rr;

  if (!opts->numerics || !lut || opts->ticks < 2)
    return TCL_OK;

  Tk_Font font = getFont();
  if (!font)
    return TCL_OK;

  lutToText(font);

  int incrcnt = 0;
  for (int ii=0; rr == TCL_OK && ii<opts->ticks; ii++) {
    if (!opts->orientation) {
      double xx = x + ii/double(opts->ticks-1)*options->width;
      double y1 = y + height;
      double y2 = y1 + TICKLEN;
      rr = CbPdfLine(interp, pdfObj, xx, y1, xx, y2);

      if (rr == TCL_OK && !incrcnt && ticktxt[ii])
	rr = CbPdfText(interp, pdfObj, ticktxt[ii],
		       xx, y2 + TICKGAP + opts->fontSize, "center");
    }
    else {
      double x1 = x + width;
      double x2 = x1 + TICKLEN;
      double yy = y + options->height -
	ii/double(opts->ticks-1)*options->height;
      rr = CbPdfLine(interp, pdfObj, x1, yy, x2, yy);

      if (rr == TCL_OK && !incrcnt && ticktxt[ii])
	rr = CbPdfText(interp, pdfObj, ticktxt[ii],
		       x2 + TICKGAP, yy + opts->fontSize/2., "left");
    }

    if (incrcnt < skipcnt)
      incrcnt++;
    else
      incrcnt = 0;
  }

  Tk_FreeFont(font);

  return rr;
}

void ColorbarBase::ps()
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  int& width = options->width;
  int& height = options->height;
  int& size = opts->size;

  // image
  Vector org = psOrigin();
  if (!opts->orientation)
    org += Vector(0,height-size);
  
  ostringstream str;
  str << org << " translate " << 1 << ' ' << 1 << " scale" << endl;

  int ww = !opts->orientation ? width : size;
  int hh = !opts->orientation ? size : height;
  switch (psLevel) {
  case 1:
    {
      psHead1(str, ww, hh);
      NoCompressAsciiHex filter(psLevel);
      psHV(str, filter, ww, hh);
    }
    break;
  case 2:
    {
      psHead2(str, ww, hh, "RunLength", "ASCII85");
      RLEAscii85 filter(psLevel);
      psHV(str, filter, ww, hh);
    }
    break;
  case 3:
    {
      psHead2(str, ww, hh, "Flate", "ASCII85");
      GZIPAscii85 filter(psLevel);
      psHV(str, filter, ww, hh);
    }
    break;
  }

  str << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void ColorbarBase::psHV(ostream& str, Filter& filter, int width, int height)
{
  if (!((ColorbarBaseOptions*)options)->orientation)
    psHorz(str, filter, width, height);
  else
    psVert(str, filter, width, height);

  filter.flush(str);
}

void ColorbarBase::psGrid()
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  int& width = options->width;
  int& height = options->height;
  int& size = opts->size;

  // box
  int ww,hh;
  Vector org = psOrigin();
  if (!opts->orientation) {
    ww = width;
    hh = size;
    org += Vector(0,height-size);
  }
  else {
    ww = size;
    hh = height;
  }

  Vector ll = Vector(0,0);
  Vector lr = Vector(ww,0);
  Vector ur = Vector(ww,hh);
  Vector ul = Vector(0,hh);

  // set the color
  psColor(psColorSpace,opts->fgColor);

  ostringstream str;
  str << org << " translate " << endl
      << "newpath " << endl
      << ll << " moveto" << endl
      << lr << " lineto" << endl
      << ur << " lineto" << endl
      << ul << " lineto" << endl
      << ll << " lineto" << endl
      << "closepath" << endl
      << .5 << " setlinewidth" << endl
      << "stroke" << endl << ends;

  Tcl_AppendResult(interp, str.str().c_str(), NULL);

  // numerics
  if (opts->numerics && lut)
    psGridNumerics();
}

void ColorbarBase::psGridNumerics()
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  // font
  Tk_Font font = NULL;
  {
    ostringstream fstr;
    fstr << opts->font << ' ' << opts->fontSize << ' ' 
	 << opts->fontWeight << ' ' << opts->fontSlant << ends;
    font = Tk_GetFont(interp, tkwin, fstr.str().c_str());
    if (!font)
      return; // bad font, we're done
  }

  // set font
  {
    ostringstream str;
    str << '/' << psFontName(opts->font, opts->fontWeight, opts->fontSlant)
    	<< " findfont " << int(opts->fontSize*getDisplayRatio())
	<< " scalefont setfont" << endl;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  }

  // generate text
  lutToText(font);

  // set the color
  psColor(psColorSpace,opts->fgColor);

  // tick marks
  int incrcnt=0;
  for (int ii=0; ii<opts->ticks; ii++) {
    if (!opts->orientation) {
      // horizontal
      int ww = (int)(ii/double(opts->ticks-1)*opts->width);
      int h = 0;
      int hh = h-TICKLEN;

      ostringstream str;
      str << "newpath " << endl
	  << Vector(ww,h) << " moveto " << endl
	  << Vector(ww,hh) << " lineto " << endl
	  << "closepath " << endl
	  << .5 << " setlinewidth" << endl
	  << "stroke" << endl << ends;
      Tcl_AppendResult(interp, str.str().c_str(), NULL);

      if (!incrcnt) {
	ostringstream str;
	Vector tt = Vector(ww,hh-TICKGAP);
	str << "newpath " << endl
	    << tt << " moveto" << endl
	    << '(' << psQuote(ticktxt[ii]) << ')' 
	    << "dup true charpath pathbbox " << endl
	    << "closepath " << endl
	    << "3 -1 roll sub 1.2 mul neg " << endl
	    << "3 1 roll sub 2 div exch " << endl
	    << tt << " moveto rmoveto show " << endl;
	Tcl_AppendResult(interp, str.str().c_str(), NULL);
      }
    }
    else {
      // vertical
      int w = opts->size;
      int ww = opts->size + TICKLEN;
      int hh = (int)(ii/double(opts->ticks-1)*opts->height);

      ostringstream str;
      str << "newpath " << endl
	  << Vector(w,hh) << " moveto " << endl
	  << Vector(ww,hh) << " lineto " << endl
	  << "closepath " << endl
	  << .5 << " setlinewidth" << endl
	  << "stroke" << endl << ends;
      Tcl_AppendResult(interp, str.str().c_str(), NULL);

      if (!incrcnt) {
	ostringstream str;
	Vector tt = Vector(ww+TICKGAP,hh);
	str << "newpath " << endl
	    << tt << " moveto" << endl
	    << '(' << psQuote(ticktxt[ii]) << ')' 
	    << "dup true charpath pathbbox " << endl
	    << "closepath " << endl
	    << "3 -1 roll sub 2 div neg " << endl
	    << "3 1 roll pop pop 0 exch " << endl
	    << tt << " moveto rmoveto show " << endl;
	Tcl_AppendResult(interp, str.str().c_str(), NULL);
      }
    }

    if (incrcnt<skipcnt)
      incrcnt++;
    else
      incrcnt=0;
  }

  Tk_FreeFont(font);
}

void ColorbarBase::psGridAST()
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  Vector oo;
  Vector uu(options->width, options->height);
  float delta = 4*opts->fontSize;

  // clip rect (to remove ticks on inside)
  if (!opts->orientation) {
    oo += Vector(-delta,-.5);
    uu += Vector(2*delta,-.75);
  }
  else {
    oo += Vector(-.25,-delta);
    uu += Vector(0,2*delta);
  }

  Matrix mm = Translate(psOrigin());
  Vector ll = oo*mm;
  Vector lr = Vector(uu[0],oo[1])*mm;
  Vector ur = uu*mm;
  Vector ul = Vector(oo[0],uu[1])*mm;

  ostringstream str;
  str << "newpath " << endl
      << ll << " moveto " << endl
      << lr << " lineto " << endl
      << ur << " lineto " << endl
      << ul << " lineto " << endl
      << ll << " lineto " << endl
      << "closepath clip" << endl << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);

  // grid
  if (grid)
    grid->ps(psColorSpace, originX, originY);
}

// Commands

void ColorbarBase::getInvertCmd()
{
  if (invert)
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void ColorbarBase::getValueCmd(int xx, int yy)
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  if (lut && cnt) {
    int id =0;
    ostringstream str;
    if (!opts->orientation) {
      // horizontal
      id = (int)((xx-options->x) / float(options->width) * cnt);
    }
    else {
      // vertical
      id = (int)((options->height - (yy-options->y)) / float(options->height) * cnt);
    }

    if (id<0)
      id = 0;
    if (id>=cnt)
      id = cnt-1;

    str << lut[id] << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  }
  else
    Tcl_AppendResult(interp, NULL);
}

void ColorbarBase::invertCmd(int ii)
{
  invert = ii ? 1 : 0;
  updateColors();
}

void ColorbarBase::setColormapLevelCmd()
{
  if (lut)
    delete [] lut;
  lut = NULL;
  cnt = 0;

  invalidPixmap();
  redraw();
}

void ColorbarBase::setColormapLevelCmd(int cc)
{
  if (!colormaplevelptr_ || !colormaplevelparentptr_)
    return;
  
  double* ff = (double*)colormaplevelptr_;

  // check for the same
  if (cnt == cc) {
    int same = 1;
    for (int ii=0; ii<cc; ii++)
      same &= (lut[ii] == ff[ii]);
    if (same) {
      // reset
      colormaplevelptr_ =NULL;
      colormaplevelparentptr_ =NULL;
      return;
    }
  }

  // remove the old
  if (lut)
    delete [] lut;
  cnt = cc;
  lut = new double[cc];
  for (int ii=0; ii<cc; ii++)
    lut[ii] = ff[ii];

  // clear
  colormaplevelptr_ =NULL;
  colormaplevelparentptr_ =NULL;
    
  invalidPixmap();
  redraw();
}

// RGB
void ColorbarBase::getRGBChannelCmd()
{
  Tcl_AppendResult(interp, "red", NULL);
}

// HSV
void ColorbarBase::getHSVChannelCmd()
{
  Tcl_AppendResult(interp, "hue", NULL);
}

// HLS
void ColorbarBase::getHLSChannelCmd()
{
  Tcl_AppendResult(interp, "hue", NULL);
}

// MacOSX

#ifdef MAC_OSX_TK

void ColorbarBase::macosxPrintCmd()
{
  /*
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  if (!visible)
    return;

  // init
  macosxBegin();

  int ww,hh;
  if (!opts->orientation) {
    ww = options->width;
    hh = opts->size;
  }
  else {
    ww = opts->size;
    hh = options->height;
  }

  // image
  macosx(1, ww, hh, Vector(originX,originY), Vector(ww,hh));

  // grid
  if (opts->numerics && opts->space && grid) {
    macosxGridAST();
    macosxEnd();
    return;
  }

  // we want a border, even if no numerics
  macosxGrid();
  macosxEnd();
  */
}

void ColorbarBase::macosxGrid()
{
  /*
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  int& width = options->width;
  int& height = options->height;
  int& size = opts->size;

  Matrix mm = Translate(originX, originY);

  macosxColor(opts->fgColor);
  macosxDash(NULL,0);
  macosxWidth(.5);

  // Box
  int ww,hh;
  if (!opts->orientation) {
    ww = width;
    hh = size;
  }
  else {
    ww = size;
    hh = height;
  }

  Vector v[5];
  v[0] = Vector(0,0) * mm;
  v[1] = Vector(ww,0) * mm;
  v[2] = Vector(ww,hh) * mm;
  v[3] = Vector(0,hh) * mm;
  v[4] = Vector(0,0) * mm;
  macosxDrawLines(v,5);

  // numerics
  if (opts->numerics && lut)
    macosxGridNumerics();
  */
}

void ColorbarBase::macosxGridNumerics()
{
  /*
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;
  Matrix mm = Translate(originX, originY);

  // font
  Tk_Font font = getFont();
  if (!font)
    return; // bad font, we're done
  Tk_FontMetrics metrics;
  Tk_GetFontMetrics(font, &metrics);

  // set font
  Tcl_DString psFont;
  Tcl_DStringInit(&psFont);
  int psSize = Tk_PostscriptFontName(font, &psFont);
  macosxFont(Tcl_DStringValue(&psFont), psSize);
  Tcl_DStringFree(&psFont);

  // generate text
  lutToText(font);

  // tick marks
  int incrcnt=0;
  for (int ii=0; ii<opts->ticks; ii++) {
    if (!opts->orientation) {
      // horizontal
      int ww = (int)(ii/double(opts->ticks-1)*opts->width);
      int h = opts->size;
      int hh = opts->size + TICKLEN;
      Vector vv[2];
      vv[0] = Vector(ww,h)*mm;
      vv[1] = Vector(ww,hh)*mm;
      macosxDrawLines(vv,2);

      if (!incrcnt) {
	int txtwidth = Tk_TextWidth(font, ticktxt[ii], strlen(ticktxt[ii]));
	int www = ww - txtwidth/2.;
	int hhh = hh + TICKGAP + metrics.ascent;
	macosxDrawText(Vector(www,hhh)*mm, 0, ticktxt[ii]);
      }
    }
    else {
      // vertical
      int w = opts->size;
      int ww = opts->size + TICKLEN;
      int hh = opts->height - (int)(ii/double(opts->ticks-1)*opts->height);
      Vector vv[2];
      vv[0] = Vector(w,hh)*mm;
      vv[1] = Vector(ww,hh)*mm;
      macosxDrawLines(vv,2);

      if (!incrcnt) {
	int www = ww + TICKGAP;
	int hhh = hh + (metrics.ascent-metrics.descent)/2.;
	macosxDrawText(Vector(www,hhh)*mm, 0, ticktxt[ii]);
      }
    }

    if (incrcnt<skipcnt)
      incrcnt++;
    else
      incrcnt=0;
  }

  Tk_FreeFont(font);
  */
}

void ColorbarBase::macosxGridAST()
{
  /*
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  Vector oo(originX, originY);
  Vector uu(options->width, options->height);
  float delta = 4*opts->fontSize;

  if (!opts->orientation) {
    oo += Vector(-delta,-.2);
    uu += Vector(2*delta,-.2);
  }
  else {
    oo += Vector(-.2,-delta);
    uu += Vector(0,2*delta);
  }
  macosxClip(oo,uu);

  if (grid)
    grid->macosx(originX, originY);
  */
}

#endif

// WIN32

#ifdef __WIN32
#include <win32lib.h>

void ColorbarBase::win32PrintCmd()
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  if (!visible)
    return;

  // init
  win32Begin();

  int ww,hh;
  if (!opts->orientation) {
    ww = options->width;
    hh = opts->size;
  }
  else {
    ww = opts->size;
    hh = options->height;
  }

  // image
  win32(1, ww, hh, Vector(originX,originY), Vector(ww,hh));

  // grid
  if (opts->numerics && opts->space && grid) {
    win32GridAST();
    win32End();
  }

  // we want a border, even if no numerics
  win32Grid();
  win32End();
}

void ColorbarBase::win32Grid()
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  int& width = options->width;
  int& height = options->height;
  int& size = opts->size;

  Matrix mm = Translate(originX, originY);

  win32Color(opts->fgColor);
  win32Dash(NULL,0);
  win32Width(.5);

  // box
  int ww,hh;
  if (!opts->orientation) {
    ww = width;
    hh = size;
  }
  else {
    ww = size;
    hh = height;
  }

  Vector v[5];
  v[0] = Vector(0,0) * mm;
  v[1] = Vector(ww,0) * mm;
  v[2] = Vector(ww,hh) * mm;
  v[3] = Vector(0,hh) * mm;
  v[4] = Vector(0,0) * mm;
  win32DrawLines(v,5);

  // numerics
  if (opts->numerics && lut)
    win32GridNumerics();
}

void ColorbarBase::win32GridNumerics()
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;
  Matrix mm = Translate(originX, originY);

  // font
  Tk_Font font = getFont();
  if (!font)
    return; // bad font, we're done
  Tk_FontMetrics metrics;
  Tk_GetFontMetrics(font, &metrics);

  win32Font(font);

  // generate text
  lutToText(font);

  // tick marks
  int incrcnt=0;
  for (int ii=0; ii<opts->ticks; ii++) {
    if (!opts->orientation) {
      // horizontal
      int ww = ii/double(opts->ticks-1)*opts->width;
      int h = opts->size;
      int hh = opts->size + TICKLEN;
      Vector vv[2];
      vv[0] = Vector(ww,h)*mm;
      vv[1] = Vector(ww,hh)*mm;
      win32DrawLines(vv,2);

      if (!incrcnt) {
	int txtwidth = Tk_TextWidth(font, ticktxt[ii], strlen(ticktxt[ii]));
	int www = ww - txtwidth/2.;
	int hhh = hh + TICKGAP + metrics.ascent;
	win32DrawText(Vector(www,hhh)*mm, 0, ticktxt[ii]);
      }
    }
    else {
      // vertical
      int w = opts->size;
      int ww = opts->size + TICKLEN;
      int hh = opts->height - (int)(ii/double(opts->ticks-1)*opts->height);
      Vector vv[2];
      vv[0] = Vector(w,hh)*mm;
      vv[1] = Vector(ww,hh)*mm;
      win32DrawLines(vv,2);

      if (!incrcnt) {
	int www = ww + TICKGAP;
	int hhh = hh + (metrics.ascent-metrics.descent)/2.;
	win32DrawText(Vector(www,hhh)*mm, 0, ticktxt[ii]);
      }
    }

    if (incrcnt<skipcnt)
      incrcnt++;
    else
      incrcnt=0;
  }

  Tk_FreeFont(font);
}

void ColorbarBase::win32GridAST()
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  Vector oo(originX, originY);
  Vector uu(options->width, options->height);
  float delta = 4*opts->fontSize;

  if (!opts->orientation) {
    oo += Vector(-delta,-.2);
    uu += Vector(2*delta,-.2);
  }
  else {
    oo += Vector(-.2,-delta);
    uu += Vector(0,2*delta);
  }
  win32Clip(oo,uu);

  if (grid)
    grid->win32(originX, originY);
}

#endif
