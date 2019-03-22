/*
 * Smithsonian Astrophysical Observatory, Cambridge, MA, USA
 * This code has been modified under the terms listed below and is made
 * available under the same terms.
 */

/*
 *	Copyright 1993-2004 George A Howlett.
 *
 *	Permission is hereby granted, free of charge, to any person obtaining
 *	a copy of this software and associated documentation files (the
 *	"Software"), to deal in the Software without restriction, including
 *	without limitation the rights to use, copy, modify, merge, publish,
 *	distribute, sublicense, and/or sell copies of the Software, and to
 *	permit persons to whom the Software is furnished to do so, subject to
 *	the following conditions:
 *
 *	The above copyright notice and this permission notice shall be
 *	included in all copies or substantial portions of the Software.
 *
 *	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *	EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *	MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *	NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 *	LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 *	OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 *	WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include <limits.h>
#include <float.h>
#include <string.h>
#include <stdlib.h>

#include <cmath>

#include <tk.h>
#include <tkInt.h>

#include "tkbltGraph.h"
#include "tkbltGrMisc.h"
#include "tkbltInt.h"

using namespace Blt;

char* Blt::dupstr(const char* str)
{
  char* copy =NULL;
  if (str) {
    copy=new char[strlen(str)+1];
    strcpy(copy,str);
  }

  return copy;
}

int Blt::pointInPolygon(Point2d *s, Point2d *points, int nPoints)
{
  int count = 0;
  for (Point2d *p=points, *q=p+1, *qend=p + nPoints; q < qend; p++, q++) {
    if (((p->y <= s->y) && (s->y < q->y)) || 
	((q->y <= s->y) && (s->y < p->y))) {
      double b;

      b = (q->x - p->x) * (s->y - p->y) / (q->y - p->y) + p->x;
      if (s->x < b) {
	count++;	/* Count the number of intersections. */
      }
    }
  }
  return (count & 0x01);
}

/*
 *---------------------------------------------------------------------------
 *      Clips a rectangle in one direction where some of the coordinates are
 *      infinite.
 *---------------------------------------------------------------------------
 */
static LineRectClipResult ClipInfinity (double *pa, double *pb, double *qa, double *qb, double region_min, double region_max)
{
  int finitepa = isfinite(*pa);
  int finiteqa = isfinite(*qa);

  if (!finitepa) {
    if (finiteqa) {
      if (*pa > 0) {		// +Inf
	*pa = region_max;
      } else if (*pa < 0) {	// -Inf
	*pa = region_min;
      } else {			// NaN
	return CLIP_OUTSIDE;
      }
      // *qa is finite, simplify to zero slope at *pb.
      *pb = *qb;
      return CLIP_P;
    } else {			// Both infinite.
      int positivepa = *pa > 0;
      int positiveqa = *qa > 0;

      if (positivepa < positiveqa) { // (p,q) ~ (-Inf,Inf)
	*pa = region_min;
	*qa = region_max;
      } else if (positivepa > positiveqa) { // (p,q) ~ (Inf,-Inf)
	*pa = region_max;
	*qa = region_min;
      } else {			// (Inf,Inf), (-Inf,-Inf) or NaN.
	return CLIP_OUTSIDE;
      }
      // At opposite infinities; simplify to zero slope in the middle.
      *pb = *qb = (*pb + *qb) / 2.0;
      return CLIP_P | CLIP_Q;
    }
  } else if (!finiteqa) {
    // *pa is finite.
    if (*qa > 0) {		// +Inf
      *qa = region_max;
    } else if (*qa < 0) {	// -Inf
      *qa = region_min;
    } else {			// NaN
      return CLIP_OUTSIDE;
    }
    // *pa is finite, simplify to zero slope at *qb.
    *qb = *pb;
    return CLIP_Q;
  }
  return CLIP_OUTSIDE;
}


static int ClipTest (double ds, double dr, double *t1, double *t2)
{
  double t;

  if (ds < 0.0) {
    t = dr / ds;
    if (t > *t2) {
      return 0;			/* Line is outside clipping edge */
    } 
    if (t > *t1) {
      *t1 = t;
    }
  } else if (ds > 0.0) {
    t = dr / ds;
    if (t < *t1) {
      return 0;			/* Line is outside clipping edge */
    } 
    if (t < *t2) {
      *t2 = t;
    }
  } else {
    /* d = 0, so line is parallel to this clipping edge */
    if (dr < 0.0) {		/* Line is outside clipping edge */
      return 0;
    }
  }
  return 1;
}

/*
 *---------------------------------------------------------------------------
 *	Clips the given line segment to a rectangular region.  The coordinates
 *	of the clipped line segment are returned.  The original coordinates
 *	are overwritten.
 *
 *      The return value indicates whether the line was completely outside of
 *      the region, returning CLIP_OUTSIDE; or at least partly inside, returning
 *      CLIP_INSIDE.  In the latter case, the result might be or'ed with CLIP_P
 *      if p coordinates were clipped, or CLIP_Q if q coordinates were.
 *
 *	Reference: 
 *	  Liang, Y-D., and B. Barsky, A new concept and method for
 *	  Line Clipping, ACM, TOG,3(1), 1984, pp.1-22.
 *---------------------------------------------------------------------------
 */
LineRectClipResult Blt::lineRectClip(Region2d* regionPtr, Point2d *p, Point2d *q)
{
  double t1, t2;
  double dx, dy;
  LineRectClipResult res = CLIP_OUTSIDE;

  res |= ClipInfinity(&p->x, &p->y, &q->x, &q->y, regionPtr->bottom, regionPtr->top);

  t1 = 0.0, t2 = 1.0;
  dx = q->x - p->x;
  if ((ClipTest (-dx, p->x - regionPtr->left, &t1, &t2)) &&
      (ClipTest (dx, regionPtr->right - p->x, &t1, &t2))) {
    res |= ClipInfinity(&p->y, &p->x, &q->y, &q->x, regionPtr->top, regionPtr->bottom);

    dy = q->y - p->y;
    if ((ClipTest (-dy, p->y - regionPtr->top, &t1, &t2)) && 
	(ClipTest (dy, regionPtr->bottom - p->y, &t1, &t2))) {
      if (t2 < 1.0) {
	q->x = p->x + t2 * dx;
	q->y = p->y + t2 * dy;
	res |= CLIP_Q;
      }
      if (t1 > 0.0) {
	p->x += t1 * dx;
	p->y += t1 * dy;
	res |= CLIP_P;
      }
      return res | CLIP_INSIDE;
    }
  }
  return CLIP_OUTSIDE;
}

/*
 *---------------------------------------------------------------------------
 *	Clips the given polygon to a rectangular region.  The resulting
 *	polygon is returned. Note that the resulting polyon may be complex,
 *	connected by zero width/height segments.  The drawing routine (such as
 *	XFillPolygon) will not draw a connecting segment.
 *
 *	Reference:  
 *	  Liang Y. D. and Brian A. Barsky, "Analysis and Algorithm for
 *	  Polygon Clipping", Communications of ACM, Vol. 26,
 *	  p.868-877, 1983
 *---------------------------------------------------------------------------
 */
#define AddVertex(vx, vy)	    r->x=(vx), r->y=(vy), r++, count++ 
#define LastVertex(vx, vy)	    r->x=(vx), r->y=(vy), count++ 

int Blt::polyRectClip(Region2d *regionPtr, Point2d *points, int nPoints,
		      Point2d *clipPts)
{
  Point2d* r = clipPts;
  // Counts # of vertices in output polygon.
  int count = 0;

  points[nPoints] = points[0];
  for (Point2d *p=points, *q=p+1, *pend=p+nPoints; p<pend; p++, q++) {
    double dx, dy;
    double tin1, tin2, tinx, tiny;
    double xin, yin, xout, yout;

    dx = q->x - p->x;	/* X-direction */
    dy = q->y - p->y;	/* Y-direction */

    if (fabs(dx) < FLT_EPSILON)
      dx = (p->x > regionPtr->left) ? -FLT_EPSILON : FLT_EPSILON ;

    if (fabs(dy) < FLT_EPSILON)
      dy = (p->y > regionPtr->top) ? -FLT_EPSILON : FLT_EPSILON ;

    if (dx > 0.0) {		/* Left */
      xin = regionPtr->left;
      xout = regionPtr->right + 1.0;
    }
    else {		/* Right */
      xin = regionPtr->right + 1.0;
      xout = regionPtr->left;
    }
    if (dy > 0.0) {		/* Top */
      yin = regionPtr->top;
      yout = regionPtr->bottom + 1.0;
    }
    else {		/* Bottom */
      yin = regionPtr->bottom + 1.0;
      yout = regionPtr->top;
    }
	
    tinx = (xin - p->x) / dx;
    tiny = (yin - p->y) / dy;
	
    if (tinx < tiny) {	/* Hits x first */
      tin1 = tinx;
      tin2 = tiny;
    }
    else {		/* Hits y first */
      tin1 = tiny;
      tin2 = tinx;
    }
	
    if (tin1 <= 1.0) {
      if (tin1 > 0.0) {
	AddVertex(xin, yin);
      }
      if (tin2 <= 1.0) {
	double toutx = (xout - p->x) / dx;
	double touty = (yout - p->y) / dy;
	double tout1 = MIN(toutx, touty);
		
	if ((tin2 > 0.0) || (tout1 > 0.0)) {
	  if (tin2 <= tout1) {
	    if (tin2 > 0.0) {
	      if (tinx > tiny) {
		AddVertex(xin, p->y + tinx * dy);
	      } else {
		AddVertex(p->x + tiny * dx, yin);
	      }
	    }
	    if (tout1 < 1.0) {
	      if (toutx < touty) {
		AddVertex(xout, p->y + toutx * dy);
	      } else {
		AddVertex(p->x + touty * dx, yout);
	      }
	    } else {
	      AddVertex(q->x, q->y);
	    }
	  } else {
	    if (tinx > tiny) {
	      AddVertex(xin, yout);
	    } else {
	      AddVertex(xout, yin);
	    }

	  }
	}
      }
    }
  }
  if (count > 0) {
    LastVertex(clipPts[0].x, clipPts[0].y);
  }
  return count;
}

/*
 *---------------------------------------------------------------------------
 *	Computes the projection of a point on a line.  The line (given by two
 *	points), is assumed the be infinite.
 *
 *	Compute the slope (angle) of the line and rotate it 90 degrees.  Using
 *	the slope-intercept method (we know the second line from the sample
 *	test point and the computed slope), then find the intersection of both
 *	lines. This will be the projection of the sample point on the first
 *	line.
 *---------------------------------------------------------------------------
 */
Point2d Blt::getProjection(int x, int y, Point2d *p, Point2d *q)
{
  double dx = p->x - q->x;
  double dy = p->y - q->y;

  /* Test for horizontal and vertical lines */
  Point2d t;
  if (fabs(dx) < DBL_EPSILON) {
    t.x = p->x;
    t.y = (double)y;
  }
  else if (fabs(dy) < DBL_EPSILON) {
    t.x = (double)x;
    t.y = p->y;
  }
  else {
    /* Compute the slope and intercept of PQ. */
    double m1 = (dy / dx);
    double b1 = p->y - (p->x * m1);

    /* 
     * Compute the slope and intercept of a second line segment: one that
     * intersects through sample X-Y coordinate with a slope perpendicular
     * to original line.
     */

    /* Find midpoint of PQ. */
    double midX = (p->x + q->x) * 0.5;
    double midY = (p->y + q->y) * 0.5;

    /* Rotate the line 90 degrees */
    double ax = midX - (0.5 * dy);
    double ay = midY - (0.5 * -dx);
    double bx = midX + (0.5 * dy);
    double by = midY + (0.5 * -dx);

    double m2 = (ay - by) / (ax - bx);
    double b2 = y - (x * m2);

    /*
     * Given the equations of two lines which contain the same point,
     *
     *    y = m1 * x + b1
     *    y = m2 * x + b2
     *
     * solve for the intersection.
     *
     *    x = (b2 - b1) / (m1 - m2)
     *    y = m1 * x + b1
     *
     */

    t.x = (b2 - b1) / (m1 - m2);
    t.y = m1 * t.x + b1;
  }

  return t;
}

Graph* Blt::getGraphFromWindowData(Tk_Window tkwin)
{
  while (tkwin) {
    TkWindow* winPtr = (TkWindow*)tkwin;
    if (winPtr->instanceData != NULL) {
      Graph* graphPtr = (Graph*)winPtr->instanceData;
      if (graphPtr)
	return graphPtr;
    }
    tkwin = Tk_Parent(tkwin);
  }
  return NULL;
}

