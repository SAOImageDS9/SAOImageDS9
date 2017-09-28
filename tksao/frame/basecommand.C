// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <fstream>
#include "fdstream.hpp"

#include <tk.h>

#include "base.h"
#include "context.h"
#include "fitsimage.h"
#include "mmap.h"
#include "outfile.h"
#include "outchannel.h"
#include "outsocket.h"

#include "sigbus.h"

void Base::axesOrderCmd(int order)
{
  currentContext->setAxesOrder(order);
  if (currentContext->fits) {
    if (!preserveMarkers) {
      // delete markers
      userMarkers.deleteAll();
      undoUserMarkers.deleteAll();
      pasteUserMarkers.deleteAll();
    }

    catalogMarkers.deleteAll();
    undoCatalogMarkers.deleteAll();
    pasteCatalogMarkers.deleteAll();

    //    analysisMarkers.deleteAll();
    //    undoAnalysisMarkers.deleteAll();
    //    pasteAnalysisMarkers.deleteAll();

    currentContext->contourDeleteFV();
    currentContext->contourDeleteAux();

    // don't clear the grid, we can reconstruct a new grid
    //    if (grid)
    //      delete grid;
    //    grid = NULL;

    loadDone(1,IMG);
  }
}

void Base::bgColorCmd(const char* color)
{
  if (bgColorName)
    delete [] bgColorName;
  bgColorName = dupstr(color);
  bgColor = getXColor(bgColorName);
  update(BASE);
}

void Base::binCmd(const Vector& b, const Vector& vv,
		  const char* x, const char* y, const char* filter)
{
  currentContext->setBinToFactor(b);
  currentContext->setBinDepth(1);
  if (currentContext->fits) {
    currentContext->fits->setBinX(x);
    currentContext->fits->setBinY(y);
    currentContext->fits->setBinFilter(filter);
  }
  Matrix mm = currentContext->bin(vv);
  updateBin(mm);
}

void Base::binCmd(const Vector& b, const char* x, const char* y, 
		       const char* filter)
{
  currentContext->setBinToFactor(b);
  currentContext->setBinDepth(1);
  if (currentContext->fits) {
    currentContext->fits->setBinX(x);
    currentContext->fits->setBinY(y);
    currentContext->fits->setBinFilter(filter);
  }
  Matrix mm = currentContext->binCenter();
  updateBin(mm);
}

void Base::binCmd(const Vector& b, int d, const Vector& lim, 
		       const Vector& vv,
		       const char* x, const char* y, const char* z,
		       const char* filter)
{
  currentContext->setBinToFactor(b);
  currentContext->setBinDepth(d);
  if (currentContext->fits) {
    currentContext->fits->setBinX(x);
    currentContext->fits->setBinY(y);
    currentContext->fits->setBinZ(z);
    currentContext->fits->setBinFilter(filter);
    currentContext->fits->setBinColMinMax(z,lim);
  }
  Matrix mm = currentContext->bin(vv);
  updateBin(mm);
}

void Base::binCmd(const Vector& b, int d, const Vector& lim,
		  const char* x, const char* y, const char* z,
		  const char* filter)
{
  currentContext->setBinToFactor(b);
  currentContext->setBinDepth(d);
  if (currentContext->fits) {
    currentContext->fits->setBinX(x);
    currentContext->fits->setBinY(y);
    currentContext->fits->setBinZ(z);
    currentContext->fits->setBinFilter(filter);
    currentContext->fits->setBinColMinMax(z,lim);
  }
  Matrix mm = currentContext->binCenter();
  updateBin(mm);
}

void Base::binAboutCmd()
{
  Matrix mm = currentContext->binCenter();
  updateBin(mm);
}

void Base::binAboutCmd(const Vector& vv)
{
  Matrix mm = currentContext->bin(vv);
  updateBin(mm);
}

void Base::binBufferSizeCmd(int size)
{
  currentContext->setBinBufferSize(size);
  Matrix mm = currentContext->binCursor();
  updateBin(mm);
}

void Base::binColsCmd(const char* x, const char* y, const char* z)
{
  if (currentContext->fits) {
    currentContext->fits->setBinX(x);
    currentContext->fits->setBinY(y);
    currentContext->fits->setBinZ(z);
  }
  Matrix mm = currentContext->binCursor();
  updateBin(mm);
}

void Base::binDepthCmd(int d)
{
  currentContext->setBinDepth(d);
  Matrix mm = currentContext->binCursor();
  updateBin(mm);
}

void Base::binFactorCmd(const Vector& bb)
{
  currentContext->setBinFactor(bb);
  Matrix mm = currentContext->binCursor();
  updateBin(mm);
}

void Base::binFactorAboutCmd(const Vector& bb, const Vector& vv)
{
  currentContext->setBinFactor(bb);
  Matrix mm = currentContext->bin(vv);
  updateBin(mm);
}

void Base::binFactorToCmd(const Vector& bb)
{
  currentContext->setBinToFactor(bb);
  Matrix mm = currentContext->binCursor();
  updateBin(mm);
}

void Base::binFactorToAboutCmd(const Vector& bb, const Vector& vv)
{
  currentContext->setBinToFactor(bb);
  Matrix mm = currentContext->bin(vv);
  updateBin(mm);
}

void Base::binFunctionCmd(FitsHist::Function func)
{
  currentContext->setBinFunction(func);
  Matrix mm = currentContext->binCursor();
  updateBin(mm);
}

void Base::binFilterCmd(const char* filter)
{
  if (currentContext->fits)
    currentContext->fits->setBinFilter(filter);
  Matrix mm = currentContext->binCursor();
  updateBin(mm);
}

void Base::blockCmd(const Vector& bb)
{
  Vector vv = currentContext->setBlockFactor(bb);
  currentContext->block();
  currentContext->analysis();
  updateBlock(vv);
}

void Base::blockToCmd(const Vector& bb)
{
  Vector vv = currentContext->setBlockToFactor(bb);
  currentContext->block();
  currentContext->analysis();
  updateBlock(vv);
}

void Base::centerCmd()
{
  centerImage();
  update(MATRIX);
}

void Base::clearCmd()
{
  unloadAllFits();
  reset();
}

void Base::clipScopeCmd(FrScale::ClipScope ss)
{
  if (currentContext->updateClipScope(ss)) {
    currentContext->clearHist();
    currentContext->updateClip();
    updateColorScale();
    update(BASE);
  }
}

void Base::clipModeCmd(FrScale::ClipMode mm)
{
  if (currentContext->updateClipMode(mm)) {
    currentContext->updateClip();
    updateColorScale();
    update(BASE);
  }
}

void Base::clipModeCmd(float per)
{
  if (currentContext->updateClipMode(per)) {
    currentContext->updateClip();
    updateColorScale();
    update(BASE);
  }
}

void Base::clipUserCmd(double ll, double hh)
{
  if (currentContext->updateUser(ll,hh)) {
    currentContext->updateClip();
    updateColorScale();
    update(BASE);
  }
}

void Base::clipMinMaxCmd(FrScale::MinMaxMode mm, int ss)
{
  if (currentContext->updateMinMax(mm,ss)) {
    currentContext->clearHist();
    currentContext->updateClip();
    updateColorScale();
    update(BASE);
  }
}

// backward compatibility backup
void Base::clipMinMaxModeCmd(FrScale::MinMaxMode mm)
{
  if (currentContext->updateMinMaxMode(mm)) {
    currentContext->clearHist();
    currentContext->updateClip();
    updateColorScale();
    update(BASE);
  }
}

// backward compatibility backup
void Base::clipMinMaxSampleCmd(int ss)
{
  if (currentContext->updateMinMaxSample(ss)) {
    currentContext->clearHist();
    currentContext->updateClip();
    updateColorScale();
    update(BASE);
  }
}

void Base::clipZScaleCmd(float cc, int ss, int ll)
{
  if (currentContext->updateZscale(cc,ss,ll)) {
    currentContext->updateClip();
    updateColorScale();
    update(BASE);
  }
}

// backward compatibility backup
void Base::clipZScaleContrastCmd(float cc)
{
  if (currentContext->updateZscaleContrast(cc)) {
    currentContext->updateClip();
    updateColorScale();
    update(BASE);
  }
}

// backward compatibility backup
void Base::clipZScaleSampleCmd(int ss)
{
  if (currentContext->updateZscaleSample(ss)) {
    currentContext->updateClip();
    updateColorScale();
    update(BASE);
  }
}

// backward compatibility backup
void Base::clipZScaleLineCmd(int ll)
{
  if (currentContext->updateZscaleLine(ll)) {
    currentContext->updateClip();
    updateColorScale();
    update(BASE);
  }
}

void Base::colorbarTagCmd(const char* str)
{
  if (colorbartag)
    delete [] colorbartag;

  colorbartag = dupstr(str);
}

void Base::cropCmd()
{
  currentContext->resetSecMode();
  FitsImage* sptr = currentContext->fits;
  while (sptr) {
    sptr->setCropParams(currentContext->datasec());
    sptr = sptr->nextSlice();
  }

  currentContext->updateClip();
  updateColorScale();
  update(MATRIX);

  updateMarkerCBs(&userMarkers);
  updateMarkerCBs(&catalogMarkers);
  //  updateMarkerCBs(&analysisMarkers);
}

// used for Backup
void Base::cropCmd(const Vector& aa, const Vector& bb, 
		   Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  FitsImage* ptr = currentContext->fits;
  if (!ptr)
    return;

  Vector ss = ptr->mapToRef(aa,sys,sky);
  Vector tt = ptr->mapToRef(bb,sys,sky);

  currentContext->setSecMode(FrScale::CROPSEC);
  FitsImage* sptr = ptr;
  while (sptr) {
    sptr->setCropParams(ss*sptr->refToData, tt*sptr->refToData,
			currentContext->datasec());
    sptr = sptr->nextSlice();
  }

  currentContext->updateClip();
  updateColorScale();
  update(MATRIX);

  updateMarkerCBs(&userMarkers);
  updateMarkerCBs(&catalogMarkers);
  //  updateMarkerCBs(&analysisMarkers);
}

void Base::cropCenterCmd(const Vector& vv, 
			 Coord::CoordSystem sys, Coord::SkyFrame sky, 
			 const Vector& wh, 
			 Coord::CoordSystem dsys, Coord::DistFormat dist)
{
  FitsImage* ptr = currentContext->fits;
  if (!ptr)
    return;

  // params are in DATA coords
  Vector cc = ptr->mapToRef(vv,sys,sky)*ptr->refToData;
  Vector dd = ptr->mapLenToRef(wh,dsys,dist)*ptr->refToData;
  Vector ll = (cc-dd/2).round();
  Vector ur = (cc+dd/2).round();

  currentContext->setSecMode(FrScale::CROPSEC);
  FitsImage* sptr = ptr;
  while (sptr) {
    sptr->setCropParams(ll,ur,currentContext->datasec());
    sptr = sptr->nextSlice();
  }

  currentContext->updateClip();
  updateColorScale();
  update(MATRIX);

  updateMarkerCBs(&userMarkers);
  updateMarkerCBs(&catalogMarkers);
  //  updateMarkerCBs(&analysisMarkers);
}

void Base::cropBeginCmd(const Vector& vv)
{
  cropBegin = vv;
  cropEnd = vv;
}

void Base::cropMotionCmd(const Vector& vv)
{
  Vector ss = mapToRef(cropBegin, Coord::CANVAS);

  // erase 
  if (cropBegin[0]!=cropEnd[0] || cropBegin[1]!=cropEnd[1]) {
    Vector tt = mapToRef(cropEnd, Coord::CANVAS);

    Vector ll = mapFromRef(ss, Coord::CANVAS);
    Vector lr = mapFromRef(Vector(tt[0],ss[1]), Coord::CANVAS);
    Vector ur = mapFromRef(tt, Coord::CANVAS);
    Vector ul = mapFromRef(Vector(ss[0],tt[1]), Coord::CANVAS);

    BBox bb(ll);
    bb.bound(lr);
    bb.bound(ur);
    bb.bound(ul);

    redrawNow(bb.expand(2));
  }

  cropEnd = vv;
  // and draw to window
  {
    Vector tt = mapToRef(cropEnd, Coord::CANVAS);

    Vector ll = mapFromRef(ss, Coord::WINDOW);
    Vector lr = mapFromRef(Vector(tt[0],ss[1]), Coord::WINDOW);
    Vector ur = mapFromRef(tt, Coord::WINDOW);
    Vector ul = mapFromRef(Vector(ss[0],tt[1]), Coord::WINDOW);

    XDrawLine(display,Tk_WindowId(tkwin),selectGCXOR,ll[0],ll[1],lr[0],lr[1]);
    XDrawLine(display,Tk_WindowId(tkwin),selectGCXOR,lr[0],lr[1],ur[0],ur[1]);
    XDrawLine(display,Tk_WindowId(tkwin),selectGCXOR,ur[0],ur[1],ul[0],ul[1]);
    XDrawLine(display,Tk_WindowId(tkwin),selectGCXOR,ul[0],ul[1],ll[0],ll[1]);
  }
}

void Base::cropEndCmd(const Vector& vv)
{
  Vector ss = mapToRef(cropBegin, Coord::CANVAS);

  // erase 
  if (cropBegin[0]!=cropEnd[0] || cropBegin[1]!=cropEnd[1]) {
    Vector tt = mapToRef(cropEnd, Coord::CANVAS);

    Vector ll = mapFromRef(ss, Coord::CANVAS);
    Vector lr = mapFromRef(Vector(tt[0],ss[1]), Coord::CANVAS);
    Vector ur = mapFromRef(tt, Coord::CANVAS);
    Vector ul = mapFromRef(Vector(ss[0],tt[1]), Coord::CANVAS);

    BBox bb(ll);
    bb.bound(lr);
    bb.bound(ur);
    bb.bound(ul);
    redrawNow(bb.expand(2));
  }

  // and crop
  cropEnd = vv;

  if (cropBegin[0]!=cropEnd[0] || cropBegin[1]!=cropEnd[1]) {
    Vector tt = mapToRef(cropEnd, Coord::CANVAS);

    if (!isMosaic()) {
      currentContext->setSecMode(FrScale::CROPSEC);
      FitsImage* sptr = currentContext->fits;
      while (sptr) {
	sptr->setCropParams(ss*sptr->refToData, tt*sptr->refToData,
			    currentContext->datasec());
	sptr = sptr->nextSlice();
      }
    }
    else {
      FitsImage* ptr1 =NULL;
      FitsImage* ptr2 =NULL;
      if ((ptr1=isInFits(cropBegin,Coord::CANVAS,NULL)) ==
	  (ptr2=isInFits(cropEnd,Coord::CANVAS,NULL))) {

	currentContext->setSecMode(FrScale::CROPSEC);
	// clear any previous params
	FitsImage* ptr = currentContext->fits;
	while (ptr) {
	  FitsImage* sptr = ptr;
	  while (sptr) {
	    sptr->setCropParams(currentContext->datasec());
	    sptr = sptr->nextSlice();
	  }
	  ptr = ptr->nextMosaic();
	}
      }

      FitsImage* sptr = ptr1;
      while (sptr) {
	sptr->setCropParams(ss*sptr->refToData, tt*sptr->refToData,
			    currentContext->datasec());
	sptr = sptr->nextSlice();
      }
    }
  }
  else {
    currentContext->resetSecMode();
    currentContext->setCrop3dParams();
    FitsImage* sptr = currentContext->fits;
    while (sptr) {
      sptr->setCropParams(currentContext->datasec());
      sptr = sptr->nextSlice();
    }
  }

  currentContext->updateClip();
  updateColorScale();
  update(MATRIX);

  updateMarkerCBs(&userMarkers);
  updateMarkerCBs(&catalogMarkers);
  //  updateMarkerCBs(&analysisMarkers);
}

void Base::crop3dCmd()
{
  currentContext->resetSecMode();
  currentContext->setCrop3dParams();

  currentContext->updateClip();
  updateColorScale();
  update(MATRIX);

  updateMarkerCBs(&userMarkers);
  updateMarkerCBs(&catalogMarkers);
  //  updateMarkerCBs(&analysisMarkers);
}

void Base::crop3dCmd(double z0, double z1, Coord::CoordSystem sys)
{
  // use first slice
  FitsImage* ptr = currentContext->fits;
  if (!ptr)
    return;

  // ff/tt ranges 0-n
  double ff = ptr->mapToRef3axis(z0,sys,2);
  double tt = ptr->mapToRef3axis(z1,sys,2);

  // params is a BBOX in DATA coords 0-n
  currentContext->setCrop3dParams(ff-.5,tt+.5);
  
  // set current slice if needed
  // setSlice() IMAGE (ranges 1-n)
  // context->slice() IMAGE (ranges 1-n)
  double sl = currentContext->slice(2)-.5;
  if (sl<ff)
    setSlice(2,ff+.5);
  if (sl>tt)
    setSlice(2,tt+.5);

  currentContext->setSecMode(FrScale::CROPSEC);
  
  currentContext->updateClip();
  updateColorScale();
  update(MATRIX);

  updateMarkerCBs(&userMarkers);
  updateMarkerCBs(&catalogMarkers);
  //  updateMarkerCBs(&analysisMarkers);
}

void Base::crosshairCmd(int which)
{
  useCrosshair = which ? 1 : 0;
  update(PIXMAP);
}

void Base::crosshairCmd(const Vector& vv, Coord::InternalSystem sys)
{
  useCrosshair = 1;
  crosshair = mapToRef(vv, sys);
  update(PIXMAP);
}

void Base::crosshairCmd(const Vector& v, Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  useCrosshair = 1;
  if (currentContext->cfits)
    crosshair = currentContext->cfits->mapToRef(v, sys, sky);
  update(PIXMAP);
}

void Base::crosshairWarpCmd(const Vector& vv)
{
  useCrosshair = 1;

  // use matrix, not map() for 3d
  Vector rr = crosshair*refToCanvas;
  rr += vv;
  crosshair = rr*canvasToRef;

  update(PIXMAP);
  updateMagnifier();
}

void Base::colorScaleCmd(FrScale::ColorScaleType s)
{
  if (currentContext->colorScaleType() != s) {
    currentContext->setColorScaleType(s);
    updateColorScale();
    update(BASE);
  }
}

void Base::colorScaleLogCmd(double exp)
{
  if (currentContext->updateExpo(exp)) {
      updateColorScale();
      update(BASE);
  }
}

void Base::contourAppendCmd(ContourLevel* cl)
{
  currentContext->contourAppendAux(cl);
  update(PIXMAP);
}

void Base::contourCreateCmd(const char* color, int width, int dash,
			    FVContour::Method method, int numlevel, 
			    int smooth, 
			    FrScale::ColorScaleType colorScaleType,
			    float expo,
			    FrScale::ClipMode clipMode, float autocut,
			    FrScale::ClipScope clipScope,
			    double low, double high, const char* level)
{
  if (DebugPerf)
    cerr << "Base::contourCreate()" << endl;

  currentContext->contourCreateFV(color, width, dash, 
				  method, numlevel,
				  smooth, 
				  colorScaleType, 
				  expo,
				  clipMode, autocut, 
				  clipScope,
				  low, high, level);
  update(PIXMAP);
}

void Base::contourDeleteCmd()
{
  currentContext->contourDeleteFV();
  update(PIXMAP);
}

void Base::contourDeleteAuxCmd()
{
  currentContext->contourDeleteAux();
  update(PIXMAP);
}

void Base::contourLoadCmd(const char* fn)
{
  ifstream str(fn);
  if (str)
    currentContext->contourLoadAux(str);
  update(PIXMAP);
}

void Base::contourLoadCmd(const char* fn, const char* color, 
			  int width, int dash)
{
  ifstream str(fn);
  if (str)
    currentContext->contourLoadAux(str, color, width, dash);
  update(PIXMAP);
}

void Base::contourLoadCmd(const char* fn, 
			  Coord::CoordSystem sys, Coord::SkyFrame sky, 
			  const char* color, int width, int dash)
{
  ifstream str(fn);
  if (str)
    currentContext->contourLoadAux(str, sys, sky, color, width, dash);
  update(PIXMAP);
}

void Base::contourPasteCmd(const char* var)
{
  const char* ccmd = Tcl_GetVar(interp, var, TCL_LEAVE_ERR_MSG);
  if (!ccmd) {
    result = TCL_ERROR;
    return;
  }

  // only make command string as long as needed
  // or the rest will be processed as garbage
  int len = strlen(ccmd)+2;
  char* buf = new char[len];
  memcpy(buf, ccmd, len);

  // add terminator to make parser happy
  buf[len-2] = '\n';
  buf[len-1] = '\0';

  string x(buf);
  istringstream str(x);
  if (str)
    currentContext->contourLoadAux(str);
  delete [] buf;

  update(PIXMAP);
}

void Base::contourPasteCmd(const char* var, const char* color, 
			   int width, int dash)
{
  const char* ccmd = Tcl_GetVar(interp, var, TCL_LEAVE_ERR_MSG);
  if (!ccmd) {
    result = TCL_ERROR;
    return;
  }

  // only make command string as long as needed
  // or the rest will be processed as garbage
  int len = strlen(ccmd)+2;
  char* buf = new char[len];
  memcpy(buf, ccmd, len);

  // add terminator to make parser happy
  buf[len-2] = '\n';
  buf[len-1] = '\0';

  string x(buf);
  istringstream str(x);
  if (str)
    currentContext->contourLoadAux(str, color, width, dash);
  delete [] buf;

  update(PIXMAP);
}

void Base::contourSaveCmd(const char* fn, Coord::CoordSystem sys,
			  Coord::SkyFrame sky)
{
  ofstream str(fn);
  if (str)
    currentContext->contourListFV(str, sys, sky);
}

void Base::contourSaveAuxCmd(const char* fn, Coord::CoordSystem sys, 
			     Coord::SkyFrame sky)
{
  ofstream str(fn);
  if (str)
    currentContext->contourListAux(str, sys, sky);
}

void Base::DATASECCmd(int which)
{
  if (currentContext->updateDataSec(which)) {
    currentContext->resetSecMode();
    currentContext->updateClip();
    updateColorScale();
    update(MATRIX);
  }
}

void Base::fitsyHasExtCmd(const char* fn)
{
  // verify that we have an ext specified
  if (fn && (fn[strlen(fn)-1] != ']')) {
    Tcl_AppendResult(interp, "0", NULL);
    return;
  }

  FitsFile* ext = new FitsFitsMMap(fn, FitsFile::EXACT);
  if (ext->isValid())
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);

  delete ext;
  return;
}

void Base::getAxesOrderCmd()
{
  printInteger(currentContext->axesOrder());
}

void Base::getBgColorCmd()
{
  Tcl_AppendResult(interp, bgColorName, NULL);
}

void Base::getBinCursorCmd()
{
  if (currentContext->fits) {
    ostringstream str;
    str << currentContext->fits->getHistCursor() << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  }
  else
    Tcl_AppendResult(interp, "0 0", NULL);
}

void Base::getBinColsCmd()
{
  if (currentContext->fits && currentContext->fits->isHist()) {
    if (currentContext->binDepth()>1)
      Tcl_AppendResult(interp, currentContext->fits->getHistX(), " ", 
		       currentContext->fits->getHistY(), " ",
		       currentContext->fits->getHistZ(), NULL);
    else
      Tcl_AppendResult(interp, currentContext->fits->getHistX(), " ", 
		       currentContext->fits->getHistY(), NULL);
  }
  else
    Tcl_AppendResult(interp, "", NULL);
}

void Base::getBinColsMinMaxCmd(const char* col)
{
  if (currentContext->fits && col && *col) {
    ostringstream str;
    str << currentContext->fits->getHistColMinMax(col) << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  }
}

void Base::getBinColsDimCmd(const char* col)
{
  if (currentContext->fits && col && *col) {
    ostringstream str;
    str << currentContext->fits->getHistColDim(col) << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  }
  else
    Tcl_AppendResult(interp, "0 0", NULL);
}

void Base::getBinDepthCmd()
{
  printDouble(currentContext->binDepth());
}

void Base::getBinFactorCmd()
{
  ostringstream str;
  str << currentContext->binFactor() << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getBinFunctionCmd()
{
  switch (currentContext->binFunction()) {
  case FitsHist::AVERAGE:
    Tcl_AppendResult(interp, "average", NULL);
    return;
  case FitsHist::SUM:
    Tcl_AppendResult(interp, "sum", NULL);
    return;
  }
}

void Base::getBinBufferSizeCmd()
{
  printInteger(currentContext->binBufferSize());
}

void Base::getBinFilterCmd()
{
  if (currentContext->fits && currentContext->fits->isHist())
    Tcl_AppendResult(interp, currentContext->fits->getHistFilter(), NULL);
  else
    Tcl_AppendResult(interp, "", NULL);
}

void Base::getBinListCmd()
{
  if (currentContext->fits && currentContext->fits->isHist()) {
    char* cols = currentContext->fits->getHistList();
    Tcl_AppendResult(interp, cols, NULL);
    delete [] cols;
  }
  else
    Tcl_AppendResult(interp, "", NULL);
}

void Base::getBitpixCmd()
{
  if (currentContext->cfits)
    printInteger(currentContext->cfits->bitpix());
  else
    Tcl_AppendResult(interp, "32", NULL);
}

void Base::getBlockCmd()
{
  ostringstream str;
  str << currentContext->blockFactor() << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getClipCmd()
{
  if (DebugPerf)
    cerr << "getClipCmd()" << endl;

  ostringstream str;
  str << currentContext->getClip() << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getClipCmd(float per, FrScale::ClipScope sc)
{
  if (DebugPerf)
    cerr << "getClipCmd(float, FrScale::ClipScope)" << endl;

  FrScale::ClipMode cm = (per == 100) ? FrScale::MINMAX : FrScale::AUTOCUT;
  float ac = per;

  ostringstream str;
  str << currentContext->getClip(cm, sc, ac) << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getClipCmd(FrScale::ClipMode cm, FrScale::ClipScope sc)
{
  if (DebugPerf)
    cerr << "getClipCmd(FrScale::ClipMode, FrScale::ClipScope)" << endl;

  ostringstream str;
  str << currentContext->getClip(cm, sc, currentContext->autoCutPer()) << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getClipMinMaxModeCmd()
{
  switch (currentContext->minmaxMode()) {
  case FrScale::SCAN:
    Tcl_AppendResult(interp, "scan", NULL);
    return;
  case FrScale::SAMPLE:
    Tcl_AppendResult(interp, "sample", NULL);
    return;
  case FrScale::DATAMIN:
    Tcl_AppendResult(interp, "datamin", NULL);
    return;
  case FrScale::IRAFMIN:
    Tcl_AppendResult(interp, "irafmin", NULL);
    return;
  }
}

void Base::getClipMinMaxSampleCmd()
{
  printInteger(currentContext->minmaxSample());
}

void Base::getClipModeCmd()
{
  switch (currentContext->clipMode()) {
  case FrScale::MINMAX:
    Tcl_AppendResult(interp, "minmax", NULL);
    break;
  case FrScale::ZSCALE:
    Tcl_AppendResult(interp, "zscale", NULL);
    break;
  case FrScale::ZMAX:
    Tcl_AppendResult(interp, "zmax", NULL);
    break;
  case FrScale::AUTOCUT:
    printDouble(currentContext->autoCutPer());
    break;
  case FrScale::USERCLIP:
    Tcl_AppendResult(interp, "user", NULL);
    break;
  }
}

void Base::getClipPreserveCmd()
{
  // backward compatibility
  // used by backup
  Tcl_AppendResult(interp, "0", NULL);
}

void Base::getClipScopeCmd()
{
  switch (currentContext->clipScope()) {
  case FrScale::GLOBAL:
    Tcl_AppendResult(interp, "global", NULL);
    break;
  case FrScale::LOCAL:
    Tcl_AppendResult(interp, "local", NULL);
    break;
  }
}

void Base::getClipUserCmd()
{
  ostringstream str;
  str << currentContext->ulow() << ' ' << currentContext->uhigh() << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getClipZScaleContrastCmd()
{
  ostringstream str;
  str << currentContext->zContrast() << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getClipZScaleSampleCmd()
{
  ostringstream str;
  str << currentContext->zSample() << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getClipZScaleLineCmd()
{
  ostringstream str;
  str << currentContext->zLine() << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getColorbarTagCmd()
{
  if (colorbartag)
    Tcl_AppendResult(interp, colorbartag, NULL);
  else
    Tcl_AppendResult(interp, "", NULL);
}

void Base::getColorMapLevelCmd(int count)
{
  if (currentContext->cfits) {
    getColorMapLevelCmd(count, currentContext->cfits->low(),
			currentContext->cfits->high(),
			currentContext->colorScaleType(),
			currentContext->expo());		
  }
  else
    getColorMapLevelCmd(count, currentContext->low(), 
			currentContext->high(),
			currentContext->colorScaleType(),
			currentContext->expo());		
}

void Base::getColorMapLevelCmd(int count, const Vector& vv, 
			       Coord::InternalSystem ref)
{
  if (currentContext->cfits) {
    if (FitsImage* ptr=isInCFits(vv,ref,NULL)) {
      getColorMapLevelCmd(count, ptr->low(), ptr->high(),
			  currentContext->colorScaleType(),
			  currentContext->expo());
      return;
    }
  }

  getColorMapLevelCmd(count, currentContext->low(), 
		      currentContext->high(),
		      currentContext->colorScaleType(),
		      currentContext->expo());
}

void Base::getColorMapLevelCmd(int count, double ll, double hh,
			       FrScale::ColorScaleType scaleType,
			       float expo)
{
  if (inverseScale)
    delete inverseScale;
  inverseScale = NULL;

  switch (scaleType) {
  case FrScale::LINEARSCALE:
    inverseScale = new LinearInverseScale(count, ll, hh);
    break;
  case FrScale::LOGSCALE:
    inverseScale = new LogInverseScale(count, ll, hh, expo);
    break;
  case FrScale::POWSCALE:
    inverseScale = new PowInverseScale(count, ll, hh, expo);
    break;
  case FrScale::SQRTSCALE:
    inverseScale = new SqrtInverseScale(count, ll, hh);
    break;
  case FrScale::SQUAREDSCALE:
    inverseScale = new SquaredInverseScale(count, ll, hh);
    break;
  case FrScale::ASINHSCALE:
    inverseScale = new AsinhInverseScale(count, ll, hh);
    break;
  case FrScale::SINHSCALE:
    inverseScale = new SinhInverseScale(count, ll, hh);
    break;
  case FrScale::HISTEQUSCALE:
    inverseScale = new HistEquInverseScale(count, ll, hh, 
				    currentContext->histequ(),
				    HISTEQUSIZE);
    break;
  case FrScale::IISSCALE:
    inverseScale = new IISInverseScale(count, ll, hh,
				       currentContext->fits->iisz());
    break;
  }

  if (inverseScale) {
    ostringstream str;
    str << inverseScale->size() << ' ' << inverseScale->level() << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  }
}

void Base::getColorScaleCmd()
{
  switch (currentContext->colorScaleType()) {
  case FrScale::LINEARSCALE:
    Tcl_AppendResult(interp, "linear", NULL);
    break;
  case FrScale::LOGSCALE:
    Tcl_AppendResult(interp, "log", NULL);
    break;
  case FrScale::POWSCALE:
    Tcl_AppendResult(interp, "pow", NULL);
    break;
  case FrScale::SQRTSCALE:
    Tcl_AppendResult(interp, "sqrt", NULL);
    break;
  case FrScale::SQUAREDSCALE:
    Tcl_AppendResult(interp, "squared", NULL);
    break;
  case FrScale::ASINHSCALE:
    Tcl_AppendResult(interp, "asinh", NULL);
    break;
  case FrScale::SINHSCALE:
    Tcl_AppendResult(interp, "sinh", NULL);
    break;
  case FrScale::HISTEQUSCALE:
    Tcl_AppendResult(interp, "histequ", NULL);
    break;
  case FrScale::IISSCALE:
    Tcl_AppendResult(interp, "linear", NULL);
    break;
  }
}

void Base::getColorScaleLevelCmd(int count, double ll, double hh,
				 FrScale::ColorScaleType scaleType, 
				 float expo)
{
  InverseScale* scale;
  switch (scaleType) {
  case FrScale::LINEARSCALE:
    scale = new LinearInverseScale(count, ll, hh);
    break;
  case FrScale::LOGSCALE:
    scale = new LogInverseScale(count, ll, hh, expo);
    break;
  case FrScale::POWSCALE:
    scale = new PowInverseScale(count, ll, hh, expo);
    break;
  case FrScale::SQRTSCALE:
    scale = new SqrtInverseScale(count, ll, hh);
    break;
  case FrScale::SQUAREDSCALE:
    scale = new SquaredInverseScale(count, ll, hh);
    break;
  case FrScale::ASINHSCALE:
    scale = new AsinhInverseScale(count, ll, hh);
    break;
  case FrScale::SINHSCALE:
    scale = new SinhInverseScale(count, ll, hh);
    break;
  case FrScale::HISTEQUSCALE:
    scale = new HistEquInverseScale(count, ll, hh, 
				    currentContext->histequ(),
				    HISTEQUSIZE);
    break;
  case FrScale::IISSCALE:
    scale = new IISInverseScale(count, ll, hh,
				currentContext->fits->iisz());
    break;
  }

  ostringstream str;
  str << *scale << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
 
  delete scale;
}

void Base::getColorScaleLogCmd()
{
  ostringstream str;
  str << currentContext->expo() << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getContourCmd(Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  ostringstream str;
  currentContext->contourListFV(str, sys, sky);
  str << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getContourMethodCmd()
{
  Tcl_AppendResult(interp, currentContext->fvcontour().methodName(), NULL);
}

void Base::getContourClipCmd()
{
  FrScale* fr = currentContext->fvcontour().frScale();
  ostringstream str;
  str << fr->low() << ' ' 
      << fr->high() << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getContourClipModeCmd()
{
  FrScale* fr = currentContext->fvcontour().frScale();
  switch (fr->clipMode()) {
  case FrScale::MINMAX:
    Tcl_AppendResult(interp, "minmax", NULL);
    break;
  case FrScale::ZSCALE:
    Tcl_AppendResult(interp, "zscale", NULL);
    break;
  case FrScale::ZMAX:
    Tcl_AppendResult(interp, "zmax", NULL);
    break;
  case FrScale::AUTOCUT:
    printDouble(fr->autoCutPer());
    break;
  case FrScale::USERCLIP:
    Tcl_AppendResult(interp, "user", NULL);
    break;
  }
}

void Base::getContourClipScopeCmd()
{
  FrScale* fr = currentContext->fvcontour().frScale();
  switch (fr->clipScope()) {
  case FrScale::GLOBAL:
    Tcl_AppendResult(interp, "global", NULL);
    break;
  case FrScale::LOCAL:
    Tcl_AppendResult(interp, "local", NULL);
    break;
  }
}

void Base::getContourColorNameCmd()
{
  Tcl_AppendResult(interp, currentContext->fvcontour().getColorName(), NULL);
}

void Base::getContourDashCmd()
{
  if (currentContext->fvcontour().getDash())
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::getContourLevelCmd()
{
  Tcl_AppendResult(interp, currentContext->fvcontour().level(), NULL);
}

void Base::getContourLineWidthCmd()
{
  ostringstream str;
  str << currentContext->fvcontour().getLineWidth() << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getContourNumLevelCmd()
{
  ostringstream str;
  str << currentContext->fvcontour().numLevel() << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getContourSmoothCmd()
{
  ostringstream str;
  str << currentContext->fvcontour().smooth() << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getContourScaleCmd()
{
  FrScale* fr = currentContext->fvcontour().frScale();
  switch (fr->colorScaleType()) {
  case FrScale::LINEARSCALE:
    Tcl_AppendResult(interp, "linear", NULL);
    break;
  case FrScale::LOGSCALE:
    Tcl_AppendResult(interp, "log", NULL);
    break;
  case FrScale::POWSCALE:
    Tcl_AppendResult(interp, "pow", NULL);
    break;
  case FrScale::SQRTSCALE:
    Tcl_AppendResult(interp, "sqrt", NULL);
    break;
  case FrScale::SQUAREDSCALE:
    Tcl_AppendResult(interp, "squared", NULL);
    break;
  case FrScale::ASINHSCALE:
    Tcl_AppendResult(interp, "asinh", NULL);
    break;
  case FrScale::SINHSCALE:
    Tcl_AppendResult(interp, "sinh", NULL);
    break;
  case FrScale::HISTEQUSCALE:
    Tcl_AppendResult(interp, "histequ", NULL);
    break;
  case FrScale::IISSCALE:
    Tcl_AppendResult(interp, "linear", NULL);
    break;
  } 
}

void Base::getContourScaleLogCmd()
{
  FrScale* fr = currentContext->fvcontour().frScale();
  ostringstream str;
  str << fr->expo() << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getCoordCmd(const Vector& vv, Coord::CoordSystem out, 
		       Coord::SkyFrame sky, Coord::SkyFormat format)
{
  if (FitsImage* ptr=isInCFits(vv,Coord::CANVAS,NULL))
    printFromRef(ptr, mapToRef(vv,Coord::CANVAS), out, sky, format);
  else
    Tcl_AppendResult(interp, "0 0", NULL);
}

void Base::getCoord3axisCmd(double vv, Coord::CoordSystem in, 
			    Coord::CoordSystem out, int ss)
{
  if (currentContext->cfits) {
    if (in==out)
      printDouble(vv);
    else {
      // use first slice
      double rr = currentContext->fits->mapToRef3axis(vv,in,ss);
      double tt = currentContext->fits->mapFromRef3axis(rr,out,ss);
      printDouble(tt);
    }
  }
  else
    Tcl_AppendResult(interp, "0", NULL);
}

// used for Backup 
void Base::getCropCmd(Coord::CoordSystem sys, Coord::SkyFrame sky,
		      Coord::SkyFormat format)
{
  FitsImage* ptr = currentContext->fits;
  if (!ptr)
    return;

  // params are in DATA coords
  FitsBound* params =ptr->getDataParams(currentContext->secMode());
  Vector ll = Vector(params->xmin,params->ymin);
  Vector ur = Vector(params->xmax,params->ymax);

  printFromRef(ptr, ll*ptr->dataToRef, sys, sky, format);
  Tcl_AppendResult(interp, " ", NULL);
  printFromRef(ptr, ur*ptr->dataToRef, sys, sky, format);
}

void Base::getCropCenterCmd(Coord::CoordSystem sys, Coord::SkyFrame sky, 
			    Coord::SkyFormat format, Coord::CoordSystem dcoord,
			    Coord::DistFormat dist)
{
  FitsImage* ptr = currentContext->fits;
  if (!ptr)
    return;

  // params are in DATA coords
  FitsBound* params = ptr->getDataParams(currentContext->secMode());
  Vector ll = Vector(params->xmin,params->ymin);
  Vector ur = Vector(params->xmax,params->ymax);
  Vector cc = (ur-ll)/2.+ll;
  Vector dd = ur-ll;

  printFromRef(ptr, cc*ptr->dataToRef, sys, sky, format);
  Tcl_AppendResult(interp, " ", NULL);
  printLenFromRef(ptr, dd*ptr->dataToRef, dcoord, dist);
}

void Base::getCrop3dCmd(Coord::CoordSystem sys)
{
  // use first slice
  FitsImage* ptr = currentContext->fits;
  if (!ptr)
    return;

  FitsZBound* zparams =
    currentContext->getDataParams(currentContext->secMode());
  double ff = ptr->mapFromRef3axis(zparams->zmin+.5,sys,2);
  double tt = ptr->mapFromRef3axis(zparams->zmax-.5,sys,2);

  ostringstream str;
  str << ff << ' ' << tt << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getCrosshairCmd(Coord::InternalSystem sys)
{
  ostringstream str;
  str << mapFromRef(crosshair, sys) << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getCrosshairCmd(Coord::CoordSystem sys, Coord::SkyFrame sky, 
			   Coord::SkyFormat format)
{
  if (currentContext->cfits)
    printFromRef(currentContext->cfits, crosshair, sys, sky, format);
  else
    Tcl_AppendResult(interp, "0 0", NULL);
}

void Base::getCrosshairStatusCmd()
{
  if (useCrosshair)
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::getDATASECCmd()
{
  if (currentContext->datasec()) 
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::getDataValuesCmd(const Vector& vv, Coord::InternalSystem ref,
			    const Vector& ss)
{
  Vector rr;
  FitsImage* ptr = isInCFits(vv, ref, &rr);
  if (!ptr)
    return;

  Vector ll = rr - Vector((((Vector&)ss)[0]-1)/2,(((Vector&)ss)[1]-1)/2);

  SETSIGBUS
  for (int jj=0; jj<((Vector&)ss)[1]; jj++) {
    for (int ii=0; ii<((Vector&)ss)[0]; ii++) {
      Vector dd = (ll+Vector(ii,jj)) * ptr->refToData;
      FitsBound* params = 
	ptr->getDataParams(currentContext->secMode());

      if (dd[0]>=params->xmin && dd[0]<params->xmax && 
	  dd[1]>=params->ymin && dd[1]<params->ymax)
	Tcl_AppendResult(interp, (char*)ptr->getValue(dd), " ", NULL);
    }
  }
  CLEARSIGBUS
}

void Base::getDataValuesCmd(int which, const Vector& vv, 
			    Coord::CoordSystem sys, Coord::SkyFrame sky, 
			    const Vector& dd, char* var)
{
  // clear an previous values
  Tcl_UnsetVar(interp,var,0);

  // find anchor point
  FitsImage* base = currentContext->cfits;
  for (int ii=1; ii<which; ii++)
    if (base)
      base = base->nextMosaic();

  if (!base) {
    Tcl_SetVar(interp,var,"",0);
    result = TCL_ERROR;
    return;
  }
  Vector ll = base->mapLenToRef(dd,sys,Coord::DEGREE);
  Vector bb = base->mapToRef(vv,sys,sky);

  SETSIGBUS
  for (int ii=0; ii<ll[0]; ii++) {
    for (int jj=0; jj<ll[1]; jj++) {
      Vector rr = bb+Vector(ii,jj);

      // index is in terms of native coords

      ostringstream str;
      str << setseparator(',');
      base->listFromRef(str,rr,sys,sky,Coord::DEGREES);

      int found = 0;
      FitsImage* ptr = currentContext->fits;
      while (ptr) {
	Vector ss = rr * ptr->refToData;
	FitsBound* params = 
	  ptr->getDataParams(currentContext->secMode());

	if (ss[0]>=params->xmin && ss[0]<params->xmax && 
	    ss[1]>=params->ymin && ss[1]<params->ymax) {
	  Tcl_SetVar2(interp,var,str.str().c_str(),(char*)ptr->getValue(ss),0);
	  found = 1;
	  break;
	}
	ptr = ptr->nextMosaic();
      }

      if (!found)
	Tcl_SetVar2(interp,var,str.str().c_str(),"",0);
    }
  }
  CLEARSIGBUS
}

void Base::getFitsNAxesCmd()
{
  printInteger(currentContext->naxes());
}

void Base::getFitsCenterCmd(Coord::CoordSystem sys, Coord::SkyFrame sky, 
			    Coord::SkyFormat format)
{
  if (keyContext && keyContext->fits)
    printFromRef(keyContext->fits, 
		 imageCenter(keyContext->secMode())*
		 keyContext->fits->imageToRef, 
		 sys, sky, format);
  else
    Tcl_AppendResult(interp, "0 0", NULL);
}

void Base::getFitsCountCmd()
{
  printInteger(fitsCount());
}

void Base::getFitsDepthCmd(int ii)
{
  printInteger(currentContext->naxis(ii));
}

void Base::getFitsExtCmd(int which)
{
  which = abs(which);
  FitsImage* rr = findAllFits(which);
  if (rr) {
    ostringstream str;
    str << rr->ext() << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  }
  else
    Tcl_AppendResult(interp, "", NULL);
}

void Base::getFitsExtCmd(const Vector& vv, Coord::InternalSystem ref)
{
  if (FitsImage* ptr=isInCFits(vv,ref,NULL)) {
    ostringstream str;
    str << ptr->ext() << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  } 
  else
    Tcl_AppendResult(interp, "", NULL);
}

void Base::getFitsHeaderCmd(int which)
{
  int prim = which < 0 ? 1:0;
  which = abs(which);

  // modified for medatacube
  FitsImage* rr = findAllFits(which);
  if (rr) {
    char* hh = !prim ? rr->displayHeader() : rr->displayPrimary();
    Tcl_AppendResult(interp, hh, NULL);
    delete [] hh;
  }
  else
    result = TCL_ERROR;
}

void Base::getFitsHeaderKeywordCmd(int which, const char* key)
{
  which = abs(which);

  FitsImage* rr = findAllFits(which);
  if (rr) {
    char* value = rr->getKeyword(key);
    if (value) {
      Tcl_AppendResult(interp, value, NULL);
      delete [] value;
      return;
    }
  }
  else
    Tcl_AppendResult(interp, "", NULL);
}

void Base::getFitsHeaderWCSCmd(int which)
{
  // no primary
  FitsImage* rr = findAllFits(which);
  if (rr) {
    char* hh = rr->displayWCS();
    Tcl_AppendResult(interp, hh, NULL);
    delete [] hh;
  }
  else
    Tcl_AppendResult(interp, "", NULL);
}

void Base::getFitsHeightCmd()
{
  if (currentContext->cfits)
    printInteger(currentContext->cfits->height());
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::getFitsFileNameCmd(FileNameType type)
{
  if (currentContext->cfits)
      Tcl_AppendResult(interp, currentContext->cfits->getFileName(type), NULL);
  else
    Tcl_AppendResult(interp, "", NULL);
}

void Base::getFitsFileNameCmd(int which, FileNameType type)
{
  FitsImage* rr = findAllFits(which);
  if (rr)
    Tcl_AppendResult(interp, rr->getFileName(type), NULL);
  else
    Tcl_AppendResult(interp, "", NULL);
}

void Base::getFitsFileNameCmd(const Vector& vv, Coord::InternalSystem ref, 
			      FileNameType type)
{
  if (FitsImage* ptr=isInCFits(vv,ref,NULL))
    Tcl_AppendResult(interp, ptr->getFileName(type), NULL);
  else
    Tcl_AppendResult(interp, "", NULL);
}

void Base::getFitsObjectNameCmd()
{
  if (currentContext->cfits)
    Tcl_AppendResult(interp, currentContext->cfits->objectKeyword(), NULL);
  else
    Tcl_AppendResult(interp, "", NULL);
}

void Base::getFitsSizeCmd()
{
  ostringstream str;
  if (keyContext->fits)
    str << keyContext->fits->size() << ends;
  else
    str << Vector() << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getFitsSizeCmd(Coord::CoordSystem sys, Coord::SkyFrame sky,
			  Coord::DistFormat dist)
{
  if (keyContext->fits) {
    if (!keyContext->fits->hasWCSCel(sys)) {
      Tcl_AppendResult(interp, "0 0", NULL);
      return;
    }

    BBox bb = imageBBox(keyContext->secMode());
    Matrix mm = keyContext->fits->imageToRef;

    Vector ll = bb.ll   * mm;
    Vector lr = bb.lr() * mm;
    Vector ur = bb.ur   * mm;
    Vector ul = bb.ul() * mm;

    Vector ww[4];
    ww[0] = keyContext->fits->mapFromRef(ll,sys,sky);
    ww[1] = keyContext->fits->mapFromRef(lr,sys,sky);
    ww[2] = keyContext->fits->mapFromRef(ur,sys,sky);
    ww[3] = keyContext->fits->mapFromRef(ul,sys,sky);

    // we need to check for the case of crossing 0 in ra
    // since ra is returned as 0 > ra > 360
    {
      float min = 360;
      float max = 0;
      for (int ii=0; ii<4; ii++) {
	if (ww[ii][0]<min)
	  min=ww[ii][0];
	if (ww[ii][0]>max)
	  max=ww[ii][0];
      }

      // ok, we have a problem
      if (max-min > 180)
	for (int ii=0; ii<4; ii++)
	  if (ww[ii][0] > 180)
	    ww[ii][0] -= 360;
    }

    BBox wbb(ww[0],ww[0]);
    for (int ii=1; ii<4; ii++)
      wbb.bound(ww[ii]);

    Vector ss(keyContext->fits->getWCSDist(wbb.ll,wbb.lr(),sys),
	      keyContext->fits->getWCSDist(wbb.ll,wbb.ul(),sys));

    ostringstream str;
    str << fixed;
    switch (dist) {
    case Coord::DEGREE:
      str << setprecision(7);
      break;
    case Coord::ARCMIN:
      str << setprecision(5);
      ss *= 60;
      break;
    case Coord::ARCSEC:
      str << setprecision(3);
      ss *= 60*60;
      break;
    }
    str << ss << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  }
  else
    Tcl_AppendResult(interp, "0 0", NULL);
}

void Base::getFitsSliceCmd(int id)
{
  int ss = currentContext->slice(id);
  if (ss>1)
    printInteger(ss);
  else
    Tcl_AppendResult(interp, "1", NULL);
}

void Base::getFitsSliceCmd(int id, Coord::CoordSystem sys)
{
  if (currentContext->fits) {
    int ss = currentContext->slice(id);
    double rr = currentContext->fits->mapFromRef3axis(ss,sys,id);
    printDouble(rr);
  }
  else
    Tcl_AppendResult(interp, "1", NULL);
}

void Base::getFitsWidthCmd()
{
  if (currentContext->cfits)
    printInteger(currentContext->cfits->width());
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::getGridCmd()
{
  if (grid) {
    Tcl_AppendElement(interp, coord.coordSystemStr((grid->system())));

    Tcl_AppendElement(interp, coord.skyFrameStr((grid->sky())));

    Tcl_AppendElement(interp, coord.skyFormatStr(grid->skyFormat()));

    switch (grid->type()) {
    case Grid::ANALYSIS:
      Tcl_AppendElement(interp, "analysis");
      break;
    case Grid::PUBLICATION:
      Tcl_AppendElement(interp, "publication");
      break;
    }
  }
  else
    Tcl_AppendResult(interp, "", NULL);
}

void Base::getGridOptionCmd()
{
  if (grid)
    Tcl_AppendResult(interp, grid->option(), NULL);
  else
    Tcl_AppendResult(interp, "", NULL);
}

void Base::getGridVarsCmd()
{
  if (grid)
    Tcl_AppendResult(interp, grid->vars(), NULL);
  else
    Tcl_AppendResult(interp, "", NULL);
}

void Base::getHistogramCmd(char* xName, char* yName, int num)
{
  currentContext->bltHist(xName, yName, num);
}

void Base::getHorzCutCmd(char* xx, char* yy, const Vector& vv, 
			 Coord::InternalSystem ref, 
			 int thick, Base::CutMethod method)
{
  bltCut(xx, yy, Coord::XX, mapToRef(vv,ref), thick, method);
}

void Base::getInfoCmd(char* var)
{
  if (currentContext->cfits) {
    Tcl_SetVar2(interp,var,"filename",(char*)currentContext->cfits->getFileName(ROOTBASE),0);
    Tcl_SetVar2(interp,var,"object",
		(char*)currentContext->cfits->objectKeyword(),0);
    Tcl_SetVar2(interp,var,"min",(char*)currentContext->cfits->getMin(),0);
    Tcl_SetVar2(interp,var,"min,x",(char*)currentContext->cfits->getMinX(),0);
    Tcl_SetVar2(interp,var,"min,y",(char*)currentContext->cfits->getMinY(),0);
    Tcl_SetVar2(interp,var,"max",(char*)currentContext->cfits->getMax(),0);
    Tcl_SetVar2(interp,var,"max,x",(char*)currentContext->cfits->getMaxX(),0);
    Tcl_SetVar2(interp,var,"max,y",(char*)currentContext->cfits->getMaxY(),0);
    Tcl_SetVar2(interp,var,"low",(char*)currentContext->cfits->getLow(),0);
    Tcl_SetVar2(interp,var,"high",(char*)currentContext->cfits->getHigh(),0);
  }
  else
    getInfoClearName(var);

  getInfoClearValue(var);
  getInfoClearWCS(var);
}

void Base::getInfoCmd(const Vector& vv, Coord::InternalSystem ref, char* var)
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
      // use first slice
      coord3ToTclArray(ptr,rr,Coord::IMAGE,var,"image");

      coordToTclArray(sptr,rr,Coord::PHYSICAL,var,"physical");
      // use first slice
      coord3ToTclArray(ptr,rr,Coord::PHYSICAL,var,"physical");

      if (hasATMV()) {
	coordToTclArray(sptr,rr,Coord::AMPLIFIER,var,"amplifier");
	// use first slice
	coord3ToTclArray(ptr,rr,Coord::AMPLIFIER,var,"amplifier");
      }
      else {
	Tcl_SetVar2(interp,var,"amplifier,x","",0);
	Tcl_SetVar2(interp,var,"amplifier,y","",0);
	Tcl_SetVar2(interp,var,"amplifier,z","",0);
      }

      if (hasDTMV()) {
	coordToTclArray(sptr,rr,Coord::DETECTOR,var,"detector");
	// use first slice
	coord3ToTclArray(ptr,rr,Coord::DETECTOR,var,"detector");
      }
      else {
	Tcl_SetVar2(interp,var,"detector,x","",0);
	Tcl_SetVar2(interp,var,"detector,y","",0);
	Tcl_SetVar2(interp,var,"detector,z","",0);
      }

      getInfoWCS(var,rr,ptr,sptr);
      return;
    }
    else {
      if (mosaic) {
	sptr = sptr->nextMosaic();
	if (sptr)
	  params = sptr->getDataParams(currentContext->secMode());
      }
      else {
	getInfoWCS(var,rr,ptr,sptr);
	goto noImage;
      }
    }
  }
  while (mosaic && sptr);

  // mosaic gap
  getInfoWCS(var,rr,ptr,ptr);

  // else, return blanks
 noFits:
  getInfoClearName(var);

 noImage:
  getInfoClearValue(var);
}

void Base::getInfoClipCmd()
{
  if (currentContext->cfits) {
    Tcl_AppendElement(interp, (char*)currentContext->cfits->getLow());
    Tcl_AppendElement(interp, (char*)currentContext->cfits->getHigh());
  }
  else {
    Tcl_AppendElement(interp, "0");
    Tcl_AppendElement(interp, "0");
  }
}

void Base::getIRAFAlignCmd()
{
  Tcl_AppendResult(interp, (irafAlign_ ? "1" : "0"), NULL);
}

void Base::getMaskColorCmd()
{
  Tcl_AppendResult(interp, maskColorName, NULL);
}

void Base::getMaskMarkCmd()
{
  if (maskMark)
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::getMaskTransparencyCmd()
{
  printDouble((1-maskAlpha)*100.);
}

void Base::getMinMaxCmd()
{
  ostringstream str;
  str << currentContext->getMinMax() << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getNANColorCmd()
{
  Tcl_AppendResult(interp, nanColorName, NULL);
}

void Base::getOrientCmd()
{
  switch (orientation) {
  case Coord::NORMAL:
    Tcl_AppendResult(interp, "none", NULL);
    return;
  case Coord::XX:
    Tcl_AppendResult(interp, "x", NULL);
    return;
  case Coord::YY:
    Tcl_AppendResult(interp, "y", NULL);
    return;
  case Coord::XY:
    Tcl_AppendResult(interp, "xy", NULL);
    return;
  }
}

void Base::getPanPreserveCmd()
{
  if (preservePan)
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::getPixelTableCmd(const Vector& vv, Coord::InternalSystem ref,
			    int ww, int hh, char* var)
{
  Vector rr;
  FitsImage* ptr = isInCFits(vv, ref, &rr);
  if (!ptr) {
    // else return blank
    for (int jj=0; jj<=hh; jj++) {
      for (int ii=0; ii<=ww; ii++) {
	ostringstream str;
	str << ii << ',' << jj << ends;
	Tcl_SetVar2(interp,var,str.str().c_str(),"",0);
      }
    }
    return;
  }

  Vector half((ww-1)/2,(hh-1)/2);
  Vector ur = rr+half;
  Vector ll = rr-half;
  int ii,jj;

  FitsBound* params = ptr->getDataParams(currentContext->secMode());

  // x (columns)
  for (ii=0,jj=0; ii<ww; ii++) {
    ostringstream str;

    str << jj << ',' << ii+1 << ends;

    if (ur[0]>=params->xmin && ll[0]<params->xmax && 
	ur[1]>=params->ymin && ll[1]<params->ymax) {
      Vector pt = ((ll+Vector(ii,jj)) * dataToImage).round();
      if (pt[0]>params->xmin && pt[0]<=params->xmax) {
	ostringstream lstr;
	lstr << pt[0] << ends;
	Tcl_SetVar2(interp,var,str.str().c_str(),lstr.str().c_str(),0);
      }
      else
	Tcl_SetVar2(interp,var,str.str().c_str(),"",0);
    }
    else
      Tcl_SetVar2(interp,var,str.str().c_str(),"",0);
  }

  // y (rows)
  for (ii=0,jj=0; jj<hh; jj++) {
    ostringstream str;
    str << hh-jj << ',' << ii << ends;

    if (ur[0]>=params->xmin && ll[0]<params->xmax && 
	ur[1]>=params->ymin && ll[1]<params->ymax) {
      Vector pt = ((ll+Vector(ii,jj)) * dataToImage).round();
      if (pt[1]>params->ymin && pt[1]<=params->ymax) {
	ostringstream lstr;
	lstr << pt[1] << ends;
	Tcl_SetVar2(interp,var,str.str().c_str(),lstr.str().c_str(),0);
      }
      else
	Tcl_SetVar2(interp,var,str.str().c_str(),"",0);
    }
    else
      Tcl_SetVar2(interp,var,str.str().c_str(),"",0);
  }

  // body

  SETSIGBUS
  for (jj=0; jj<hh; jj++) {
    for (ii=0; ii<ww; ii++) {
      Vector pt = ll+Vector(ii,jj);
      ostringstream str;      
      str << hh-jj << ',' << ii+1 << ends;

      if (pt[0]>=params->xmin && pt[0]<params->xmax && 
	  pt[1]>=params->ymin && pt[1]<params->ymax)
	Tcl_SetVar2(interp,var,str.str().c_str(),(char*)ptr->getValue(pt),0);
      else
	Tcl_SetVar2(interp,var,str.str().c_str(),"",0);
    }
  }
  CLEARSIGBUS
}

void Base::getRotateCmd()
{
  printDouble(radToDeg(rotation));
}

void Base::getSmoothFunctionCmd()
{
  switch (currentContext->smoothFunction()) {
  case Context::BOXCAR:
    Tcl_AppendResult(interp, "boxcar", NULL);
    return;
  case Context::TOPHAT:
    Tcl_AppendResult(interp, "tophat", NULL);
    return;
  case Context::GAUSSIAN:
    Tcl_AppendResult(interp, "gaussian", NULL);
    return;
  case Context::ELLIPTIC:
    Tcl_AppendResult(interp, "elliptic", NULL);
    return;
  }
}

void Base::getSmoothRadiusCmd()
{
  printInteger(currentContext->smoothRadius());
}

void Base::getSmoothRadiusMinorCmd()
{
  printInteger(currentContext->smoothRadiusMinor());
}

void Base::getSmoothSigmaCmd()
{
  printDouble(currentContext->smoothSigma());
}

void Base::getSmoothSigmaMinorCmd()
{
  printDouble(currentContext->smoothSigmaMinor());
}

void Base::getSmoothAngleCmd()
{
  printDouble(radToDeg(currentContext->smoothAngle()));
}

void Base::getThreadsCmd()
{
  ostringstream str;
  str << nthreads_ << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getValueCmd(const Vector& vv, Coord::InternalSystem sys)
{
  Vector rr;
  SETSIGBUS
  if (FitsImage* ptr=isInCFits(vv,sys,&rr))
    Tcl_AppendResult(interp, ptr->getValue(rr), NULL);
  CLEARSIGBUS
}

void Base::getVertCutCmd(char* xx, char* yy, const Vector& vv,
			 Coord::InternalSystem ref, 
			 int thick, Base::CutMethod method)
{
  bltCut(xx, yy, Coord::YY, mapToRef(vv,ref), thick, method);
}

void Base::getWCSCmd()
{
  Tcl_AppendResult(interp, coord.coordSystemStr(wcsSystem_), " ",
		   coord.skyFrameStr(wcsSky_), " ",
		   coord.skyFormatStr(wcsSkyFormat_), NULL);
}

void Base::getWCSAlignCmd()
{
  Tcl_AppendResult(interp, (wcsAlign_ ? "1" : "0"), NULL);
}

void Base::getWCSAlignPointerCmd()
{
  ostringstream str;
  if (keyContext->fits)
    str << (unsigned short*)keyContext->fits << ends;
  else
    str << (unsigned short*)NULL << ends;

  Tcl_AppendResult(interp, (wcsAlign_ ? "1" : "0"), " ", 
		   str.str().c_str(), " ",
		   coord.coordSystemStr(wcsSystem_), " ",
		   coord.skyFrameStr(wcsSky_), NULL);
}

void Base::getWCSNameCmd(Coord::CoordSystem sys)
{
  if (currentContext->cfits && currentContext->cfits->hasWCS(sys)) {
    char* wcsname = (char*)currentContext->cfits->getWCSName(sys);
    if (wcsname) {
      Tcl_AppendResult(interp, wcsname, NULL);
      return;
    }
  }
  else
    Tcl_AppendResult(interp, "", NULL);
}

void Base::getZoomCmd()
{
  ostringstream str;
  str << zoom_ << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::gridDeleteCmd()
{
  if (grid)
    delete grid;
  grid = NULL;

  update(PIXMAP);
}

void Base::hasAmplifierCmd()
{
  if (hasATMV())
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasBinColCmd(const char* str)
{
  if (currentContext->fits) {
    if (currentContext->fits->hasBinCol(str)) {
      Tcl_AppendResult(interp, "1", NULL);
      return;
    }
  }
  Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasContourCmd()
{
  if (hasContour())
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasContourAuxCmd()
{
  if (hasContourAux())
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasCropCmd()
{
  switch (currentContext->secMode()) {
  case FrScale::IMGSEC:
  case FrScale::DATASEC:
    Tcl_AppendResult(interp, "0", NULL);
    break;
  case FrScale::CROPSEC:
    Tcl_AppendResult(interp, "1", NULL);
    break;
  }
}

void Base::hasDATAMINCmd()
{
  if (currentContext->cfits && currentContext->cfits->hasDATAMIN())
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasDATASECCmd()
{
  if (currentContext->cfits && currentContext->cfits->hasDATASEC())
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasDetectorCmd()
{
  if (hasDTMV())
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasFitsCmd()
{
  if (currentContext->fits)
      Tcl_AppendResult(interp, "1", NULL);
  else
      Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasFitsHPXCmd()
{
  if (currentContext->fits && currentContext->fits->isHPX())
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasFitsBinCmd()
{
  if (currentContext->fits && currentContext->fits->isHist())
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasFitsCubeCmd()
{
  if (isCube())
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasFitsMosaicCmd()
{
  if (isMosaic())
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasGridCmd()
{
  if (grid)
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasIISCmd()
{
  if (isIIS())
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasIRAFMINCmd()
{
  if (currentContext->cfits && currentContext->cfits->hasIRAFMIN())
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasPhysicalCmd()
{
  if (hasLTMV())
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasSmoothCmd()
{
  if (currentContext->hasSmooth())
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasSystemCmd(Coord::CoordSystem sys)
{
  switch (sys) {
  case Coord::IMAGE:
    Tcl_AppendResult(interp, "1", NULL);
    return;
  case Coord::PHYSICAL:
    hasPhysicalCmd();
    return;
  case Coord::AMPLIFIER:
    hasAmplifierCmd();
    return;
  case Coord::DETECTOR:
    hasDetectorCmd();
    return;
  default:
    hasWCSCmd(sys);
    return;
  }
}

void Base::hasWCSCmd(Coord::CoordSystem sys)
{
  Tcl_AppendResult(interp, (hasWCS(sys) ? "1" : "0"), NULL);
}

void Base::hasWCSAltCmd()
{
  Tcl_AppendResult(interp, (currentContext->cfits && currentContext->cfits->wcsHeader() ? "1" : "0"), NULL);
}

void Base::hasWCSEquCmd(Coord::CoordSystem sys)
{
  Tcl_AppendResult(interp, (hasWCSEqu(sys) ? "1" : "0"), NULL);
}

void Base::hasWCSCelCmd(Coord::CoordSystem sys)
{
  Tcl_AppendResult(interp, (hasWCSCel(sys) ? "1" : "0"), NULL);
}

void Base::hasWCSxCmd(Coord::CoordSystem sys)
{
  Tcl_AppendResult(interp, (hasWCSx(sys) ? "1" : "0"), NULL);
}

void Base::irafAlignCmd(int which)
{
  irafAlign_ = which;

  alignIRAF();
  update(MATRIX);
}

// loadIncr is only used by LICK OBS and MMT
// maintained for backward compatibility
void Base::loadIncrDataCmd(int which, int x0, int y0, int x1, int y1)
{
}

void Base::loadIncrMinMaxCmd(int which, int x0, int y0, int x1, int y1)
{
}

void Base::loadIncrEndCmd()
{
  currentContext->resetSecMode();

  currentContext->updateClip();
  updateColorScale();
  update(MATRIX);
}

void Base::highliteCmd(int which)
{
  useHighlite = which ? 1 : 0;
  update(PIXMAP);
}

void Base::magnifierCmd(int s)
{
  useMagnifier = s;
  updateMagnifier();
}

void Base::magnifierCmd(char* n, int w, int h)
{
  strcpy(magnifierName,n);
  magnifierWidth = w;
  magnifierHeight = h;

  if (magnifierPixmap)
    Tk_FreePixmap(display, magnifierPixmap);
  magnifierPixmap = 0;

  if (magnifierXImage)
    XDestroyImage(magnifierXImage);
  magnifierXImage = NULL;

  if (magnifierWidth > 0 && magnifierHeight > 0) {
    magnifierPixmap = Tk_GetPixmap(display, Tk_WindowId(tkwin),
			     magnifierWidth, magnifierHeight, depth);
    if (!magnifierPixmap) {
      internalError("Unable to Create Magnifier Pixmap");
      return;
    }

    if (!magnifierXImage) {
      if (!(magnifierXImage = XGetImage(display, magnifierPixmap, 0, 0, 
					magnifierWidth, magnifierHeight,
					AllPlanes, ZPixmap))){
	internalError("Unable to Create Magnifier XImage");
	return;
      }
    }
  }
}

void Base::magnifierCursorCmd(int which)
{
  useMagnifierCursor = which;
  updateMagnifier();
}

void Base::magnifierColorCmd(const char* color)
{
  if (magnifierColorName)
    delete [] magnifierColorName;
  magnifierColorName = dupstr(color);
  updateMagnifier();
}

void Base::magnifierGraphicsCmd(int which)
{
  useMagnifierGraphics = which;
  updateMagnifier();
}

void Base::magnifierZoomCmd(double z)
{
  magnifierZoom_ = fabs(z);
  updateMagnifier();
}

void Base::matchCmd(const char* xxname1, const char* yyname1,
		    Coord::CoordSystem sys1, Coord::SkyFrame sky1,
		    const char* xxname2, const char* yyname2,
		    Coord::CoordSystem sys2, Coord::SkyFrame sky2,
		    double rad, Coord::CoordSystem sys, Coord::DistFormat dist,
		    const char* rrname)
{
  if (keyContext && keyContext->fits)
    keyContext->fits->match(xxname1, yyname1, sys1, sky1,
			    xxname2, yyname2, sys2, sky2, 
			    rad, sys, dist, 
			    rrname);
}

void Base::maskClearCmd()
{
  currentContext->mask.deleteAll();
  update(BASE);
}

void Base::maskColorCmd(const char* color)
{
  if (maskColorName)
    delete [] maskColorName;

  maskColorName = dupstr(color);
}

void Base::maskTransparencyCmd(float t)
{
  maskAlpha = 1-(t/100.);
  update(BASE);
}

void Base::nanColorCmd(const char* color)
{
  if (nanColorName)
    delete [] nanColorName;
  nanColorName = dupstr(color);
  nanColor = getXColor(nanColorName);
  update(BASE);
}

void Base::orientCmd(Coord::Orientation which)
{
  orientation = which;

  switch (orientation) {
  case Coord::NORMAL:
    orientationMatrix.identity();
    break;
  case Coord::XX:
    orientationMatrix = FlipX();
    break;
  case Coord::YY:
    orientationMatrix = FlipY();
    break;
  case Coord::XY:
    orientationMatrix = FlipXY();
    break;
  }

  update(MATRIX);
}

void Base::panBeginCmd(const Vector& vv)
{
  // vv and panCursor are in CANVAS coords
  panCursor = vv;

  // copy tmp pixmap
  panPM = Tk_GetPixmap(display, Tk_WindowId(tkwin),
		       options->width, options->height, depth);
  if (!panPM) {
    internalError("Unable to Create Pan Motion Pixmap");
    return;
  }
  XCopyArea(display, pixmap, panPM, widgetGC, 0, 0, options->width, 
	    options->height, 0,0);
}

void Base::panMotionCmd(const Vector& vv)
{
  // vv and panCursor are in CANVAS coords

  // Clear
  Vector diff = (vv*canvasToWidget) - (panCursor*canvasToWidget);

  BBox hh,ww;
  if (diff[0]>0 && diff[1]>0) {
    hh = BBox(Vector(0,0), Vector(options->width, diff[1]));
    ww = BBox(Vector(0,0), Vector(diff[0], options->height));
  } else if (diff[0]>0 && diff[1]<0) {
    hh = BBox(Vector(options->width,options->height), 
	      Vector(0,options->height+diff[1]));
    ww = BBox(Vector(0,0), Vector(diff[0], options->height));
  } else if (diff[0]<0 && diff[1]>0) {
    hh = BBox(Vector(0,0), Vector(options->width, diff[1]));
    ww = BBox(Vector(options->width,options->height), 
	      Vector(options->width+diff[0], 0));
  } else if (diff[0]<0 && diff[1]<0) {
    hh = BBox(Vector(options->width,options->height), 
	      Vector(0,options->height+diff[1]));
    ww = BBox(Vector(options->width,options->height), 
	      Vector(options->width+diff[0], 0));
  }

  hh = hh * widgetToWindow;
  ww = ww * widgetToWindow;
    
  XSetForeground(display, widgetGC, getColor(bgColorName));

  Vector hs = hh.size();
  XFillRectangle(display, Tk_WindowId(tkwin), widgetGC, 
		 (int)hh.ll[0], (int)hh.ll[1], (int)hs[0], (int)hs[1]);

  Vector ws = ww.size();
  XFillRectangle(display, Tk_WindowId(tkwin), widgetGC, 
		 (int)ww.ll[0], (int)ww.ll[1], (int)ws[0], (int)ws[1]);

  // display tmp pixmap at new location
  Vector dd = ((vv * canvasToWidget) - (panCursor * canvasToWidget)) * 
    widgetToWindow;
  XCopyArea(display, panPM, Tk_WindowId(tkwin), panGCXOR, 
	    0, 0, options->width, options->height, dd[0], dd[1]);
}

void Base::pannerCmd(int s)
{
  usePanner = s;
  updatePanner();
}

void Base::pannerCmd(char* n, int w, int h)
{
  strcpy(pannerName,n);
  pannerWidth = w;
  pannerHeight = h;

  if (pannerPixmap)
    Tk_FreePixmap(display, pannerPixmap);
  pannerPixmap = 0;

  if (pannerXImage)
    XDestroyImage(pannerXImage);
  pannerXImage = NULL;

  if (pannerWidth > 0 && pannerHeight > 0) {
    if (!(pannerPixmap = Tk_GetPixmap(display, Tk_WindowId(tkwin), 
				      pannerWidth, pannerHeight, depth))) {
      internalError("Unable to Create Panner Pixmap");
      return;
    }

    if (!(pannerXImage = XGetImage(display, pannerPixmap, 0, 0,
				   pannerWidth, pannerHeight,
				   AllPlanes, ZPixmap))){
      internalError("Unable to Create Panner XImage");
      return;
    }
  }

  // update panner matrices
  update(MATRIX);
}

void Base::rotateCmd(double r)
{
  rotation += r;
  update(MATRIX);
}

void Base::rotateToCmd(double r)
{
  rotation = r;
  update(MATRIX);
}

void Base::saveFitsFileCmd(const char* fn)
{
  OutFitsFile str(fn);
  if (str.valid())
    saveFits(str);
}

void Base::saveFitsChannelCmd(const char* ch)
{
  OutFitsChannel str(interp, ch);
  if (str.valid())
    saveFits(str);
}

void Base::saveFitsSocketCmd(int ss)
{
  OutFitsSocket str(ss);
  if (str.valid())
    saveFits(str);
}

void Base::saveFitsTableFileCmd(const char* fn)
{
  OutFitsFile str(fn);
  if (str.valid())
    saveFitsTable(str);
}

void Base::saveFitsTableChannelCmd(const char* ch)
{
  OutFitsChannel str(interp, ch);
  if (str.valid())
    saveFitsTable(str);
}

void Base::saveFitsTableSocketCmd(int ss)
{
  OutFitsSocket str(ss);
  if (str.valid())
    saveFitsTable(str);
}

void Base::saveFitsSliceFileCmd(const char* fn)
{
  OutFitsFile str(fn);
  if (str.valid())
    saveFitsSlice(str);
}

void Base::saveFitsSliceChannelCmd(const char* ch)
{
  OutFitsChannel str(interp, ch);
  if (str.valid())
    saveFitsSlice(str);
}

void Base::saveFitsSliceSocketCmd(int ss)
{
  OutFitsSocket str(ss);
  if (str.valid())
    saveFitsSlice(str);
}

void Base::saveFitsExtCubeFileCmd(const char* fn)
{
  OutFitsFile str(fn);
  if (str.valid())
    saveFitsExtCube(str);
}

void Base::saveFitsExtCubeChannelCmd(const char* ch)
{
  OutFitsChannel str(interp, ch);
  if (str.valid())
    saveFitsExtCube(str);
}

void Base::saveFitsExtCubeSocketCmd(int ss)
{
  OutFitsSocket str(ss);
  if (str.valid())
    saveFitsExtCube(str);
}

void Base::saveFitsMosaicFileCmd(const char* fn, int which)
{
  OutFitsFile str(fn);
  if (str.valid())
    saveFitsMosaic(str, which);
}

void Base::saveFitsMosaicChannelCmd(const char* ch, int which)
{
  OutFitsChannel str(interp, ch);
  if (str.valid())
    saveFitsMosaic(str, which);
}

void Base::saveFitsMosaicSocketCmd(int ss, int which)
{
  OutFitsSocket str(ss);
  if (str.valid())
    saveFitsMosaic(str, which);
}

void Base::saveFitsMosaicImageFileCmd(const char* fn)
{
  OutFitsFile str(fn);
  if (str.valid())
    saveFitsMosaicImage(str);
}

void Base::saveFitsMosaicImageChannelCmd(const char* ch)
{
  OutFitsChannel str(interp, ch);
  if (str.valid())
    saveFitsMosaicImage(str);
}

void Base::saveFitsMosaicImageSocketCmd(int ss)
{
  OutFitsSocket str(ss);
  if (str.valid())
    saveFitsMosaicImage(str);
}

void Base::saveArrayFileCmd(const char* fn, FitsFile::ArchType endian)
{
  if (!currentContext->cfits)
    return;

  OutFitsFile str(fn);
  if (str.valid())
    saveArray(str, endian);
}

void Base::saveArrayChannelCmd(const char* ch, FitsFile::ArchType endian)
{
  OutFitsChannel str(interp, ch);
  if (str.valid())
    saveArray(str, endian);
}

void Base::saveArraySocketCmd(int ss, FitsFile::ArchType endian)
{
  OutFitsSocket str(ss);
  if (str.valid())
    saveArray(str, endian);
}

void Base::saveNRRDFileCmd(const char* fn, FitsFile::ArchType endian)
{
  OutFitsFile str(fn);
  if (str.valid())
    saveNRRD(str, endian);
}

void Base::saveNRRDChannelCmd(const char* ch, FitsFile::ArchType endian)
{
  OutFitsChannel str(interp, ch);
  if (str.valid())
    saveNRRD(str, endian);
}

void Base::saveNRRDSocketCmd(int ss, FitsFile::ArchType endian)
{
  OutFitsSocket str(ss);
  if (str.valid())
    saveNRRD(str, endian);
}

void Base::saveENVIFileCmd(const char* hdr, const char* fn, 
			   FitsFile::ArchType endian)
{
  ofstream str(hdr);
  OutFitsFile str2(fn);
  if (str2.valid())
    saveENVI(str, str2, endian);
}

void Base::sliceCmd(int id, int ss)
{
  // IMAGE (ranges 1-n)
  setSlice(id,ss);
  updateMagnifier();
}

void Base::sliceCmd(int id, double vv, Coord::CoordSystem sys)
{
  double rr = currentContext->fits->mapToRef3axis(vv,sys,id);
  int ss = currentContext->fits->mapFromRef3axis(rr,Coord::IMAGE,id);

  // IMAGE (ranges 1-n)
  setSlice(id,ss);
  updateMagnifier();
}

void Base::smoothCmd(int ff, int rr, int rm, double ss, double sm, double aa)
{
  currentContext->setSmooth(1, (Context::SmoothFunction)ff, rr, rm, ss, sm, aa);
  currentContext->analysis();
  updateColorScale();
  // for 3d, rebuffer
  update(MATRIX);
}

void Base::smoothDeleteCmd()
{
  currentContext->setSmooth(0);
  currentContext->analysis();
  updateColorScale();
  // for 3d, rebuffer
  update(MATRIX);
}

void Base::threadsCmd(int th)
{
  if (th>=1)
    nthreads_ = th;
}

// not used
// don't know if this is used by anyone else
void Base::unloadFitsCmd()
{
  unloadAllFits();
  update(MATRIX);
}

void Base::updateFitsCmd(int now)
{
  // for 3d, rebuffer
  if (now) {
    syncUpdate =1;
    updateNow(MATRIX);
    syncUpdate =0;
  }
  else
    update(MATRIX);
}

void Base::updateFitsCmd(int which, BBox bb, int now)
{
  // Note: bb is in IMAGE coords
  FitsImage* ptr = currentContext->fits;
  if (which > 0) {
    for (int ii=0; ii<(which-1); ii++) {
      if (ptr)
	ptr = ptr->nextMosaic();
    }
  }

  if (ptr) {
    BBox bbb = bb*ptr->imageToRef;

    Vector ll = mapFromRef(bbb.ll,Coord::CANVAS);
    Vector lr = mapFromRef(bbb.lr(),Coord::CANVAS);
    Vector ur = mapFromRef(bbb.ur,Coord::CANVAS);
    Vector ul = mapFromRef(bbb.ul(),Coord::CANVAS);

    BBox rr(ll);
    rr.bound(lr);
    rr.bound(ur);
    rr.bound(ul);

    if (now) {
      syncUpdate =1;
      updateNow(BASE, rr);
      syncUpdate =0;
    }
    else
      update(BASE, rr);
  }
}

void Base::updateMagnifierCmd(const Vector& v)
{
  updateMagnifier(v);
}

void Base::updatePannerCmd()
{
  updatePanner();
}

void Base::warpCmd(const Vector& vv)
{
  warp((Vector&)vv);
}

void Base::warpToCmd(const Vector& vv)
{
  Vector rr = vv*canvasToWindow;
  warpTo(rr);
}

void Base::wcsCmd(Coord::CoordSystem sys, Coord::SkyFrame sky, 
		  Coord::SkyFormat format)
{
  wcsSystem_ = sys;
  if (hasWCSEqu(sys)) {
    wcsSky_ = sky;
    wcsSkyFormat_ = format;
  }
  else if (hasWCSCel(sys)) {
    wcsSky_ = Coord::GALACTIC;
    wcsSkyFormat_ = format;
  }
  else {
    wcsSky_ = sky;
    wcsSkyFormat_ = format;
  }
}

void Base::wcsAlignCmd(int which)
{
  wcsAlign_ = which;

  alignWCS();
  update(MATRIX);
}

// used by backup
void Base::wcsAlignCmd(int which, Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  wcsAlign_ = which;

  alignWCS(sys, sky);
  update(MATRIX);
}

void Base::wcsAlignCmd(int which, FitsImage* ptr, Coord::CoordSystem sys, 
		       Coord::SkyFrame sky)
{
  wcsAlign_ = which;

  if (hasWCSEqu(sys))
    wcsSky_ = sky;
  else if (hasWCSCel(sys))
    wcsSky_ = Coord::GALACTIC;
  else
    wcsSky_ = sky;

  alignWCS(ptr, sys);
  update(MATRIX);
}

void Base::wcsAppendCmd(int which, int fd)
{
  if (!currentContext->cfits)
    return;

  boost::fdistream str(fd);
  if (!str) {
    Tcl_AppendResult(interp, " unable to read wcs infomation", NULL);
    result = TCL_ERROR;
    return;
  }

  FitsImage* rr = findAllFits(which);
  if (rr) {
    while (rr) {
      rr->appendWCS(str);
      rr=rr->nextSlice();
    }
  }
  else
    result = TCL_ERROR;
}

void Base::wcsAppendCmd(int which, const char* fn)
{
  if (!currentContext->cfits)
    return;

  ifstream str(fn);
  if (!str) {
    Tcl_AppendResult(interp, " unable to load wcs file ", fn, NULL);
    result = TCL_ERROR;
    return;
  }

  FitsImage* rr = findAllFits(which);
  if (rr) {
    while (rr) {
      rr->appendWCS(str);
      rr=rr->nextSlice();
    }
  }
  else
    result = TCL_ERROR;
}

void Base::wcsAppendTxtCmd(int which, const char* txt)
{
  if (!currentContext->cfits)
    return;

  istringstream str(txt);
  if (!str) {
    Tcl_AppendResult(interp, " unable to process text", NULL);
    result = TCL_ERROR;
    return;
  }

  FitsImage* rr = findAllFits(which);
  if (rr) {
    while (rr) {
      rr->appendWCS(str);
      rr=rr->nextSlice();
    }
  }
  else
    result = TCL_ERROR;
}

void Base::wcsResetCmd(int which)
{
  if (!currentContext->cfits) 
    return;

  FitsImage* rr = findAllFits(which);
  if (rr)
    while (rr) {
      rr->resetWCS();
      rr=rr->nextSlice();
    }
  else
    result = TCL_ERROR;
}

void Base::wcsReplaceCmd(int which, int fd)
{
  if (!currentContext->cfits)
    return;

  boost::fdistream str(fd);
  if (!str) {
    Tcl_AppendResult(interp, " unable to read wcs infomation", NULL);
    result = TCL_ERROR;
    return;
  }

  FitsImage* rr = findAllFits(which);
  if (rr) {
    while (rr) {
      rr->replaceWCS(str);
      rr=rr->nextSlice();
    }
  }
  else
    result = TCL_ERROR;
}

void Base::wcsReplaceCmd(int which, const char* fn)
{
  if (!currentContext->cfits)
    return;

  ifstream str(fn);
  if (!str) {
    Tcl_AppendResult(interp, " unable to load wcs file ", fn, NULL);
    result = TCL_ERROR;
    return;
  }

  FitsImage* rr = findAllFits(which);
  if (rr) {
    while (rr) {
      rr->replaceWCS(str);
      rr=rr->nextSlice();
    }
  }
  else
    result = TCL_ERROR;
}

void Base::wcsReplaceTxtCmd(int which, const char* txt)
{
  if (!currentContext->cfits)
    return;

  istringstream str(txt);
  if (!str) {
    Tcl_AppendResult(interp, " unable to process text", NULL);
    result = TCL_ERROR;
    return;
  }

  FitsImage* rr = findAllFits(which);
  if (rr) {
    while (rr) {
      rr->replaceWCS(str);
      rr=rr->nextSlice();
    }
  }
  else
    result = TCL_ERROR;
}

void Base::zoomCmd(const Vector& z)
{
  Vector az = ((Vector&)z).abs();
  zoom_[0] *= az[0];
  zoom_[1] *= az[1];
  update(MATRIX);
}

void Base::zoomToCmd(const Vector& z)
{
  zoom_ = ((Vector&)z).abs();
  update(MATRIX);
}
