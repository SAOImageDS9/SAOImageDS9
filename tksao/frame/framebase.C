// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tkInt.h>

#include "framebase.h"
#include "fitsimage.h"
#include "marker.h"
#include "context.h"
#include "ps.h"

// Public

FrameBase::FrameBase(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item) 
  : Base(i, c, item)
{
  rotateSrcXM = NULL;
  rotateDestXM = NULL;
  rotatePM = 0;

  colormapXM = NULL;
  colormapPM = 0;
  colormapGCXOR = 0;
}

FrameBase::~FrameBase()
{
  if (colormapXM)
    XDestroyImage(colormapXM);

  if (colormapPM)
    Tk_FreePixmap(display, colormapPM);

  if (colormapGCXOR)
    XFreeGC(display, colormapGCXOR);
}

double FrameBase::calcZoomPanner()
{
  if (!(keyContext->fits && pannerPixmap))
    return 1;

  Vector src = imageSize(keyContext->datasec() ? FrScale::DATASEC : FrScale::IMGSEC);
  return calcZoom(src, Vector(pannerWidth,pannerHeight));
}

void FrameBase::rotateMotion()
{
  // Rotate from src to dest
  Vector cc = Vector(options->width,options->height)/2;
  Matrix m = (Translate(-cc) * Rotate(rotation-rotateRotation) * 
	      Translate(cc)).invert();
  double* mm = m.mm();

  int& width = options->width;
  int& height = options->height;
  char* src = rotateSrcXM->data;

  int bytesPerPixel = rotateDestXM->bits_per_pixel/8;

  for (int j=0; j<height; j++) {
    // the line may be padded at the end
    char* dest = rotateDestXM->data + j*rotateDestXM->bytes_per_line;
    memset(dest,0,rotateDestXM->bytes_per_line);

    for (int i=0; i<width; i++, dest+=bytesPerPixel) {
      double x = i*mm[0] + j*mm[3] + mm[6];
      double y = i*mm[1] + j*mm[4] + mm[7];

      if (x >= 0 && x < width && y >= 0 && y < height) {
#if MAC_OSX_TK
	// I really don't understand this
	char* sptr = src + ((int)y)*rotateDestXM->bytes_per_line+
	  ((int)x)*bytesPerPixel;

	*(dest+0) = *(sptr+3);
	*(dest+1) = *(sptr+0);
	*(dest+2) = *(sptr+1);
	*(dest+3) = *(sptr+2);
#else
	memcpy(dest, src + ((int)y)*rotateDestXM->bytes_per_line +
	  ((int)x)*bytesPerPixel, bytesPerPixel);
#endif
      }
      else
	memcpy(dest, bgTrueColor_, bytesPerPixel);
    }
  }

  // XImage to Pixmap
  TkPutImage(NULL, 0, display, rotatePM, widgetGC, rotateDestXM,
	    0, 0, 0, 0, options->width, options->height);

  // Display Pixmap
  Vector dd = Vector() * widgetToWindow;
  XCopyArea(display, rotatePM, Tk_WindowId(tkwin), rotateGCXOR, 0, 0, 
	    options->width, options->height, dd[0], dd[1]);
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
    currentContext->updateContours();
    break;
  case FrScale::LOCAL:
    currentContext->clearHist();
    currentContext->updateClip();
    currentContext->updateContoursScale();
    break;
  }

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
  Base::updatePanner();

  if (usePanner) {
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
      Vector orpix = keyContext->fits->center();
      Vector orval=keyContext->fits->pix2wcs(orpix, wcsSystem_, wcsSky_);
      Vector orpix2 = keyContext->fits->wcs2pix(orval, wcsSystem_,wcsSky_);
      Vector delta = keyContext->fits->getWCScdelt(wcsSystem_).abs();

      Vector npix = keyContext->fits->wcs2pix(Vector(orval[0],orval[1]+delta[1]), wcsSystem_,wcsSky_);
      Vector north = ((npix-orpix2)*mm).normalize();
      Vector epix = keyContext->fits->wcs2pix(Vector(orval[0]+delta[0],orval[1]), wcsSystem_,wcsSky_);
      Vector east = ((epix-orpix2)*mm).normalize();
	
      // sanity check
      Vector diff = (north-east).abs();
      if ((north[0]==0 && north[1]==0) ||
	  (east[0]==0 && east[1]==0) ||
	  (diff[0]<.01 && diff[1]<.01)) {
	north = (Vector(0,1)*mm).normalize();
	east = (Vector(-1,0)*mm).normalize();
      }

      str << pannerName << " update wcs compass " 
	  << north << ' ' << east << ends;
    }
    else
      str << pannerName << " update wcs compass invalid" << ends;

    Tcl_Eval(interp, str.str().c_str());
  }
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

