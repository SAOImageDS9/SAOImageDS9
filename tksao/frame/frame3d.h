// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __frame3d_h__
#define __frame3d_h__

#include "context.h"
#include "frame3dbase.h"
#include "colorscale.h"

typedef struct {
  Frame3dBase::RenderMethod renderMethod;
  int width;
  float* zbuf;
  unsigned char* mkzbuf;
  Context* context;

  Matrix3d matrix;

  int* xid;
  int* yid;
  int start;
  int stop;
  int zstart;
  int zstop;

  int rays;
  int abort;
  int done;
} t_arg;

class Frame3d : public Frame3dBase {
 protected:
  int cmapID;                // current colormap id
  float bias;                // current colormap bias
  float contrast;            // current colormap contrast

  long* colormapData;

  int colorCount;            // number of dynamic colors
  ColorScale* colorScale;    // current color scale
  unsigned char* colorCells; // current color values

  pthread_t* thread_;

  int status_;
  t_arg* targ_;
  int nrays_;
  int* xid_;
  int* yid_;
  Tcl_TimerToken timer_;
  RayTrace* rt_;
  RayTrace* rtb_;
  int rtbcnt_;

 private:
  void cancelDetach();
  void fillImageDetach(RayTrace*);
  int bkgDetach(double az, double el);

  BBox3d imageBounds(int, int, Matrix3d);
  void ibv3d(Vector3d, Matrix3d&, int, int, double*, double*);
  int fillImageJoin(RayTrace*);
  unsigned char* fillImageColor(RayTrace*);
  RayTrace* findInCache(List<RayTrace>&, double, double);
  void cacheIt(List<RayTrace>&, RayTrace*);

  void reset();

  void setKeyFits() {}

  void pushMatrices();
  void pushMagnifierMatrices();
  void pushPannerMatrices();
  void pushPSMatrices(float, int, int);

  void unloadFits();


 protected:
  int isFrame3d() {return 1;}

  unsigned char* fillImage(int width, int height, Coord::InternalSystem);

  void updateColorCells(unsigned char*, int);
  int validColorScale() {return colorScale ? 1 : 0;}

 public:
  Frame3d(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~Frame3d();

  void setTimer(Tcl_TimerToken tt) {timer_ = tt;}
  int processDetach();

  void getColorbarCmd();
  void getRGBChannelCmd();
  void getRGBSystemCmd();
  void getRGBViewCmd();
  void getTypeCmd();

  void colormapCmd(int, float, float, int, unsigned char*, int);
  void colormapEndCmd();
  void colormapMotionCmd(int id, float b, float c, int i, 
			 unsigned char* cells, int cnt)
  {colormapCmd(id, b, c, i, cells, cnt);}

  void savePhotoCmd(const char*);
};

#endif
