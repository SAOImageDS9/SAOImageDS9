// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __smooth_h__
#define __smooth_h__

void boxcar(double* kernel, int k, int r);
void tophat(double* kernel, int k, int r);
void gaussian(double* kernel, int k, int r);

#endif
