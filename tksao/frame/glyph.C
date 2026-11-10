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
  pp->updateBBox();
  pp->parent->update(Base::PIXMAP);
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

  if (mode==SRC && hasImage) {
    Vector cc = parent->mapFromRef(center,sys);
    int dx = (int)floor(cc[0]-iw/2.+.5);
    int dy = (int)floor(cc[1]-ih/2.+.5);

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
      Tk_RedrawImage(glyphImage_, ix, iy, ww, hh, drawable, dx, dy);
  }

  // outline: while dragging (XOR), when highlited (the image has no
  // color of its own) and as a placeholder when there is no image
  if (mode==XOR || !hasImage || (highlited && canHighlite()))
    renderXGlyphBox(drawable, sys, lgc, !hasImage);
}

void Point::renderXGlyphBox(Drawable drawable, Coord::InternalSystem sys, GC lgc,
		      int cross)
{
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
  Vector cc = parent->mapFromRef(center,Coord::CANVAS);
  int x0 = (int)floor(cc[0]-block.width/2.+.5);
  int y0 = (int)floor(cc[1]-block.height/2.+.5);

  if (widgetPdfMode_) {
    // handled by the op interpreter in Base::pdfVectorLayers
    ostringstream str;
    str << x0 << ' ' << y0 << ' ' << block.width << ' ' << block.height
	<< " (" << glyphPhoto_ << ") ds9glyph" << endl << ends;
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
  Vector cc = parent->mapFromRef(center,Coord::CANVAS);
  Vector dd = (vv-cc).abs();
  return (dd[0]<=glyphWidth_/2. && dd[1]<=glyphHeight_/2.) ? 1 : 0;
}

// Edit: glyphs resize symmetrically about the center, in screen pixels,
// keeping the aspect ratio. Other point shapes have a fixed size.
// The photo is only regenerated at the end, resizing in Tcl is slow.

void Point::edit(const Vector& v, int h)
{
  if (shape_ != GLYPH)
    return;

  Vector vv = parent->mapFromRef(v,Coord::CANVAS);
  Vector cc = parent->mapFromRef(center,Coord::CANVAS);
  Vector dd = (vv-cc).abs()*2;

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
