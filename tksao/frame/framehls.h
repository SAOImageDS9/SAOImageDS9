// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framehls_h__
#define __framehls_h__

#include "framet.h"

// Frame

class FrameHLS : public FrameT {
protected:
  unsigned char default_[5] = {255, 0, 0, 127, 255};

 protected:
  int isFrameHLS() {return 1;}

  void convert(unsigned char*, unsigned char*);
  float value(float, float, float);
  unsigned char* getDefault() {return default_;}

 public:
  FrameHLS(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~FrameHLS();

  void getColorbarCmd();

  void getTypeCmd();
  
  void getHLSChannelCmd();
  void getHLSSystemCmd() {getSystem();}
  void getHLSViewCmd() {getView();}

  void setHLSChannelCmd(const char*);
  void setHLSSystemCmd(Coord::CoordSystem sys) {setSystem(sys);}
  void setHLSViewCmd(int h, int l, int s) {setView(h,l,s);}
};

#endif
