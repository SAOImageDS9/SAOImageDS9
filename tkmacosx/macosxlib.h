// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __macosxlib_h__
#define __macosxlib_h__

#include <X11/Xlib.h>
#include <X11/Xutil.h>

#include "vector.h"

void macosxBegin();
void macosxEnd();

void macosxColor(XColor*);
void macosxWidth(float);
void macosxDash(float*,int);
void macosxFont(const char*, float);
void macosxClip(Vector, Vector);

void macosxNewPath();
void macosxStroke();
void macosxFill();
void macosxArc(Vector, float, float, float);
void macosxCurve(Vector, Vector, Vector, Vector);

void macosxDrawText(Vector, float, const char*);
void macosxDrawLine(Vector, Vector);
void macosxDrawLines(Vector*, int);
void macosxFillPolygon(Vector*, int);
void macosxDrawArc(Vector, float, float, float);

void macosxBitmapCreate(void*, int, int, const Vector&, const Vector&);

#endif
