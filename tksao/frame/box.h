// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __box_h__
#define __box_h__

#include "basebox.h"
#include "basefill.h"

class Box : public BaseBox, public BaseFill {
 protected:
  void listNonCel(FitsImage*, ostream&, Coord::CoordSystem);

public:
  Box(Base* p, const Vector& ctr, const Vector& seg, double ang, int fill);
  Box(Base* p, const Vector& ctr, 
      const Vector& seg,
      double ang, int fill,
      const char* clr, int* dsh,
      int wth, const char* fnt, const char* txt,
      unsigned short prop, const char* cmt, 
      const List<Tag>& tg, const List<CallBack>& cb);
  Box(const Box&);

  virtual Marker* dup() {return new Box(*this);}
  void editBegin(int);
  void edit(const Vector&, int);
  void editEnd();

  void analysis(AnalysisTask, int);
  void analysisHistogram(char*, char*, int);
  void analysisPlot3d(char*, char*, Coord::CoordSystem, Marker::AnalysisMethod);
  void analysisStats(Coord::CoordSystem, Coord::SkyFrame sky);

  void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int, int);
  virtual void listPost(ostream&, int, int);
  void listXML(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  virtual void listCiao(ostream&, Coord::CoordSystem, int);
  virtual void listSAOtng(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);
  virtual void listPros(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);
  virtual void listSAOimage(ostream&, int);
};

#endif
