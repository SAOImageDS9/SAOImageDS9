// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tkInt.h>

#include "util.h"
#include "colorbarbase.h"
#include "cbgrid.h"
#include "ps.h"

#define TICKLEN 3
#define TICKGAP 7

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
}

int ColorbarBase::configure(int argc, const char* argv[], int flags)
{
  if (Widget::configure(argc, argv, flags) == TCL_ERROR)
    return TCL_ERROR;

  // only valid for the initial configuration call
  if (flags != TK_CONFIG_ARGV_ONLY)
    return initColormap();
  else {
    if ((configSpecs[CONFIGORIENTATION].specFlags&TK_CONFIG_OPTION_SPECIFIED) ||
	(configSpecs[CONFIGNUMERICS].specFlags & TK_CONFIG_OPTION_SPECIFIED) ||
	(configSpecs[CONFIGSIZE].specFlags & TK_CONFIG_OPTION_SPECIFIED) ||
	(configSpecs[CONFIGFONT].specFlags & TK_CONFIG_OPTION_SPECIFIED) ||
	(configSpecs[CONFIGFONTSTYLE].specFlags & TK_CONFIG_OPTION_SPECIFIED) ||
	(configSpecs[CONFIGFONTSIZE].specFlags & TK_CONFIG_OPTION_SPECIFIED) ||
	(configSpecs[CONFIGSPACE].specFlags & TK_CONFIG_OPTION_SPECIFIED) ||
	(configSpecs[CONFIGCOLORS].specFlags & TK_CONFIG_OPTION_SPECIFIED) ||
	(configSpecs[CONFIGTICKS].specFlags & TK_CONFIG_OPTION_SPECIFIED)) {
      updateBBox();

      invalidPixmap();
      redraw();
    }
  }
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
    else
      prec = 1;
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

int ColorbarBase::initColormap()
{
  colorCount = (((ColorbarBaseOptions*)options)->colors);
  colorCells = new unsigned char[colorCount*3];

  // needed to initialize colorCells
  reset();

  return TCL_OK;
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

void ColorbarBase::getValueCmd(int x, int y)
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  if (lut && cnt) {
    int id =0;
    ostringstream str;
    if (!opts->orientation) {
      // horizontal
      id = (int)(x/float(options->width) * cnt);
    }
    else {
      // vertical
      id = (int)((options->height -y)/float(options->height) * cnt);
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

void ColorbarBase::setColormapLevelCmd(int cc, double* ff)
{
  // check for the same
  if (cnt == cc) {
    int same = 1;
    for (int ii=0; ii<cc; ii++)
      same &= (lut[ii] == ff[ii]);
    if (same)
      return;
  }

  // remove the old
  if (lut)
    delete [] lut;
  cnt = cc;
  lut = new double[cc];
  for (int ii=0; ii<cc; ii++)
    lut[ii] = ff[ii];

  invalidPixmap();
  redraw();
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


