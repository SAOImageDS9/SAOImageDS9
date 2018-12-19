// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsdata_h__
#define __fitsdata_h__

#include "base.h"
#include "file.h"

class ColorScale;
class FitsFile;

class FitsBound { 
 public:
  int xmin;
  int xmax;
  int ymin;
  int ymax;

 public:
  FitsBound() {xmin= xmax= ymin= ymax= 0;}
  FitsBound(int x0, int y0, int x1, int y1) 
    {xmin=x0; xmax=x1; ymin=y0; ymax=y1;}
  FitsBound(const FitsBound &bb)
    {xmin=bb.xmin; xmax=bb.xmax; ymin=bb.ymin; ymax=bb.ymax;}
  void set(int x0, int y0, int x1, int y1) {xmin=x0; xmax=x1; ymin=y0; ymax=y1;}
};
ostream& operator<<(ostream&, const FitsBound&);

class FitsData {
protected:
  Tcl_Interp* interp_;

  long width_;
  long height_;
  char buf_[32];

  int byteswap_;

  double bscale_;
  double bzero_;
  int hasscaling_;

  int blank_;
  int hasblank_;

  double min_;         // bscale applied
  Vector minXY_;
  double max_;         // bscale applied
  Vector maxXY_;

  double high_;        // bscale applied
  double low_;         // bscale applied

  float zHigh_;        // bscale applied
  float zLow_;         // bscale applied
  double aLow_;	       // bscale applied		    
  double aHigh_;       // bscale applied		    
  double ulow_;	       // bscale applied		    
  double uhigh_;       // bscale applied		    

  int scanValid_;
  int minmaxSample_;

  float zContrast_;
  int zSample_;
  int zLine_;
  int zscaleValid_;

  int autoCutValid_;
  float autoCutPer_;

  FrScale::ClipMode clipMode_;
  FrScale::MinMaxMode minmaxMode_;
  FrScale::SecMode secMode_;

  double datamin_;      // bscale applied
  double datamax_;      // bscale applied
  int hasdatamin_;

  double irafmin_;      // bscale applied
  double irafmax_;      // bscale applied
  int hasirafmin_;

  // zscale constants

  enum PixelType {GOOD_PIXEL, BAD_PIXEL, REJECT_PIXEL};

  int zSubSample(float*, float*, int, int);
  int zFitLine(float*, int, float*, float*, float, int, int);
  void zFlattenData (float*, float*, float*, int npix, float, float dz);
  int zComputeSigma (float*, short*, int npix, float*, float*);
  int zRejectPixels (float*, float*, float*, short*, int, double*, 
		     double*, double*, double*, float, int);

 protected:
  void autoCut(FitsBound*);
  int calcIncr();

public:
  FitsData(FitsFile*, Tcl_Interp*);
  virtual ~FitsData();

  virtual void* data() =0;
  virtual const char* getValue(const Vector&) =0;
  virtual float getValueFloat(const Vector&) =0;
  virtual double getValueDouble(const Vector&) =0;

  virtual float getValueFloat(long) =0;
  virtual double getValueDouble(long) =0;

  double min();
  const Vector& minXY() {return minXY_;}
  double max();
  const Vector& maxXY() {return maxXY_;}

  const char* getMin();
  const char* getMinX();
  const char* getMinY();
  const char* getMax();
  const char* getMaxX();
  const char* getMaxY();
  const char* getLow();
  const char* getHigh();

  double low() {return low_;}
  double high() {return high_;}

  void setClip(double ll, double hh) {low_ =ll; high_ =hh;}

  virtual void updateClip(FrScale*, FitsBound*) =0;
  int hasDATAMIN() {return hasdatamin_;}
  int hasIRAFMIN() {return hasirafmin_;}

  virtual void hist(double*,int,double,double,FitsBound*) =0;
};

template<class T>
class FitsDatam : public FitsData {
 private:
  T* data_;

  void scan(FitsBound*);
  void output(ostringstream&, T);
  void zscale(FitsBound*);
  int zSampleImage(float**,FitsBound*);

 public:
  FitsDatam(FitsFile*, Tcl_Interp*);

  T swap(T*);

  void* data() {return data_;}
  const char* getValue(const Vector&);

  float getValueFloat(const Vector&);
  double getValueDouble(const Vector&);

  float getValueFloat(long i);
  double getValueDouble(long i);

  void updateClip(FrScale*, FitsBound*);
  void hist(double*, int, double, double, FitsBound*);
};

#endif
