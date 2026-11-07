// Copyright (C) 1999-2026
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <math.h>
#include <iomanip>

#include "util.h"
#include "glyph.h"
#include "base.h"
#include "fitsimage.h"

Glyph::Glyph(const Glyph& a) : Marker(a)
{
  fileName_ = dupstr(a.fileName_);
  reqWidth_ = a.reqWidth_;
  reqHeight_ = a.reqHeight_;
  width_ = a.width_;
  height_ = a.height_;

  // each marker holds its own image reference, never share the handle
  image_ = NULL;
  photoName_ = NULL;
  loadImage();
}

Glyph::Glyph(Base* p, const Vector& ctr,
	   const char* fn, int ww, int hh,
	   const char* clr, int* dsh,
	   int wth, const char* fnt, const char* txt,
	   unsigned short prop, const char* cmt,
	   const List<Tag>& tg, const List<CallBack>& cb)
  : Marker(p, ctr, 0, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  strcpy(type_,"glyph");
  handle = new Vector[4];
  numHandle = 4;

  fileName_ = dupstr(fn ? fn : "");
  reqWidth_ = ww>0 ? ww : 0;
  reqHeight_ = hh>0 ? hh : 0;
  width_ = reqWidth_;
  height_ = reqHeight_;
  image_ = NULL;
  photoName_ = NULL;

  loadImage();
  updateBBox();
}

Glyph::~Glyph()
{
  freeImage();
  if (fileName_)
    delete [] fileName_;
}

// Photo handling

void Glyph::freeImage()
{
  if (image_)
    Tk_FreeImage(image_);
  image_ = NULL;

  if (photoName_)
    delete [] photoName_;
  photoName_ = NULL;
}

void Glyph::loadImage()
{
  freeImage();

  if (fileName_ && *fileName_) {
    Tcl_Interp* interp = parent->interp;

    // we may be called in the middle of a frame command (region parsing)
    // so preserve whatever result that command is building
    Tcl_InterpState state = Tcl_SaveInterpState(interp, TCL_OK);

    Tcl_Obj* objv[4];
    objv[0] = Tcl_NewStringObj(GLYPHPHOTOPROC, -1);
    objv[1] = Tcl_NewStringObj(fileName_, -1);
    objv[2] = Tcl_NewIntObj(reqWidth_);
    objv[3] = Tcl_NewIntObj(reqHeight_);
    for (int ii=0; ii<4; ii++)
      Tcl_IncrRefCount(objv[ii]);

    if (Tcl_EvalObjv(interp, 4, objv, TCL_EVAL_GLOBAL) == TCL_OK) {
      const char* name = Tcl_GetStringResult(interp);
      if (name && *name) {
	image_ = Tk_GetImage(interp, parent->tkwin, name,
			     imageChangedProc, (ClientData)this);
	if (image_)
	  photoName_ = dupstr(name);
      }
    }

    for (int ii=0; ii<4; ii++)
      Tcl_DecrRefCount(objv[ii]);

    Tcl_RestoreInterpState(interp, state);
  }

  if (image_) {
    int ww, hh;
    Tk_SizeOfImage(image_, &ww, &hh);
    if (ww>0 && hh>0) {
      width_ = ww;
      height_ = hh;
    }
  }

  if (width_<=0)
    width_ = reqWidth_>0 ? reqWidth_ : GLYPHDEFAULTSIZE;
  if (height_<=0)
    height_ = reqHeight_>0 ? reqHeight_ : GLYPHDEFAULTSIZE;
}

void Glyph::imageChangedProc(ClientData cd, int xx, int yy, int ww, int hh,
			    int iw, int ih)
{
  Glyph* glyph = (Glyph*)cd;
  if (iw>0 && ih>0) {
    glyph->width_ = iw;
    glyph->height_ = ih;
  }
  glyph->updateBBox();
  glyph->parent->update(Base::PIXMAP);
}

// Render

void Glyph::renderX(Drawable drawable, Coord::InternalSystem sys,
		   RenderMode mode)
{
  GC lgc = renderXGC(mode);

  int iw =0;
  int ih =0;
  if (image_)
    Tk_SizeOfImage(image_, &iw, &ih);
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
      Tk_RedrawImage(image_, ix, iy, ww, hh, drawable, dx, dy);
  }

  // outline: while dragging (XOR), when highlited (the image has no
  // color of its own) and as a placeholder when there is no image
  if (mode==XOR || !hasImage || (highlited && canHighlite()))
    renderXBox(drawable, sys, lgc, !hasImage);
}

void Glyph::renderXBox(Drawable drawable, Coord::InternalSystem sys, GC lgc,
		      int cross)
{
  Vector cc = parent->mapFromRef(center,sys);
  Vector ss(width_/2., height_/2.);
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

void Glyph::renderPS(PSColorSpace mode)
{
  renderPSGC(mode);

  Tk_PhotoHandle photo = NULL;
  if (photoName_)
    photo = Tk_FindPhoto(parent->interp, photoName_);

  Tk_PhotoImageBlock block;
  if (!photo || !Tk_PhotoGetImage(photo, &block) ||
      block.width<=0 || block.height<=0) {
    renderPSBox(mode, 1);
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
	<< " (" << photoName_ << ") ds9glyph" << endl << ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
  }
  else
    renderPSImage(mode, &block, x0, y0);

  if (highlited && canHighlite())
    renderPSBox(mode, 0);
}

void Glyph::renderPSImage(PSColorSpace mode, Tk_PhotoImageBlock* block,
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

void Glyph::renderPSBox(PSColorSpace mode, int cross)
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

#ifdef __WIN32
#include <win32lib.h>

// phase 1: win32 printing draws the outline only
void Glyph::renderWIN32()
{
  renderWIN32GC();

  Vector vv[5];
  for (int ii=0; ii<4; ii++)
    vv[ii] = handle[ii];
  vv[4] = handle[0];
  win32DrawLines(vv,5);
}
#endif

// Support

void Glyph::updateHandles()
{
  // fixed size in screen pixels, always upright
  Vector cc = parent->mapFromRef(center,Coord::CANVAS);
  Vector ss(width_/2., height_/2.);

  handle[0] = cc + Vector(-ss[0],-ss[1]);
  handle[1] = cc + Vector( ss[0],-ss[1]);
  handle[2] = cc + Vector( ss[0], ss[1]);
  handle[3] = cc + Vector(-ss[0], ss[1]);
}

int Glyph::isIn(const Vector& vv)
{
  // vv in canvas coords
  Vector cc = parent->mapFromRef(center,Coord::CANVAS);
  Vector dd = (vv-cc).abs();
  return (dd[0]<=width_/2. && dd[1]<=height_/2.) ? 1 : 0;
}

// Edit: resize symmetrically about the center, in screen pixels.
// The photo is only regenerated at the end, resizing in Tcl is slow.

void Glyph::edit(const Vector& v, int h)
{
  Vector vv = parent->mapFromRef(v,Coord::CANVAS);
  Vector cc = parent->mapFromRef(center,Coord::CANVAS);
  Vector dd = (vv-cc).abs()*2;

  width_ = dd[0]>1 ? (int)floor(dd[0]+.5) : 1;
  height_ = dd[1]>1 ? (int)floor(dd[1]+.5) : 1;

  updateBBox();
  doCallBack(CallBack::EDITCB);
}

void Glyph::editEnd()
{
  setSize(width_, height_);
  doCallBack(CallBack::EDITENDCB);
}

void Glyph::setFileName(const char* fn)
{
  if (fileName_)
    delete [] fileName_;
  fileName_ = dupstr(fn ? fn : "");

  width_ = reqWidth_;
  height_ = reqHeight_;
  loadImage();
  updateBBox();
}

void Glyph::setSize(int ww, int hh)
{
  reqWidth_ = ww>0 ? ww : 0;
  reqHeight_ = hh>0 ? hh : 0;

  width_ = reqWidth_;
  height_ = reqHeight_;
  loadImage();
  updateBBox();
}

// list

// When saving to a region file, write the glyph file name relative to the
// region file's directory if it lives at or below it, so a directory of
// region file plus glyphs can be moved as a unit.
void Glyph::listFileName(ostream& str)
{
  const char* dir = parent->markerFileDir();
  if (!dir || !fileName_ || !*fileName_) {
    str << fileName_;
    return;
  }

  Tcl_Obj* path = Tcl_NewStringObj(fileName_, -1);
  Tcl_IncrRefCount(path);
  Tcl_Obj* norm = Tcl_FSGetNormalizedPath(parent->interp, path);
  const char* nn = norm ? Tcl_GetString(norm) : NULL;

  int ll = strlen(dir);
  int slash = ll>0 && dir[ll-1]=='/';
  if (nn && !strncmp(nn, dir, ll) && (slash || nn[ll]=='/'))
    str << nn+ll+(slash ? 0 : 1);
  else
    str << fileName_;

  Tcl_DecrRefCount(path);
}


void Glyph::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		Coord::SkyFormat format, int conj, int strip)
{
  if (strip)
    return;

  FitsImage* ptr = parent->findFits(sys,center);
  listPre(str, sys, sky, ptr, strip, 1);

  str << type_ << '(';
  ptr->listFromRef(str,center,sys,sky,format);
  str << ",{";
  listFileName(str);
  str << '}';
  if (reqWidth_>0 || reqHeight_>0)
    str << ',' << reqWidth_ << ',' << reqHeight_;
  str << ')';

  if (conj)
    str << ' ' << listConjunction(conj);

  listProperties(str, 0);
}
