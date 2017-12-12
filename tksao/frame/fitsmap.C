// Copyright (C) 1999-2017
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

  return Vector();
}      

void FitsImage::mapFromRef(const Vector& vv, Coord::CoordSystem out,
			   Coord::SkyFrame sky, Coord::SkyFormat format,
			   char* buf)
{
  if (hasWCS(out)) {
    pix2wcs(vv * refToImage, out, sky, format, buf);
    return;
  }

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

  // special case for parsing regions files
  maperr =1;
  return Vector();
}

#ifdef NEWWCS
Vector3d FitsImage::mapFromRef(const Vector3d& vv, Coord::CoordSystem out,
			       Coord::SkyFrame sky)
{
  switch (out) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::AMPLIFIER:
  case Coord::DETECTOR:
    return vv * refToImage3d;
  default:
    if (hasWCS(out))
      return pix2wcs(vv * refToImage3d, out, sky);
  }

  return Vector3d();
}

Vector3d FitsImage::mapToRef(const Vector3d& vv, Coord::CoordSystem in,
			     Coord::SkyFrame sky)
{
  switch (in) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::AMPLIFIER:
  case Coord::DETECTOR:
    return vv * imageToRef3d;
  default:
    if (hasWCS(in))
      return wcs2pix(vv, in, sky) * imageToRef3d;
  }

  return Vector3d();
}
#endif

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

#ifndef NEWWCS
double FitsImage::mapLenFromRef(double dd, Coord::CoordSystem sys,
				Coord::DistFormat dist)
{
  Vector rr = mapLenFromRef(Vector(dd,0),sys,dist);
  return rr[0];
}

Vector FitsImage::mapLenFromRef(const Vector& vv, Coord::CoordSystem sys,
				Coord::DistFormat dist)
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

  return Vector();
}
#else
double FitsImage::mapLenFromRef(double dd, Coord::CoordSystem sys,
				Coord::DistFormat dist)
{
  // really from image coords
  switch (sys) {
  case Coord::IMAGE:
    return dd*refToImage[1].length();
  case Coord::PHYSICAL:
    return dd*refToPhysical[1].length();
  case Coord::AMPLIFIER:
    return dd*(refToPhysical * physicalToAmplifier)[1].length();
  case Coord::DETECTOR:
    return dd*(refToPhysical * physicalToDetector)[1].length();
  default:
    {
      astClearStatus; // just to make sure

      if (!hasWCS(sys))
	return 0;
      
      setWCSSystem(sys);
      setWCSSkyFrame(ast_, Coord::FK5);

      Vector in[2];
      Vector out[2];
      in[0] = center();
      in[1] = center()+Vector(0,dd);
      wcsTran(2, in, 1, out);
      double rr = wcsDistance(out[0], out[1]);

      if (wcsIsASkyFrame(ast_)) {
	rr = radToDeg(rr);
	switch (dist) {
	case Coord::DEGREE:
	  break;
	case Coord::ARCMIN:
	  rr *= 60.;
	  break;
	case Coord::ARCSEC:
	  rr *= 60.*60.;
	  break;
	}
      }
      return rr;
    }
  }

  return 0;
}

Vector FitsImage::mapLenFromRef(const Vector& vv, Coord::CoordSystem sys, 
				Coord::DistFormat dist)
{
  double rx = mapLenFromRef(((Vector)vv)[0],sys,dist);
  double ry = mapLenFromRef(((Vector)vv)[1],sys,dist);
  return Vector(rx,ry);
}
#endif

#ifndef NEWWCS
double FitsImage::mapLenToRef(double dd, Coord::CoordSystem sys, 
			      Coord::DistFormat dist)
{
  Vector rr = mapLenToRef(Vector(dd,0), sys, dist);
  return rr[0];
}

Vector FitsImage::mapLenToRef(const Vector& vv, Coord::CoordSystem sys,
			      Coord::DistFormat dist)
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

  return Vector();
}
#else
double FitsImage::mapLenToRef(double dd, Coord::CoordSystem sys, 
			      Coord::DistFormat dist)
{
  switch (sys) {
  case Coord::IMAGE:
    return dd*imageToRef[1].length();
  case Coord::PHYSICAL:
    return dd*physicalToRef[1].length();
  case Coord::AMPLIFIER:
    return dd*(amplifierToPhysical * physicalToRef)[1].length();
  case Coord::DETECTOR:
    return dd*(detectorToPhysical * physicalToRef)[1].length();
  default:
    {
      if (!hasWCS(sys))
	return 0;
      
      astClearStatus; // just to make sure
      setWCSSystem(sys);

      double rdd = dd;
      if (wcsIsASkyFrame(ast_)) {
	rdd = degToRad(dd);
	switch (dist) {
	case Coord::DEGREE:
	  break;
	case Coord::ARCMIN:
	  rdd /= 60.;
	  break;
	case Coord::ARCSEC:
	  rdd /= 60.*60.;
	  break;
	}
      }

      Vector cc = center();
      Vector wcc = wcsTran(cc,1);
      Vector wpp = wcc+Vector(0,rdd);
      Vector pp = wcsTran(wpp,0);
      astInvert(ast_);
      double rr = wcsDistance(cc, pp);
      astInvert(ast_);

      return rr;
    }
  }

  return 0;
}

Vector FitsImage::mapLenToRef(const Vector& vv, Coord::CoordSystem sys,
			      Coord::DistFormat dist)
{
  double rx = mapLenToRef(((Vector)vv)[0],sys,dist);
  double ry = mapLenToRef(((Vector)vv)[1],sys,dist);
  return Vector(rx,ry);
}
#endif

void FitsImage::listLenFromRef(ostream& str, double dd,
			       Coord::CoordSystem sys, Coord::DistFormat dist)
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
			       Coord::CoordSystem sys, Coord::DistFormat dist)
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
				 Coord::CoordSystem sys, Coord::DistFormat dist)
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
	  return getWCSDist(v1,v2,sys);
	case Coord::ARCMIN:
	  return getWCSDist(v1,v2,sys)*60;
	case Coord::ARCSEC:
	  return getWCSDist(v1,v2,sys)*60*60;
	}
      }
      else
	return getWCSDist(v1,v2,sys);
    }
  }

  return 0;
}

void FitsImage::listDistFromRef(ostream& str,
				const Vector& vv1, const Vector& vv2,
				Coord::CoordSystem sys, Coord::DistFormat dist)
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

#ifndef NEWWCS
double FitsImage::mapFromImage3d(double dd, Coord::CoordSystem sys)
{
  if (sys >= Coord::WCS)
    return pix2wcsx(dd,sys);
  else
    return dd;
}      

double FitsImage::mapToImage3d(double dd, Coord::CoordSystem sys)
{
  if (sys >= Coord::WCS)
    return wcs2pixx(dd,sys);
  else
    return dd;
}      
#else
double FitsImage::mapFromImage3d(double dd, Coord::CoordSystem sys)
{
  if (hasWCS(sys)) {
    Vector3d cc(center(),dd);
    Vector3d rr = pix2wcs(cc,sys,Coord::FK5);
    return rr[2];
  }
  else
    return dd;
}      

double FitsImage::mapToImage3d(double dd, Coord::CoordSystem sys)
{
  if (hasWCS(sys)) {
    Vector3d cc(center(),1);
    Vector3d wcc = pix2wcs(cc,sys,Coord::FK5);
    Vector3d rr = wcs2pix(Vector3d(wcc[0],wcc[1],dd),sys,Coord::FK5);
    return rr[2];
  }
  else
    return dd;
}      
#endif
