// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "grid25d.h"
#include "context.h"
#include "frame3dbase.h"
#include "fitsimage.h"

extern "C" {
  #include "ast.h"
}

extern Grid25dBase* astGrid25dPtr;

Grid25d::Grid25d(Widget* p, Coord::CoordSystem sys, Coord::SkyFrame sky, 
		 Coord::SkyFormat format, GridType t, 
		 const char* o, const char* v) 
  : Grid(sys, sky, format, t, v), Grid25dBase(p,o)
{}

Grid25d::~Grid25d()
{}

int Grid25d::doit(RenderMode rm)
{
  Frame3dBase* pp = (Frame3dBase*)parent_;

  matrix_ = pp->widgetToCanvas;
  pixmap_ = pp->pixmap;
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
  FitsBound* params = fits->getDataParams(context->secMode());

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
  default:
    {
      // imageToData frame/map
      double ss[] = {-.5, -.5};
      AstShiftMap *sm = astShiftMap(2, ss, " ");
      AstFrame *df = astFrame(2, "Domain=DATA");

      // Get 2D SkyFrame
      AstFrameSet* wcs = (AstFrameSet*)astCopy(fits->getAST(system_));
      if (astIsASkyFrame(astGetFrame(wcs, AST__CURRENT)))
      	fits->setAstSkyFrame(wcs, sky_);
      // astShow(wcs);
 
      // Record the index of the current Frame
      int isky = astGetI(wcs, "Current");

      // Add the new DATA Frame into the FrameSet, using the ShiftMap to
      // connect it to the existing IMAGE Frame.
      astAddFrame(wcs, AST__BASE, sm, df);

      // The above call to astAddFrame will have changed the current Frame
      // in the FrameSet to be the new DATA Frame. First record the index of
      // the DATA Frame, and then re-instate the original current Frame (i.e.
      // the SKY Frame).
      int idata =  astGetI(wcs, "Current");
      astSetI(wcs, "Current", isky);

      // make the DATA Frame the new base Frame 
      astSetI(wcs, "Base", idata);

      frameSet = wcs;
     }
  }

 if (!frameSet)
    return 0;

  astSet(frameSet,"Title=%s", " ");

  // create astPlot
  float gbox[4];
  double pbox[4];

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
  return 1;
}

void* Grid25d::matrixMap(Matrix& mx, const char* str)
{
  double ss[] = {mx.matrix(0,0),mx.matrix(1,0),
		 mx.matrix(0,1),mx.matrix(1,1)};
  double tt[] = {mx.matrix(2,0),mx.matrix(2,1)};

  AstMatrixMap* mm = astMatrixMap(2, 2, 0, ss, "");
  AstShiftMap* sm = astShiftMap(2, tt, "");
  AstCmpMap* cmap = astCmpMap(mm, sm, 1, "");

  AstFrame* in = astFrame(2,"Domain=REF");
  AstFrame* out = astFrame(2,str);

  AstFrameSet* frameSet = astFrameSet(in,"");
  astAddFrame(frameSet,AST__CURRENT,cmap,out);

  return frameSet;
}
