// Copyright (C) 1999-2026
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <math.h>
#include <iomanip>

#include "util.h"
#include "point.h"
#include "base.h"
#include "fitsimage.h"

// Glyph points: point shape GLYPH, see point.h

void Point::initGlyph()
{
  glyphFile_ = dupstr("");
  glyphWidth_ = 0;
  glyphHeight_ = 0;
  glyphImage_ = NULL;
  glyphPhoto_ = NULL;
  glyphWarpImage_ = NULL;
  glyphWarpPhoto_ = NULL;
  glyphWarpX_ = 0;
  glyphWarpY_ = 0;
  if (shape_ == GLYPH)
    loadGlyph();
}

// Photo handling

void Point::freeGlyph()
{
  if (glyphImage_)
    Tk_FreeImage(glyphImage_);
  glyphImage_ = NULL;

  if (glyphPhoto_)
    delete [] glyphPhoto_;
  glyphPhoto_ = NULL;

  freeGlyphWarp();
}

void Point::freeGlyphWarp()
{
  if (glyphWarpImage_)
    Tk_FreeImage(glyphWarpImage_);
  glyphWarpImage_ = NULL;

  if (glyphWarpPhoto_) {
    // the photo is ours alone, unlike the shared ones from Tcl
    Tcl_Interp* interp = parent->interp;
    Tcl_InterpState state = Tcl_SaveInterpState(interp, TCL_OK);
    Tcl_Obj* objv[3];
    objv[0] = Tcl_NewStringObj("image", -1);
    objv[1] = Tcl_NewStringObj("delete", -1);
    objv[2] = Tcl_NewStringObj(glyphWarpPhoto_, -1);
    for (int ii=0; ii<3; ii++)
      Tcl_IncrRefCount(objv[ii]);
    Tcl_EvalObjv(interp, 3, objv, TCL_EVAL_GLOBAL);
    for (int ii=0; ii<3; ii++)
      Tcl_DecrRefCount(objv[ii]);
    Tcl_RestoreInterpState(interp, state);

    delete [] glyphWarpPhoto_;
  }
  glyphWarpPhoto_ = NULL;
}

void Point::loadGlyph()
{
  freeGlyph();
  glyphWidth_ = 0;
  glyphHeight_ = 0;

  if (glyphFile_ && *glyphFile_) {
    Tcl_Interp* interp = parent->interp;

    // we may be called in the middle of a frame command (region parsing)
    // so preserve whatever result that command is building
    Tcl_InterpState state = Tcl_SaveInterpState(interp, TCL_OK);

    // svg glyphs are drawn in the marker color, see glyph.tcl
    Tcl_Obj* objv[4];
    objv[0] = Tcl_NewStringObj(GLYPHPHOTOPROC, -1);
    objv[1] = Tcl_NewStringObj(glyphFile_, -1);
    objv[2] = Tcl_NewIntObj(size_>0 ? size_ : 0);
    objv[3] = Tcl_NewStringObj(colorName ? colorName : "", -1);
    for (int ii=0; ii<4; ii++)
      Tcl_IncrRefCount(objv[ii]);

    if (Tcl_EvalObjv(interp, 4, objv, TCL_EVAL_GLOBAL) == TCL_OK) {
      const char* name = Tcl_GetStringResult(interp);
      if (name && *name) {
	glyphImage_ = Tk_GetImage(interp, parent->tkwin, name,
				  glyphChangedProc, (ClientData)this);
	if (glyphImage_)
	  glyphPhoto_ = dupstr(name);
      }
    }

    for (int ii=0; ii<4; ii++)
      Tcl_DecrRefCount(objv[ii]);

    Tcl_RestoreInterpState(interp, state);
  }

  if (glyphImage_)
    Tk_SizeOfImage(glyphImage_, &glyphWidth_, &glyphHeight_);

  // placeholder
  if (glyphWidth_<=0 || glyphHeight_<=0)
    glyphWidth_ = glyphHeight_ = size_>0 ? size_ : GLYPHDEFAULTSIZE;
}

void Point::glyphChangedProc(ClientData cd, int xx, int yy, int ww, int hh,
			     int iw, int ih)
{
  Point* pp = (Point*)cd;
  if (iw>0 && ih>0) {
    pp->glyphWidth_ = iw;
    pp->glyphHeight_ = ih;
  }
  // rewarp on next render
  pp->glyphWarpAxes_[0] = Vector(0,0);
  pp->updateBBox();
  pp->parent->update(Base::PIXMAP);
}

// Tilt: on a 3D frame with az/el the glyph lies in the image plane, like
// the other point shapes (see generateBox). Its x and y axes are the
// images of one screen pixel offset taken through the 2D matrices back to
// ref and forward through the 3D projection. The projection is affine
// (no perspective), so this is exact for the whole glyph. Zoom cancels
// out: the glyph keeps its size in screen pixels.

void Point::glyphAxes(Coord::InternalSystem sys, Vector* ax, Vector* ay)
{
  if (parent->isAzElZero()) {
    *ax = Vector(1,0);
    *ay = Vector(0,1);
    return;
  }

  Matrix mm;
  Matrix nn;
  setMatrices(sys,&mm,&nn);

  // long step, for precision
  double ss = 100;
  Vector cc = center*mm;
  Vector c0 = parent->mapFromRef(center,sys);
  *ax = (parent->mapFromRef((cc+Vector(ss,0))*nn,sys) - c0)/ss;
  *ay = (parent->mapFromRef((cc+Vector(0,ss))*nn,sys) - c0)/ss;
}

// ll, lr, ur, ul of the glyph box
void Point::glyphCorners(Coord::InternalSystem sys, Vector* vv)
{
  Vector ax, ay;
  glyphAxes(sys, &ax, &ay);

  Vector cc = parent->mapFromRef(center,sys);
  Vector xx = ax*(glyphWidth_/2.);
  Vector yy = ay*(glyphHeight_/2.);
  vv[0] = cc - xx - yy;
  vv[1] = cc + xx - yy;
  vv[2] = cc + xx + yy;
  vv[3] = cc - xx + yy;
}

// canvas coords to glyph coords: screen pixels along the glyph axes,
// relative to the center. Returns 0 if the glyph is seen edge on.
int Point::glyphLocal(const Vector& vv, Vector* uv)
{
  Vector ax, ay;
  glyphAxes(Coord::CANVAS, &ax, &ay);
  double det = ax[0]*ay[1] - ax[1]*ay[0];
  if (fabs(det) < 1e-3)
    return 0;

  Vector dd = vv - parent->mapFromRef(center,Coord::CANVAS);
  *uv = Vector((dd[0]*ay[1] - dd[1]*ay[0])/det,
	       (ax[0]*dd[1] - ax[1]*dd[0])/det);
  return 1;
}

// glyphImage_ warped onto the glyph axes, into glyphWarpPhoto_, which is
// reused until the axes change. tl is its top left in sys coords.
// Returns NULL on a 2D (untilted) frame, without an image, or when the
// glyph is seen edge on: nothing to draw.
Tk_PhotoHandle Point::warpGlyph(Coord::InternalSystem sys, Vector* tl)
{
  if (parent->isAzElZero() || !glyphPhoto_)
    return NULL;

  Tcl_Interp* interp = parent->interp;
  Tk_PhotoHandle src = Tk_FindPhoto(interp, glyphPhoto_);
  Tk_PhotoImageBlock sb;
  if (!src || !Tk_PhotoGetImage(src, &sb) || sb.width<=0 || sb.height<=0)
    return NULL;

  Vector ax, ay;
  glyphAxes(sys, &ax, &ay);
  double det = ax[0]*ay[1] - ax[1]*ay[0];
  if (fabs(det) < 1e-2)
    return NULL;

  // same placement as the upright glyph: centered on the rounded center,
  // half a pixel off for odd sizes
  Vector cc = parent->mapFromRef(center,sys);
  Vector rc(floor(cc[0]+.5), floor(cc[1]+.5));
  Vector so((sb.width%2)*.5, (sb.height%2)*.5);

  Tk_PhotoHandle wp = glyphWarpPhoto_ ?
    Tk_FindPhoto(interp, glyphWarpPhoto_) : NULL;

  if (!wp || (ax-glyphWarpAxes_[0]).length() > 1e-4 ||
      (ay-glyphWarpAxes_[1]).length() > 1e-4) {
    // destination box, relative to rc
    Vector xx = ax*(sb.width/2.);
    Vector yy = ay*(sb.height/2.);
    Vector cn[4] = {so-xx-yy, so+xx-yy, so+xx+yy, so-xx+yy};
    BBox bb(cn[0]);
    for (int ii=1; ii<4; ii++)
      bb.bound(cn[ii]);
    int x0 = (int)floor(bb.ll[0]);
    int y0 = (int)floor(bb.ll[1]);
    int ww = (int)ceil(bb.ur[0]) - x0;
    int hh = (int)ceil(bb.ur[1]) - y0;
    if (ww<1)
      ww = 1;
    if (hh<1)
      hh = 1;

    // inverse axes: source pixels per destination pixel
    Vector ix(ay[1]/det, -ax[1]/det);
    Vector iy(-ay[0]/det, ax[0]/det);

    // supersample where the glyph is foreshortened, so that thin lines
    // do not drop out
    double step = ix.length() > iy.length() ? ix.length() : iy.length();
    int ns = (int)ceil(step);
    if (ns<1)
      ns = 1;
    if (ns>8)
      ns = 8;

    int hasAlpha = sb.pixelSize==4;
    unsigned char* img = new unsigned char[ww*hh*4];
    for (int jj=0; jj<hh; jj++) {
      for (int ii=0; ii<ww; ii++) {
	// premultiplied sum of bilinear samples
	double acc[4] = {0,0,0,0};
	for (int sy=0; sy<ns; sy++) {
	  for (int sx=0; sx<ns; sx++) {
	    // destination point, relative to the glyph center
	    double dx = x0+ii+(sx+.5)/ns - so[0];
	    double dy = y0+jj+(sy+.5)/ns - so[1];
	    // source pixel coords, pixel centers at integers
	    double px = dx*ix[0] + dy*iy[0] + sb.width/2. - .5;
	    double py = dx*ix[1] + dy*iy[1] + sb.height/2. - .5;
	    int kx = (int)floor(px);
	    int ky = (int)floor(py);
	    double tx = px-kx;
	    double ty = py-ky;
	    for (int nn=0; nn<4; nn++) {
	      int qx = kx + (nn&1);
	      int qy = ky + (nn>>1);
	      // outside is transparent
	      if (qx<0 || qx>=sb.width || qy<0 || qy>=sb.height)
		continue;
	      double wt = ((nn&1) ? tx : 1-tx) * ((nn>>1) ? ty : 1-ty);
	      unsigned char* pp = sb.pixelPtr + qy*sb.pitch + qx*sb.pixelSize;
	      double aa = hasAlpha ? pp[sb.offset[3]]/255. : 1;
	      acc[0] += wt*aa*pp[sb.offset[0]];
	      acc[1] += wt*aa*pp[sb.offset[1]];
	      acc[2] += wt*aa*pp[sb.offset[2]];
	      acc[3] += wt*aa;
	    }
	  }
	}

	unsigned char* dd = img + (jj*ww+ii)*4;
	double aa = acc[3]/(ns*ns);
	for (int kk=0; kk<3; kk++) {
	  double vv = acc[3]>0 ? acc[kk]/acc[3] : 0;
	  dd[kk] = (unsigned char)(vv>255 ? 255 : vv+.5);
	}
	dd[3] = (unsigned char)(aa>=1 ? 255 : aa*255+.5);
      }
    }

    // reported errors would end up in the result of whatever command
    // is rendering (postscript is accumulated in the result)
    Tcl_InterpState state = Tcl_SaveInterpState(interp, TCL_OK);

    if (!wp) {
      freeGlyphWarp();
      Tcl_Obj* objv[3];
      objv[0] = Tcl_NewStringObj("image", -1);
      objv[1] = Tcl_NewStringObj("create", -1);
      objv[2] = Tcl_NewStringObj("photo", -1);
      for (int ii=0; ii<3; ii++)
	Tcl_IncrRefCount(objv[ii]);
      if (Tcl_EvalObjv(interp, 3, objv, TCL_EVAL_GLOBAL) == TCL_OK) {
	const char* name = Tcl_GetStringResult(interp);
	// a changed proc that does nothing: we change it during rendering
	glyphWarpImage_ = Tk_GetImage(interp, parent->tkwin, name,
				      glyphWarpChangedProc, (ClientData)this);
	if (glyphWarpImage_) {
	  glyphWarpPhoto_ = dupstr(name);
	  wp = Tk_FindPhoto(interp, glyphWarpPhoto_);
	}
      }
      for (int ii=0; ii<3; ii++)
	Tcl_DecrRefCount(objv[ii]);
    }

    int rr = TCL_ERROR;
    if (wp) {
      Tk_PhotoImageBlock block;
      block.pixelPtr = img;
      block.width = ww;
      block.height = hh;
      block.pitch = ww*4;
      block.pixelSize = 4;
      block.offset[0] = 0;
      block.offset[1] = 1;
      block.offset[2] = 2;
      block.offset[3] = 3;
      if (Tk_PhotoSetSize(interp, wp, ww, hh) == TCL_OK)
	rr = Tk_PhotoPutBlock(interp, wp, &block, 0, 0, ww, hh,
			      TK_PHOTO_COMPOSITE_SET);
    }
    delete [] img;

    Tcl_RestoreInterpState(interp, state);

    if (rr != TCL_OK) {
      glyphWarpAxes_[0] = Vector(0,0);
      return NULL;
    }

    glyphWarpAxes_[0] = ax;
    glyphWarpAxes_[1] = ay;
    glyphWarpX_ = x0;
    glyphWarpY_ = y0;
  }

  *tl = rc + Vector(glyphWarpX_, glyphWarpY_);
  return wp;
}

// Render

void Point::renderXGlyph(Drawable drawable, Coord::InternalSystem sys,
		   RenderMode mode)
{
  GC lgc = renderXGC(mode);

  int iw =0;
  int ih =0;
  if (glyphImage_)
    Tk_SizeOfImage(glyphImage_, &iw, &ih);
  int hasImage = iw>0 && ih>0;

  Tk_Image img = glyphImage_;
  int dx =0;
  int dy =0;
  if (mode==SRC && hasImage) {
    if (parent->isAzElZero()) {
      Vector cc = parent->mapFromRef(center,sys);
      dx = (int)floor(cc[0]-iw/2.+.5);
      dy = (int)floor(cc[1]-ih/2.+.5);
    }
    else {
      Vector tl;
      img = warpGlyph(sys, &tl) ? glyphWarpImage_ : NULL;
      if (img) {
	Tk_SizeOfImage(img, &iw, &ih);
	dx = (int)tl[0];
	dy = (int)tl[1];
      }
    }
  }

  if (img && mode==SRC && hasImage) {

    // clip to the drawable, partly offscreen glyphs are common
    Window root;
    int gx, gy;
    unsigned int dw, dh, bw, depth;
    XGetGeometry(display, drawable, &root, &gx, &gy, &dw, &dh, &bw, &depth);

    int ix =0;
    int iy =0;
    int ww = iw;
    int hh = ih;
    if (dx<0) {ix = -dx; ww += dx; dx = 0;}
    if (dy<0) {iy = -dy; hh += dy; dy = 0;}
    if (dx+ww > (int)dw)
      ww = dw-dx;
    if (dy+hh > (int)dh)
      hh = dh-dy;

    if (ww>0 && hh>0)
      Tk_RedrawImage(img, ix, iy, ww, hh, drawable, dx, dy);
  }

  // outline: while dragging (XOR), when highlited (the image has no
  // color of its own), as a placeholder when there is no image, and
  // when the glyph is seen edge on
  if (mode==XOR || !hasImage || !img || (highlited && canHighlite()))
    renderXGlyphBox(drawable, sys, lgc, !hasImage);
}

void Point::renderXGlyphBox(Drawable drawable, Coord::InternalSystem sys, GC lgc,
		      int cross)
{
  if (!parent->isAzElZero()) {
    Vector vv[4];
    glyphCorners(sys, vv);
    XPoint pts[5];
    for (int ii=0; ii<5; ii++) {
      Vector pp = vv[ii%4].round();
      pts[ii].x = (short)pp[0];
      pts[ii].y = (short)pp[1];
    }
    XDrawLines(display, drawable, lgc, pts, 5, CoordModeOrigin);
    if (cross) {
      XDrawLine(display, drawable, lgc, pts[0].x, pts[0].y, pts[2].x, pts[2].y);
      XDrawLine(display, drawable, lgc, pts[1].x, pts[1].y, pts[3].x, pts[3].y);
    }
    return;
  }

  Vector cc = parent->mapFromRef(center,sys);
  Vector ss(glyphWidth_/2., glyphHeight_/2.);
  Vector ll = (cc-ss).round();
  Vector ur = (cc+ss).round();

  XDrawRectangle(display, drawable, lgc, ll[0], ll[1],
		 ur[0]-ll[0], ur[1]-ll[1]);
  if (cross) {
    XDrawLine(display, drawable, lgc, ll[0], ll[1], ur[0], ur[1]);
    XDrawLine(display, drawable, lgc, ll[0], ur[1], ur[0], ll[1]);
  }
}

// Postscript / PDF match illustrate mode (Tk canvas postscript and
// pdf.tcl): postscript skips fully transparent pixels and draws all others
// opaque (no alpha in postscript); pdf places the photo as an opaque
// image via pdf4tcl, which drops alpha.

void Point::renderPSGlyph(PSColorSpace mode)
{
  renderPSGC(mode);

  Tk_PhotoHandle photo = NULL;
  if (glyphPhoto_)
    photo = Tk_FindPhoto(parent->interp, glyphPhoto_);

  Tk_PhotoImageBlock block;
  if (!photo || !Tk_PhotoGetImage(photo, &block) ||
      block.width<=0 || block.height<=0) {
    renderPSGlyphBox(1);
    return;
  }

  // same placement as renderX
  const char* name = glyphPhoto_;
  int x0, y0;
  if (parent->isAzElZero()) {
    Vector cc = parent->mapFromRef(center,Coord::CANVAS);
    x0 = (int)floor(cc[0]-block.width/2.+.5);
    y0 = (int)floor(cc[1]-block.height/2.+.5);
  }
  else {
    // tilted: the warped photo, upright at its own box
    Vector tl;
    photo = warpGlyph(Coord::CANVAS, &tl);
    if (!photo || !Tk_PhotoGetImage(photo, &block)) {
      // edge on
      renderPSGlyphBox(0);
      return;
    }
    name = glyphWarpPhoto_;
    x0 = (int)tl[0];
    y0 = (int)tl[1];
  }

  if (widgetPdfMode_) {
    // handled by the op interpreter in Base::pdfVectorLayers
    ostringstream str;
    str << x0 << ' ' << y0 << ' ' << block.width << ' ' << block.height
	<< " (" << name << ") ds9glyph" << endl << ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
  }
  else
    renderPSGlyphImage(mode, &block, x0, y0);

  if (highlited && canHighlite())
    renderPSGlyphBox(0);
}

void Point::renderPSGlyphImage(PSColorSpace mode, Tk_PhotoImageBlock* block,
			  int x0, int y0)
{
  int hasAlpha = block->pixelSize==4;
  int ncomp = 3;
  switch (mode) {
  case BW:
  case GRAY:
    ncomp = 1;
    break;
  case RGB:
    ncomp = 3;
    break;
  case CMYK:
    ncomp = 4;
    break;
  }

  ostringstream str;
  str << "gsave" << endl;

  for (int yy=0; yy<block->height; yy++) {
    unsigned char* row = block->pixelPtr + yy*block->pitch;
    int xx=0;
    while (xx<block->width) {
      // skip fully transparent pixels
      while (xx<block->width && hasAlpha &&
	     !row[xx*block->pixelSize+block->offset[3]])
	xx++;
      if (xx>=block->width)
	break;

      int xs = xx;
      while (xx<block->width &&
	     (!hasAlpha || row[xx*block->pixelSize+block->offset[3]]))
	xx++;
      int ww = xx-xs;

      // one image per opaque run, one pixel tall, image row 0 at top
      Vector ll = parent->TkCanvasPs(Vector(x0+xs, y0+yy+1));
      str << "gsave " << ll << " translate " << ww << " 1 scale" << endl
	  << ww << " 1 8 [" << ww << " 0 0 -1 0 1] {<" << std::hex;
      for (int ii=xs; ii<xs+ww; ii++) {
	unsigned char* pp = row + ii*block->pixelSize;
	unsigned char red = pp[block->offset[0]];
	unsigned char green = pp[block->offset[1]];
	unsigned char blue = pp[block->offset[2]];
	switch (mode) {
	case BW:
	case GRAY:
	  str << setw(2) << setfill('0') << (int)RGB2Gray(red,green,blue);
	  break;
	case RGB:
	  str << setw(2) << setfill('0') << (int)red
	      << setw(2) << setfill('0') << (int)green
	      << setw(2) << setfill('0') << (int)blue;
	  break;
	case CMYK:
	  {
	    unsigned char cyan, magenta, yellow, black;
	    RGB2CMYK(red, green, blue, &cyan, &magenta, &yellow, &black);
	    str << setw(2) << setfill('0') << (int)cyan
		<< setw(2) << setfill('0') << (int)magenta
		<< setw(2) << setfill('0') << (int)yellow
		<< setw(2) << setfill('0') << (int)black;
	  }
	  break;
	}
      }
      str << std::dec << ">}";
      if (ncomp==1)
	str << " image";
      else
	str << " false " << ncomp << " colorimage";
      str << " grestore" << endl;
    }
  }

  str << "grestore" << endl << ends;
  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

void Point::renderPSGlyphBox(int cross)
{
  ostringstream str;
  str << "newpath "
      << parent->TkCanvasPs(handle[0]) << " moveto "
      << parent->TkCanvasPs(handle[1]) << " lineto "
      << parent->TkCanvasPs(handle[2]) << " lineto "
      << parent->TkCanvasPs(handle[3]) << " lineto "
      << "closepath stroke" << endl;
  if (cross)
    str << "newpath "
	<< parent->TkCanvasPs(handle[0]) << " moveto "
	<< parent->TkCanvasPs(handle[2]) << " lineto stroke" << endl
	<< "newpath "
	<< parent->TkCanvasPs(handle[1]) << " moveto "
	<< parent->TkCanvasPs(handle[3]) << " lineto stroke" << endl;
  str << ends;
  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}


// Support

int Point::isIn(const Vector& vv)
{
  if (shape_ != GLYPH)
    return Marker::isIn(vv);

  // vv in canvas coords
  Vector dd;
  if (!glyphLocal(vv, &dd))
    return Marker::isIn(vv);
  dd = dd.abs();
  return (dd[0]<=glyphWidth_/2. && dd[1]<=glyphHeight_/2.) ? 1 : 0;
}

// Edit: glyphs resize symmetrically about the center, in screen pixels,
// keeping the aspect ratio. Other point shapes have a fixed size.
// The photo is only regenerated at the end, resizing in Tcl is slow.

void Point::edit(const Vector& v, int h)
{
  if (shape_ != GLYPH)
    return;

  // along the glyph axes, which are tilted on a 3D frame
  Vector vv = parent->mapFromRef(v,Coord::CANVAS);
  Vector dd;
  if (!glyphLocal(vv, &dd))
    dd = vv - parent->mapFromRef(center,Coord::CANVAS);
  dd = dd.abs()*2;

  double ww = glyphWidth_>0 ? glyphWidth_ : 1;
  double hh = glyphHeight_>0 ? glyphHeight_ : 1;
  double ss = dd[0]/ww > dd[1]/hh ? dd[0]/ww : dd[1]/hh;
  int nw = (int)floor(ww*ss+.5);
  int nh = (int)floor(hh*ss+.5);
  glyphWidth_ = nw>1 ? nw : 1;
  glyphHeight_ = nh>1 ? nh : 1;
  // keep size_ current, so EDITCB listeners (the Point dialog) see it
  size_ = glyphWidth_>glyphHeight_ ? glyphWidth_ : glyphHeight_;

  updateBBox();
  doCallBack(CallBack::EDITCB);
}

void Point::editEnd()
{
  if (shape_ != GLYPH)
    return;

  loadGlyph();
  updateBBox();
  doCallBack(CallBack::EDITENDCB);
}

// svg glyphs follow the marker color: reload the photo in the new color

void Point::setColor(const char* clr)
{
  Marker::setColor(clr);
  if (shape_ == GLYPH) {
    loadGlyph();
    updateBBox();
  }
}

void Point::setGlyphFile(const char* fn)
{
  if (glyphFile_)
    delete [] glyphFile_;
  glyphFile_ = dupstr(fn ? fn : "");

  if (shape_ == GLYPH)
    loadGlyph();
  updateBBox();
}

// list

// When saving to a region file, write the glyph file name relative to the
// region file's directory if it lives at or below it, so a directory of
// region file plus glyphs can be moved as a unit.
void Point::listGlyphFile(ostream& str)
{
  const char* dir = parent->markerFileDir();
  if (!dir || !glyphFile_ || !*glyphFile_ || isGlyphBuiltin(glyphFile_)) {
    str << glyphFile_;
    return;
  }

  Tcl_Obj* path = Tcl_NewStringObj(glyphFile_, -1);
  Tcl_IncrRefCount(path);
  Tcl_Obj* norm = Tcl_FSGetNormalizedPath(parent->interp, path);
  const char* nn = norm ? Tcl_GetString(norm) : NULL;

  int ll = strlen(dir);
  int slash = ll>0 && dir[ll-1]=='/';
  if (nn && !strncmp(nn, dir, ll) && (slash || nn[ll]=='/'))
    str << nn+ll+(slash ? 0 : 1);
  else
    str << glyphFile_;

  Tcl_DecrRefCount(path);
}
