// Copyright (C) 1999-2026
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <math.h>

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
      if (name && *name)
	image_ = Tk_GetImage(interp, parent->tkwin, name,
			     imageChangedProc, (ClientData)this);
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

// phase 1: postscript draws the outline only
void Glyph::renderPS(PSColorSpace mode)
{
  renderPSGC(mode);

  ostringstream str;
  str << "newpath "
      << parent->TkCanvasPs(handle[0]) << " moveto "
      << parent->TkCanvasPs(handle[1]) << " lineto "
      << parent->TkCanvasPs(handle[2]) << " lineto "
      << parent->TkCanvasPs(handle[3]) << " lineto "
      << "closepath stroke" << endl
      << ends;
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

void Glyph::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		Coord::SkyFormat format, int conj, int strip)
{
  if (strip)
    return;

  FitsImage* ptr = parent->findFits(sys,center);
  listPre(str, sys, sky, ptr, strip, 1);

  str << type_ << '(';
  ptr->listFromRef(str,center,sys,sky,format);
  str << ",{" << fileName_ << '}';
  if (reqWidth_>0 || reqHeight_>0)
    str << ',' << reqWidth_ << ',' << reqHeight_;
  str << ')';

  if (conj)
    str << ' ' << listConjunction(conj);

  listProperties(str, 0);
}
