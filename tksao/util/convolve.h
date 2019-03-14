// Copyright (C) 1999-2019
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __convolve_h__
#define __convolve_h__

void boxcar(double* kernel, int r);
void tophat(double* kernel, int r);
void gaussian(double* kernel, int r, double sigma);
void elliptic(double* kernel, int r, int m, double ss, double sm, double aa);

void* convolve(double* kernel, double* src, double* dest,
	       int width, int height, int k);

#endif
