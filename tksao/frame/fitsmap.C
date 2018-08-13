// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "fitsimage.h"
#include "context.h"

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
  if (hasWCS(out))
    pix2wcs(vv * refToImage, out, sky, format, buf);
  else
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

void FitsImage::listFromRef(ostream& str, const Vector& vv,
			    Coord::CoordSystem sys, Coord::SkyFrame sky, 
			    Coord::SkyFormat format)
{
  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    str << setprecision(context_->parent_->precLinear_) << mapFromRef(vv, sys);
    break;
  default:
    {
      char buf[128];
      mapFromRef(vv,sys,sky,format,buf);
      str << buf;
    }
  }
}

void FitsImage::listFromRef(ostream& str1, ostream& str2, const Vector& vv,
			    Coord::CoordSystem sys, Coord::SkyFrame sky, 
			    Coord::SkyFormat format)
{
  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    {
      Vector rr = mapFromRef(vv, sys);
      str1 << setprecision(context_->parent_->precLinear_) << rr[0];
      str2 << setprecision(context_->parent_->precLinear_) << rr[1];
    }
    break;
  default:
    {
      char buf[128];
      char* bptr = buf;
      mapFromRef(vv,sys,sky,format,buf);

      // lon
      char* lonptr = buf;
      while (*bptr && *bptr != ' ')
	bptr++;
      *bptr = '\0';

      // lat
      bptr++;
      char* latptr = bptr;
      while (*bptr && *bptr != ' ')
	bptr++;
      *bptr = '\0';

      str1 << lonptr;
      str2 << latptr;
    }
  }
}

// Map Length

Vector FitsImage::mapLen(const Vector& vv, const Matrix& mx)
{
  // imageToPhysical/Amplifier/Dector have no rotation, only scale/translation
  // just grap scale
  return vv*Scale(mx);

  // remove translation
  //  Vector tt = Vector() * mx;
  //  Matrix sr = mx * Translate(-tt);

  // remove rotation
  //  Vector rr = Vector(1,0) * sr;
  //  Matrix ss = sr * Rotate(rr.angle());

  // all that is left is Scaling
  //  return (vv*ss).abs();
}

double FitsImage::mapLenFromRef(double dd, Coord::CoordSystem sys,
				Coord::DistFormat dist)
{
  Vector rr = mapLenFromRef(Vector(0,dd),sys,dist);
  return rr[1];
}

Vector FitsImage::mapLenFromRef(const Vector& vv, Coord::CoordSystem sys,
				Coord::DistFormat dist)
{
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
      Vector out = vv*getWCSSize(sys);
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

double FitsImage::mapLenToRef(double dd, Coord::CoordSystem sys, 
			      Coord::DistFormat dist)
{
  Vector rr = mapLenToRef(Vector(0,dd), sys, dist);
  return rr[1];
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
      Vector out = vv/getWCSSize(sys);
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

void FitsImage::listLenFromRef(ostream& str, double dd,
			       Coord::CoordSystem sys, Coord::DistFormat dist)
{
  double out = mapLenFromRef(dd, sys, dist);

  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    str << setprecision(context_->parent_->precLenLinear_) << out;
    break;
  default:
    if (hasWCS(sys)) {
      if (hasWCSCel(sys)) {
	switch (dist) {
	case Coord::DEGREE:
	  str << setprecision(context_->parent_->precLenDeg_);
	  break;
	case Coord::ARCMIN:
	  str << setprecision(context_->parent_->precArcmin_);
	  break;
	case Coord::ARCSEC:
	  str << setprecision(context_->parent_->precArcsec_);
	  break;
	}
	str << fixed << out;
	str.unsetf(ios_base::floatfield);
      }
      else
	str << setprecision(context_->parent_->precLenLinear_) << out;
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
    str << setprecision(context_->parent_->precLenLinear_) << out;
    break;
  default:
    if (hasWCS(sys)) {
      if (hasWCSCel(sys)) {
	switch (dist) {
	case Coord::DEGREE:
	  str << setprecision(context_->parent_->precLenDeg_);
	  break;
	case Coord::ARCMIN:
	  str << setprecision(context_->parent_->precArcmin_);
	  break;
	case Coord::ARCSEC:
	  str << setprecision(context_->parent_->precArcsec_);
	  break;
	}
	str << fixed << out;
	str.unsetf(ios_base::floatfield);
      }
      else
	str << setprecision(context_->parent_->precLenLinear_) << out;
    }
    else
      str << "0 0";
  }
}

void FitsImage::listLenFromRef(ostream& str1, ostream& str2,
			       const Vector& vv,
			       Coord::CoordSystem sys, Coord::DistFormat dist)
{
  Vector out = mapLenFromRef(vv, sys, dist);

  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    str1 << setprecision(context_->parent_->precLenLinear_) << out[0];
    str2 << setprecision(context_->parent_->precLenLinear_) << out[1];
    break;
  default:
    if (hasWCS(sys)) {
      if (hasWCSCel(sys)) {
	switch (dist) {
	case Coord::DEGREE:
	  str1 << setprecision(context_->parent_->precLenDeg_);
	  str2 << setprecision(context_->parent_->precLenDeg_);
	  break;
	case Coord::ARCMIN:
	  str1 << setprecision(context_->parent_->precArcmin_);
	  str2 << setprecision(context_->parent_->precArcmin_);
	  break;
	case Coord::ARCSEC:
	  str1 << setprecision(context_->parent_->precArcsec_);
	  str2 << setprecision(context_->parent_->precArcsec_);
	  break;
	}
	str1 << fixed << out[0];
	str2 << fixed << out[1];
	str1.unsetf(ios_base::floatfield);
	str2.unsetf(ios_base::floatfield);
      }
      else {
	str1 << setprecision(context_->parent_->precLenLinear_) << out[0];
	str2 << setprecision(context_->parent_->precLenLinear_) << out[1];
      }
    }
    else {
      str1 << "0";
      str2 << "0";
    }
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

      double rr = getWCSDist(v1,v2,sys);
      if (hasWCSCel(sys)) {
	switch (dist) {
	case Coord::DEGREE:
	  break;
	case Coord::ARCMIN:
	  rr *= 60;
	  break;
	case Coord::ARCSEC:
	  rr *= 60*60;
	  break;
	}
      }
      return rr;
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
    str << setprecision(context_->parent_->precLenLinear_) << out;
    break;
  default:
    if (hasWCS(sys)) {
      if (hasWCSCel(sys)) {
	switch (dist) {
	case Coord::DEGREE:
	  str << setprecision(context_->parent_->precLenDeg_);
	  break;	case Coord::ARCMIN:
	  str << setprecision(context_->parent_->precArcmin_);
	  break;
	case Coord::ARCSEC:
	  str << setprecision(context_->parent_->precArcsec_);
	  break;
	}
	str << fixed << out;
	str.unsetf(ios_base::floatfield);
      }
      else
	str << setprecision(context_->parent_->precLenLinear_) << out;
    }
    else
      str << "0 0";
  }
}

// 3D

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
