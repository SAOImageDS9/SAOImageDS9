// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "grid2d.h"
#include "context.h"
#include "framebase.h"
#include "fitsimage.h"

extern "C" {
  #include "ast.h"
}

extern Grid2dBase* astGrid2dPtr;

Grid2d::Grid2d(Widget* p, Coord::CoordSystem sys, Coord::SkyFrame sky, 
	       Coord::SkyFormat format, GridType t, 
	       const char* o, const char* v) 
  : Grid(sys, sky, format, t, v), Grid2dBase(p,o)
{}

Grid2d::~Grid2d()
{}

int Grid2d::doit(RenderMode rm)
{
  FrameBase* pp = (FrameBase*)parent_;

  matrix_ = pp->widgetToCanvas;
  pixmap_ = pp->pixmap;
  gridGC_ = pp->gridGC_;
  renderMode_ = rm;

  Context* context = pp->keyContext;
  FitsImage* fits = context->fits;

  if (!fits)
    return 1;

  //  int width = fits->width();
  //  int height = fits->height();

  astClearStatus; // just to make sure
  astBegin; // start memory management

  AstFrameSet* frameSet = NULL;
  AstPlot* plot = NULL;

  if (!(frameSet = astFrameSet(astFrame(2,"Domain=WIDGET"),""))) {
    astEnd;
    return 0;
  }

  // map from Widget to Image
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
#ifndef NEWWCS
      AstFrameSet* ast = (AstFrameSet*)astCopy(fits->getAST(system_));

      // set desired skyformat
      if (fits->astWCSIsASkyFrame(ast))
	fits->setAstWCSSkyFrame(ast, sky_);

      // add wcs to frameset
      // this will link frame 2 of frameset to frame 3 wcs with unitMap
      // set the current of frameset to last
      astInvert(ast);
      astAddFrame(frameSet,2,astUnitMap(2,""),ast);
      astSetI(frameSet,"current",astGetI(frameSet,"nframe"));
#else
      astClearStatus; // just to make sure
      astBegin; // start memory management

      AstFrameSet* ast = (AstFrameSet*)astCopy(fits->getAST(system_));

      fits->setAstWCSSystem(ast, system_);
      fits->setAstWCSSkyFrame(ast, sky_);
      
      int offset =0;
      int naxes = astGetI(ast,"Naxes");
      switch (naxes) {
      case 1:
      case 2:
	break;
      case 3:
      case 4:
	{
	  int pick[2] = {1, 2};
	  astInvert(ast);
	  AstMapping* mapb =NULL;
	  AstFrame* permb = (AstFrame*)astPickAxes(ast, 2, pick, &mapb);
	  astAddFrame(ast, AST__CURRENT, mapb, permb);
	  astInvert(ast);
	  
	  AstMapping** mapc =NULL;
	  AstFrame* permc = (AstFrame*)astPickAxes(ast, 2, pick, &mapc);
	  astAddFrame(ast, AST__CURRENT, mapc, permc);
	  
	  if (0) {
	  int isky = astGetI(ast, "Current");
	  int pickb[4] = {1, 2, 0, 0};
	  AstMapping* mapb;
	  AstFrame* foo = astFrame(2,"Domain=DATA");
	  astPickAxes(foo, naxes, pickb, &mapb);
	  astInvert(mapb);
	  astAddFrame(ast, AST__BASE, mapb, foo);
	  int idata =  astGetI(ast, "Current");
	  astSetI(ast, "Current", isky);
	  astSetI(ast, "Base", idata);
	  offset =1;
	  }
	}
	break;
      }

      // add wcs to frameset
      // this will link frameset to wcs with unitMap
      astInvert(ast);
      astAddFrame(frameSet, AST__CURRENT, astUnitMap(2,""), ast);
      astSetI(frameSet,"Current",astGetI(frameSet,"nframe")-offset);

      astEnd; // now, clean up memory
#endif
    }
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

  plot = astPlot(frameSet, gbox, pbox, option_);
  astGrid(plot);

  astEnd; // now, clean up memory
  astGrid2dPtr =NULL;
  return 1;
}

int Grid2d::matrixMap(void* fs, Matrix& mx, const char* str)
{
  AstFrameSet* frameSet = (AstFrameSet*)fs;

  double ss[] = {mx.matrix(0,0),mx.matrix(1,0),
		 mx.matrix(0,1),mx.matrix(1,1)};
  double tt[] = {mx.matrix(2,0),mx.matrix(2,1)};

  AstMatrixMap* mm;
  if (!(mm= astMatrixMap(2, 2, 0, ss, "")))
    return 0;

  AstShiftMap* sm;
  if (!(sm = astShiftMap(2, tt, "")))
    return 0;

  AstCmpMap* cmp;
  if (!(cmp = astCmpMap(mm, sm, 1, "")))
    return 0;

  astAddFrame(frameSet, AST__CURRENT, cmp, astFrame(2, str));

  return 1;
}
