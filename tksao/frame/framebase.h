// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framebase_h__
#define __framebase_h__

#include "base.h"

class FrameBase : public Base {
protected:
  XImage* colormapXM;      // colormap dest ximage
  Pixmap colormapPM;       // colormap pixmap
  GC colormapGCXOR;        // GC for interactive colormap

  Vector iisLastCursor;      // iis cursor state info
				  
 private:
  void coordToTclArray(FitsImage*, const Vector&, Coord::CoordSystem, 
		       const char*, const char*);
  void coordToTclArray(FitsImage*, const Vector3d&, Coord::CoordSystem, 
		       const char*, const char*);

  void getInfoWCS(char*, Vector&, FitsImage*);

protected:
  double calcZoomPanner();
  void cancelDetach() {};

  void rotateMotion();

  void saveFitsResampleFits(OutFitsStream&);
  void saveFitsResampleKeyword(OutFitsStream&, FitsHead&);
  void setBinCursor();

  virtual void updateBin(const Matrix&);
  void updatePanner();

  void x11MagnifierCursor(const Vector&);

public:
  FrameBase(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~FrameBase();

  FrameType frameType() {return F2D;}
  void setSlice(int,int);

  Vector mapFromRef(const Vector&, Coord::InternalSystem);
  Vector mapToRef(const Vector&, Coord::InternalSystem);

  // Bin Commands
  void binToFitCmd();

  // Block Commands
  void blockToFitCmd();

  // Coordinate Commands
  void getCursorCmd(Coord::InternalSystem);
  void getCursorCmd(Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);

  // Grid Commands
  void gridCmd(Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, 
	       Grid::GridType, const char*, const char*);

  // Info Commands
  void getInfoCmd(const Vector&, Coord::InternalSystem, char*);

  // Fits Commands
  void saveFitsResample(OutFitsStream&);
  void saveFitsResampleFileCmd(const char*);
  void saveFitsResampleChannelCmd(const char*);
  void saveFitsResampleSocketCmd(int);

  // IIS Commands
  void iisCursorModeCmd(int);
  void iisGetCursorCmd();
  void iisGetFileNameCmd();
  void iisGetFileNameCmd(int);
  void iisGetFileNameCmd(const Vector&);
  void iisMessageCmd(const char*);
  void iisSetCursorCmd(const Vector&, Coord::InternalSystem);
  void iisSetCursorCmd(const Vector&, Coord::CoordSystem);
  void iisSetFileNameCmd(const char*);
  void iisSetFileNameCmd(const char*,int);
  void iisUpdateCmd() {updateNow(MATRIX);}

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

  // 3d
  void get3dBorderCmd();
  void get3dBorderColorCmd();
  void get3dCompassCmd();
  void get3dCompassColorCmd();
  void get3dHighliteCmd();
  void get3dHighliteColorCmd();
  void get3dScaleCmd();
  void get3dViewCmd();
  void get3dViewPointCmd();
  void get3dRenderMethodCmd();
  void get3dRenderBackgroundCmd();
};

#endif
