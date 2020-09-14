// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tkInt.h>

#include "framebase.h"
#include "fitsimage.h"
#include "marker.h"
#include "context.h"
#include "sigbus.h"

// Public

FrameBase::FrameBase(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item)
: Base(i, c, item)
{
#ifndef MAC_OSX_TK
  colormapXM = NULL;
  colormapPM = 0;
  colormapGCXOR = 0;
#endif
}

FrameBase::~FrameBase()
{
#ifndef MAC_OSX_TK
  if (colormapXM)
    XDestroyImage(colormapXM);

  if (colormapPM)
    Tk_FreePixmap(display, colormapPM);

  if (colormapGCXOR)
    XFreeGC(display, colormapGCXOR);
#endif
}

void FrameBase::getInfoCmd(const Vector& vv, Coord::InternalSystem ref,
			   char* var)
{
  FitsBound* params;
  int mosaic;

  Vector rr = mapToRef(vv,ref);

  // make sure we have an image
  FitsImage* ptr = currentContext->cfits;
  FitsImage* sptr = currentContext->cfits;
  if (!ptr)
    goto noFits;

  mosaic = isMosaic();
  params = sptr->getDataParams(currentContext->secMode());

  if (!mosaic) {
    Tcl_SetVar2(interp,var,"filename",(char*)sptr->getFileName(ROOTBASE),0);
    Tcl_SetVar2(interp,var,"object",(char*)sptr->objectKeyword(),0);
    Tcl_SetVar2(interp,var,"min",(char*)sptr->getMin(),0);
    Tcl_SetVar2(interp,var,"min,x",(char*)sptr->getMinX(),0);
    Tcl_SetVar2(interp,var,"min,y",(char*)sptr->getMinY(),0);
    Tcl_SetVar2(interp,var,"max",(char*)sptr->getMax(),0);
    Tcl_SetVar2(interp,var,"max,x",(char*)sptr->getMaxX(),0);
    Tcl_SetVar2(interp,var,"max,y",(char*)sptr->getMaxY(),0);
    Tcl_SetVar2(interp,var,"low",(char*)sptr->getLow(),0);
    Tcl_SetVar2(interp,var,"high",(char*)sptr->getHigh(),0);
  }

  if (((Vector&)vv)[0]<0 && ((Vector&)vv)[1]<0)
    goto noImage;

  // clear values
  Tcl_SetVar2(interp,var,"value","",0);
  Tcl_SetVar2(interp,var,"value,red","",0);
  Tcl_SetVar2(interp,var,"value,green","",0);
  Tcl_SetVar2(interp,var,"value,blue","",0);

  do {
    Vector img = rr * sptr->refToData;

    if (img[0]>=params->xmin && img[0]<params->xmax && 
	img[1]>=params->ymin && img[1]<params->ymax) {

      if (mosaic) {
	Tcl_SetVar2(interp,var,"filename",(char*)sptr->getFileName(ROOTBASE),0);
	Tcl_SetVar2(interp,var,"object",(char*)sptr->objectKeyword(),0);
	Tcl_SetVar2(interp,var,"min",(char*)sptr->getMin(),0);
	Tcl_SetVar2(interp,var,"min,x",(char*)sptr->getMinX(),0);
	Tcl_SetVar2(interp,var,"min,y",(char*)sptr->getMinY(),0);
	Tcl_SetVar2(interp,var,"max",(char*)sptr->getMax(),0);
	Tcl_SetVar2(interp,var,"max,x",(char*)sptr->getMaxX(),0);
	Tcl_SetVar2(interp,var,"max,y",(char*)sptr->getMaxY(),0);
	Tcl_SetVar2(interp,var,"low",(char*)sptr->getLow(),0);
	Tcl_SetVar2(interp,var,"high",(char*)sptr->getHigh(),0);
      }

      SETSIGBUS
      Tcl_SetVar2(interp,var,"value",(char*)sptr->getValue(img),0);
      CLEARSIGBUS

      if (isCube()) {
	int ss = currentContext->slice(2);
	coordToTclArray(sptr,Vector3d(rr,ss-.5),Coord::IMAGE,var,"image");
      }
      else
	coordToTclArray(sptr,rr,Coord::IMAGE,var,"image");

      coordToTclArray(sptr,rr,Coord::PHYSICAL,var,"physical");
      if (hasATMV())
	coordToTclArray(sptr,rr,Coord::AMPLIFIER,var,"amplifier");
      if (hasDTMV())
	coordToTclArray(sptr,rr,Coord::DETECTOR,var,"detector");

      getInfoWCS(var,rr,sptr);
      return;
    }
    else {
      if (mosaic) {
	sptr = sptr->nextMosaic();
	if (sptr)
	  params = sptr->getDataParams(currentContext->secMode());
      }
      else {
	getInfoWCS(var,rr,sptr);
	goto noImage;
      }
    }
  }
  while (mosaic && sptr);

  // mosaic gap
  getInfoWCS(var,rr,ptr);

  // else, return blanks
 noFits:
  getInfoClearName(var);

 noImage:
  getInfoClearValue(var);
}

void FrameBase::getInfoWCS(char* var, Vector& rr, FitsImage* sptr)
{
  for (int ii=0; ii<MULTWCS; ii++) {
    char buf[128];
    char ww = !ii ? '\0' : '`'+ii;
    Coord::CoordSystem www = (Coord::CoordSystem)(Coord::WCS+ii);

    if (hasWCS(www)) {
      if (hasWCS3D(www)) {
	int ss = currentContext->slice(2);
	VectorStr3d out = sptr->mapFromRef(Vector3d(rr, ss-.5),
					   www, wcsSkyFrame_,wcsSkyFormat_);
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",x"),
		    out[0],0);
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",y"),
		    out[1],0);
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",z"),
		    out[2],0);
      }
      else {
	VectorStr out = sptr->mapFromRef(rr, www, wcsSkyFrame_, wcsSkyFormat_);
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",x"),
		    out[0],0);
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",y"),
		    out[1],0);
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",z"),"",0);
      }
      

      char* xsym = (char*)sptr->getWCSAxisSymbol(www,0);
      if (xsym)
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",x,sys"),xsym,0);
      else
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",x,sys"),"x",0);
      char* ysym = (char*)sptr->getWCSAxisSymbol(www,1);
      if (ysym)
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",y,sys"),ysym,0);
      else
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",y,sys"),"y",0);
      Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",z,sys"),"",0);

      char* system = (char*)sptr->getWCSSystem(www);
      char* domain = (char*)sptr->getWCSDomain(www);
      if (system) {
	if (!strncmp(system,"Unknown",7))
	  Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",sys"),"WCS",0);
	else
	  Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",sys"),system,0);
      }
      else if (domain)
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",sys"),domain,0);
      else
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",sys"),coord.coordSystemStr(www),0);
    }
    else {
      Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",x"),"",0);
      Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",y"),"",0);
      Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",z"),"",0);
      Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",x,sys"),"",0);
      Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",y,sys"),"",0);
      Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",z,sys"),"",0);
      Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",sys"),"",0);
    }
  }
}

void FrameBase::coordToTclArray(FitsImage* ptr, const Vector& vv, 
				Coord::CoordSystem out,
				const char* var, const char* base)
{
  Vector rr = ptr->mapFromRef(vv, out);
  doubleToTclArray(rr[0], var, base, "x");
  doubleToTclArray(rr[1], var, base, "y");
}

void FrameBase::coordToTclArray(FitsImage* ptr, const Vector3d& vv, 
				Coord::CoordSystem out,
				const char* var, const char* base)
{
  Vector3d rr = ptr->mapFromRef(vv, out);
  doubleToTclArray(rr[0], var, base, "x");
  doubleToTclArray(rr[1], var, base, "y");
  doubleToTclArray(rr[2], var, base, "z");
}

double FrameBase::calcZoomPanner()
{
  if (!(keyContext->fits && pannerPixmap))
    return 1;

  Vector src = imageSize(keyContext->datasec() ? FrScale::DATASEC : FrScale::IMGSEC);
  return calcZoom(src, Vector(pannerWidth,pannerHeight));
}

void FrameBase::setBinCursor()
{
  if (context->cfits)
    context->cfits->setBinCursor(cursor);
}

void FrameBase::setSlice(int id, int ss)
{
  // IMAGE (ranges 1-n)
  currentContext->updateSlice(id, ss);

  switch (currentContext->clipScope()) {
  case FrScale::GLOBAL:
    break;
  case FrScale::LOCAL:
    currentContext->clearHist();
    currentContext->updateClip();
    break;
  }

  currentContext->contourUpdateFV();
  updateColorScale();
  update(MATRIX);

  Base::setSlice(id,ss);
}

void FrameBase::updateBin(const Matrix& mx)
{
  // Note: cursor is in REF coords, imageCenter() in IMAGE coords
  cursor = imageCenter(FrScale::IMGSEC);
  Base::updateBin(mx);
}

void FrameBase::updatePanner()
{
  if (!usePanner)
    return;
  
  if (!doRender()) {
    ostringstream str;
    str << pannerName << " clear";
    Tcl_Eval(interp, str.str().c_str());
    return;
  }

  // do this first
  ximageToPixmap(pannerPixmap, pannerXImage, Coord::PANNER);

  ostringstream str;
  str << pannerName << " update " << (void*)pannerPixmap << ';';

  // calculate bbox
  Vector ll = Vector(0,0) * widgetToPanner;
  Vector lr = Vector(options->width,0) * widgetToPanner;
  Vector ur = Vector(options->width,options->height) * widgetToPanner;
  Vector ul = Vector(0,options->height) * widgetToPanner;

  str << pannerName << " update bbox " 
      << ll << ' ' << lr << ' ' << ur << ' ' << ul << ';';

  // calculate image compass vectors
  Matrix mm = 
    FlipY() *
    irafMatrix_ *
    wcsOrientationMatrix * 
    Rotate(wcsRotation) *
    orientationMatrix *
    Rotate(rotation);

  Vector xx = (Vector(1,0)*mm).normalize();
  Vector yy = (Vector(0,1)*mm).normalize();

  str << pannerName << " update image compass " 
      << xx << ' ' << yy << ';';

  if (keyContext->fits && keyContext->fits->hasWCS(wcsSystem_)) {
    Matrix mx;
    Coord::Orientation oo = 
      keyContext->fits->getWCSOrientation(wcsSystem_, wcsSkyFrame_);
    if (hasWCSCel(wcsSystem_)) {
      if (oo==Coord::XX)
	mx *= FlipX();
    }
    else {
      if (oo==Coord::NORMAL)
	mx *= FlipX();
    }

    double rr = keyContext->fits->getWCSRotation(wcsSystem_, wcsSkyFrame_);
    mx *= Rotate(rr)*mm;
    Vector north = (Vector(0,1)*mx).normalize();
    Vector east = (Vector(-1,0)*mx).normalize();

    str << pannerName << " update wcs compass " 
	<< north << ' ' << east << ends;
  }
  else
    str << pannerName << " update wcs compass invalid" << ends;

  Tcl_Eval(interp, str.str().c_str());
}

void FrameBase::x11MagnifierCursor(const Vector& vv)
{
  // first, the inner color'd box
  Vector uu = vv * canvasToUser;

  Matrix mm = Translate(-uu) * 
    Rotate(wcsRotation) *
    Rotate(rotation) *
    Scale(zoom_) *
    Scale(magnifierZoom_) *
    Translate(magnifierWidth/2., magnifierHeight/2.);

      Vector c[5];
    c[0] = (uu + Vector(-.5,-.5)) * mm;
    c[1] = (uu + Vector( .5,-.5)) * mm;
    c[2] = (uu + Vector( .5, .5)) * mm;
    c[3] = (uu + Vector(-.5, .5)) * mm;
    c[4] = c[0];
    
    XPoint pts[5];
    for (int ii=0; ii<5; ii++) {
      Vector z = c[ii].round();
      pts[ii].x = (short)z[0];
      pts[ii].y = (short)z[1];
    }

    XSetForeground(display, widgetGC, getColor(magnifierColorName));
    XDrawLines(display, magnifierPixmap, widgetGC, pts, 5, CoordModeOrigin);

    // now, the outer black box
    Matrix nn =
      Translate(-(uu * mm)) *
      Rotate(-rotation) *
      Rotate(-wcsRotation);
    Matrix oo = nn.invert();

    Vector dd[5];
    for (int ii=0; ii<5; ii++)
      dd[ii] = c[ii] * nn;

    dd[0]+=Vector(-1,-1);
    dd[1]+=Vector( 1,-1);
    dd[2]+=Vector( 1, 1);
    dd[3]+=Vector(-1, 1);
    dd[4]=dd[0];

    for (int ii=0; ii<5; ii++) {
      dd[ii] = dd[ii] * oo;
      Vector zz = dd[ii].round();
      pts[ii].x = (int)zz[0];
      pts[ii].y = (int)zz[1];
    }

    XSetForeground(display, widgetGC, getColor("black"));
    XDrawLines(display, magnifierPixmap, widgetGC, pts, 5, CoordModeOrigin);
}

