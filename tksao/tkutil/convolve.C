// Copyright (C) 1999-2019
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <math.h>

#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstring>
using namespace std;

#include "convolve.h"

double* boxcar(int k)
{
  int kk = 2*k+1;
  int kk2 = kk*kk;

  double* kernel = new double[kk*kk];
  memset(kernel, 0, kk*kk*sizeof(double));

  for (int yy=-k; yy<=k; yy++)
    for (int xx=-k; xx<=k; xx++)
	kernel[(yy+k)*kk+(xx+k)] = 1;

  // normalize kernel
  for (int ii=0; ii<kk2; ii++)
    kernel[ii] /= kk2;

  return kernel;
}

double* tophat(int k)
{
  int kk = 2*k+1;
  int k2 = k*k;
  int kk2 = kk*kk;

  double* kernel = new double[kk*kk];
  memset(kernel, 0, kk*kk*sizeof(double));

  int cnt =0;
  for (int yy=-k; yy<=k; yy++)
    for (int xx=-k; xx<=k; xx++)
      if ((xx*xx + yy*yy)/k2 <= 1) {
	kernel[(yy+k)*kk+(xx+k)] = 1;
	cnt++;
      }

  // normalize kernel
  if (cnt) 
    for (int ii=0; ii<kk2; ii++)
      kernel[ii] /= cnt;

  return kernel;
}

double* gaussian(int k, double ss)
{
  int kk = 2*k+1;
  int k2 = k*k;
  int kk2 = kk*kk;
  double s2 = ss*ss;

  double* kernel = new double[kk*kk];
  memset(kernel, 0, kk*kk*sizeof(double));

  double tt =0;
  for (int yy=-k; yy<=k; yy++)
    for (int xx=-k; xx<=k; xx++) {
      if ((xx*xx + yy*yy) <= k2) {
	double vv = exp(-.5*((xx*xx + yy*yy)/s2));
	kernel[(yy+k)*kk+(xx+k)] = vv;
	tt += vv;
      }
    }

  // normalize kernel
  if (tt) 
    for (int ii=0; ii<kk2; ii++)
      kernel[ii] /= tt;

  return kernel;
}

double* elliptic(int k, int rm, double ss, double sm, double aa)
{
  int kk = 2*k+1;
  int kk2 = kk*kk;
  double s2 = ss*ss;
  double sm2 = sm*sm;

  double* kernel = new double[kk*kk];
  memset(kernel, 0, kk*kk*sizeof(double));

  double a = cos(aa)*cos(aa)/(2*s2) + sin(aa)*sin(aa)/(2*sm2);
  double b = -sin(2*aa)/(4*s2) + sin(2*aa)/(4*sm2);
  double c = sin(aa)*sin(aa)/(2*s2) + cos(aa)*cos(aa)/(2*sm2);

  double tt =0;
  for (int yy=-k; yy<=k; yy++) {
    for (int xx=-k; xx<=k; xx++) {
      double dd = xx*cos(aa)+yy*sin(aa);
      double ee = xx*sin(aa)-yy*cos(aa);
      if ((dd*dd)/(k*k) + (ee*ee)/(rm*rm) <= 1) {
	double vv = exp(-(a*xx*xx + 2*b*xx*yy + c*yy*yy));
	kernel[(yy+k)*kk+(xx+k)] = vv;
	tt += vv;
      }
    }
  }

  // normalize kernel
  if (tt) 
    for (int ii=0; ii<kk2; ii++)
      kernel[ii] /= tt;

  return kernel;
}

void dumpKernel(double* kernel, int k)
{
  int kk = 2*k+1;

  for (int yy=-k; yy<=k; yy++)
    for (int xx=-k; xx<=k; xx++)
      cerr << '(' << xx << ',' << yy << ")=" 
	   << kernel[(yy+k)*kk+(xx+k)] << endl;
}

void* convolve(double* kernel, double* src, double* dest,
	       int xmin, int ymin, int xmax, int ymax, int width, int k)
{
  int kk = 2*k+1;

  for (int jj=ymin; jj<ymax; jj++) {
    for (int ii=xmin; ii<xmax; ii++) {
      register int dd = jj*width+ii;
      for (int nn=jj-k, qq=0; nn<=jj+k; nn++, qq++) {
	if (nn>=ymin && nn<ymax) {
	  register int nd = nn*width;
	  register int qd = qq*kk;
	  for (int mm=ii-k, pp=0; mm<=ii+k; mm++, pp++) {
	    if (mm>=xmin && mm<xmax)
	      dest[dd] += src[nd+mm]*kernel[qd+pp];
	  }
	}
      }
    }
  }

  return NULL;
}
