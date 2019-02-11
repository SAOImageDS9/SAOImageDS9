// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "grid25d.h"
#include "context.h"
#include "frame3dbase.h"
#include "fitsimage.h"
#include "wcsast.h"

extern Grid25dBase* astGrid25dPtr;

Grid25d::Grid25d(Widget* p, Coord::CoordSystem sys, Coord::SkyFrame sky, 
		 Coord::SkyFormat format, GridType t, 
		 const char* o, const char* v) 
  : Grid(sys, sky, format, t, v), Grid25dBase(p,o)
{}

Grid25d::~Grid25d()
{}

void Grid25d::doit(RenderMode rm)
{
  Frame3dBase* pp = (Frame3dBase*)parent_;
  astGrid25dPtr =NULL;

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

  // map from Ref to Image
  AstFrameSet* frameSet = astFrameSet(astFrame(2,"Domain=Ref"),"");
  matrixMap(frameSet,fits->refToImage,"Domain=IMAGE");

  switch (system_) {
  case Coord::IMAGE:
    break;
  case Coord::PHYSICAL:
    matrixMap(frameSet,fits->imageToPhysical,"Domain=PHYSICAL");
    break;
  case Coord::AMPLIFIER:
    matrixMap(frameSet,fits->imageToAmplifier,"Domain=AMPLIFIER");
    break;
  case Coord::DETECTOR:
    matrixMap(frameSet,fits->imageToDetector,"Domain=DETECTOR");
    break;
  default:
    {
      // ast_ maybe NULL
      if (!fits->ast_) {
	astEnd; // now, clean up memory
	return;
      }

      // set desired skyformat
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
      case 2:
	break;
      case 3:
      case 4:
	{
	  int pick[2] = {1, 2};
	  AstMapping* map =NULL;
	  AstFrame* perm =NULL;

	  astInvert(ast);
	  perm = (AstFrame*)astPickAxes(ast, 2, pick, &map);
	  astAddFrame(ast, AST__CURRENT, map, perm);
	  astInvert(ast);

	  perm = (AstFrame*)astPickAxes(ast, 2, pick, &map);
	  astAddFrame(ast, AST__CURRENT, map, perm);
	}
	break;
      }
      // add wcs to frameset
      // this will link frameset to wcs with unitMap
      int id = astGetI(ast,"Current");
      int nf = astGetI(frameSet,"NFrame");
      astInvert(ast);
      astAddFrame(frameSet, AST__CURRENT, astUnitMap(2,""), ast);
      astSetI(frameSet,"Current",id+nf);
    }
    break;
  }

  astSet(frameSet,"Title=%s", " ");

  // create astPlot
  float gbox[4];
  double pbox[4];

  FitsBound* params = fits->getDataParams(context->secMode());
  Vector ll = Vector(params->xmin,params->ymin);
  Vector ur = Vector(params->xmax,params->ymax);
  //  Vector gll = ll * fits->dataToWidget;
  //  Vector gur = ur * fits->dataToWidget;

  pbox[0] = gbox[0] = ll[0];
  pbox[1] = gbox[1] = ll[1];
  pbox[2] = gbox[2] = ur[0];
  pbox[3] = gbox[3] = ur[1];

  // and now create astGrid
  astGrid25dPtr = this;

  AstPlot* plot = astPlot(frameSet, gbox, pbox, option_);
  astGrid(plot);

  astEnd; // now, clean up memory
  astGrid25dPtr =NULL;
}

void Grid25d::matrixMap(void* frameSet, Matrix& mx, const char* str)
{
  double ss[] = {mx.matrix(0,0),mx.matrix(1,0),
		 mx.matrix(0,1),mx.matrix(1,1)};
  double tt[] = {mx.matrix(2,0),mx.matrix(2,1)};

  AstMatrixMap* mm = astMatrixMap(2, 2, 0, ss, "");
  AstShiftMap* sm = astShiftMap(2, tt, "");
  AstCmpMap* cmp = astCmpMap(mm, sm, 1, "");

  astAddFrame((AstFrameSet*)frameSet, AST__CURRENT, cmp, astFrame(2, str));
}
