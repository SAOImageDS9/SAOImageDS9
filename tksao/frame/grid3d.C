// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "grid3d.h"
#include "context.h"
#include "frame3dbase.h"
#include "fitsimage.h"

extern "C" {
  #include "ast.h"
}

extern Grid3dBase* astGrid3dPtr;

Grid3d::Grid3d(Widget* p, Coord::CoordSystem sys, Coord::SkyFrame sky, 
	       Coord::SkyFormat format, GridType t, 
	       const char* o, const char* v) 
  : Grid(sys, sky, format, t, v), Grid3dBase(p,o)
{}

Grid3d::~Grid3d()
{}

#ifndef NEWWCS
static FitsImage* foobar;

void bar(AstMapping* that, int npoint, int ncoord_in, const double* ptr_in[],
	 int forward, int ncoord_out, double* ptr_out[])
{
  WCSx** wcsx = foobar->wcsx();

  if (forward) {
    for (int ii=0; ii<npoint; ii++)
      (*ptr_out)[ii] = (.5 + (*ptr_in)[ii] - wcsx[0]->crpix) *
	wcsx[0]->cd + wcsx[0]->crval;
  }
  else {
    for (int ii=0; ii<npoint; ii++)
      (*ptr_out)[ii] = ((*ptr_in)[ii] - wcsx[0]->crval) /
	wcsx[0]->cd + wcsx[0]->crpix -.5;
  }
}

int Grid3d::doit(RenderMode rm)
{
  Frame3dBase* pp = (Frame3dBase*)parent_;

  mx_ = pp->refToWidget3d;
  rx_ =
    Matrix3d(pp->wcsOrientationMatrix) *
    Matrix3d(pp->orientationMatrix) *
    RotateZ3d(-pp->wcsRotation) *
    RotateZ3d(-pp->rotation) *
    RotateY3d(pp->az_) * 
    RotateX3d(pp->el_);

  matrix_ = pp->widgetToCanvas;
  pixmap_ = pp->pixmap;
  gridGC_ = pp->gridGC_;
  renderMode_ = rm;

  Context* context = pp->keyContext;
  FitsImage* fits = context->fits;
  if (!fits)
    return 1;

  foobar = fits;

  astClearStatus; // just to make sure
  astBegin; // start memory management

  AstFrameSet* frameSet = NULL;
  AstPlot3D* plot = NULL;
  FitsBound* params = fits->getDataParams(context->secMode());
  FitsZBound* zparams = context->getDataParams(context->secMode());

  switch (system_) {
  case Coord::IMAGE:
    frameSet = (AstFrameSet*)matrixMap(fits->refToImage,"Domain=IMAGE");
    break;
  case Coord::PHYSICAL:
    frameSet = (AstFrameSet*)matrixMap(fits->refToPhysical,"Domain=PHYSICAL");
    break;
  case Coord::AMPLIFIER:
    frameSet = (AstFrameSet*)matrixMap(fits->refToAmplifier,"Domain=AMPLIFIER");
    break;
  case Coord::DETECTOR:
    frameSet = (AstFrameSet*)matrixMap(fits->refToDetector,"Domain=DETECTOR");
    break;
  default:
    {
      // imageToData frame/map
      double ss[] = {-.5, -.5};
      AstShiftMap *sm = astShiftMap(2, ss, " ");
      AstFrame *df = astFrame(2, "Domain=DATA");

      // Get 2D SkyFrame
      AstFrameSet* ast = (AstFrameSet*)astCopy(fits->getAST(system_));
      if (fits->wcsIsASkyFrame(ast))
      	fits->setWCSSkyFrame(ast, sky_);

      // Record the index of the current Frame
      int isky = astGetI(ast, "Current");

      // Add the new DATA Frame into the FrameSet, using the ShiftMap to
      // connect it to the existing IMAGE Frame.
      astAddFrame(ast, AST__BASE, sm, df);

      // The above call to astAddFrame will have changed the current Frame
      // in the FrameSet to be the new DATA Frame. First record the index of
      // the DATA Frame, and then re-instate the original current Frame (i.e.
      // the SKY Frame).
      int idata =  astGetI(ast, "Current");
      astSetI(ast, "Current", isky);

      // make the DATA Frame the new base Frame 
      astSetI(ast, "Base", idata);

      // Create two 1D Frames and a 1D Mapping describing the third axis
      AstFrame* zbase = astFrame(1,"");
      AstFrame* zcurr = astFrame(1,"");
      AstMapping* zmap;
      if (fits->hasWCS3D(system_)) {
	astIntraReg("foo",1,1,bar,0,"testing","me","you");
	if (!(zmap = (AstMapping*)astIntraMap("foo",1,1,"")))
	  return 0;
      }
      else
	zmap = (AstMapping*)astUnitMap(1,"");

      // Use astGetFrame and astGetMapping to get the base and current
      // Frames from the 2D FrameSet, and the base->current Mapping.
      AstFrame* wcsbase = (AstFrame*)astGetFrame(ast,AST__BASE);
      AstFrame* wcscurr = (AstFrame*)astGetFrame(ast,AST__CURRENT);
      AstMapping* wcsmap = (AstMapping*)astGetMapping(ast,AST__BASE,AST__CURRENT);
      // Combine the 2D and 1D base Frames into a 3D CmpFrame
      // Likewise, combine the 2D and 1D current Frames into a 3D CmpFrame
      AstCmpFrame* cmpwcsbase = astCmpFrame(wcsbase,zbase,"");
      AstCmpFrame* cmpwcscurr = astCmpFrame(wcscurr,zcurr,"");

      // Combine the 2D and 1D Mappings into a 3D CmpMap
      AstCmpMap* cmpwcsmap = astCmpMap(wcsmap,zmap,0,"");

      // Construct the 3D FrameSet from the new 3D Frames and Mapping
      frameSet = astFrameSet(cmpwcsbase,"");
      astAddFrame(frameSet, AST__CURRENT, cmpwcsmap, cmpwcscurr);
    }
  }

  if (!frameSet)
    return 0;

  astSet(frameSet,"Title=%s", " ");

  // create astPlot
  float gbox[6];
  double pbox[6];

  // params is a BBOX in DATA coords 0-n
  Vector3d ll = Vector3d(params->xmin,params->ymin,zparams->zmin);
  Vector3d ur = Vector3d(params->xmax,params->ymax,zparams->zmax);

  pbox[0] = gbox[0] = ll[0];
  pbox[1] = gbox[1] = ll[1];
  pbox[2] = gbox[2] = ll[2];
  pbox[3] = gbox[3] = ur[0];
  pbox[4] = gbox[4] = ur[1];
  pbox[5] = gbox[5] = ur[2];

  // and now create astGrid
  astGrid3dPtr = this;
  renderMode_ = rm;

  plot = astPlot3D(frameSet, gbox, pbox, option_);
  //  astShow(plot);
  astGrid(plot);

  astEnd; // now, clean up memory
  astGrid3dPtr =NULL;
  return 1;
}

void* Grid3d::matrixMap(Matrix& mx, const char* str)
{
  double ss[] = {mx.matrix(0,0),mx.matrix(1,0),
		 mx.matrix(0,1),mx.matrix(1,1)};
  double tt[] = {mx.matrix(2,0),mx.matrix(2,1)};

  AstMatrixMap* mm;
  if (!(mm= astMatrixMap(2,2,0,ss,"")))
    return NULL;

  AstShiftMap* sm;
  if (!(sm = astShiftMap(2,tt,"")))
    return NULL;

  AstCmpMap* mapxy;
  if (!(mapxy = astCmpMap(mm,sm,1,"")))
    return NULL;

  double uu =.5;
  AstShiftMap* mapz = astShiftMap(1,&uu,"");

  AstCmpMap* cmp = astCmpMap(mapxy,mapz,0,"");

  AstFrame* in = astFrame(3,"Domain=REF");
  AstFrame* out = astFrame(3,str);

  AstFrameSet* frameSet = astFrameSet(in,"");
  astAddFrame(frameSet,AST__CURRENT,cmp,out);

  return frameSet;
}

#else

int Grid3d::doit(RenderMode rm)
{
  /*
  Frame3dBase* pp = (Frame3dBase*)parent_;

  mx_ = pp->refToWidget3d;
  rx_ =
    Matrix3d(pp->wcsOrientationMatrix) *
    Matrix3d(pp->orientationMatrix) *
    RotateZ3d(-pp->wcsRotation) *
    RotateZ3d(-pp->rotation) *
    RotateY3d(pp->az_) * 
    RotateX3d(pp->el_);

  matrix_ = pp->widgetToCanvas;
  pixmap_ = pp->pixmap;
  gridGC_ = pp->gridGC_;
  renderMode_ = rm;

  Context* context = pp->keyContext;
  FitsImage* fits = context->fits;

  if (!fits)
    return 1;

  astClearStatus; // just to make sure
  astBegin; // start memory management

  AstFrameSet* frameSet = NULL;
  AstPlot3D* plot = NULL;
  FitsBound* params = fits->getDataParams(context->secMode());
  FitsZBound* zparams = context->getDataParams(context->secMode());

  switch (system_) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::AMPLIFIER:
  case Coord::DETECTOR:
    frameSet = (AstFrameSet*)matrixMap(fits->refToImage3d,"Domain=IMAGE");
    break;
  default:
    {
      AstFrameSet* ast = (AstFrameSet*)astCopy(fits->getAST(system_));

      fits->setWCSSystem(ast, system_);
      fits->setWCSSkyFrame(ast, sky_);
      
      int naxes = astGetI(ast,"Naxes");
      switch (naxes) {
      case 1:
      case 2:
	// error
	break;
      case 3:
	break;
      case 4:
	{
	  int pick[3] = {1, 2, 3};
	  AstMapping* map =NULL;
	  AstFrame* perm =NULL;
	  
	  astInvert(ast);
	  perm = (AstFrame*)astPickAxes(ast, 3, pick, &map);
	  astAddFrame(ast, AST__CURRENT, map, perm);
	  astInvert(ast);
	  
	  perm = (AstFrame*)astPickAxes(ast, 3, pick, &map);
	  astAddFrame(ast, AST__CURRENT, map, perm);
	}
	break;
      }
      
      // add wcs to frameset
      // this will link frameset to wcs with unitMap
      astInvert(ast);
      astAddFrame(frameSet, AST__CURRENT, astUnitMap(2,""), ast);
      astSetI(frameSet,"Current",astGetI(frameSet,"nframe"));
    }
  }

  if (!frameSet)
    return 0;

  astSet(frameSet,"Title=%s", " ");

  // create astPlot
  float gbox[6];
  double pbox[6];

  // params is a BBOX in DATA coords 0-n
  Vector3d ll = Vector3d(params->xmin,params->ymin,zparams->zmin);
  Vector3d ur = Vector3d(params->xmax,params->ymax,zparams->zmax);

  pbox[0] = gbox[0] = ll[0];
  pbox[1] = gbox[1] = ll[1];
  pbox[2] = gbox[2] = ll[2];
  pbox[3] = gbox[3] = ur[0];
  pbox[4] = gbox[4] = ur[1];
  pbox[5] = gbox[5] = ur[2];

  // and now create astGrid
  astGrid3dPtr = this;
  renderMode_ = rm;

  plot = astPlot3D(frameSet, gbox, pbox, option_);
  //  astShow(plot);
  astGrid(plot);

  astEnd; // now, clean up memory
  astGrid3dPtr =NULL;
  return 1;
  */
}

void* Grid3d::matrixMap(Matrix3d& mx, const char* str)
{
  /*
  double ss[] = {mx.matrix(0,0),mx.matrix(1,0),
		 mx.matrix(0,1),mx.matrix(1,1)};
  AstMatrixMap* mm;
  if (!(mm= astMatrixMap(2,2,0,ss,"")))
    return NULL;

  double tt[] = {mx.matrix(2,0),mx.matrix(2,1)};
  AstShiftMap* sm;
  if (!(sm = astShiftMap(2,tt,"")))
    return NULL;

  AstCmpMap* mapxy;
  if (!(mapxy = astCmpMap(mm,sm,1,"")))
    return NULL;

  AstFrame* in = astFrame(3,"Domain=REF");
  AstFrame* out = astFrame(3,str);

  double uu =.5;
  AstShiftMap* mapz = astShiftMap(1,&uu,"");
  AstCmpMap* cmap = astCmpMap(mapxy,mapz,0,"");

  AstFrameSet* frameSet = astFrameSet(in,"");
  astAddFrame(frameSet,AST__CURRENT,cmap,out);

  return frameSet;
  */
}

#endif

