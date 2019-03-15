// Copyright (C) 1999-2019
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __convolve_h__
#define __convolve_h__

typedef struct {
  double* kernel;
  double* src;
  double* dest;
  int xmin;
  int ymin;
  int xmax;
  int ymax;
  int width;
  int r;
} t_convolve_arg;

double* boxcar(int r);
double* tophat(int r);
double* gaussian(int r, double sigma);
double* elliptic(int r, int m, double ss, double sm, double aa);

void* convolveThread(void* vv);
void* convolve(double* kernel, double* src, double* dest,
	       int xmin, int ymin, int xmax, int ymax, int width, int k);

#endif
