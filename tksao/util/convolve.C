// Copyright (C) 1999-2019
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <math.h>

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include "convolve.h"

void boxcar(double* kernel, int k)
{
  int kk = 2*k+1;
  int kk2 = kk*kk;

  for (int yy=-k; yy<=k; yy++)
    for (int xx=-k; xx<=k; xx++)
	kernel[(yy+k)*kk+(xx+k)] = 1;

  // normalize kernel
  for (int ii=0; ii<kk2; ii++)
    kernel[ii] /= kk2;

  //  dumpKernel(kernel, k);
}

void tophat(double* kernel, int k)
{
  int k2 = k*k;
  int kk = 2*k+1;
  int kk2 = kk*kk;

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

  //  dumpKernel(kernel, k);
}

void gaussian(double* kernel, int k, double ss)
{
  int kk = 2*k+1;
  int k2 = k*k;
  int kk2 = kk*kk;
  double s2 = ss*ss;

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

  // dumpKernel(kernel, k);
}

void elliptic(double* kernel, int k, int rm, double ss, double sm, double aa)
{
  int kk = 2*k+1;
  int kk2 = kk*kk;
  double s2 = ss*ss;
  double sm2 = sm*sm;

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

  // dumpKernel(kernel, k);
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
	       int width, int height, int k)
{
  int kk = 2*k+1;

  double* dptr = dest;
  for (int jj=0; jj<height; jj++) {
    for (int ii=0; ii<width; ii++, dptr++) {

      for (int nn=jj-k, qq=0; nn<=jj+k; nn++, qq++) {
	if (nn>=0 && nn<height) {
	  register int nd = nn*width;
	  register int qd = qq*kk;
	  for (int mm=ii-k, pp=0; mm<=ii+k; mm++, pp++) {
	    if (mm>=0 && mm<width)
	      *dptr += src[nd+mm]*kernel[qd+pp];
	  }
	}
      }
    }
  }

  return NULL;
}
