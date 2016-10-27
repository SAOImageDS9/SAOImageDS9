// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "fitsimage.h"

// Map Point

Vector FitsImage::mapFromRef(const Vector& vv, Coord::CoordSystem out,
			     Coord::SkyFrame sky)
{
  switch (out) {
  case Coord::IMAGE:
    return vv * refToImage;
  case Coord::PHYSICAL:
    return vv * refToPhysical;
  case Coord::AMPLIFIER:
    return vv * refToAmplifier;
  case Coord::DETECTOR:
    return vv * refToDetector;
  default:
    if (hasWCS(out))
      return pix2wcs(vv * refToImage, out, sky);
  }

  maperr =1;
  return vv;
}      

void FitsImage::mapFromRef(const Vector& vv, Coord::CoordSystem out,
			   Coord::SkyFrame sky, Coord::SkyFormat format,
			   char* buf)
{
  if (hasWCS(out)) {
    pix2wcs(vv * refToImage, out, sky, format, buf);
    return;
  }

  maperr =1;
  strcpy(buf,"");
}

Vector FitsImage::mapToRef(const Vector& vv, Coord::CoordSystem in,
			   Coord::SkyFrame sky)
{
  switch (in) {
  case Coord::IMAGE:
    return vv * imageToRef;
  case Coord::PHYSICAL:
    return vv * physicalToRef;
  case Coord::AMPLIFIER:
    return vv * amplifierToRef;
  case Coord::DETECTOR:
    return vv * detectorToRef;
  default:
    if (hasWCS(in))
      return wcs2pix(vv, in, sky) * imageToRef;
  }

  maperr =1;
  return vv;
}

void FitsImage::listFromRef(ostream& str, const Vector& vv,
			    Coord::CoordSystem sys, Coord::SkyFrame sky, 
			    Coord::SkyFormat format)
{
  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    str << setprecision(8) << mapFromRef(vv, sys);
    break;
  default:
    if (hasWCS(sys)) {
      if (hasWCSCel(sys)) {
	switch (format) {
	case Coord::DEGREES:
	  str << setprecision(10) << mapFromRef(vv, sys, sky);
	  break;
	case Coord::SEXAGESIMAL:
	  {
	    char buf[64];
	    buf[0] = '\0';
	    mapFromRef(vv, sys, sky, format, buf);

	    // grap only the first two items
	    char* ptr = buf;
	    while (*ptr)
	      ptr++;
	    while (*ptr != ' ' && ptr >= buf)
	      ptr--;
	    *ptr = '\0';
	    str << buf;
	  }
	  break;
	}
      }
      else
	str << setprecision(8) << mapFromRef(vv, sys);
    }
    else
      str << "0 0";
  }
}

// Map Length

double FitsImage::mapLenFromRef(double dd, Coord::CoordSystem sys,
				Coord::SkyDist dist)
{
  Vector rr = mapLenFromRef(Vector(dd,0),sys,dist);
  return rr[0];
}

Vector FitsImage::mapLenFromRef(const Vector& vv, Coord::CoordSystem sys,
				Coord::SkyDist dist)
{
  // really from image coords
  switch (sys) {
  case Coord::IMAGE:
    return mapLen(vv,refToImage);
  case Coord::PHYSICAL:
    return mapLen(vv,refToPhysical);
  case Coord::AMPLIFIER:
    return mapLen(vv,refToPhysical * physicalToAmplifier);
  case Coord::DETECTOR:
    return mapLen(vv,refToPhysical * physicalToDetector);
  default:
    if (hasWCS(sys)) {
      Vector cd = getWCScdelt(sys);
      Vector in = mapLen(vv,refToImage);
      Vector out = Vector(in[0]*cd[0], in[1]*cd[1]).abs();

      if (hasWCSCel(sys)) {
	switch (dist) {
	case Coord::DEGREE:
	  break;
	case Coord::ARCMIN:
	  out *= 60;
	  break;
	case Coord::ARCSEC:
	  out *=60*60;
	  break;
	}
      }
      return out;
    }
  }

  maperr =1;
  return Vector();
}

double FitsImage::mapLenToRef(double dd, Coord::CoordSystem sys, 
			      Coord::SkyDist dist)
{
  Vector rr = mapLenToRef(Vector(dd,0), sys, dist);
  return rr[0];
}

Vector FitsImage::mapLenToRef(const Vector& vv, Coord::CoordSystem sys,
			      Coord::SkyDist dist)
{
  switch (sys) {
  case Coord::IMAGE:
    return mapLen(vv,imageToRef);
  case Coord::PHYSICAL:
    return mapLen(vv,physicalToRef);
  case Coord::AMPLIFIER:
    return mapLen(vv,amplifierToPhysical * physicalToRef);
  case Coord::DETECTOR:
    return mapLen(vv,detectorToPhysical * physicalToRef);
  default:
    if (hasWCS(sys)) {
      Vector cd = getWCScdelt(sys);
      Vector in = mapLen(vv,refToImage);
      Vector out = Vector(in[0]/cd[0], in[1]/cd[1]).abs();

      if (hasWCSCel(sys)) {
	switch (dist) {
	case Coord::DEGREE:
	  break;
	case Coord::ARCMIN:
	  out /= 60;
	  break;
	case Coord::ARCSEC:
	  out /= 60*60;
	  break;
	}
      }
      return out;
    }
  }

  maperr =1;
  return Vector();
}

void FitsImage::listLenFromRef(ostream& str, double dd,
			       Coord::CoordSystem sys, Coord::SkyDist dist)
{
  double out = mapLenFromRef(dd, sys, dist);

  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    str << setprecision(8) << out;
    break;
  default:
    if (hasWCS(sys)) {
      if (hasWCSCel(sys)) {
	str << fixed;
	switch (dist) {
	case Coord::DEGREE:
	  str << setprecision(7);
	  break;
	case Coord::ARCMIN:
	  str << setprecision(5);
	  break;
	case Coord::ARCSEC:
	  str << setprecision(3);
	  break;
	}
	str << out;
      }
      else
	str << setprecision(8) << out;
    }
    else
      str << "0";
  }
}

void FitsImage::listLenFromRef(ostream& str, const Vector& vv,
			       Coord::CoordSystem sys, Coord::SkyDist dist)
{
  Vector out = mapLenFromRef(vv, sys, dist);

  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    str << setprecision(8) << out;
    break;
  default:
    if (hasWCS(sys)) {
      if (hasWCSCel(sys)) {
	str << fixed;
	switch (dist) {
	case Coord::DEGREE:
	  str << setprecision(7);
	  break;
	case Coord::ARCMIN:
	  str << setprecision(5);
	  break;
	case Coord::ARCSEC:
	  str << setprecision(3);
	  break;
	}
	str << out;
      }
      else
	str << setprecision(8) << out;
    }
    else
      str << "0 0";
  }
}

// Map Distance

double FitsImage::mapDistFromRef(const Vector& vv1, const Vector& vv2, 
				 Coord::CoordSystem sys, Coord::SkyDist dist)
{
  switch (sys) {
  case Coord::IMAGE:
    {
      Vector v1 = vv1 * refToImage;
      Vector v2 = vv2 * refToImage;
      return (v2-v1).length();
    }
  case Coord::PHYSICAL:
    {
      Vector v1 = vv1 * refToPhysical;
      Vector v2 = vv2 * refToPhysical;
      return (v2-v1).length();
    }
  case Coord::AMPLIFIER:
    {
      Vector v1 = vv1 * refToPhysical * physicalToAmplifier;
      Vector v2 = vv2 * refToPhysical * physicalToAmplifier;
      return (v2-v1).length();
    }
  case Coord::DETECTOR:
    {
      Vector v1 = vv1 * refToPhysical * physicalToDetector;
      Vector v2 = vv2 * refToPhysical * physicalToDetector;
      return (v2-v1).length();
    }
  default:
    if (hasWCS(sys)) {
      Vector v1 = pix2wcs(vv1 * refToImage, sys, Coord::FK5);
      Vector v2 = pix2wcs(vv2 * refToImage, sys, Coord::FK5);

      if (hasWCSCel(sys)) {
	switch (dist) {
	case Coord::DEGREE:
	  return wcsdist(v1,v2,sys);
	case Coord::ARCMIN:
	  return wcsdist(v1,v2,sys)*60;
	case Coord::ARCSEC:
	  return wcsdist(v1,v2,sys)*60*60;
	}
      }
      else
	return wcsdist(v1,v2,sys);
    }
  }

  maperr =1;
  return 0;
}

void FitsImage::listDistFromRef(ostream& str,
				const Vector& vv1, const Vector& vv2,
				Coord::CoordSystem sys, Coord::SkyDist dist)
{
  double out = mapDistFromRef(vv1, vv2, sys, dist);

  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    str << setprecision(8) << out;
    break;
  default:
    if (hasWCS(sys)) {
      if (hasWCSCel(sys)) {
	str << fixed;
	switch (dist) {
	case Coord::DEGREE:
	  str << setprecision(7);
	  break;
	case Coord::ARCMIN:
	  str << setprecision(5);
	  break;
	case Coord::ARCSEC:
	  str << setprecision(3);
	  break;
	}
	str << out;
      }
      else
	str << setprecision(8) << out;
    }
    else
      str << "0 0";
  }
}

// 3D

double FitsImage::mapFromRef3axis(double vv, Coord::CoordSystem out, int ss)
{
  switch (out) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::AMPLIFIER: 
  case Coord::DETECTOR:
    return vv+.5;
  default:
    return pix2wcsx(vv+.5,out,ss);
  }
}      

double FitsImage::mapToRef3axis(double vv, Coord::CoordSystem in, int ss)
{
  switch (in) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::AMPLIFIER: 
  case Coord::DETECTOR:
    return vv-.5;
  default:
    return wcs2pixx(vv,in,ss) -.5;
  }
}      
