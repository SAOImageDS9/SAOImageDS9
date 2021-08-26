// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbar_h__
#define __colorbar_h__

#include "colorbarbase.h"
#include "colormap.h"
#include "colortag.h"
#include "list.h"

// Colormap(s) are X window Colormap ID's. ColorMapInfo(s) contain a fixed 
// number of real RGB color cells. RGB Values of ColorMapInfo(s) are 
// never altered. Colormap(s) are initialized from ColorMapInfo values. 
// Colormap RGB values will changed, based on user input.

class Filter;

class Colorbar : public ColorbarBase {
 public:
  enum ColorTagAction {NONE,CREATE,START,STOP,MOVE};

 protected:
  List<ColorMapInfo> cmaps;
  int cmapid_;

  List<ColorTag> ctags;
  int ctagid_;

  float bias;
  float contrast;

  ColorTag* tag;
  ColorTagAction tagaction;
  int taginit;

 private:
  ColorMapInfo* newColorMap(const char*, const char*);

  void psHorz(ostream&, Filter&, int, int);
  void psVert(ostream&, Filter&, int, int);

 protected:
  int calcContrastBias(int);
  void loadDefaultCMaps();
  void reset();
  void updateColorCells();

#ifdef MAC_OSX_TK
  void macosx(float, int, int, const Vector&, const Vector&);
#endif
#ifdef __WIN32
  void win32(float, int, int, const Vector&, const Vector&);
#endif

 public:
  Colorbar(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~Colorbar();

  int cmapid() {return cmapid_++;}
  int ctagid() {return ctagid_++;}

  // commands

  void adjustCmd(float, float);
  void getBiasCmd();
  void getColorbarCmd();
  void getColormapCmd();
  void getColormapNameCmd(int);
  void getColormapFileNameCmd(int);
  void getColormapFileNameCmd(const char*);
  void getContrastCmd();
  void getCurrentFileNameCmd();
  void getCurrentIDCmd();
  void getCurrentNameCmd();
  void getTypeCmd();
  void listIDCmd();
  void listNameCmd();
  void loadCmd(const char*, const char*);
  void loadCmd(const char*, const char*, const char*);
  void mapCmd(char*);
  void mapCmd(int);
  void saveCmd(const char*);
  void saveCmd(int, const char*);
  void saveCmd(const char*, const char*);
  void saveVarCmd(const char*, const char*);
  void setColorbarCmd(int, float, float, int);

  void getTagCmd();
  void getTagCmd(int,int);
  void tagCmd(const char*);
  void tagCmd(int, const Vector&, const char*);
  void tagDeleteCmd();
  void tagDeleteCmd(int,int);
  void tagEditBeginCmd(int,int,const char*);
  void tagEditMotionCmd(int,int);
  void tagEditEndCmd(int,int);
  void tagLoadCmd(const char*);
  void tagSaveCmd(const char*);

  void getRGBChannelCmd();
};

#endif
