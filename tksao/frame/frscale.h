// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __frscale_h__
#define __frscale_h__

#include <stdlib.h>
#include <string.h>

#include "vector.h"

class FitsImage;

class FrScale {
 public:
  enum ColorScaleType {LINEARSCALE, 
		       LOGSCALE, POWSCALE, 
		       SQRTSCALE, SQUAREDSCALE, 
		       ASINHSCALE, SINHSCALE,
		       HISTEQUSCALE, IISSCALE};
  enum ClipScope {GLOBAL, LOCAL};
  enum ClipMode {MINMAX, ZSCALE, ZMAX, AUTOCUT, USERCLIP};
  enum MinMaxMode {SCAN, SAMPLE, DATAMIN, IRAFMIN};
  enum SecMode {IMGSEC, DATASEC, CROPSEC};

 private:
  ColorScaleType colorScaleType_; // color scale type
  ClipScope clipScope_;       // color scale clip scope
  ClipMode clipMode_;         // color scale clip mode
  MinMaxMode minmaxMode_;         // method to use for determining minmax
  double low_;                // low cut level for all data
  double high_;               // high cut level for all data
  double min_;                // min for all data
  Vector minXY_;
  double max_;                // max for all data
  Vector maxXY_;
  double ulow_;               // low cut via user for all data
  double uhigh_;              // high cut via user for all data
  float expo_;                // log scale exponent
  float zContrast_;           // zscale slope transfer function
  int zSample_;               // zscale optimal sample size
  int zLine_;                 // zscale number of lines to sample
  int minmaxSample_;                // minmax sampling incr
  float autoCutPer_;          // autoCut percentage
  SecMode secMode_;         // use keyword DATASEC			  

  double* histequ_;           // image histogram equalization xfer function
  int histequSize_;

  double* histogramX_;        // scale histogram
  double* histogramY_;        // scale histogram
  int histogramSize_;

  int datasec_;

  int force_;                 // flag to force rescan min/max

 public:
  FrScale();
  ~FrScale();
  FrScale(const FrScale&);
  FrScale& operator=(const FrScale&);

  ColorScaleType colorScaleType() {return colorScaleType_;}
  ClipScope clipScope() {return clipScope_;}
  ClipMode clipMode() {return clipMode_;}
  MinMaxMode minmaxMode() {return minmaxMode_;}
  double low() {return low_;}
  double high() {return high_;}
  double min() {return min_;}
  const Vector& minXY() {return minXY_;}
  double max() {return max_;}
  const Vector& maxXY() {return maxXY_;}
  double ulow() {return ulow_;}
  double uhigh() {return uhigh_;}
  float expo() {return expo_;}
  float zContrast() {return zContrast_;}
  int zSample() {return zSample_;}
  int zLine() {return zLine_;}
  int minmaxSample() {return minmaxSample_;}
  float autoCutPer() {return autoCutPer_;}
  SecMode secMode() {return secMode_;}
  double* histogramX() {return histogramX_;}
  double* histogramY() {return histogramY_;}
  int datasec() {return datasec_;}
  int force() {return force_;}
  
  void setColorScaleType(ColorScaleType v) {colorScaleType_ = v;}
  void setClipScope(ClipScope v) {clipScope_ = v;}
  void setClipMode(ClipMode v) {clipMode_ = v;}
  void setMinMaxMode(MinMaxMode v) {minmaxMode_ = v;}
  void setLow(double v) {low_ = v;}
  void setHigh(double v) {high_ = v;}
  void setMin(double mm, const Vector& vv) {min_ = mm; minXY_ = vv;}
  void setMax(double mm, const Vector& vv) {max_ = mm; maxXY_ = vv;}
  void setULow(double v) {ulow_ = v;}
  void setUHigh(double v) {uhigh_ = v;}
  void setExpo(float e) {expo_ = e>10 ? e : 10;}
  void setZContrast(float v) {zContrast_ = v;}
  void setZSample(int v) {zSample_ = v;}
  void setZLine(int v) {zLine_ = v;}
  void setMinMaxSample(int v) {minmaxSample_ = v;}
  void setAutoCutPer(float v) {autoCutPer_ = v;}

  void setSecMode(SecMode v) {secMode_ = v;}
  void resetSecMode() {secMode_ = datasec_ ? DATASEC : IMGSEC;}
  void setDataSec(int d) {datasec_ = d;}
  void setForce(int f) {force_ = f;}

  double* histequ(FitsImage*);
  void clearHistequ();
  void histogram(FitsImage*, int);
  void clearHistogram();
};

ostream& operator<<(ostream&, FrScale&);

#endif
