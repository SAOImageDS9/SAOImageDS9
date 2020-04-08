// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsfile_h__
#define __fitsfile_h__

#include "head.h"

#define B4KB 4096
#define B1MB 1048576
#define MAXWAVES 2048

extern int DebugGZ;
extern int DebugCompress;

class OutFitsStream;

class FitsFile {
public:
  enum FlushMode {NOFLUSH,FLUSH};
  enum ScanMode {RELAXIMAGE, EXACTIMAGE, RELAXTABLE, EXACTTABLE};
  enum ArchType {NATIVE,BIG,LITTLE};
  enum EncodingType {RAW,ASCII,HEX,GZIP,BZ2,BIP,BIL,BSQ};

protected:
  FitsHead* primary_;        // pointer to primary header
  int managePrimary_;        // flag, true if we manage primary header

  FitsHead* head_;           // pointer to header
  int manageHead_;           // flag, true if we manage header

  void* data_;               // pointer to raw data
  size_t dataSize_;          // size of data memory segment
  size_t dataSkip_;          // skip into data memory segment

  int ext_;                  // extension number
  int inherit_;              // do we have inheritence?
  int byteswap_;             // flag, true if byteswap is needed
  ArchType endian_;          // endian of data
  int valid_;                // flag, true if file is valid

  char* pName_;              // parsed file name
  char* pExt_;               // parsed ext name
  int pIndex_;               // parsed ext number

  char* pFilter_;            // unparsed filter spec
  char* pBinX_;              // parsed bin table x col name
  char* pBinY_;              // parsed bin table y col name
  char* pBinZ_;              // parsed bin table z col name

  int pBitpix_;              // parsed bitpix
  int pWidth_;               // parsed width
  int pHeight_;              // parsed height
  int pDepth_;               // parsed depth
  size_t pSkip_;             // parsed skip size
  ArchType pArch_;           // parsed arch type
  EncodingType pEncoding_;   // parsed encoding

  int pHPXOrder_;            // parsed HPX params
  int pHPXSystem_;
  int pHPXLayout_;
  int pHPXColumn_;
  int pHPXQuad_;

  double pCRPIX3_;           // WCS_3 axis params
  double pCRVAL3_;
  double pCDELT3_;

  int pcoord_;
  int pxvalid_;
  int pxmin_;
  int pxmax_;
  int pyvalid_;
  int pymin_;
  int pymax_;
  int pzvalid_;
  int pzmin_;
  int pzmax_;
  int pbvalid_;
  int pblock_;

protected:
  void parse(const char*);
  void parseNRRD(istream&);
  void parseENVI(istream&);
  int validParams();
  int findEnd(const char*);
  void setByteSwap();
  int saveFitsHeaderCards(OutFitsStream&, int, int);

public:
  FitsFile();
  virtual ~FitsFile();

  int manageHead() {return manageHead_;}

  virtual void done() {}
  virtual char* page(char* ptr, size_t r) {return ptr;}
  virtual void resetpage() {}
  void error(const char*);
  void* data() {return data_;}
  size_t dataSize() {return dataSize_;}
  size_t dataSkip() {return dataSkip_;}
  FitsHead* head() {return head_;}
  FitsHead* primary() {return primary_;}
  int ext() {return ext_;}
  const char* extname() {return head_ ? head_->extname() : NULL;}
  int extver() {return head_ ? head_->extver() : 1;}
  int extlevel() {return head_ ? head_->extlevel() : 1;}
  int inherit() {return inherit_;}
  void setValid(int vv) {valid_=vv;}
  int isValid() {return valid_;}
  int isImage() {return head_ ? head_->isImage() : 0;}
  int isTable() {return head_ ? head_->isTable() : 0;}
  int isAsciiTable() {return head_ ? head_->isAsciiTable() : 0;}
  int isBinTable() {return head_ ? head_->isBinTable() : 0;}
  int byteswap() {return byteswap_;}
  ArchType endian() {return endian_;}

  void setpName(const char*);
  void setpExt(const char*);
  void setpIndex(int i) {pIndex_ = i;}
  void setpFilter(const char*);
  void setpBinX(const char*);
  void setpBinY(const char*);
  void setpBinZ(const char*);
  void setpBinXY(const char* x, const char* y) 
  {setpBinX(x); setpBinY(y);}
  void setpBinXYZ(const char* x, const char* y, const char* z)
  {setpBinX(x); setpBinY(y); setpBinZ(z);}

  const char* pName() {return pName_;}
  const char* pExt() {return pExt_;}
  int pIndex() {return pIndex_;}

  const char* pFilter() {return pFilter_;}
  const char* pBinX() {return pBinX_;}
  const char* pBinY() {return pBinY_;}
  const char* pBinZ() {return pBinZ_;}

  int pBitpix() {return pBitpix_;}
  int pWidth() {return pWidth_;}
  int pHeight() {return pHeight_;}
  int pDepth() {return pDepth_;}
  size_t pSkip() {return pSkip_;}
  ArchType pArch() {return pArch_;}

  void setpWidth(int i) {pWidth_ = i;}
  void setpHeight(int i) {pHeight_ = i;}
  void setpDepth(int i) {pDepth_ = i;}
  void setpBitpix(int b) {pBitpix_ = b;}
  void setpSkip(size_t s) {pSkip_ = s;}
  void setpArch(ArchType a) {pArch_ = a;}

  EncodingType pEncoding() {return pEncoding_;}
  void setpEncoding(EncodingType e) {pEncoding_ = e;}

  int pHPXOrder() {return pHPXOrder_;}
  int pHPXSystem() {return pHPXSystem_;}
  int pHPXLayout() {return pHPXLayout_;}
  int pHPXColumn() {return pHPXColumn_;}
  int pHPXQuad() {return pHPXQuad_;}

  void setpHPXOrder(int oo) {pHPXOrder_ = oo;}
  void setpHPXSystem(int ss) {pHPXSystem_ = ss;}
  void setpHPXLayout(int ll) {pHPXLayout_ = ll;}
  void setpHPXColumn(int cc) {pHPXColumn_ = cc-1;}
  void setpHPXQuad(int qq) {pHPXQuad_ = qq-1;}

  double pCRPIX3() {return pCRPIX3_;}
  double pCRVAL3() {return pCRVAL3_;}
  double pCDELT3() {return pCDELT3_;}

  void setpCRPIX3(double dd) {pCRPIX3_ = dd;}
  void setpCRVAL3(double dd) {pCRVAL3_ = dd;}
  void setpCDELT3(double dd) {pCDELT3_ = dd;}

  int pcoord() {return pcoord_;}
  int pxvalid() {return pxvalid_;}
  int pxmin() {return pxmin_;}
  int pxmax() {return pxmax_;}
  int pyvalid() {return pyvalid_;}
  int pymin() {return pymin_;}
  int pymax() {return pymax_;}
  int pzvalid() {return pzvalid_;}
  int pzmin() {return pzmin_;}
  int pzmax() {return pzmax_;}
  int pbvalid() {return pbvalid_;}
  int pblock() {return pblock_;}

  void setpcoord(int vv) {pcoord_ = vv;}
  void setpxvalid(int vv) {pxvalid_ = vv;}
  void setpxmin(int vv) {pxmin_ = vv;}
  void setpxmax(int vv) {pxmax_ = vv;}
  void setpyvalid(int vv) {pyvalid_ = vv;}
  void setpymin(int vv) {pymin_ = vv;}
  void setpymax(int vv) {pymax_ = vv;}
  void setpzvalid(int vv) {pzvalid_ = vv;}
  void setpzmin(int vv) {pzmin_ = vv;}
  void setpzmax(int vv) {pzmax_ = vv;}
  void setpbvalid(int vv) {pbvalid_ = vv;}
  void setpblock(int vv) {pblock_ = vv;}

  Vector getColMinMax(const char*);
  Vector getColDim(const char*);

  void setColMinMax(const char*, const Vector&);

  int find(const char* name);

  int getLogical(const char* name, int def);
  int getInteger(const char* name, int def);
  double getReal(const char* name, double def);
  void getComplex(const char* name, double* real, double* img, 
		  double rdef, double idef);
  char* getString(const char* name);
  char* getComment(const char* name);
  char* getKeyword(const char* name);

  int saveFitsPrimHeader(OutFitsStream&);
  int saveFitsHeader(OutFitsStream&, int);
  int saveFitsXtHeader(OutFitsStream&, int);
  int saveFits(OutFitsStream&);
  int saveFitsPad(OutFitsStream&, size_t, char);
  int saveFitsTable(OutFitsStream&);
  int saveFitsIISHeader(OutFitsStream&);
  int saveFitsIIS(OutFitsStream&, Vector&);

  int saveArray(OutFitsStream&, ArchType);
};

#endif
