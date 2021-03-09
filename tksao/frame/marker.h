// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __marker_h__
#define __marker_h__

#include <tk.h>

#include "vector.h"
#include "vector3d.h"
#include "vectorstr.h"
#include "fuzzy.h"

#include "callback.h"
#include "list.h"
#include "tag.h"
#include "coord.h"
#include "xml.h"
#include "psutil.h"

#define POINTSIZE 11

class Base;
class FitsImage;
class Vector;

class Marker {
public:
  // Select-- user may select the marker
  // Highlite-- user may highlite the marker
  // Edit-- user may edit the marker
  // Move-- user may move the marker
  // Rotate-- user may rotate the marker
  // Delete-- user may delete the marker
  // Fixed-- marker is fixed in size (not scaled based on zoom)
  // Include-- marker is 'included' or 'excluded' ie '+' or '-'
  // Source-- marker is a 'source' or 'background' marker
  // Dash-- render with dashed line
  // Hide-- hidden marker
  enum Property {NONE=0, SELECT=1, HIGHLITE=2, EDIT=4, MOVE=8, ROTATE=16, 
		 DELETE=32, FIXED=64, INCLUDE=128, SOURCE=256, DASH=512};
  enum RenderMode {SRC,XOR};
  enum HandleMode {HANDLES,NOHANDLES};

  enum AnalysisTask {STATS,PLOT2D,PLOT3D,RADIAL,PANDA,HISTOGRAM};
  enum AnalysisMethod {SUM,AVERAGE};

 private:
  Vector* arrow2D(const Vector&, const Vector&, Coord::InternalSystem);
  Vector* arrow3D(const Vector&, const Vector&, Coord::InternalSystem);

protected:
  int id;
  char type_[64];
  Base* parent;

  Vector center;                // ref coordinates
  BBox bbox;                    // canvas coordinates
  BBox allBBox;                 // canvas coordinates

  double angle;                 // radians

  Vector* handle;               // canvas coordinates 
  int numHandle;

  char* colorName;
  unsigned long color;
  int lineWidth;
  unsigned short properties;
  int selected;
  int highlited;
  RenderMode renderMode;

  float dlist[2];

  char* text;
  Tk_Font tkfont_;
  Tk_Font psfont_;
  char* comment;

  Display* display;
  GC gc;
  GC gcxor;

  int doCB;

  List<Tag> tags;
  List<CallBack> callbacks;

  Marker* previous_;
  Marker* next_;

  Vector* arrow(const Vector&, const Vector&, Coord::InternalSystem);

  char* XMLCol[XMLNUMCOL];

  int analysisHistogram_;
  static const char* analysisHistogramCB_[];
  int analysisPlot2d_;
  static const char* analysisPlot2dCB_[];
  int analysisPlot3d_;
  static const char* analysisPlot3dCB_[];
  int analysisPanda_;
  static const char* analysisPandaCB_[];
  int analysisRadial_;
  static const char* analysisRadialCB_[];
  int analysisStats_;
  static const char* analysisStatsCB_[];

  char ra[32]; // tmp storage
  char dec[32]; // tmp storage

 protected:
  virtual void renderX(Drawable, Coord::InternalSystem, RenderMode) =0;
  virtual void renderXInclude(Drawable drawable, Coord::InternalSystem, RenderMode mode);
  virtual void renderXText(Drawable, Coord::InternalSystem, RenderMode);
  void renderXArrow(Drawable, const Vector&, const Vector&, Coord::InternalSystem, GC);
  void renderXHandles(Drawable);
  virtual GC renderXGC(RenderMode);
  virtual void renderXLineDash(GC);
  void renderXLineNoDash(GC);

  virtual void renderPS(PSColorSpace mode) =0;
  virtual void renderPSInclude(PSColorSpace);
  virtual void renderPSText(PSColorSpace);
  void renderPSArrow(const Vector&, const Vector&, Coord::InternalSystem);
  virtual void renderPSGC(PSColorSpace);
  virtual void renderPSLineDash();
  void renderPSLineNoDash();

#ifdef __WIN32
  virtual void renderWIN32() =0;
  virtual void renderWIN32Include();
  virtual void renderWIN32Text();
  void renderWIN32Arrow(const Vector&, const Vector&, Coord::InternalSystem);
  virtual void renderWIN32GC();
  virtual void renderWIN32LineDash();
  void renderWIN32LineNoDash();
#endif

  void analysisXYResult(char*, char*, double*, double*, int);
  void analysisXYEResult(char*, char*, char*, double*, double*, double*, int);
  void analysisXYEEResult(char*, char*, char*, char*, 
			  double*, double*, double*, double*, int);

  void setMatrices(Coord::InternalSystem, Matrix*, Matrix*);
  double calcAngle();
  Vector modifyArrow(const Vector&, const Vector&, Coord::InternalSystem);
  virtual void updateHandles() =0;
  virtual void calcAllBBox();

  void initFonts(const char*);

  void listPre(ostream&, Coord::CoordSystem, Coord::SkyFrame, 
	       FitsImage*, int, int);
  virtual void listPost(ostream&, int, int);

  void listCiaoPre(ostream&);
  void listCiaoPost(ostream&, int);

  void listProsPost(ostream&, int);

  void listSAOtngPre(ostream&, int);
  void listSAOtngPost(ostream&, int);

  void listSAOimagePre(ostream&);
  void listSAOimagePost(ostream&, int);

  void listProps(ostream&);
  void listProperties(ostream&, int);

  void XMLRowInit();
  void XMLRow(XMLColName,int);
  void XMLRow(XMLColName,char*);
  void XMLRow(XMLColName,char**, int);
  void XMLRowProps(FitsImage*, Coord::CoordSystem);
  void XMLRowEnd(ostream&);
  void XMLRowProp(XMLColName, Property);
  void XMLRowCenter(FitsImage* fits, Coord::CoordSystem sys, Coord::SkyFrame sky, Coord::SkyFormat format) {XMLRowPoint(fits, sys, sky, format, center);}
  void XMLRowPoint(FitsImage*, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, Vector);
  void XMLRowPoint(FitsImage*, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, Vector*, int);
  void XMLRowRadiusX(FitsImage*, Coord::CoordSystem, Vector);
  void XMLRowRadiusX(FitsImage*, Coord::CoordSystem, Vector*, int);
  void XMLRowRadius(FitsImage*, Coord::CoordSystem, Vector);
  void XMLRowRadius(FitsImage*, Coord::CoordSystem, Vector*, int);
  void XMLRowAng(Coord::CoordSystem, Coord::SkyFrame);
  void XMLRowAng(Coord::CoordSystem, Coord::SkyFrame, double*, int);
  char* XMLQuote(char*);

 public:
  Marker(Base* p, const Vector& v, double ang);
  Marker(Base* p, const Vector& v, double ang,
	 const char* clr, int* dsh,
	 int w, const char* f, const char* t, 
	 unsigned short prop, const char* c, 
	 const List<Tag>& tag, const List<CallBack>& cb);
  Marker(const Marker&);
  virtual ~Marker();

  virtual Matrix fwdMatrix();
  virtual Matrix bckMatrix();
  virtual Vector fwdMap(const Vector&, Coord::InternalSystem);
  virtual Vector bckMap(const Vector&, Coord::InternalSystem);

  virtual void x11(Drawable, Coord::InternalSystem, int, HandleMode);
  virtual void ps(PSColorSpace,int);
#ifdef __WIN32
  virtual void win32(int);
#endif

  virtual Marker* dup() =0;
  void newIdentity();

  virtual void updateBBox();
  virtual void updateCoords(const Matrix&);

  virtual void moveTo(const Vector& v);

  virtual void moveBegin();
  virtual void move(const Vector& v);
  virtual void moveEnd();

  virtual void centroid();

  virtual void editBegin(int);
  virtual void edit(const Vector& v, int h);
  virtual void editEnd();

  virtual void rotateBegin();
  virtual void rotate(const Vector& v, int h);
  virtual void rotateEnd();

  // assume Coord::CANVAS
  virtual int isIn(const Vector& vv) {return bbox.isIn(vv);}

  virtual int isIn(const Vector& vv, Coord::InternalSystem sys);
  virtual int isIn(const Vector& vv, Coord::InternalSystem sys, int nn)
  {return isIn(vv,sys);}
  virtual int isIn(const Vector& vv, Coord::InternalSystem sys, int nn, int aa)
  {return isIn(vv,sys);}

  // assume Coord::REF
  virtual int isIn(const Vector& vv, const Matrix& bck);
  virtual int isIn(const Vector& vv, const Matrix& bck, int nn)
  {return isIn(vv,bck);}
  virtual int isIn(const Vector& vv, const Matrix& bck, int nn, int aa)
  {return isIn(vv,bck);}

  void setAngle(double);
  double getAngle() {return angle;}

  int getNumHandle() {return numHandle;}
  Vector getHandle(int);

  virtual int getSegment(const Vector&) {return 0;}

  virtual void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int, int) =0;
  virtual void listXML(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat) {}
  virtual void listCiao(ostream&, Coord::CoordSystem, int) {}
  virtual void listSAOtng(ostream&,Coord::CoordSystem,Coord::SkyFrame,Coord::SkyFormat, int) {}
  virtual void listPros(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int) {}
  virtual void listSAOimage(ostream&, int) {}
  virtual void listXY(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);

  const BBox& getBBox() {return bbox;}
  const BBox& getAllBBox() {return allBBox;}
  int isVisible(const BBox&);

  void select();
  void unselect();
  void toggleSelect();
  int isSelected() {return selected;}

  void highlite();
  void unhighlite();
  void toggleHighlite();
  int isHighlited() {return highlited;}

  void setRenderMode(RenderMode rr) {renderMode = rr;}
  RenderMode getRenderMode() {return renderMode;}

  void key();

  void setColor(const char*);
  const char* getColorName() {return colorName;}

  void setLineWidth(int);
  int getLineWidth() {return lineWidth;}

  void setText(const char*);
  const char* getText() {return text;}
  void setFont(const char*);
  const char* getFont();

  void addTag(const char*);
  void editTag(const char*, const char*);
  void deleteTags();
  void deleteTag(int);
  void deleteTag(const char*);
  const char* getTag();
  const char* getNextTag();
  const char* getTag(int);
  int hasTag(const char*);

  int onHandle(const Vector& v);

  int getId() {return id;}
  const char* getType() {return type_;}
  Vector getCenter() {return center;}

  int canSelect() {return (properties & SELECT) ? 1:0;}
  int canHighlite() {return (properties & HIGHLITE) ? 1:0;}
  int canEdit() {return (properties & EDIT) ? 1:0;}
  int canMove() {return (properties & MOVE) ? 1:0;}
  int canRotate() {return (properties & ROTATE) ? 1:0;}
  int canDelete() {return (properties & DELETE) ? 1:0;}
  int isFixed() {return (properties & FIXED) ? 1:0;}
  void setProperty(unsigned short, int);
  int getProperty(unsigned short);
  unsigned short getProperty() {return properties;}

  int addCallBack(CallBack::Type, const char*, const char*);
  int deleteCallBack(CallBack::Type, const char*);
  void deleteCallBack(CallBack::Type);
  void doCallBack(CallBack::Type);

  Marker* previous() {return previous_;}
  void setPrevious(Marker* m) {previous_ = m;}
  Marker* next() {return next_;}
  void setNext(Marker* m) {next_ = m;}

  void enableCB() {doCB = 1;}
  void disableCB() {doCB = 0;}
  void deleteCBs();

  virtual void analysis(AnalysisTask, int) {}
  virtual void analysisHistogram(char*, char*, int) {}
  virtual void analysisRadial(char*, char*, char*, Coord::CoordSystem) {}
  virtual void analysisStats(Coord::CoordSystem, Coord::SkyFrame) {}
  virtual void analysisPanda(char*, char*, char*, Coord::CoordSystem, int) {}
  virtual void analysisPlot2d(char*, char*, char*, char*,
			      Coord::CoordSystem, Coord::SkyFrame, 
			      Marker::AnalysisMethod) {}
  virtual void analysisPlot3d(char*, char*, Coord::CoordSystem,
			      Marker::AnalysisMethod) {}

  // special composite funtionality
  virtual void setComposite(const Matrix&, double);
  void setComposite(const char*, int, int);
};

#endif
