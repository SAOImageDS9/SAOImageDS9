// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __macosxlib_h__
#define __macosxlib_h__

#include <X11/Xlib.h>
#include <X11/Xutil.h>

#include "vector.h"

void XXWarpPointer(Display* display, Window src_w, Window dest_w,
		   int src_x, int src_y,
		   unsigned int src_width, unsigned int src_height,
		   int dest_x, int dest_y);
#endif
