// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tcl.h>

#include "panner.h"
#include "util.h"

// Parser Stuff
#undef yyFlexLexer
#define yyFlexLexer pnFlexLexer
#include <FlexLexer.h>

void* pnlval;
extern int pnparse(Panner*, pnFlexLexer*);

int pnlex(void* vval, pnFlexLexer* ll)
{
  pnlval = vval;
  return ll ? ll->yylex() : 0;
}

void pnerror(Panner* pn, pnFlexLexer* ll, const char* m)
{
  pn->error(m);
  const char* cmd = ll ? ll->YYText() : (const char*)NULL;
  if (cmd && cmd[0] != '\n') {
    pn->error(": ");
    pn->error(cmd);
  }
}

// Public Member Functions

Panner::Panner(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item) : Widget(i, c, item)
{
  // no XCreateGC() at this level
  thumbnail = 0;
  highLite = 0;
  panning = 0;
  needsUpdate = 0;

  bboxGC = NULL;
  useBBox = 1;

  compassGC = NULL;
  threed = 0;
  useCompass = 1;
  validWCSCompass = 0;

  tkfont_ = NULL;
}

Panner::~Panner()
{ 
  if (bboxGC)
    XFreeGC(display, bboxGC);

  if (compassGC)
    XFreeGC(display, compassGC);

  if (tkfont_)
    Tk_FreeFont(tkfont_);
}

int Panner::parse(istringstream& istr)
{
  result = TCL_OK;
  pnFlexLexer* ll = new pnFlexLexer(&istr);
  pnparse(this, ll);
  delete ll;

  return result;
}

void Panner::update()
{
  needsUpdate = 1; 
  redraw();
}

// Required Virtual Functions

// UpdatePixmap. This function is responsable for creating a valid 
// pixmap the size of the current Panner

int Panner::updatePixmap(const BBox& bb)
{
  if (!widgetGC)
    widgetGC = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);

  // bb is in canvas coords
  // create a valid pixmap if needed

  if (!pixmap) {
    if (!(pixmap = Tk_GetPixmap(display, Tk_WindowId(tkwin), 
				options->width, options->height, depth))) {
      internalError("Panner: Unable to Create Pixmap");
      return TCL_OK;
    }

    updateGCs();
  }

  if (needsUpdate) {
    if (thumbnail) {
      XSetClipOrigin(display, widgetGC, 0, 0);
      XCopyArea(display, thumbnail, pixmap, widgetGC, 0, 0,
      		options->width, options->height, 0, 0);

      if (useBBox)
	renderBBox();

      if (useCompass) {
      	renderImageCompass();
	if (validWCSCompass)
	  renderWCSCompass();
      }
    }
    else
      clearPixmap();
  }

  return TCL_OK;
}

void Panner::invalidPixmap()
{
  Widget::invalidPixmap();
  update();
}

// Command Functions

void Panner::getBBoxCmd()
{
  Vector v = bbox[0];
  for (int i=1; i<4; i++)
    v += bbox[i];
  v /= 4;

  ostringstream str;
  str << v << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);  
}

void Panner::getSizeCmd()
{
  ostringstream str;
  str << options->width << " " << options->height << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);  
}

void Panner::highLiteCmd(int which)
{
  if (highLite != which) {
    highLite = !highLite;
    update();
  }
}

void Panner::highLiteCmd(const Vector& v)
{
  if (highLite != isInBBox(v)) {
    highLite = !highLite;
    update();
  }
}

void Panner::panToCmd(const Vector& v)
{
  for (int i=0; i<4; i++)
    bbox[i] = v;
  update();
}

void Panner::panBeginCmd(const Vector& v)
{
  if (useBBox && isInBBox(v)) {
    panStart = v;
    panning = 1;
  }
}

void Panner::panMotionCmd(const Vector& v)
{
  if (panning && useBBox) {
    Vector diff = v - panStart;
    for (int i=0; i<4; i++)
      bbox[i] += diff;

    panStart = v;
    update();
  }
}

void Panner::panEndCmd(const Vector& v)
{
  if (panning && useBBox) {
    Vector diff = v - panStart;
    for (int i=0; i<4; i++)
      bbox[i] += diff;

    panning = 0;
    update();
  }
}

void Panner::setCompassCmd(int w)
{
  useCompass = w ? 1 : 0;
  update();
}

void Panner::setBBoxCmd(int w)
{
  useBBox = w ? 1 : 0;
  update();
}

void Panner::updateCmd(void* pp)
{
  thumbnail = (Pixmap)pp;
  update();
}

void Panner::updateBBoxCmd(const Vector& ll, const Vector& lr, 
			   const Vector& ur, const Vector& ul)
{
  Vector ss = ur - ll;
  if (ss[0] < 3 || ss[1] < 3)
    return;

  bbox[0] = ll;
  bbox[1] = lr;
  bbox[2] = ur;
  bbox[3] = ul;

  update();
}

void Panner::updateImageCompassCmd(Vector xx, Vector yy)
{
  threed =0;
  imageX = xx;
  imageY = yy;
  update();
}

void Panner::updateImageCompassCmd(Vector xx, Vector yy, Vector zz)
{
  threed =1;
  imageX = xx;
  imageY = yy;
  imageZ = zz;
  update();
}

void Panner::updateWCSCompassCmd()
{
  validWCSCompass = 0;
  update();
}

void Panner::updateWCSCompassCmd(const Vector& nn, const Vector& ee)
{
  validWCSCompass = 1;
  wcsNorth = nn;
  wcsEast = ee;
  update();
 }

void Panner::warpCmd(const Vector& vv)
{
  warp((Vector&)vv);
}

// Private Functions

void Panner::updateGCs()
{
  if (!bboxGC) {
    bboxGC = XCreateGC(display, pixmap, 0, NULL);
    XSetForeground(display, bboxGC, getColor("cyan"));
  }

  if (!tkfont_) {
    ostringstream fstr;
#ifdef MAC_OSX_TK
    fstr << '{' << options->helvetica << '}' << ' ' << int(9*getDisplayRatio()) << " roman normal" << ends;
#else
    fstr << '{' << options->helvetica << '}' << " 9 roman normal" << ends;
#endif
    tkfont_ = Tk_GetFont(interp, tkwin, fstr.str().c_str());
    if (tkfont_)
      Tk_GetFontMetrics(tkfont_, &metric);
  }  

  if (!compassGC) {
    compassGC = XCreateGC(display, pixmap, 0, NULL);
    XSetLineAttributes(display, compassGC, 1, LineSolid, CapButt, JoinMiter);
    if (tkfont_)
      XSetFont(display, compassGC, Tk_FontId(tkfont_));
  }
}

void Panner::renderBBox()
{
  XSetLineAttributes(display, bboxGC, (highLite ? 2 : 1), LineSolid, 
		     CapButt,JoinMiter);

  for (int i=0; i<3; i++) 
    XDrawLine(display, pixmap, bboxGC, (int)(bbox[i])[0], (int)(bbox[i])[1], 
	      (int)(bbox[i+1])[0], (int)(bbox[i+1])[1]);    
  XDrawLine(display, pixmap, bboxGC, (int)(bbox[3])[0], (int)(bbox[3])[1], 
	    (int)(bbox[0])[0], (int)(bbox[0])[1]);    
}

void Panner::renderImageCompass()
{
  float length = (options->width/2 + options->height/2)/2 * .4;
  Vector center(options->width/2., options->height/2.);

  renderArm(int(length*imageX.length()), center, 
	    Rotate(-imageX.angle()), "X", getColor("cyan"));
  renderArm(int(length*imageY.length()), center, 
	    Rotate(-imageY.angle()), "Y", getColor("cyan"));
  if (threed) {
    renderArm(int(length*imageZ.length()), center, 
	      Rotate(-imageZ.angle()), "Z", getColor("cyan"));
  }
}

void Panner::renderWCSCompass()
{
  float length = (options->width/2 + options->height/2)/2 * .25;
  Vector center(options->width/2., options->height/2.);

  renderArm(int(length*wcsEast.length()), center,
	    Rotate(-wcsEast.angle()), "E", getColor("yellow"));
  renderArm(int(length*wcsNorth.length()), center,
	    Rotate(-wcsNorth.angle()), "N", getColor("yellow"));
}

void Panner::renderArm(int length, Vector center, Rotate rot, 
		       const char* str, int color)
{
  if (length<=0)
    return;

  // set GC
  XSetForeground(display, compassGC, color);
  const int textOffset = 15; // Text offset
  const int tip = 6;  // length from end of line to tip of arrow
  const int tail = 2; // length from end of line to tails of arrow
  const int wc = 2;   // width of arrow at end of line
  const int wt = 3;   // width of arrow at tails

  // Arrow-- oriented on Y axis
  Vector arrow[6];
  arrow[0] = Vector(0, tip);
  arrow[1] = Vector(-wc, 0);
  arrow[2] = Vector(-wt, -tail);
  arrow[3] = Vector(0, 0);
  arrow[4] = Vector(wt, -tail);
  arrow[5] = Vector(wc, 0);

  // Staff-- oriented on X axis
  XPoint arrowArray[6];
  Matrix arrowMatrix = Rotate(M_PI_2) * 
    Translate(length,0) * 
    rot * 
    Translate(center);
  for (int i=0; i<6; i++) {
    Vector r = (arrow[i] * arrowMatrix).round();
    arrowArray[i].x = (int)r[0];
    arrowArray[i].y = (int)r[1];
  }

  Vector c = ((Vector&)center).round();
  Vector end = (Vector(length, 0) * rot * Translate(center)).round();
  XDrawLine(display, pixmap, compassGC, (int)c[0], (int)c[1], 
	    (int)end[0], (int)end[1]);
  XFillPolygon(display, pixmap, compassGC, arrowArray, 6, 
	       Nonconvex, CoordModeOrigin);

  if (tkfont_) {
    Vector et = Vector((length + textOffset), 0) * rot * Translate(center) *
                Translate(-Tk_TextWidth(tkfont_, str, 1)/2., metric.ascent/2.);
    Tk_DrawChars(display, pixmap, compassGC, tkfont_, str, 1,
		 (int)et[0], (int)et[1]);
  }
}

int Panner::isInBBox(const Vector& v)
{
  /*
    v[0]-- x value of point being tested
    v[1]-- y value of point being tested

    This algorithm is from "An Introduction to Ray Tracing", Academic Press,
    1989, edited by Andrew Glassner, pg 53
    -- a point lies in a polygon if a line is extended from the point to 
    infinite in any direction and the number of intersections with the 
    polygon is odd.
    This is valid for both concave and convex polygons.
    Points on a vertex are considered inside.
    Points on a edge are considered inside.
  */

  int crossings = 0;   // number of crossings
  Vector v1;
  Vector v2 = bbox[0] - v;
  int sign = ((v2[1])>=0) ? 1 : -1; // init sign

  // for all edges
  for (int i=1; i<4; i++) {
    // look at next two vertices
    v1 = v2;
    v2 = bbox[i] - v;
    int nextSign = (v2[1]>=0) ? 1 : -1; // sign holder for p2

    if (sign != nextSign) {
      if (v1[0]>0 && v2[0]>0)
	crossings++;
      else if (v1[0]>0 || v2[0]>0) {
	if (v1[0]-(v1[1]*(v2[0]-v1[0])/(v2[1]-v1[1])) > 0)
	  crossings++;
      }
      sign = nextSign;
    }
  }

  return fmod(float(crossings),float(2)) ? 1 : 0; // if odd, point is inside
}
