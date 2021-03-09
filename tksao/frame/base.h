// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __base_h__
#define __base_h__

#include "widget.h"
#include "vector.h"
#include "vector3d.h"
#include "vectorstr.h"
#include "fuzzy.h"

#include "callback.h"
#include "fvcontour.h"
#include "frscale.h"
#include "grid2d.h"
#include "grid25d.h"
#include "grid3d.h"
#include "hist.h"
#include "inversescale.h"
#include "list.h"
#include "tag.h"
#include "point.h"
#include "fitsmask.h"

extern int DebugMosaic;
extern int DebugPerf;
extern int DebugWCS;
extern int DebugBin;
extern int DebugBlock;
extern int DebugCompress;
extern int DebugCrop;
extern int DebugGZ;
extern int DebugRGB;

#define DEFAULTLOW 0
#define DEFAULTHIGH 100
#define HISTEQUSIZE 16384
#define SCALESIZE 16384

class Attribute;
class BaseBox;
class BaseEllipse;
class BaseMarker;
class Composite;
class Context;
class Contour;
class ContourLevel;
class Filter;
class FitsImage;
class FitsMask;
class FVContour;
class Grid;
class Grid2d;
class Grid25d;
class Grid3d;
class Marker;

class Annulus;
class Box;
class BoxAnnulus;
class Bpanda;
class Circle;
class Compass;
class Cpanda;
class Ellipse;
class EllipseAnnulus;
class Epanda;
class Line;
class Point;
class Projection;
class Polygon;
class Ruler;
class Segment;
class Text;
class Vect;

class Base : public Widget {
  friend class Attribute;
  friend class BaseBox;
  friend class BaseEllipse;
  friend class BaseLine;
  friend class BaseMarker;
  friend class BasePolygon;
  friend class Composite;
  friend class Context;
  friend class Contour;
  friend class ContourLevel;
  friend class FitsImage;
  friend class FitsMask;
  friend class FVContour;
  friend class Grid;
  friend class Grid2d;
  friend class Grid25d;
  friend class Grid3d;
  friend class Marker;

  friend class Annulus;
  friend class Box;
  friend class BoxAnnulus;
  friend class Bpanda;
  friend class Circle;
  friend class Compass;
  friend class Cpanda;
  friend class Ellipse;
  friend class EllipseAnnulus;
  friend class Epanda;
  friend class Line;
  friend class Point;
  friend class Projection;
  friend class Polygon;
  friend class Ruler;
  friend class Segment;
  friend class Text;
  friend class Vect;

public:
  enum FrameType {F2D, F3D};
  enum CompressType {NOCOMPRESS, GZ};
  enum FileNameType {ROOTBASE, FULLBASE, ROOT, FULL};
  enum MarkerFormat {DS9, XML, CIAO, SAOTNG, SAOIMAGE, PROS, RAWXY};
  enum MarkerLayer {USER, CATALOG, FOOTPRINT};
  enum MarkerRenderOrder {HEAD,TAIL};
  enum ShmType {SHMID,KEY};
  enum UndoMarkerType {NONE, MOVE, EDIT, DELETE};
  enum UpdateType {MATRIX, BASE, BASEONLY, PIXMAP, NOUPDATE};

  enum MemType {ALLOC, ALLOCGZ, CHANNEL, MMAP, SMMAP, MMAPINCR, 
		SHARE, SSHARE, SOCKET, SOCKETGZ, VAR, HIST, POST, PHOTO};
  enum MosaicType {NOMOSAIC, IRAF, WCSMOSAIC};
  enum LayerType {IMG, MASK};
  enum CutMethod {SUM,AVERAGE};

 private:
  InverseScale* inverseScale;

 protected:
  Context* context;
  int nthreads_;

  int byteorder_;
  int bitsperpixel_;

  List<Marker>* markers;     // pointer to current marker stack
  List<Marker>* undoMarkers; // pointer to current marker stack
  List<Marker>* pasteMarkers;// pointer to current marker stack

  List<Marker> userMarkers;      // foreground marker stack
  List<Marker> undoUserMarkers;  // remember marker to undo
  List<Marker> pasteUserMarkers; // cut/copy/paste

  List<Marker> catalogMarkers;      // background marker stack
  List<Marker> undoCatalogMarkers;  // remember marker to undo
  List<Marker> pasteCatalogMarkers; // cut/copy/paste

  List<Marker> footprintMarkers;      // background marker stack
  List<Marker> undoFootprintMarkers;  // remember marker to undo
  List<Marker> pasteFootprintMarkers; // cut/copy/paste

  UndoMarkerType undoMarkerType; // type

  Vector markerBegin;        // marker move begin in image coords
  Marker* editMarker;        // pointer to current being edited/moved/rotated
  Composite* compositeMarker; // pointer to current composite marker

  Vector cursor; // current cursor position in REF coords
  Vector crosshair; // crosshair location in REF coords

  XImage* baseXImage; // ximage of image
  Pixmap basePixmap; // pixmap of image
  UpdateType needsUpdate; // updateFlags
  int syncUpdate; // update 3d syncronously

  Context* currentContext;
  Context* keyContext;

  Coord::Orientation orientation;   // current image orientation
  Matrix orientationMatrix;  // current image orientation matrix
  double rotation;           // current image rotation angle

  double rotateRotation;     // tmp cursor for interactive rotation

  int preservePan;           // flag to indicate preserve between loads

  Vector zoom_; // current image zoom value

  Vector panCursor;          // tmp cursor for interactive panning
  Vector panStart;           // tmp pan start

  Pixmap pannerPixmap;       // pixmap for panner
  XImage* pannerXImage;      // ximage for panner
  int pannerWidth;           // panner width
  int pannerHeight;          // panner height
  char pannerName[32];       // panner widget name
  int usePanner;             // panner status

  Pixmap magnifierPixmap;    // pixmap for magnifier
  XImage* magnifierXImage;   // ximage for magnifier
  int magnifierWidth;        // magnifier width
  int magnifierHeight;       // magnifier height
  double magnifierZoom_;     // magnifier zoom factor
  char magnifierName[32];    // magnifer widget name
  int useMagnifier;          // magnifer status
  int useMagnifierGraphics;  // magnifer marker status
  int useMagnifierCursor;    // magnifier cursor status
  Vector magnifierCursor;    // we need to save the last cursor used
  char* magnifierColorName;

  int doAnts;
  int doAnts3d;
  Vector antsBegin;
  Vector antsEnd;

  Coord::CoordSystem wcsSystem_;
  Coord::SkyFrame wcsSkyFrame_;
  Coord::SkyFormat wcsSkyFormat_;

  int wcsAlign_; // flag to indicate wcs alignment

  Coord::CoordSystem xySystem_; // default marker sys (RAWXY)
  Coord::SkyFrame xySky_; // default marker sky (RAWXY)

  Coord::Orientation wcsOrientation; // wcs image orientation
  Matrix wcsOrientationMatrix; // wcs image orientation matrix
  double wcsRotation; // wcs image rotation angle

  int irafAlign_;
  Coord::Orientation irafOrientation_; // orientation of first iraf segment
  Matrix irafMatrix_; // orientation matrix for iraf mosaic

  int invert;

  int useHighlite;
  char* highliteColourName;
  GC highliteGC_;

  int useCrosshair;

  int precLinear_;
  int precDeg_;
  int precHMS_;
  int precDMS_;
  int precLenLinear_;
  int precLenDeg_;
  int precArcmin_;
  int precArcsec_;
  int precAngle_;
  
  int markerEpsilon;       // mouse tolerance for select/edit
  int showMarkers;
  int showMarkersText;
  int centroidAuto;
  int centroidIteration;
  float centroidRadius;
  int preserveMarkers;       // flag to indicate preserve between loads

  int useMarkerColor_;
  char* markerColor_;

  GC markerGC_; // marker gc
  GC markerGCXOR_; // marker xor gc
  GC selectGCXOR; // select gc

  Grid* grid;
  GC gridGC_;

  GC contourGC_;

  int useBgColor;
  char* bgColourName;
  char* nanColourName;

  float dlist[2];

  char* colorbartag;

  Matrix refToUser;
  Matrix userToRef;
  Matrix refToWidget;
  Matrix widgetToRef;
  Matrix refToCanvas;
  Matrix canvasToRef;
  Matrix refToWindow;
  Matrix windowToRef;

  Matrix userToWidget;
  Matrix widgetToUser;
  Matrix userToCanvas;
  Matrix canvasToUser;

  Matrix widgetToCanvas;
  Matrix canvasToWidget;
  Matrix widgetToWindow;
  Matrix windowToWidget;

  Matrix canvasToWindow;
  Matrix windowToCanvas;

  Matrix refToMagnifier;
  Matrix magnifierToRef;
  Matrix userToMagnifier;
  Matrix magnifierToUser;
  Matrix widgetToMagnifier;
  Matrix magnifierToWidget;

  Matrix refToPanner;
  Matrix pannerToRef;
  Matrix userToPanner;
  Matrix pannerToUser;
  Matrix widgetToPanner;
  Matrix pannerToWidget;

 private:
  void bltHist(char*, char*); // frblt.C

  void invalidPixmap();

  int updatePixmap(const BBox&);

 protected:
  void alignIRAF();
  virtual void alignWCS();
  virtual void alignWCS(Coord::CoordSystem, Coord::SkyFrame);
  virtual void alignWCS(FitsImage*, Coord::CoordSystem);

  void bltCut(char*, char*, Coord::Orientation, const Vector&, 
	      int, Base::CutMethod);
  void bltCutFits(double*, double*, int, Coord::Orientation, const Vector&,
		  int, Base::CutMethod);

  double calcZoom(Vector,Vector);
  virtual double calcZoomPanner() =0;
  virtual void cancelDetach() =0;
  virtual void centerImage();
  Marker* createMarker(Marker*);
  void createTemplate(const Vector&, istream&);
  void contourCreatePolygon(List<ContourLevel>&);

  virtual int doRender();
  void doubleToTclArray(double, const char*, const char*, const char*);

  void encodeTrueColor(int oo, int bb) {byteorder_ = oo; bitsperpixel_ = bb;}
  virtual void encodeTrueColor(XColor*, char*) =0;
  virtual void encodeTrueColor(unsigned char*, XImage*) =0;

  virtual unsigned char* fillImage(int, int, Coord::InternalSystem) =0;

  void getInfoClearName(char*);
  void getInfoClearValue(char*);
  void getInfoClearWCS(char*);

  Coord::Orientation getOrientation() {return orientation;}
  double getRotation() {return rotation + wcsRotation;}
  Coord::Orientation getWCSOrientation() {return wcsOrientation;}

  int hasATMV();
  int hasContour();
  int hasContourAux();
  int hasDTMV();
  int hasLTMV();
  int hasWCS(Coord::CoordSystem);
  int hasWCSCel(Coord::CoordSystem); 
  int hasWCSEqu(Coord::CoordSystem); 
  int hasWCSLinear(Coord::CoordSystem); 
  int hasWCS3D(Coord::CoordSystem);

  virtual BBox imageBBox(FrScale::SecMode);
  Vector imageCenter(FrScale::SecMode);
  Vector imageSize(FrScale::SecMode);

  virtual int isIIS();
  FitsImage* isInFits(const Vector&, Coord::InternalSystem, Vector*);
  FitsImage* isInCFits(const Vector&, Coord::InternalSystem, Vector*);
  virtual int isAzElZero() {return 1;}
  virtual int isFrame() {return 0;}
  virtual int isFrame3d() {return 0;}
  virtual int isFrameRGB() {return 0;}

  virtual void loadDone(int);

  void markerAnalysisHistogram(Marker*, double**, double**, const BBox&, int);
  int markerAnalysisPlot2d(Marker*, double**, double**, double**, double**,
			   Vector&, Vector&, int, 
			   Coord::CoordSystem, Coord::SkyFrame, 
			   Marker::AnalysisMethod);
  int markerAnalysisPlot3d(Marker*, double**, double**, const BBox&,
			   Coord::CoordSystem, Marker::AnalysisMethod);
  int markerAnalysisRadial(Marker*, double**, double**, double**, 
			   int, Vector*, BBox*, Coord::CoordSystem);
  int markerAnalysisPanda(Marker*, double**, double**, double**, 
			  int, Vector*, int,
			  BBox*, Coord::CoordSystem);
  int markerAnalysisStats1(Marker*, FitsImage*, ostream&, 
			   Coord::CoordSystem, Coord::SkyFrame);
  void markerAnalysisStats2(FitsImage*, ostream&, Coord::CoordSystem,
			    int, int, double, int);
  void markerAnalysisStats3(ostream&);
  void markerAnalysisStats4(ostream&, int, double, double, double,	
			    double, double, double);
  void markerAnalysisStats(Marker*, ostream&, const BBox&, 
			   Coord::CoordSystem, Coord::SkyFrame);
  void markerAnalysisStats(Marker*, ostream&, int, BBox*, 
			   Coord::CoordSystem, Coord::SkyFrame);
  void markerAnalysisStats(Marker*, ostream&, int, int, 
			   BBox*, Coord::CoordSystem, Coord::SkyFrame);

  void markerListHeader(ostream&);
  void markerListXMLHeader(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void markerListXMLFooter(ostream&);
  void markerListSAOtngHeader(ostream&,Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void markerUndo(Marker*, UndoMarkerType);

  void parseMarker(MarkerFormat,istream&);
  int postscriptProc(int prepass);

  void printInteger(int);
  void printDouble(double);
  void printCoordSystem(Coord::CoordSystem);
  void printSkyFrame(Coord::SkyFrame);
  void printSkyFormat(Coord::SkyFormat);
  void printDistFormat(Coord::DistFormat);

  void printFromRef(FitsImage*, const Vector&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void printLenFromRef(FitsImage*, double, Coord::CoordSystem, Coord::DistFormat);
  void printLenFromRef(FitsImage*, const Vector&, Coord::CoordSystem, Coord::DistFormat);
  void printDistFromRef(FitsImage*, const Vector&, const Vector&, Coord::CoordSystem, Coord::DistFormat);
  void printAngleFromRef(double, Coord::CoordSystem, Coord::SkyFrame);

  void ps();
  void psCrosshair(PSColorSpace);
  virtual void psGraphics(PSColorSpace) {}
  void psImage(ostream&, Filter&, int, int, float);
  void psMarkers(List<Marker>*, PSColorSpace, MarkerRenderOrder);
  Matrix psMatrix(float scale, int width, int height);
  void pushMatrices(FitsImage*, Matrix&);
  void pushMagnifierMatrices(FitsImage*);
  void pushPannerMatrices(FitsImage*);
  void pushPSMatrices(FitsImage*, float, int, int);

  virtual void pushMatrices() =0;
  virtual void pushMagnifierMatrices() =0;
  virtual void pushPannerMatrices() =0;
  virtual void pushPSMatrices(float, int, int) =0;
  
  virtual void reset();
  void resetSecMode();

  virtual void setBinCursor() =0;
  void setClip();
  FrScale::SecMode secMode();
  void setSecMode(FrScale::SecMode);
  virtual void setSlice(int,int);

  void unhighliteMarkers();
  void unselectMarkers(List<Marker>*);
  void update(UpdateType);
  void update(UpdateType,BBox);
  void updateMarkers(List<Marker>*);
  void updateMarkerCBs(List<Marker>*);
  void updateMarkerCoords(List<Marker>*, const Matrix&);
  virtual void unloadFits();
  virtual void unloadAllFits();
  void updateBase();
  virtual void updateBin(const Matrix&);
  virtual void updateBlock(const Vector&);
  void updateCBMarkers(List<Marker>*);
  virtual void updateColorScale() =0;
  virtual void updateGCs();
  void updateMagnifier();
  void updateMagnifier(const Vector&);

  virtual void updateMatrices();
  virtual void updateMagnifierMatrices();
  virtual void updatePannerMatrices();

  void updateNow(UpdateType); 
  void updateNow(UpdateType,BBox);
  virtual void updatePanner() =0;
  void updatePM(const BBox&);

  char* varcat(char*, char*, char, char*);
  virtual int validColorScale() =0;

  void x11Ants();
  virtual void x11Ants3d() {}
  void x11Crosshair(Pixmap, Coord::InternalSystem, int, int);
  void x11Dash(GC, int);
  virtual void x11Graphics();
  virtual void x11MagnifierCursor(const Vector&) {}
  void x11MagnifierMarkers(List<Marker>*, const BBox& bb);
  void x11Markers(List<Marker>*, const BBox&, MarkerRenderOrder);
  void xmlParse(istream&);
  void xmlParseFIELD(void*, int*, char**, char**, char**, char**, int);
  void xmlParseTR(char**, int*, char**, char**, char**, char**, int);
  void xmlSetProps(unsigned short*, unsigned short, char*);
  int xmlCount(const char*);
  Vector xmlPoint(FitsImage*, const char* x, const char* y, 
		  Coord::CoordSystem sys, Coord::SkyFrame sky, Coord::SkyFormat format, int which=0);
  List<Vertex>* xmlVertex(FitsImage*, const char*, const char*, 
			  Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  double xmlAngle(const char*, int, double, Coord::AngleFormat, Coord::CoordSystem, Coord::SkyFrame);
  double* xmlAngles(const char*, int, double, int, Coord::AngleFormat, Coord::CoordSystem, Coord::SkyFrame);
  double* xmlDistance(FitsImage*, const char*, int, Coord::CoordSystem, Coord::DistFormat);
  Vector* xmlDistance(FitsImage*, const char*, const char*, int, Coord::CoordSystem, Coord::DistFormat);
  void ximageToPixmap(Pixmap, XImage*, Coord::InternalSystem);
  virtual void ximageToPixmapMagnifier();

  Vector zoom() {return zoom_;}

#ifdef __WIN32
  void win32();
  void win32Crosshair();
  virtual void win32Graphics() {}
  void win32Image(float, int, int, const Vector&, const Vector&);
  void win32Markers(List<Marker>* ml);
#endif

 public:
  Base(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item);
  virtual ~Base();

  virtual FrameType frameType() =0;
  void calcAlignWCS(FitsImage*, Coord::CoordSystem, Coord::SkyFrame,
		    Coord::Orientation*, Matrix*, double*);
  Matrix calcAlignWCS(FitsImage*, FitsImage*, Coord::CoordSystem, Coord::CoordSystem, Coord::SkyFrame);
  Vector centroid(const Vector&);

  FitsImage* findFits();
  FitsImage* findFits(Coord::CoordSystem, const Vector&);
  FitsImage* findFits(const Vector&);
  FitsImage* findFits(int);
  int findFits(FitsImage*);
  FitsImage* findAllFits(int);
  int fitsCount();

  Coord::Orientation IRAFOrientation(Coord::Orientation);
  int isMosaic();
  int isCube();
  int isBinTable();

  virtual Vector mapFromRef(const Vector&, Coord::InternalSystem) =0;
  virtual Vector mapToRef(const Vector&, Coord::InternalSystem) =0;
  double mapAngleFromRef(double,Coord::CoordSystem,Coord::SkyFrame =Coord::FK5);
  double mapAngleToRef(double, Coord::CoordSystem, Coord::SkyFrame =Coord::FK5);
  void listAngleFromRef(ostream&, double, Coord::CoordSystem,
			Coord::SkyFrame =Coord::FK5);
  void listAngleFromRef(ostream&, double, double, Coord::CoordSystem,
			Coord::SkyFrame =Coord::FK5);

  int parse(istringstream&);

  void resetCompositeMarker() {compositeMarker = NULL;}

  Coord::CoordSystem getWCSSystem() {return wcsSystem_;}
  Coord::SkyFrame getWCSSkyFrame() {return wcsSkyFrame_;}
  Coord::SkyFormat getWCSSkyFormat() {return wcsSkyFormat_;}

  Coord::CoordSystem xySystem() {return xySystem_;}
  Coord::SkyFrame xySky() {return xySky_;}

  int useMarkerColor() {return useMarkerColor_;}
  char* markerColor() {return markerColor_;}

  void matchCmd(const char* xxname1, const char* yyname1,
		Coord::CoordSystem sys1, Coord::SkyFrame sky1,
		const char* xxname2, const char* yyname2,
		Coord::CoordSystem sys2, Coord::SkyFrame sky2,
		double rad, Coord::CoordSystem sys, Coord::DistFormat dist,
		const char* rr);

  // Axes Order
  void axesOrderCmd(int);
  void getAxesOrderCmd();

  // Background Commands
  void useBgColorCmd(int);
  void hasBgColorCmd();
  void bgColorCmd(const char*);
  void getBgColorCmd();

  // Bin Commands
  void binCmd(const Vector&, const char*, const char*, const char*);
  void binCmd(const Vector&, const Vector&, const char*, const char*, 
	      const char*);
  void binCmd(const Vector&, int, const Vector&, 
	      const char*, const char*, const char*, const char*);
  void binCmd(const Vector&, int, const Vector&, const Vector&, 
	      const char*, const char*, const char*, const char*);
  void binAboutCmd();
  void binAboutCmd(const Vector&);
  void binColsCmd(const char*, const char*, const char*);
  void binDepthCmd(int);
  void binFactorCmd(const Vector&);
  void binFactorAboutCmd(const Vector&, const Vector&);
  void binFactorToCmd(const Vector&);
  void binFactorToAboutCmd(const Vector&, const Vector&);
  void binFunctionCmd(FitsHist::Function);
  void binBufferSizeCmd(int);
  void binFilterCmd(const char*);
  virtual void binToFitCmd() =0;
  void getBinDepthCmd();
  void getBinFactorCmd();
  void getBinFunctionCmd();
  void getBinBufferSizeCmd();
  void getBinCursorCmd();
  void getBinFilterCmd();
  void getBinColsCmd();
  void getBinColsMinMaxCmd(const char*);
  void getBinColsDimCmd(const char*);
  void getBinListCmd();
  void hasBinColCmd(const char*);

  // Block Commands
  void blockCmd(const Vector&);
  void blockToCmd(const Vector&);
  virtual void blockToFitCmd() =0;
  void getBlockCmd();

  // Clip Commands
  virtual void clipScopeCmd(FrScale::ClipScope);
  void clipModeCmd(float);
  void clipModeCmd(FrScale::ClipMode);
  void clipMinMaxCmd(FrScale::MinMaxMode, int);
  void clipMinMaxRescanCmd();
  // backward compatibilty backup
  void clipMinMaxModeCmd(FrScale::MinMaxMode);
  // backward compatibilty backup
  void clipMinMaxSampleCmd(int);
  void clipUserCmd(double, double);
  void clipZScaleCmd(float,int,int);
  // backward compatibilty backup
  void clipZScaleContrastCmd(float);
  // backward compatibilty backup
  void clipZScaleSampleCmd(int);
  // backward compatibilty backup
  void clipZScaleLineCmd(int);

  void getClipCmd();
  void getClipCmd(float, FrScale::ClipScope);
  void getClipCmd(FrScale::ClipMode, FrScale::ClipScope);
  void getClipMinMaxModeCmd();
  void getClipMinMaxSampleCmd();
  void getClipModeCmd();
  void getClipPreserveCmd();
  void getClipScopeCmd();
  void getClipUserCmd();
  void getClipZScaleContrastCmd();
  void getClipZScaleSampleCmd();
  void getClipZScaleLineCmd();
  void getHistogramCmd(char*, char*, int);
  void getMinMaxCmd();
  void hasDATAMINCmd();
  void hasIRAFMINCmd();

  // Colormap Commands
  void colorbarTagCmd(const char*);
  virtual void colormapCmd(int, float, float, int, unsigned char*, int) {}
  virtual void colormapCmd(float, float, float, float, float, float, int,
			   unsigned char*, int) {}
  virtual void colormapBeginCmd() {}
  virtual void colormapEndCmd() {}
  virtual void colormapMotionCmd(int, float, float, int, unsigned char*, int) {}
  virtual void colormapMotionCmd(float, float, float, float, float, float, int,
				 unsigned char*, int) {}
  virtual void getColorbarCmd() =0;
  void getColorbarTagCmd();

  // Contour Commands
  void contourCreateCmd(const char*, int, int, FVContour::Method, int, int, FrScale::ColorScaleType, float, FrScale::ClipMode, float, FrScale::ClipScope, double, double, const char*);
  void contourCreatePolygonCmd();
  void contourDeleteCmd();
  void contourDeleteAuxCmd();
  void contourLoadCmd(const char*);
  void contourLoadCmd(const char*, const char*, int, int);
  void contourLoadCmd(const char*, Coord::CoordSystem, Coord::SkyFrame, const char*, int, int);
  void contourPasteCmd(const char*);
  void contourPasteCmd(const char*, const char*, int, int);
  void contourSaveCmd(const char*, Coord::CoordSystem, Coord::SkyFrame);
  void contourSaveAuxCmd(const char*, Coord::CoordSystem, Coord::SkyFrame);

  void getContourCmd(Coord::CoordSystem sys, Coord::SkyFrame sky);
  void getContourClipCmd();
  void getContourClipModeCmd();
  void getContourClipScopeCmd();
  void getContourColorNameCmd();
  void getContourDashCmd();
  void getContourLevelCmd();
  void getContourLineWidthCmd();
  void getContourMethodCmd();
  void getContourNumLevelCmd();
  void getContourScaleCmd();
  void getContourScaleLogCmd();
  void getContourSmoothCmd();
  void hasContourCmd();
  void hasContourAuxCmd();

  // Coordinate Commands
  void getWCSCmd();
  void wcsCmd(Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void getWCSNameCmd(Coord::CoordSystem);
  void getWCSAlignPointerCmd();
  void getCoordCmd(const Vector&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  virtual void getCursorCmd(Coord::InternalSystem) =0;
  virtual void getCursorCmd(Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat) =0;
  void hasSystemCmd(Coord::CoordSystem);
  void hasAmplifierCmd();
  void hasDetectorCmd();
  void hasPhysicalCmd();
  void hasImageCmd();
  void hasWCSAltCmd();
  void hasWCSCmd(Coord::CoordSystem);
  void hasWCSCelCmd(Coord::CoordSystem);
  void hasWCSEquCmd(Coord::CoordSystem);
  void hasWCSLinearCmd(Coord::CoordSystem);
  void hasWCS3DCmd(Coord::CoordSystem);

  // Crop Commands
  void cropCmd();
  void cropCmd(const Vector&, const Vector&, Coord::CoordSystem, Coord::SkyFrame);
  void cropCenterCmd(const Vector&, Coord::CoordSystem, Coord::SkyFrame, const Vector&, Coord::CoordSystem, Coord::DistFormat);
  void cropBeginCmd(const Vector&);
  void cropMotionCmd(const Vector&);
  void cropEndCmd(const Vector&);
  void crop3dCmd();
  void crop3dCmd(double, double, Coord::CoordSystem, Coord::SkyFrame = Coord::FK5);
  virtual void crop3dBeginCmd(const Vector&, int) {}
  virtual void crop3dMotionCmd(const Vector&, int) {}
  virtual void crop3dEndCmd(const Vector&, int) {}
  void getCropCmd(Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void getCropCenterCmd(Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, Coord::CoordSystem, Coord::DistFormat);
  void getCrop3dCmd(Coord::CoordSystem, Coord::SkyFrame =Coord::FK5);
  void hasCropCmd();

  // CrossHair Commands
  void crosshairCmd(int);
  void crosshairCmd(const Vector&, Coord::InternalSystem);
  void crosshairCmd(const Vector&, Coord::CoordSystem, Coord::SkyFrame =Coord::FK5);
  void crosshairWarpCmd(const Vector&);
  void getCrosshairCmd(Coord::InternalSystem);
  void getCrosshairCmd(Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void getCrosshairStatusCmd();

  // DATASEC Commands
  void DATASECCmd(int);
  void getDATASECCmd();
  void hasDATASECCmd();

  // Data Values
  void getDataValuesCmd(int, const Vector&, Coord::CoordSystem, 
			Coord::SkyFrame, const Vector&, char*);
  void getDataValuesCmd(const Vector&, Coord::InternalSystem, const Vector&);

  // Fits Commands
  void getBitpixCmd();
  void getFitsNAxesCmd();
  void getFitsCountCmd();
  void getFitsCenterCmd(Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void getFitsDepthCmd(int);
  void getFitsExtCmd(int);
  void getFitsExtCmd(const Vector&, Coord::InternalSystem);
  void getFitsFileNameCmd(FileNameType);
  void getFitsFileNameCmd(int, FileNameType);
  void getFitsFileNameCmd(const Vector&, Coord::InternalSystem, FileNameType);
  void getFitsHeaderCmd(int);
  void getFitsHeaderWCSCmd(int);
  void getFitsHeaderKeywordCmd(int,const char*);
  void getFitsObjectNameCmd();
  void getFitsSizeCmd();
  void getFitsSizeCmd(Coord::CoordSystem, Coord::SkyFrame, Coord::DistFormat);
  void getFitsSliceCmd(int);
  void getFitsSliceFromImageCmd(Coord::CoordSystem);
  void getFitsSliceFromImageCmd(int, Coord::CoordSystem);
  void getFitsSliceToImageCmd(double, Coord::CoordSystem);
  void hasFitsCmd();
  void hasFitsHPXCmd();
  void hasFitsBinCmd();
  void hasFitsCubeCmd();
  void hasFitsMosaicCmd();

  virtual void loadFitsAllocCmd(const char*, const char*, LayerType);
  virtual void loadFitsAllocGZCmd(const char*, const char*, LayerType);
  virtual void loadFitsChannelCmd(const char*, const char*, LayerType);
  virtual void loadFitsMMapCmd(const char*, LayerType);
  virtual void loadFitsSMMapCmd(const char*, const char*, LayerType);
  virtual void loadFitsMMapIncrCmd(const char*, LayerType);
  virtual void loadFitsShareCmd(ShmType, int, const char*, LayerType);
  virtual void loadFitsSShareCmd(ShmType, int, int, const char*, LayerType);
  virtual void loadFitsSocketCmd(int, const char*, LayerType);
  virtual void loadFitsSocketGZCmd(int, const char*, LayerType);
  virtual void loadFitsVarCmd(const char*, const char*, LayerType);

  virtual void loadArrAllocCmd(const char*, const char*, LayerType);
  virtual void loadArrAllocGZCmd(const char*, const char*, LayerType);
  virtual void loadArrChannelCmd(const char*, const char*, LayerType);
  virtual void loadArrMMapCmd(const char*, LayerType);
  virtual void loadArrMMapIncrCmd(const char*, LayerType);
  virtual void loadArrShareCmd(ShmType, int, const char*, LayerType);
  virtual void loadArrSocketCmd(int, const char*, LayerType);
  virtual void loadArrSocketGZCmd(int, const char*, LayerType);
  virtual void loadArrVarCmd(const char*, const char*, LayerType);

  void loadENVISMMapCmd(const char*, const char*);

  virtual void loadNRRDAllocCmd(const char*, const char*, LayerType);
  virtual void loadNRRDChannelCmd(const char*, const char*, LayerType);
  virtual void loadNRRDMMapCmd(const char*, LayerType);
  virtual void loadNRRDShareCmd(ShmType, int, const char*, LayerType);
  virtual void loadNRRDSocketCmd(int, const char*, LayerType);
  virtual void loadNRRDVarCmd(const char*, const char*, LayerType);

  virtual void loadPhotoCmd(const char*, const char*);
  virtual void loadSlicePhotoCmd(const char*, const char*);

  void loadExtCubeAllocCmd(const char*, const char*);
  void loadExtCubeAllocGZCmd(const char*, const char*);
  void loadExtCubeChannelCmd(const char*, const char*);
  void loadExtCubeMMapCmd(const char*);
  void loadExtCubeMMapIncrCmd(const char*);
  void loadExtCubeShareCmd(ShmType, int, const char*);
  void loadExtCubeSocketCmd(int, const char*);
  void loadExtCubeSocketGZCmd(int, const char*);
  void loadExtCubeVarCmd(const char*, const char*);

  void loadSliceAllocCmd(const char*, const char*);
  void loadSliceAllocGZCmd(const char*, const char*);
  void loadSliceChannelCmd(const char*, const char*);
  void loadSliceMMapCmd(const char*);
  void loadSliceSMMapCmd(const char*, const char*);
  void loadSliceMMapIncrCmd(const char*);
  void loadSliceShareCmd(ShmType, int, const char*);
  void loadSliceSShareCmd(ShmType, int, int, const char*);
  void loadSliceSocketCmd(int, const char*);
  void loadSliceSocketGZCmd(int, const char*);
  void loadSliceVarCmd(const char*, const char*);

  virtual void loadMosaicImageAllocCmd(MosaicType, Coord::CoordSystem, const char*, const char*, LayerType);
  virtual void loadMosaicImageAllocGZCmd(MosaicType, Coord::CoordSystem, const char*, const char*, LayerType);
  virtual void loadMosaicImageChannelCmd(MosaicType, Coord::CoordSystem, const char*, const char*, LayerType);
  virtual void loadMosaicImageMMapCmd(MosaicType, Coord::CoordSystem, const char*, LayerType);
  virtual void loadMosaicImageMMapIncrCmd(MosaicType, Coord::CoordSystem, const char*, LayerType);
  virtual void loadMosaicImageShareCmd(MosaicType, Coord::CoordSystem, ShmType, int, const char*, LayerType);
  virtual void loadMosaicImageSocketCmd(MosaicType, Coord::CoordSystem, int, const char*, LayerType);
  virtual void loadMosaicImageSocketGZCmd(MosaicType, Coord::CoordSystem, int, const char*, LayerType);
  virtual void loadMosaicImageVarCmd(MosaicType, Coord::CoordSystem, const char*,const char*, LayerType);

  virtual void loadMosaicImageWFPC2AllocCmd(const char*, const char*, LayerType);
  virtual void loadMosaicImageWFPC2AllocGZCmd(const char*, const char*, LayerType);
  virtual void loadMosaicImageWFPC2ChannelCmd(const char*, const char*, LayerType);
  virtual void loadMosaicImageWFPC2MMapCmd(const char*, LayerType);
  virtual void loadMosaicImageWFPC2MMapIncrCmd(const char*, LayerType);
  virtual void loadMosaicImageWFPC2ShareCmd(ShmType, int, const char*, LayerType);
  virtual void loadMosaicImageWFPC2SocketCmd(int, const char*, LayerType);
  virtual void loadMosaicImageWFPC2SocketGZCmd(int, const char*, LayerType);
  virtual void loadMosaicImageWFPC2VarCmd(const char*, const char*, LayerType);

  virtual void loadMosaicAllocCmd(MosaicType, Coord::CoordSystem, const char*, const char*, LayerType);
  virtual void loadMosaicAllocGZCmd(MosaicType, Coord::CoordSystem, const char*, const char*, LayerType);
  virtual void loadMosaicChannelCmd(MosaicType, Coord::CoordSystem, const char*, const char*, LayerType);
  virtual void loadMosaicMMapCmd(MosaicType, Coord::CoordSystem, const char*, LayerType);
  virtual void loadMosaicSMMapCmd(MosaicType, Coord::CoordSystem, const char*, const char*, LayerType);
  virtual void loadMosaicMMapIncrCmd(MosaicType, Coord::CoordSystem, const char*, LayerType);
  virtual void loadMosaicShareCmd(MosaicType, Coord::CoordSystem, ShmType, int, const char*, LayerType);
  virtual void loadMosaicSShareCmd(MosaicType, Coord::CoordSystem, ShmType, int, int, const char*, LayerType);
  virtual void loadMosaicSocketCmd(MosaicType, Coord::CoordSystem, int, const char*, LayerType);
  virtual void loadMosaicSocketGZCmd(MosaicType, Coord::CoordSystem, int, const char*, LayerType);
  virtual void loadMosaicVarCmd(MosaicType, Coord::CoordSystem, const char*, const char*, LayerType);

  // Fits RGB
  virtual void loadRGBCubeAllocCmd(const char*, const char*) {}
  virtual void loadRGBCubeAllocGZCmd(const char*, const char*) {}
  virtual void loadRGBCubeChannelCmd(const char*, const char*) {}
  virtual void loadRGBCubeMMapCmd(const char*) {}
  virtual void loadRGBCubeSMMapCmd(const char*, const char*) {}
  virtual void loadRGBCubeMMapIncrCmd(const char*) {}
  virtual void loadRGBCubeShareCmd(ShmType, int, const char*) {}
  virtual void loadRGBCubeSShareCmd(ShmType,int,int,const char*) {}
  virtual void loadRGBCubeSocketCmd(int, const char*) {}
  virtual void loadRGBCubeSocketGZCmd(int, const char*) {}
  virtual void loadRGBCubeVarCmd(const char*, const char*) {}

  virtual void loadRGBImageAllocCmd(const char*, const char*) {}
  virtual void loadRGBImageAllocGZCmd(const char*, const char*) {}
  virtual void loadRGBImageChannelCmd(const char*, const char*) {}
  virtual void loadRGBImageMMapCmd(const char*) {}
  virtual void loadRGBImageMMapIncrCmd(const char*) {}
  virtual void loadRGBImageShareCmd(ShmType, int, const char*) {}
  virtual void loadRGBImageSocketCmd(int, const char*) {}
  virtual void loadRGBImageSocketGZCmd(int, const char*) {}
  virtual void loadRGBImageVarCmd(const char*, const char*) {}

  virtual void loadArrayRGBCubeAllocCmd(const char*, const char*) {}
  virtual void loadArrayRGBCubeAllocGZCmd(const char*, const char*) {}
  virtual void loadArrayRGBCubeChannelCmd(const char*, const char*) {}
  virtual void loadArrayRGBCubeMMapCmd(const char*) {}
  virtual void loadArrayRGBCubeMMapIncrCmd(const char*) {}
  virtual void loadArrayRGBCubeShareCmd(ShmType, int, const char*) {}
  virtual void loadArrayRGBCubeSocketCmd(int, const char*) {}
  virtual void loadArrayRGBCubeSocketGZCmd(int, const char*) {}
  virtual void loadArrayRGBCubeVarCmd(const char*, const char*) {}

  virtual void savePhotoCmd(const char*) {}

  void saveFits(OutFitsStream&);
  void saveFitsFileCmd(const char*);
  void saveFitsChannelCmd(const char*);
  void saveFitsSocketCmd(int);

  void saveFitsTable(OutFitsStream&);
  void saveFitsTableFileCmd(const char*);
  void saveFitsTableChannelCmd(const char*);
  void saveFitsTableSocketCmd(int);

  void saveFitsSlice(OutFitsStream&);
  void saveFitsSliceFileCmd(const char*);
  void saveFitsSliceChannelCmd(const char*);
  void saveFitsSliceSocketCmd(int);

  void saveFitsExtCube(OutFitsStream&);
  void saveFitsExtCubeFileCmd(const char*);
  void saveFitsExtCubeChannelCmd(const char*);
  void saveFitsExtCubeSocketCmd(int);

  void saveFitsMosaic(OutFitsStream&, int);
  void saveFitsMosaicFileCmd(const char*, int);
  void saveFitsMosaicChannelCmd(const char*, int);
  void saveFitsMosaicSocketCmd(int, int);

  void saveFitsMosaicImage(OutFitsStream&);
  void saveFitsMosaicImageFileCmd(const char*);
  void saveFitsMosaicImageChannelCmd(const char*);
  void saveFitsMosaicImageSocketCmd(int);

  virtual void saveFitsRGBImage(OutFitsStream&) {}
  virtual void saveFitsRGBImageFileCmd(const char*) {}
  virtual void saveFitsRGBImageChannelCmd(const char*) {}
  virtual void saveFitsRGBImageSocketCmd(int) {}

  virtual void saveFitsRGBCube(OutFitsStream&) {}
  virtual void saveFitsRGBCubeFileCmd(const char*) {}
  virtual void saveFitsRGBCubeChannelCmd(const char*) {}
  virtual void saveFitsRGBCubeSocketCmd(int) {}

  virtual void saveFitsResampleFileCmd(const char*) {}
  virtual void saveFitsResampleChannelCmd(const char*) {}
  virtual void saveFitsResampleSocketCmd(int) {}

  void saveArray(OutFitsStream&, FitsFile::ArchType);
  void saveArrayFileCmd(const char*, FitsFile::ArchType);
  void saveArrayChannelCmd(const char*, FitsFile::ArchType);
  void saveArraySocketCmd(int, FitsFile::ArchType);

  virtual void saveArrayRGBCube(OutFitsStream&, FitsFile::ArchType) {}
  virtual void saveArrayRGBCubeFileCmd(const char*, FitsFile::ArchType) {}
  virtual void saveArrayRGBCubeChannelCmd(const char*, FitsFile::ArchType) {}
  virtual void saveArrayRGBCubeSocketCmd(int, FitsFile::ArchType) {}

  void saveNRRD(OutFitsStream&, FitsFile::ArchType);
  void saveNRRDFileCmd(const char*, FitsFile::ArchType);
  void saveNRRDChannelCmd(const char*, FitsFile::ArchType);
  void saveNRRDSocketCmd(int, FitsFile::ArchType);

  void saveENVI(ostream&, OutFitsStream&, FitsFile::ArchType);
  void saveENVIFileCmd(const char*, const char*, FitsFile::ArchType);

  void sliceCmd(int, int);
  void sliceCmd(double, Coord::CoordSystem);

  void updateFitsCmd(int);
  void updateFitsCmd(int, BBox, int);
  void unloadFitsCmd();

  // Fitsy Commands
  void fitsyHasExtCmd(const char*);

  // Frame Commands
  void clearCmd();
  void getFitsHeightCmd();
  virtual void getTypeCmd() =0;
  void getFitsWidthCmd();
  void highliteCmd(int);
  void highliteColorCmd(const char*);
  void getHighliteColorCmd();
  void warpCmd(const Vector&);
  void warpToCmd(const Vector&);

  // Graph Commands
  void getHorzCutCmd(char*, char*, const Vector&, Coord::InternalSystem, 
		     int, Base::CutMethod);
  void getVertCutCmd(char*, char*, const Vector&, Coord::InternalSystem, 
		     int, Base::CutMethod);

  // Grid Commands
  virtual void gridCmd(Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, 
		       Grid::GridType, const char*, const char*) =0;
  void gridDeleteCmd();
  void getGridCmd();
  void getGridOptionCmd();
  void getGridVarsCmd();
  void hasGridCmd();

  // IIS Commands
  virtual void iisCmd(int, int) {}
  virtual void iisCursorModeCmd(int) {}
  virtual void iisEraseCmd() {}
  virtual void iisGetCmd(char*, int, int, int, int) {}
  virtual void iisGetCursorCmd() {}
  virtual void iisGetFileNameCmd() {}
  virtual void iisGetFileNameCmd(int) {}
  virtual void iisGetFileNameCmd(const Vector&) {}
  virtual void iisMessageCmd(const char*) {}
  virtual void iisSetCmd(const char*, int, int, int, int) {}
  virtual void iisSetCursorCmd(const Vector&, Coord::InternalSystem) {}
  virtual void iisSetCursorCmd(const Vector&, Coord::CoordSystem) {}
  virtual void iisSetFileNameCmd(const char*) {}
  virtual void iisSetFileNameCmd(const char*,int) {}
  virtual void iisUpdateCmd() {}
  virtual void iisWCSCmd(const Matrix&, const Vector&, int) {}
  void hasIISCmd();

  // Info Commands
  void getInfoCmd(char*);
  virtual void getInfoCmd(const Vector&, Coord::InternalSystem, char*) =0;
  void getInfoClipCmd();
  void getValueCmd(const Vector&, Coord::InternalSystem);

  // loadIncr is only used by LICK OBS
  // maintained for backward compatibility
  void loadIncrDataCmd(int, int, int, int, int);
  void loadIncrMinMaxCmd(int, int, int, int, int);
  void loadIncrEndCmd();

  // Magnifier Commands
  void magnifierCmd(char*, int, int);
  void magnifierCmd(int);
  void magnifierGraphicsCmd(int);
  void magnifierCursorCmd(int);
  void magnifierZoomCmd(double);
  void magnifierColorCmd(const char*);
  void updateMagnifierCmd(const Vector& v);

  // Marker Commands
  // Basic Regions
  void createCircleCmd(const Vector&, 
		       double, int,
		       const char*, int*, int, const char*, 
		       const char*, unsigned short, const char*,
		       const List<Tag>&, const List<CallBack>& cb);
  void createEllipseCmd(const Vector&, 
			const Vector&, 
			double, int,
			const char*, int*, int, const char*, 
			const char*, unsigned short, const char*,
			const List<Tag>&, const List<CallBack>& cb);
  void createBoxCmd(const Vector&, 
		    const Vector&, 
		    double, int,
		    const char*, int*, int, const char*, 
		    const char*, unsigned short, const char*,
		    const List<Tag>&, const List<CallBack>& cb);
  void createPolygonCmd(const Vector&, 
			const Vector&, int,
			const char*, int*, int, const char*, 
			const char*, unsigned short, const char*,
			const List<Tag>&, const List<CallBack>& cb);
  void createPolygonCmd(const List<Vertex>&, int,
			const char*, int*, int, const char*, 
			const char*, unsigned short, const char*,
			const List<Tag>&, const List<CallBack>& cb);
  void createSegmentCmd(const Vector&, 
			const Vector&,
			const char*, int*, int, const char*, 
			const char*, unsigned short, const char*,
			const List<Tag>&, const List<CallBack>& cb);
  void createSegmentCmd(const List<Vertex>&,
			const char*, int*, int, const char*, 
			const char*, unsigned short, const char*,
			const List<Tag>&, const List<CallBack>& cb);
  void createLineCmd(const Vector&, 
		     const Vector&, 
		     int, int,
		     const char*, int*, int, const char*,
		     const char*, unsigned short, const char*,
		     const List<Tag>&, const List<CallBack>& cb);
  void createVectCmd(const Vector&, 
		     const Vector&, 
		     int,
		     const char*, int*, int, const char*,
		     const char*, unsigned short, const char*,
		     const List<Tag>&, const List<CallBack>& cb);
  void createVectCmd(const Vector&, 
		     double mag, double ang, 
		     int,
		     const char*, int*, int, const char*,
		     const char*, unsigned short, const char*,
		     const List<Tag>&, const List<CallBack>& cb);
  void createTextCmd(const Vector&, 
		     double, int,
		     const char*, int*, int, const char*, 
		     const char*, unsigned short, const char*,
		     const List<Tag>&, const List<CallBack>& cb);
  void createPointCmd(const Vector&, Point::PointShape, int,
		      const char*, int*, int, const char*,
		      const char*, unsigned short, const char*,
		      const List<Tag>&, 
		      const List<CallBack>& cb);

  // Measurement Regions
  void createRulerCmd(const Vector&, const Vector&, 
		      Coord::CoordSystem, Coord::SkyFrame, 
		      Coord::CoordSystem, Coord::DistFormat, const char*,
		      const char*, int*, int, const char*,
		      const char*, unsigned short, const char*,
		      const List<Tag>&, const List<CallBack>& cb);
  void createCompassCmd(const Vector&, double, 
			const char*, const char*,
			int, int,
			Coord::CoordSystem, Coord::SkyFrame,
			const char*, int*, int, const char*,
			const char*, unsigned short, const char*,
			const List<Tag>&, const List<CallBack>& cb);
  void createProjectionCmd(const Vector&, const Vector&, 
			   double, 
			   const char*, int*, int, const char*,
			   const char*, unsigned short, const char*,
			   const List<Tag>&, 
			   const List<CallBack>& cb);

  // Annulus Regions
  void createAnnulusCmd(const Vector&, 
			double, double, int,
			const char*, int*, int, const char*, 
			const char*, unsigned short, const char*,
			const List<Tag>&, const List<CallBack>& cb);
  void createAnnulusCmd(const Vector&, 
			int, double*,
			const char*, int*, int, const char*, 
			const char*, unsigned short, const char*,
			const List<Tag>&, const List<CallBack>& cb);
  void createEllipseAnnulusCmd(const Vector&, 
			       const Vector&, const Vector&, int, 
			       double,
			       const char*, int*, int, const char*, 
			       const char*, unsigned short, const char*,
			       const List<Tag>&, 
			       const List<CallBack>& cb);
  void createEllipseAnnulusCmd(const Vector&, 
			       int, Vector*,
			       double, 
			       const char*, int*, int,  const char*, 
			       const char*, unsigned short, const char*,
			       const List<Tag>&, 
			       const List<CallBack>& cb);
  void createBoxAnnulusCmd(const Vector&, 
			   const Vector&, const Vector&, int, 
			   double,
			   const char*, int*, int, const char*, 
			   const char*, unsigned short, const char*,
			   const List<Tag>&, 
			   const List<CallBack>& cb);
  void createBoxAnnulusCmd(const Vector&, 
			   int, Vector*,
			   double, 
			   const char*, int*, int, const char*, 
			   const char*, unsigned short, const char*,
			   const List<Tag>&, 
			   const List<CallBack>& cb);

  // Panda Regions
  void createCpandaCmd(const Vector&, 
		       double, double, int, 
		       double, double, int,
		       const char*, int*, int, const char*, 
		       const char*, unsigned short, const char*,
		       const List<Tag>&, const List<CallBack>& cb);
  void createCpandaCmd(const Vector&, 
		       int, double*,
		       int, double*,
		       const char*, int*, int, const char*, 
		       const char*, unsigned short, const char*,
		       const List<Tag>&, const List<CallBack>& cb);
  void createEpandaCmd(const Vector&, 
		       double, double, int, 
		       const Vector&, const Vector&, int, 
		       double,
		       const char*, int*, int, const char*, 
		       const char*, unsigned short, const char*,
		       const List<Tag>&, const List<CallBack>& cb);
  void createEpandaCmd(const Vector&, 
		       int, double*,
		       int, Vector*,
		       double,
		       const char*, int*, int, const char*, 
		       const char*, unsigned short, const char*,
		       const List<Tag>&, const List<CallBack>& cb);
  void createBpandaCmd(const Vector&, 
		       double, double, int, 
		       const Vector&, const Vector&, int, 
		       double,
		       const char*, int*, int, const char*, 
		       const char*, unsigned short, const char*,
		       const List<Tag>&, const List<CallBack>& cb);
  void createBpandaCmd(const Vector&, 
		       int, double*,
		       int, Vector*,
		       double,
		       const char*, int*, int, const char*, 
		       const char*, unsigned short, const char*,
		       const List<Tag>&, const List<CallBack>& cb);

  // Composite Regions
  void createCompositeCmd(const Vector&, double, int,
			  const char*, int*, int, const char*, 
			  const char*, unsigned short, const char*,
			  const List<Tag>&, const List<CallBack>& cb);
  void createCompositeCmd(
			  const char*, int*, int, const char*, 
			  const char*, unsigned short, const char*,
			  const List<Tag>&, const List<CallBack>& cb);

  // Template Regions
  void createTemplateCmd(const Vector&, const char*);
  void createTemplateCmd(const Vector&, Coord::CoordSystem, Coord::SkyFrame, 
			 const char*);
  void createTemplateVarCmd(const Vector&, const char* var);

  void getMarkerAnalysisHistogramCmd(int, char*, char*, int);
  void getMarkerAnalysisPlot2dCmd(int, char*, char*, char*, char*, 
				  Coord::CoordSystem, Coord::SkyFrame, 
				  Marker::AnalysisMethod);
  void getMarkerAnalysisPlot3dCmd(int, char*, char*,
				  Coord::CoordSystem,
				  Marker::AnalysisMethod);
  void getMarkerAnalysisPandaCmd(int, char*, char*, char*, Coord::CoordSystem,
				 int);
  void getMarkerAnalysisRadialCmd(int, char*, char*, char*, Coord::CoordSystem);
  void getMarkerAnalysisStatsCmd(int, Coord::CoordSystem, Coord::SkyFrame);

  void getMarkerAngleCmd(int);
  void getMarkerAngleCmd(int, Coord::CoordSystem, Coord::SkyFrame);
  void getMarkerAnnulusRadiusCmd(int, Coord::CoordSystem, Coord::DistFormat);
  void getMarkerBoxFillCmd(int);
  void getMarkerBoxAnnulusRadiusCmd(int, Coord::CoordSystem, Coord::DistFormat);
  void getMarkerBoxRadiusCmd(int, Coord::CoordSystem, Coord::DistFormat);
  void getMarkerBpandaAnglesCmd(int);
  void getMarkerBpandaAnglesCmd(int, Coord::CoordSystem, Coord::SkyFrame);
  void getMarkerBpandaRadiusCmd(int, Coord::CoordSystem, Coord::DistFormat);
  void getMarkerCenterCmd(int, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void getMarkerCentroidAutoCmd();
  void getMarkerCentroidRadiusCmd();
  void getMarkerCentroidIterationCmd();
  void getMarkerCentroidOptionCmd();
  void getMarkerCircleFillCmd(int);
  void getMarkerCircleRadiusCmd(int, Coord::CoordSystem, Coord::DistFormat);
  void getMarkerColorCmd();
  void getMarkerColorCmd(const char*);
  void getMarkerColorCmd(int);
  void getMarkerCompassArrowCmd(int);
  void getMarkerCompassLabelCmd(int);
  void getMarkerCompassRadiusCmd(int, Coord::CoordSystem, Coord::DistFormat);
  void getMarkerCompassSystemCmd(int);
  void getMarkerCompositeCmd(int);
  void getMarkerCpandaAnglesCmd(int);
  void getMarkerCpandaAnglesCmd(int, Coord::CoordSystem, Coord::SkyFrame);
  void getMarkerCpandaRadiusCmd(int, Coord::CoordSystem, Coord::DistFormat);
  void getMarkerEllipseFillCmd(int);
  void getMarkerEllipseRadiusCmd(int, Coord::CoordSystem, Coord::DistFormat);
  void getMarkerEllipseAnnulusRadiusCmd(int, Coord::CoordSystem,Coord::DistFormat);
  void getMarkerEpandaAnglesCmd(int);
  void getMarkerEpandaAnglesCmd(int, Coord::CoordSystem, Coord::SkyFrame);
  void getMarkerEpandaRadiusCmd(int, Coord::CoordSystem, Coord::DistFormat);
  void getMarkerEpsilonCmd();
  void getMarkerFontCmd();
  void getMarkerFontCmd(const char*);
  void getMarkerFontCmd(int);
  void getMarkerIdCmd(const char*);
  void getMarkerIdCmd(const Vector&);
  void getMarkerIdAllCmd();
  void getMarkerLineCmd(int, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void getMarkerLineArrowCmd(int);
  void getMarkerLineLengthCmd(int, Coord::CoordSystem, Coord::DistFormat);
  void getMarkerLineWidthCmd();
  void getMarkerLineWidthCmd(int);
  void getMarkerMapLenFromRefCmd(int, double, Coord::CoordSystem, Coord::DistFormat);
  void getMarkerNumberCmd();
  void getMarkerPointShapeCmd(int);
  void getMarkerPointSizeCmd(int);
  void getMarkerPolygonFillCmd(int);
  void getMarkerPolygonSegmentCmd(const Vector&);
  void getMarkerPreserveCmd();
  void getMarkerProjectionPointsCmd(int, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void getMarkerProjectionLengthCmd(int, Coord::CoordSystem, Coord::DistFormat);
  void getMarkerProjectionMethodCmd(int);
  void getMarkerProjectionWidthCmd(int, Coord::CoordSystem, Coord::DistFormat);
  void getMarkerPropertyCmd(unsigned short);
  void getMarkerPropertyCmd(const char*, unsigned short);
  void getMarkerPropertyCmd(int, unsigned short);
  void getMarkerRulerDistSpecCmd(int);
  void getMarkerRulerLengthCmd(int, Coord::CoordSystem, Coord::DistFormat);
  void getMarkerRulerPointCmd(int, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void getMarkerRulerSystemCmd(int);
  void getMarkerSegmentSegmentCmd(const Vector&);
  void getMarkerSelectedCmd();
  void getMarkerSelectedCmd(int);
  void getMarkerSelectedCmd(const Vector&);
  void getMarkerSelectedNumberCmd();
  void getMarkerShowCmd();
  void getMarkerShowTextCmd();
  void getMarkerHandleCmd(const Vector&);
  void getMarkerHighlitedCmd();
  void getMarkerHighlitedCmd(int);
  void getMarkerHighlitedCmd(const Vector&);
  void getMarkerHighlitedNumberCmd();
  void getMarkerTagCmd(const char*);
  void getMarkerTagCmd(int);
  void getMarkerTagCmd(int,int);
  void getMarkerTagDefaultNameCmd();
  void getMarkerTagNumberCmd(const char*);
  void getMarkerTagsCmd();
  void getMarkerTextCmd(int);
  void getMarkerTextRotateCmd(int);
  void getMarkerTypeCmd(int);
  void getMarkerVectorCmd(int, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void getMarkerVectorArrowCmd(int);
  void getMarkerVectorLengthCmd(int, Coord::CoordSystem, Coord::DistFormat);

  void hasMarkerHighlitedCmd();
  void hasMarkerPasteCmd();
  void hasMarkerSelectedCmd();
  void hasMarkerUndoCmd();

  void markerLayerCmd(MarkerLayer);

  void markerAnalysisCmd(int, Marker::AnalysisTask, int);

  void markerAngleCmd(int, double);
  void markerAngleCmd(int, double, Coord::CoordSystem, Coord::SkyFrame);
  void markerAnnulusCreateRadiusCmd(int, const Vector&);
  void markerAnnulusDeleteRadiusCmd(int, int);
  void markerAnnulusRadiusCmd(int, double, double, int, Coord::CoordSystem, Coord::DistFormat);
  void markerAnnulusRadiusCmd(int, const char*, Coord::CoordSystem, Coord::DistFormat);

  void markerBackCmd();
  void markerBackCmd(const char*);
  void markerBackCmd(int);
  void markerBoxFillCmd(int, int);
  void markerBoxAnnulusRadiusCmd(int, const Vector&, const Vector&, int, 
				 Coord::CoordSystem, Coord::DistFormat);
  void markerBoxAnnulusRadiusCmd(int, const char*, Coord::CoordSystem, Coord::DistFormat);
  void markerBoxAnnulusCreateRadiusCmd(int, const Vector&);
  void markerBoxAnnulusDeleteRadiusCmd(int, int);
  void markerBoxRadiusCmd(int, const Vector&, Coord::CoordSystem, Coord::DistFormat);
  void markerBpandaCreateAnglesCmd(int, const Vector&);
  void markerBpandaCreateRadiusCmd(int, const Vector&);
  void markerBpandaDeleteCmd(int, int);
  void markerBpandaEditCmd(int, double, double, int, 
			   const Vector&, const Vector&, int);
  void markerBpandaEditCmd(int, double, double, int, 
			   const Vector&, const Vector&, int,
			   Coord::CoordSystem, Coord::SkyFrame);
  void markerBpandaEditCmd(int, const char*, const char*, 
			   Coord::CoordSystem, Coord::SkyFrame,
			   Coord::CoordSystem, Coord::DistFormat);

  void markerCallBackCmd(int, CallBack::Type, const char*, const char*);
  void markerCentroidCmd();
  void markerCentroidCmd(const char*);
  void markerCentroidCmd(int);
  void markerCentroidAutoCmd(int);
  void markerCentroidRadiusCmd(float);
  void markerCentroidIterationCmd(int);
  void markerCircleFillCmd(int, int);
  void markerCircleRadiusCmd(int, double, Coord::CoordSystem, Coord::DistFormat);
  void markerColorCmd(const char*);
  void markerColorCmd(const char*, const char*);
  void markerColorCmd(int, const char*);
  void markerCompassArrowCmd(int, int, int);
  void markerCompassLabelCmd(int, const char*, const char*);
  void markerCompassRadiusCmd(int, double, Coord::CoordSystem, Coord::DistFormat);
  void markerCompassSystemCmd(int, Coord::CoordSystem, Coord::SkyFrame);
  void markerCompositeCmd(int, int);
  void markerCompositeDeleteCmd();
  void markerCommandCmd(MarkerFormat, const char*);
  void markerCommandVarCmd(MarkerFormat, const char*);
  void markerCopyCmd();
  void markerCopyCmd(const char*);
  void markerCpandaCreateAnglesCmd(int, const Vector&);
  void markerCpandaCreateRadiusCmd(int, const Vector&);
  void markerCpandaDeleteCmd(int, int);
  void markerCpandaEditCmd(int, double, double, int, double, double, int);
  void markerCpandaEditCmd(int, double, double, int, double, double, int,
			   Coord::CoordSystem, Coord::SkyFrame);
  void markerCpandaEditCmd(int, const char*, const char*, 
			   Coord::CoordSystem, Coord::SkyFrame,Coord::CoordSystem, Coord::DistFormat);
  void markerCutCmd();
  void markerCutCmd(const char*);

  void markerDeleteAllCmd(int);

  void markerDeleteCmd(const char*);
  void markerDeleteCmd(int);
  void markerDeleteLastCmd();
  void markerDeleteCallBackCmd(int, CallBack::Type, const char*);
  void markerDeleteTagCmd(int);
  void markerDeleteTagCmd(int, const char*);
  void markerDeleteTagCmd(int, int);

  void markerEditBeginCmd(int, int);
  void markerEditBeginCmd(const Vector&, int);
  void markerEditMotionCmd(const Vector&, int);
  void markerEditEndCmd();
  void markerEllipseFillCmd(int, int);
  void markerEllipseRadiusCmd(int, const Vector&,
			      Coord::CoordSystem, Coord::DistFormat);
  void markerEllipseAnnulusRadiusCmd(int, const Vector&, const Vector&, int, 
				     Coord::CoordSystem, Coord::DistFormat);
  void markerEllipseAnnulusRadiusCmd(int, const char*, 
				     Coord::CoordSystem, Coord::DistFormat);
  void markerEllipseAnnulusCreateRadiusCmd(int, const Vector&);
  void markerEllipseAnnulusDeleteRadiusCmd(int, int);
  void markerEpandaCreateAnglesCmd(int, const Vector&);
  void markerEpandaCreateRadiusCmd(int, const Vector&);
  void markerEpandaDeleteCmd(int, int);
  void markerEpandaEditCmd(int, double, double, int, 
			   const Vector&, const Vector&, int);
  void markerEpandaEditCmd(int, double, double, int, 
			   const Vector&, const Vector&, int,
			   Coord::CoordSystem, Coord::SkyFrame);
  void markerEpandaEditCmd(int, const char*, const char*, 
			   Coord::CoordSystem, Coord::SkyFrame,
			   Coord::CoordSystem, Coord::DistFormat);
  void markerEpsilonCmd(int ee) {markerEpsilon = ee;}

  void markerFontCmd(const char*);
  void markerFontCmd(const char*, const char*);
  void markerFontCmd(int, const char*);
  void markerFrontCmd();
  void markerFrontCmd(const char*);
  void markerFrontCmd(int);

  void markerHighliteAllCmd(); // not used
  void markerHighliteCmd(int); // not used
  void markerHighliteCmd(const char*); // not used
  void markerHighliteToggleCmd(const Vector&);
  void markerHighliteOnlyCmd(int);
  void markerHighliteOnlyCmd(const char*); // not used
  void markerHighliteOnlyCmd(const Vector&);  // not used

  void markerKeyCmd();
  void markerKeyCmd(const Vector&);

  void markerLineCmd(int, const Vector&, const Vector&,
		     Coord::CoordSystem, Coord::SkyFrame);
  void markerLineArrowCmd(int, int, int);
  void markerLineWidthCmd(int);
  void markerLineWidthCmd(int, int);
  void markerListCmd(MarkerFormat,
		     Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, 
		     int strip, int select,
		     unsigned short, unsigned short, List<Tag>&);
  void markerLoadCmd(MarkerFormat, const char*, int, const char*,
		     Coord::CoordSystem, Coord::SkyFrame);
  void markerLoadCmd(MarkerFormat, int, int, const char*,
		     Coord::CoordSystem, Coord::SkyFrame);
  void markerLoadFitsCmd(const char*, const char*);

  void markerMoveCmd(const Vector&);
  void markerMoveCmd(const char*, const Vector&);
  void markerMoveCmd(int id, const Vector&);
  void markerMoveBeginCmd(const Vector&);
  void markerMoveMotionCmd(const Vector&);
  void markerMoveEndCmd();
  void markerMoveToCmd(const Vector&, Coord::CoordSystem, Coord::SkyFrame);
  void markerMoveToCmd(const char*, const Vector&, Coord::CoordSystem, Coord::SkyFrame);
  void markerMoveToCmd(int, const Vector&, Coord::CoordSystem, Coord::SkyFrame);

  void markerPasteCmd();
  void markerPasteCmd(Coord::CoordSystem);
  void markerPointShapeCmd(int, Point::PointShape);
  void markerPointSizeCmd(int, int);
  void markerPolygonFillCmd(int, int);
  void markerPolygonCreateVertexCmd(int, int, const Vector&);
  void markerPolygonDeleteVertexCmd(int, int);
  void markerPolygonResetCmd(int, const Vector&, Coord::CoordSystem, Coord::DistFormat);
  void markerPreserveCmd(int r) {preserveMarkers = r;}
  void markerPropertyCmd(unsigned short, int);
  void markerPropertyCmd(const char*, unsigned short, int);
  void markerPropertyCmd(int, unsigned short, int);
  void markerPropertyCmd(unsigned short, int, const Vector&);
  void markerProjectionCmd(int, const Vector&, const Vector&, 
			   Coord::CoordSystem, Coord::SkyFrame, 
			   double, Coord::CoordSystem, Coord::DistFormat);

  void markerRotateBeginCmd(int);
  void markerRotateBeginCmd(const Vector&);
  void markerRotateMotionCmd(const Vector&, int h);
  void markerRotateEndCmd();
  void markerRulerDistSpecCmd(int, const char*);
  void markerRulerPointCmd(int, const Vector&, const Vector&, 
			   Coord::CoordSystem, Coord::SkyFrame);
  void markerRulerSystemCmd(int, Coord::CoordSystem, Coord::SkyFrame, 
			    Coord::CoordSystem, Coord::DistFormat);

  void markerSaveCmd(const char*, MarkerFormat, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int strip, int select);
  void markerSaveTemplateCmd(const char*);
  void markerSegmentCreateVertexCmd(int, int, const Vector&);
  void markerSegmentDeleteVertexCmd(int, int);
  void markerSegmentResetCmd(int, const Vector&, Coord::CoordSystem, Coord::DistFormat);
  void markerSelectAllCmd();
  void markerSelectCmd(int); // not used
  void markerSelectCmd(const char*);
  void markerSelectToggleCmd();
  void markerSelectToggleCmd(const Vector&);
  void markerSelectOnlyCmd(int);
  void markerSelectOnlyCmd(const char*);
  void markerSelectOnlyCmd(const Vector&);
  void markerShowCmd(int);
  void markerShowTextCmd(int);

  void markerTagCmd(const char*);
  void markerTagCmd(int, const char*);
  void markerTagEditCmd(const char*, const char*);
  void markerTagDeleteCmd(const char*);
  void markerTagDeleteAllCmd();
  void markerTagUpdateCmd(const char*);
  void markerTextCmd(int, const char*);
  void markerTextRotateCmd(int, int);

  void markerUndoCmd();
  void markerUnhighliteAllCmd();
  void markerUnhighliteCmd(int); // not used
  void markerUnhighliteCmd(const char*);
  void markerUnselectAllCmd();
  void markerUnselectCmd(int); // not used
  void markerUnselectCmd(const char*); // not used

  void markerVectorCmd(int, const Vector&, Coord::CoordSystem, Coord::SkyFrame, 
		       double, Coord::CoordSystem, Coord::DistFormat, double);
  void markerVectorArrowCmd(int, int);

  void regionHighliteBeginCmd(const Vector& v) {regionSelectBeginCmd(v);}
  void regionHighliteMotionCmd(const Vector& v) {regionSelectMotionCmd(v);}
  void regionHighliteEndCmd();
  void regionHighliteShiftEndCmd();
  void regionSelectBeginCmd(const Vector&);
  void regionSelectMotionCmd(const Vector&);
  void regionSelectEndCmd();
  void regionSelectShiftEndCmd();

  // Mask Commands
  virtual void getMaskCountCmd();

  virtual void getMaskColorCmd();
  virtual void getMaskMarkCmd();
  virtual void getMaskRangeCmd();
  virtual void getMaskSystemCmd();
  virtual void getMaskTransparencyCmd();
  virtual void getMaskBlendCmd();

  virtual void maskClearCmd() {};
  virtual void maskColorCmd(const char*) {};
  virtual void maskMarkCmd(FitsMask::MaskType) {};
  virtual void maskRangeCmd(double,double) {};
  virtual void maskTransparencyCmd(float) {};
  virtual void maskBlendCmd(FitsMask::MaskBlend) {};
  virtual void maskSystemCmd(Coord::CoordSystem) {};

  // NaN Commands
  void getNANColorCmd();
  void nanColorCmd(const char*);

  // Pan Zoom Rotate Orient Commands
  void centerCmd();
  void getOrientCmd();
  void getRotateCmd();
  void getPanPreserveCmd();
  void getZoomCmd();
  void orientCmd(Coord::Orientation);
  virtual void panCmd(const Vector&) =0;
  virtual void panCmd(const Vector&, const Vector&) =0;
  virtual void panCmd(const Vector&, Coord::CoordSystem, Coord::SkyFrame) =0;
  virtual void panToCmd(const Vector&) =0;
  virtual void panToCmd(const Vector&, Coord::CoordSystem, Coord::SkyFrame) =0;
  virtual void panBeginCmd(const Vector&) =0;
  virtual void panMotionCmd(const Vector&) =0;
  void panEndCmd(const Vector& vv) {panMotionCmd(vv);}
  virtual void panBBoxCmd(const Vector&) =0;
  void panPreserveCmd(int r) {preservePan = r;}
  void rotateCmd(double);
  void rotateBeginCmd();
  void rotateMotionCmd(double);
  void rotateEndCmd();
  void rotateToCmd(double);
  void getIRAFAlignCmd();
  void irafAlignCmd(int);
  void getWCSAlignCmd();
  void wcsAlignCmd(int);
  // used by backup
  void wcsAlignCmd(int, Coord::CoordSystem, Coord::SkyFrame);
  void wcsAlignCmd(int, FitsImage*, Coord::CoordSystem, Coord::SkyFrame);
  void zoomCmd(const Vector&);
  void zoomToCmd(const Vector&);
  virtual void zoomAboutCmd(const Vector&, const Vector&) =0;
  virtual void zoomAboutCmd(const Vector&, const Vector&, 
			    Coord::CoordSystem, Coord::SkyFrame) =0;
  virtual void zoomToAboutCmd(const Vector&, const Vector&) =0;
  virtual void zoomToAboutCmd(const Vector&, const Vector&, 
			      Coord::CoordSystem, Coord::SkyFrame) =0;
  virtual void zoomToFitCmd(double) =0;

  // Panner Commands
  void pannerCmd(int);
  void pannerCmd(char*, int, int);
  void updatePannerCmd();
  // backward compatiblity
  void pannerCmd(Coord::CoordSystem, Coord::SkyFrame) {}

  // Pixel Table Commands
  void getPixelTableCmd(const Vector&, Coord::InternalSystem, int, int, char*);

  // Precision Commands
  void precCmd(int, int, int, int, int, int, int, int, int);
  // backward compatibilty backup
  void precCmd(int, int, int, int, int, int);

  // Print Commands
#ifdef __WIN32
  void win32PrintCmd();
#endif

  // Scale Commands
  void colorScaleCmd(FrScale::ColorScaleType);
  void colorScaleLogCmd(double);
  void getColorMapLevelCmd(int);
  void getColorMapLevelCmd(int, double, double, FrScale::ColorScaleType, float);
  void getColorMapLevelCmd(int, const Vector&, Coord::InternalSystem);
  void getColorScaleCmd();
  void getColorScaleLevelCmd(int, double, double, 
			     FrScale::ColorScaleType, float);
  void getColorScaleLogCmd();

  // Smooth Commands
  void getSmoothFunctionCmd();
  void getSmoothRadiusCmd();
  void getSmoothRadiusMinorCmd();
  void getSmoothSigmaCmd();
  void getSmoothSigmaMinorCmd();
  void getSmoothAngleCmd();
  void hasSmoothCmd();
  void smoothCmd(int, int, int, double, double, double);
  // backward compatibilty backup
  void smoothCmd(int, int);
  void smoothDeleteCmd();

  // Threads Commands
  void getThreadsCmd();
  void threadsCmd(int);

  // WCS
  void wcsAppendCmd(int, int);
  void wcsAppendCmd(int, const char*);
  void wcsAppendTxtCmd(int, const char*);
  void wcsReplaceCmd(int, int);
  void wcsReplaceCmd(int, const char*);
  void wcsReplaceTxtCmd(int, const char*);
  void wcsResetCmd(int);

  // RGB Commands
  virtual void getRGBChannelCmd() =0;
  virtual void getRGBViewCmd() =0;
  virtual void getRGBSystemCmd() =0;
  virtual void setRGBChannelCmd(const char*) {}
  virtual void setRGBViewCmd(int, int, int) {}
  virtual void setRGBSystemCmd(Coord::CoordSystem) {}

  // 3d
  virtual void get3dBorderCmd() =0;
  virtual void get3dBorderColorCmd() =0;
  virtual void get3dCompassCmd() =0;
  virtual void get3dCompassColorCmd() =0;
  virtual void get3dHighliteCmd() =0;
  virtual void get3dHighliteColorCmd() =0;
  virtual void get3dScaleCmd() =0;
  virtual void get3dViewCmd() =0;
  virtual void get3dViewPointCmd() =0;
  virtual void get3dRenderMethodCmd() =0;
  virtual void get3dRenderBackgroundCmd() =0;
  virtual void set3dBorderCmd(int) {}
  virtual void set3dBorderColorCmd(const char*) {}
  virtual void set3dCompassCmd(int) {}
  virtual void set3dCompassColorCmd(const char*) {}
  virtual void set3dHighliteCmd(int) {}
  virtual void set3dHighliteColorCmd(const char*) {}
  virtual void set3dScaleCmd(double) {}
  virtual void set3dViewCmd(float, float) {}
  virtual void set3dViewPointCmd(const Vector3d&, const Vector&) {}
  virtual void set3dRenderMethodCmd(int) {}
  virtual void set3dRenderBackgroundCmd(int) {}
};

#endif
