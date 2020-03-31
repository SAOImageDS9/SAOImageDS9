// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "fitsimage.h"
#include "context.h"

// Map Point

Vector FitsImage::mapFromRef(const Vector& vv, Coord::CoordSystem sys,
			     Coord::SkyFrame sky)
{
  switch (sys) {
  case Coord::IMAGE:
    return vv * refToImage;
  case Coord::PHYSICAL:
    return vv * refToPhysical;
  case Coord::AMPLIFIER:
    return vv * refToAmplifier;
  case Coord::DETECTOR:
    return vv * refToDetector;
  default:
    if (hasWCS(sys))
      return pix2wcs(vv * refToImage, sys, sky);
  }

  return Vector();
}      

VectorStr FitsImage::mapFromRef(const Vector& vv, Coord::CoordSystem sys,
				Coord::SkyFrame sky, Coord::SkyFormat format)
{
  switch (sys) {
  case Coord::IMAGE:
    return VectorStr(vv * refToImage);
  case Coord::PHYSICAL:
    return VectorStr(vv * refToPhysical);
  case Coord::AMPLIFIER:
    return VectorStr(vv * refToAmplifier);
  case Coord::DETECTOR:
    return VectorStr(vv * refToDetector);
  default:
    if (hasWCS(sys))
      return pix2wcs(vv * refToImage, sys, sky, format);
  }
  
  return VectorStr();
}

Vector3d FitsImage::mapFromRef(const Vector3d& vv, Coord::CoordSystem sys,
			       Coord::SkyFrame sky)
{
  switch (sys) {
  case Coord::IMAGE:
    return vv * refToImage3d;
  case Coord::PHYSICAL:
    return vv * refToPhysical3d;
  case Coord::AMPLIFIER:
    return vv * refToAmplifier3d;
  case Coord::DETECTOR:
    return vv * refToDetector3d;
  default:
    if (hasWCS(sys))
      return pix2wcs(vv * refToImage3d, sys, sky);
  }

  return Vector3d();
}

VectorStr3d FitsImage::mapFromRef(const Vector3d& vv, Coord::CoordSystem sys,
				  Coord::SkyFrame sky, Coord::SkyFormat format)
{
  switch (sys) {
  case Coord::IMAGE:
    return VectorStr3d(vv * refToImage3d);
  case Coord::PHYSICAL:
    return VectorStr3d(vv * refToPhysical3d);
  case Coord::AMPLIFIER:
    return VectorStr3d(vv * refToAmplifier3d);
  case Coord::DETECTOR:
    return VectorStr3d(vv * refToDetector3d);
  default:
    if (hasWCS(sys))
      return pix2wcs(vv * refToImage3d, sys, sky, format);
  }

  return VectorStr3d();
}

Vector FitsImage::mapToRef(const Vector& vv, Coord::CoordSystem sys,
			   Coord::SkyFrame sky)
{
  switch (sys) {
  case Coord::IMAGE:
    return vv * imageToRef;
  case Coord::PHYSICAL:
    return vv * physicalToRef;
  case Coord::AMPLIFIER:
    return vv * amplifierToRef;
  case Coord::DETECTOR:
    return vv * detectorToRef;
  default:
    if (hasWCS(sys))
      return wcs2pix(vv, sys, sky) * imageToRef;
  }

  // special case for parsing regions files
  maperr =1;
  return Vector();
}

Vector3d FitsImage::mapToRef(const Vector3d& vv, Coord::CoordSystem sys,
			     Coord::SkyFrame sky)
{
  switch (sys) {
  case Coord::IMAGE:
    return vv * imageToRef3d;
  case Coord::PHYSICAL:
    return vv * imageToPhysical3d;
  case Coord::AMPLIFIER:
    return vv * imageToAmplifier3d;
  case Coord::DETECTOR:
    return vv * imageToDetector3d;
  default:
    if (hasWCS(sys))
      return wcs2pix(vv, sys, sky) * imageToRef3d;
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
    str << mapFromRef(vv,sys,sky,format);
    break;
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
      VectorStr rr = mapFromRef(vv,sys,sky,format);
      str1 << rr[0];
      str2 << rr[1];
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
