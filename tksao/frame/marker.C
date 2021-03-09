// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "marker.h"
#include "framebase.h"
#include "frame3dbase.h"
#include "fitsimage.h"

extern "C" {
#include "tkbltVector.h"
}

static int markerSeqID = 1;

// hard coded
const char* Marker::analysisHistogramCB_[] = {
  "MarkerAnalysisHistogramCB",
  "MarkerAnalysisHistogramDeleteCB"
};

const char* Marker::analysisPlot2dCB_[] = {
  "MarkerAnalysisPlot2dCB",
  "MarkerAnalysisPlot2dDeleteCB"
};

const char* Marker::analysisPlot3dCB_[] = {
  "MarkerAnalysisPlot3dCB",
  "MarkerAnalysisPlot3dDeleteCB",
  "MarkerAnalysisPlot3dSliceCB"
};

const char* Marker::analysisPandaCB_[] = {
  "MarkerAnalysisPandaCB",
  "MarkerAnalysisPandaDeleteCB"
};

const char* Marker::analysisRadialCB_[] = {
  "MarkerAnalysisRadialCB",
  "MarkerAnalysisRadialDeleteCB"
};

const char* Marker::analysisStatsCB_[] = {
  "MarkerAnalysisStatsCB",
  "MarkerAnalysisStatsDeleteCB"
};

// Marker Members Public

Marker::Marker(Base* p, const Vector& ctr, double ang)
{
  id = markerSeqID++;
  type_[0] = '\0';
  parent = p;

  center = ctr;

  angle = ang;

  handle = NULL;
  numHandle = 0;

  colorName = dupstr("green");
  color = parent->getColor(colorName);
  lineWidth = 1;
  properties = INCLUDE|SOURCE;
  selected = 0;
  highlited = 0;
  renderMode = Marker::SRC;

  dlist[0] = 8;
  dlist[1] = 3;

  text = dupstr("");
  tkfont_ =NULL;
  psfont_ =NULL;
  initFonts("helvetica 10 normal roman");

  comment = dupstr("");

  display = parent->display;
  gc = parent->markerGC_;
  gcxor = parent->markerGCXOR_;

  for (int ii=0; ii<XMLNUMCOL; ii++)
    XMLCol[ii] = NULL;

  doCB = 1;

  previous_ = NULL;
  next_ = NULL;

  analysisHistogram_ =0;
  analysisPlot2d_ =0;
  analysisPlot3d_ =0;
  analysisPanda_ =0;
  analysisRadial_ =0;
  analysisStats_ =0;
}

Marker::Marker(Base* p, const Vector& ctr, 
	       double ang,
	       const char* clr, int* dsh, 
	       int w, const char* f, const char* t, 
	       unsigned short prop, const char* c, 
	       const List<Tag>& tg, const List<CallBack>& cb)
{
  id = markerSeqID++;
  type_[0] = '\0';
  parent = p;

  center = ctr;

  angle = ang;

  handle = NULL;
  numHandle = 0;

  colorName = dupstr(clr);
  color = parent->getColor(colorName);
  lineWidth = w;
  properties = prop;
  selected = 0;
  highlited = 0;
  renderMode = Marker::SRC;

  dlist[0] = dsh[0];
  dlist[1] = dsh[1];

  text = dupstr(t);
  tkfont_ =NULL;
  psfont_ =NULL;
  initFonts(f);

  comment = dupstr(c);

  display = parent->display;
  gc = parent->markerGC_;
  gcxor = parent->markerGCXOR_;

  for (int ii=0; ii<XMLNUMCOL; ii++)
    XMLCol[ii] = NULL;

  doCB = 1;

  tags = tg;
  callbacks = cb;

  previous_ = NULL;
  next_ = NULL;

  analysisPlot2d_ =0;
  analysisPlot3d_ =0;
  analysisPanda_ =0;
  analysisRadial_ =0;
  analysisStats_ =0;
}

Marker::Marker(const Marker& a)
{
  id = a.id;
  strcpy(type_, a.type_);
  parent = a.parent;

  center = a.center;
  bbox = a.bbox;
  allBBox = a.allBBox;

  angle = a.angle;

  numHandle = a.numHandle;
  if (numHandle) {
    handle = new Vector[numHandle];
    for (int i=0; i<numHandle; i++)
      handle[i] = a.handle[i];
  }
  else
    handle = NULL;

  colorName = dupstr(a.colorName);
  color = a.color;
  lineWidth = a.lineWidth;
  properties = a.properties;
  selected = a.selected;
  highlited = a.highlited;
  renderMode = a.renderMode;

  dlist[0] = a.dlist[0];
  dlist[1] = a.dlist[1];

  text = dupstr(a.text);
  tkfont_ = a.tkfont_ ? Tk_GetFont(parent->interp, parent->tkwin, Tk_NameOfFont(a.tkfont_)) : NULL;
  psfont_ = a.psfont_ ? Tk_GetFont(parent->interp, parent->tkwin, Tk_NameOfFont(a.psfont_)) : NULL;
  comment = dupstr(a.comment);

  display = a.display;
  gc = a.gc;
  gcxor = a.gcxor;
  
  for (int ii=0; ii<XMLNUMCOL; ii++)
    XMLCol[ii] = NULL;

  // disable Callbacks by default
  doCB = 0;

  tags = a.tags;
  callbacks = a.callbacks;

  previous_ = NULL;
  next_ = NULL;

  analysisPlot2d_ = a.analysisPlot2d_;
  analysisPlot3d_ = a.analysisPlot3d_;
  analysisPanda_ = a.analysisPanda_;
  analysisRadial_ = a.analysisRadial_;
  analysisStats_ = a.analysisStats_;
}

Marker::~Marker()
{
  if (colorName)
    delete [] colorName;

  if (text)
    delete [] text;

  if (comment)
    delete [] comment;

  if (tkfont_)
    Tk_FreeFont(tkfont_);

  if (psfont_)
    Tk_FreeFont(psfont_);

  if (handle)
    delete [] handle;

  for (int ii=0; ii<XMLNUMCOL; ii++)
    if (XMLCol[ii])
      delete [] XMLCol[ii];

  doCallBack(CallBack::DELETECB);
}

void Marker::x11(Drawable drawable, Coord::InternalSystem sys, 
		 int tt, HandleMode hh)
{
  if (hh==HANDLES && renderMode != Marker::XOR)
    renderXHandles(drawable);
  if (tt)
    renderXText(drawable, sys, renderMode);

  renderX(drawable, sys, renderMode);
  renderXInclude(drawable, sys, renderMode);
}

void Marker::renderXInclude(Drawable drawable, Coord::InternalSystem sys, 
			    RenderMode mode)
{
  if (!(properties & INCLUDE)) {
    GC lgc = renderXGC(mode);

    Vector ll = (handle[0]*parent->canvasToWidget).round();
    Vector ur = (handle[2]*parent->canvasToWidget).round();

    if (mode==SRC)
      XSetForeground(display, gc, parent->getColor("red"));

    XDrawLine(display, drawable, lgc, ll[0], ll[1], ur[0], ur[1]);    
  }
}

void Marker::renderXText(Drawable drawable, Coord::InternalSystem sys, RenderMode mode)
{
  if (text && *text && tkfont_) {
    GC lgc;
    switch (mode) {
    case SRC:
      lgc = gc;
      XSetForeground(display, gc, color);
      break;
    case XOR:
      lgc = gcxor;
      break;
    }

    XSetFont(display, lgc, Tk_FontId(tkfont_));

    Tk_FontMetrics metrics;
    Tk_GetFontMetrics(tkfont_, &metrics);
    int width = Tk_TextWidth(tkfont_, text, strlen(text));

    Matrix mm;
    Matrix nn;
    setMatrices(sys,&mm,&nn);

    Vector ll0 = bbox.ll*parent->canvasToRef;
    Vector ll = ll0*mm;
    Vector ur0 = bbox.ur*parent->canvasToRef;
    Vector ur = ur0*mm;
    BBox bb(ll,ur);

    Vector bbc = bb.center();
    Vector tt =  Vector(bbc[0], bb.ll[1]) * 
      Translate(-width/2., -metrics.descent);

    Tk_DrawChars(display, drawable, lgc, tkfont_, text, strlen(text), 
		 tt[0], tt[1]);
  }
}

void Marker::renderXArrow(Drawable drawable, const Vector& p1, 
			  const Vector& p2, Coord::InternalSystem sys, GC lgc)
{
  Vector* vv = arrow(p1,p2,sys);
  XPoint dd[6];
  for (int ii=0; ii<6; ii++) {
    dd[ii].x = (short)vv[ii][0];
    dd[ii].y = (short)vv[ii][1];
  }

  XFillPolygon(display, drawable, lgc, dd, 6, Nonconvex, CoordModeOrigin);
  delete [] vv;
}

void Marker::renderXHandles(Drawable drawable)
{
  // handles are of length 5
  if (selected && canSelect()) {
    XSetForeground(display, gc, color);

    for (int ii=0; ii<numHandle; ii++) {
      Vector vv = (handle[ii]*parent->canvasToWidget - Vector(2,2)).round();
      XFillRectangle(display, drawable, gc, vv[0], vv[1], 5, 5);
    }
  }
}

GC Marker::renderXGC(RenderMode mode)
{
  // set width, color, dash
  switch (mode) {
  case SRC:
    XSetForeground(display, gc, color); 
    if ((properties & SOURCE) && !(properties & DASH))
      renderXLineNoDash(gc);
    else
      renderXLineDash(gc);
    return gc;

  case XOR:
    renderXLineDash(gcxor);
    return gcxor;
  }
}

void Marker::renderXLineDash(GC lgc)
{
  char dl[2];
  dl[0] = dlist[0];
  dl[1] = dlist[1];

  int ww = (highlited && canHighlite()) ? lineWidth*2 : lineWidth;
  XSetDashes(display, lgc, 0, dl, 2);
  XSetLineAttributes(display, lgc, ww, LineOnOffDash, CapButt, JoinMiter);
}

void Marker::renderXLineNoDash(GC lgc)
{
  int ww = (highlited && canHighlite()) ? lineWidth*2 : lineWidth;
  XSetLineAttributes(display, lgc, ww, LineSolid, CapButt, JoinMiter);
}

void Marker::ps(PSColorSpace mode, int tt)
{
  if (tt)
    renderPSText(mode);

  renderPS(mode);
  renderPSInclude(mode);
}

void Marker::renderPSInclude(PSColorSpace mode)
{
  if (!(properties & INCLUDE)) {
    parent->psColor(mode, parent->getXColor("red"));

    Vector ll = handle[0];
    Vector ur = handle[2];

    ostringstream str;
    str << "newpath " 
	<< parent->TkCanvasPs(ll) << ' '
	<< "moveto "
	<< parent->TkCanvasPs(ur) << ' '
	<< "lineto stroke" << endl << ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
  }
}

void Marker::renderPSText(PSColorSpace mode)
{
  if (text && *text && psfont_) {
    parent->psColor(mode, parent->getXColor(colorName));

    ostringstream str;

    const char* ff = Tk_NameOfFont(psfont_);
    str << '/' << psFontName(ff)
    	<< " findfont " << int(psFontSize(ff)*parent->getDisplayRatio())
	<< " scalefont setfont" << endl;

    Vector bbc = bbox.center();
    Vector tt =  parent->TkCanvasPs(Vector(bbc[0], bbox.ll[1]));
    str << "gsave" << endl
	<< "newpath " << endl
	<< tt << " moveto" << endl
	<< '(' << psQuote(text) << ')' << endl
	<< "dup true charpath pathbbox " << endl
	<< "closepath " << endl
      	<< "3 -1 roll sub 2.5 div " << endl
	<< "3 1 roll sub 2 div exch " << endl
	<< tt << " moveto rmoveto show " << endl
	<< "grestore" << endl;

    str << ends;
    Tcl_AppendResult(parent->interp, (char*)str.str().c_str(), NULL);
  }
}

void Marker::renderPSArrow(const Vector& p1, const Vector& p2, 
			   Coord::InternalSystem sys)
{
  Vector* vv = arrow(p1,p2,sys);
  ostringstream str;
  str << "newpath " << endl
      << parent->TkCanvasPs(vv[0]) << " moveto" << endl;
  for (int ii=1; ii<6; ii++)
      str << parent->TkCanvasPs(vv[ii]) << " lineto" << endl;
  str << "closepath fill" << endl << ends;
  Tcl_AppendResult(parent->interp, (char*)str.str().c_str(), NULL);
  delete [] vv;
}

void Marker::renderPSGC(PSColorSpace mode)
{
  // set width, color, dash
  parent->psColor(mode, parent->getXColor(colorName));
  if ((properties & SOURCE) && !(properties & DASH))
    renderPSLineNoDash();
  else
    renderPSLineDash();
}

void Marker::renderPSLineDash()
{
  ostringstream str;
  str << lineWidth << " setlinewidth" << endl
      << '[' << dlist[0] << ' ' << dlist[1] << "] 0 setdash" << endl 
      << ends;
  Tcl_AppendResult(parent->interp, (char*)str.str().c_str(), NULL);
}

void Marker::renderPSLineNoDash()
{
  ostringstream str;
  str << lineWidth << " setlinewidth" << endl
      << "[] 0 setdash" << endl 
      << ends;
  Tcl_AppendResult(parent->interp, (char*)str.str().c_str(), NULL);
}

#ifdef __WIN32
#include <win32lib.h>

void Marker::win32(int tt)
{
  if (tt)
    renderWIN32Text();

  renderWIN32();
  renderWIN32Include();
}
void Marker::renderWIN32Include()
{
  if (!(properties & INCLUDE)) {
    win32Color(parent->getXColor("red"));

    Vector ll = handle[0];
    Vector ur = handle[2];
    win32DrawLine(ll,ur);
  }
}

void Marker::renderWIN32Text()
{
  if (text && *text && tkfont_) {
    win32Color(parent->getXColor(colorName));

    win32Font(tkfont_);

    Tk_FontMetrics metrics;
    Tk_GetFontMetrics(tkfont_, &metrics);
    int width = Tk_TextWidth(tkfont_, text, strlen(text));

    BBox bb = bbox;
    Vector bbc = bb.center();
    Vector tt =  Vector(bbc[0], bbox.ll[1]) * 
      Translate(-width/2., -metrics.descent);

    win32DrawText(tt, 0, text);
  }
}

void Marker::renderWIN32Arrow(const Vector& p1, const Vector& p2, 
			      Coord::InternalSystem sys)
{
  Vector* vv = arrow(p1,p2,sys);
  Vector dd[6];
  for (int ii=0; ii<6; ii++)
    dd[ii] = vv[ii];

  win32FillPolygon(dd,6);
  delete [] vv;
}

void Marker::renderWIN32GC()
{
  // set width, color, dash
  win32Color(parent->getXColor(colorName));

  if ((properties & SOURCE) && !(properties & DASH))
    renderWIN32LineNoDash();
  else
    renderWIN32LineDash();
}

void Marker::renderWIN32LineDash()
{
  win32Width(lineWidth);
  win32Dash(dlist,2);
}

void Marker::renderWIN32LineNoDash()
{
  win32Width(lineWidth);
  win32Dash(NULL,0);
}
#endif

// Support

void Marker::updateBBox()
{
  // generate handles
  updateHandles();

  // bound handles
  bbox = BBox(handle[0]);
  for (int ii=1; ii<numHandle; ii++)
    bbox.bound(handle[ii]);

  // make room for handles
  bbox.expand(3);

  // calculate overall bbox
  calcAllBBox();
}

void Marker::calcAllBBox()
{
  allBBox = bbox;

  if (text && *text && tkfont_) {
    Tk_FontMetrics metrics;
    Tk_GetFontMetrics(tkfont_, &metrics);
    int width = Tk_TextWidth(tkfont_, text, strlen(text));

    Vector bbc = bbox.center();
    Vector ll =  Vector(bbc[0], bbox.ll[1]) * Translate(-width/2., 0);
    Vector ur = ll * Translate(width, -(metrics.linespace));

    allBBox.bound(ll);
    allBBox.bound(ur);
  }
}

void Marker::deleteCBs()
{
  callbacks.deleteAll();
}

void Marker::newIdentity()
{
  id = markerSeqID++;

  doCB = 1;
  //  deleteCBs();
  updateBBox();
}

void Marker::updateCoords(const Matrix& mx)
{
  center*=mx;
  updateBBox();
}

void Marker::centroid()
{
  center = parent->centroid(center);
  updateBBox();
  doCallBack(CallBack::MOVECB);
}

void Marker::moveTo(const Vector& v)
{
  center=v;
  updateBBox();
  doCallBack(CallBack::MOVECB);
}

void Marker::moveBegin()
{
  doCallBack(CallBack::MOVEBEGINCB);
}

void Marker::move(const Vector& v)
{
  center+=v;
  updateBBox();
  doCallBack(CallBack::MOVECB);
}

void Marker::moveEnd()
{
  doCallBack(CallBack::MOVEENDCB);
}

void Marker::editBegin(int)
{
  doCallBack(CallBack::EDITBEGINCB);
}

void Marker::edit(const Vector& v, int h)
{
  doCallBack(CallBack::EDITCB);
}

void Marker::editEnd()
{
  doCallBack(CallBack::EDITENDCB);
}

void Marker::rotateBegin()
{
  doCallBack(CallBack::ROTATEBEGINCB);
}

void Marker::rotate(const Vector& v, int h)
{
  // v is in ref coords
  // handles are in canvas coords

  double a = (v * Translate(-center) * FlipY()).angle();
  double b = ((parent->mapToRef(handle[h-1],Coord::CANVAS) * Translate(-center) * FlipY())).angle();
  angle -= a-b;

  updateBBox();
  doCallBack(CallBack::ROTATECB);
}

void Marker::rotateEnd()
{
  doCallBack(CallBack::ROTATEENDCB);
}

void Marker::select() {
  // only call the CB if not already selected
  if (!selected)
    doCallBack(CallBack::SELECTCB);
  selected = 1;
}

void Marker::unselect() {
  // only call the CB if already selected
  if (selected)
    doCallBack(CallBack::UNSELECTCB);
  selected = 0;
}

void Marker::toggleSelect() {
  selected = !selected;
  if (selected)
    doCallBack(CallBack::SELECTCB);
  else
    doCallBack(CallBack::UNSELECTCB);
}

void Marker::highlite() {
  // only call the CB if not already highlited
  if (!highlited)
    doCallBack(CallBack::HIGHLITECB);
  highlited = 1;
}

void Marker::unhighlite() {
  // only call the CB if already highlited
  if (highlited)
    doCallBack(CallBack::UNHIGHLITECB);
  highlited = 0;
}

void Marker::toggleHighlite() {
  highlited = !highlited;
  if (highlited)
    doCallBack(CallBack::HIGHLITECB);
  else
    doCallBack(CallBack::UNHIGHLITECB);
}

void Marker::key() {
  doCallBack(CallBack::KEYCB);
}

Vector Marker::getHandle(int h)
{
  if (h<numHandle)
    return handle[h];
  else
    return Vector();
}

void Marker::setAngle(double a)
{
  angle = a;
  updateBBox();

  doCallBack(CallBack::ROTATECB);
}

void Marker::setColor(const char* clr)
{
  if (colorName)
    delete [] colorName;

  colorName = dupstr(clr);
  color = parent->getColor(colorName);

  doCallBack(CallBack::COLORCB);
}

void Marker::setLineWidth(int w)
{
  lineWidth = w;

  doCallBack(CallBack::LINEWIDTHCB);
}

void Marker::setFont(const char* f)
{
  initFonts(f);
  updateBBox();
  doCallBack(CallBack::FONTCB);
}

void Marker::initFonts(const char* ff)
{
  if (tkfont_)
    Tk_FreeFont(tkfont_);
  tkfont_ = NULL;
  if (psfont_)
    Tk_FreeFont(psfont_);
  psfont_ = NULL;

  const char* dd = "helvetica 9 roman normal";
  if (!ff)
    ff = dd;

  psfont_ = Tk_GetFont(parent->interp, parent->tkwin, ff);

  // determine tkfont from psfont
  string x(ff);
  istringstream str(x);
  char family[16] = "";
  int size = 0;
  char weight[16] = "";
  char slant[16] = "";

  str >> family >> size >> weight >> slant;

  // old regions files will not have a slant
  if (strncmp(slant,"roma",4) && strncmp(slant,"ital",4))
    strcpy(slant,"roman");

#ifdef MAC_OSX_TK
  size *= parent->getDisplayRatio();
#endif

  char* ptr =NULL;
  if (!strncmp(family,"helvetica",4))
    ptr = parent->options->helvetica;
  else if (!strncmp(family,"times",4))
    ptr = parent->options->times;
  else if (!strncmp(family,"courier",4))
    ptr = parent->options->courier;
  else
    ptr = parent->options->helvetica;

  ostringstream fstr;
  fstr << '{' << ptr << '}' << ' ' 
       << size << ' ' << weight << ' ' << slant << ends;

  tkfont_ = Tk_GetFont(parent->getInterp(), parent->getTkwin(), 
		       fstr.str().c_str());
}

const char* Marker::getFont()
{
  if (psfont_)
    return Tk_NameOfFont(psfont_);
  else
    return NULL;
}

void Marker::addTag(const char* tg)
{
  Tag* t = new Tag(tg);
  tags.append(t);
}

void Marker::editTag(const char* from, const char* to)
{
  // change any tags
  {
    Tag* t = tags.head();
    while (t) {
      if (!strcmp(t->tag(),from)) {
	t->set(to);
      }
      t=t->next();
    }
  }

  // now, remove duplicates
  {
    Tag* t = tags.head();
    while (t) {
      Tag* tt=t->next();
      while (tt) {
	if (!strcmp(t->tag(),tt->tag())) {
	  Tag* ntt = tags.extractNext(tt);
	  delete tt;
	  tt = ntt;
	}
	else
	  tt=tt->next();
      }
      t=t->next();
    }
  }
}

void Marker::deleteTags()
{
  tags.deleteAll();
}

void Marker::deleteTag(const char* tg)
{
  Tag* t = tags.head();
  while (t) {
    if (!strcmp(t->tag(),tg)) {
      tags.extractNext(t);
      delete t;
      return;
    }
    t = t->next();
  }
}

void Marker::deleteTag(int w)
{
  Tag* t = tags.head();
  for (int i=0; i<w; i++)
    if (t)
      t = t->next();
    else
      break;

  if (t) {
    tags.extractNext(t);
    delete t;
  }
}

const char* Marker::getTag()
{
  Tag* t = tags.head();
  if (t)
    return t->tag();
  else
    return NULL;
}

const char* Marker::getNextTag()
{
  Tag* t = tags.next();
  if (t)
    return t->tag();
  else
    return NULL;
}

const char* Marker::getTag(int w)
{
  Tag* t = tags.head();
  for (int i=0; i<w; i++)
    if (t)
      t = t->next();
    else
      break;

  if (t)
    return t->tag();
  else
    return NULL;
}

int Marker::hasTag(const char* tg)
{
  Tag* t = tags.head();
  while (t) {
    if (!strcmp(t->tag(),tg))
      return 1;
    t = t->next();
  }
  return 0;
}

int Marker::onHandle(const Vector& v)
{
  // return handle number
  // work last to first for annuli
  for (int ii=numHandle-1; ii>=0; ii--) {
    BBox bb(handle[ii]);
    bb.expand(parent->markerEpsilon);
    if (bb.isIn(v))
      return ii+1;
  }
  return 0;
}

int Marker::getProperty(unsigned short which)
{
  return (properties & which) ? 1 : 0;
}

void Marker::setText(const char* str)
{
  if (text)
    delete [] text;
  text = dupstr(str);

  updateBBox();
  doCallBack(CallBack::TEXTCB);
}

void Marker::setProperty(unsigned short prop, int value)
{
  if (value)
    properties |= prop;
  else
    properties &= ~prop;

  if (prop == FIXED) // bbox will change
    updateBBox();

  doCallBack(CallBack::PROPERTYCB);
}

int Marker::addCallBack(CallBack::Type t, const char* proc, const char* arg)
{
  CallBack* cb = new CallBack(parent->interp, t, proc, arg);
  if (cb) {
    callbacks.append(cb);
    return TCL_OK;
  }

  return TCL_ERROR;
}

void Marker::deleteCallBack(CallBack::Type t)
{
  CallBack* cb = callbacks.head();
  while (cb) {
    if (cb->type() == t) {
      CallBack* next = callbacks.extractNext(cb);
      delete cb;
      cb = next;
    }
    else
      cb = cb->next();
  }
}

int Marker::deleteCallBack(CallBack::Type t, const char* proc)
{
  CallBack* cb = callbacks.head();
  while (cb) {
    if (cb->type() == t && (!strcmp(cb->proc(), proc))) {
      callbacks.extractNext(cb);
      delete cb;
      return TCL_OK;
    }
    else
      cb = cb->next();
  }

  return TCL_ERROR;
}

int Marker::isIn(const Vector& vv, Coord::InternalSystem sys)
{
  Vector rr = parent->mapToRef(vv,sys);
  Vector ss = parent->mapFromRef(rr,Coord::CANVAS);
  return bbox.isIn(ss);
}

// assume Coord::REF
int Marker::isIn(const Vector& vv, const Matrix& bck)
{
  Vector ss = parent->mapFromRef(vv,Coord::CANVAS);
  return bbox.isIn(ss);
}

int Marker::isVisible(const BBox& b)
{
  // assume visible, prove otherwise
  // all coords are in canvas coords

  BBox bb(b);
  return 
    !((allBBox.ur[0] < bb.ll[0]) ||
    (allBBox.ll[0] > bb.ur[0]) ||
    (allBBox.ur[1] < bb.ll[1]) ||
    (allBBox.ll[1] > bb.ur[1]));
}

void Marker::doCallBack(CallBack::Type t)
{
  if (!doCB)
    return;

  ostringstream str;

  str << id << ends;

  CallBack* cb=callbacks.head();
  while (cb) {
    if (cb->type() == t)
      if (cb->eval(str.str().c_str())) {
	ostringstream estr;
	estr << "Unable to eval Marker CallBack "
	     << cb->proc() << " : " << Tcl_GetStringResult(parent->interp) << ends;
	internalError(estr.str().c_str());
      }
    cb=cb->next();
  }
}

double Marker::calcAngle()
{
  switch (parent->getOrientation()) {
  case Coord::NORMAL:
  case Coord::XY:
    return angle + parent->getRotation();
  case Coord::XX:
  case Coord::YY:
    return -angle + parent->getRotation();
  }
}

Vector Marker::modifyArrow(const Vector& p1, const Vector& p2, 
			   Coord::InternalSystem sys)
{
  const int tip = 6;  // length from end of line to tip of arrow
  
  Vector aa = parent->mapFromRef(p1,sys);
  Vector bb = parent->mapFromRef(p2,sys);

  Vector nn = (bb-aa).normalize();
  double ll = (bb-aa).length();
  return nn * Scale(ll-tip) * Translate(aa);
}

Vector* Marker::arrow(const Vector& p1, const Vector& p2,
		      Coord::InternalSystem sys)
{
  switch (parent->frameType()) {
  case Base::F2D:
    return arrow2D(p1,p2,sys);
  case Base::F3D:
    return arrow3D(p1,p2,sys);
  }
}

Vector* Marker::arrow2D(const Vector& p1, const Vector& p2,
			Coord::InternalSystem sys)
{
  Vector aa = ((FrameBase*)parent)->mapFromRef(p1,sys);
  Vector bb = ((FrameBase*)parent)->mapFromRef(p2,sys);

  const int tip = 6;  // length from end of line to tip of arrow
  const int tail = 2; // length from end of line to tails of arrow
  const int wc = 2;   // width of arrow at end of line
  const int wt = 3;   // width of arrow at tails

  Vector vv[6];
  vv[0] = Vector(0, tip);
  vv[1] = Vector(-wc, 0);
  vv[2] = Vector(-wt, -tail);
  vv[3] = Vector(0, 0);
  vv[4] = Vector(wt, -tail);
  vv[5] = Vector(wc, 0);

  Vector dd = (aa-bb).normalize();
  Matrix mm = Translate(0,-tip) * 
    Scale(1.5) * 
    Rotate(-M_PI/2) * 
    Rotate(-dd.angle()) * 
    Translate(bb);

  Vector* ww = new Vector[6];
  for (int ii=0; ii<6; ii++)
    ww[ii] = vv[ii]*mm;

  return ww;
}

Vector* Marker::arrow3D(const Vector& p1, const Vector& p2,
			Coord::InternalSystem sys)
{
  Vector p3;
  if (((p2-p1)[0]) == 0)
    p3 = p1+Vector(1,0);
  else
    p3 = p1+Vector(0,1);

  Vector3d aa = ((Frame3dBase*)parent)->mapFromRef3d(p1,sys);
  Vector3d bb = ((Frame3dBase*)parent)->mapFromRef3d(p2,sys);
  Vector3d cc = ((Frame3dBase*)parent)->mapFromRef3d(p3,sys);

  const int tip = 6;  // length from end of line to tip of arrow
  const int tail = 2; // length from end of line to tails of arrow
  const int wc = 2;   // width of arrow at end of line
  const int wt = 3;   // width of arrow at tails

  // build in Y-Z plane, align on z axis
  Vector3d vv[6];
  vv[0] = Vector3d(0,0,tip);
  vv[1] = Vector3d(0,-wc,0);
  vv[2] = Vector3d(0,-wt,-tail);
  vv[3] = Vector3d(0,0,0);
  vv[4] = Vector3d(0,wt,-tail);
  vv[5] = Vector3d(0,wc,0);

  Vector3d l1 = (aa-bb).normalize();
  Vector3d l2 = (aa-cc).normalize();
  Vector3d rz = -l1;
  Vector3d rx = (cross(l1,l2)).normalize();
  Vector3d ry = cross(rz,rx);
  Matrix3d rr(rx,ry,rz);
  Matrix3d mm = 
    Translate3d(0,0,-tip) *
    Scale3d(1.5) *
    rr.invert() *
    Translate3d(bb);

  Vector* ww = new Vector[6];
  for (int ii=0; ii<6; ii++)
    ww[ii] = vv[ii]*mm;

  return ww;
}

void Marker::analysisXYEEResult(char* xname, char* yname, 
				  char* xcname, char* ycname,
				  double* x, double* y, 
				  double* xc, double* yc, int num)
{
  Blt_Vector* xx;
  Blt_GetVector(parent->getInterp(), xname, &xx);
  Blt_ResetVector(xx, x, num, num*sizeof(double), TCL_DYNAMIC);

  Blt_Vector* yy;
  Blt_GetVector(parent->getInterp(), yname, &yy);
  Blt_ResetVector(yy, y, num, num*sizeof(double), TCL_DYNAMIC);

  Blt_Vector* xxc;
  Blt_GetVector(parent->getInterp(), xcname, &xxc);
  Blt_ResetVector(xxc, xc, num, num*sizeof(double), TCL_DYNAMIC);

  Blt_Vector* yyc;
  Blt_GetVector(parent->getInterp(), ycname, &yyc);
  Blt_ResetVector(yyc, yc, num, num*sizeof(double), TCL_DYNAMIC);
}

void Marker::analysisXYResult(char* xname, char* yname, double* x, double* y, 
			      int num)
{
  Blt_Vector* xx;
  Blt_GetVector(parent->getInterp(), xname, &xx);
  Blt_ResetVector(xx, x, num, num*sizeof(double), TCL_DYNAMIC);

  Blt_Vector* yy;
  Blt_GetVector(parent->getInterp(), yname, &yy);
  Blt_ResetVector(yy, y, num, num*sizeof(double), TCL_DYNAMIC);
}

void Marker::analysisXYEResult(char* xname, char* yname, char* ename,
			       double* x, double* y, double* e, int num)
{
  Blt_Vector* xx;
  Blt_GetVector(parent->getInterp(), xname, &xx);
  Blt_ResetVector(xx, x, num, num*sizeof(double), TCL_DYNAMIC);

  Blt_Vector* yy;
  Blt_GetVector(parent->getInterp(), yname, &yy);
  Blt_ResetVector(yy, y, num, num*sizeof(double), TCL_DYNAMIC);

  Blt_Vector* ee;
  Blt_GetVector(parent->getInterp(), ename, &ee);
  Blt_ResetVector(ee, e, num, num*sizeof(double), TCL_DYNAMIC);
}

Matrix Marker::fwdMatrix()
{
  return Rotate(angle) * FlipY() * Translate(center);
}

Matrix Marker::bckMatrix()
{
  return Translate(-center) * FlipY() * Rotate(-angle);
}

Vector Marker::fwdMap(const Vector& vv, Coord::InternalSystem sys)
{
  return 
    parent->mapFromRef(vv * Rotate(angle) * FlipY() * Translate(center),sys);
}

Vector Marker::bckMap(const Vector& vv, Coord::InternalSystem sys)
{
  return 
    parent->mapToRef(vv,sys) * Translate(-center) * FlipY() * Rotate(-angle);
}

void Marker::setMatrices(Coord::InternalSystem sys, Matrix* fwd, Matrix* bck)
{
  switch (sys) {
  case Coord::WIDGET:
    *fwd = parent->refToWidget;
    *bck = parent->widgetToRef;
    break;
  case Coord::CANVAS:
    *fwd = parent->refToCanvas;
    *bck = parent->canvasToRef;
    break;
  case Coord::WINDOW:
    *fwd = parent->refToWindow;
    *bck = parent->windowToRef;
    break;
  case Coord::MAGNIFIER:
    *fwd = parent->refToMagnifier;
    *bck = parent->magnifierToRef;
    break;
  default:
    // na
    break;
  }
}

// list

void Marker::listPre(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky, 
		     FitsImage* ptr, int strip, int hash)
{
  // no props for semicolons
  if (!strip) {
    FitsImage* fits = parent->findFits();
    if (fits && fits->nextMosaic()) {
      switch (sys) {
      case Coord::IMAGE:
      case Coord::PHYSICAL:
      case Coord::DETECTOR:
      case Coord::AMPLIFIER:
	str << "# tile " << parent->findFits(ptr) << endl;

	break;
      default:
	if (!parent->findFits()->hasWCSCel(sys))
	  str << "# tile " << parent->findFits(ptr) << endl;
      }
    }

    if (hash)
      str << "# ";
  }
	
  if (!(properties&INCLUDE))
    str << '-';
}

void Marker::listPost(ostream& str, int conj, int strip)
{
  // no props for semicolons
  if (!strip) {
    if (conj)
      str << " ||";

    listProperties(str,1);
  }
  else {
    if (conj)
      str << "||";
    else
      str << ';';
  }
}

void Marker::listProperties(ostream& str, int hash)
{
  if (strncmp("green",colorName,5) ||
      dlist[0] != 8 ||
      dlist[1] != 3 ||
      (lineWidth != 1) ||
      strncmp("helvetica 10 normal roman",getFont(),25) ||
      (text && *text) ||
      !(properties&SELECT) ||
      !(properties&HIGHLITE) ||
      (properties&DASH) ||
      (properties&FIXED) ||
      !(properties&EDIT) ||
      !(properties&MOVE) ||
      !(properties&ROTATE) ||
      !(properties&DELETE) ||
      !(properties&SOURCE) ||
      (tags.count() > 0) ||
      (comment && *comment)) {

    if (hash)
      str << " #";
    listProps(str);
  }

  str << endl;
}

void Marker::listProps(ostream& str)
{
  if (strncmp("green",colorName,5))
    str << " color=" << colorName;

  if (dlist[0] != 8 || dlist[1] != 3)
    str << " dashlist=" << dlist[0] << ' ' << dlist[1];

  if (lineWidth != 1)
    str << " width=" << lineWidth;

  if (strncmp("helvetica 10 normal roman", getFont(), 25))
    str << " font=\"" << getFont() << '"';

  if (text && *text) // only list text if there is something to list
    str << " text={" << text << '}';

  if (!(properties&SELECT))
    str << " select=0";

  if (!(properties&HIGHLITE))
    str << " highlite=0";

  if (properties&DASH)
    str << " dash=1";

  if (properties&FIXED)
    str << " fixed=1";

  if (!(properties&EDIT))
    str << " edit=0";

  if (!(properties&MOVE))
    str << " move=0";

  if (!(properties&ROTATE))
    str << " rotate=0";

  if (!(properties&DELETE))
    str << " delete=0";

  if (!(properties&SOURCE))
    str << " background";

  // tags
  Tag* t = tags.head();
  while (t) {
    str << " tag={" << t->tag() << '}';
    t = t->next();
  }

  if (comment && *comment) 
    str << ' ' << comment;
}

void Marker::listCiaoPre(ostream& str)
{
  if (!(properties&INCLUDE))
    str << '-';
}

void Marker::listCiaoPost(ostream& str, int strip)
			  
{
  str << (strip ? ';' : '\n');
}

void Marker::listProsPost(ostream& str, int strip)
{
  str << (strip ? ';' : '\n');
}

void Marker::listSAOtngPre(ostream& str, int strip)
{
  if (!strip && text && *text)
    str << '#' << text << endl;

  if (properties&INCLUDE)
    str << '+';
  else
    str << '-';
}

void Marker::listSAOtngPost(ostream& str, int strip)
{
  if (!strip) {
    str << " # ";
    if (comment && *comment)
      str << comment;
    else if (!(properties&SOURCE))
      str << "background";
    else
      str << colorName;
  }

  str << (strip ? ';' : '\n');
}

void Marker::listSAOimagePre(ostream& str)
{
  if (!(properties&INCLUDE))
    str << '-';
}

void Marker::listSAOimagePost(ostream& str, int strip)
{
  str << (strip ? ';' : '\n');
}

void Marker::listXY(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		    Coord::SkyFormat format, int strip)
{
  FitsImage* ptr = parent->findFits();
  ptr->listFromRef(str, center, sys, sky, format);
  str << (strip ? ';' : '\n');
}

void Marker::XMLRowInit()
{
  for (int ii=0; ii<XMLNUMCOL; ii++) {
    if (XMLCol[ii])
      delete [] XMLCol[ii];
    XMLCol[ii] = NULL;
  }
}

void Marker::XMLRow(XMLColName col, int val)
{
  ostringstream str;
  str << val << ends;

  if (XMLCol[col])
    delete [] XMLCol[col];
  XMLCol[col] = dupstr(str.str().c_str());
}

void Marker::XMLRow(XMLColName col, char* val)
{
  if (XMLCol[col])
    delete [] XMLCol[col];
  XMLCol[col] = dupstr(val);
}

void Marker::XMLRow(XMLColName col, char** val, int cnt)
{
  ostringstream str;
  for (int ii=0; ii<cnt; ii++) {
    str << val[ii];
    if (ii!=cnt-1)
      str << ' ';
    else
      str << ends;
  }

  if (XMLCol[col])
    delete [] XMLCol[col];
  XMLCol[col] = dupstr(str.str().c_str());
}

void Marker::XMLRowProps(FitsImage* ptr, Coord::CoordSystem sys)
{
  // tile
  {
    ostringstream str;
    XMLColName col = XMLTILE;

    FitsImage* fits = parent->findFits();
    if (fits && fits->nextMosaic()) {
      switch (sys) {
      case Coord::IMAGE:
      case Coord::PHYSICAL:
      case Coord::DETECTOR:
      case Coord::AMPLIFIER:
	str << parent->findFits(ptr) << ends;
	break;
      default:
	if (!parent->findFits()->hasWCSCel(sys))
	  str << parent->findFits(ptr) << ends;
	break;
      }
    }
    if (XMLCol[col])
      delete [] XMLCol[col];
    XMLCol[col] = dupstr(str.str().c_str());
  }

  // color
  {
    XMLColName col = XMLCOLOR;
    if (XMLCol[col])
      delete [] XMLCol[col];
    XMLCol[col] = dupstr(colorName);
  }

  // width
  {
    ostringstream str;
    str << lineWidth << ends;
    XMLColName col = XMLWIDTH;
    if (XMLCol[col])
      delete [] XMLCol[col];
    XMLCol[col] = dupstr(str.str().c_str());
  }

  // text
  if (text && *text) {
    XMLColName col = XMLTEXT;
    if (XMLCol[col])
      delete [] XMLCol[col];
    XMLCol[col] = dupstr(text);
  }

  // font
  {
    XMLColName col = XMLFONT;
    if (XMLCol[col])
      delete [] XMLCol[col];
    XMLCol[col] = dupstr(getFont());
  }

  XMLRowProp(XMLSELECT,SELECT);
  XMLRowProp(XMLHIGHLITE,HIGHLITE);
  XMLRowProp(XMLEDIT,EDIT);
  XMLRowProp(XMLMOVE,MOVE);
  XMLRowProp(XMLROTATE,ROTATE);
  XMLRowProp(XMLDELETE,DELETE);
  XMLRowProp(XMLFIXED,FIXED);
  XMLRowProp(XMLINCLUDE,INCLUDE);
  XMLRowProp(XMLSOURCE,SOURCE);
  XMLRowProp(XMLDASH,DASH);

  // dashlist
  {
    ostringstream str;
    str << dlist[0] << ',' << dlist[1] << ends;
    XMLColName col = XMLDASHLIST;
    if (XMLCol[col])
      delete [] XMLCol[col];
    XMLCol[col] = dupstr(str.str().c_str());
  }

  // tags
  {
    ostringstream str;
    Tag* start = tags.head();
    Tag* ptr = start;
    while (ptr) {
      if (ptr != start)
	str << ' ';
      char* tag = (char*)ptr->tag();
      while (*tag) {
	if (*tag == ' ')
	  str << "&#160;";
	else
	  str << *tag;
	tag++;
      }
      ptr = ptr->next();
    }
    str << ends;

    XMLColName col = XMLTAG;
    if (XMLCol[col])
      delete [] XMLCol[col];
    XMLCol[col] = dupstr(str.str().c_str());
  }

  // comment
  if (comment && *comment) {
    XMLColName col = XMLCOMMENT;
    if (XMLCol[col])
      delete [] XMLCol[col];
    XMLCol[col] = dupstr(comment);
  }
}

void Marker::XMLRowEnd(ostream& str)
{
  str << "<TR>";
  for (int ii=0; ii<XMLNUMCOL; ii++) {
    str << "<TD>";
    if (XMLCol[ii]) {
      char* ss = XMLQuote(XMLCol[ii]);
      str << ss;
      delete [] XMLCol[ii];
      delete [] ss;
      XMLCol[ii] = NULL;
    }
    str << "</TD>";
  }
  str << "</TR>" << endl;
}

void Marker::XMLRowProp(XMLColName col, Property prop)
{
  if (properties & prop)
    XMLCol[col] = dupstr("1");
  else
    XMLCol[col] = dupstr("0");
}

void Marker::XMLRowPoint(FitsImage* ptr, Coord::CoordSystem sys,
			 Coord::SkyFrame sky, Coord::SkyFormat format,
			 Vector vv)
{
  ostringstream str1;
  ostringstream str2;
  ptr->listFromRef(str1,str2,vv,sys,sky,format);
  XMLRow(XMLX,(char*)str1.str().c_str());
  XMLRow(XMLY,(char*)str2.str().c_str());
}

void Marker::XMLRowPoint(FitsImage* ptr, Coord::CoordSystem sys, 
			 Coord::SkyFrame sky, Coord::SkyFormat format, 
			 Vector* vv, int cnt)
{
  ostringstream str1;
  ostringstream str2;
  for (int ii=0; ii<cnt; ii++) {
    ptr->listFromRef(str1,str2,vv[ii],sys,sky,format);

    if (ii!=cnt-1) {
      str1 << ' ';
      str2 << ' ';
    }
    else {
      str1 << ends;
      str2 << ends;
    }
  }
  XMLRow(XMLXV,(char*)str1.str().c_str());
  XMLRow(XMLYV,(char*)str2.str().c_str());
}

void Marker::XMLRowRadiusX(FitsImage* ptr, Coord::CoordSystem sys, Vector vv)
{
  ostringstream str;
  ptr->listLenFromRef(str,vv[0],sys,Coord::ARCSEC);
  XMLRow(XMLR,(char*)str.str().c_str());
}

void Marker::XMLRowRadiusX(FitsImage* ptr, Coord::CoordSystem sys, 
			   Vector* vv, int cnt)
{
  ostringstream str;
  for (int ii=0; ii<cnt; ii++) {
    ptr->listLenFromRef(str,vv[ii][0],sys,Coord::ARCSEC);

    if (ii!=cnt-1)
      str << ' ';
    else
      str << ends;
  }
  XMLRow(XMLRV,(char*)str.str().c_str());
}

void Marker::XMLRowRadius(FitsImage* ptr, Coord::CoordSystem sys, Vector vv)
{
  ostringstream str1;
  ostringstream str2;
  ptr->listLenFromRef(str1,vv[0],sys,Coord::ARCSEC);
  ptr->listLenFromRef(str2,vv[1],sys,Coord::ARCSEC);
  XMLRow(XMLR, (char*)str1.str().c_str());
  XMLRow(XMLR2,(char*)str2.str().c_str());
}

void Marker::XMLRowRadius(FitsImage* ptr, Coord::CoordSystem sys, 
			  Vector* vv, int cnt)
{
  ostringstream str1;
  ostringstream str2;
  for (int ii=0; ii<cnt; ii++) {
    ptr->listLenFromRef(str1,str2,vv[ii],sys,Coord::ARCSEC);

    if (ii!=cnt-1) {
      str1 << ' ';
      str2 << ' ';
    }
    else {
      str1 << ends;
      str2 << ends;
    }
  }
  XMLRow(XMLRV, (char*)str1.str().c_str());
  XMLRow(XMLRV2,(char*)str2.str().c_str());
}

void Marker::XMLRowAng(Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  ostringstream str;
  parent->listAngleFromRef(str,angle,sys,sky);
  XMLRow(XMLANG,(char*)str.str().c_str());
}

void Marker::XMLRowAng(Coord::CoordSystem sys, Coord::SkyFrame sky, 
		       double* ang, int cnt)
{
  ostringstream str;
  for (int ii=0; ii<cnt; ii++) {
    parent->listAngleFromRef(str,ang[ii],sys,sky);
    if (ii!=cnt-1)
      str << ' ';
    else
      str << ends;
  }
  XMLRow(XMLANGV,(char*)str.str().c_str());
}

char* Marker::XMLQuote(char* src)
{
  char* dest = new char[strlen(src)*7+1];
  char* sptr = src;
  char* dptr = dest;
  while (sptr && *sptr) {
    if (*sptr == '&') {
      // special case, char entities
      if (*(sptr+1) == '#') {
	*dptr++ = *sptr;
      }
      else {
	memcpy(dptr,"&amp;",5);
	dptr += 5;
      }
    }
    else if (*sptr == '<') {
      memcpy(dptr,"&lt;",4);
      dptr += 4;
    }
    else if (*sptr == '>') {
      memcpy(dptr,"&gt;",4);
      dptr += 4;
    }
    else if (*sptr == '\'') {
      memcpy(dptr,"&apos;",6);
      dptr += 6;
    }
    else if (*sptr == '"') {
      memcpy(dptr,"&quot;",6);
      dptr += 6;
    }
    else
     *dptr++ = *sptr;

    sptr++;
  }
  *dptr = '\0';

  return dest;
}

// special composite funtionallity

void Marker::setComposite(const Matrix& mx, double aa)
{
  center *= mx;
  angle += aa;
  updateBBox();
}

void Marker::setComposite(const char* clr, int w, int h)
{
  lineWidth = w;
  if (colorName)
    delete [] colorName;

  colorName = dupstr(clr);
  color = parent->getColor(colorName);
  highlited = h;
}

