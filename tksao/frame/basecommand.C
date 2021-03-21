// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <fstream>
#include "fdstream.hpp"

#include "util.h"
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
  // if same do nothing
  if (order == currentContext->axesOrder())
    return;
  
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

    footprintMarkers.deleteAll();
    undoFootprintMarkers.deleteAll();
    pasteFootprintMarkers.deleteAll();

    currentContext->contourDeleteFV();
    currentContext->contourDeleteAux();

    // don't clear the grid, we can reconstruct a new grid
    //    if (grid)
    //      delete grid;
    //    grid = NULL;

    loadDone(1);
  }
}

void Base::bgColorCmd(const char* color)
{
  if (bgColourName)
    delete [] bgColourName;
  bgColourName = dupstr(color);

  update(BASE);
}

void Base::useBgColorCmd(int which)
{
  useBgColor = which;
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

  if (currentContext->fits && currentContext->fits->isHist()) {
    Matrix mm = currentContext->bin(vv);
    updateBin(mm);
  }
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

  if (currentContext->fits && currentContext->fits->isHist()) {
    Matrix mm = currentContext->binCenter();
    updateBin(mm);
  }
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

  if (currentContext->fits && currentContext->fits->isHist()) {
    Matrix mm = currentContext->bin(vv);
    updateBin(mm);
  }
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

  if (currentContext->fits && currentContext->fits->isHist()) {
    Matrix mm = currentContext->binCenter();
    updateBin(mm);
  }
}

void Base::binAboutCmd()
{
  if (currentContext->fits && currentContext->fits->isHist()) {
    Matrix mm = currentContext->binCenter();
    updateBin(mm);
  }
}

void Base::binAboutCmd(const Vector& vv)
{
  if (currentContext->fits && currentContext->fits->isHist()) {
    Matrix mm = currentContext->bin(vv);
    updateBin(mm);
  }
}

void Base::binBufferSizeCmd(int size)
{
  currentContext->setBinBufferSize(size);
  if (currentContext->fits && currentContext->fits->isHist()) {
    Matrix mm = currentContext->binCursor();
    updateBin(mm);
  }
}

void Base::binColsCmd(const char* x, const char* y, const char* z)
{
  if (currentContext->fits) {
    currentContext->fits->setBinX(x);
    currentContext->fits->setBinY(y);
    currentContext->fits->setBinZ(z);
  }

  if (currentContext->fits && currentContext->fits->isHist()) {
    Matrix mm = currentContext->binCursor();
    updateBin(mm);
  }
}

void Base::binDepthCmd(int d)
{
  currentContext->setBinDepth(d);
  if (currentContext->fits && currentContext->fits->isHist()) {
    Matrix mm = currentContext->binCursor();
    updateBin(mm);
  }
}

void Base::binFactorCmd(const Vector& bb)
{
  currentContext->setBinFactor(bb);
  if (currentContext->fits && currentContext->fits->isHist()) {
    Matrix mm = currentContext->binCursor();
    updateBin(mm);
  }
}

void Base::binFactorAboutCmd(const Vector& bb, const Vector& vv)
{
  currentContext->setBinFactor(bb);
  if (currentContext->fits && currentContext->fits->isHist()) {
    Matrix mm = currentContext->bin(vv);
    updateBin(mm);
  }
}

void Base::binFactorToCmd(const Vector& bb)
{
  currentContext->setBinToFactor(bb);
  if (currentContext->fits && currentContext->fits->isHist()) {
    Matrix mm = currentContext->binCursor();
    updateBin(mm);
  }
}

void Base::binFactorToAboutCmd(const Vector& bb, const Vector& vv)
{
  currentContext->setBinToFactor(bb);
  if (currentContext->fits && currentContext->fits->isHist()) {
    Matrix mm = currentContext->bin(vv);
    updateBin(mm);
  }
}

void Base::binFunctionCmd(FitsHist::Function func)
{
  currentContext->setBinFunction(func);
  if (currentContext->fits && currentContext->fits->isHist()) {
    Matrix mm = currentContext->binCursor();
    updateBin(mm);
  }
}

void Base::binFilterCmd(const char* filter)
{
  if (currentContext->fits)
    currentContext->fits->setBinFilter(filter);
  if (currentContext->fits && currentContext->fits->isHist()) {
    Matrix mm = currentContext->binCursor();
    updateBin(mm);
  }
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

void Base::clipMinMaxRescanCmd()
{
  currentContext->clearHist();
  currentContext->rescanClip();
  updateColorScale();
  update(BASE);
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
  updateMarkerCBs(&footprintMarkers);
}

// used for Backup
void Base::cropCmd(const Vector& aa, const Vector& bb, 
		   Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  // params in DATA coords 0-n
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
  updateMarkerCBs(&footprintMarkers);
}

void Base::cropCenterCmd(const Vector& vv, 
			 Coord::CoordSystem sys, Coord::SkyFrame sky, 
			 const Vector& wh, 
			 Coord::CoordSystem dsys, Coord::DistFormat dist)
{
  // params in DATA coords 0-n
  FitsImage* ptr = currentContext->fits;
  if (!ptr)
    return;

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
  updateMarkerCBs(&footprintMarkers);
}

void Base::cropBeginCmd(const Vector& vv)
{
  doAnts = 1;
  antsBegin = vv;
  antsEnd = vv;
}

void Base::cropMotionCmd(const Vector& vv)
{
  antsEnd = vv;
  update(PIXMAP);
}

void Base::cropEndCmd(const Vector& vv)
{
  doAnts = 0;
  antsEnd = vv;

  if (antsBegin[0]!=antsEnd[0] || antsBegin[1]!=antsEnd[1]) {
    Vector ss = mapToRef(antsBegin, Coord::CANVAS);
    Vector tt = mapToRef(antsEnd, Coord::CANVAS);

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
      if ((ptr1=isInFits(antsBegin,Coord::CANVAS,NULL)) ==
	  (ptr2=isInFits(antsEnd,Coord::CANVAS,NULL))) {

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
  updateMarkerCBs(&footprintMarkers);
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
  updateMarkerCBs(&footprintMarkers);
}

void Base::crop3dCmd(double z0, double z1, Coord::CoordSystem sys,
		     Coord::SkyFrame sky)
{
  // params in DATA coords 0-n
  // use first slice
  FitsImage* ptr = currentContext->fits;
  if (!ptr)
    return;

  // center in IMAGE
  Vector3d cc = Vector3d(ptr->center(),1) * Translate3d(-.5,-.5,-.5);
  Vector3d wcc = ptr->mapFromRef(cc,sys,sky);
  Vector3d min = ptr->mapToRef(Vector3d(wcc[0],wcc[1],z0),sys,sky);
  Vector3d max = ptr->mapToRef(Vector3d(wcc[0],wcc[1],z1),sys,sky);

  // extend to edge from center
  currentContext->setCrop3dParams(min[2]-.5,max[2]+.5);
  
  // set current slice if needed
  // setSlice() IMAGE (ranges 1-n)
  // context->slice() IMAGE (ranges 1-n)
  double sl = currentContext->slice(2)-.5;
  if (sl<min[2])
    setSlice(2,min[2]+.5);
  if (sl>max[2])
    setSlice(2,max[2]+.5);

  currentContext->setSecMode(FrScale::CROPSEC);
  
  currentContext->updateClip();
  updateColorScale();
  update(MATRIX);

  updateMarkerCBs(&userMarkers);
  updateMarkerCBs(&catalogMarkers);
  updateMarkerCBs(&footprintMarkers);
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

  FitsFile* ext = new FitsFitsMMap(fn, FitsFile::EXACTIMAGE);
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
  Tcl_AppendResult(interp, bgColourName, NULL);
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
    str << currentContext->fits->getColMinMax(col) << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  }
}

void Base::getBinColsDimCmd(const char* col)
{
  if (currentContext->fits && col && *col) {
    ostringstream str;
    str << currentContext->fits->getColDim(col) << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  }
  else
    Tcl_AppendResult(interp, "0 0", NULL);
}

void Base::getBinDepthCmd()
{
  printInteger(currentContext->binDepth());
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
    inverseScale = new IISInverseScale(count, ll, hh, currentContext->fits->iisz());
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
    scale = new IISInverseScale(count, ll, hh, currentContext->fits->iisz());
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
  Tcl_AppendResult(interp, currentContext->fvcontour().colorName(), NULL);
}

void Base::getContourDashCmd()
{
  if (currentContext->fvcontour().dash())
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
  str << currentContext->fvcontour().lineWidth() << ends;
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

// used for Backup 
void Base::getCropCmd(Coord::CoordSystem sys, Coord::SkyFrame sky,
		      Coord::SkyFormat format)
{
  FitsImage* ptr = currentContext->fits;
  if (!ptr)
    return;

  // params in DATA coords 0-n
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

  // params in DATA coords 0-n
  FitsBound* params = ptr->getDataParams(currentContext->secMode());
  Vector ll = Vector(params->xmin,params->ymin);
  Vector ur = Vector(params->xmax,params->ymax);
  Vector cc = (ur-ll)/2.+ll;
  Vector dd = ur-ll;

  printFromRef(ptr, cc*ptr->dataToRef, sys, sky, format);
  Tcl_AppendResult(interp, " ", NULL);
  printLenFromRef(ptr, dd*ptr->dataToRef, dcoord, dist);
}

void Base::getCrop3dCmd(Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  // use first slice
  FitsImage* ptr = currentContext->fits;
  if (!ptr)
    return;

  // params in DATA coords 0-n
  FitsZBound* zparams =
    currentContext->getDataParams(currentContext->secMode());

  // need to move from edge to center of pixel
  Vector3d rmin = Vector3d(ptr->center(),zparams->zmin) * Translate3d(.5,.5,.5);
  // need to move from edge to center of pixel
  Vector3d rmax =
    Vector3d(ptr->center(),zparams->zmax) * Translate3d(-.5,-.5,-.5);
  Vector3d min = ptr->mapFromRef(rmin,sys,sky);
  Vector3d max = ptr->mapFromRef(rmax,sys,sky);

  ostringstream str;
  str << min[2] << ' ' << max[2] << ends;
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
    switch (dist) {
    case Coord::DEGREE:
      str << setprecision(precLenDeg_);
      break;
    case Coord::ARCMIN:
      str << setprecision(precArcmin_) << fixed;
      ss *= 60;
      break;
    case Coord::ARCSEC:
      str << setprecision(precArcsec_) << fixed;
      ss *= 60*60;
      break;
    }
    str << ss << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  }
  else
    Tcl_AppendResult(interp, "0 0", NULL);
}

void Base::getFitsSliceCmd(int ii)
{
  printInteger(currentContext->slice(ii));
}

void Base::getFitsSliceFromImageCmd(Coord::CoordSystem sys)
{
  getFitsSliceFromImageCmd(currentContext->slice(2), sys);
}

void Base::getFitsSliceFromImageCmd(int ss, Coord::CoordSystem sys)
{
  if (currentContext->cfits) {
    FitsImage* ptr = currentContext->fits;
    Vector3d dd = Vector3d(ptr->center(),ss) * Translate3d(-.5,-.5,-.5);
    Vector3d out = ptr->mapFromRef(dd,sys,Coord::FK5);

    // set precision high enough for plot in GHz freq
    ostringstream str;
    str << setprecision(18) << out[2] << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  }
  else
    Tcl_AppendResult(interp, "1", NULL);
}

void Base::getFitsSliceToImageCmd(double dd, Coord::CoordSystem sys)
{
  if (currentContext->cfits) {
    FitsImage* ptr = currentContext->fits;
    Vector3d cc = Vector3d(ptr->center(),1) * Translate3d(-.5, -.5, -.5);
    Vector3d wcc = ptr->mapFromRef(cc,sys,Coord::FK5);
    Vector3d oo = ptr->mapToRef(Vector3d(wcc[0],wcc[1],dd),sys,Coord::FK5);
    Vector3d out = oo * Translate3d(.5, .5, .5);
    printInteger(out[2]);
  }
  else
    Tcl_AppendResult(interp, "0", NULL);
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

void Base::getHighliteColorCmd()
{
  Tcl_AppendResult(interp, highliteColourName, NULL);
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

void Base::getMaskCountCmd()
{
  Tcl_AppendResult(interp, "0", NULL);
}

void Base::getMaskColorCmd()
{
  Tcl_AppendResult(interp, "red", NULL);
}

void Base::getMaskMarkCmd()
{
  Tcl_AppendResult(interp, "nonzero", NULL);
}

void Base::getMaskRangeCmd()
{
  Tcl_AppendResult(interp, "0 0", NULL);
}

void Base::getMaskTransparencyCmd()
{
  printDouble(0);
}

void Base::getMaskBlendCmd()
{
  Tcl_AppendResult(interp, "transparent", NULL);
}

void Base::getMaskSystemCmd()
{
  Tcl_AppendResult(interp, "physical", NULL);
}

void Base::getMinMaxCmd()
{
  ostringstream str;
  str << currentContext->getMinMax() << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getNANColorCmd()
{
  Tcl_AppendResult(interp, nanColourName, NULL);
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
      Vector pt = ((ll+Vector(ii,jj)) * Translate(.5, .5)).round();
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
      Vector pt = ((ll+Vector(ii,jj)) * Translate(.5, .5)).round();
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
  ostringstream str;
  str << setprecision(precAngle_) << radToDeg(rotation) << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
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
  ostringstream str;
  str << setprecision(precAngle_) << radToDeg(currentContext->smoothAngle())
      << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
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
		   coord.skyFrameStr(wcsSkyFrame_), " ",
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
		   coord.skyFrameStr(wcsSkyFrame_), NULL);
}

void Base::getWCSNameCmd(Coord::CoordSystem sys)
{
  if (currentContext->cfits && currentContext->cfits->hasWCS(sys)) {
    char* name = (char*)currentContext->cfits->getWCSDomain(sys);
    if (name) {
      Tcl_AppendResult(interp, name, NULL);
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

void Base::hasBgColorCmd()
{
  if (useBgColor)
    Tcl_AppendResult(interp, "1", NULL);
  else
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

void Base::hasImageCmd()
{
  Tcl_AppendResult(interp, "1", NULL);
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
  Tcl_AppendResult(interp, (currentContext->cfits && currentContext->cfits->wcsAltHeader() ? "1" : "0"), NULL);
}

void Base::hasWCSCelCmd(Coord::CoordSystem sys)
{
  Tcl_AppendResult(interp, (hasWCSCel(sys) ? "1" : "0"), NULL);
}

void Base::hasWCSEquCmd(Coord::CoordSystem sys)
{
  Tcl_AppendResult(interp, (hasWCSEqu(sys) ? "1" : "0"), NULL);
}

void Base::hasWCSLinearCmd(Coord::CoordSystem sys)
{
  Tcl_AppendResult(interp, (hasWCSLinear(sys) ? "1" : "0"), NULL);
}

void Base::hasWCS3DCmd(Coord::CoordSystem sys)
{
  Tcl_AppendResult(interp, (hasWCS3D(sys) ? "1" : "0"), NULL);
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

void Base::highliteColorCmd(const char* color)
{
  if (highliteColourName)
    delete [] highliteColourName;
  highliteColourName = dupstr(color);

  update(BASE);
}

void Base::magnifierCmd(int ss)
{
  useMagnifier = ss;
  updateMagnifier();
}

void Base::magnifierCmd(char* nm, int ww, int hh)
{
  strcpy(magnifierName,nm);
  magnifierWidth = ww;
  magnifierHeight = hh;

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

void Base::nanColorCmd(const char* color)
{
  if (nanColourName)
    delete [] nanColourName;
  nanColourName = dupstr(color);

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

void Base::precCmd(int linear, int deg, int hms, int dms, 
		   int lenlinear, int lendeg, int arcmin, int arcsec,
		   int angle)
{
  precLinear_ = linear;
  precDeg_ = deg;
  precHMS_ = hms;
  precDMS_ = dms;

  precLenLinear_ = lenlinear;
  precLenDeg_ = lendeg;
  precArcmin_ = arcmin;
  precArcsec_ = arcsec;

  precAngle_ = angle;
}

// backward compatibility
void Base::precCmd(int linear, int deg, int hms, int dms, 
		   int arcmin, int arcsec)
{
  precLinear_ = linear;
  precDeg_ = deg;
  precHMS_ = hms;
  precDMS_ = dms;

  precArcmin_ = arcmin;
  precArcsec_ = arcsec;
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

void Base::rotateBeginCmd()
{
  // save the current rotation
  rotateRotation = rotation;
}

void Base::rotateMotionCmd(double angle)
{
  rotation = rotateRotation + angle;
  update(MATRIX);
}

void Base::rotateEndCmd()
{
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

void Base::sliceCmd(int ii, int ss)
{
  // IMAGE (ranges 1-n)
  setSlice(ii,ss);
}

void Base::sliceCmd(double dd, Coord::CoordSystem sys)
{
  if (!currentContext->fits)
    return;
  
  FitsImage* ptr = currentContext->fits;
  Vector3d cc = Vector3d(ptr->center(),1) * Translate3d(-.5, -.5, -.5);
  Vector3d wcc = ptr->mapFromRef(cc,sys,Coord::FK5);
  Vector3d oo = ptr->mapToRef(Vector3d(wcc[0],wcc[1],dd),sys,Coord::FK5);
  Vector3d out = oo * Translate3d(.5, .5, .5);
  
  // IMAGE (ranges 1-n)
  // be sure to round properly
  setSlice(2,int(out[2]+.5));
}

void Base::smoothCmd(int ff, int rr, int rm, double ss, double sm, double aa)
{
  currentContext->setSmooth(1, (Context::SmoothFunction)ff, rr, rm, ss, sm, aa);
  currentContext->analysis();
  updateColorScale();
  // for 3d, rebuffer
  update(MATRIX);
}

// backward compatibility backup
void Base::smoothCmd(int ff, int rr)
{
  currentContext->setSmooth(1, (Context::SmoothFunction)ff, rr);
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
    // schedule redraw and process idletasks events
    updateNow(MATRIX);
    syncUpdate =0;
  }
  else
    // schedule redraw only
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
      // schedule redraw and process idletasks events
      updateNow(BASE, rr);
      syncUpdate =0;
    }
    else
      // schedule redraw only
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
  wcsSkyFrame_ = sky;
  wcsSkyFormat_ = format;
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
  wcsSkyFrame_ = sky;

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
