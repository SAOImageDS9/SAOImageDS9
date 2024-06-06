// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framehsv_h__
#define __framehsv_h__

#include "framet.h"

// Frame

class FrameHSV : public FrameT {
 protected:
  unsigned char default_[5] = {255, 0, 0, 255, 255};

 protected:
  int isFrameHSV() {return 1;}

  void convert(unsigned char*, unsigned char*);
  unsigned char* getDefault() {return default_;}

 public:
  FrameHSV(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~FrameHSV();

  void getColorbarCmd();

  void getTypeCmd();
  
  void getHSVChannelCmd();
  void getHSVSystemCmd() {getSystem();}
  void getHSVViewCmd() {getView();}

  void setHSVChannelCmd(const char*);
  void setHSVSystemCmd(Coord::CoordSystem sys) {setSystem(sys);}
  void setHSVViewCmd(int h, int s, int v) {setView(h,s,v);}
};

#endif
