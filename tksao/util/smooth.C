// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include <math.h>

#include "smooth.h"

void boxcar(double* kernel, int r)
{
  int rr = 2*r+1;
  int ksz = rr*rr;
  
  double* ptr = kernel;
  for (int jj=0; jj<rr; jj++)
    for (int ii=0; ii<rr; ii++, ptr++)
      *ptr = 1./ksz;
}

void tophat(double* kernel, int r)
{
  int rr = 2*r+1;
  int ksz = rr*rr;
  
  double kt = 0;
  for (int y=-r; y<=r; y++) {
    for (int x=-r; x<=r; x++) { 
      if ((x*x + y*y) <= r*r) {
	kernel[(y+r)*rr+(x+r)] = 1;
	kt++;
      }
    }
  }

  // normalize kernel
  for (int aa=0; aa<ksz; aa++)
    kernel[aa] /= kt;
}

void gaussian(double* kernel, int r)
{
  int rr = 2*r+1;
  int ksz = rr*rr;
  double sigma = r/2.;
  double s2 = sigma*sigma;
  
  double kt = 0;
  for (int y=-r; y<=r; y++) {
    for (int x=-r; x<=r; x++) { 
      if ((x*x + y*y) <= r*r) {
	double vv = exp(-.5*((x*x + y*y)/s2));
	kernel[(y+r)*rr+(x+r)] = vv;
	kt += vv;
      }
    }
  }

  // normalize kernel
  for (int aa=0; aa<ksz; aa++)
    kernel[aa] /= kt;
}

