// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __frame3dbase_h__
#define __frame3dbase_h__

#include "base.h"
#include "raytrace.h"

class Grid3d;

class Frame3dBase : public Base {
  friend class Grid3d;

 public:
  enum RenderMethod {MIP,AIP};
  enum MotionType {NONE,AZIMUTH,ELEVATION};

 protected:
  int zdepth_;
  double zzoom_;
  double zscale_;
  Vector3d vp_;
  Vector viewCursor_;

  float az_;
  float el_;
  RenderMethod renderMethod_;

  List<RayTrace> cache_;
  List<RayTrace> pannerCache_;
  int preservecache_;
  
  MotionType render_;     // enable background rendering

  GC pannerGC;
  GC threedGC;

  int border_;
  char* borderColorName_;
  int compass_;
  char* compassColorName_;
  int highlite_;
  char* highliteColorName_;

  double cropsl_;

  Matrix3d refToUser3d;
  Matrix3d userToRef3d;
  Matrix3d refToWidget3d;
  Matrix3d widgetToRef3d;
  Matrix3d refToCanvas3d;
  Matrix3d canvasToRef3d;
  Matrix3d refToWindow3d;
  Matrix3d windowToRef3d;

  Matrix3d userToWidget3d;
  Matrix3d widgetToUser3d;
  Matrix3d userToCanvas3d;
  Matrix3d canvasToUser3d;
  Matrix3d userToWindow3d;
  Matrix3d windowToUser3d;

  Matrix3d widgetToCanvas3d;
  Matrix3d canvasToWidget3d;
  Matrix3d widgetToWindow3d;
  Matrix3d windowToWidget3d;

  Matrix3d canvasToWindow3d;
  Matrix3d windowToCanvas3d;

  Matrix3d refToMagnifier3d;
  Matrix3d magnifierToRef3d;
  Matrix3d userToMagnifier3d;
  Matrix3d magnifierToUser3d;
  Matrix3d widgetToMagnifier3d;
  Matrix3d magnifierToWidget3d;

  Matrix3d refToPanner3d;
  Matrix3d pannerToRef3d;
  Matrix3d userToPanner3d;
  Matrix3d pannerToUser3d;
  Matrix3d widgetToPanner3d;
  Matrix3d pannerToWidget3d;

 private:
  void calcBorder(Coord::InternalSystem, FrScale::SecMode mode,
		  Vector3d* vv, int* dd);
  void calcHighlite(Coord::InternalSystem, Vector*, int*);
  void coordToTclArray(FitsImage*, const Vector3d&, Coord::CoordSystem, 
		       const char*, const char*);

  void getInfoWCS(char*, Vector3d&, FitsImage*);

 protected:
  double calcZoomPanner();
  double calcZoom3d(Vector3d, Vector);
  virtual void cancelDetach() =0;
  void centerImage();


  int isAzElZero() {return !az_ && !el_;}

  Vector3d imageCenter3d(FrScale::SecMode);
  Vector3d imageSize3d(FrScale::SecMode);

  void psLine(Vector&, Vector&, int);
  void psWidth(int);
  void psGraphics(PSColorSpace mode);
  void psBorder(PSColorSpace mode);
  void psCompass(PSColorSpace mode);
  void psHighlite(PSColorSpace mode);
  Matrix3d psMatrix(float scale, int width, int height);

  void setBinCursor() {}

  void updateBin(const Matrix&);
  void updateBlock(const Vector&);
  void updateGCs();
  void updateMagnifierMatrices();
  void updatePannerMatrices();
  void updateMatrices();
  void updatePanner();

  void x11Ants3d();
  void x11Line(Vector, Vector, int, GC, Pixmap);
  void x11Graphics();
  void x11Border(Coord::InternalSystem, FrScale::SecMode, GC, Pixmap);
  void x11Compass();
  void x11Highlite();
  void ximageToPixmapMagnifier();

 public:
  Frame3dBase(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~Frame3dBase();

  FrameType frameType() {return F3D;}

  void setSlice(int,int);

  Vector mapFromRef(const Vector& vv, Coord::InternalSystem sys)
  {return mapFromRef3d(vv,sys);}
  Vector3d mapFromRef3d(const Vector&, Coord::InternalSystem);
  Vector3d mapFromRef3d(const Vector&, Coord::InternalSystem, double);
  Vector mapToRef(const Vector& vv, Coord::InternalSystem sys)
  {return mapToRef3d(vv,sys);}
  Vector3d mapToRef3d(const Vector&, Coord::InternalSystem);
  Vector3d mapToRef3d(const Vector&, Coord::InternalSystem, double);

  // Bin Commands
  void binToFitCmd();

  // Block Commands
  void blockToFitCmd();

  // Clip Commands
  void clipScopeCmd(FrScale::ClipScope) {} // scope is always GLOBAL

  // Info Commands
  void getInfoCmd(const Vector&, Coord::InternalSystem, char*);

  // Coordinate Commands
  void getCursorCmd(Coord::InternalSystem);
  void getCursorCmd(Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);

  // Crop Commands
  void crop3dBeginCmd(const Vector&, int);
  void crop3dMotionCmd(const Vector&, int);
  void crop3dEndCmd(const Vector&, int);

  // Grid Commands
  void gridCmd(Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, 
	       Grid::GridType, const char*, const char*);

  // Pan Zoom Rotate Orient Commands
  void panCmd(const Vector&);
  void panCmd(const Vector&, const Vector&);
  void panCmd(const Vector&, Coord::CoordSystem, Coord::SkyFrame);
  void panToCmd(const Vector&);
  void panToCmd(const Vector&, Coord::CoordSystem, Coord::SkyFrame);
  void panBBoxCmd(const Vector&);
  void panBeginCmd(const Vector&);
  void panMotionCmd(const Vector&);
  void zoomAboutCmd(const Vector&, const Vector&);
  void zoomAboutCmd(const Vector&, const Vector&,
		    Coord::CoordSystem, Coord::SkyFrame);
  void zoomToAboutCmd(const Vector&, const Vector&);
  void zoomToAboutCmd(const Vector&, const Vector&,
		      Coord::CoordSystem, Coord::SkyFrame);
  void zoomToFitCmd(double);

  // 3d Commands
  void get3dBorderCmd();
  void get3dBorderColorCmd();
  void get3dCompassCmd();
  void get3dCompassColorCmd();
  void get3dHighliteCmd();
  void get3dHighliteColorCmd();
  void get3dRenderMethodCmd();
  void get3dRenderBackgroundCmd();
  void get3dScaleCmd();
  void get3dViewCmd();
  void get3dViewPointCmd();
  void set3dBorderCmd(int);
  void set3dBorderColorCmd(const char*);
  void set3dCompassCmd(int);
  void set3dCompassColorCmd(const char*);
  void set3dHighliteCmd(int);
  void set3dHighliteColorCmd(const char*);
  void set3dRenderMethodCmd(int);
  void set3dRenderBackgroundCmd(int);
  void set3dScaleCmd(double);
  void set3dViewCmd(float, float);
  void set3dViewPointCmd(const Vector3d&, const Vector&);

#ifdef __WIN32
  void win32Line(Vector&, Vector&, int);
  void win32Graphics();
  void win32Border();
  void win32Compass();
  void win32Highlite();
#endif
};

#endif
