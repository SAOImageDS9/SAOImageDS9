// Copyright (C) 1999-2018
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

  byteorder_ = 0;
  bitsperpixel_ = 0;

  baseXImage = NULL;
  basePixmap = 0;
  needsUpdate = NOUPDATE;
  syncUpdate = 0;

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
  wcsSkyFrame_ = Coord::FK5;
  wcsSkyFormat_ = Coord::DEGREES;

  wcsAlign_ = 0;

  xySystem_ = Coord::IMAGE;
  xySky_ = Coord::FK5;

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
  if (mm[0][0] != 0 && mm[1][1] !=0)
    zoom_ *= (Vector(mm[0][0],mm[1][0]).length() +
	      Vector(mm[0][1],mm[1][1]).length())/2.;
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
  cursor = keyContext->fits->mapToRef(bb,Coord::IMAGE,Coord::FK5);
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
  Tcl_SetVar2(interp,var,"value,red","",0);
  Tcl_SetVar2(interp,var,"value,green","",0);
  Tcl_SetVar2(interp,var,"value,blue","",0);

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
  if (!(magnifierXImage && magnifierPixmap))
    return;

  // vv is in CANVAS coords
  // save it, we may need it later
  magnifierCursor = vv;

  // do this first
  updateMagnifierMatrices();
  ximageToPixmapMagnifier();

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
  ostringstream str;
  str << magnifierName << " update " << (void*)magnifierPixmap << ends;
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

  XCopyArea(display, basePixmap, pixmap, widgetGC, 0, 0, width, height, 0, 0);

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

void Base::ximageToPixmapMagnifier()
{
  ximageToPixmap(magnifierPixmap, magnifierXImage, Coord::MAGNIFIER);
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
