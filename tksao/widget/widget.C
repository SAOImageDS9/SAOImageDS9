// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tkInt.h>

#include "widget.h"
#include "util.h"

// Tk Canvas Widget Functions Declaration

int WidgetConfigProc(Tcl_Interp* interp, Tk_Canvas canvas, Tk_Item* item, 
		     int argc, Tcl_Obj *const argv[], int flags)
{
  return WIDGET(item).configure(argc, (const char**)argv, flags);
}

int WidgetCoordProc(Tcl_Interp* interp, Tk_Canvas canvas, Tk_Item* item, 
		    int argc, Tcl_Obj *const argv[])
{
  return WIDGET(item).coordProc(argc, (char**)argv);
}

void WidgetDeleteProc(Tk_Canvas canvas, Tk_Item* item, Display* display)
{
  delete ((WidgetOptions*)item)->widget;
}

void WidgetDisplayProc(Tk_Canvas canvas, Tk_Item* item, Display* display,
		       Drawable draw, int x, int y, int width, int height)
{
  WIDGET(item).displayProc(draw, x, y, width, height);
}

double WidgetPointProc(Tk_Canvas canvas, Tk_Item* item, double* point)
{
  return WIDGET(item).pointProc(point);
}

int WidgetAreaProc(Tk_Canvas canvas, Tk_Item* item, double* bbox)
{
  return WIDGET(item).areaProc(bbox);
}

int WidgetPostscriptProc(Tcl_Interp* interp, Tk_Canvas canvas,
			 Tk_Item* item, int prepass)
{
  return WIDGET(item).postscriptProc(prepass);
}

void WidgetScaleProc(Tk_Canvas canvas, Tk_Item* item, 
		     double Ox, double Oy , double Sx, double Sy)
{
  WIDGET(item).scaleProc(Ox, Oy, Sx, Sy);
}

void WidgetTranslateProc(Tk_Canvas canvas, Tk_Item* item, double x, double y)
{
  WIDGET(item).translateProc(x, y);
}

int WidgetIndexProc(Tcl_Interp* interp, Tk_Canvas canvas, Tk_Item* item,
		    char indexString, int* indexPtr)
{
  WIDGET(item).indexProc(indexString, indexPtr);
  return 1;
}

void WidgetICursorProc(Tk_Canvas canvas, Tk_Item* item, int index)
{
  WIDGET(item).icursorProc(index);
}

int WidgetSelectionProc(Tk_Canvas canvas, Tk_Item* item,
			int offset, char* buffer, int maxBytes)
{
  WIDGET(item).selectionProc(offset, buffer, maxBytes);
  return 1;
}

void WidgetInsertProc(Tk_Canvas canvas, Tk_Item* item, int index, char* string)
{
  WIDGET(item).insertProc(index, string);
}

void WidgetDCharsProc(Tk_Canvas canvas, Tk_Item* item, int first, int last)
{
  WIDGET(item).dcharsProc(first, last);
}

int WidgetParse(ClientData widget, Tcl_Interp* interp, int argc, 
		const char** argv)
{
  int result;
  Tcl_Preserve(widget);

  if (argc >= 2 && !strncmp(argv[1],"config",6))
    result = ((Widget*)widget)->configCmd(argc-2, argv+2);

  else {
    istringstream istr(ios::in|ios::out);
    ostream ostr(istr.rdbuf());

    for (int i=1; i<argc; i++)
      ostr << argv[i] << " ";
    ostr << ends;

    result = ((Widget*)widget)->parse(istr);
  }

  Tcl_Release(widget);
  return result;
}

// Member Functions

Widget::Widget(Tcl_Interp* interp_, Tk_Canvas canvas_, Tk_Item* item) :
  interp(interp_), canvas(canvas_)
{
  // initialize item ptr to this. This is the method the canvas widget procs
  // know how to call member functions.
  ((WidgetOptions*)item)->widget = this;

  // init members
  options = (WidgetOptions*)item;
  configSpecs = NULL;
  tkwin = Tk_CanvasTkwin(canvas);
  display = Tk_Display(tkwin);
  screenNumber = Tk_ScreenNumber(tkwin);
  visual = Tk_Visual(tkwin);
  depth = Tk_Depth(tkwin);

  pixmap = 0;
  widgetGC = NULL;
  visible = True;

  originX = 0;
  originY = 0;

  // this is needed because of a problem with Tk_ConfigureWidget
  options->cmdName = NULL;

  options->helvetica = NULL;
  options->courier = NULL;
  options->times = NULL;

  options->fgColor = NULL;
  options->bgColor = NULL;

  cmd = NULL;
  result = TCL_OK;

  // postscript
  psLevel = 2;
  psResolution = 300;
  psColorSpace = RGB;
}

Widget::~Widget()
{
  // free the options
  Tk_FreeOptions(configSpecs, (char*)this->options, display, 0);

  // clean up tcl command
  if (cmd) {
    Tcl_DeleteCommand(interp, cmd);
    delete [] cmd;
  }

  // clean up pixmap resources
  if (pixmap)
    Tk_FreePixmap(display, pixmap);

  if (widgetGC)
    XFreeGC(display, widgetGC);
}

void Widget::error(const char* m)
{
  Tcl_AppendResult(interp, m, NULL);
  result = TCL_ERROR;
}

void Widget::msg(const char* m)
{
  Tcl_AppendResult(interp, m, NULL);
}

int Widget::configure(int argc, const char** argv, int flags)
{
  if (Tk_ConfigureWidget(interp, tkwin, configSpecs, argc, argv, 
			 (char*)this->options, flags) != TCL_OK)
    return TCL_ERROR;

  if (flags != TK_CONFIG_ARGV_ONLY) {
    // create command
    createCommand();
    updateBBox();
    invalidPixmap();
  }
  else {
    // configure command
    if (configSpecs[CONFIGCOMMAND].specFlags & TK_CONFIG_OPTION_SPECIFIED)
      createCommand();

    if ((configSpecs[CONFIGX].specFlags & TK_CONFIG_OPTION_SPECIFIED) ||
	(configSpecs[CONFIGY].specFlags & TK_CONFIG_OPTION_SPECIFIED) ||
	(configSpecs[CONFIGWIDTH].specFlags & TK_CONFIG_OPTION_SPECIFIED) ||
	(configSpecs[CONFIGHEIGHT].specFlags & TK_CONFIG_OPTION_SPECIFIED) ||
	(configSpecs[CONFIGANCHOR].specFlags & TK_CONFIG_OPTION_SPECIFIED))
      updateBBox();

    if ((configSpecs[CONFIGWIDTH].specFlags & TK_CONFIG_OPTION_SPECIFIED) ||
	(configSpecs[CONFIGHEIGHT].specFlags & TK_CONFIG_OPTION_SPECIFIED))
      invalidPixmap();

    if ((configSpecs[CONFIGX].specFlags & TK_CONFIG_OPTION_SPECIFIED) ||
	(configSpecs[CONFIGY].specFlags & TK_CONFIG_OPTION_SPECIFIED) ||
	(configSpecs[CONFIGWIDTH].specFlags & TK_CONFIG_OPTION_SPECIFIED) ||
	(configSpecs[CONFIGHEIGHT].specFlags & TK_CONFIG_OPTION_SPECIFIED) ||
	(configSpecs[CONFIGANCHOR].specFlags & TK_CONFIG_OPTION_SPECIFIED))
      redraw();
  }

  return TCL_OK;
}

// Required Canvas Functions

int Widget::coordProc(int argc, char** argv)
{
  char xStr[TCL_DOUBLE_SPACE], yStr[TCL_DOUBLE_SPACE];

  switch (argc) {

    // print the current values
  case 0:
    Tcl_PrintDouble(interp, options->x, xStr);
    Tcl_PrintDouble(interp, options->y, yStr);
    Tcl_AppendResult(interp, xStr, " ", yStr, NULL);
    return TCL_OK;

    // set current x&y to new values
  case 2: {
    double x0, y0;
    if ((Tk_CanvasGetCoord(interp, canvas, argv[0], &x0) != TCL_OK) ||
	(Tk_CanvasGetCoord(interp, canvas, argv[1], &y0) != TCL_OK))
	    return TCL_ERROR;
    options->x = (int)x0;
    options->y = (int)y0;
    updateBBox();
    return TCL_OK;
  }

 // else, error message
  default:
    Tcl_AppendResult(interp, "wrong # coordinates: expected 0 or 2", NULL);
    return TCL_ERROR;
  }
}

// Widget Display Procedure. It takes the contents of the pixmap and
// after clipping, copies it into the drawable.

void Widget::displayProc(Drawable draw, int clipX, int clipY, 
			int clipWidth, int clipHeight)
{
  if (visible == False)
    return;

  // create bbox
  BBox bb(clipX, clipY, clipX+clipWidth, clipY+clipHeight);

  // update the pixmap from ximage/graphics
  if (updatePixmap(bb) != TCL_OK)
    return; // something is wrong, bail out

  // just in case (MacOS)
  if (!pixmap)
    return;

  // define pixmap clip region
  // NOTE: it appears that the canvas coord system is 1 to n, width/height = n
  // with the original of value 1,1 located at upper left corner
  int pmX, pmY, pmWidth, pmHeight;

  if (clipX > options->item.x1) {
    pmX = clipX - options->item.x1;
    pmWidth = options->item.x2 - clipX;
  }
  else {
    pmX = 0;
    if ((clipX + clipWidth) < options->item.x2)
      pmWidth = clipX + clipWidth - options->item.x1;
    else
      pmWidth = options->item.x2 - options->item.x1;
  }

  if (clipY > options->item.y1) {
    pmY = clipY - options->item.y1;
    pmHeight = options->item.y2 - clipY;
  } 
  else {
    pmY = 0;
    if ((clipY + clipHeight) < options->item.y2)
      pmHeight = clipY + clipHeight - options->item.y1;
    else
      pmHeight = options->item.y2 - options->item.y1;
  }

  // convert to canvas coords
  short drawX, drawY;
  Tk_CanvasDrawableCoords(canvas, (double)(options->item.x1 + pmX),
			  (double)(options->item.y1 + pmY), &drawX, &drawY);

  // just in case
  if (!widgetGC)
    widgetGC = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);

  // set the clip region and copy the pixmap into the drawable
  XSetClipOrigin(display, widgetGC, drawX - pmX, drawY - pmY);
  XCopyArea(display, pixmap, draw, widgetGC, pmX, pmY, (unsigned int) pmWidth,
	    (unsigned int) pmHeight, drawX, drawY);
}

double Widget::pointProc(double* point)
{
  double xdiff, ydiff;

  if (point[0] < options->item.x1)
    xdiff = options->item.x1 - point[0];
  else if (point[0] > options->item.x2)
    xdiff = point[0] - options->item.x2;
  else
    xdiff = 0;

  if (point[1] < options->item.y1)
    ydiff = options->item.y1 - point[1];
  else if (point[1] > options->item.y2)
    ydiff = point[1] - options->item.y2;
  else
    ydiff = 0;

  return hypot(xdiff, ydiff);
}

int Widget::areaProc(double* bbox)
{
  if ((bbox[2] <= options->item.x1) || (bbox[0] >= options->item.x2) ||
      (bbox[3] <= options->item.y1) || (bbox[1] >= options->item.y2))
    return -1; // item is outside bbox

  if ((bbox[0] <= options->item.x1) && (bbox[1] <= options->item.y1) &&
      (bbox[2] >= options->item.x2) && (bbox[3] >= options->item.y2))
    return 1; // item is inside bbox

  return 0;   // item overlaps bbox
}

int Widget::postscriptProc(int prepass)
{
  return TCL_OK;
}

void Widget::scaleProc(double Ox, double Oy, double Sx, double Sy)
{
  // translate to (Ox,Oy), scale by (Sx,Sy), translate back from (Ox,Oy)
  options->x = (int)(Ox + (Sx * (options->x - Ox)));
  options->y = (int)(Oy + (Sy * (options->y - Oy)));
  options->width = (int)(options->width * Sx);
  options->height = (int)(options->height * Sy);

  updateBBox();
  invalidPixmap();  // width and height have changed
}

void Widget::translateProc(double deltaX, double deltaY)
{
  options->x += (int)deltaX;
  options->y += (int)deltaY;

  updateBBox();
}

// Subcommand Functions

int Widget::configCmd(int argc, const char** argv)
{
  switch (argc) {
  case 0:
    return Tk_ConfigureInfo(interp, tkwin, configSpecs, (char*)this->options, NULL, 0);
  case 1:
    return Tk_ConfigureInfo(interp, tkwin, configSpecs, 
			    (char*)this->options, argv[0],0);
  default:
    return configure(argc, argv, TK_CONFIG_ARGV_ONLY);
  }
}

void Widget::getHeightCmd()
{
  ostringstream str;
  str << options->height << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Widget::getWidthCmd()
{
  ostringstream str;
  str << options->width << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Widget::hideCmd()
{
  visible = False;
  redraw();
}

void Widget::queryCursorCmd()
{
    Window root, child;
    int rootx,rooty,winx,winy;
    unsigned int msk;
    XQueryPointer(display,Tk_WindowId(tkwin),&root,&child,
		  &rootx,&rooty,&winx,&winy,&msk);

#ifdef MAC_OSX_TK
    // XQueryPointer: Only a partial implementation
    // only rootx,rooty are valid
    int xx,yy;
    Tk_GetRootCoords(tkwin,&xx,&yy);
    winx = rootx-xx;
    winy = rooty-yy;
#endif

#ifdef _WIN32
    winx = rootx;
    winy = rooty;
#endif

    ostringstream str;
    str << winx << ' ' << winy << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Widget::resetCmd()
{
  reset();
  invalidPixmap(); 
  redraw();
}

void Widget::showCmd()
{
  visible = True;
  redraw();
}

// Private Member Functions

void Widget::createCommand()
{
  if (cmd) {
    Tcl_DeleteCommand(interp, cmd);
    if (cmd)
      delete [] cmd;
  }

  cmd = new char[strlen(options->cmdName)+1];
  strcpy(cmd, options->cmdName);
  Tcl_CreateCommand(interp, cmd, WidgetParse, (ClientData)this, NULL);
}

int Widget::checkArgs(int should, int argc, char** argv)
{
  // if should is negative, don't check
  if (should >= 0) {
    if (should != argc) {
      ostringstream str;
      str << should << '\0';
      Tcl_AppendResult(interp, "wrong # args: requires ", str.str().c_str(),
		       " args.", NULL);
      return TCL_ERROR;
    }
    else
      return TCL_OK;
  }

  return TCL_OK;
}

double Widget::getDisplayRatio()
{
#ifdef MAC_OSX_TK
  return 1.416;
#else
  return 25.4/72 * 
    DisplayWidth(display, screenNumber) /
    DisplayWidthMM(display, screenNumber);
#endif
}

void Widget::invalidPixmap()
{
  if (pixmap)
    Tk_FreePixmap(display, pixmap);
  pixmap = 0;
}

void Widget::clearPixmap()
{
  // just in case (MacOS)
  if (!pixmap)
    return;

  XSetForeground(display, widgetGC, options->bgColor->pixel);
  XFillRectangle(display, pixmap, widgetGC, 0, 0,
		 options->width, options->height);
}

void Widget::redraw()
{
  Tk_CanvasEventuallyRedraw(canvas, options->item.x1, options->item.y1, 
			    options->item.x2, options->item.y2);
}

void Widget::redraw(BBox bb)
{
  // bb in canvas coords
  Tk_CanvasEventuallyRedraw(canvas, (int)bb.ll[0], (int)bb.ll[1], 
			    (int)bb.ur[0]+1, (int)bb.ur[1]+1);
}

void Widget::redrawNow()
{
  Tk_CanvasEventuallyRedraw(canvas, options->item.x1, options->item.y1, 
			    options->item.x2, options->item.y2);
  Tcl_DoOneEvent(TCL_IDLE_EVENTS);
}

void Widget::redrawNow(BBox bb)
{
  // bb in canvas coords
  Tk_CanvasEventuallyRedraw(canvas, (int)bb.ll[0], (int)bb.ll[1], 
			    (int)bb.ur[0]+1, (int)bb.ur[1]+1);
  Tcl_DoOneEvent(TCL_IDLE_EVENTS);
}

// Update Bounding Box. For image at (n,n) with size (m,m), 
// bbox is defined from (n,n) to (n+m,n+m)

void Widget::updateBBox()
{
  originX = options->x;
  originY = options->y;

  int& ww = options->width;
  int& hh = options->height;

  // Modify position point using anchor information.
  switch (options->anchor) {
  case TK_ANCHOR_N:
    originX -= ww/2;
    break;
  case TK_ANCHOR_NE:
    originX -= ww;
    break;
  case TK_ANCHOR_E:
    originX -= ww;
    originY -= hh/2;
    break;
  case TK_ANCHOR_SE:
    originX -= ww;
    originY -= hh;
    break;
  case TK_ANCHOR_S:
    originX -= ww/2;
    originY -= hh;
    break;
  case TK_ANCHOR_SW:
    originY -= hh;
    break;
  case TK_ANCHOR_W:
    originY -= hh/2;
    break;
  case TK_ANCHOR_NW:
    break;
  case TK_ANCHOR_CENTER:
    originX -= ww/2;
    originY -= hh/2;
    break;
  }

  // Update item item
  options->item.x1 = originX;
  options->item.y1 = originY;
  options->item.x2 = originX + options->width;
  options->item.y2 = originY + options->height;
}

int Widget::getColor(const char* str)
{
  XColor* cc = getXColor(str);
  if (cc)
    return cc->pixel;
  else {
    internalError("Invalid color, setting to white");
    return getXColor("white")->pixel;
  }
}

XColor* Widget::getXColor(const char* str)
{
  XColor* cc= NULL;
  // starting with tk8.6, colors are W3C based, not X11
  if (!strncmp(str,"green",5) || !strncmp(str,"GREEN",5))
    cc = Tk_GetColor(interp, tkwin, "lime");
  else
    cc = Tk_GetColor(interp, tkwin, str);
  
  return cc;
};

#if !(_WIN32 || MAC_OSX_TK)
void Widget::warp(Vector& vv)
{
  XWarpPointer(display, None, None, 0, 0, 0, 0, vv[0], vv[1]);
}

void Widget::warpTo(Vector& vv)
{
  XWarpPointer(display, None, Tk_WindowId(tkwin), 0, 0, 0, 0, vv[0], vv[1]);
}

int Widget::setClipRectangles(Display *d, GC gc, int x, int y,
			      XRectangle* rects, int n, int order)
{
  return XSetClipRectangles(d, gc, x, y, rects, n, order);
}
#endif

#ifdef MAC_OSX_TK

void Widget::warp(Vector& vv)
{
  XWarpPointer(display, None, None, 0, 0, 0, 0, vv[0], vv[1]);
}

void Widget::warpTo(Vector& vv)
{
  XWarpPointer(display, None, Tk_WindowId(tkwin), 0, 0, 0, 0, vv[0], vv[1]);
}

#endif

#ifdef _WIN32
void Widget::warp(Vector& vv)
{
  Window root, child;
  int rootx,rooty,winx,winy;
  unsigned int msk;
  XQueryPointer(display,Tk_WindowId(tkwin),&root,&child,
		&rootx,&rooty,&winx,&winy,&msk);
  int xx,yy;
  Tk_GetRootCoords(tkwin,&xx,&yy);

  XWarpPointer(display, None, Tk_WindowId(tkwin), 0, 0, 0, 0, 
	       rootx-xx+vv[0], rooty-yy+vv[1]);
}

void Widget::warpTo(Vector& vv)
{
  XWarpPointer(display, None, Tk_WindowId(tkwin), 0, 0, 0, 0, vv[0], vv[1]);
}
#endif

#if (_WIN32 || MAC_OSX_TK)
#include <tkInt.h>

int Widget::setClipRectangles(Display *d, GC gc, int x, int y,
		       XRectangle* rects, int n, int order)
{
  TkRegion clipRgn = TkCreateRegion();

  while (n--) {
    XRectangle rect = *rects;

    rect.x += x;
    rect.y += y;
    TkUnionRectWithRegion(&rect, clipRgn, clipRgn);
    rects++;
  }
  TkSetRegion(d, gc, clipRgn);
  TkDestroyRegion(clipRgn);
  return 1;
}
#endif

Vector Widget::TkCanvasPs(const Vector& v) {
  return Vector(v[0], Tk_CanvasPsY(canvas, v[1]));
}

void Widget::psHead1(ostream& str, int width, int height)
{
  switch (psColorSpace) {
  case BW:
  case GRAY:
    str << "/picstr " << dec << width << " string def" << endl
	<< width << ' ' << height << " 8 matrix" << endl
	<< "{currentfile picstr readhexstring pop}" << endl
	<< "image" << endl;
    break;
  case RGB:
  case CMYK:
    str << "/picstr " << dec << width*3 << " string def" << endl
	<< width << ' ' << height << " 8 matrix" << endl
	<< "{currentfile picstr readhexstring pop}" << endl
	<< "false 3 colorimage" << endl;
    break;
  }
}

void Widget::psHead2(ostream& str, int width, int height, const char* compress, 
		     const char* decode)
{
  switch (psColorSpace) {
  case BW:
  case GRAY:
    str << "/DeviceGray setcolorspace" << endl;
    break;
  case RGB:
    str << "/DeviceRGB setcolorspace" << endl;
    break;
  case CMYK:
    str << "/DeviceCMYK setcolorspace" << endl;
    break;
  }

  str << "<<" << endl
      << "/ImageType 1" << endl
      << "/Width " << dec << width << endl
      << "/Height " << dec << height << endl
      << "/BitsPerComponent 8" << endl;

  switch (psColorSpace) {
  case BW:
  case GRAY:
    str << "/Decode [0 1]" << endl;
    break;
  case RGB:
    str << "/Decode [0 1 0 1 0 1]" << endl;
    break;
  case CMYK:
    str << "/Decode [0 1 0 1 0 1 0 1]" << endl;
    break;
  }

  str << "/ImageMatrix matrix" << endl
      << "/DataSource currentfile" << endl;

  if (decode)
    str << "/" << decode << "Decode filter" << endl;

  if (compress)
    str << "/" << compress << "Decode filter" << endl;

  str << ">>" << endl
      << "image" << endl;
}

// compute coordinates of lower-left corner of the image
// taking into account the anchor position for the image.
// this mapping is different than in widget.c, due to postscript origin 
// (y is flipped)

Vector Widget::psOrigin()
{
  double xx = options->x;
  double yy = Tk_CanvasPsY(canvas, options->y);

  double ww = options->width;
  double hh = options->height;

  switch (options->anchor) {
  case TK_ANCHOR_N:
    xx -= ww/2;
    yy -= hh;
    break;
  case TK_ANCHOR_NE:
    xx -= ww;
    yy -= hh;
    break;
  case TK_ANCHOR_E:
    xx -= ww;
    yy -= hh/2;
    break;
  case TK_ANCHOR_SE:
    xx -= ww;
    break;
  case TK_ANCHOR_S:
    xx -= ww/2;
    break;
  case TK_ANCHOR_SW:
    break;
  case TK_ANCHOR_W:
    yy -= hh/2;
    break;
  case TK_ANCHOR_NW:
    yy -= hh;
    break;
  case TK_ANCHOR_CENTER:
    xx -= ww/2;
    yy -= hh/2;
    break;
  }

  return Vector(xx,yy);
}

void Widget::psColor(PSColorSpace mode, XColor* clr)
{
  ostringstream str;

  switch (mode) {
  case BW:
  case GRAY:
    psColorGray(clr, str);
    str << " setgray";
    break;
  case RGB:
    psColorRGB(clr, str);
    str << " setrgbcolor";
    break;
  case CMYK:
    psColorCMYK(clr, str);
    str << " setcmykcolor";
    break;
  }
  str << endl << ends;

  Tcl_AppendResult(interp, (char*)str.str().c_str(), NULL);
}
