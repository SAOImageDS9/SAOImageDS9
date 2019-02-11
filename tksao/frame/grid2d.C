// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "grid2d.h"
#include "context.h"
#include "framebase.h"
#include "fitsimage.h"
#include "wcsast.h"

extern Grid2dBase* astGrid2dPtr;

Grid2d::Grid2d(Widget* p, Coord::CoordSystem sys, Coord::SkyFrame sky, 
	       Coord::SkyFormat format, GridType t, 
	       const char* o, const char* v) 
  : Grid(sys, sky, format, t, v), Grid2dBase(p,o)
{}

Grid2d::~Grid2d()
{}

void Grid2d::doit(RenderMode rm)
{
  FrameBase* pp = (FrameBase*)parent_;
  astGrid2dPtr =NULL;

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

  // map from Widget to Image
  AstFrameSet* frameSet = astFrameSet(astFrame(2,"Domain=WIDGET"),"");
  matrixMap(frameSet,fits->widgetToImage,"Domain=IMAGE");

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

  switch (type_) {
  case ANALYSIS:
    {
      gbox[0] = pbox[0] = 0;
      gbox[1] = pbox[1] = 0;
      gbox[2] = pbox[2] = pp->options->width-1;
      gbox[3] = pbox[3] = pp->options->height-1;
    }
    break;
  case PUBLICATION:
    {
      Matrix mm = fits->imageToWidget;
      BBox b = pp->imageBBox(pp->context->secMode());

      Vector ll = b.ll   * mm;
      Vector lr = b.lr() * mm;
      Vector ur = b.ur   * mm;
      Vector ul = b.ul() * mm;
      
      BBox bb(ll,ll);
      bb.bound(lr);
      bb.bound(ur);
      bb.bound(ul);

      gbox[0] = pbox[0] = bb.ll[0];
      gbox[1] = pbox[1] = bb.ll[1];
      gbox[2] = pbox[2] = bb.ur[0];
      gbox[3] = pbox[3] = bb.ur[1];
    }
    break;
  }

  // and now create astGrid
  astGrid2dPtr = this;

  AstPlot* plot = astPlot(frameSet, gbox, pbox, option_);
  astGrid(plot);

  astEnd; // now, clean up memory
  astGrid2dPtr =NULL;
}

void Grid2d::matrixMap(void* frameSet, Matrix& mx, const char* str)
{
  double ss[] = {mx.matrix(0,0),mx.matrix(1,0),
		 mx.matrix(0,1),mx.matrix(1,1)};
  double tt[] = {mx.matrix(2,0),mx.matrix(2,1)};

  AstMatrixMap* mm = astMatrixMap(2, 2, 0, ss, "");
  AstShiftMap* sm = astShiftMap(2, tt, "");
  AstCmpMap* cmp = astCmpMap(mm, sm, 1, "");

  astAddFrame((AstFrameSet*)frameSet, AST__CURRENT, cmp, astFrame(2, str));
}
