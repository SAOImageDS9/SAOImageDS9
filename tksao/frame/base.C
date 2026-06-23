// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tkInt.h>

#include "util.h"
#include "base.h"
#include "context.h"
#include "fitsimage.h"
#include "marker.h"
#include "wcsast.h"
#include "ps.h"
#include "psutil.h"

#include "circle.h"
#include "ellipse.h"
#include "box.h"
#include "annulus.h"
#include "point.h"
#include "vect.h"

#include "tkColor.h"

#include <algorithm>
#include <vector>

static int EvalObjv(Tcl_Interp* interp, Tcl_Size objc, Tcl_Obj** objv)
{
  for (Tcl_Size ii=0; ii<objc; ii++)
    Tcl_IncrRefCount(objv[ii]);

  int rr = Tcl_EvalObjv(interp, objc, objv, TCL_EVAL_GLOBAL);

  for (Tcl_Size ii=0; ii<objc; ii++)
    Tcl_DecrRefCount(objv[ii]);

  return rr;
}

static int PdfMethod(Tcl_Interp* interp, Tcl_Obj* pdfObj, const char* method,
		     Tcl_Size objc, Tcl_Obj** args)
{
  Tcl_Obj** objv = new Tcl_Obj*[objc+2];
  objv[0] = pdfObj;
  objv[1] = Tcl_NewStringObj(method, -1);
  for (Tcl_Size ii=0; ii<objc; ii++)
    objv[ii+2] = args[ii];

  int rr = EvalObjv(interp, objc+2, objv);
  delete [] objv;

  return rr;
}

static int PdfColor(Tcl_Interp* interp, Tcl_Obj* pdfObj,
		    double r, double g, double b)
{
  Tcl_Obj* args[3];
  args[0] = Tcl_NewDoubleObj(r);
  args[1] = Tcl_NewDoubleObj(g);
  args[2] = Tcl_NewDoubleObj(b);

  if (PdfMethod(interp, pdfObj, "setStrokeColor", 3, args) != TCL_OK)
    return TCL_ERROR;

  args[0] = Tcl_NewDoubleObj(r);
  args[1] = Tcl_NewDoubleObj(g);
  args[2] = Tcl_NewDoubleObj(b);

  return PdfMethod(interp, pdfObj, "setFillColor", 3, args);
}

static int PdfLine(Tcl_Interp* interp, Tcl_Obj* pdfObj,
		   double x1, double y1, double x2, double y2)
{
  Tcl_Obj* args[4];
  args[0] = Tcl_NewDoubleObj(x1);
  args[1] = Tcl_NewDoubleObj(y1);
  args[2] = Tcl_NewDoubleObj(x2);
  args[3] = Tcl_NewDoubleObj(y2);

  return PdfMethod(interp, pdfObj, "line", 4, args);
}

static int PdfPolygon(Tcl_Interp* interp, Tcl_Obj* pdfObj,
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

  int rr = PdfMethod(interp, pdfObj, "polygon", objc, args);
  delete [] args;

  return rr;
}

static int PdfCircle(Tcl_Interp* interp, Tcl_Obj* pdfObj,
		     double x, double y, double r, int filled, int stroke)
{
  Tcl_Obj* args[7];
  args[0] = Tcl_NewDoubleObj(x);
  args[1] = Tcl_NewDoubleObj(y);
  args[2] = Tcl_NewDoubleObj(r);
  args[3] = Tcl_NewStringObj("-filled", -1);
  args[4] = Tcl_NewIntObj(filled);
  args[5] = Tcl_NewStringObj("-stroke", -1);
  args[6] = Tcl_NewIntObj(stroke);

  return PdfMethod(interp, pdfObj, "circle", 7, args);
}

static int PdfSetLineWidth(Tcl_Interp* interp, Tcl_Obj* pdfObj, double width)
{
  Tcl_Obj* args[1];
  args[0] = Tcl_NewDoubleObj(width);

  return PdfMethod(interp, pdfObj, "setLineWidth", 1, args);
}

static int PdfSetLineDash(Tcl_Interp* interp, Tcl_Obj* pdfObj,
			  const std::vector<double>& pattern, double offset)
{
  if (pattern.empty())
    return PdfMethod(interp, pdfObj, "setLineDash", 0, NULL);

  std::vector<double> pdfPattern = pattern;
  if (pdfPattern.size() % 2) {
    size_t count = pdfPattern.size();
    for (size_t ii=0; ii<count; ii++)
      pdfPattern.push_back(pdfPattern[ii]);
  }

  Tcl_Size objc = pdfPattern.size();
  if (fabs(offset) > FLT_EPSILON)
    objc++;

  Tcl_Obj** args = new Tcl_Obj*[objc];
  Tcl_Size jj = 0;
  for (size_t ii=0; ii<pdfPattern.size(); ii++)
    args[jj++] = Tcl_NewDoubleObj(pdfPattern[ii]);

  if (fabs(offset) > FLT_EPSILON)
    args[jj++] = Tcl_NewDoubleObj(offset);

  int rr = PdfMethod(interp, pdfObj, "setLineDash", objc, args);
  delete [] args;

  return rr;
}

static void PdfParseDashToken(const string& tok, std::vector<double>& pattern)
{
  string item;
  for (size_t ii=0; ii<tok.length(); ii++) {
    char cc = tok[ii];
    if (cc == '[' || cc == ']') {
      if (!item.empty()) {
	char* end = NULL;
	double val = strtod(item.c_str(), &end);
	if (end && *end == '\0')
	  pattern.push_back(val);
	item.erase();
      }
    }
    else
      item += cc;
  }

  if (!item.empty()) {
    char* end = NULL;
    double val = strtod(item.c_str(), &end);
    if (end && *end == '\0')
      pattern.push_back(val);
  }
}

static int PdfText(Tcl_Interp* interp, Tcl_Obj* pdfObj, const string& text,
		   double x, double y, const string& fontName,
		   double fontSize, double angle)
{
  Tcl_Obj* fontArgs[2];
  fontArgs[0] = Tcl_NewDoubleObj(fontSize);
  fontArgs[1] = Tcl_NewStringObj(fontName.c_str(), -1);
  if (PdfMethod(interp, pdfObj, "setFont", 2, fontArgs) != TCL_OK)
    return TCL_ERROR;

  Tcl_Obj* args[9];
  args[0] = Tcl_NewStringObj(text.c_str(), -1);
  args[1] = Tcl_NewStringObj("-x", -1);
  args[2] = Tcl_NewDoubleObj(x);
  args[3] = Tcl_NewStringObj("-y", -1);
  args[4] = Tcl_NewDoubleObj(y);
  args[5] = Tcl_NewStringObj("-align", -1);
  args[6] = Tcl_NewStringObj("left", -1);
  args[7] = Tcl_NewStringObj("-angle", -1);
  args[8] = Tcl_NewDoubleObj(angle);

  return PdfMethod(interp, pdfObj, "text", 9, args);
}

static size_t PdfTextMaxLineLength(const string& text)
{
  size_t maxLen = 0;
  size_t curLen = 0;

  for (size_t ii=0; ii<text.length(); ii++) {
    if (text[ii] == '\n') {
      if (curLen > maxLen)
	maxLen = curLen;
      curLen = 0;
    }
    else
      curLen++;
  }

  return curLen > maxLen ? curLen : maxLen;
}

static void PdfTextPathBBox(const string& text, double fontSize,
			    double* llx, double* lly, double* urx, double* ury)
{
  double width = PdfTextMaxLineLength(text) * fontSize * .6;
  *llx = 0;
  *lly = -fontSize * .2;
  *urx = width;
  *ury = fontSize * .8;
}

static void PdfRollStack(std::vector<double>& stack, int count, int shift)
{
  if (count <= 0 || (size_t)count > stack.size())
    return;

  shift %= count;
  if (shift < 0)
    shift += count;
  if (!shift)
    return;

  std::vector<double>::iterator first = stack.end() - count;
  std::vector<double>::iterator middle = stack.end() - shift;
  std::rotate(first, middle, stack.end());
}

static void PdfAppendBezier(std::vector<double>& path, double x0, double y0,
			    double x1, double y1, double x2, double y2,
			    double x3, double y3)
{
  double chord = hypot(x3-x0, y3-y0);
  double ctrl = hypot(x1-x0, y1-y0) + hypot(x2-x1, y2-y1) +
    hypot(x3-x2, y3-y2);
  int steps = (int)ceil(max(chord, ctrl)/8.);
  if (steps < 8)
    steps = 8;
  if (steps > 64)
    steps = 64;

  if (path.empty()) {
    path.push_back(x0);
    path.push_back(y0);
  }

  for (int ii=1; ii<=steps; ii++) {
    double t = (double)ii/steps;
    double u = 1-t;
    double x = u*u*u*x0 + 3*u*u*t*x1 + 3*u*t*t*x2 + t*t*t*x3;
    double y = u*u*u*y0 + 3*u*u*t*y1 + 3*u*t*t*y2 + t*t*t*y3;
    path.push_back(x);
    path.push_back(y);
  }
}

static int DeletePhoto(Tcl_Interp* interp, const char* photoName)
{
  Tcl_Obj* deleteObjv[3];
  deleteObjv[0] = Tcl_NewStringObj("image", -1);
  deleteObjv[1] = Tcl_NewStringObj("delete", -1);
  deleteObjv[2] = Tcl_NewStringObj(photoName, -1);

  return EvalObjv(interp, 3, deleteObjv);
}

// Debug
int DebugBin= 0;
int DebugBlock= 0;
int DebugCompress= 0;
int DebugCrop= 0;
int DebugGZ= 0;
int DebugMosaic= 0;
int DebugPerf= 0;
int DebugRGB= 0;
int DebugWCS= 0;

// Parser Stuff
#undef yyFlexLexer
#define yyFlexLexer frFlexLexer
#include <FlexLexer.h>

void* frlval;
extern int frparse(Base*, frFlexLexer*);

int frlex(void* vval, frFlexLexer* ll)
{
  frlval = vval;
  return ll ? ll->yylex() : 0;
}

void frerror(Base* fr, frFlexLexer* ll, const char* m)
{
  fr->error(m);
  const char* cmd = ll ? ll->YYText() : (const char*)NULL;
  if (cmd && cmd[0] != '\n') {
    fr->error(": ");
    fr->error(cmd);
  }
}

// Base Member Functions

Base::Base(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item) 
  : Widget(i, c, item)
{
  // assumes top window has been realized at this point
  widgetGC = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);

  nthreads_ = 8;

  colorCount = 0;
  colorCells = NULL;

  byteorder_ = 0;
  bitsperpixel_ = 0;

  baseXImage = NULL;
  basePixmap = 0;
  needsUpdate = NOUPDATE;

  currentContext = NULL;
  keyContext = NULL;

  orientation = Coord::NORMAL;
  zoom_ = Vector(1,1);
  rotation = 0;

  rotateRotation = 0;

  preservePan = 0;

  pannerPixmap = 0;
  pannerXImage = NULL;
  pannerWidth = 0;
  pannerHeight = 0;
  pannerName[0] = '\0';
  usePanner = 0;

  magnifierPixmap = 0;
  magnifierXImage = NULL;
  magnifierWidth = 0;
  magnifierHeight = 0;
  magnifierZoom_ = 4;
  magnifierName[0] = '\0';
  useMagnifier = 0;
  useMagnifierGraphics = 1;
  useMagnifierCursor = 1;
  magnifierColorName = dupstr("white");

  doAnts =0;
  doAnts3d =0;

  wcsSystem_ = Coord::WCS;
  wcsSkyFrame_ = Coord::ICRS;
  wcsSkyFormat_ = Coord::DEGREES;

  wcsAlign_ = 0;

  xySystem_ = Coord::IMAGE;
  xySky_ = Coord::ICRS;

  wcsOrientation = Coord::NORMAL;
  wcsRotation = 0;

  irafAlign_ =1;
  irafOrientation_ = (Coord::Orientation)-1;

  invert = 0;

  useHighlite = 0;
  highliteColourName = dupstr("blue");
  highliteGC_ = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);

  useCrosshair = 0;

  precLinear_ = 8;
  precDeg_ = 7;
  precHMS_ = 4;
  precDMS_ = 3;
  precLenLinear_ = 8;
  precLenDeg_ = 7;
  precArcmin_ = 5;
  precArcsec_ = 3;
  precAngle_ = 8;

  markerEpsilon = 3;
  showMarkers = 1;
  showMarkersText = 1;
  centroidAuto = 0;
  centroidIteration = 5;
  centroidRadius = 10;
  preserveMarkers = 0;

  useMarkerColor_ =0;
  markerColor_ = dupstr("green");

  markerGC_ = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);
  markerGCXOR_ = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);
  selectGCXOR = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);

  grid = NULL;
  gridGC_ = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);

  contourGC_ = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);

  useBgColor = 0;
  bgColourName = dupstr("white");
  nanColourName = dupstr("white");

  dlist[0] = 8;
  dlist[1] = 3;

  colorbartag =NULL;

  markers = &userMarkers;
  undoMarkers = &undoUserMarkers;
  pasteMarkers = &pasteUserMarkers;
  undoMarkerType = NONE;

  editMarker = NULL;
  compositeMarker = NULL;

  inverseScale = NULL;
}

Base::~Base()
{
  if (basePixmap)
    Tk_FreePixmap(display, basePixmap);

  if (baseXImage)
    XDestroyImage(baseXImage);

  if (pannerPixmap)
    Tk_FreePixmap(display, pannerPixmap);

  if (pannerXImage)
    XDestroyImage(pannerXImage);

  if (magnifierPixmap)
    Tk_FreePixmap(display, magnifierPixmap);

  if (magnifierXImage)
    XDestroyImage(magnifierXImage);

  if (highliteGC_)
    XFreeGC(display, highliteGC_);

  if (highliteColourName)
    delete [] highliteColourName;

  if (markerGC_)
    XFreeGC(display, markerGC_);

  if (markerGCXOR_)
    XFreeGC(display, markerGCXOR_);

  if (selectGCXOR)
    XFreeGC(display, selectGCXOR);

  if (grid)
    delete grid;

  if (gridGC_)
    XFreeGC(display, gridGC_);

  if (contourGC_)
    XFreeGC(display, contourGC_);

  if (bgColourName)
    delete [] bgColourName;

  if (nanColourName)
    delete [] nanColourName;

  if (colorbartag)
    delete [] colorbartag;

  if (magnifierColorName)
    delete [] magnifierColorName;

  if (inverseScale)
    delete inverseScale;

  // exchange pointer between widgets
  if (fitsimageparentptr_ == this) {
    fitsimageptr_ =NULL;
    fitsimageparentptr_ =NULL;
  }

  if (colormaplevelparentptr_ == this) {
    colormaplevelptr_ =NULL;
    colormaplevelparentptr_ =NULL;
  }

  if (pannerparentptr_ == this) {
    pannerptr_ =NULL;
    pannerparentptr_ =NULL;
  }

  if (magnifierparentptr_ == this) {
    magnifierptr_ =NULL;
    magnifierparentptr_ =NULL;
  }
}

void Base::alignIRAF()
{
  if (irafAlign_) {
    switch (irafOrientation_) {
    case Coord::NORMAL:
      irafMatrix_.identity();
      break;
    case Coord::XX:
      irafMatrix_ = FlipX();
      break;
    case Coord::YY:
      irafMatrix_ = FlipY();
      break;
    case Coord::XY:
      irafMatrix_ = FlipXY();
      break;
    default:
      irafMatrix_.identity();
    }
  }
  else
    irafMatrix_.identity();
}

void Base::alignWCS()
{
  if (!wcsAlign_ || !context->cfits || !hasWCS(wcsSystem_)) {
    wcsOrientation = Coord::NORMAL;
    wcsOrientationMatrix.identity();
    wcsRotation = 0;
    return;
  }

  calcAlignWCS(context->cfits, wcsSystem_, wcsSkyFrame_,
	       &wcsOrientation, &wcsOrientationMatrix, &wcsRotation);
}

void Base::alignWCS(Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  if (!wcsAlign_ || !context->cfits || !hasWCS(sys)) {
    wcsOrientation = Coord::NORMAL;
    wcsOrientationMatrix.identity();
    wcsRotation = 0;
    return;
  }

  calcAlignWCS(context->cfits, sys, sky,
	       &wcsOrientation, &wcsOrientationMatrix, &wcsRotation);
}

void Base::alignWCS(FitsImage* ptr, Coord::CoordSystem sys)
{
  if (!wcsAlign_ || !ptr || !context->cfits || !hasWCS(wcsSystem_)) {
    wcsOrientation = Coord::NORMAL;
    wcsOrientationMatrix.identity();
    wcsRotation = 0;
    return;
  }

  // This calcs the wcs
  calcAlignWCS(context->cfits, sys, wcsSkyFrame_,
	       &wcsOrientation, &wcsOrientationMatrix, &wcsRotation);

  // and this the zoom
  Matrix mm = calcAlignWCS(ptr, context->cfits, sys, wcsSystem_, wcsSkyFrame_);

  // if no linear fit, we get all 0's
  if (mm[0][0] != 0 && mm[1][1] !=0) {
    Vector ff = Vector(Vector(mm[0][0],mm[1][0]).length(), Vector(mm[0][1],mm[1][1]).length());
    zoom_ = Vector(zoom_[0]*ff[0], zoom_[1]*ff[1]);
  }
}

void Base::calcAlignWCS(FitsImage* fits1, 
			Coord::CoordSystem sys1, Coord::SkyFrame sky,
			Coord::Orientation* orientation, Matrix* oo,
			double* rotation)
{
  // init
  *orientation = Coord::NORMAL;
  oo->identity();
  *rotation = 0;

  if (!fits1 || !fits1->hasWCS(sys1))
    return;

  // orientation
  *orientation = fits1->getWCSOrientation(sys1,sky);
  switch (*orientation) {
  case Coord::NORMAL:
    oo->identity();
    break;
  case Coord::XX:
    *oo = FlipX();
    break;
  default:
    // na
    break;
  }

  // rotation
  switch (*orientation) {
  case Coord::NORMAL:
    *rotation = fits1->getWCSRotation(sys1,sky);
    break;
  case Coord::XX:
    *rotation = -fits1->getWCSRotation(sys1,sky);
    break;
  default:
    // na
    break;
  }
}

Matrix Base::calcAlignWCS(FitsImage* fits1, FitsImage* fits2, 
			  Coord::CoordSystem sys1, Coord::CoordSystem sys2,
			  Coord::SkyFrame sky)
{
  if ((!fits1 || !fits2) || (fits1 == fits2) ||
      !(fits1->hasWCS(sys1)) || !(fits2->hasWCS(sys2)))
    return Matrix();

  Matrix rr;

  astClearStatus; // just to make sure
  astBegin; // start memory management

  AstFrameSet* wcs1 = (AstFrameSet*)astCopy(fits1->ast_);
  wcsSystem(wcs1,sys1);
  if (fits1->hasWCSEqu(sys1))
    wcsSkyFrame(wcs1,sky);
  astInvert(wcs1);

  AstFrameSet* wcs2 = (AstFrameSet*)astCopy(fits2->ast_);
  wcsSystem(wcs2,sys2);
  if (fits1->hasWCSEqu(sys2))
    wcsSkyFrame(wcs2,sky);
  astInvert(wcs2);

  AstFrameSet* cvt = (AstFrameSet*)astConvert(wcs2, wcs1, "");

  if (!cvt) {
    astEnd;
    return rr;
  }

  int naxes1 = astGetI(astGetFrame(cvt,AST__BASE),"Naxes");
  int naxes2 = astGetI(astGetFrame(cvt,AST__CURRENT),"Naxes");

  Vector ll2 = fits2->center() - Vector(10,10);
  Vector ur2 = fits2->center() + Vector(10,10);
  double ll[4];
  ll[0] =ll2[0];
  ll[1] =ll2[1];
  ll[2] =context->slice(2);
  ll[3] =context->slice(3);
  double ur[4];
  ur[0] =ur2[0];
  ur[1] =ur2[1];
  ur[2] =context->slice(2);
  ur[3] =context->slice(3);
  
  int ss = (naxes1+1)*naxes2;
  double* fit = new double[ss];
  double tol = 1;
  if (astLinearApprox(cvt, ll, ur, tol, fit) != AST__BAD)
    rr = Translate(.5, .5) *
      Matrix(fit[naxes2], fit[naxes2+naxes1],
  		fit[naxes2+1], fit[naxes2+naxes1+1],
  		fit[0], fit[1]) *
      Translate(-.5, -.5);

  if (fit)
    delete [] fit;

  astEnd; // now, clean up memory

  return rr;
}

double Base::calcZoom(Vector src, Vector dest)
{
  // we need to calculate the width and height of the rotated image
  // so we can derived a zoom factor to shrink it to fit the requested size

  Vector cc = src/2.;

  Vector ll;
  Vector lr(src[0],0);
  Vector ur(src);
  Vector ul(0,src[1]);

  Matrix mm = Translate(-cc) * Rotate(wcsRotation) * Rotate(rotation);

  BBox bb(ll*mm);
  bb.bound(lr*mm);
  bb.bound(ur*mm);
  bb.bound(ul*mm);

  Vector bs = bb.size();
  double r0 = dest[0]/bs[0];
  double r1 = dest[1]/bs[1];

  return r0>r1 ? r1:r0;
}

void Base::centerImage()
{
  if (!keyContext->fits) {
    cursor = Vector();
    return;
  }

  // This is here because we need mapToRef to be up-to-date
  updateMatrices();
  updatePannerMatrices();

  // imageCenter is in IMAGE coords
  Vector aa = imageCenter(keyContext->secMode());
  // always center to center of pixel, even for even sized image
  Vector bb = (aa*Translate(.5,.5)).floor();
  // cursor is in REF coords
  cursor = keyContext->fits->mapToRef(bb,Coord::IMAGE,Coord::ICRS);
}

int Base::doRender() 
{
  return context->cfits ? 1 : 0;
}

void Base::doubleToTclArray(double dd, const char* var, 
			    const char* base, const char* mod)
{
  ostringstream str;
  str << base << "," << mod << ends;

  ostringstream vstr;
  vstr << dd << ends;
  Tcl_SetVar2(interp, (char*)var, str.str().c_str(), vstr.str().c_str(), 0);
}

FitsImage* Base::findFits()
{
  return keyContext->fits;
}

FitsImage* Base::findFits(Coord::CoordSystem sys, const Vector& vv)
{
  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    return findFits(vv);
  default:
    if (keyContext->fits && keyContext->fits->hasWCSCel(sys))
      return keyContext->fits;
    else
      return findFits(vv);
  }
}

FitsImage* Base::findFits(const Vector& vv)
{
  FitsImage* ptr = keyContext->fits;
  while (ptr) {
    Vector img = vv * ptr->refToData;
    FitsBound* params = ptr->getDataParams(currentContext->secMode());
    if (img[0]>=params->xmin && img[0]<params->xmax && 
	img[1]>=params->ymin && img[1]<params->ymax)
      return ptr;
    ptr = ptr->nextMosaic();
  }
  return keyContext->fits;
}

FitsImage* Base::findFits(int which)
{
  FitsImage* ptr = keyContext->fits;
  for (int ii=1; ii<which; ii++)
    if (ptr)
      ptr = ptr->nextMosaic();
  return (ptr ? ptr : keyContext->fits);
}

int Base::findFits(FitsImage* p)
{
  FitsImage* ptr = keyContext->fits;
  int rr = 0;
  while (ptr) {
    rr++;
    if (ptr == p)
      return rr;
    ptr = ptr->nextMosaic();
  }
  return rr;
}

FitsImage* Base::findAllFits(int which)
{
  // modified for medatacube
  FitsImage* rr = NULL;
  FitsImage* ptr = currentContext->fits;
  while (ptr && which) {
    FitsImage* sptr = ptr;
    while (sptr && which) {
      which--;
      if (!which) {
	rr = sptr;
	break;
      }
      sptr = sptr->nextSlice();
    }
    ptr = ptr->nextMosaic();
  }

  return rr;
}

int Base::fitsCount()
{
  return currentContext->fitsCount();
}

void Base::getInfoClearName(char* var)
{
  Tcl_SetVar2(interp,var,"filename","",0);
  Tcl_SetVar2(interp,var,"object","",0);
  Tcl_SetVar2(interp,var,"min","",0);
  Tcl_SetVar2(interp,var,"max","",0);
  Tcl_SetVar2(interp,var,"low","",0);
  Tcl_SetVar2(interp,var,"high","",0);
}

void Base::getInfoClearValue(char* var)
{
  Tcl_SetVar2(interp,var,"value","",0);
  Tcl_SetVar2(interp,var,"value,1","",0);
  Tcl_SetVar2(interp,var,"value,2","",0);
  Tcl_SetVar2(interp,var,"value,3","",0);

  Tcl_SetVar2(interp,var,"image,x","",0);
  Tcl_SetVar2(interp,var,"image,y","",0);
  Tcl_SetVar2(interp,var,"image,z","",0);
  Tcl_SetVar2(interp,var,"physical,x","",0);
  Tcl_SetVar2(interp,var,"physical,y","",0);
  Tcl_SetVar2(interp,var,"physical,z","",0);
  Tcl_SetVar2(interp,var,"amplifier,x","",0);
  Tcl_SetVar2(interp,var,"amplifier,y","",0);
  Tcl_SetVar2(interp,var,"amplifier,z","",0);
  Tcl_SetVar2(interp,var,"detector,x","",0);
  Tcl_SetVar2(interp,var,"detector,y","",0);
  Tcl_SetVar2(interp,var,"detector,z","",0);
}

void Base::getInfoClearWCS(char* var)
{
  for (int ii=0; ii<MULTWCS; ii++) {
    char buf[64];
    char ww = !ii ? '\0' : '`'+ii;
    Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",x"),"",0);
    Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",y"),"",0);
    Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",z"),"",0);
    Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",x,sys"),"",0);
    Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",y,sys"),"",0);
    Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",z,sys"),"",0);
    Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",sys"),"",0);
  }
}

int Base::hasATMV()
{
  return currentContext->cfits && currentContext->cfits->hasATMV();
}

int Base::hasContour()
{
  return currentContext->hasContour();
}

int Base::hasContourAux()
{
  return currentContext->hasContourAux();
}

int Base::hasDTMV()
{
  return currentContext->cfits && currentContext->cfits->hasDTMV();
}

int Base::hasLTMV()
{
  return currentContext->cfits && currentContext->cfits->hasLTMV();
}

int Base::hasWCS(Coord::CoordSystem sys)
{ 
  return currentContext->cfits && currentContext->cfits->hasWCS(sys);
}

int Base::hasWCSCel(Coord::CoordSystem sys)
{ 
  return currentContext->cfits && currentContext->cfits->hasWCSCel(sys);
}

int Base::hasWCSEqu(Coord::CoordSystem sys)
{ 
  return currentContext->cfits && currentContext->cfits->hasWCSEqu(sys);
}

int Base::hasWCSLinear(Coord::CoordSystem sys)
{ 
  return currentContext->cfits && currentContext->cfits->hasWCSLinear(sys);
}

int Base::hasWCS3D(Coord::CoordSystem sys)
{ 
  return currentContext->cfits && currentContext->cfits->hasWCS3D(sys);
}

Vector Base::imageCenter(FrScale::SecMode mode) 
{
  return imageBBox(mode).center();
}

Vector Base::imageSize(FrScale::SecMode mode) 
{
  return imageBBox(mode).size();
}

BBox Base::imageBBox(FrScale::SecMode mode)
{
  // returns imageBBox in IMAGE coords
  // params are in DATA coords and extends edge to edge
  BBox rr;
  int first=1;
  FitsImage* ptr = context->fits;
  while (ptr) {
    FitsBound* params = ptr->getDataParams(mode);
    Matrix mm = ptr->wcsToRef() * Translate(.5, .5);

    Vector aa =  Vector(params->xmin,params->ymin) * mm;
    if (first) {
      rr = BBox(aa,aa);
      first = 0;
    }
    else
      rr.bound(aa);

    rr.bound(Vector(params->xmax,params->ymin) * mm);
    rr.bound(Vector(params->xmax,params->ymax) * mm);
    rr.bound(Vector(params->xmin,params->ymax) * mm);

    ptr = ptr->nextMosaic();
  }

  return rr;
}

int Base::isIIS()
{
  return 0;
}

int Base::isCube()
{
  return currentContext->isCube();
}

int Base::isBinTable()
{
  return (currentContext->fits && currentContext->fits->isBinTable()) ? 1 : 0;
}

int Base::isMosaic()
{
  return currentContext->isMosaic();
}

FitsImage* Base::isInFits(const Vector& vv, Coord::InternalSystem ref, Vector* rv)
{
  Vector ss = mapToRef(vv,ref);
  FitsImage* ptr = currentContext->fits;

  while (ptr) {
    Vector rr = ss * ptr->refToData;
    FitsBound* params = ptr->getDataParams(currentContext->secMode());

    if (rr[0]>=params->xmin && rr[0]<params->xmax && 
	rr[1]>=params->ymin && rr[1]<params->ymax) {
      if (rv)
	*rv = rr;
      return ptr;
    }
    ptr = ptr->nextMosaic();
  }

  return NULL;
}

FitsImage* Base::isInCFits(const Vector& vv, Coord::InternalSystem ref, Vector* rv)
{
  Vector ss = mapToRef(vv,ref);
  FitsImage* ptr = currentContext->cfits;

  while (ptr) {
    Vector rr = ss * ptr->refToData;
    FitsBound* params = ptr->getDataParams(currentContext->secMode());

    if (rr[0]>=params->xmin && rr[0]<params->xmax && 
	rr[1]>=params->ymin && rr[1]<params->ymax) {
      if (rv)
	*rv = rr;
      return ptr;
    }
    ptr = ptr->nextMosaic();
  }

  return NULL;
}

void Base::invalidPixmap()
{
  Widget::invalidPixmap();

  if (basePixmap)
    Tk_FreePixmap(display, basePixmap);
  basePixmap = 0;

  if (baseXImage)
    XDestroyImage(baseXImage);
  baseXImage = NULL;

  needsUpdate = MATRIX;
}

Coord::Orientation Base::IRAFOrientation(Coord::Orientation oo)
{
  if (irafOrientation_ == (Coord::Orientation)-1) {
    irafOrientation_ = oo;
    alignIRAF();
  }

  return irafOrientation_;
}

int Base::parse(istringstream& istr)
{
  result = TCL_OK;
  frFlexLexer* ll = new frFlexLexer(&istr);
  frparse(this, ll);
  delete ll;

  return result;
}

int Base::postscriptProc(int prepass)
{
  if (!visible)
    return TCL_OK;

  if (prepass)
    return TCL_OK;

  ps();

  // Markers & Contours & Grids clip path
  ostringstream str;
  str << psOrigin() << ' ' 
      << options->width << ' ' << options->height
      << " rectclip" << endl << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);

  switch (psLevel) {
  case 1:
    switch (psColorSpace) {
    case BW:
    case GRAY:
      // needs to before markers if marker is filled
      currentContext->contourPS(GRAY);

      if (grid)
	grid->ps(GRAY);

      // markers over grid
      if (showMarkers) {
	psMarkers(&footprintMarkers, GRAY, HEAD);
	psMarkers(&catalogMarkers, GRAY, HEAD);
	psMarkers(&userMarkers, GRAY, TAIL);
      }

      psCrosshair(GRAY);
      psGraphics(GRAY);

      break;
    case RGB:
    case CMYK:
      // needs to before markers if marker is filled
      currentContext->contourPS(RGB);

      if (grid)
	grid->ps(RGB);

      // markers over grid
      if (showMarkers) {
	psMarkers(&footprintMarkers, psColorSpace, HEAD);
	psMarkers(&catalogMarkers, psColorSpace, HEAD);
	psMarkers(&userMarkers, psColorSpace, TAIL);
      }

      psCrosshair(RGB);
      psGraphics(RGB);

      break;
    }
    break;
  case 2:
  case 3:
    // needs to before markers if marker is filled
    currentContext->contourPS(psColorSpace);

    if (grid)
      grid->ps(psColorSpace);

    // markers over grid
    if (showMarkers) {
      psMarkers(&footprintMarkers, psColorSpace, HEAD);
      psMarkers(&catalogMarkers, psColorSpace, HEAD);
      psMarkers(&userMarkers, psColorSpace, TAIL);
    }

    psCrosshair(psColorSpace);
    psGraphics(psColorSpace);

    break;
  }

  return TCL_OK;
}

int Base::pdfCmd(Tcl_Obj* pdfObj, Tcl_Size, Tcl_Obj *const [])
{
  if (!visible || !currentContext)
    return TCL_OK;

  if (pdfImage(pdfObj) != TCL_OK)
    return TCL_ERROR;

  return pdfVectorLayers(pdfObj);
}

int Base::pdfImage(Tcl_Obj* pdfObj)
{
  if (!currentContext || !currentContext->fits)
    return TCL_OK;

  double ss = 1.;
  int ww = options->width*ss;
  int hh = options->height*ss;

  pushPSMatrices(ss, ww, hh);

  unsigned char* img = fillImage(ww, hh, Coord::WIDGET);
  if (!img)
    return TCL_OK;

  char photoName[128];
  snprintf(photoName, sizeof(photoName), "::tksao_pdf_photo_%p", (void*)this);

  Tcl_Obj* createObjv[4];
  createObjv[0] = Tcl_NewStringObj("image", -1);
  createObjv[1] = Tcl_NewStringObj("create", -1);
  createObjv[2] = Tcl_NewStringObj("photo", -1);
  createObjv[3] = Tcl_NewStringObj(photoName, -1);

  int rr = EvalObjv(interp, 4, createObjv);
  if (rr != TCL_OK) {
    delete [] img;
    return rr;
  }

  Tk_PhotoHandle photo = Tk_FindPhoto(interp, photoName);
  if (!photo) {
    Tcl_AppendResult(interp, "unable to create temporary PDF photo image", NULL);
    delete [] img;
    return TCL_ERROR;
  }

  Tk_PhotoImageBlock block;
  block.pixelPtr = img;
  block.width = ww;
  block.height = hh;
  block.pitch = ww*3;
  block.pixelSize = 3;
  block.offset[0] = 0;
  block.offset[1] = 1;
  block.offset[2] = 2;
  block.offset[3] = 0;

  rr = Tk_PhotoPutBlock(interp, photo, &block, 0, 0, ww, hh,
			TK_PHOTO_COMPOSITE_SET);
  delete [] img;
  if (rr != TCL_OK) {
    DeletePhoto(interp, photoName);
    return rr;
  }

  Tcl_Obj* dataObjv[2];
  dataObjv[0] = Tcl_NewStringObj(photoName, -1);
  dataObjv[1] = Tcl_NewStringObj("data", -1);
  rr = EvalObjv(interp, 2, dataObjv);
  if (rr != TCL_OK) {
    DeletePhoto(interp, photoName);
    return rr;
  }

  Tcl_Obj* dataObj = Tcl_GetObjResult(interp);
  Tcl_IncrRefCount(dataObj);

  Tcl_Obj* addArgs[1];
  addArgs[0] = dataObj;
  rr = PdfMethod(interp, pdfObj, "addRawImage", 1, addArgs);
  Tcl_DecrRefCount(dataObj);
  if (rr != TCL_OK) {
    DeletePhoto(interp, photoName);
    return rr;
  }

  Tcl_Obj* imageId = Tcl_GetObjResult(interp);
  Tcl_IncrRefCount(imageId);

  Vector oo = Vector(originX, originY);
  Tcl_Obj* putArgs[10];
  putArgs[0] = imageId;
  putArgs[1] = Tcl_NewDoubleObj(oo[0]);
  putArgs[2] = Tcl_NewDoubleObj(oo[1]);
  putArgs[3] = Tcl_NewStringObj("-width", -1);
  putArgs[4] = Tcl_NewDoubleObj(options->width);
  putArgs[5] = Tcl_NewStringObj("-height", -1);
  putArgs[6] = Tcl_NewDoubleObj(options->height);
  putArgs[7] = Tcl_NewStringObj("-anchor", -1);
  putArgs[8] = Tcl_NewStringObj("nw", -1);
  rr = PdfMethod(interp, pdfObj, "putImage", 9, putArgs);
  Tcl_DecrRefCount(imageId);

  if (rr != TCL_OK) {
    Tcl_Obj* errorObj = Tcl_GetObjResult(interp);
    Tcl_IncrRefCount(errorObj);
    DeletePhoto(interp, photoName);
    Tcl_SetObjResult(interp, errorObj);
    Tcl_DecrRefCount(errorObj);
    return rr;
  }

  return DeletePhoto(interp, photoName);
}

int Base::pdfVectorLayers(Tcl_Obj* pdfObj)
{
  if (!currentContext)
    return TCL_OK;

  Tcl_Obj* saved = Tcl_GetObjResult(interp);
  Tcl_IncrRefCount(saved);
  Tcl_ResetResult(interp);

  int oldPdfMode = widgetPdfMode_;
  widgetPdfMode_ = 1;

  switch (psLevel) {
  case 1:
    switch (psColorSpace) {
    case BW:
    case GRAY:
      currentContext->contourPS(GRAY);
      if (grid)
	grid->ps(GRAY);
      if (showMarkers) {
	psMarkers(&footprintMarkers, GRAY, HEAD);
	psMarkers(&catalogMarkers, GRAY, HEAD);
	psMarkers(&userMarkers, GRAY, TAIL);
      }
      psCrosshair(GRAY);
      psGraphics(GRAY);
      break;
    case RGB:
    case CMYK:
      currentContext->contourPS(RGB);
      if (grid)
	grid->ps(RGB);
      if (showMarkers) {
	psMarkers(&footprintMarkers, psColorSpace, HEAD);
	psMarkers(&catalogMarkers, psColorSpace, HEAD);
	psMarkers(&userMarkers, psColorSpace, TAIL);
      }
      psCrosshair(RGB);
      psGraphics(RGB);
      break;
    }
    break;
  case 2:
  case 3:
    currentContext->contourPS(psColorSpace);
    if (grid)
      grid->ps(psColorSpace);
    if (showMarkers) {
      psMarkers(&footprintMarkers, psColorSpace, HEAD);
      psMarkers(&catalogMarkers, psColorSpace, HEAD);
      psMarkers(&userMarkers, psColorSpace, TAIL);
    }
    psCrosshair(psColorSpace);
    psGraphics(psColorSpace);
    break;
  }

  widgetPdfMode_ = oldPdfMode;

  Tcl_Obj* psObj = Tcl_GetObjResult(interp);
  Tcl_IncrRefCount(psObj);
  const char* ps = Tcl_GetString(psObj);

  std::vector<double> stack;
  std::vector<double> path;
  string text;
  string currentFont = "Helvetica";
  string pendingFont;
  double currentFontSize = 10;
  double currentAngle = 0;
  double currentX = 0;
  double currentY = 0;
  double tx = 0;
  double ty = 0;
  double circleX = 0;
  double circleY = 0;
  double circleR = 0;
  int closed = 0;
  int circlePath = 0;
  int rr = TCL_OK;
  istringstream istr(ps);
  string tok;

  while (rr == TCL_OK && istr >> tok) {
    if (tok[0] == '(') {
      text = tok.substr(1);
      while (text.empty() || text[text.length()-1] != ')') {
	string tt;
	if (!(istr >> tt))
	  break;
	text += " ";
	text += tt;
      }
      if (!text.empty() && text[text.length()-1] == ')')
	text.erase(text.length()-1);
      continue;
    }

    char* end = NULL;
    double val = strtod(tok.c_str(), &end);
    if (end && *end == '\0') {
      stack.push_back(val);
      continue;
    }

    if (tok[0] == '[') {
      std::vector<double> dashPattern;
      PdfParseDashToken(tok, dashPattern);

      while (tok.find(']') == string::npos && istr >> tok)
	PdfParseDashToken(tok, dashPattern);

      double dashOffset = 0;
      if (istr >> tok) {
	char* end = NULL;
	double val = strtod(tok.c_str(), &end);
	if (end && *end == '\0') {
	  dashOffset = val;
	  if (!(istr >> tok))
	    tok.erase();
	}
      }

      if (tok == "setdash")
	rr = PdfSetLineDash(interp, pdfObj, dashPattern, dashOffset);
      continue;
    }

    if (tok[0] == '/') {
      pendingFont = tok.substr(1);
      continue;
    }

    if (tok == "findfont" || tok == "scalefont")
      continue;

    if (tok == "setfont") {
      if (stack.size() >= 1)
	currentFontSize = stack.back();
      if (!pendingFont.empty()) {
	currentFont = pendingFont;
	pendingFont.erase();
      }
      stack.clear();
      continue;
    }

    if (tok == "true" || tok == "charpath")
      continue;

    if (tok == "dup") {
      if (!stack.empty())
	stack.push_back(stack.back());
      continue;
    }

    if (tok == "index" && stack.size() >= 1) {
      int idx = (int)stack.back();
      stack.pop_back();
      if (idx >= 0 && (size_t)idx < stack.size())
	stack.push_back(stack[stack.size()-1-idx]);
      continue;
    }

    if (tok == "roll" && stack.size() >= 2) {
      int shift = (int)stack.back(); stack.pop_back();
      int count = (int)stack.back(); stack.pop_back();
      PdfRollStack(stack, count, shift);
      continue;
    }

    if (tok == "pathbbox") {
      double llx = 0;
      double lly = 0;
      double urx = 0;
      double ury = 0;
      PdfTextPathBBox(text, currentFontSize, &llx, &lly, &urx, &ury);
      stack.push_back(llx);
      stack.push_back(lly);
      stack.push_back(urx);
      stack.push_back(ury);
      continue;
    }

    if (tok == "add" && stack.size() >= 2) {
      double b = stack.back(); stack.pop_back();
      double a = stack.back(); stack.pop_back();
      stack.push_back(a+b);
      continue;
    }

    if (tok == "sub" && stack.size() >= 2) {
      double b = stack.back(); stack.pop_back();
      double a = stack.back(); stack.pop_back();
      stack.push_back(a-b);
      continue;
    }

    if (tok == "mul" && stack.size() >= 2) {
      double b = stack.back(); stack.pop_back();
      double a = stack.back(); stack.pop_back();
      stack.push_back(a*b);
      continue;
    }

    if (tok == "div" && stack.size() >= 2) {
      double b = stack.back(); stack.pop_back();
      double a = stack.back(); stack.pop_back();
      stack.push_back(b ? a/b : 0);
      continue;
    }

    if (tok == "neg" && stack.size() >= 1) {
      stack.back() = -stack.back();
      continue;
    }

    if (tok == "exch" && stack.size() >= 2) {
      double b = stack.back(); stack.pop_back();
      double a = stack.back(); stack.pop_back();
      stack.push_back(b);
      stack.push_back(a);
      continue;
    }

    if (tok == "sin" && stack.size() >= 1) {
      stack.back() = sin(degToRad(stack.back()));
      continue;
    }

    if (tok == "cos" && stack.size() >= 1) {
      stack.back() = cos(degToRad(stack.back()));
      continue;
    }

    if (tok == "translate" && stack.size() >= 2) {
      double y = stack.back(); stack.pop_back();
      double x = stack.back(); stack.pop_back();
      tx += x;
      ty += y;
    }
    else if (tok == "newpath") {
      path.clear();
      closed = 0;
      circlePath = 0;
    }
    else if (tok == "moveto" && stack.size() >= 2) {
      double y = stack.back(); stack.pop_back();
      double x = stack.back(); stack.pop_back();
      double xx = x+tx;
      double yy = y+ty;
      if (path.size() < 2 ||
	  hypot(path[path.size()-2]-xx, path[path.size()-1]-yy) > 1e-4) {
	path.clear();
	path.push_back(xx);
	path.push_back(yy);
      }
      currentX = xx;
      currentY = yy;
      closed = 0;
      circlePath = 0;
    }
    else if (tok == "rmoveto" && stack.size() >= 2) {
      double y = stack.back(); stack.pop_back();
      double x = stack.back(); stack.pop_back();
      if (fabs(currentAngle) > FLT_EPSILON) {
	double aa = degToRad(currentAngle);
	double xx = x*cos(aa) - y*sin(aa);
	double yy = x*sin(aa) + y*cos(aa);
	currentX += xx;
	currentY += yy;
      }
      else {
	currentX += x;
	currentY += y;
      }
    }
    else if (tok == "lineto" && stack.size() >= 2) {
      double y = stack.back(); stack.pop_back();
      double x = stack.back(); stack.pop_back();
      currentX = x+tx;
      currentY = y+ty;
      path.push_back(currentX);
      path.push_back(currentY);
      circlePath = 0;
    }
    else if (tok == "curveto" && stack.size() >= 6) {
      double y3 = stack.back(); stack.pop_back();
      double x3 = stack.back(); stack.pop_back();
      double y2 = stack.back(); stack.pop_back();
      double x2 = stack.back(); stack.pop_back();
      double y1 = stack.back(); stack.pop_back();
      double x1 = stack.back(); stack.pop_back();
      x1 += tx;
      y1 += ty;
      x2 += tx;
      y2 += ty;
      x3 += tx;
      y3 += ty;
      PdfAppendBezier(path, currentX, currentY, x1, y1, x2, y2, x3, y3);
      currentX = x3;
      currentY = y3;
      circlePath = 0;
    }
    else if (tok == "arc" && stack.size() >= 5) {
      double a2 = stack.back(); stack.pop_back();
      double a1 = stack.back(); stack.pop_back();
      double r = stack.back(); stack.pop_back();
      double y = stack.back(); stack.pop_back();
      double x = stack.back(); stack.pop_back();
      x += tx;
      y = y+ty;
      if (fabs(a1) < FLT_EPSILON && fabs(a2-360) < FLT_EPSILON) {
	path.clear();
	circleX = x;
	circleY = y;
	circleR = r;
	circlePath = 1;
      }
      else {
	int steps = 24;
	for (int ii=0; ii<=steps; ii++) {
	  double aa = degToRad(a1 + (a2-a1)*ii/steps);
	  currentX = x + r*cos(aa);
	  currentY = y - r*sin(aa);
	  path.push_back(currentX);
	  path.push_back(currentY);
	}
	circlePath = 0;
      }
    }
    else if (tok == "closepath")
      closed = 1;
    else if (tok == "stroke") {
      if (circlePath)
	rr = PdfCircle(interp, pdfObj, circleX, circleY, circleR, 0, 1);
      else if (path.size() == 4 && !closed)
	rr = PdfLine(interp, pdfObj, path[0], path[1], path[2], path[3]);
      else if (path.size() >= 4)
	rr = PdfPolygon(interp, pdfObj, path, closed, 0, 1);
      path.clear();
      closed = 0;
      circlePath = 0;
    }
    else if (tok == "fill") {
      if (circlePath)
	rr = PdfCircle(interp, pdfObj, circleX, circleY, circleR, 1, 0);
      else if (path.size() >= 4)
	rr = PdfPolygon(interp, pdfObj, path, 1, 1, 0);
      path.clear();
      closed = 0;
      circlePath = 0;
    }
    else if (tok == "setlinewidth" && stack.size() >= 1) {
      double width = stack.back(); stack.pop_back();
      rr = PdfSetLineWidth(interp, pdfObj, width);
    }
    else if (tok == "setgray" && stack.size() >= 1) {
      double gray = stack.back(); stack.pop_back();
      rr = PdfColor(interp, pdfObj, gray, gray, gray);
    }
    else if (tok == "setrgbcolor" && stack.size() >= 3) {
      double b = stack.back(); stack.pop_back();
      double g = stack.back(); stack.pop_back();
      double r = stack.back(); stack.pop_back();
      rr = PdfColor(interp, pdfObj, r, g, b);
    }
    else if (tok == "setcmykcolor" && stack.size() >= 4) {
      double k = stack.back(); stack.pop_back();
      double y = stack.back(); stack.pop_back();
      double m = stack.back(); stack.pop_back();
      double c = stack.back(); stack.pop_back();
      double r = 1 - min(1., c+k);
      double g = 1 - min(1., m+k);
      double b = 1 - min(1., y+k);
      rr = PdfColor(interp, pdfObj, r, g, b);
    }
    else if (tok == "rotate" && stack.size() >= 1) {
      currentAngle = stack.back();
      stack.pop_back();
    }
    else if (tok == "show") {
      if (!text.empty()) {
	rr = PdfText(interp, pdfObj, text, currentX, currentY,
		     currentFont, currentFontSize, currentAngle);
	text.erase();
      }
      stack.clear();
    }
    else if (tok == "grestore")
      currentAngle = 0;
  }

  Tcl_DecrRefCount(psObj);
  if (rr == TCL_OK)
    Tcl_SetObjResult(interp, saved);
  Tcl_DecrRefCount(saved);

  return rr;
}

void Base::printInteger(int i)
{
  ostringstream str;
  str << i << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::printDouble(double d)
{
  ostringstream str;
  str << d << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::printCoordSystem(Coord::CoordSystem sys)
{
  Tcl_AppendResult(interp, coord.coordSystemStr(sys), NULL);
}

void Base::printSkyFrame(Coord::SkyFrame sky)
{
  Tcl_AppendResult(interp, coord.skyFrameStr(sky), NULL);
}

void Base::printSkyFormat(Coord::SkyFormat format)
{
  Tcl_AppendResult(interp, coord.skyFormatStr(format), NULL);
}

void Base::printDistFormat(Coord::DistFormat dist)
{
  Tcl_AppendResult(interp, coord.skyDistStr(dist), NULL);
}

void Base::printFromRef(FitsImage* ptr, const Vector& vv,
			Coord::CoordSystem sys, Coord::SkyFrame sky, 
			Coord::SkyFormat format)
{
  ostringstream str;
  ptr->listFromRef(str, vv, sys, sky, format);
  str << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::printLenFromRef(FitsImage* ptr, double dd,
			   Coord::CoordSystem sys, Coord::DistFormat dist)
{
  ostringstream str;
  ptr->listLenFromRef(str, dd, sys, dist);
  str << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::printLenFromRef(FitsImage* ptr, const Vector& vv,
			   Coord::CoordSystem sys, Coord::DistFormat dist)
{
  ostringstream str;
  ptr->listLenFromRef(str, vv, sys, dist);
  str << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::printDistFromRef(FitsImage* ptr, 
			    const Vector& vv1, const Vector& vv2,
			    Coord::CoordSystem sys, Coord::DistFormat dist)
{
  ostringstream str;
  ptr->listDistFromRef(str, vv1, vv2, sys, dist);
  str << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::printAngleFromRef(double aa, Coord::CoordSystem sys,
			     Coord::SkyFrame sky)
{
  ostringstream str;
  listAngleFromRef(str, aa, sys, sky);
  str << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::ps()
{
  
  if (!currentContext->fits)
    return;

  Tcl_AppendResult(interp, "gsave\n", NULL);

  double ss = psResolution / 96.;
  int ww = options->width*ss;
  int hh = options->height*ss;

  ostringstream str;

  str << psOrigin() << " translate " << 1/ss << ' ' << 1/ss << " scale" << endl;
  switch (psLevel) {
  case 1: 
    {
      psHead1(str, ww, hh);
      NoCompressAsciiHex filter(psLevel);
      psImage(str, filter, ww, hh, ss);
    }
    break;
  case 2:
    {
      psHead2(str, ww, hh, "RunLength", "ASCII85");
      RLEAscii85 filter(psLevel);
      psImage(str, filter, ww, hh, ss);
    }
    break;
  case 3:
    {
      psHead2(str, ww, hh, "Flate", "ASCII85");
      GZIPAscii85 filter(psLevel);
      psImage(str, filter, ww, hh, ss);
    }
    break;
  }

  str << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);

  Tcl_AppendResult(interp, "grestore\n", NULL);
}

void Base::psCrosshair(PSColorSpace mode)
{
  if (!useCrosshair)
    return;

  Vector rr = mapFromRef(crosshair, Coord::WIDGET);
  Vector aa = Vector(rr[0],1) * widgetToCanvas;
  Vector bb = Vector(rr[0],options->height) * widgetToCanvas;
  Vector cc = Vector(1,rr[1]) * widgetToCanvas;
  Vector dd = Vector(options->width,rr[1]) * widgetToCanvas;

  {
    ostringstream str;
    switch (mode) {
    case BW:
    case GRAY:
      psColorGray(getXColor("green"), str);
      str << " setgray";
      break;
    case RGB:
      psColorRGB(getXColor("green"), str);
      str << " setrgbcolor";
      break;
    case CMYK:
      psColorCMYK(getXColor("green"), str);
      str << " setcmykcolor";
      break;
    }
    str << endl << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  }  

  {
    ostringstream str;
    str << 1 << " setlinewidth" << endl << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  }

  { 
    ostringstream str;

    str << "newpath " 
	<< TkCanvasPs(aa) << ' '
	<< "moveto "
	<< TkCanvasPs(bb) << ' '
	<< "lineto  stroke" << endl
	<< "newpath " 
	<< TkCanvasPs(cc) << ' '
	<< "moveto "
	<< TkCanvasPs(dd) << ' '
	<< "lineto stroke" << endl << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  }
}

void Base::psImage(ostream& str, Filter& filter,
		   int width, int height, float scale)
{
  pushPSMatrices(scale, width, height);

  unsigned char* img = fillImage(width, height, Coord::PS);
  if (!img)
    return;
  unsigned char* ptr = img;
  for (long jj=0; jj<height; jj++) {
    for (long ii=0; ii<width; ii++, ptr+=3) {
      unsigned char red = ptr[0];
      unsigned char green = ptr[1];
      unsigned char blue = ptr[2];

      switch (psColorSpace) {
      case BW:
      case GRAY:
	filter << RGB2Gray(red, green, blue);
	break;
      case RGB:
	filter << red << green << blue;
	break;
      case CMYK:
	{
	  unsigned char cyan, magenta, yellow, black;
	  RGB2CMYK(red, green, blue, &cyan, &magenta, &yellow, &black);
	  filter << cyan << magenta << yellow << black;
	}
	break;
      }
      str << filter;
    }
  }

  filter.flush(str);

  if (img)
    delete [] img;
}

Matrix Base::psMatrix(float scale, int width, int height)
{
  Matrix userToPS = 
    wcsOrientationMatrix *              // flip x/y axis about center
    orientationMatrix *                 // flip x/y axis about cursor position
    Rotate(wcsRotation) *               // rotate about center position
    Rotate(rotation) *                  // rotate about cursor position

    Scale(zoom_) *                      // scale about cursor position
    Scale(scale) *
    FlipY() *
    Translate(Vector(width,height)/2.);

   return refToUser * userToPS;
}

void Base::pushMatrices(FitsImage* fits, Matrix& rgbToRef)
{
  FitsImage* ptr = fits;
  while (ptr) {
    FitsImage* sptr = ptr;
    while (sptr) {
      sptr->updateMatrices(rgbToRef, refToUser, userToWidget,
			   widgetToCanvas, canvasToWindow);
      sptr = sptr->nextSlice();
    }
    ptr = ptr->nextMosaic();
  }
}

void Base::pushMagnifierMatrices(FitsImage* fits)
{
  FitsImage* ptr = fits;
  while (ptr) {
    FitsImage* sptr = ptr;
    while (sptr) {
      sptr->updateMagnifierMatrices(refToMagnifier);
      sptr = sptr->nextSlice();
    }
    ptr = ptr->nextMosaic();
  }
}

void Base::pushPannerMatrices(FitsImage* fits)
{
  FitsImage* ptr = fits;
  while (ptr) {
    FitsImage* sptr = ptr;
    while (sptr) {
      sptr->updatePannerMatrices(refToPanner);
      sptr = sptr->nextSlice();
    }
    ptr = ptr->nextMosaic();
  }
}

void Base::pushPSMatrices(FitsImage* fits, float scale, int width, int height)
{
  Matrix mx = psMatrix(scale, width, height);

  FitsImage* ptr = fits;
  while (ptr) {
    FitsImage* sptr = ptr;
    while (sptr) {
      sptr->updatePS(mx);
      sptr = sptr->nextSlice();
    }
    ptr = ptr->nextMosaic();
  }
}

void Base::reset()
{
  if (!preservePan)
    centerImage();

  crosshair = cursor;
  invert = 0;

  orientation = Coord::NORMAL;
  orientationMatrix.identity();
  zoom_ = Vector(1,1);
  rotation = 0;
  
  wcsAlign_ = 0;

  wcsOrientation = Coord::NORMAL;
  wcsOrientationMatrix.identity();
  wcsRotation = 0;
  
  unselectMarkers(&userMarkers);
  unselectMarkers(&catalogMarkers);
  unselectMarkers(&footprintMarkers);

  update(MATRIX);
}

FrScale::SecMode Base::secMode()
{
  return currentContext->secMode();
}

void Base::resetSecMode()
{
  currentContext->resetSecMode();
}

void Base::setSecMode(FrScale::SecMode mode)
{
  currentContext->setSecMode(mode);
}

void Base::setSlice(int id, int ss)
{
  // real work done in derived classes
  updateMarkers(&userMarkers);
  updateMarkers(&catalogMarkers);
  updateMarkers(&footprintMarkers);

  // execute any update callbacks
  updateCBMarkers(&userMarkers);
  updateCBMarkers(&catalogMarkers);
  updateCBMarkers(&footprintMarkers);
}

void Base::unloadAllFits()
{
  unloadFits();
}

void Base::unloadFits()
{
  if (DebugPerf)
    cerr << "Base::unloadFits()" << endl;

  if (!preserveMarkers) {
    // delete markers
    userMarkers.deleteAll();
    undoUserMarkers.deleteAll();
    pasteUserMarkers.deleteAll();
  }

  catalogMarkers.deleteAll();
  undoCatalogMarkers.deleteAll();
  pasteCatalogMarkers.deleteAll();

  footprintMarkers.deleteAll();
  undoFootprintMarkers.deleteAll();
  pasteFootprintMarkers.deleteAll();

  if (grid)
    delete grid;
  grid = NULL;

  irafOrientation_ = (Coord::Orientation)-1;
  irafMatrix_.identity();

  updateColorScale();
}

void Base::update(UpdateType flag)
{
  if (DebugPerf)
    cerr << "Base::update(" << flag << ')' << endl;

  // Be careful, someone may have already set the flag at a lower level
  // therefor, only change the flag if we need more to be done

  if (flag < needsUpdate)
    needsUpdate = flag;
  // schedule redraw only
  redraw();
}

void Base::update(UpdateType flag, BBox bb)
{
  if (DebugPerf)
    cerr << "Base::update(" << flag << ' ' << bb << ')' << endl;

  // bb is in canvas coords

  if (flag < needsUpdate)
    needsUpdate = flag;
  // schedule redraw only
  redraw(bb);
}

void Base::updateBase()
{
  if (DebugPerf)
    cerr << "Base::updateBase()...";

  int& width = options->width;
  int& height = options->height;

  if (!basePixmap) {
    if (!(basePixmap = Tk_GetPixmap(display, Tk_WindowId(tkwin), 
				    width, height, depth))){
      internalError("Unable to Create Pixmap");
      return;
    }

    // Geometry has changed, redefine our marker GCs including clip regions
    updateGCs();
  }

  if (!baseXImage) {
    if (!(baseXImage = XGetImage(display, basePixmap, 0, 0, width, height, 
				 AllPlanes, ZPixmap))) {
      internalError("Unable to Create XImage");
      return;
    }

    // we have to wait until now, since the encodings depend on baseXImage
    encodeTrueColor(baseXImage->byte_order, baseXImage->bits_per_pixel);

    // we have a race condition. Some Truecolor ColorScales need to know the 
    // bytes per pixel, RGB masks, and byte order, from XImage struct.
    // yet, we receive colormap commands well before we render to the 
    // screen and have a valid XImage. 
    // So, we put off creating a colorscale until we are ready to render.

    if (!validColorScale())
      updateColorScale();
  }

  if (doRender())
    ximageToPixmap(basePixmap, baseXImage, Coord::WIDGET);
  else {
    if (useBgColor)
      XSetForeground(display, widgetGC, getColor(bgColourName));
    else
      XSetForeground(display, widgetGC,
		     ((WidgetOptions*)options)->bgColor->pixel);
    XFillRectangle(display, basePixmap, widgetGC, 0, 0,
		   options->width,options->height);
  }
  
  if (DebugPerf)
    cerr << "end" << endl;
}

void Base::updateBin(const Matrix& mx)
{
  if (keyContext->fits && (keyContext->fits == currentContext->fits)) {
    crosshair *= mx;
    currentContext->updateContours(mx);
    updateMarkerCoords(&userMarkers, mx);
    updateMarkerCoords(&catalogMarkers, mx);
    updateMarkerCoords(&footprintMarkers, mx);
  }

  alignWCS();
  updateColorScale();
  // because we have changed zoom
  // now because repeated bin cmds will mult markers/contours relative
  //  update(MATRIX);
  updateNow(MATRIX);

  // update markers call backs
  // wait til matrices have been updated so that any dialogs will print
  // the correct coords
  updateMarkerCBs(&userMarkers);
  updateMarkerCBs(&catalogMarkers);
  updateMarkerCBs(&footprintMarkers);
}

void Base::updateBlock(const Vector& vv)
{
  Scale mx(vv);

  if (keyContext->fits && (keyContext->fits == currentContext->fits)) {
    cursor *= mx;
    crosshair *= mx;
    currentContext->updateContours(mx);
    updateMarkerCoords(&userMarkers, mx);
    updateMarkerCoords(&catalogMarkers, mx);
    updateMarkerCoords(&footprintMarkers, mx);
  }

  alignWCS();
  updateColorScale();
  update(MATRIX);

  // update markers call backs
  // wait til matrices have been updated so that any dialogs will print
  // the correct coords
  updateMarkerCBs(&userMarkers);
  updateMarkerCBs(&catalogMarkers);
  updateMarkerCBs(&footprintMarkers);
}

void Base::updateGCs()
{
  // widget clip region
  BBox bbWidget = BBox(0, 0, options->width, options->height);
  Vector sizeWidget = bbWidget.size();
  XRectangle rectWidget[1];

  rectWidget[0].x = (int)bbWidget.ll[0];
  rectWidget[0].y = (int)bbWidget.ll[1];
  rectWidget[0].width = (int)sizeWidget[0];
  rectWidget[0].height = (int)sizeWidget[1];

  // window clip region
  BBox bbWindow = bbWidget * widgetToWindow;
  Vector sizeWindow = bbWindow.size();
  XRectangle rectWindow[1];

  rectWindow[0].x = (int)bbWindow.ll[0];
  rectWindow[0].y = (int)bbWindow.ll[1];
  rectWindow[0].width = (int)sizeWindow[0];
  rectWindow[0].height = (int)sizeWindow[1];

  // highliteGC
  setClipRectangles(display, highliteGC_, 0, 0, rectWidget, 1, Unsorted);
  XSetLineAttributes(display, highliteGC_, 2, LineSolid, CapButt, JoinMiter);

  // markerGC
  setClipRectangles(display, markerGC_, 0, 0, rectWidget, 1, Unsorted);
  setClipRectangles(display, markerGCXOR_, 0, 0, rectWidget, 1, Unsorted);
  XSetForeground(display, markerGCXOR_, getColor("white"));

  // selectGC
  x11Dash(selectGCXOR,1);
  setClipRectangles(display, selectGCXOR, 0, 0, rectWidget, 1, Unsorted);
  XSetForeground(display, selectGCXOR, getColor("white"));

  // gridGC
  setClipRectangles(display, gridGC_, 0, 0, rectWidget, 1, Unsorted);

  // contourGC
  setClipRectangles(display, contourGC_, 0, 0, rectWidget, 1, Unsorted);
  XSetLineAttributes(display, contourGC_, 1, LineSolid, CapButt, JoinMiter);
}

void Base::updateMagnifier()
{
  updateMagnifier(magnifierCursor);
}

void Base::updateMagnifier(const Vector& vv)
{
  if (!useMagnifier)
    return;
  
  if (!doRender()) {
    ostringstream str;
    str << magnifierName << " clear";
    Tcl_Eval(interp, str.str().c_str());
    return;
  }

  // just in case
  if (!magnifierXImage || !magnifierPixmap)
    return;

  // specific check magnifierptr_ in use
  if (magnifierptr_)
    if (magnifierparentptr_)
      if (magnifierparentptr_ != this)
	return;

  // vv is in CANVAS coords
  // save it, we may need it later
  magnifierCursor = vv;

  // do this first
  updateMagnifierMatrices();
  ximageToPixmap(magnifierPixmap, magnifierXImage, Coord::MAGNIFIER);

  if (useMagnifierGraphics) {
    // render markers
    // markers bounding box is in canvas coords
    // map the magnifier to a bounding box in canvas coords
    Matrix mm = magnifierToRef * refToCanvas;

    Vector ll = Vector(0,0) * mm;
    Vector ur = Vector(magnifierWidth,magnifierHeight) * mm;
    BBox bb = BBox(vv,vv);
    bb.bound(ll);
    bb.bound(ur);

    // render contours
    // needs to before markers if marker is filled
    currentContext->contourX11(magnifierPixmap, Coord::MAGNIFIER,
			       BBox(0,0,magnifierWidth,magnifierHeight));

    if (showMarkers) {
      x11MagnifierMarkers(&userMarkers, bb);
      x11MagnifierMarkers(&catalogMarkers, bb);
      x11MagnifierMarkers(&footprintMarkers, bb);
    }

    // render crosshair
    if (useCrosshair)
      x11Crosshair(magnifierPixmap, Coord::MAGNIFIER, 
		   magnifierWidth, magnifierHeight);
  }

  // render cursor
  if (useMagnifierCursor)
    x11MagnifierCursor(vv);

  // notify the magnifier widget
  magnifierptr_ = (void*)magnifierPixmap;
  magnifierparentptr_ = (void*)this;

  ostringstream str;
  str << magnifierName << " update" << ends;
  Tcl_Eval(interp, str.str().c_str());
}

void Base::updateMatrices()
{
  // refToUser
  // flip y axis for X Windows
  refToUser = Translate(-cursor) * FlipY() * irafMatrix_; 
  userToRef = refToUser.invert();

  // userToWidget
  userToWidget =
    wcsOrientationMatrix *              // flip x/y axis about center
    orientationMatrix *                 // flip x/y axis about cursor position
    Rotate(wcsRotation) *               // rotate about center position
    Rotate(rotation) *                  // rotate about cursor position

    Scale(zoom_) *                      // scale about cursor position
    // must be int to align with screen pixels
    Translate((int)(options->width/2.), (int)(options->height/2.));
  widgetToUser = userToWidget.invert();

  // widgetToCanvas
  widgetToCanvas = Translate(originX, originY);
  canvasToWidget = widgetToCanvas.invert();

  // canvasToWindow
  short xx, yy;
  Tk_CanvasWindowCoords(canvas, 0, 0, &xx, &yy);
  canvasToWindow = Translate(xx, yy);
  windowToCanvas = canvasToWindow.invert();

  // These are derived Transformation Matrices
  refToWidget = refToUser * userToWidget;
  widgetToRef = refToWidget.invert();

  refToCanvas = refToWidget * widgetToCanvas;
  canvasToRef = refToCanvas.invert();

  refToWindow = refToCanvas * canvasToWindow;
  windowToRef = refToWindow.invert();

  userToCanvas = userToWidget * widgetToCanvas;
  canvasToUser = userToCanvas.invert();

  widgetToWindow = widgetToCanvas * canvasToWindow;
  windowToWidget = widgetToWindow.invert();

    // Markers
  updateMarkers(&userMarkers);
  updateMarkers(&catalogMarkers);
  updateMarkers(&footprintMarkers);

  pushMatrices();
}

void Base::updateMagnifierMatrices()
{
  // magnifierCursor is in CANVAS
  Vector ww = magnifierCursor*canvasToRef;

  // refToUser
  Matrix refToUser;
  refToUser = Translate(-ww) * FlipY() * irafMatrix_;

  // userToMagnifier
  userToMagnifier = 
    wcsOrientationMatrix *              // flip x/y axis about center
    orientationMatrix *                 // flip x/y axis about cursor position
    Rotate(wcsRotation) *               // rotate about center position
    Rotate(rotation) *                  // rotate about cursor position

    Scale(zoom_) *                      // scale about cursor position
    Scale(magnifierZoom_) *             // scale
    // must be int to align with screen pixels
    Translate((int)(magnifierWidth/2.), (int)(magnifierHeight/2.));
  magnifierToUser = userToMagnifier.invert();

  refToMagnifier = refToUser * userToMagnifier;
  magnifierToRef = refToMagnifier.invert();

  magnifierToWidget = magnifierToUser * userToWidget;
  widgetToMagnifier = magnifierToWidget.invert();

  pushMagnifierMatrices();
}

void Base::updatePannerMatrices()
{
  Vector center = imageCenter(FrScale::IMGSEC) * Translate(-.5, -.5);

  // refToUser
  Matrix refToUser;
  refToUser = Translate(-center) * FlipY() * irafMatrix_;
  userToRef = refToUser.invert();

  // userToPanner
  userToPanner =
    wcsOrientationMatrix *              // flip x/y axis about center
    orientationMatrix *                 // flip x/y axis about cursor position
    Rotate(wcsRotation) *               // rotate about center position
    Rotate(rotation) *                  // rotate about cursor position

    Scale(calcZoomPanner()) *
    // must be int to align with screen pixels
    Translate((int)(pannerWidth/2.), (int)(pannerHeight/2.));
  pannerToUser = userToPanner.invert();

  refToPanner = refToUser * userToPanner;
  pannerToRef = refToPanner.invert();

  pannerToWidget = pannerToRef * refToWidget;
  widgetToPanner = pannerToWidget.invert();

  pushPannerMatrices();
}

void Base::updateNow(UpdateType flag)
{
  if (DebugPerf)
    cerr << "Base::updateNow(" << flag << ')' << endl;

  if (flag < needsUpdate)
    needsUpdate = flag;
  // schedule redraw and process idletasks events
  redrawNow();
}

void Base::updateNow(UpdateType flag, BBox bb)
{
  if (DebugPerf)
    cerr << "Base::updateNow(" << flag << ',' << bb << ')' << endl;

  // bb is in canvas coords
  if (flag < needsUpdate)
    needsUpdate = flag;
  // schedule redraw and process idletasks events
  redrawNow(bb);
}

int Base::updatePixmap(const BBox& bb)
{
  // bbox is in canvas coords

  // Note: lack of breaks-- on purpose. 
  // If Matrices are update, both Base and Pixmap
  // also need to be updated. Same for Base-- ie, pixmap is also updated.
  switch (needsUpdate) {
  case NOUPDATE:
    break;
  case MATRIX:
    updateMatrices();
    updatePannerMatrices();
  case BASE:
    updateBase();
    updatePanner();
  case PIXMAP:
    updateMagnifier();
    updatePM(bb);
    break;

  case BASEONLY:
    // specal 3D
    updateBase();
    updateMagnifier();
    updatePM(bb);
    break;
  }

  needsUpdate = NOUPDATE;
  
  return TCL_OK;
}

extern "C" {
void TkUnixSetXftClipRegion(TkRegion clipRegion);
};

void Base::updatePM(const BBox& bbox)
{
  // just in case (MacOS)
  if (!basePixmap)
    return;

  // bbox is in Canvas Coords
  // Gave up on only redrawing bbox, contours, and grid causes problems

  if (DebugPerf)
    cerr << "Base::updatePM()...";

  int& width = options->width;
  int& height = options->height;

  if (!pixmap) {
    if (!(pixmap = Tk_GetPixmap(display, Tk_WindowId(tkwin), 
				width, height, depth))) {
      internalError("Unable to Create Pixmap");
      return;
    }
  }

  WidgetCopyArea(display, basePixmap, pixmap, widgetGC, 0, 0, width, height,
		 0, 0);

  // contours
  // needs to before markers if marker is filled
  currentContext->contourX11(pixmap, Coord::WIDGET, BBox(0,0,width,height));

  // grid
  if (grid)
    grid->x11();

  // markers over grid
  BBox bb = BBox(0,0,width,height) * widgetToCanvas;
  if (showMarkers) {
    x11Markers(&footprintMarkers, bb, HEAD);
    x11Markers(&catalogMarkers, bb, HEAD);
    x11Markers(&userMarkers, bb, TAIL);
  }

  // crosshair
  if (useCrosshair)
    x11Crosshair(pixmap, Coord::WIDGET, options->width, options->height);

  // select/crop
  if (doAnts)
    x11Ants();
  if (doAnts3d)
    x11Ants3d();

  // highlite bbox/compass
  x11Graphics();

  if (DebugPerf)
    cerr << "end" << endl;
}

char* Base::varcat(char* buf, char* base, char id, char* mod)
{
  int ll = strlen(base);
  strcpy(buf,base);
  buf[ll++] = id;
  buf[ll++] = '\0';
  strcat(buf,mod);
  return buf;
}

void Base::x11Ants()
{
  if (antsBegin[0]!=antsEnd[0] || antsBegin[1]!=antsEnd[1]) {
    Vector ss = mapToRef(antsBegin, Coord::CANVAS);
    Vector tt = mapToRef(antsEnd, Coord::CANVAS);

    Vector ll = mapFromRef(ss, Coord::WIDGET);
    Vector lr = mapFromRef(Vector(tt[0],ss[1]), Coord::WIDGET);
    Vector ur = mapFromRef(tt, Coord::WIDGET);
    Vector ul = mapFromRef(Vector(ss[0],tt[1]), Coord::WIDGET);

    XDrawLine(display,pixmap,selectGCXOR,ll[0],ll[1],lr[0],lr[1]);
    XDrawLine(display,pixmap,selectGCXOR,lr[0],lr[1],ur[0],ur[1]);
    XDrawLine(display,pixmap,selectGCXOR,ur[0],ur[1],ul[0],ul[1]);
    XDrawLine(display,pixmap,selectGCXOR,ul[0],ul[1],ll[0],ll[1]);
  }
}

void Base::x11Crosshair(Pixmap pm, Coord::InternalSystem sys, 
			int width, int height)
{
  Vector rr = mapFromRef(crosshair,sys);

  XSetForeground(display, widgetGC, getColor("green"));
  if (rr[0]>=0 && rr[0]<width)
    XDrawLine(display, pm, widgetGC, rr[0], 1, rr[0], height);

  if (rr[1]>=0 && rr[1]<height)
    XDrawLine(display, pm, widgetGC, 1, rr[1], width, rr[1]);
}

void Base::x11Dash(GC lgc, int which)
{
  if (which) {
    char dl[2];
#ifdef __WIN32
    dl[0] = dlist[0]/2;
    dl[1] = dlist[1]/2;
#else
    dl[0] = dlist[0];
    dl[1] = dlist[1];
#endif
    XSetLineAttributes(display, lgc, 1, LineOnOffDash, CapButt,JoinMiter);
    XSetDashes(display, lgc, 0, dl, 2);
  }
  else 
    XSetLineAttributes(display, lgc, 1, LineSolid, CapButt, JoinMiter);
}

void Base::x11Graphics()
{
  if (useHighlite) {
    XSetForeground(display, highliteGC_, getColor(highliteColourName));
    XDrawRectangle(display, pixmap, highliteGC_, 1, 1, 
		   options->width-2, options->height-2);
  }
}

void Base::ximageToPixmap(Pixmap pixmap, XImage* ximage, 
			  Coord::InternalSystem sys)
{
  // we need a colorScale before we can render
  if (!validColorScale())
    return;

  unsigned char* img = fillImage(ximage->width, ximage->height, sys);
  if (img) {
    encodeTrueColor(img, ximage);
    delete [] img;
  }

  TkPutImage(NULL, 0, display, pixmap, widgetGC, ximage, 
	     0, 0, 0, 0, ximage->width, ximage->height);
}

#ifdef __WIN32
#include <win32lib.h>

void Base::win32()
{
  // clip rect
  XRectangle rectWidget[1];
  XRectangle* rr = rectWidget;
  Vector v1 = Vector(rr->x, rr->y) * widgetToCanvas;
  Vector v2 = Vector(rr->x+rr->width, rr->y+rr->height) * widgetToCanvas;
  win32Clip(v1,v2-v1);

  if (currentContext->fits) {
    // scale
    double scale = 1.0;
    int width = options->width*scale;
    int height = options->height*scale;
    
    // image
    win32Image(scale, width, height, v1, v2-v1);
  }
}

void Base::win32Crosshair()
{
  if (!useCrosshair)
    return;

  Vector rr = mapFromRef(crosshair,Coord::WIDGET);
  Vector aa = Vector(rr[0],1) * widgetToCanvas;
  Vector bb = Vector(rr[0],options->height) * widgetToCanvas;
  Vector cc = Vector(1,rr[1]) * widgetToCanvas;
  Vector dd = Vector(options->width,rr[1]) * widgetToCanvas;

  win32Color(getXColor("green"));
  win32Width(1);
  win32Dash(NULL,0);
  win32DrawLine(aa,bb);
  win32DrawLine(cc,dd);
}

void Base::win32Image(float scale, int width, int height, 
		      const Vector& v, const Vector& s)
{
  // we need a colorScale before we can render
  if (!validColorScale())
    return;

  pushPSMatrices(scale, width, height);

  // source
  unsigned char* src = fillImage(width, height, Coord::PS);
  if (!src)
    return;

  // destination (width must be aligned on 4-byte DWORD boundary)
  int jjwidth=(((width+3)/4)*4);

  // extra alignment padding which we have to skip over for each row
  int jjpad=(jjwidth-width)*3;

  unsigned char* dst = new unsigned char[jjwidth*height*3];
  if (!dst)
    return;
  memset(dst, '\0', jjwidth*height*3);

  unsigned char* sptr = src;
  unsigned char* dptr = dst;
  unsigned char red, green, blue;
  for (int jj=0; jj<height; jj++) {
    for (int ii=0; ii<width; ii++) {
      red   = *sptr++;
      green = *sptr++;
      blue  = *sptr++;
      *dptr++ = blue;
      *dptr++ = green;
      *dptr++ = red;
    }
    dptr += jjpad;
  }

  if (src)
    delete [] src;

  win32BitmapCreate(dst, jjwidth, height, v, s);

  if (dst)
    delete [] dst;
}

void Base::win32PrintCmd()
{
  if (!visible)
    return;

  // init
  win32Begin();

  // image
  win32();

  // contours
  // needs to before markers if marker is filled
  currentContext->contourWin32();

  // grid
  if (grid)
    grid->win32();

  // markers over grid
  if (showMarkers) {
    win32Markers(&userMarkers);
    win32Markers(&catalogMarkers);
    win32Markers(&footprintMarkers);
  }

  win32Crosshair();
  win32Graphics();

  // cleanup
  win32End();
}
#endif
