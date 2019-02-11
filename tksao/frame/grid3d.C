// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "grid3d.h"
#include "context.h"
#include "frame3dbase.h"
#include "fitsimage.h"
#include "wcsast.h"

extern Grid3dBase* astGrid3dPtr;

Grid3d::Grid3d(Widget* p, Coord::CoordSystem sys, Coord::SkyFrame sky, 
	       Coord::SkyFormat format, GridType t, 
	       const char* o, const char* v) 
  : Grid(sys, sky, format, t, v), Grid3dBase(p,o)
{}

Grid3d::~Grid3d()
{}

void Grid3d::doit(RenderMode rm)
{
  Frame3dBase* pp = (Frame3dBase*)parent_;
  astGrid3dPtr =NULL;

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
    return;

  astClearStatus; // just to make sure
  astBegin; // start memory management

  AstFrameSet* frameSet = astFrameSet(astFrame(3,"Domain=Ref"),"");
  matrixMap(frameSet,fits->refToImage3d,"Domain=IMAGE");

  switch (system_) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::AMPLIFIER:
  case Coord::DETECTOR:
    break;
  default:
    {
      // ast_ maybe NULL
      if (!fits->ast_) {
	astEnd; // now, clean up memory
	return;
      }

      if (!fits->wcsInv()) {
	astEnd; // now, clean up memory
	return;
      }

      AstFrameSet* ast = (AstFrameSet*)astCopy(fits->ast_);
      wcsSystem(ast,system_);
      if (fits->hasWCSEqu(system_))
	wcsSkyFrame(ast,sky_);
      
      int naxes = astGetI(ast,"Naxes");
      switch (naxes) {
      case 1:
	{
	  AstFrame* zbase = astFrame(2,"");
	  AstFrame* zcurr = astFrame(2,"");
	  AstMapping* zmap = (AstMapping*)astUnitMap(2,"");

	  AstFrame* wcsbase = (AstFrame*)astGetFrame(ast,AST__BASE);
	  AstFrame* wcscurr = (AstFrame*)astGetFrame(ast,AST__CURRENT);
	  AstMapping* wcsmap = (AstMapping*)astGetMapping(ast,AST__BASE,AST__CURRENT);

	  AstCmpFrame* cmpwcsbase = astCmpFrame(wcsbase,zbase,"");
	  AstCmpFrame* cmpwcscurr = astCmpFrame(wcscurr,zcurr,"");
	  AstCmpMap* cmpwcsmap = astCmpMap(wcsmap,zmap,0,"");

	  ast = astFrameSet(cmpwcsbase,"");
	  astAddFrame(ast, AST__CURRENT, cmpwcsmap, cmpwcscurr);
	}
	break;
      case 2:
	{
	  AstFrame* zbase = astFrame(1,"");
	  AstFrame* zcurr = astFrame(1,"");
	  AstMapping* zmap = (AstMapping*)astUnitMap(1,"");

	  AstFrame* wcsbase = (AstFrame*)astGetFrame(ast,AST__BASE);
	  AstFrame* wcscurr = (AstFrame*)astGetFrame(ast,AST__CURRENT);
	  AstMapping* wcsmap = (AstMapping*)astGetMapping(ast,AST__BASE,AST__CURRENT);

	  AstCmpFrame* cmpwcsbase = astCmpFrame(wcsbase,zbase,"");
	  AstCmpFrame* cmpwcscurr = astCmpFrame(wcscurr,zcurr,"");
	  AstCmpMap* cmpwcsmap = astCmpMap(wcsmap,zmap,0,"");

	  ast = astFrameSet(cmpwcsbase,"");
	  astAddFrame(ast, AST__CURRENT, cmpwcsmap, cmpwcscurr);
	}
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
      int id = astGetI(ast,"Current");
      int nf = astGetI(frameSet,"NFrame");
      astInvert(ast);
      astAddFrame(frameSet, AST__CURRENT, astUnitMap(3,""), ast);
      astSetI(frameSet,"Current",id+nf);
    }
  }

  astSet(frameSet,"Title=%s", " ");

  // create astPlot
  float gbox[6];
  double pbox[6];

  // params is a BBOX in DATA coords 0-n
  FitsBound* params = fits->getDataParams(context->secMode());
  FitsZBound* zparams = context->getDataParams(context->secMode());
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

  AstPlot3D* plot = astPlot3D(frameSet, gbox, pbox, option_);
  astGrid(plot);

  astEnd; // now, clean up memory
  astGrid3dPtr =NULL;
}

void Grid3d::matrixMap(void* frameSet, Matrix3d& mx, const char* str)
{
  double ss[] = {mx.matrix(0,0),mx.matrix(1,0),mx.matrix(2,0),
		 mx.matrix(0,1),mx.matrix(1,1),mx.matrix(2,1),
		 mx.matrix(0,2),mx.matrix(1,2),mx.matrix(2,2)};
  double tt[] = {mx.matrix(3,0),mx.matrix(3,1),mx.matrix(3,2)};

  AstMatrixMap* mm = astMatrixMap(3,3,0,ss,"");
  AstShiftMap* sm = astShiftMap(3,tt,"");
  AstCmpMap* cmp = astCmpMap(mm,sm,1,"");

  astAddFrame((AstFrameSet*)frameSet, AST__CURRENT, cmp, astFrame(3, str));
}
