// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include <tkMacOSXPrivate.h>

void XXWarpPointer(Display* display, Window src_w, Window dest_w,
		     int src_x, int src_y,
		     unsigned int src_width, unsigned int src_height,
		     int dest_x, int dest_y)
{
    int xx, yy;
    if (dest_w)
      Tk_GetRootCoords(Tk_IdToWindow(display,dest_w), &xx, &yy);
    else
      XQueryPointer(display, dest_w, NULL, NULL, &xx, &yy, NULL, NULL, NULL);

    CGPoint pt;
    pt.x = xx+dest_x;
    pt.y = yy+dest_y;

    CGEventSourceRef src = CGEventSourceCreate(kCGEventSourceStateCombinedSessionState);
    CGEventRef ev = CGEventCreateMouseEvent(src,kCGEventMouseMoved,pt,kCGMouseButtonLeft);
    CGEventPost(kCGSessionEventTap,ev);
    CFRelease(ev);
    CFRelease(src);
}
