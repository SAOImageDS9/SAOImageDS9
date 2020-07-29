// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsimage_h__
#define __fitsimage_h__

#include "vector.h"
#include "vector3d.h"
#include "vectorstr.h"
#include "fitsdata.h"
#include "coord.h"
#include "file.h"
#include "head.h"

// WCS ' ','A' to 'Z', WCS0
#define MULTWCS 27
#define MULTWCSA 28

typedef struct {
  double* kernel;
  double* src;
  double* dest;
  int xmin;
  int ymin;
  int xmax;
  int ymax;
  int width;
  int r;
} t_smooth_arg;

typedef struct {
  FitsFile* base;
  FitsData* basedata;
  FitsFile* block;
  Vector blockFactor;
} t_block_arg;

typedef struct {
  FitsData* data;
  FrScale* fr;
  FitsBound* bb;
} t_clip_arg;

extern "C" {
  #include "ast.h"
}

class WCSState {
 public:
  WCSState();

  Coord::CoordSystem wcsSystem_; // current state of ast_
  Coord::SkyFrame wcsSkyFrame_; // current state of ast_
};

class FitsImage {
  friend class Base;

 protected:
  Context* context_;        // pointer to context
  Tcl_Interp* interp_;

  char* objectKeyword_;         // object keyword

  // native fits file
  FitsFile* fits_;
  FitsFile* post_;          // fits post processing
  FitsFile* hist_;          // fits bin
  FitsFile* hpx_;           // healpix

  // base
  FitsFile* base_;
  FitsData* basedata_;

  // block
  int manageBlock_;
  FitsFile* block_;
  FitsData* blockdata_;

  // analysis
  int manageAnalysis_;
  FitsFile* analysis_;
  FitsData* analysisdata_;

  // final
  FitsFile* image_;
  FitsData* data_;

  Vector histCursor;        // start point to bin about (physical coords)
  Vector actualHistCursor;  // actual bin center (physical coords)

  char buf[32];             // tmp storage for returning strings

  // Mosaic items
  int keyLTMV;
  int keyATMV;
  int keyDTMV;
  int keyDATASEC;

  double jyBeam_; // beam area for radio maps

  BBox datasec;             // DATASEC keyword
  
  int iisMode_;              // flag to indicate if iis
  Vector iisz_;              // z1 and z2
  int iiszt_;                // 0-Uniary, 1-Linear, 2-Log

  FitsImage* nextMosaic_;   // next mosaic
  FitsImage* nextSlice_;    // next slice

  int address[FTY_MAXAXES];

  int manageWCS_;

  int* wcs_;
  int* wcsNaxes_;

  int* wcsCel_;
  int* wcsEqu_;
  int* wcsCelLon_;
  int* wcsCelLat_;

  double* wcsSize_;

  WCSState* wcsState_;

  int wcsInv_;    // can we inverse?
  int wcsHPX_;
  int wcsXPH_;

  FitsHead* wcsAltHeader_; // alt wcs header
  FitsHead* wfpc2Header_; // wcs header for wfpc2
  FitsHead* wcs0Header_;

  Matrix wcsToRef_;          // iraf/wcs matrix

 public:
  AstFrameSet* ast_;  // ast frameset;
  const char* encoding_; // ast encoding of original header

 private:
  char* root(const char*);
  char* strip(const char*);

 protected:
  void reset();
  Vector getHistCenter();
  void smooth(pthread_t*, void*);
  void process(const char*, int);
  void initCompress();
  void initNRRD();
  void initENVI();
  void initBin();
  void initHPX();

  void clearWCS();
  void initWCS(FitsHead*);
  void scanWCS(FitsHead*);
  void wcsPhyInit(FitsHead*);

  void initWCS0(const Vector&);
  void resetWCS0() {resetWCS();}

  int checkWCS(Vector&);
  int checkWCS(Vector3d&);
  AstFrameSet* fits2ast(FitsHead*);  

  Vector mapLen(const Vector& v, const Matrix& mx);

  void setWCSSystem(Coord::CoordSystem);
  void setWCSSysSkyFrame(Coord::CoordSystem, Coord::SkyFrame);
  void setWCSFormat(Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);

  Vector vRadToDeg(const Vector& vv, Coord::CoordSystem sys);
  Vector vDegToRad(const Vector& vv, Coord::CoordSystem sys);
  Vector3d vRadToDeg(const Vector3d& vv, Coord::CoordSystem sys);
  Vector3d vDegToRad(const Vector3d& vv, Coord::CoordSystem sys);

 public:
  char* fileName;
  char* rootBaseFileName;
  char* fullBaseFileName;
  char* iisFileName;        // alt file name for iis

  Matrix irafToRef;

  Matrix dataToImage;
  Matrix imageToData;

  Matrix3d dataToImage3d;
  Matrix3d imageToData3d;

  Matrix dataToRef;
  Matrix refToData;
  Matrix dataToUser;
  Matrix userToData;
  Matrix dataToWidget;
  Matrix widgetToData;
  Matrix dataToCanvas;
  Matrix canvasToData;
  Matrix dataToWindow;
  Matrix windowToData;

  Matrix3d dataToRef3d;
  Matrix3d refToData3d;
  Matrix3d dataToUser3d;
  Matrix3d userToData3d;
  Matrix3d dataToWidget3d;
  Matrix3d widgetToData3d;
  Matrix3d dataToCanvas3d;
  Matrix3d canvasToData3d;
  Matrix3d dataToWindow3d;
  Matrix3d windowToData3d;

  Matrix canvasToRef;
  Matrix refToCanvas;

  Matrix refToImage;
  Matrix imageToRef;
  Matrix refToPhysical;
  Matrix physicalToRef;
  Matrix refToDetector;
  Matrix detectorToRef;
  Matrix refToAmplifier;
  Matrix amplifierToRef;

  Matrix3d refToImage3d;
  Matrix3d imageToRef3d;
  Matrix3d refToPhysical3d;
  Matrix3d physicalToRef3d;
  Matrix3d refToDetector3d;
  Matrix3d detectorToRef3d;
  Matrix3d refToAmplifier3d;
  Matrix3d amplifierToRef3d;

  Matrix imageToWidget;
  Matrix widgetToImage;

  Matrix imageToPhysical;
  Matrix physicalToImage;
  Matrix imageToDetector;
  Matrix detectorToImage;
  Matrix imageToAmplifier;
  Matrix amplifierToImage;

  Matrix3d imageToPhysical3d;
  Matrix3d physicalToImage3d;
  Matrix3d imageToDetector3d;
  Matrix3d detectorToImage3d;
  Matrix3d imageToAmplifier3d;
  Matrix3d amplifierToImage3d;

  Matrix physicalToDetector;
  Matrix detectorToPhysical;
  Matrix physicalToAmplifier;
  Matrix amplifierToPhysical;

  Matrix3d physicalToDetector3d;
  Matrix3d detectorToPhysical3d;
  Matrix3d physicalToAmplifier3d;
  Matrix3d amplifierToPhysical3d;

  Matrix magnifierToData;
  Matrix dataToMagnifier;

  Matrix3d magnifierToData3d;
  Matrix3d dataToMagnifier3d;

  Matrix pannerToData;
  Matrix dataToPanner;

  Matrix3d pannerToData3d;
  Matrix3d dataToPanner3d;

  Matrix psToData;
  Matrix dataToPS;

  Matrix3d psToData3d;
  Matrix3d dataToPS3d;

  FitsBound iparams; // image bbox
  FitsBound dparams; // DATASEC bbox
  FitsBound cparams; // crop bbox

 public:
  FitsImage(Context*, Tcl_Interp*);
  virtual ~FitsImage();

  void setContext(Context* cx) {context_ = cx;}

  void load();
  void analysis(int, pthread_t*, void*);
  void block();
  void block(pthread_t*);

  Matrix bin(const Vector&);
  Matrix binCenter();
  Matrix binCursor();

  FitsImage* nextMosaic() {return nextMosaic_;}
  FitsImage* nextSlice() {return nextSlice_;}
  void setNextMosaic(FitsImage* n) {nextMosaic_ = n;}
  void setNextSlice(FitsImage* n) {nextSlice_ = n;}

  FitsFile* fitsFile() {return fits_;}
  FitsFile* baseFile() {return base_;}
  FitsFile* blockFile() {return block_;}
  FitsFile* analysisFile() {return analysis_;}
  FitsFile* imageFile() {return image_;}

  // we assume that 'data' is valid
  void* basedata() {return basedata_->data();}
  void* blockdata() {return blockdata_->data();}
  void* analysisdata() {return analysisdata_->data();}
  void* imagedata() {return data_->data();}

  // isValid() means "valid image found"
  int isValid() {return image_ ? 1 : 0;}
  int isPost() {return post_ ? 1 : 0;}
  int isHist() {return hist_ ? 1 : 0;}
  int isHPX() {return hpx_ ? 1 : 0;}

  int isImage() {return fits_ ? fits_->isImage() : 0;}
  int isTable() {return fits_ ? fits_->isTable() : 0;}
  int isAsciiTable() {return fits_ ? fits_->isAsciiTable() : 0;}
  int isBinTable() {return fits_ ? fits_->isBinTable() : 0;}

  void close() {if (fits_) fits_->done();}

  void match(const char* xxname1, const char* yyname1,
	     Coord::CoordSystem sys1, Coord::SkyFrame sky1,
	     const char* xxname2, const char* yyname2,
	     Coord::CoordSystem sys2, Coord::SkyFrame sky2,
	     double rad, Coord::CoordSystem sys, Coord::DistFormat dist,
	     const char* rrname);

  FitsHead* parseWCS(istream&);

  Matrix nextBin(const Vector&);
  void calcHistSize();
  Vector getColMinMax(const char*);
  Vector getColDim(const char*);
  Vector getHistDim();
  Vector getHistCursor() {return actualHistCursor;}
  const char* getHistFilter();
  const char* getHistX();
  const char* getHistY();
  const char* getHistZ();
  char* getHistList();

  void setBinCursor(const Vector&);

  void setBinX(const char* str) {if (fits_) fits_->setpBinX(str);}
  void setBinY(const char* str) {if (fits_) fits_->setpBinY(str);}
  void setBinZ(const char* str) {if (fits_) fits_->setpBinZ(str);}
  void setBinFilter(const char* fil) {if (fits_) fits_->setpFilter(fil);}
  void setBinSliceFilter(const char*);
  void setBinColMinMax(const char* str, const Vector& lim)
    {if (fits_) fits_->setColMinMax(str,lim);}

  int hasBinCol(const char*);

  const char* objectKeyword() {return objectKeyword_;}
  void setObjectKeyword(const char*);

  void setFileName(const char*);
  const char* getFileName(Base::FileNameType);
  const char* updateFileNameBin(Base::FileNameType);
  const char* updateFileNameImage(Base::FileNameType);
  const char* iisGetFileName() {return iisFileName;}
  void iisSetFileName(const char*);

  long naxis(int ii) {return image_->head()->naxis(ii);}

  long owidth() {return fits_->head()->naxis(0);}
  long oheight() {return fits_->head()->naxis(1);}
  Vector osize() {return Vector(owidth(),oheight());}
  Vector ocenter() {return Vector(owidth(),oheight())/2.;}

  long width() {return image_->head()->naxis(0);}
  long height() {return image_->head()->naxis(1);}
  long depth() {return naxis(2)>0 ? naxis(2) : 1;}
  Vector size() {return Vector(width(),height());}
  Vector center() {return Vector(width(),height())/2.;}

  int nhdu();

  int bitpix() {return image_->head()->bitpix();}
  int ext() {return fits_->ext();}

  FitsBound* getDataParams(FrScale::SecMode);   // return bbox in IMAGE
  void setCropParams(int);
  void setCropParams(int,int,int,int,int);
  void setCropParams(const Vector&, const Vector&, int);

  int hasLTMV() {return keyLTMV;}
  int hasATMV() {return keyATMV;}
  int hasDTMV() {return keyDTMV;}

  FitsHead* wcsAltHeader() {return wcsAltHeader_;}

  int isIIS() {return iisMode_;}
  Vector& iisz() {return iisz_;}

  Vector pix2wcs(const Vector&, Coord::CoordSystem, Coord::SkyFrame);
  VectorStr pix2wcs(const Vector&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);

  Vector3d pix2wcs(const Vector3d&, Coord::CoordSystem, Coord::SkyFrame);
  VectorStr3d pix2wcs(const Vector3d&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);

  Vector wcs2pix(const Vector&, Coord::CoordSystem, Coord::SkyFrame);
  Vector3d wcs2pix(const Vector3d&, Coord::CoordSystem, Coord::SkyFrame);
  int wcsInv() {return wcsInv_;}

  void wfpc2WCS(FitsHead*, istream&);
  void appendWCS(istream&);
  void listWCS(ostream&, Coord::CoordSystem);
  void resetWCS();
  void replaceWCS(istream&);

  void processKeywordsPhysical();
  void processKeywordsParams();
  void processKeywordsFitsSection();
  int processKeywordsIRAF(FitsImage*);

  Coord::Orientation getWCSOrientation(Coord::CoordSystem, Coord::SkyFrame);
  double getWCSRotation(Coord::CoordSystem, Coord::SkyFrame);
  double getWCSDist(const Vector&, const Vector&, Coord::CoordSystem);
  const char* getWCSDomain(Coord::CoordSystem);
  const char* getWCSSystem(Coord::CoordSystem);
  const char* getWCSAxisSymbol(Coord::CoordSystem, int);

  double getWCSSize(Coord::CoordSystem);
    double calcWCSSize(Coord::CoordSystem);

  int hasWCS(Coord::CoordSystem);
  int hasWCSCel(Coord::CoordSystem);
  int hasWCSEqu(Coord::CoordSystem);
  int hasWCSLinear(Coord::CoordSystem);
  int hasWCS3D(Coord::CoordSystem);
  int hasWCSHPX() {return wcsHPX_;}
  int hasWCSXPH() {return wcsXPH_;}

  void updateMatrices(Matrix&, Matrix&, Matrix&, Matrix&, Matrix&);
  void updateMatrices(Matrix3d&, Matrix3d&, Matrix3d&, Matrix3d&);

  void updatePannerMatrices(Matrix&);
  void updatePannerMatrices(Matrix3d&);

  void updateMagnifierMatrices(Matrix&);
  void updateMagnifierMatrices(Matrix3d&);

  void updatePS(Matrix);
  void updatePS(Matrix3d);

  Matrix& matrixToData(Coord::InternalSystem);
  Matrix& matrixFromData(Coord::InternalSystem sys);
  Matrix3d& matrixFromData3d(Coord::InternalSystem);
  Matrix3d& matrixToData3d(Coord::InternalSystem);

  Vector mapFromRef(const Vector&, Coord::CoordSystem, Coord::SkyFrame =Coord::FK5);
  VectorStr mapFromRef(const Vector&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);

  Vector3d mapFromRef(const Vector3d&, Coord::CoordSystem, Coord::SkyFrame =Coord::FK5);
  VectorStr3d mapFromRef(const Vector3d&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);

  void listFromRef(ostream&, const Vector&, Coord::CoordSystem, Coord::SkyFrame =Coord::FK5, Coord::SkyFormat =Coord::DEGREES);
  void listFromRef(ostream&, ostream&, const Vector&, Coord::CoordSystem, Coord::SkyFrame =Coord::FK5, Coord::SkyFormat =Coord::DEGREES);

  Vector mapToRef(const Vector&, Coord::CoordSystem, Coord::SkyFrame =Coord::FK5);
  Vector3d mapToRef(const Vector3d&, Coord::CoordSystem, Coord::SkyFrame =Coord::FK5);

  double mapLenFromRef(double, Coord::CoordSystem, Coord::DistFormat =Coord::DEGREE);
  Vector mapLenFromRef(const Vector&, Coord::CoordSystem, Coord::DistFormat =Coord::DEGREE);
  double mapLenToRef(double, Coord::CoordSystem, Coord::DistFormat =Coord::DEGREE);
  Vector mapLenToRef(const Vector&, Coord::CoordSystem, Coord::DistFormat =Coord::DEGREE);
  double mapDistFromRef(const Vector&, const Vector&, Coord::CoordSystem,
		       Coord::DistFormat =Coord::DEGREE);
  void listLenFromRef(ostream&, double, Coord::CoordSystem, Coord::DistFormat =Coord::DEGREE);
  void listLenFromRef(ostream&, const Vector&, Coord::CoordSystem, Coord::DistFormat =Coord::DEGREE);
  void listLenFromRef(ostream&, ostream&, const Vector&, Coord::CoordSystem, Coord::DistFormat =Coord::DEGREE);
  void listDistFromRef(ostream&, const Vector&, const Vector&, Coord::CoordSystem, Coord::DistFormat =Coord::DEGREE);

  const char* getValue(const Vector& v);
  float getValueFloat(const Vector& v) {return data_->getValueFloat(v);}
  double getValueDouble(const Vector& v) {return data_->getValueDouble(v);}

  float getValueFloat(long i) {return data_->getValueFloat(i);}
  double getValueDouble(long i) {return data_->getValueDouble(i);}

  void setClip(double l, double h) {data_->setClip(l,h);}

  const char* getMin() {return data_ ? data_->getMin() : NULL;}
  const char* getMinX() {return data_ ? data_->getMinX() : NULL;}
  const char* getMinY() {return data_ ? data_->getMinY() : NULL;}
  const char* getMax() {return data_ ? data_->getMax() : NULL;}
  const char* getMaxX() {return data_ ? data_->getMaxX() : NULL;}
  const char* getMaxY() {return data_ ? data_->getMaxY() : NULL;}
  const char* getLow() {return data_ ? data_->getLow() : NULL;}
  const char* getHigh() {return data_ ? data_->getHigh() : NULL;}

  double min() {return data_ ? data_->min() : 0;}
  Vector minXY() {return data_ ? data_->minXY() : Vector();}
  double max() {return data_ ? data_->max() : 0;}
  Vector maxXY() {return data_ ? data_->maxXY() : Vector();}

  double low() {return data_ ? data_->low() : 0;}
  double high() {return data_ ? data_->high() : 0;}

  void updateClip(FrScale* fr, pthread_t* thread, t_clip_arg* targ);

  int hasDATAMIN() {return data_ ? data_->hasDATAMIN() : 0;}
  int hasDATASEC() {return keyDATASEC;}
  int hasIRAFMIN() {return data_ ? data_->hasIRAFMIN() : 0;}

  void hist(double* b, int l, double mn, double mx, FrScale::SecMode ds)
  {data_->hist(b,l,mn,mx,getDataParams(ds));}

  char* display(FitsHead*);
  char* displayHeader();
  char* displayPrimary();
  char* displayWCS();
  FitsHead* head() {return image_->head();}
  char* getKeyword(const char* key) {return fits_->getKeyword(key);}
  int findKeyword(const char* key) {return fits_->find(key);}

  int saveFitsPrimHeader(OutFitsStream& str)
  {return image_ ? image_->saveFitsPrimHeader(str) : 0;}

  int saveFitsXtHeader(OutFitsStream& str, int dd)
  {return image_ ? image_->saveFitsXtHeader(str, dd) : 0;}

  int saveFitsHeader(OutFitsStream& str, int dd)
  {return image_ ? image_->saveFitsHeader(str, dd) : 0;}

  int saveFits(OutFitsStream& str)
  {return image_ ? image_->saveFits(str) : 0;}

  int saveFitsPad(OutFitsStream& str, size_t cnt, char fil)
  {return image_ ? image_->saveFitsPad(str, cnt, fil) : 0;}

  int saveFitsTable(OutFitsStream& str)
  {return fits_ ? fits_->saveFitsTable(str) : 0;}

  int saveArray(OutFitsStream& str, FitsFile::ArchType endian)
  {return image_ ? image_->saveArray(str, endian) : 0;}

  int saveFitsIISHeader(OutFitsStream& str)
  {return image_ ? image_->saveFitsIISHeader(str) : 0;}

  int saveFitsIIS(OutFitsStream& str)
  {return image_ ? image_->saveFitsIIS(str,iisz_) : 0;}

  const Matrix& wcsToRef() {return wcsToRef_;}
  void setwcsToRef(Matrix mm) {wcsToRef_ = mm;}
};

// Fits

class FitsImageFitsAlloc : public FitsImage {
public:
  FitsImageFitsAlloc(Context*, Tcl_Interp*, const char*, const char*, 
		     FitsFile::FlushMode, int);
};

class FitsImageFitsAllocGZ : public FitsImage {
public:
  FitsImageFitsAllocGZ(Context*, Tcl_Interp*, const char*, const char*, 
		       FitsFile::FlushMode, int);
};

class FitsImageFitsChannel : public FitsImage {
public:
  FitsImageFitsChannel(Context*, Tcl_Interp*, const char*, const char*,
		       FitsFile::FlushMode, int);
};

class FitsImageFitsMMap : public FitsImage {
public:
  FitsImageFitsMMap(Context*, Tcl_Interp*, const char*, int);
};

class FitsImageFitsSMMap : public FitsImage {
public:
  FitsImageFitsSMMap(Context*, Tcl_Interp*, const char*, const char*, int);
};

class FitsImageFitsMMapIncr : public FitsImage {
public:
  FitsImageFitsMMapIncr(Context*, Tcl_Interp*, const char*, int);
};

class FitsImageFitsShare : public FitsImage {
public:
  FitsImageFitsShare(Context*, Tcl_Interp*, Base::ShmType, int, const char*, int);
};

class FitsImageFitsSShare : public FitsImage {
public:
  FitsImageFitsSShare(Context*, Tcl_Interp*, Base::ShmType, 
		      int, int, const char*, int);
};

class FitsImageFitsSocket : public FitsImage {
public:
  FitsImageFitsSocket(Context*, Tcl_Interp*, int, const char*, 
		      FitsFile::FlushMode, int);
};

class FitsImageFitsSocketGZ : public FitsImage {
public:
  FitsImageFitsSocketGZ(Context*, Tcl_Interp*, int, const char*, 
			FitsFile::FlushMode, int);
};

class FitsImageFitsVar : public FitsImage {
public:
  FitsImageFitsVar(Context*, Tcl_Interp*, 
		   const char*, const char*, int);
};

class FitsImageFitsOrder : public FitsImage {
public:
  FitsImageFitsOrder(Context*, Tcl_Interp*, FitsImage*, FitsHead*, 
		     char*, size_t, int);
};

// Fits Next

class FitsImageFitsNextAlloc : public FitsImage {
public:
  FitsImageFitsNextAlloc(Context*, Tcl_Interp*, const char*, FitsFile*, int);
};

class FitsImageFitsNextAllocGZ : public FitsImage {
public:
  FitsImageFitsNextAllocGZ(Context*, Tcl_Interp*, const char*, FitsFile*, int);
};

class FitsImageFitsNextChannel : public FitsImage {
public:
  FitsImageFitsNextChannel(Context*, Tcl_Interp*, const char*, FitsFile*, int);
};

class FitsImageFitsNextMMap : public FitsImage {
public:
  FitsImageFitsNextMMap(Context*, Tcl_Interp*, const char*, FitsFile*, int);
};

class FitsImageFitsNextSMMap : public FitsImage {
public:
  FitsImageFitsNextSMMap(Context*, Tcl_Interp*, const char*, FitsFile*, int);
};

class FitsImageFitsNextMMapIncr : public FitsImage {
public:
  FitsImageFitsNextMMapIncr(Context*, Tcl_Interp*, const char*, FitsFile*, int);
};

class FitsImageFitsNextShare : public FitsImage {
public:
  FitsImageFitsNextShare(Context*, Tcl_Interp*, const char*, FitsFile*, int);
};

class FitsImageFitsNextSShare : public FitsImage {
public:
  FitsImageFitsNextSShare(Context*, Tcl_Interp*, const char*, FitsFile*, int);
};

class FitsImageFitsNextSocket : public FitsImage {
public:
  FitsImageFitsNextSocket(Context*, Tcl_Interp*, const char*, FitsFile*, int);
};

class FitsImageFitsNextSocketGZ : public FitsImage {
public:
  FitsImageFitsNextSocketGZ(Context*, Tcl_Interp*, const char*, FitsFile*, int);
};

class FitsImageFitsNextVar : public FitsImage {
public:
  FitsImageFitsNextVar(Context*, Tcl_Interp*, const char*, FitsFile*, int);
};

class FitsImageFitsNextHist : public FitsImage {
public:
  FitsImageFitsNextHist(Context*, Tcl_Interp*, FitsImage*, FitsFile*, int);
};

class FitsImageFitsNextPost : public FitsImage {
public:
  FitsImageFitsNextPost(Context*, Tcl_Interp*, FitsImage*, FitsFile*, int);
};

class FitsImageFitsNextOrder : public FitsImage {
public:
  FitsImageFitsNextOrder(Context*, Tcl_Interp*, FitsImage*, FitsFile*, int);
};

// Array

class FitsImageArrAlloc : public FitsImage {
public:
  FitsImageArrAlloc(Context*, Tcl_Interp*, const char*, const char*, 
		    FitsFile::FlushMode, int);
};

class FitsImageArrAllocGZ : public FitsImage {
public:
  FitsImageArrAllocGZ(Context*, Tcl_Interp*, const char*, const char*, 
		      FitsFile::FlushMode, int);
};

class FitsImageArrChannel : public FitsImage {
public:
  FitsImageArrChannel(Context*, Tcl_Interp*, const char*, const char*, 
		      FitsFile::FlushMode, int);
};

class FitsImageArrMMap : public FitsImage {
public:
  FitsImageArrMMap(Context*, Tcl_Interp*, const char*, int);
};

class FitsImageArrMMapIncr : public FitsImage {
public:
  FitsImageArrMMapIncr(Context*, Tcl_Interp*, const char*, int);
};

class FitsImageArrShare : public FitsImage {
public:
  FitsImageArrShare(Context*, Tcl_Interp*, Base::ShmType, int, const char*, int);
};

class FitsImageArrSocket : public FitsImage {
public:
  FitsImageArrSocket(Context*, Tcl_Interp*,
		     int, const char*, FitsFile::FlushMode, int);
};

class FitsImageArrSocketGZ : public FitsImage {
public:
  FitsImageArrSocketGZ(Context*, Tcl_Interp*, 
		       int, const char*, FitsFile::FlushMode, int);
};

class FitsImageArrVar : public FitsImage {
public:
  FitsImageArrVar(Context*, Tcl_Interp*, const char*, const char*, int);
};

// ENVI

class FitsImageENVISMMap : public FitsImage {
public:
  FitsImageENVISMMap(Context*, Tcl_Interp*, const char*, const char*, int);
};

// NRRD

class FitsImageNRRDAlloc : public FitsImage {
public:
  FitsImageNRRDAlloc(Context*, Tcl_Interp*, const char*, const char*, 
		    FitsFile::FlushMode, int);
};

class FitsImageNRRDChannel : public FitsImage {
public:
  FitsImageNRRDChannel(Context*, Tcl_Interp*, const char*, const char*, 
		      FitsFile::FlushMode, int);
};

class FitsImageNRRDMMap : public FitsImage {
public:
  FitsImageNRRDMMap(Context*, Tcl_Interp*, const char*, int);
};

class FitsImageNRRDShare : public FitsImage {
public:
  FitsImageNRRDShare(Context*, Tcl_Interp*, 
		     Base::ShmType, int, const char*, int);
};

class FitsImageNRRDSocket : public FitsImage {
public:
  FitsImageNRRDSocket(Context*, Tcl_Interp*,
		      int, const char*, FitsFile::FlushMode, int);
};

class FitsImageNRRDVar : public FitsImage {
public:
  FitsImageNRRDVar(Context*, Tcl_Interp*, const char*, const char*, int);
};

// Photo

class FitsImagePhoto : public FitsImage {
public:
  FitsImagePhoto(Context*, Tcl_Interp*, const char*, const char*, int);
};

class FitsImagePhotoCube : public FitsImage {
public:
  FitsImagePhotoCube(Context*, Tcl_Interp*, const char*, const char*, int);
};

class FitsImagePhotoCubeNext : public FitsImage {
public:
  FitsImagePhotoCubeNext(Context*, Tcl_Interp*,
			 const char*, FitsFile*, int);
};

// Mosaic

class FitsImageMosaicAlloc : public FitsImage {
public:
  FitsImageMosaicAlloc(Context*, Tcl_Interp*,
		       const char*, const char*, 
		       FitsFile::FlushMode, int);
};

class FitsImageMosaicAllocGZ : public FitsImage {
public:
  FitsImageMosaicAllocGZ(Context*, Tcl_Interp*,
			 const char*, const char*, 
			 FitsFile::FlushMode, int);
};

class FitsImageMosaicChannel : public FitsImage {
public:
  FitsImageMosaicChannel(Context*, Tcl_Interp*,
			 const char*, const char*,
			 FitsFile::FlushMode, int);
};

class FitsImageMosaicMMap : public FitsImage {
public:
  FitsImageMosaicMMap(Context*, Tcl_Interp*,
		      const char*, int);
};

class FitsImageMosaicMMapIncr : public FitsImage {
public:
  FitsImageMosaicMMapIncr(Context*, Tcl_Interp*,
			  const char*, int);
};

class FitsImageMosaicShare : public FitsImage {
public:
  FitsImageMosaicShare(Context*, Tcl_Interp*,
		       Base::ShmType, int, const char*, int);
};

class FitsImageMosaicSocket : public FitsImage {
public:
  FitsImageMosaicSocket(Context*, Tcl_Interp*,
			int, const char*, FitsFile::FlushMode, int);
};

class FitsImageMosaicSocketGZ : public FitsImage {
public:
  FitsImageMosaicSocketGZ(Context*, Tcl_Interp*,
			  int, const char*, FitsFile::FlushMode, int);
};

class FitsImageMosaicVar : public FitsImage {
public:
  FitsImageMosaicVar(Context*, Tcl_Interp*,
		     const char*, const char*, int);
};

// Mosaic Next

class FitsImageMosaicNextAlloc : public FitsImage {
public:
  FitsImageMosaicNextAlloc(Context*, Tcl_Interp*,
			   const char*, FitsFile*, 
			   FitsFile::FlushMode, int);
};

class FitsImageMosaicNextAllocGZ : public FitsImage {
public:
  FitsImageMosaicNextAllocGZ(Context*, Tcl_Interp*,
			     const char*, FitsFile*, 
			     FitsFile::FlushMode, int);
};

class FitsImageMosaicNextChannel : public FitsImage {
public:
  FitsImageMosaicNextChannel(Context*, Tcl_Interp*,
			     const char*, FitsFile*, 
			     FitsFile::FlushMode, int);
};

class FitsImageMosaicNextMMap : public FitsImage {
public:
  FitsImageMosaicNextMMap(Context*, Tcl_Interp*,
			  const char*, FitsFile*, int);
};

class FitsImageMosaicNextMMapIncr : public FitsImage {
public:
  FitsImageMosaicNextMMapIncr(Context*, Tcl_Interp*,
			      const char*, FitsFile*, int);
};

class FitsImageMosaicNextShare : public FitsImage {
public:
  FitsImageMosaicNextShare(Context*, Tcl_Interp*,
			   const char*, FitsFile*, int);
};

class FitsImageMosaicNextSocket : public FitsImage {
public:
  FitsImageMosaicNextSocket(Context*, Tcl_Interp*,
			    const char*, FitsFile*, 
			    FitsFile::FlushMode, int);
};

class FitsImageMosaicNextSocketGZ : public FitsImage {
public:
  FitsImageMosaicNextSocketGZ(Context*, Tcl_Interp*,
			      const char*, FitsFile*, 
			      FitsFile::FlushMode, int);
};

class FitsImageMosaicNextVar : public FitsImage {
public:
  FitsImageMosaicNextVar(Context*, Tcl_Interp*,
			 const char*, FitsFile*, int);
};

// IIS

class FitsImageIIS : public FitsImage {
public:
  FitsImageIIS(Context*, Tcl_Interp*, int, int);
  void iisErase();
  char* iisGet(int xx, int yy, int dx, int dy);
  void iisSet(const char* src, int xx, int yy, int dx, int dy);
  void iisWCS(const Matrix&, const Vector&, int);
};

#endif
