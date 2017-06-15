// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __win32lib_h__
#define __win32lib_h__

#include <tk.h>

#include <X11/Xlib.h>
#include <X11/Xutil.h>

#include "vector.h"

void win32Begin();
void win32End();

void win32Color(XColor*);
void win32Width(float);
void win32Dash(float*,int);
void win32Font(Tk_Font);
void win32Clip(Vector, Vector);

void win32NewPath();
void win32Stroke();
void win32Fill();
void win32Arc(Vector, float, float, float);
void win32Curve(Vector, Vector, Vector, Vector);

void win32DrawText(Vector, float, const char*);
void win32DrawLine(Vector, Vector);
void win32DrawLines(Vector*, int);
void win32FillPolygon(Vector*, int);
void win32DrawArc(Vector, float, float, float);

void win32BitmapCreate(void*, int, int, const Vector&, const Vector&);

#endif
