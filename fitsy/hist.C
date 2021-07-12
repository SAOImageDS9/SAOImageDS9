// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>
#include <ctype.h>

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include "hist.h"
#include "util.h"

#ifndef HAVE_CONFIG_H
#define HAVE_CONFIG_H 1
#endif
#include "filter.h"

#ifdef __CYGWIN__
// limit size, cygwin pipe to 64K / (4 args x 4 bytes)
#define FILTERSIZE 2048
#else
#define FILTERSIZE 65536
#endif
#define MULTWCS 27

char *gerrorstring(void);

static const char* reservedKeywords[] = {
  "SIMPLE","XTENSION","ZSIMPLE","ZTENSION","ZIMAGE","ZTABLE",
  "BITPIX","ZBITPIX",
  "NAXIS","ZNAXIS",
  "NAXIS.","ZNAXIS.",
  "END",
  "PCOUNT","ZPCOUNT",
  "GCOUNT","ZGCOUNT",
  "CHECKSUM","ZHECKSUM",
  "DATASUM","ZDATASUM",
  /* "OBJECT", */
  "INHERIT",
  "BSCALE",
  "BZERO","TZERO.",
  /* "BUNIT", */ "TUNIT.",
  "BLANK",
  "DATAMAX","TDMAX.","TLMAX.",
  "DATAMIN","TDMIN.","TLMIN.",
  "BLOCKED","ZBLOCKED",
  "EXTENDED","ZEXTEND",

  "EXTNAME","ZNAME.",
  "EXTVER",
  "EXTLEVEL",

  "TFIELDS",
  "TFORM.","ZFORM.",
  "TBCOL.",

  "ZCMPTYPE","ZCTYP.","ZTILELEN","ZTILE.","ZVAL.",
  "ZMASKCMP","ZQUANTIZ","ZDITHER0","ZTHEAP",
  "TSCAL.","TNULL.","TTYPE.","TDISP.", "TDIM.","THEAP",
  "FZTILELN","FZALGOR","FZALG.",
  "PTYPE.","PSCAL.","PZERO.",

  "WCSAXES.","WCSAX.?",
  /* "CTYPE.?", */ ".CTYP.",".CTY.?","TCTYP.","TCTY.?",
  /* "CUNIT.?", */ ".CUNI.",".CUN.?","TCUNI.","TCUN.?",
  /* "CRVAL.?", */ ".CRVL.",".CRV.?","TCRVL.","TCRV.?",
  /* "CDELT.?", */ ".CDLT.",".CDE.?","TCDLT.","TCDE.?",
  /* "CRPIX.?", */ ".CRPX.",".CRP.?","TCRPX.","TCRP.?",
  /* "CROTA.", */ ".CROT.","TCROT.",
  /* "PC._.?", */ "..PC.?","TPC._.?","TP._.?",
  /* "CD._.?", */ "..CD.?","TCD._.?","TC._.?",
  "PV._.?",".PV._.?",".V._.?","TPV._.?","TV._.?",
  ".V._X?",
  "PS._.?",".PS._.?",".S._.?","TPS._.?","TS._.?",
  "WCSNAME?","WCSN.?","WCS.?","TWCS.?",
  "CNAME.?",".CNA.?","TCNA.?",
  "CRDER.?",".CRD.?","TCRD.?",
  "CSYER.?",".CSY.?","TCSY.?",
  "WCST.?",
  "WCSX.?",
  /* "LONPOLE?", */ "LONP.?",
  /* "LATPOLE?", */ "LATP.?",
  /* "EQUINOX?", */ "EQUI.?",
  /* "EPOCH", */
  /* "RADESYS", */ "REDE.?",
  "RESTFRQ?","RFRQ.?",
  "RESTWAV?","RWAV.?",
  "SPECSYS?","SPEC.?",
  "SSYSOBS?","SOBS.?",
  "SSYSSRC?","SSRC.?",
  "OBSGEO-X","OBSGX.",
  "OBSGEO-Y","OBSGY.",
  "OBSGEO-Z","OBSGZ.",
  "VELOSYS?","VSYS.?",
  "ZSOURCE?","ZSOU.?",
  "VELANGL?","VANG.?",

  /* "DATE",*/
  /* "DATE-OBS", */ "DOBS.",
  /* "MJD-OBS", */ "MJDOB.",
  "BEPOCH",
  "JEPOCH",
  /* "DATE-AVE", */ "DAVG.",
  /* "MJD-AVG", */ "MJDA.",
  /* "DATE-BEG", */
  /* "MJD-BEG", */
  /* "TSTART", "TSTOP", */
  /* "DATE-END", */
  /* "MJD-END", */
  "XPOSURE",
  "TELAPSE",
  /* "TIMESYS",*/
  /* "MJDREF",*/
  /* "JDREF",*/
  /* "DATEREF",*/
  "TREFPOS","TRPOS.",
  "TREFDIR","TRDIR.",
  "PLEPHEM",
  /* "TIMEUNIT",*/
  /* "TIMEOFFS",*/
  /* "TIMSYER",*/
  /* "TIMRDER",*/
  /* "TIMEDEL",*/
  /* "TIMEPIXR",*/
  "CZPHS",".CZPH.",".CZP.?","TCZPH.","TCZP.?",
  "CPERI",".CPER.",".CPR.?","TCPER.","TCPR.?"
};

FitsHist::FitsHist(FitsFile* fits, int w, int h, int d,
		   Matrix& m, Function func, Vector block)
  : width_(w), height_(h), depth_(d)
{
  size_ = (size_t)width_*height_*depth_;

  xcol_ = NULL;
  ycol_ = NULL;
  zcol_ = NULL;

  fitsy_ = NULL;
  filter_ = NULL;

  valid_ = 0;

  if (!initHeader(fits))
    return;

  // we need to translate by another .5 for the offset from Data to Image
  Matrix mm = m * Translate(.5,.5);

  initLTMV(mm);
  initWCS(fits, mm, block);
  
  initFilter(fits);
  bin(fits, m, func, block);

  if (byteswap_)
    swap();

  deleteFilter();
  valid_ = 1;
}

FitsHist::~FitsHist()
{
  if (data_)
    delete [] (float*)data_;
}

int FitsHist::initHeader(FitsFile* fits) 
{
  FitsHead* srcHead = fits->head();
  FitsBinTableHDU* srcHDU = (FitsBinTableHDU*)srcHead->hdu();

  // make sure we have a table with columns, X, Y
  if (!fits->isBinTable())
    return 0;

  // make sure we have rows and cols
  if (!srcHDU->width() || !srcHDU->rows())
    return 0;

  // get X column
  if (fits->pBinX())
    xcol_ = srcHDU->find(fits->pBinX());

  if (!xcol_)
    return 0;

  // get Y column
  if (fits->pBinY())
    ycol_ = srcHDU->find(fits->pBinY());

  if (!ycol_)
    return 0;

  // get Z column (if specified)
  if (fits->pBinZ() && depth_ > 1)
    zcol_ = srcHDU->find(fits->pBinZ());
  else
    zcol_ = NULL;

  // create header
  head_ = new FitsHead(width_, height_, depth_, -32);
  if (!head_->isValid())
    return 0;

  // now screen other KEYWORDS for addition
  char* cc = srcHead->first();
  while (cc) {
    if (screenKeyword(cc))
      head_->cardins(cc, (char*)NULL);
    cc = srcHead->next();
  }

  // MJD-OBJ deprecated
  double rr = srcHead->getReal("MJD_OBS",0);
  if (rr)
    head_->appendReal("MJD-OBS", rr, 15, NULL);

  // we added cards
  head_->updateHDU();

  return 1;
}

static int mstrcmp(const char* s1, const char* s2)
{
  const char* p1 = s1;
  const char* p2 = s2;
  while (*p1 != '\0') {
    if (*p1 == '?')
      return 0;

    if (*p2=='\0')
      return 1;
    if (*p1 != '.') {
      if (*p2>*p1)
	return -1;
      if (*p2<*p1)
	return 1;
    }
    else {
      if (*p2<'0' || *p2>'9')
	return 1;
      p2++;
      if (*p2<'0' || *p2>'9')
	p2--;
    }

    p1++;
    p2++;
  }

  if (*p2 != '\0')
    return -1;

  return 0;
}

int FitsHist::screenKeyword(const char* cc)
{
  int cnt= sizeof(reservedKeywords)/sizeof(const char*);

  char key[9];
  memset(key,0,9);
  strncpy(key,cc,8);
  for (int ii=8; ii>=0; ii--)
    if (key[ii]==' ')
      key[ii] = '\0';

  const char** ptr = reservedKeywords;
  for (int ii=0; ii<cnt; ii++) {
    if (!mstrcmp(*ptr,key))
      return 0;
    ptr++;
  }

  return 1;
}

void FitsHist::initFilter(FitsFile* fits)
{
  FitsHead* srcHead = fits->head();

  const char* filtstr = fits->pFilter();
  if (filtstr && *filtstr) {

    ostringstream str;
    str << "bincols=(" << fits->pBinX() << ',' << fits->pBinY() << ')';

    if (byteswap_)
      str << ",convert=true";
    str << ends;

    if (!(fitsy_ = ft_headinit(srcHead->cards(), srcHead->headbytes())))
      internalError("Fitsy++ hist bad filter head");
    else {
      if (!(filter_ = FilterOpen((FITSHead)fitsy_, (char*)filtstr, 
				(char*)str.str().c_str()))){
	internalError("Fitsy++ hist unable to build filter");
      }
    }
  }
}

void FitsHist::deleteFilter()
{
  if (filter_) {
    FilterClose((Filter)filter_);
    filter_ = NULL;
  }

  if (fitsy_) {
    ft_headfree((FITSHead)fitsy_,0);
    fitsy_ = NULL;
  }
}

void FitsHist::bin(FitsFile* fits, Matrix& m, Function func, Vector block)
{
  FitsHead* srcHead = fits->head();
  FitsTableHDU* srcHDU = (FitsTableHDU*)(srcHead->hdu());

  // create image space
  float* dest = new float[size_];
  memset(dest, 0, size_*sizeof(float));

  // bin it up
  char* ptr = (char*)fits->data();
  int rowlen = srcHDU->width();
  int rows = srcHDU->rows();

  // third dimension
  double zmin;
  double zlength;
  if (zcol_) {
    zmin = zcol_->getMin();
    zlength  = zcol_->getMax() - zcol_->getMin();
  }

  // filter
  int goodincr = 0;
  int goodindex = FILTERSIZE;
  int* good = NULL;
  if (filter_)
    good = new int[FILTERSIZE];

  // matrix
  register double m00 = m.matrix(0,0);
  register double m10 = m.matrix(1,0);
  register double m20 = m.matrix(2,0);
  register double m01 = m.matrix(0,1);
  register double m11 = m.matrix(1,1);
  register double m21 = m.matrix(2,1);

  for (int ii=0; ii<rows; ii++, ptr+=rowlen, goodindex++) {

    // incr filter block, if needed
    if (good && (goodindex>=FILTERSIZE)) {
      // for memory models that support internal paging
      // need at lease FILTERSIZE rows
      ptr = fits->page(ptr, rowlen*FILTERSIZE);

      int diff = srcHDU->rows() - (goodincr * FILTERSIZE);
      if (FilterEvents((Filter)filter_, ptr, srcHDU->width(), 
		       (diff<FILTERSIZE) ? diff : FILTERSIZE, good)) {
	goodincr++;
	goodindex = 0;
      }
      else {
	if (good)
	  delete [] good;
	good = NULL;
	internalError("Fitsy++ hist filter failed");
      }
    }
    else {
      // for memory models that support internal paging
      // all we need is just one row
      ptr = fits->page(ptr, rowlen);
    }

    if (!good || (good && good[goodindex])) {
      register double x = xcol_->value(ptr);
      register double y = ycol_->value(ptr);

      register double X = x*m00 + y*m10 + m20;
      register double Y = x*m01 + y*m11 + m21;

      if (X >= 0 && X < width_ && Y >= 0 && Y < height_) {
	if (!zcol_)
	  dest[((int)Y)*width_ + (int)X]++;
	else {
	  int zz = (int)((zcol_->value(ptr)-zmin)/zlength*depth_);
	  if (zz>=0 && zz<depth_)
	    dest[(zz*width_*height_) + ((int)Y)*width_ + (int)X]++;
	}
      }
    }
  }

  // for memory models that support internal paging
  fits->resetpage();

  // Average
  if (func==AVERAGE)
    for (size_t kk=0; kk<size_; kk++)
      dest[kk] /= (block[0]*block[1]);
    
  if (good)
    delete [] good;

  data_ = dest;

  dataSize_ = size_;
  dataSkip_ = 0;
}

void FitsHist::swap()
{
  if (!data_)
    return;

  // we now need to byteswap back to native form
  float* dest = (float*)data_;
  for (size_t ii=0; ii<size_; ii++) {
    const char* p = (char*)(dest+ii);
    union {
      char c[4];
      float f;
    } u;
    u.c[3] = *p++;
    u.c[2] = *p++;
    u.c[1] = *p++;
    u.c[0] = *p;
    dest[ii] = u.f;
  }
}

void FitsHist::initLTMV(Matrix& m) 
{
  head_->appendReal("LTM1_1", m[0][0], 9, NULL);
  head_->appendReal("LTM1_2", m[0][1], 9, NULL);
  head_->appendReal("LTM2_1", m[1][0], 9, NULL);
  head_->appendReal("LTM2_2", m[1][1], 9, NULL);
  head_->appendReal("LTV1"  , m[2][0], 9, NULL);
  head_->appendReal("LTV2"  , m[2][1], 9, NULL);
}

void FitsHist::mapWCSString(FitsHead* head, char* w, 
			    const char* out, const char* prim)
{
  ostringstream istr;
  istr << prim << xcol_->index() << w << ends;

  if (head->find(istr.str().c_str())) {
    char* str = head->getString(istr.str().c_str());
    head_->appendString(out, str, NULL);
  }
}

void FitsHist::mapWCSString(FitsHead* head, char* w, 
			    const char* out, const char* prim, const char* alt)
{
  ostringstream istr1, istr2, istr3;
  if (!w[0]) {
    istr1 << prim << xcol_->index() << w << ends;
    istr2 << prim << ycol_->index() << w << ends;
    if (zcol_)
      istr3 << prim << zcol_->index() << w << ends;
  }
  else {
    istr1 << alt << xcol_->index() << w << ends;
    istr2 << alt << ycol_->index() << w << ends;
    if (zcol_)
      istr3 << alt << zcol_->index() << w << ends;
  }
  ostringstream ostr1, ostr2, ostr3;
  ostr1 << out << "1" << w << ends;
  ostr2 << out << "2" << w << ends;
  if (zcol_)
    ostr3 << out << "3" << w << ends;

  if (head->find(istr1.str().c_str())) {
    char* cc1 = head->getString(istr1.str().c_str());
    head_->appendString(ostr1.str().c_str(), cc1, NULL);
  }
  if (head->find(istr2.str().c_str())) {
    char* cc2 = head->getString(istr2.str().c_str());
    head_->appendString(ostr2.str().c_str(), cc2, NULL);
  }
  if (zcol_) {
    if (head->find(istr3.str().c_str())) {
      char* cc3 = head->getString(istr3.str().c_str());
      head_->appendString(ostr3.str().c_str(), cc3, NULL);
    }
  }
}

void FitsHist::mapWCSReal(FitsHead* head, const char* out, const char* in)
{
  ostringstream istr;
  istr << in << xcol_->index() << ends;

  if (head->find(istr.str().c_str())) {
    double cc = head->getReal(istr.str().c_str(), 0);
    head_->appendReal(out, cc, 15, NULL);
  }
}

void FitsHist::mapWCSReal(FitsHead* head, char* w,
			  const char* out, const char* in)
{
  ostringstream istr;
  istr << in << xcol_->index() << w << ends;

  if (head->find(istr.str().c_str())) {
    double cc = head->getReal(istr.str().c_str(), 0);
    head_->appendReal(out, cc, 15, NULL);
  }
}

void FitsHist::mapWCSReal(FitsHead* head, char* w, 
			  const char* out, const char* prim, const char* alt, 
			  Matrix mm)
{
  ostringstream istr1, istr2, istr3;
  if (!w[0]) {
    istr1 << prim << xcol_->index() << w << ends;
    istr2 << prim << ycol_->index() << w << ends;
    if (zcol_)
      istr3 << prim << zcol_->index() << w << ends;
  }
  else {
    istr1 << alt << xcol_->index() << w << ends;
    istr2 << alt << ycol_->index() << w << ends;
    if (zcol_)
      istr3 << alt << zcol_->index() << w << ends;
  }
  ostringstream ostr1, ostr2, ostr3;
  ostr1 << out << "1" << w << ends;
  ostr2 << out << "2" << w << ends;
  if (zcol_)
    ostr3 << out << "3" << w << ends;

  if (head->find(istr1.str().c_str()) || head->find(istr2.str().c_str())) {
    double cc1 = head->getReal(istr1.str().c_str(),0);
    double cc2 = head->getReal(istr2.str().c_str(),0);
    Vector cc = Vector(cc1,cc2) * mm;

    head_->appendReal(ostr1.str().c_str(), cc[0], 15, NULL);
    head_->appendReal(ostr2.str().c_str(), cc[1], 15, NULL);
  }

  if (zcol_) {
    if (head->find(istr3.str().c_str())) {
      double cc3 = head->getReal(istr3.str().c_str(),0);
      head_->appendReal(ostr3.str().c_str(), cc3, 15, NULL);
    }
  }
}

void FitsHist::mapWCSMatrix(FitsHead* head, char* w, 
			    const char* out, const char* in,
			    Vector vv)
{
  ostringstream istr1, istr2, istr3, istr4;
  istr1 << in << xcol_->index() << "_" <<  xcol_->index() << w << ends;
  istr2 << in << xcol_->index() << "_" <<  ycol_->index() << w << ends;
  istr3 << in << ycol_->index() << "_" <<  xcol_->index() << w << ends;
  istr4 << in << ycol_->index() << "_" <<  ycol_->index() << w << ends;

  ostringstream ostr1, ostr2, ostr3, ostr4;
  ostr1 << out << "1_1" << w << ends;
  ostr2 << out << "1_2" << w << ends;
  ostr3 << out << "2_1" << w << ends;
  ostr4 << out << "2_2" << w << ends;

  if (head->find(istr1.str().c_str()) || 
      head->find(istr2.str().c_str()) ||
      head->find(istr3.str().c_str()) ||
      head->find(istr4.str().c_str())) {
    double cc11 = head->getReal(istr1.str().c_str(), 0);
    double cc12 = head->getReal(istr2.str().c_str(), 0);
    double cc21 = head->getReal(istr3.str().c_str(), 0);
    double cc22 = head->getReal(istr4.str().c_str(), 0);
    Matrix cc = Matrix(cc11*vv[0], cc12*vv[0], 
		       cc21*vv[1], cc22*vv[1], 
		       0, 0);
    head_->appendReal(ostr1.str().c_str(), cc[0][0], 15, NULL);
    head_->appendReal(ostr2.str().c_str(), cc[0][1], 15, NULL);
    head_->appendReal(ostr3.str().c_str(), cc[1][0], 15, NULL);
    head_->appendReal(ostr4.str().c_str(), cc[1][1], 15, NULL);
  }
}

void FitsHist::mapWCSVector(FitsHead* head, char* w, 
			    const char* out, const char* in)
{
  for (int ii=0; ii<=9; ii++) {
    ostringstream istr1, istr2;
    istr1 << in << xcol_->index() << "_" << ii << w << ends;
    istr2 << in << ycol_->index() << "_" << ii << w << ends;

    ostringstream ostr1, ostr2;
    ostr1 << out << "1_" << ii << ends;
    ostr2 << out << "2_" << ii << ends;

    if (head->find(istr1.str().c_str()) ||
	head->find(istr2.str().c_str())) {
      double cc1 = head->getReal(istr1.str().c_str(), 0);
      double cc2 = head->getReal(istr2.str().c_str(), 0);
      head_->appendReal(ostr1.str().c_str(), cc1, 15, NULL);
      head_->appendReal(ostr2.str().c_str(), cc2, 15, NULL);
    }
  }
}

void FitsHist::initWCS(FitsFile* fits, Matrix& mm, Vector block)
{
  FitsHead* srcHead = fits->head();
  char w[2];
  w[1] = '\0';

  for (int i=0; i<MULTWCS; i++) {
    if (!i)
      w[0] = '\0';
    else
      w[0] = '@'+i;

    mapWCSString(srcHead, w, "CTYPE", "TCTYP", "TCTY");
    mapWCSString(srcHead, w, "CUNIT", "TCUNI", "TCUN");
    mapWCSReal(srcHead, w, "CRVAL", "TCRVL", "TCRV", Matrix());
    mapWCSReal(srcHead, w, "CDELT", "TCDLT", "TCDE", Scale(block));
    mapWCSReal(srcHead, w, "CRPIX", "TCRPX", "TCRP", mm);
    mapWCSReal(srcHead, w, "CROTA", "TCROT", "TCRO", Matrix());

    mapWCSMatrix(srcHead, w, "PC", "TP", Vector(1,1));
    mapWCSMatrix(srcHead, w, "CD", "TC", block);
    mapWCSVector(srcHead, w, "PV", "TV");
    mapWCSVector(srcHead, w, "PS", "TS");
    mapWCSString(srcHead, w, "WCSNAME", "TWCS"); 

    // alt
    mapWCSMatrix(srcHead, w, "PC", "TPC", Vector(1,1));
    mapWCSMatrix(srcHead, w, "CD", "TCD", block);
    mapWCSVector(srcHead, w, "PV", "TPV");
    mapWCSVector(srcHead, w, "PS", "TPS");
    mapWCSString(srcHead, w, "WCSNAME", "WCS"); 

    mapWCSReal(srcHead, w, "LONPOLE", "LONP");
    mapWCSReal(srcHead, w, "LATPOLE", "LATP");
    if (!head_->find("EQUINOX"))
      mapWCSReal(srcHead, w, "EQUINOX", "EQUI");
    if (!head_->find("MJD-OBS"))
      mapWCSReal(srcHead, "MJD-OBS", "MJDOB");
    if (!head_->find("RADESYS"))
      mapWCSString(srcHead, w, "RADESYS", "RADE");

    // general
    mapWCSString(srcHead, w, "BUNIT", "TUNIT");
  }
}

FitsHistNext::FitsHistNext(FitsFile* prev)
{
  primary_ = prev->primary();
  managePrimary_ = 0;

  head_ = prev->head();
  manageHead_ = 0;

  FitsImageHDU* hdu = (FitsImageHDU*)head_->hdu();
  data_ = (char*)prev->data() + hdu->imgbytes();
  dataSize_ = 0;
  dataSkip_ = 0;

  ext_ = prev->ext();
  inherit_ = prev->inherit();
  byteswap_ = prev->byteswap();
  endian_ = prev->endian();
  valid_ = 1;

  return;
}
