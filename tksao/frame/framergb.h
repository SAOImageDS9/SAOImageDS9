// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framergb_h__
#define __framergb_h__

#include "framea.h"
#include "colorscalergb.h"

// Frame

class FrameRGB : public FrameA {
 protected:
  ColorScaleRGB* colorScale[3]; // current color scale

protected:
  int isFrameRGB() {return 1;}
  unsigned char* fillImage(int, int, Coord::InternalSystem);
  void updateColorScale();
  void updateColorCells(int cnt);
  int validColorScale() 
    {return colorScale[0] && colorScale[1] && colorScale[2];}

  void loadDone(int);
  void loadRGBCube(MemType, const char*, FitsImage*);
  void loadRGBImage(MemType, const char*, FitsImage*);
  void loadRGBFinish();

 public:
  FrameRGB(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~FrameRGB();

  void getColorbarCmd();
  void getInfoCmd(const Vector&, Coord::InternalSystem, char*, Base::FileNameType);
  void getTypeCmd();

  void getRGBChannelCmd();
  void getRGBSystemCmd() {getSystem();}
  void getRGBViewCmd() {getView();}

  void colormapMotionCmd(float, float, float, float, float, float, int, int);
  
  void loadPhotoCmd(const char*, const char*);
  void loadSlicePhotoCmd(const char*, const char*) {}

  void loadRGBCubeAllocCmd(const char*, const char*);
  void loadRGBCubeAllocGZCmd(const char*, const char*);
  void loadRGBCubeChannelCmd(const char*, const char*);
  void loadRGBCubeMMapCmd(const char*);
  void loadRGBCubeSMMapCmd(const char*, const char*);
  void loadRGBCubeMMapIncrCmd(const char*);
  void loadRGBCubeShareCmd(ShmType, int, const char*);
  void loadRGBCubeSShareCmd(ShmType, int, int, const char*);
  void loadRGBCubeSocketCmd(int, const char*);
  void loadRGBCubeSocketGZCmd(int, const char*);
  void loadRGBCubeVarCmd(const char*, const char*);

  void loadRGBImageAllocCmd(const char*, const char*);
  void loadRGBImageAllocGZCmd(const char*, const char*);
  void loadRGBImageChannelCmd(const char*, const char*);
  void loadRGBImageMMapCmd(const char*);
  void loadRGBImageMMapIncrCmd(const char*);
  void loadRGBImageShareCmd(ShmType, int, const char*);
  void loadRGBImageSocketCmd(int, const char*);
  void loadRGBImageSocketGZCmd(int, const char*);
  void loadRGBImageVarCmd(const char*, const char*);

  void loadArrayRGBCubeAllocCmd(const char*, const char*);
  void loadArrayRGBCubeAllocGZCmd(const char*, const char*);
  void loadArrayRGBCubeChannelCmd(const char*, const char*);
  void loadArrayRGBCubeMMapCmd(const char*);
  void loadArrayRGBCubeMMapIncrCmd(const char*);
  void loadArrayRGBCubeShareCmd(ShmType, int, const char*);
  void loadArrayRGBCubeSocketCmd(int, const char*);
  void loadArrayRGBCubeSocketGZCmd(int, const char*);
  void loadArrayRGBCubeVarCmd(const char*, const char*);

  void saveFitsRGBImage(OutFitsStream&);
  void saveFitsRGBImageFileCmd(const char*);
  void saveFitsRGBImageChannelCmd(const char*);
  void saveFitsRGBImageSocketCmd(int);

  void saveFitsRGBCube(OutFitsStream&);
  void saveFitsRGBCubeFileCmd(const char*);
  void saveFitsRGBCubeChannelCmd(const char*);
  void saveFitsRGBCubeSocketCmd(int);

  void saveArrayRGBCube(OutFitsStream&, FitsFile::ArchType);
  void saveArrayRGBCubeFileCmd(const char*, FitsFile::ArchType);
  void saveArrayRGBCubeChannelCmd(const char*, FitsFile::ArchType);
  void saveArrayRGBCubeSocketCmd(int, FitsFile::ArchType);

  void savePhotoCmd(const char*);

  void setRGBChannelCmd(const char*);
  void setRGBSystemCmd(Coord::CoordSystem sys) {setSystem(sys);}
  void setRGBViewCmd(int r, int g, int b) {setView(r,g,b);}
};

#endif
