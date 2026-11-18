// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __hpxnest_h__
#define __hpxnest_h__

// HEALPix NESTED pixel <-> sky position, for any nside = 2^k up to 2^29.
// Written from the HEALPix geometry (Gorski et al. 2005, ApJ 622, 759,
// sec. 4 and 5), not taken from the HEALPix library. Positions are
// (lon, lat) in degrees in the map's own sky system; theta = 90 - lat,
// phi = lon. Near the poles the polar-cap formula is evaluated from
// cos(lat) rather than sqrt(1 - |z|), which loses precision there.
//
// A NESTED index is face*nside^2 + (ix in the even bits, iy in the odd
// bits), ix and iy the position within the base face (Gorski sec. 5).
// For HiPS (Fernique et al. 2017, HiPS 1.0 sec. 4.1): at order K with
// tile width W (nside = W << K), tile N = pix >> 2*log2(W), and in tile
// N the pixel's row from the top is ix's low log2(W) bits, its column
// iy's (see fitsy/hips.C, which reads tiles the same way).

#include <math.h>

// the bits of v spread to the even bits of the result (v < 2^32)
static inline long long hpxSpread(unsigned long long v)
{
  v &= 0xffffffffULL;
  v = (v | (v << 16)) & 0x0000ffff0000ffffULL;
  v = (v | (v << 8)) & 0x00ff00ff00ff00ffULL;
  v = (v | (v << 4)) & 0x0f0f0f0f0f0f0f0fULL;
  v = (v | (v << 2)) & 0x3333333333333333ULL;
  v = (v | (v << 1)) & 0x5555555555555555ULL;
  return (long long)v;
}

// the even bits of v, packed (the inverse of hpxSpread)
static inline long long hpxCompress(unsigned long long v)
{
  v &= 0x5555555555555555ULL;
  v = (v | (v >> 1)) & 0x3333333333333333ULL;
  v = (v | (v >> 2)) & 0x0f0f0f0f0f0f0f0fULL;
  v = (v | (v >> 4)) & 0x00ff00ff00ff00ffULL;
  v = (v | (v >> 8)) & 0x0000ffff0000ffffULL;
  v = (v | (v >> 16)) & 0x00000000ffffffffULL;
  return (long long)v;
}

// The NESTED pixel of nside (a power of 2, <= 2^29) holding (lon, lat)
// [deg]; -1 if lat is outside [-90, 90] or not a number
static inline long long hpxAng2Nest(long long nside, double lon, double lat)
{
  if (!(lat >= -90 && lat <= 90) || !(lon == lon))
    return -1;

  const double d2r = M_PI/180;
  double z = sin(lat*d2r);
  double za = fabs(z);
  // tt in [0, 4): longitude in units of 90 deg
  double tt = fmod(lon/90., 4.);
  if (tt < 0)
    tt += 4;
  if (tt >= 4)
    tt = 0;

  long long face, ix, iy;
  long long ns1 = nside - 1;
  if (za <= 2./3) {
    // equatorial region (Gorski eq. 5, 6)
    double t1 = nside*(.5 + tt);
    double t2 = nside*z*.75;
    long long jp = (long long)(t1 - t2);
    long long jm = (long long)(t1 + t2);
    long long ifp = jp/nside;
    long long ifm = jm/nside;
    if (ifp == ifm)
      face = ifp | 4;
    else if (ifp < ifm)
      face = ifp;
    else
      face = ifm + 8;
    ix = jm & ns1;
    iy = nside - (jp & ns1) - 1;
  }
  else {
    // polar caps (Gorski eq. 7, 8); sqrt(3(1 - za)) = cos(lat)*sqrt(3/(1 + za))
    long long ntt = (long long)tt;
    if (ntt >= 4)
      ntt = 3;
    double tp = tt - ntt;
    double tmp = nside*cos(lat*d2r)*sqrt(3./(1 + za));
    long long jp = (long long)(tp*tmp);
    long long jm = (long long)((1 - tp)*tmp);
    if (jp > ns1)
      jp = ns1;
    if (jm > ns1)
      jm = ns1;
    if (z >= 0) {
      face = ntt;
      ix = nside - jm - 1;
      iy = nside - jp - 1;
    }
    else {
      face = ntt + 8;
      ix = jp;
      iy = jm;
    }
  }
  return face*nside*nside + hpxSpread(ix) + 2*hpxSpread(iy);
}

// The RING pixel of nside (any nside >= 1, not only powers of 2) holding
// (lon, lat) [deg]; -1 if lat is outside [-90, 90] or not a number.
// Gorski et al. 2005 sec. 4, as healpix_base's loc2pix: rings counted
// from the north pole, the equatorial belt's rings alternately shifted
// by half a pixel.
static inline long long hpxAng2Ring(long long nside, double lon, double lat)
{
  if (!(lat >= -90 && lat <= 90) || !(lon == lon) || nside < 1)
    return -1;

  const double d2r = M_PI/180;
  double z = sin(lat*d2r);
  double za = fabs(z);
  double tt = fmod(lon/90., 4.);
  if (tt < 0)
    tt += 4;
  if (tt >= 4)
    tt = 0;

  long long nl4 = 4*nside;
  if (za <= 2./3) {
    // equatorial belt: ring ir (1..2nside+1 counted from the first belt
    // ring), pixel ip within it
    double t1 = nside*(.5 + tt);
    double t2 = nside*z*.75;
    long long jp = (long long)(t1 - t2);
    long long jm = (long long)(t1 + t2);
    long long ir = nside + 1 + jp - jm;
    long long kshift = 1 - (ir & 1);
    long long ip = ((jp + jm - nside + kshift + 1 + 2*nl4)/2) % nl4;
    long long ncap = 2*nside*(nside - 1);
    return ncap + (ir - 1)*nl4 + ip;
  }

  // polar caps; sqrt(3(1 - za)) = cos(lat)*sqrt(3/(1 + za)), as above
  long long ntt = (long long)tt;
  if (ntt >= 4)
    ntt = 3;
  double tp = tt - ntt;
  double tmp = nside*cos(lat*d2r)*sqrt(3./(1 + za));
  long long jp = (long long)(tp*tmp);
  long long jm = (long long)((1 - tp)*tmp);
  long long ir = jp + jm + 1;           // ring from the pole, 1..nside
  if (ir > nside)
    ir = nside;
  long long ip = (long long)(tt*ir);
  if (ip >= 4*ir)
    ip = 4*ir - 1;
  if (z > 0)
    return 2*ir*(ir - 1) + ip;
  return 12*nside*nside - 2*ir*(ir + 1) + ip;
}

// The centre (lon, lat) [deg] of NESTED pixel pix of nside
static inline void hpxNest2Ang(long long nside, long long pix,
			       double* lon, double* lat)
{
  // face row/column within the base resolution (Gorski fig. 4)
  static const int jrll[12] = {2,2,2,2, 3,3,3,3, 4,4,4,4};
  static const int jpll[12] = {1,3,5,7, 0,2,4,6, 1,3,5,7};

  long long npface = nside*nside;
  long long face = pix/npface;
  long long ipf = pix - face*npface;
  long long ix = hpxCompress(ipf);
  long long iy = hpxCompress(ipf >> 1);

  long long jr = jrll[face]*nside - ix - iy - 1;   // ring, 1..4nside-1
  long long nr;
  double z, sth;
  int kshift;
  if (jr < nside) {
    nr = jr;
    double tmp = (double)(nr*nr)/(3.*npface);
    z = 1 - tmp;
    sth = sqrt(tmp*(2 - tmp));
    kshift = 0;
  }
  else if (jr > 3*nside) {
    nr = 4*nside - jr;
    double tmp = (double)(nr*nr)/(3.*npface);
    z = tmp - 1;
    sth = sqrt(tmp*(2 - tmp));
    kshift = 0;
  }
  else {
    nr = nside;
    z = (2*nside - jr)*2./(3.*nside);
    sth = sqrt((1 - z)*(1 + z));
    kshift = (int)((jr - nside) & 1);
  }
  long long jp = (jpll[face]*nr + ix - iy + 1 + kshift)/2;
  if (jp > 4*nr)
    jp -= 4*nr;
  if (jp < 1)
    jp += 4*nr;
  double phi = (jp - (kshift + 1)*.5)*(M_PI/2/nr);

  *lon = phi*180/M_PI;
  *lat = atan2(z, sth)*180/M_PI;
}

#endif
