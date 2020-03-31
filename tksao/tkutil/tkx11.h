// Copyright (C) 1999-2020
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

// important note: needs to be included first as X11 defs are here

#ifndef __tkx11_h__
#define __tkx11_h__

#include <X11/Xlib.h>
#include <X11/Xutil.h>

#ifdef _WIN32
#include <win32lib.h>
#endif

#ifdef MAC_OSX_TK
#include <macosxlib.h>
void XXWarpPointer(Display* display, Window src_w, Window dest_w,
		   int src_x, int src_y,
		   unsigned int src_width, unsigned int src_height,
		   int dest_x, int dest_y);
#endif

#if defined (MAC_OSX_TK) || (_WIN32)
int XSetClipRectangles(Display *d, GC gc, int clip_x_origin, int clip_y_origin,
		       XRectangle* rectangles, int n, int ordering);
#endif

#endif
