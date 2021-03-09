// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tkInt.h>

#include "util.h"
#include "frame3dbase.h"
#include "fitsimage.h"
#include "marker.h"
#include "context.h"
#include "sigbus.h"

Frame3dBase::Frame3dBase(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item) 
  : Base(i, c, item)
{
  //  zdepth_ =100000;
  zdepth_ =200000;
  zzoom_ =1;
  zscale_ =1;

  az_ =0;
  el_ =0;
  renderMethod_ = MIP;

  preservecache_ =0;
  render_ =NONE;

  pannerGC = NULL;
  threedGC = NULL;

  border_ =0;
  borderColorName_ = dupstr("blue");
  compass_ =0;
  compassColorName_ = dupstr("green");
  highlite_ =1;
  highliteColorName_ = dupstr("cyan");

  cropsl_ =0;
}

Frame3dBase::~Frame3dBase()
{
  if (pannerGC)
    XFreeGC(display, pannerGC);

  if (threedGC)
    XFreeGC(display, threedGC);

  if (borderColorName_)
    delete [] borderColorName_;
  if (compassColorName_)
    delete [] compassColorName_;
  if (highliteColorName_)
    delete [] highliteColorName_;

  cache_.deleteAll();
  pannerCache_.deleteAll();
}


void Frame3dBase::getInfoCmd(const Vector& vv, Coord::InternalSystem ref,
			     char* var)
{
  FitsBound* params;
  int mosaic;

  Vector3d rr = mapToRef3d(vv,ref);

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
    Vector img = Vector(rr) * sptr->refToData;

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

void Frame3dBase::getInfoWCS(char* var, Vector3d& rr, FitsImage* sptr)
{
  for (int ii=0; ii<MULTWCS; ii++) {
    char buf[128];
    char ww = !ii ? '\0' : '`'+ii;
    Coord::CoordSystem www = (Coord::CoordSystem)(Coord::WCS+ii);

    if (hasWCS(www)) {
      VectorStr3d out = sptr->mapFromRef(rr, www, wcsSkyFrame_, wcsSkyFormat_);

      Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",x"),out[0],0);
      Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",y"),out[1],0);
      Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",z"),out[2],0);
      
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
      char* zsym = (char*)sptr->getWCSAxisSymbol(www,2);
      if (zsym)
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",z,sys"),zsym,0);
      else
	Tcl_SetVar2(interp,var,varcat(buf,(char*)"wcs",ww,(char*)",z,sys"),"z",0);

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

void Frame3dBase::coordToTclArray(FitsImage* ptr, const Vector3d& vv, 
				  Coord::CoordSystem out,
				  const char* var, const char* base)
{
  Vector3d rr = ptr->mapFromRef(vv, out);
  doubleToTclArray(rr[0], var, base, "x");
  doubleToTclArray(rr[1], var, base, "y");
  doubleToTclArray(rr[2], var, base, "z");
}

void Frame3dBase::calcBorder(Coord::InternalSystem sys, FrScale::SecMode mode,
			     Vector3d* vv, int* dd)
{
  if (!keyContext->fits)
    return;

  FitsBound* params = keyContext->fits->getDataParams(mode);
  FitsZBound* zparams = keyContext->getDataParams(mode);

  Vector3d llf(params->xmin,params->ymin,zparams->zmin);
  Vector3d lrf(params->xmax,params->ymin,zparams->zmin);
  Vector3d urf(params->xmax,params->ymax,zparams->zmin);
  Vector3d ulf(params->xmin,params->ymax,zparams->zmin);

  Vector3d llb(params->xmin,params->ymin,zparams->zmax);
  Vector3d lrb(params->xmax,params->ymin,zparams->zmax);
  Vector3d urb(params->xmax,params->ymax,zparams->zmax);
  Vector3d ulb(params->xmin,params->ymax,zparams->zmax);

  Matrix3d& mm = keyContext->fits->matrixFromData3d(sys);
  vv[0] = llf * mm;
  vv[1] = lrf * mm;
  vv[2] = urf * mm;
  vv[3] = ulf * mm;
  vv[4] = llb * mm;
  vv[5] = lrb * mm;
  vv[6] = urb * mm;
  vv[7] = ulb * mm;

  // init for dash
  for (int ii=0; ii<12; ii++)
    dd[ii] =1;

  // front
  {
    Vector3d aa = vv[1]-vv[0];
    Vector3d cc = vv[3]-vv[0];
    Vector3d ff = cross(aa,cc);
    for (int ii=0; ii<4; ii++)
      dd[ii] &= ff[2]>0;
  }

  // right
  {
    Vector3d aa = vv[5]-vv[1];
    Vector3d cc = vv[2]-vv[1];
    Vector3d ff = cross(aa,cc);
    int ww = ff[2]>0;
    dd[1] &= ww;
    dd[9] &= ww;
    dd[5] &= ww;
    dd[10] &= ww;
  }

  // top
  {
    Vector3d aa = vv[6]-vv[2];
    Vector3d cc = vv[3]-vv[2];
    Vector3d ff = cross(aa,cc);
    int ww = ff[2]>0;
    dd[2] &= ww;
    dd[10] &= ww;
    dd[6] &= ww;
    dd[11] &= ww;
  }

  // left
  {
    Vector3d aa = vv[7]-vv[3];
    Vector3d cc = vv[0]-vv[3];
    Vector3d ff = cross(aa,cc);
    int ww = ff[2]>0;
    dd[3] &= ww;
    dd[8] &= ww;
    dd[7] &= ww;
    dd[11] &= ww;
  }

  // bottom
  {
    Vector3d aa = vv[4]-vv[0];
    Vector3d cc = vv[1]-vv[0];
    Vector3d ff = cross(aa,cc);
    int ww = ff[2]>0;
    dd[0] &= ww;
    dd[9] &= ww;
    dd[4] &= ww;
    dd[8] &= ww;
  }

  // back
  {
    Vector3d aa = vv[4]-vv[5];
    Vector3d cc = vv[6]-vv[5];
    Vector3d ff = cross(aa,cc);
    for (int ii=4; ii<8; ii++)
      dd[ii] &= ff[2]>0;
  }
}

void Frame3dBase::calcHighlite(Coord::InternalSystem sys, Vector* vv, int* rr)
{
  if (!keyContext->fits)
    return;

  FitsBound* params =  keyContext->fits->getDataParams(keyContext->secMode());
  Vector ss(params->xmin,params->ymin);
  Vector tt(params->xmax,params->ymax);

  Vector ll = mapFromRef3d(ss,sys);
  Vector lr = mapFromRef3d(Vector(tt[0],ss[1]),sys);
  Vector ur = mapFromRef3d(tt,sys);
  Vector ul = mapFromRef3d(Vector(ss[0],tt[1]),sys);
    
  // context->slice() IMAGE (ranges 1-n)
  double sl = keyContext->slice(2)-.5;
  Vector3d ll1 = mapFromRef3d(ss,sys);
  Vector3d lr1 = mapFromRef3d(Vector(tt[0],ss[1]),sys);
  Vector3d ur1 = mapFromRef3d(tt,sys);
  Vector3d ul1 = mapFromRef3d(Vector3d(ss[0],tt[1]),sys);
  Vector3d ll0 = mapFromRef3d(ss,sys,sl-1);
  Vector3d lr0 = mapFromRef3d(Vector3d(tt[0],ss[1]),sys,sl-1);
  Vector3d ur0 = mapFromRef3d(tt,sys,sl-1);
  Vector3d ul0 = mapFromRef3d(Vector3d(ss[0],tt[1]),sys,sl-1);

  Vector3d aa1 = (ll0-ll1).normalize();
  Vector3d aa2 = (lr0-lr1).normalize();
  Vector3d aa3 = (ur0-ur1).normalize();
  Vector3d aa4 = (ul0-ul1).normalize();
  Vector3d bb1 = (lr1-ll1).normalize();
  Vector3d bb2 = (ur1-lr1).normalize();
  Vector3d bb3 = (ul1-ur1).normalize();
  Vector3d bb4 = (ll1-ul1).normalize();

  Vector3d cc1 = cross(bb1,aa1);
  Vector3d cc2 = cross(bb2,aa2);
  Vector3d cc3 = cross(bb3,aa3);
  Vector3d cc4 = cross(bb4,aa4);

  vv[0] = ll;
  vv[1] = lr;
  vv[2] = ur;
  vv[3] = ul;

  rr[0] = cc1[2]>0;
  rr[1] = cc2[2]>0;
  rr[2] = cc3[2]>0;
  rr[3] = cc4[2]>0;
}

double Frame3dBase::calcZoom3d(Vector3d src, Vector dest)
{
    Vector3d cc = src/2.;

    Vector3d llf(0,0,0);
    Vector3d lrf(0,src[1],0);
    Vector3d urf(src[0],src[1],0);
    Vector3d ulf(src[0],0,0);
 
    Vector3d llb(0,0,src[2]);
    Vector3d lrb(0,src[1],src[2]);
    Vector3d urb(src[0],src[1],src[2]);
    Vector3d ulb(src[0],0,src[2]);
 
    Matrix3d mx = 
      Translate3d(-cc) *
      RotateZ3d(-wcsRotation) *
      RotateZ3d(-rotation) *
      RotateY3d(az_) * 
      RotateX3d(el_);

    BBox3d bb(llf*mx);
    bb.bound(lrf*mx);
    bb.bound(urf*mx);
    bb.bound(ulf*mx);
    bb.bound(llb*mx);
    bb.bound(lrb*mx);
    bb.bound(urb*mx);
    bb.bound(ulb*mx);

    Vector3d bs = bb.size();
    double r0 = dest[0]/bs[0];
    double r1 = dest[1]/bs[1];

    return r0>r1 ? r1:r0;
}

double Frame3dBase::calcZoomPanner()
{
  if (!keyContext->fits)
    return 1;

  if (!pannerPixmap)
    return 1;

  Vector3d src = imageSize3d(keyContext->datasec() ? FrScale::DATASEC : FrScale::IMGSEC) * Scale3d(1,zscale_);
  Vector dest(pannerWidth,pannerHeight);

  Vector3d cc = src/2.;

  Vector3d llf = Vector3d(0,0,0);
  Vector3d lrf = Vector3d(0,src[1],0);
  Vector3d urf = Vector3d(src[0],src[1],0);
  Vector3d ulf = Vector3d(src[0],0,0);
 
  Vector3d llb = Vector3d(0,0,src[2]);
  Vector3d lrb = Vector3d(0,src[1],src[2]);
  Vector3d urb = Vector3d(src[0],src[1],src[2]);
  Vector3d ulb = Vector3d(src[0],0,src[2]);
 
  BBox3d bb;

  // 0, 0
  Matrix3d m0000 = 
    Translate3d(-cc) *
    RotateY3d(degToRad(0)) * 
    RotateX3d(degToRad(0));
  bb.bound(llf*m0000);
  bb.bound(llf*m0000);
  bb.bound(lrf*m0000);
  bb.bound(urf*m0000);
  bb.bound(ulf*m0000);
  bb.bound(llb*m0000);
  bb.bound(lrb*m0000);
  bb.bound(urb*m0000);
  bb.bound(ulb*m0000);

  // 0, 90
  Matrix3d m0090 = 
    Translate3d(-cc) *
    RotateY3d(degToRad(90)) * 
    RotateX3d(degToRad(0));
  bb.bound(llf*m0090);
  bb.bound(llf*m0090);
  bb.bound(lrf*m0090);
  bb.bound(urf*m0090);
  bb.bound(ulf*m0090);
  bb.bound(llb*m0090);
  bb.bound(lrb*m0090);
  bb.bound(urb*m0090);
  bb.bound(ulb*m0090);

  // 90, 0
  Matrix3d m9000 = 
    Translate3d(-cc) *
    RotateY3d(degToRad(0)) * 
    RotateX3d(-degToRad(90));
  bb.bound(llf*m9000);
  bb.bound(llf*m9000);
  bb.bound(lrf*m9000);
  bb.bound(urf*m9000);
  bb.bound(ulf*m9000);
  bb.bound(llb*m9000);
  bb.bound(lrb*m9000);
  bb.bound(urb*m9000);
  bb.bound(ulb*m9000);

  // 45, 45
  Matrix3d m4545 = 
    Translate3d(-cc) *
    RotateY3d(degToRad(45)) * 
    RotateX3d(-degToRad(45));
  bb.bound(llf*m4545);
  bb.bound(llf*m4545);
  bb.bound(lrf*m4545);
  bb.bound(urf*m4545);
  bb.bound(ulf*m4545);
  bb.bound(llb*m4545);
  bb.bound(lrb*m4545);
  bb.bound(urb*m4545);
  bb.bound(ulb*m4545);
 
  // 45, 90
  Matrix3d m4590 = 
    Translate3d(-cc) *
    RotateY3d(degToRad(90)) * 
    RotateX3d(-degToRad(45));
  bb.bound(llf*m4590);
  bb.bound(lrf*m4590);
  bb.bound(urf*m4590);
  bb.bound(ulf*m4590);
  bb.bound(llb*m4590);
  bb.bound(lrb*m4590);
  bb.bound(urb*m4590);
  bb.bound(ulb*m4590);

  // 90, 45
  Matrix3d m9045 = 
    Translate3d(-cc) *
    RotateY3d(degToRad(45)) * 
    RotateX3d(-degToRad(90));
  bb.bound(llf*m9045);
  bb.bound(lrf*m9045);
  bb.bound(urf*m9045);
  bb.bound(ulf*m9045);
  bb.bound(llb*m9045);
  bb.bound(lrb*m9045);
  bb.bound(urb*m9045);
  bb.bound(ulb*m9045);

  Vector3d bs = bb.size();
  double ll = bs[0] > bs[1] ? bs[0] : bs[1];
  double mm = dest[0] > dest[1] ? dest[0] : dest[1];

  return 1/ll*mm;
}

void Frame3dBase::centerImage()
{
  Base::centerImage();

  viewCursor_ = Vector();
  if (keyContext->fits) {
    // imageCenter is in IMAGE coords
    Vector3d aa = imageCenter3d(keyContext->secMode());
    // always center to center of pixel, even for even sized image
    Vector3d bb = (aa * Translate3d(.5, .5, .5)).floor();
    // vp_ is in REF coords
    vp_ = bb*Translate3d(-.5, -.5, -.5);
  }
  else
    vp_ = Vector();
}

Vector3d Frame3dBase::imageCenter3d(FrScale::SecMode mode)
{
  if (!keyContext->fits)
    return Vector3d();

  // params is a BBOX in DATA coords 0-n
  FitsBound* pp = keyContext->fits->getDataParams(mode);
  FitsZBound* zz = keyContext->getDataParams(mode);

  // Note: imageCenter() is in IMAGE coords
  return Vector3d((pp->xmax - pp->xmin)/2.+pp->xmin, 
		  (pp->ymax - pp->ymin)/2.+pp->ymin,
		  (zz->zmax - zz->zmin)/2.+zz->zmin) *
    Translate3d(.5, .5, .5);
}

Vector3d Frame3dBase::imageSize3d(FrScale::SecMode mode )
{
  if (!keyContext->fits)
    return Vector3d();

  // params is a BBOX in DATA coords 0-n
  FitsBound* params = keyContext->fits->getDataParams(mode);
  FitsZBound* zparams = keyContext->getDataParams(mode);

  // return in IMAGE coords and extends edge to edge
  return  Vector3d(params->xmax-params->xmin, params->ymax-params->ymin,
		   zparams->zmax-zparams->zmin);
}

void Frame3dBase::psLine(Vector& ss, Vector& tt, int dd)
{
  ostringstream str;
  if (dd)
    str << '[' << dlist[0] << ' ' << dlist[1] << "] 0 setdash" << endl;
  else
    str << "[] 0 setdash" << endl;

  str << "newpath " 
      << TkCanvasPs(ss) << " moveto" << endl
      << TkCanvasPs(tt) << " lineto stroke" << endl << ends;

  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Frame3dBase::psWidth(int dd)
{
  ostringstream str;
  str << dd << " setlinewidth" << endl << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Frame3dBase::psGraphics(PSColorSpace mode)
{
  if (!keyContext->fits)
    return;

  if (border_)
    psBorder(mode);
  if (compass_)
    psCompass(mode);
  if (highlite_)
    psHighlite(mode);
}

void Frame3dBase::psBorder(PSColorSpace mode)
{
  Vector3d vv[8];
  int dd[12];
  calcBorder(Coord::WIDGET, keyContext->secMode(), vv, dd);

  Vector uu[8];
  for (int ii=0; ii<8; ii++)
    uu[ii] = Vector(vv[ii])*widgetToCanvas;

  psColor(mode, getXColor(borderColorName_));
  psWidth(1);

  // front
  psLine(uu[0],uu[1],dd[0]);
  psLine(uu[1],uu[2],dd[1]);
  psLine(uu[2],uu[3],dd[2]);
  psLine(uu[3],uu[0],dd[3]);

  // back
  psLine(uu[4],uu[5],dd[4]);
  psLine(uu[5],uu[6],dd[5]);
  psLine(uu[6],uu[7],dd[6]);
  psLine(uu[7],uu[4],dd[7]);

  // other
  psLine(uu[0],uu[4],dd[8]);
  psLine(uu[1],uu[5],dd[9]);
  psLine(uu[2],uu[6],dd[10]);
  psLine(uu[3],uu[7],dd[11]);
}

void Frame3dBase::psCompass(PSColorSpace mode)
{
  Matrix3d& mm = keyContext->fits->dataToWidget3d;

  double ss = 100./(zoom_[0]+zoom_[1]);

  Vector3d oo = vp_*mm;
  Vector3d xx = Vector3d(1,0,0) * Scale3d(ss) * Translate3d(vp_) * mm;
  Vector3d yy = Vector3d(0,1,0) * Scale3d(ss) * Translate3d(vp_) * mm;
  Vector3d zz = Vector3d(0,0,1) * Scale3d(ss) * Translate3d(vp_) * mm;

  Vector o = Vector(oo)*widgetToCanvas;
  Vector x = Vector(xx)*widgetToCanvas;
  Vector y = Vector(yy)*widgetToCanvas;
  Vector z = Vector(zz)*widgetToCanvas;

  psColor(mode, getXColor(compassColorName_));
  psWidth(1);

  psLine(o,x,0);
  psLine(o,y,0);
  psLine(o,z,0);
}

void Frame3dBase::psHighlite(PSColorSpace mode)
{
  Vector vv[4];
  int rr[4];
  calcHighlite(Coord::CANVAS,vv,rr);

  psColor(mode, getXColor(highliteColorName_));
  psWidth(1);
  psLine(vv[0],vv[1],rr[0]);
  psLine(vv[1],vv[2],rr[1]);
  psLine(vv[2],vv[3],rr[2]);
  psLine(vv[3],vv[0],rr[3]);
}

Matrix3d Frame3dBase::psMatrix(float scale, int width, int height)
{
  Matrix3d userToPS3d = 
    Matrix3d(wcsOrientationMatrix) *
    Matrix3d(orientationMatrix) *
    RotateZ3d(-wcsRotation) *
    RotateZ3d(-rotation) *

    RotateY3d(az_) * 
    RotateX3d(el_) *

    Translate3d(viewCursor_) *
    Scale3d(zoom_, zzoom_) *
    Scale3d(scale,1) *

    FlipY3d() *
    Translate3d(width/2., height/2., zdepth_/2.);

  return refToUser3d*userToPS3d;
}

void Frame3dBase::setSlice(int id, int ss)
{
  // IMAGE (ranges 1-n)
  currentContext->updateSlice(id, ss);

  if (id==2) {
    currentContext->contourUpdateFV();
    update(PIXMAP);
  }
  else {
    // load the next cube
    currentContext->clearHist();
    currentContext->updateClip();

    currentContext->contourUpdateFV();
    updateColorScale();
    update(MATRIX);
  }

  Base::setSlice(id,ss);
}

void Frame3dBase::updateBin(const Matrix& mx)
{
  centerImage();
  Base::updateBin(mx);
}

void Frame3dBase::updateBlock(const Vector& vv)
{
  centerImage();
  Base::updateBlock(vv);
}

void Frame3dBase::updateGCs()
{
  Base::updateGCs();

    // widget clip region
  BBox bbWidget = BBox(0, 0, options->width, options->height);
  Vector sizeWidget = bbWidget.size();
  XRectangle rectWidget[1];

  rectWidget[0].x = (int)bbWidget.ll[0];
  rectWidget[0].y = (int)bbWidget.ll[1];
  rectWidget[0].width = (int)sizeWidget[0];
  rectWidget[0].height = (int)sizeWidget[1];

  // pannerGC
  if (!pannerGC) {
    pannerGC = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);
    XSetLineAttributes(display, pannerGC, 1, LineSolid, CapButt, JoinMiter);
  }
  
  // 3d highlite
  if (!threedGC) {
    threedGC = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);
    XSetLineAttributes(display, threedGC, 1, LineSolid, CapButt, JoinMiter);
  }

  // clip may have changed
  setClipRectangles(display, threedGC, 0, 0, rectWidget, 1, Unsorted);
}

void Frame3dBase::updateMatrices()
{
  if (DebugPerf)
    cerr << "Frame3dBase::updateMatrices()..." << endl;

  zzoom_ = (zoom_[0]+zoom_[1])/2.;
  if (zzoom_<1)
    zzoom_ = 1;

  // if othogonal, reset zzoom
  if ((teq(az_,0,.001) || 
       teq(fabs(az_),M_PI_2,.001) || 
       teq(fabs(az_),M_PI,.001)) &&
      (teq(el_,0,.001) || 
       teq(fabs(el_),M_PI_2,.001)))
      zzoom_ =1;

  // These are the basic tranformation matrices
  // Note: imageCenter() is in IMAGE coords
  refToUser3d = 
    Translate3d(-vp_) * 
    Scale3d(1,zscale_) * 
    FlipY3d();
  userToRef3d = refToUser3d.invert();

  // userToWidget3d
  userToWidget3d =
    Matrix3d(wcsOrientationMatrix) *
    Matrix3d(orientationMatrix) *
    RotateZ3d(-wcsRotation) *
    RotateZ3d(-rotation) *

    RotateY3d(az_) * 
    RotateX3d(el_) *

    Translate3d(viewCursor_) *
    Scale3d(zoom_, zzoom_) *

    // must be int to align with screen pixels
    Translate3d((int)(options->width/2.), (int)(options->height/2.),
		(int)(zdepth_/2.));
  widgetToUser3d = userToWidget3d.invert();

  // widgetToCanvas
  widgetToCanvas3d = Translate3d(originX, originY, 0);
  canvasToWidget3d = widgetToCanvas3d.invert();

  // canvasToWindow
  short xx, yy;
  Tk_CanvasWindowCoords(canvas, 0, 0, &xx, &yy);
  canvasToWindow3d = Translate3d(xx, yy, 0);
  windowToCanvas3d = canvasToWindow3d.invert();

  // These are derived Transformation Matrices
  refToWidget3d = refToUser3d * userToWidget3d;
  widgetToRef3d = refToWidget3d.invert();

  refToCanvas3d = refToWidget3d * widgetToCanvas3d;
  canvasToRef3d = refToCanvas3d.invert();

  refToWindow3d = refToCanvas3d * canvasToWindow3d;
  windowToRef3d = refToWindow3d.invert();

  userToCanvas3d = userToWidget3d * widgetToCanvas3d;
  canvasToUser3d = userToCanvas3d.invert();

  userToWindow3d = userToCanvas3d * canvasToWindow3d;
  windowToUser3d = userToWindow3d.invert();

  widgetToWindow3d = widgetToCanvas3d * canvasToWindow3d;
  windowToWidget3d = widgetToWindow3d.invert();

  Base::updateMatrices();

  // delete current zbuffer since matrices have changed
  cancelDetach();

  // preserve cache?
  if (!preservecache_) {
    cache_.deleteAll();
    pannerCache_.deleteAll();
  }
  preservecache_ =0;

  if (DebugPerf)
    cerr << "updateMatrices end" << endl;
}

void Frame3dBase::updateMagnifierMatrices()
{
  // vv is in CANVAS coords
  Vector ww = magnifierCursor*canvasToRef;

  // refToUser3d
  Matrix3d refToUser3d = Translate3d(Vector3d(-ww,-vp_[2])) * FlipY3d();

  // userToMagnifier
  userToMagnifier3d  = 
    Matrix3d(wcsOrientationMatrix) *
    Matrix3d(orientationMatrix) *
    RotateZ3d(-wcsRotation) *
    RotateZ3d(-rotation) *

    RotateY3d(az_) * 
    RotateX3d(el_) *

    Translate3d(viewCursor_) *
    Scale3d(zoom_, zzoom_) *
    Scale3d(magnifierZoom_,magnifierZoom_) *

    Translate3d((int)(magnifierWidth/2.), (int)(magnifierHeight/2.), 
		(int)(zdepth_/2.));
  magnifierToUser3d = userToMagnifier3d.invert();

  refToMagnifier3d = refToUser3d * userToMagnifier3d;
  magnifierToRef3d = refToMagnifier3d.invert();

  magnifierToWidget3d = magnifierToRef3d * refToWidget3d;
  widgetToMagnifier3d = magnifierToWidget3d.invert();

  Base::updateMagnifierMatrices();
}

void Frame3dBase::updatePannerMatrices()
{
  // imageToData3d
  Vector3d center = imageCenter3d(FrScale::IMGSEC) * Translate3d(-.5, -.5, -.5);

  // refToUser3d
  Matrix3d refToUser3d = 
    Translate3d(-center) * 
    Scale3d(1,zscale_) * 
    FlipY3d();

  // userToPanner3d
  double pz = calcZoomPanner();
  double zz = zzoom_*pz;
  if (zz<1)
    zz =1;

  userToPanner3d =
    Matrix3d(wcsOrientationMatrix) *
    Matrix3d(orientationMatrix) *
    RotateZ3d(-wcsRotation) *
    RotateZ3d(-rotation) *

    RotateY3d(az_) * 
    RotateX3d(el_) *

    Scale3d(pz, zz) *

    Translate3d((int)(pannerWidth/2.), (int)(pannerHeight/2.), 
		(int)(zdepth_/2.));
  pannerToUser3d = userToPanner3d.invert();

  refToPanner3d = refToUser3d * userToPanner3d;
  pannerToRef3d = refToPanner3d.invert();

  pannerToWidget3d = pannerToRef3d * refToWidget3d;
  widgetToPanner3d = pannerToWidget3d.invert();

  Base::updatePannerMatrices();
}

void Frame3dBase::updatePanner()
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

  // always render (to update panner background color)
  if (keyContext->fits && pannerGC) {
    XSetForeground(display, pannerGC, getColor("black"));
    x11Border(Coord::PANNER, FrScale::IMGSEC, pannerGC, pannerPixmap);
  }

  ostringstream str;
  str << pannerName << " update " << (void*)pannerPixmap << ';';

  // calculate bbox
  Vector ll = Vector(0,0) * widgetToPanner3d;
  Vector lr = Vector(options->width,0) * widgetToPanner3d;
  Vector ur = Vector(options->width,options->height) * widgetToPanner3d;
  Vector ul = Vector(0,options->height) * widgetToPanner3d;

  str << pannerName << " update bbox " 
      << ll << ' ' << lr << ' ' << ur << ' ' << ul << ';';

  // calculate image compass vectors
  Matrix3d mm = 
    Matrix3d(wcsOrientationMatrix) *
    Matrix3d(orientationMatrix) *
    RotateZ3d(wcsRotation) *
    RotateZ3d(rotation) *
    RotateY3d(az_) * 
    RotateX3d(-el_) * 
    FlipY3d();

  Vector xx = (Vector3d(1,0,0)*mm).normalize();
  Vector yy = (Vector3d(0,1,0)*mm).normalize();
  Vector zz = (Vector3d(0,0,1)*mm).normalize();

  str << pannerName << " update image compass " 
      << xx << ' ' << yy << ' ' << zz << ';';

  if (keyContext->fits && keyContext->fits->hasWCS(wcsSystem_)) {
    Matrix3d mx;
    Coord::Orientation oo = 
      keyContext->fits->getWCSOrientation(wcsSystem_, wcsSkyFrame_);
    if (hasWCSCel(wcsSystem_)) {
      if (oo==Coord::XX)
	mx *= FlipX3d();
    }
    else {
      if (oo==Coord::NORMAL)
	mx *= FlipX3d();
    }

    mx *= mm;
    Vector north = (Vector3d(0,1)*mx).normalize();
    Vector east = (Vector3d(-1,0)*mx).normalize();

    // and update the panner
    str << pannerName << " update wcs compass " 
	<< north << ' ' << east << ends;
  }
  else
    str << pannerName << " update wcs compass invalid" << ends;

  Tcl_Eval(interp, str.str().c_str());
}

void Frame3dBase::x11Ants3d()
{
  // just in case
  if (!keyContext->fits)
    return;

  if (antsBegin[0]!=antsEnd[0] || antsBegin[1]!=antsEnd[1]) {
    // params is a BBOX in DATA coords 0-n
    FitsBound* params = 
      keyContext->fits->getDataParams(keyContext->secMode());
    Vector ss(params->xmin,params->ymin);
    Vector tt(params->xmax,params->ymax);

    Vector ll = mapFromRef3d(ss,Coord::CANVAS,cropsl_);
    Vector lr = mapFromRef3d(Vector(tt[0],ss[1]),Coord::CANVAS,cropsl_);
    Vector ur = mapFromRef3d(tt,Coord::CANVAS,cropsl_);
    Vector ul = mapFromRef3d(Vector(ss[0],tt[1]),Coord::CANVAS,cropsl_);

    XDrawLine(display,pixmap,selectGCXOR,ll[0],ll[1],lr[0],lr[1]);
    XDrawLine(display,pixmap,selectGCXOR,lr[0],lr[1],ur[0],ur[1]);
    XDrawLine(display,pixmap,selectGCXOR,ur[0],ur[1],ul[0],ul[1]);
    XDrawLine(display,pixmap,selectGCXOR,ul[0],ul[1],ll[0],ll[1]);
  }
}

void Frame3dBase::x11Graphics()
{
  Base::x11Graphics();

  if (!keyContext->fits)
    return;

  if (border_) {
    XSetForeground(display, threedGC, getColor(borderColorName_));
    x11Border(Coord::WIDGET, keyContext->secMode(), threedGC, pixmap);
  }
  if (compass_)
    x11Compass();
  if (highlite_)
    x11Highlite();
}

void Frame3dBase::x11Line(Vector ss, Vector tt, int dd, GC gc, Pixmap pm)
{
  if (clip(&ss,&tt,options->width,options->height)) {
    x11Dash(gc, dd);
    XDrawLine(display, pm, gc, ss[0], ss[1], tt[0], tt[1]);
  }
}

void Frame3dBase::x11Border(Coord::InternalSystem sys, 
			    FrScale::SecMode mode, GC gc, Pixmap pm)
{
  Vector3d vv[8];
  int dd[12];
  calcBorder(sys, mode, vv, dd);

  // front
  x11Line(vv[0], vv[1], dd[0], gc, pm);
  x11Line(vv[1], vv[2], dd[1], gc, pm);
  x11Line(vv[2], vv[3], dd[2], gc, pm);
  x11Line(vv[3], vv[0], dd[3], gc, pm);

  // back
  x11Line(vv[4], vv[5], dd[4], gc, pm);
  x11Line(vv[5], vv[6], dd[5], gc, pm);
  x11Line(vv[6], vv[7], dd[6], gc, pm);
  x11Line(vv[7], vv[4], dd[7], gc, pm);

  // other
  x11Line(vv[0], vv[4], dd[8], gc, pm);
  x11Line(vv[1], vv[5], dd[9], gc, pm);
  x11Line(vv[2], vv[6], dd[10], gc, pm);
  x11Line(vv[3], vv[7], dd[11], gc, pm);
}

void Frame3dBase::x11Compass()
{
  Matrix3d& mm = keyContext->fits->dataToWidget3d;

  double ss = 100./(zoom_[0]+zoom_[1]);

  Vector3d oo = vp_*mm;
  Vector3d xx = Vector3d(1,0,0) * Scale3d(ss) * Translate3d(vp_) * mm;
  Vector3d yy = Vector3d(0,1,0) * Scale3d(ss) * Translate3d(vp_) * mm;
  Vector3d zz = Vector3d(0,0,1) * Scale3d(ss) * Translate3d(vp_) * mm;

  x11Dash(threedGC, 0);
  XSetForeground(display, threedGC, getColor(compassColorName_));

  XDrawLine(display, pixmap, threedGC, oo[0], oo[1], xx[0], xx[1]);
  XDrawLine(display, pixmap, threedGC, oo[0], oo[1], yy[0], yy[1]);
  XDrawLine(display, pixmap, threedGC, oo[0], oo[1], zz[0], zz[1]);
}

/*
void Frame3dBase::renderArm(int length, Vector center, Rotate rot, 
			    const char* str, int color)
{
  if (!tkfont_) {
    ostringstream fstr;
    fstr << '{' << options->helvetica << '}' << " 9 roman normal" << ends;
    tkfont_ = Tk_GetFont(interp, tkwin, fstr.str().c_str());
    if (tkfont_)
      Tk_GetFontMetrics(tkfont_, &metric);
  }  

  if (!compassGC) {
    compassGC = XCreateGC(display, pixmap, 0, NULL);
    XSetLineAttributes(display, compassGC, 1, LineSolid, CapButt, JoinMiter);
    if (tkfont_)
      XSetFont(display, compassGC, Tk_FontId(tkfont_));
  }


  if (length<=0)
    return;

  // set GC
  XSetForeground(display, compassGC, color);
  const int textOffset = 15; // Text offset
  const int tip = 6;  // length from end of line to tip of arrow
  const int tail = 2; // length from end of line to tails of arrow
  const int wc = 2;   // width of arrow at end of line
  const int wt = 3;   // width of arrow at tails

  // Arrow-- oriented on Y axis
  Vector arrow[6];
  arrow[0] = Vector(0, tip);
  arrow[1] = Vector(-wc, 0);
  arrow[2] = Vector(-wt, -tail);
  arrow[3] = Vector(0, 0);
  arrow[4] = Vector(wt, -tail);
  arrow[5] = Vector(wc, 0);

  // Staff-- oriented on X axis
  XPoint arrowArray[6];
  Matrix arrowMatrix = Rotate(M_PI_2) * 
    Translate(length,0) * 
    rot * 
    Translate(center);
  for (int i=0; i<6; i++) {
    Vector r = (arrow[i] * arrowMatrix).round();
    arrowArray[i].x = (int)r[0];
    arrowArray[i].y = (int)r[1];
  }

  Vector c = ((Vector&)center).round();
  Vector end = (Vector(length, 0) * rot * Translate(center)).round();
  XDrawLine(display, pixmap, compassGC, (int)c[0], (int)c[1], 
	    (int)end[0], (int)end[1]);
  XFillPolygon(display, pixmap, compassGC, arrowArray, 6, 
	       Nonconvex, CoordModeOrigin);

  if (useFont && tkfont_) {
    Vector et = Vector((length + textOffset), 0) * rot * Translate(center) *
                Translate(-Tk_TextWidth(tkfont_, str, 1)/2., metric.ascent/2.);
    Tk_DrawChars(display, pixmap, compassGC, tkfont_, str, 1,
		 (int)et[0], (int)et[1]);
  }
}
*/

void Frame3dBase::x11Highlite()
{
  Vector vv[4];
  int rr[4];
  calcHighlite(Coord::WIDGET,vv,rr);

  XSetForeground(display, threedGC, getColor(highliteColorName_));

  x11Line(vv[0], vv[1], rr[0], threedGC, pixmap);
  x11Line(vv[1], vv[2], rr[1], threedGC, pixmap);
  x11Line(vv[2], vv[3], rr[2], threedGC, pixmap);
  x11Line(vv[3], vv[0], rr[3], threedGC, pixmap);
}

void Frame3dBase::ximageToPixmapMagnifier()
{
  if (!basePixmap || !baseXImage || !magnifierPixmap || !magnifierXImage)
    return;

  XColor* bgColor = useBgColor? getXColor(bgColourName) :
    ((WidgetOptions*)options)->bgColor;
  char bgTrueColor[4];   // color encoded
  encodeTrueColor(bgColor, bgTrueColor);

  // magnifier
  int& ww = magnifierXImage->width;
  int& hh = magnifierXImage->height;
  Vector wh(ww,hh);
  Vector cc = magnifierCursor * canvasToWidget;
  Vector ll =cc-wh/2.;
  Vector ur =cc+wh/2.;

  // clip to base
  BBox bb(0,0,baseXImage->width,baseXImage->height);
  Vector uu(ll);
  Vector vv(ur);
  uu.clip(bb);
  vv.clip(bb);
  Vector zz = vv-uu;
  Vector oo = uu-ll;

  // sanity check
  if (zz[0]<=0 || zz[1]<=0)
    return;

  XImage* srcXImage = XGetImage(display, basePixmap, uu[0], uu[1], 
				zz[0], zz[1], AllPlanes, ZPixmap);

  char* src = srcXImage->data;
  int srcBytesPerLine =  srcXImage->bytes_per_line;

  char* dst = magnifierXImage->data;
  int dstBytesPerLine =  magnifierXImage->bytes_per_line;
  int bytesPerPixel = magnifierXImage->bits_per_pixel/8;

  Matrix mx = Translate(-wh/2.) * 
    Translate(oo) * 
    Translate(-.5,-.5) *
    Scale(magnifierZoom_) * 
    Translate(wh/2.);
  Matrix mm = mx.invert();

  for (int jj=0; jj<hh; jj++) {
    char* dest = dst + jj*dstBytesPerLine;

    for (int ii=0; ii<ww; ii++, dest+=bytesPerPixel) {
      Vector vv = Vector(ii,jj)*mm;

      if (vv[0] >= 0 && vv[0] < zz[0] && vv[1] >= 0 && vv[1] < zz[1])
	memcpy(dest, src + ((int)vv[1])*srcBytesPerLine + 
	       ((int)vv[0])*bytesPerPixel, bytesPerPixel);
      else
	memcpy(dest, bgTrueColor, bytesPerPixel);
    }
  }

  TkPutImage(NULL, 0, display, magnifierPixmap, widgetGC, magnifierXImage, 
	     0, 0, 0, 0, magnifierXImage->width, magnifierXImage->height);

  if (srcXImage)
    XDestroyImage(srcXImage);
}

#ifdef __WIN32
#include <win32lib.h>

void Frame3dBase::win32Line(Vector& ss, Vector& tt, int dd)
{
  if (dd)
    win32Dash(dlist,2);
  else
    win32Dash(NULL,0);
  win32DrawLine(ss,tt);
}

void Frame3dBase::win32Graphics()
{
  if (!keyContext->fits)
    return;

  if (border_)
    win32Border();
  if (compass_)
    win32Compass();
  if (highlite_)
    win32Highlite();
}

void Frame3dBase::win32Border()
{
  Vector3d vv[8];
  int dd[12];
  calcBorder(Coord::WIDGET, keyContext->secMode(), vv, dd);

  Vector uu[8];
  for (int ii=0; ii<8; ii++)
    uu[ii] = Vector(vv[ii])*widgetToCanvas;

  win32Color(getXColor(borderColorName_));
  win32Width(1);

  // front
  win32Line(uu[0],uu[1],dd[0]);
  win32Line(uu[1],uu[2],dd[1]);
  win32Line(uu[2],uu[3],dd[2]);
  win32Line(uu[3],uu[0],dd[3]);

  // back
  win32Line(uu[4],uu[5],dd[4]);
  win32Line(uu[5],uu[6],dd[5]);
  win32Line(uu[6],uu[7],dd[6]);
  win32Line(uu[7],uu[4],dd[7]);

  // other
  win32Line(uu[0],uu[4],dd[8]);
  win32Line(uu[1],uu[5],dd[9]);
  win32Line(uu[2],uu[6],dd[10]);
  win32Line(uu[3],uu[7],dd[11]);
}

void Frame3dBase::win32Compass()
{
  Matrix3d& mm = keyContext->fits->dataToWidget3d;

  double ss = 100./(zoom_[0]+zoom_[1]);

  Vector3d oo = vp_*mm;
  Vector3d xx = Vector3d(1,0,0) * Scale3d(ss) * Translate3d(vp_) * mm;
  Vector3d yy = Vector3d(0,1,0) * Scale3d(ss) * Translate3d(vp_) * mm;
  Vector3d zz = Vector3d(0,0,1) * Scale3d(ss) * Translate3d(vp_) * mm;

  Vector o = Vector(oo)*widgetToCanvas;
  Vector x = Vector(xx)*widgetToCanvas;
  Vector y = Vector(yy)*widgetToCanvas;
  Vector z = Vector(zz)*widgetToCanvas;

  win32Color(getXColor(compassColorName_));
  win32Width(1);

  win32Line(o,x,0);
  win32Line(o,y,0);
  win32Line(o,z,0);
}

void Frame3dBase::win32Highlite()
{
  Vector vv[4];
  int rr[4];
  calcHighlite(Coord::CANVAS,vv,rr);

  win32Color(getXColor(highliteColorName_));
  win32Width(1);

  win32Line(vv[0],vv[1],rr[0]);
  win32Line(vv[1],vv[2],rr[1]);
  win32Line(vv[2],vv[3],rr[2]);
  win32Line(vv[3],vv[0],rr[3]);
}
#endif
