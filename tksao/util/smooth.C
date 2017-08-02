// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include <math.h>

#include "smooth.h"

void boxcar(double* kernel, int k, int r)
{
  if (r>k)
    r=k;

  int kk = 2*k+1;
  int ksz = kk*kk;

  int cnt =0;
  for (int yy=-k; yy<=k; yy++)
    for (int xx=-k; xx<=k; xx++)
      if (abs(yy) <= r && abs(xx) <= r) {
	kernel[(yy+k)*kk+(xx+k)] = 1;
	cnt++;
      }

  // normalize kernel
  if (cnt) 
    for (int ii=0; ii<ksz; ii++)
      kernel[ii] /= cnt;

  for (int yy=-k; yy<=k; yy++)
    for (int xx=-k; xx<=k; xx++)
      cerr << '(' << xx << ',' << yy << ")=" 
	   << kernel[(yy+k)*kk+(xx+k)] << endl;
}

void tophat(double* kernel, int k, int r)
{
  if (r>k)
    r=k;

  int kk = 2*k+1;
  int ksz = kk*kk;
  int rr = r*r;

  int cnt =0;
  for (int yy=-k; yy<=k; yy++)
    for (int xx=-k; xx<=k; xx++)
      if ((xx*xx + yy*yy) <= rr) {
	kernel[(yy+k)*kk+(xx+k)] = 1;
	cnt++;
      }

  // normalize kernel
  if (cnt) 
    for (int ii=0; ii<ksz; ii++)
      kernel[ii] /= cnt;

  for (int yy=-k; yy<=k; yy++)
    for (int xx=-k; xx<=k; xx++)
      cerr << '(' << xx << ',' << yy << ")=" 
	   << kernel[(yy+k)*kk+(xx+k)] << endl;
}

void gaussian(double* kernel, int k, int r)
{
  if (r>k)
    r=k;

  int k2 = k*k;
  int kk = 2*k+1;
  int ksz = kk*kk;
  double sigma = r/2.;
  double s2 = sigma*sigma;

  double total =0;
  for (int yy=-k; yy<=k; yy++)
    for (int xx=-k; xx<=k; xx++)
      if ((xx*xx + yy*yy) <= k2) {
	double vv = exp(-.5*((xx*xx + yy*yy)/s2));
	kernel[(yy+k)*kk+(xx+k)] = vv;
	total += vv;
      }

  // normalize kernel
  if (total) 
    for (int ii=0; ii<ksz; ii++)
      kernel[ii] /= total;
}

