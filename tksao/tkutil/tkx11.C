// Copyright (C) 1999-2020
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tk.h>

#include "tkx11.h"

#if defined (MAC_OSX_TK) || (_WIN32)
#include <tkInt.h>

int XSetClipRectangles(Display *d, GC gc, int clip_x_origin, int clip_y_origin,
		       XRectangle* rectangles, int n, int ordering)
{
  TkRegion clipRgn = TkCreateRegion();

  while (n--) {
    XRectangle rect = *rectangles;

    rect.x += clip_x_origin;
    rect.y += clip_y_origin;
    TkUnionRectWithRegion(&rect, clipRgn, clipRgn);
    rectangles++;
  }
  TkSetRegion(d, gc, clipRgn);
  TkDestroyRegion(clipRgn);
  return 1;
}

#endif
