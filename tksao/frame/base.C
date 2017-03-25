// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tkInt.h>

#include "base.h"
#include "context.h"
#include "fitsimage.h"
#include "marker.h"
#include "ps.h"

#include "circle.h"
#include "ellipse.h"
#include "box.h"
#include "annulus.h"
#include "point.h"
#include "vect.h"

// Debug
int DebugAST= 0;
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
  nthreads_ = 8;

  byteorder_ = 0;
  bitsperpixel_ = 0;

  baseXImage = NULL;
  basePixmap = 0;
  needsUpdate = NOUPDATE;
  syncUpdate = 0;

  currentContext = NULL;
  keyContext = NULL;
  keyContextSet =0;

  orientation = Coord::NORMAL;
  zoom_ = Vector(1,1);
  rotation = 0;

  rotateRotation = 0;

  preservePan = 0;

  panPM = 0;
  panGCXOR = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);

  rotateGCXOR = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);

  pannerPixmap = 0;
  pannerXImage = NULL;
  pannerWidth = 0;
  pannerHeight = 0;
  pannerName[0] = '\0';
  usePanner = 0;
  pannerGC = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);
  XSetLineAttributes(display, pannerGC, 1, LineSolid, CapButt, JoinMiter);

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

  wcsSystem_ = Coord::WCS;
  wcsSky_ = Coord::FK5;
  wcsSkyFormat_ = Coord::DEGREES;

  wcsAlign_ = 0;

  xySystem_ = Coord::IMAGE;
  xySky_ = Coord::FK5;

  wcsOrientation = Coord::NORMAL;
  wcsRotation = 0;

  irafAlign_ =1;
  irafOrientation_ = (Coord::Orientation)-1;

  maskColorName = dupstr("red");
  maskAlpha = 1;
  maskMark = 1;

  invert = 0;

  useHighlite = 0;
  highliteGC = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);
  XSetLineAttributes(display, highliteGC, 2, LineSolid, CapButt, JoinMiter);
  XSetForeground(display, highliteGC, getColor("blue"));

  useCrosshair = 0;

  markerEpsilon = 3;
  showMarkers = 1;
  showMarkersText = 1;
  centroidAuto = 0;
  centroidIteration = 5;
  centroidRadius = 10;
  preserveMarkers = 0;

  markerGC = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);

  markerGCXOR = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);
  XSetForeground(display, markerGCXOR, getColor("white"));

  selectGCXOR = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);
  XSetForeground(display, selectGCXOR, getColor("white"));

  grid = NULL;
  gridGC = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);

  contourGC = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);
  XSetLineAttributes(display, contourGC, 1, LineSolid, CapButt, JoinMiter);

  bgColorName = dupstr("white");
  bgColor = getXColor("white");
  memset(bgTrueColor_,255,4);

  nanColorName = dupstr("white");
  nanColor = getXColor("white");
  memset(nanTrueColor_,255,4);

  dlist[0] = 8;
  dlist[1] = 3;

  colorbartag =NULL;

  markers = &userMarkers;
  undoMarkers = &undoUserMarkers;
  pasteMarkers = &pasteUserMarkers;
  undoMarkerType = NONE;

  editMarker = NULL;
  rotateMarker = NULL;

  compositeMarker = NULL;

  imageToData = Translate(-.5, -.5);
  dataToImage = Translate( .5,  .5);

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

  if (panPM)
    Tk_FreePixmap(display, panPM);

  if (panGCXOR)
    XFreeGC(display, panGCXOR);

  if (rotateGCXOR)
    XFreeGC(display, rotateGCXOR);

  if (pannerGC)
    XFreeGC(display, pannerGC);

  if (magnifierPixmap)
    Tk_FreePixmap(display, magnifierPixmap);

  if (magnifierXImage)
    XDestroyImage(magnifierXImage);

  if (highliteGC)
    XFreeGC(display, highliteGC);

  if (maskColorName)
    delete [] maskColorName;

  if (markerGC)
    XFreeGC(display, markerGC);

  if (markerGCXOR)
    XFreeGC(display, markerGCXOR);

  if (selectGCXOR)
    XFreeGC(display, selectGCXOR);

  if (grid)
    delete grid;

  if (gridGC)
    XFreeGC(display, gridGC);

  if (contourGC)
    XFreeGC(display, contourGC);

  if (bgColorName)
    delete [] bgColorName;

  if (nanColorName)
    delete [] nanColorName;

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

  calcAlignWCS(context->cfits, wcsSystem_, wcsSky_,
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

  calcAlignWCS(ptr, context->cfits, sys, wcsSystem_, wcsSky_,
	       &wcsOrientation, &wcsOrientationMatrix, &wcsRotation, &zoom_);
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

void Base::calcAlignWCS(FitsImage* fits1, FitsImage* fits2, 
			Coord::CoordSystem sys1, Coord::CoordSystem sys2, 
			Coord::SkyFrame sky,
			Coord::Orientation* orientation, Matrix* oo,
			double* rotation, Vector* zoom)
{
  // init
  *orientation = Coord::NORMAL;
  oo->identity();
  *rotation = 0;

  if ((!fits1 || !fits2) || 
      (fits1 == fits2) ||
      !(fits1->hasWCS(sys1)) ||
      !(fits2->hasWCS(sys2)))
    return;

  Vector org1 = fits1->center();
  Vector orval1 = fits1->pix2wcs(org1,sys1,sky);

  // orientation
  *orientation = fits2->getWCSOrientation(sys2,sky);
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
  Vector orpix = fits2->wcs2pix(orval1, sys2, sky);
  Vector delta = fits2->getWCScdelt(sys2).abs();
  Vector npix = 
    fits2->wcs2pix(Vector(orval1[0],orval1[1]+delta[1]),sys2,sky);
  Vector north = (npix-orpix).normalize();
  Vector epix = 
    fits2->wcs2pix(Vector(orval1[0]+delta[0],orval1[1]),sys2,sky);
  Vector east = (epix-orpix).normalize();

  // sanity check
  Vector diff = (north-east).abs();
  if ((north[0]==0 && north[1]==0) ||
      (east[0]==0 && east[1]==0) ||
      (diff[0]<.01 && diff[1]<.01)) {
    *rotation = 0;
    *orientation = Coord::NORMAL;
    oo->identity();
    return;
  }

  switch (*orientation) {
  case Coord::NORMAL:
    *rotation = -(north.angle()-M_PI_2);
    break;
  case Coord::XX:
    *rotation = (north.angle()-M_PI_2);
    break;
  default:
    // na
    break;
  }

  // zoom
  Vector cd1 = fits1->getWCScdelt(sys1);
  Vector cd2 = fits2->getWCScdelt(sys2);
  *zoom = Vector((*zoom)[0]/fabs(cd1[0]/cd2[0]), 
		 (*zoom)[1]/fabs(cd1[1]/cd2[1]));
}

Matrix Base::calcAlignWCS(FitsImage* fits1, FitsImage* fits2, 
			  Coord::CoordSystem sys1, Coord::CoordSystem sys2, 
			  Coord::SkyFrame sky)
{
  if ((!fits1 || !fits2) || 
      (fits1 == fits2) ||
      !(fits1->hasWCS(sys1)) ||
      !(fits2->hasWCS(sys2)))
    return Matrix();

  Vector org1 = fits1->center();
  Vector orval1 = fits1->pix2wcs(org1,sys1,sky);

  Vector org2 = fits2->center();
  Vector orval2 = fits2->pix2wcs(org2,sys2,sky);

  // orientation
  Coord::Orientation orientation =Coord::NORMAL;
  Coord::Orientation o1 = fits1->getWCSOrientation(sys1,sky);
  Coord::Orientation o2 = fits2->getWCSOrientation(sys2,sky);
  {
    switch (o1) {
    case Coord::NORMAL:
      {
	switch (o2) {
	case Coord::NORMAL:
	  orientation = Coord::NORMAL;
	  break;
	case Coord::XX:
	  orientation = Coord::XX;
	  break;
	default:
	  // na
	  break;
	}
      }
      break;
    case Coord::XX:
      {
	switch (o2) {
	case Coord::NORMAL:
	  orientation = Coord::XX;
	  break;
	case Coord::XX:
	  orientation = Coord::NORMAL;
	  break;
	default:
	  // na
	  break;
	}
      }
      break;
    default:
      // na
      break;
    }
  }

  // zoom
  Vector zoom =Vector(1,1);
  {
    Vector cd1 = fits1->getWCScdelt(sys1);
    Vector cd2 = fits2->getWCScdelt(sys2);
    zoom = Vector(cd2[0]/cd1[0], cd2[1]/cd1[1]).abs();
  }
  
  // rotation
  double rotation =0;
  {
    double rr1=0;
    {
      Vector orpix = fits1->wcs2pix(orval1, sys1, sky);
      Vector delta = fits1->getWCScdelt(sys1).abs();
      Vector npix = 
	fits1->wcs2pix(Vector(orval1[0],orval1[1]+delta[1]),sys1,sky);
      Vector north = (npix-orpix).normalize();
      Vector epix = 
	fits1->wcs2pix(Vector(orval1[0]+delta[0],orval1[1]),sys1,sky);
      Vector east = (epix-orpix).normalize();

      // sanity check
      Vector diff = (north-east).abs();
      if ((north[0]==0 && north[1]==0) ||
	  (east[0]==0 && east[1]==0) ||
	  (diff[0]<.01 && diff[1]<.01))
	return Matrix();

      switch (o1) {
      case Coord::NORMAL:
	rr1 = -(north.angle()-M_PI_2);
	break;
      case Coord::XX:
	rr1 = (north.angle()-M_PI_2);
	break;
      default:
	// na
	break;
      }
    }

    double rr2 =0;
    {
      Vector orpix = fits2->wcs2pix(orval1, sys2, sky);
      Vector delta = fits2->getWCScdelt(sys2).abs();
      Vector npix = 
	fits2->wcs2pix(Vector(orval1[0],orval1[1]+delta[1]),sys2,sky);
      Vector north = (npix-orpix).normalize();
      Vector epix = 
	fits2->wcs2pix(Vector(orval1[0]+delta[0],orval1[1]),sys2,sky);
      Vector east = (epix-orpix).normalize();

      // sanity check
      Vector diff = (north-east).abs();
      if ((north[0]==0 && north[1]==0) ||
	  (east[0]==0 && east[1]==0) ||
	  (diff[0]<.01 && diff[1]<.01))
	return Matrix();

      switch (o2) {
      case Coord::NORMAL:
	rr2 = -(north.angle()-M_PI_2);
	break;
      case Coord::XX:
	rr2 = north.angle()-M_PI_2;
	break;
      default:
	// na
	break;
      }
    }

    switch (o1) {
    case Coord::NORMAL:
      rotation = rr1-rr2;
      break;
    case Coord::XX:
      rotation = -(rr1-rr2);
      break;
    default:
      // na
      break;
    }
  }

  // origin
  Vector origin;
  {
    Vector orpix1 = fits1->wcs2pix(orval2,sys1,sky) * imageToData;
    Vector orpix2 = fits2->wcs2pix(orval2,sys2,sky) * imageToData;
    origin = orpix1 - orpix2;
  }

  // matrix
  {
    Matrix flip;
    switch (orientation) {
    case Coord::NORMAL:
      break;
    case Coord::XX:
      flip = FlipX();
      break;
    default:
      // na
      break;
    }

    Vector orpix2 = fits2->wcs2pix(orval2,sys2,sky) * imageToData;

    return
      Translate(-orpix2) *
      flip *
      Scale(zoom) *
      Rotate(rotation) *
      Translate(orpix2) *
      Translate(origin);
  }
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

void Base::coordToTclArray(FitsImage* ptr, const Vector3d& vv, 
			   Coord::CoordSystem out,
			   const char* var, const char* base)
{
  Vector rr = ptr->mapFromRef(vv, out);
  doubleToTclArray(rr[0], var, base, "x");
  doubleToTclArray(rr[1], var, base, "y");
}

void Base::coord3ToTclArray(FitsImage* ptr, const Vector3d& vv, 
			    Coord::CoordSystem out,
			    const char* var, const char* base)
{
  double ss = ptr->mapFromRef3axis(((Vector3d&)vv)[2],out,2);
  doubleToTclArray(ss, var, base, "z");
}

int Base::doRender() 
{
  return context->cfits ? 1 : 0;
}

void Base::doubleToTclArray(double d, const char* var, 
			    const char* base, const char* mod)
{
  ostringstream str;
  str << base << "," << mod << ends;

  ostringstream vstr;
  vstr << fixed << setw(9) << setprecision(3) << d << ends;
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
    Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",sys"),"",0);
  }
}

void Base::getInfoWCS(char* var, const Vector3d& rr, FitsImage* ptr, 
		      FitsImage* sptr)
{
  Vector img = Vector(rr) * sptr->refToData;

  for (int ii=0; ii<MULTWCS; ii++) {
    char buf[64];
    char ww = !ii ? '\0' : '`'+ii;
    Coord::CoordSystem www = (Coord::CoordSystem)(Coord::WCS+ii);

    if (hasWCS(www)) {
      char buff[128];
      Vector uu = img * dataToImage;
      sptr->pix2wcs(uu, www, wcsSky_, wcsSkyFormat_, buff);

      int argc;
      const char** argv;
      Tcl_SplitList(interp, buff, &argc, &argv);

      if (argc > 0 && argv && argv[0])
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",x"),argv[0],0);
      else
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",x"),"",0);
      if (argc > 1 && argv && argv[1])
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",y"),argv[1],0);
      else
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",y"),"",0);
      // use first slice
      coord3ToTclArray(ptr,rr,www,var,"wcs");

      char* wcsname = (char*)sptr->getWCSName(www);
      if (wcsname)
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",sys"),wcsname,0);
      else if (argc > 2 && argv && argv[2])
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",sys"),argv[2],0);
      else
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",sys"),"",0);
	    
      Tcl_Free((char*)argv);
    }
    else {
      Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",x"),"",0);
      Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",y"),"",0);
      Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",z"),"",0);
      Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",sys"),"",0);
    }
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

int Base::hasWCSEqu(Coord::CoordSystem sys)
{ 
  return currentContext->cfits && currentContext->cfits->hasWCSEqu(sys);
}

int Base::hasWCSCel(Coord::CoordSystem sys)
{ 
  return currentContext->cfits && currentContext->cfits->hasWCSCel(sys);
}

int Base::hasWCSx(Coord::CoordSystem sys)
{ 
  return currentContext->cfits && currentContext->cfits->hasWCSx(sys,2);
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
    Matrix mm = ptr->wcsToRef() * dataToImage;

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

      if (showMarkers) {
	psMarkers(&catalogMarkers, GRAY);
	psMarkers(&userMarkers, GRAY);
      }
      //      psMarkers(&analysisMarkers, GRAY);

      // needs to be after markers if marker is filled
      if (grid)
	grid->ps(GRAY);

      psCrosshair(GRAY);
      psGraphics(GRAY);

      break;
    case RGB:
    case CMYK:
      // needs to before markers if marker is filled
      currentContext->contourPS(RGB);

      if (showMarkers) {
	psMarkers(&catalogMarkers, RGB);
	psMarkers(&userMarkers, RGB);
      }
      //      psMarkers(&analysisMarkers, RGB);

      // needs to be after markers if marker is filled
      if (grid)
	grid->ps(RGB);

      psCrosshair(RGB);
      psGraphics(RGB);

      break;
    }
    break;
  case 2:
  case 3:
    // needs to before markers if marker is filled
    currentContext->contourPS(psColorSpace);

    if (showMarkers) {
      psMarkers(&catalogMarkers, psColorSpace);
      psMarkers(&userMarkers, psColorSpace);
    }
    //    psMarkers(&analysisMarkers, psColorSpace);

    // needs to be after markers if marker is filled
    if (grid)
      grid->ps(psColorSpace);

    psCrosshair(psColorSpace);
    psGraphics(psColorSpace);

    break;
  }

  return TCL_OK;
}

void Base::printCoordSystem(Coord::CoordSystem sys)
{
  Tcl_AppendResult(interp, coord.coordSystemStr(sys), NULL);
}

void Base::printDouble(double d)
{
  ostringstream str;
  str << d << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::printInteger(int i)
{
  ostringstream str;
  str << i << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::printSkyFrame(Coord::SkyFrame sky)
{
  Tcl_AppendResult(interp, coord.skyFrameStr(sky), NULL);
}

void Base::printSkyFormat(Coord::SkyFormat format)
{
  Tcl_AppendResult(interp, coord.skyFormatStr(format), NULL);
}

void Base::printSkyDist(Coord::SkyDist dist)
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
			   Coord::CoordSystem sys, Coord::SkyDist dist)
{
  ostringstream str;
  ptr->listLenFromRef(str, dd, sys, dist);
  str << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::printLenFromRef(FitsImage* ptr, const Vector& vv,
			   Coord::CoordSystem sys, Coord::SkyDist dist)
{
  ostringstream str;
  ptr->listLenFromRef(str, vv, sys, dist);
  str << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::printDistFromRef(FitsImage* ptr, 
			    const Vector& vv1, const Vector& vv2,
			    Coord::CoordSystem sys, Coord::SkyDist dist)
{
  ostringstream str;
  ptr->listDistFromRef(str, vv1, vv2, sys, dist);
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
    switch ((PSColorSpace)mode) {
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
	<< aa.TkCanvasPs(canvas) << ' '
	<< "moveto "
	<< bb.TkCanvasPs(canvas) << ' '
	<< "lineto  stroke" << endl
	<< "newpath " 
	<< cc.TkCanvasPs(canvas) << ' '
	<< "moveto "
	<< dd.TkCanvasPs(canvas) << ' '
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

void Base::pushMatrices()
{
  Matrix rgbToRef; 

  FitsImage* ptr = context->fits;
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

void Base::pushMagnifierMatrices()
{
  FitsImage* ptr = context->fits;
  while (ptr) {
    FitsImage* sptr = ptr;
    while (sptr) {
      sptr->updateMagnifierMatrices(refToMagnifier);
      sptr = sptr->nextSlice();
    }
    ptr = ptr->nextMosaic();
  }
}

void Base::pushPannerMatrices()
{
  FitsImage* ptr = context->fits;
  while (ptr) {
    FitsImage* sptr = ptr;
    while (sptr) {
      sptr->updatePannerMatrices(refToPanner);
      sptr = sptr->nextSlice();
    }
    ptr = ptr->nextMosaic();
  }
}

void Base::pushPSMatrices(float scale, int width, int height)
{
  Matrix mx = psMatrix(scale, width, height);

  FitsImage* ptr = context->fits;
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
  //  unselectMarkers(&analysisMarkers);

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
  //  updateMarkers(&analysisMarkers);

  // execute any update callbacks
  updateCBMarkers(&userMarkers);
  updateCBMarkers(&catalogMarkers);
  //  updateCBMarkers(&analysisMarkers);
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

  //  analysisMarkers.deleteAll();
  //  undoAnalysisMarkers.deleteAll();
  //  pasteAnalysisMarkers.deleteAll();

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
  redraw();
}

void Base::update(UpdateType flag, BBox bb)
{
  if (DebugPerf)
    cerr << "Base::update(" << flag << ' ' << bb << ')' << endl;

  // bb is in canvas coords

  if (flag < needsUpdate)
    needsUpdate = flag;
  redraw(bb);
}

void Base::updateBase()
{
  if (!widgetGC)
    widgetGC = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);

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
    encodeTrueColor(bgColor, bgTrueColor_);
    encodeTrueColor(nanColor, nanTrueColor_);

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
    XSetForeground(display, widgetGC, getColor(bgColorName));
    XFillRectangle(display, basePixmap, widgetGC, 0,0,options->width,options->height);
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
    //    updateMarkerCoords(&analysisMarkers, mx);
  }

  alignWCS();
  updateColorScale();
  updateNow(MATRIX); // because we have changed zoom

  // update markers call backs
  // wait til matrices have been updated so that any dialogs will print
  // the correct coords
  updateMarkerCBs(&userMarkers);
  updateMarkerCBs(&catalogMarkers);
  //  updateMarkerCBs(&analysisMarkers);
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
    //    updateMarkerCoords(&analysisMarkers, mx);
  }

  alignWCS();
  updateColorScale();
  updateNow(MATRIX);

  // update markers call backs
  // wait til matrices have been updated so that any dialogs will print
  // the correct coords
  updateMarkerCBs(&userMarkers);
  updateMarkerCBs(&catalogMarkers);
  //  updateMarkerCBs(&analysisMarkers);
}

void Base::updateGCs()
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

  // highliteGC
  XSetClipRectangles(display, highliteGC, 0, 0, rectWidget, 1, Unsorted);

  // panGCXOR
  XSetClipRectangles(display, panGCXOR, 0, 0, rectWindow, 1, Unsorted);

  // rotateGCXOR
  XSetClipRectangles(display, rotateGCXOR, 0, 0, rectWindow, 1, Unsorted);

  // markerGC
  XSetClipRectangles(display, markerGC, 0, 0, rectWidget, 1, Unsorted);
  XSetClipRectangles(display, markerGCXOR, 0, 0, rectWindow, 1, Unsorted);

  // selectGC
  x11Dash(selectGCXOR,1);
  XSetClipRectangles(display, selectGCXOR, 0, 0, rectWindow, 1, Unsorted);

  // gridGC
  XSetClipRectangles(display, gridGC, 0, 0, rectWidget, 1, Unsorted);

  // contourGC
  XSetClipRectangles(display, contourGC, 0, 0, rectWidget, 1, Unsorted);
}

void Base::updateMagnifier()
{
  updateMagnifier(magnifierCursor);
}

void Base::updateMagnifier(const Vector& vv)
{
  // vv is in CANVAS coords
  // save it, we may need it later
  magnifierCursor = vv;

  if (!(magnifierXImage && magnifierPixmap))
    return;

  // just in case
  if (!widgetGC)
    widgetGC = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);

  if (useMagnifier) {
    updateMagnifierMatrices();

    if (doRender()) {
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
				   magnifierWidth, magnifierHeight);

	if (showMarkers) {
	  x11MagnifierMarkers(&userMarkers, bb);
	  x11MagnifierMarkers(&catalogMarkers, bb);
	}
	//	x11MagnifierMarkers(&analysisMarkers, bb);

	// render crosshair
	if (useCrosshair)
	  x11Crosshair(magnifierPixmap, Coord::MAGNIFIER, 
			  magnifierWidth, magnifierHeight);
      }

      // render cursor
      if (useMagnifierCursor)
	x11MagnifierCursor(vv);
    }
    else {
      XSetForeground(display, widgetGC, getColor(bgColorName));
      XFillRectangle(display, magnifierPixmap, widgetGC, 0, 0, 
		     magnifierXImage->width, magnifierXImage->height);
    }

    // notify the magnifier widget
    ostringstream str;
    str << magnifierName << " update " << (void*)magnifierPixmap << ends;
    Tcl_Eval(interp, str.str().c_str());
  }
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
  //  updateMarkers(&analysisMarkers);

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
  Vector center = imageCenter(FrScale::IMGSEC) * imageToData;

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
  redrawNow();
}

void Base::updateNow(UpdateType flag, BBox bb)
{
  if (DebugPerf)
    cerr << "Base::updateNow(" << flag << ',' << bb << ')' << endl;

  // bb is in canvas coords
  if (flag < needsUpdate)
    needsUpdate = flag;
  redrawNow(bb);
}

void Base::updatePanner()
{
  if (usePanner) {
    if (doRender())
      ximageToPixmap(pannerPixmap, pannerXImage, Coord::PANNER);
    else {
      XSetForeground(display, pannerGC, getColor(bgColorName));
      XFillRectangle(display, pannerPixmap, pannerGC, 0, 0,
		     pannerWidth, pannerHeight);
    }  
  }
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
    updatePanner();
  case BASEONLY:
    updateBase();
  case PIXMAP:
    updatePM(bb);
    break;
  }

  needsUpdate = NOUPDATE;
  return TCL_OK;
}

void Base::updatePM(const BBox& bbox)
{
  // bbox is in Canvas Coords

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

  if (!bbox.isEmpty()) {
    BBox bb = bbox * canvasToWidget;
    int x0 = (int)bb.ll[0] > 0 ? (int)bb.ll[0] : 0;
    int y0 = (int)bb.ll[1] > 0 ? (int)bb.ll[1] : 0;
    int x1 = (int)bb.ur[0] < width ? (int)bb.ur[0] : width;
    int y1 = (int)bb.ur[1] < height ? (int)bb.ur[1] : height;
    int sx = x1-x0;
    int sy = y1-y0;

    if (DebugPerf)
      cerr << ' ' << x0 << ' ' << y0 << ' ' << x1 << ' ' << y1 << ' ';

    XCopyArea(display, basePixmap, pixmap, widgetGC, x0, y0, sx, sy, x0, y0);
  }

  // contours
  // needs to before markers if marker is filled
  currentContext->contourX11(pixmap, Coord::WIDGET, 
			     options->width, options->height);

  // markers
  if (showMarkers) {
    x11Markers(&catalogMarkers, bbox);
    x11Markers(&userMarkers, bbox);
  }
  //  x11Markers(&analysisMarkers, bbox);

  // grid
  // needs to be after markers if marker is filled
  if (grid)
    grid->x11();

  // crosshair
  x11Crosshair(pixmap, Coord::WIDGET, options->width, options->height);

  // highlite bbox
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

void Base::x11Crosshair(Pixmap pm, Coord::InternalSystem sys, 
			int width, int height)
{
  if (useCrosshair) {
    Vector rr = mapFromRef(crosshair,sys);

    XSetForeground(display, widgetGC, getColor("green"));
    if (rr[0]>=0 && rr[0]<width)
      XDrawLine(display, pm, widgetGC, rr[0], 1, rr[0], height);

    if (rr[1]>=0 && rr[1]<height)
      XDrawLine(display, pm, widgetGC, 1, rr[1], width, rr[1]);
  }
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
  if (useHighlite)
    XDrawRectangle(display, pixmap, highliteGC, 1, 1, 
		   options->width-2, options->height-2);
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

#ifdef MAC_OSX_TK
void Base::macosx()
{
  // clip rect
  XRectangle* rr = rectWidget;
  Vector v1 = Vector(rr->x, rr->y) * widgetToCanvas;
  Vector v2 = Vector(rr->x+rr->width, rr->y+rr->height) * widgetToCanvas;
  macosxClip(v1,v2-v1);

  if (currentContext->fits) {
    // scale
    double scale = 150 / 72.;
    int width = options->width*scale;
    int height = options->height*scale;

    // image
    macosxImage(scale, width, height, v1, v2-v1);
  }
}

void Base::macosxCrosshair()
{
  if (!useCrosshair)
    return;

  Vector rr = mapFromRef(crosshair,Coord::WIDGET);
  Vector aa = Vector(rr[0],1) * widgetToCanvas;
  Vector bb = Vector(rr[0],options->height) * widgetToCanvas;
  Vector cc = Vector(1,rr[1]) * widgetToCanvas;
  Vector dd = Vector(options->width,rr[1]) * widgetToCanvas;

  macosxColor(getXColor("green"));
  macosxWidth(1);
  macosxDrawLine(aa,bb);
  macosxDrawLine(cc,dd);
}

void Base::macosxImage(float scale, int width, int height, 
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

  // destination
  unsigned char* dst = new unsigned char[width*height*4];
  if (!dst)
    return;

  unsigned char* sptr = src;
  unsigned char* dptr = dst;
  for (int ii=0; ii<width*height; ii++) {
    *dptr++ = *sptr++;
    *dptr++ = *sptr++;
    *dptr++ = *sptr++;
    *dptr++ = 0;
  }

  if (src)
    delete [] src;

  macosxBitmapCreate(dst, width, height, v, s);

  if (dst)
    delete [] dst;
}

void Base::macosxPrintCmd()
{
  if (!visible)
    return;

  // init
  macosxBegin();

  // image
  macosx();

  // contours
  // needs to before markers if marker is filled
  currentContext->contourMacOSX();

  // markers
  if (showMarkers) {
    macosxMarkers(&catalogMarkers);
    macosxMarkers(&userMarkers);
  }
  //  macosxMarkers(&analysisMarkers);

  // grid
  // needs to be after markers if marker is filled
  if (grid)
    grid->macosx();

  macosxCrosshair();
  macosxGraphics();

  // cleanup
  macosxEnd();
}
#endif

#ifdef __WIN32
void Base::win32()
{
  // clip rect
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

  // markers
  if (showMarkers) {
    win32Markers(&userMarkers);
    win32Markers(&catalogMarkers);
  }
  //  win32Markers(&analysisMarkers);

  // grid
  // needs to be after markers if marker is filled
  if (grid)
    grid->win32();

  win32Crosshair();
  win32Graphics();

  // cleanup
  win32End();
}
#endif
