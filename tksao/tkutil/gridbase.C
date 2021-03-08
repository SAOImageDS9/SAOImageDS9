// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "coord.h"
#include "gridbase.h"
#include "attribute.h"

EXTERN void TkDrawAngledChars(Display *display,
			      Drawable drawable, GC gc, Tk_Font tkfont,
			      const char *source, int numBytes, double x,
			      double y, double angle);
extern "C" {
  #include "ast.h"
  #include "grf.h"
}

GridBase::GridBase(Widget* pp) : parent_(pp)
{
  option_ = NULL;

  renderMode_ = X11;
  line_ = new Attribute(parent_);
  text_ = new Attribute(parent_);

  gridGC_ = NULL;
  pixmap_ = 0;

  mode_ = RGB;
}

GridBase::GridBase(Widget* pp, const char* op) : parent_(pp)
{
  option_ = dupstr(op);

  renderMode_ = X11;
  line_ = new Attribute(parent_);
  text_ = new Attribute(parent_);

  gridGC_ = NULL;
  pixmap_ = 0;

  mode_ = RGB;
}

GridBase::~GridBase()
{
  if (option_)
    delete [] option_;

  if (line_)
    delete line_;
  if (text_)
    delete text_;
}

int GridBase::gAttr(int which, double value, double* old, int prim)
{
  Attribute* attr;
  switch (prim) {
  case GRF__TEXT:
    attr = text_;

    switch (which) {
    case GRF__STYLE:
      break;
    case GRF__WIDTH:
      break;
    case GRF__SIZE:
      if (old)
	*old = attr->size();
      if (value != AST__BAD) 
	attr->setSize(value);
      break;
    case GRF__FONT:
      if (old)
	*old = attr->font();
      if (value != AST__BAD) 
	attr->setFont(value);
      break;
    case GRF__COLOUR:
      if (old)
	*old = attr->colour();
      if (value != AST__BAD) 
	attr->setColour(value);
      break;
    }

    break;
  case GRF__LINE:
    attr = line_;

    switch (which) {
    case GRF__STYLE:
      if (old)
	*old = attr->style();
      if (value != AST__BAD) 
	attr->setStyle(value);
      break;
    case GRF__WIDTH:
      if (old)
	*old = attr->width();
      if (value != AST__BAD) 
	attr->setWidth(value);
      break;
    case GRF__SIZE:
      break;
    case GRF__FONT:
      break;
    case GRF__COLOUR:
      if (old)
	*old = attr->colour();
      if (value != AST__BAD) 
	attr->setColour(value);
      break;
    }

    break;
  }

  return 1;
}

int GridBase::gCap(int cap, int value)
{
  switch (cap) {
  case GRF__SCALES:
    return 0;
  case GRF__MJUST:
    return 1;
  case GRF__ESC:
    return 0;
  }
  return 0;
}

// X11 Render functions

int GridBase::x11Line(int n, float* x, float* y)
{
  if (n<2 || !x || !y)
    return 1;

  XSetForeground(parent_->getDisplay(), gridGC_, line_->color());
  int w = (int)line_->width();
  if (w<1)
    w = 1;
  switch (line_->style()) {
  case Attribute::SOLID:
    XSetLineAttributes(parent_->getDisplay(), gridGC_, w, 
		       LineSolid, CapButt, JoinMiter);
    break;
  case Attribute::DASH:
    XSetLineAttributes(parent_->getDisplay(), gridGC_, w, 
		       LineOnOffDash, CapButt, JoinMiter);
    char dlist[] = {8,3};
    XSetDashes(parent_->getDisplay(), gridGC_, 0, dlist, 2);
    break;
  }

  for (int i=0; i<n-1; i++) {
    Vector s = Vector(x[i],y[i]).round();
    Vector e = Vector(x[i+1],y[i+1]).round();
    XDrawLine(parent_->getDisplay(), pixmap_, gridGC_, 
	      (int)s[0],(int)s[1],(int)e[0],(int)e[1]);
  }

  return 1;
}

int GridBase::x11Text(const char* txt, float x, float y, 
		      const char* just, Vector up)
{
  XSetFont(parent_->getDisplay(), gridGC_, Tk_FontId(text_->tkfont()));
  XSetForeground(parent_->getDisplay(), gridGC_, text_->color());

  Vector vv = Vector(x,y);
  double angle = calcTextAngle(just, up);
  Vector cc = vv * calcTextPos(vv, angle, txt, just, up, text_->tkfont());

  TkDrawAngledChars(parent_->getDisplay(), pixmap_, gridGC_, text_->tkfont(), 
		    txt, strlen(txt), 
		    cc[0], cc[1], radToDeg(angle));
  return 1;
}

// PS Render functions

int GridBase::psLine(int n, float* x, float* y)
{
  if (n<2 || !x || !y)
    return 1;

  psColor(line_);
  {
    ostringstream str;
    str << line_->width() << " setlinewidth" << endl << ends;
    Tcl_AppendResult(parent_->getInterp(), str.str().c_str(), NULL);
  }
  {
    ostringstream str;
    switch (line_->style()) {
    case Attribute::SOLID:
      str << "[] 0 setdash" << endl << ends;
      break;
    case Attribute::DASH:
      str << "[8 3] 0 setdash" << endl << ends;
      break;
    }
    Tcl_AppendResult(parent_->getInterp(), str.str().c_str(), NULL);
  }

  for (int i=0; i<n; i++) {
    Vector v = Vector(x[i],y[i]) * matrix_;

    ostringstream str;
    if (i == 0) {
      str << "newpath " << endl;
      str << parent_->TkCanvasPs(v) << " moveto" << endl << ends;
    }
    else
      str << parent_->TkCanvasPs(v) << " lineto" << endl << ends;

    Tcl_AppendResult(parent_->getInterp(), str.str().c_str(), NULL);
  }

  ostringstream str;
  str << "stroke" << endl << ends;
  Tcl_AppendResult(parent_->getInterp(), str.str().c_str(), NULL);

  return 1;
}

int GridBase::psText(const char* txt, float x, float y, 
		     const char* just, Vector up)
{
  Tcl_DString psdstr;
  Tcl_DStringInit(&psdstr);

  Vector vv = Vector(x,y) * matrix_;
  double angle = calcTextAngle(just, up);
  Vector cc = vv * calcTextPos(vv, angle, txt, just, up, text_->psfont());
    
  ostringstream str;
  const char* ff = Tk_NameOfFont(text_->psfont());
  str << '/' << psFontName(ff)
      << " findfont " << int(psFontSize(ff)*parent_->getDisplayRatio())
      << " scalefont setfont" << endl;

  psColor(text_);

  str << "gsave " 
      << parent_->TkCanvasPs(cc) << " moveto" << endl
      << radToDeg(angle) << " rotate " 
      << '(' << psQuote(txt) << ')' << " show"
      << " grestore" << endl << ends;
  Tcl_AppendResult(parent_->getInterp(), str.str().c_str(), NULL);

  return 1;
}

void GridBase::psColor(Attribute* attr)
{
  parent_->psColor(mode_, parent_->getXColor(attr->colorName()));
}

#ifdef MAC_OSX_TK

int GridBase::macosxLine(int n, float* x, float* y)
{
  /*
  if (n<2 || !x || !y)
    return 1;

  macosxColor(parent_->getXColor(line_->colorName()));
  macosxWidth(line_->width());
  switch (line_->style()) {
  case Attribute::SOLID:
    macosxDash(NULL,0);
    break;
  case Attribute::DASH:
    float dlist[] = {8,3};
    macosxDash(dlist,2);
    break;
  }

  Vector* v = new Vector[n];
  for (int i=0; i<n; i++)
    v[i] = Vector(x[i],y[i]) * matrix_;

  macosxDrawLines(v, n);
  delete [] v;
  */

  return 1;
}

int GridBase::macosxText(const char* txt, float x, float y, 
			 const char* just, Vector up)
{
  /*
  // change this later
  Tcl_DString psdstr;
  Tcl_DStringInit(&psdstr);
  int psSize = Tk_PostscriptFontName(text_->tkfont(), &psdstr);

  macosxFont(Tcl_DStringValue(&psdstr),psSize); 
  Tcl_DStringFree(&psdstr);

  Vector vv = Vector(x,y) * matrix_;
  double angle = calcTextAngle(just, up);
  Vector cc = vv * calcTextPos(vv, angle, txt, just, up, text_->tkfont());
    
  macosxColor(parent_->getXColor(text_->colorName()));
  macosxDrawText(cc, angle, txt);
  */

  return 1;
}
#endif

#ifdef __WIN32
#include <win32lib.h>

int GridBase::win32Line(int n, float* x, float* y)
{
  if (n<2 || !x || !y)
    return 1;

  win32Color(parent_->getXColor(line_->colorName()));
  win32Width(line_->width());
  switch (line_->style()) {
  case Attribute::SOLID:
    win32Dash(NULL,0);
    break;
  case Attribute::DASH:
    float dlist[] = {8,3};
    win32Dash(dlist,2);
    break;
  }

  Vector v[n];
  for (int i=0; i<n; i++)
    v[i] = Vector(x[i],y[i]) * matrix_;

  win32DrawLines(v, n);
  
  return 1;
}

int GridBase::win32Text(const char* txt, float x, float y, 
			const char* just, Vector up)
{
  win32Font(text_->tkfont()); 
  win32Color(parent_->getXColor(text_->colorName()));

  Vector vv = Vector(x,y) * matrix_;
  double angle = calcTextAngle(just, up);;
  Vector cc = vv * calcTextPos(vv, angle, txt, just, up, text_->tkfont());
    
  win32DrawText(cc, angle, txt);

  return 1;
}
#endif

// Support

double GridBase::calcTextAngle(const char* just, Vector up)
{
  double a = up.angle();
  
  // our angle is 90 off from ast's, and the other direction
  double rr = -(a - M_PI_2);

  // special case for text rotated exactly 90
  if (up[0]==-1 && up[1]==0)
    rr += M_PI;

  // normalize
  if (rr>0)
    while (rr>2*M_PI)
      rr -= 2*M_PI;
  else
    while (rr<0)
      rr += 2*M_PI;

  return rr;
}

Matrix GridBase::calcTextPos(const Vector& vv, double angle, const char* txt, 
			     const char* just, Vector up, Tk_Font font)
{
  Tk_FontMetrics metrics;
  Tk_GetFontMetrics(font, &metrics);
  int width = Tk_TextWidth(font, txt, strlen(txt));

  Matrix m1,m2;
  switch (just[0]) {
  case 'T':
    break;
  case 'C':
    m1 = Translate(0,metrics.linespace/2);
    break;
  case 'B':
    m1 = Translate(0,metrics.ascent);
    break;
  case 'M':
    m1 = Translate(0,metrics.linespace);
    break;
  }

  switch (just[1]) {
  case 'L':
    break;
  case 'C':
    m2 = Translate(-width/2.,0);
    break;
  case 'R':
    m2 = Translate(-width,0);
    break;
  }

  Matrix rr = Translate(-vv) *
    Rotate(-angle) *
    m1 * m2 *
    Rotate(angle) *
    Translate(vv);

  // special case for text rotated exactly 90
  Matrix mm;
  if (up[0] == -1 && up[1] == 0) {
    Vector cc = vv*rr;
    mm = Translate(-cc) *
      Rotate(-angle) *
      Translate(-width/2.,metrics.linespace/2.) *
      FlipY() *
      Translate(width/2.,-metrics.linespace/2.) *
      Rotate(angle) *
      Translate(cc);
  }
    
  return rr*mm;
}

