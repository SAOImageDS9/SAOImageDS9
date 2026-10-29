// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tcl.h>

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include "file.h"
#include "util.h"

#include <limits.h>
#include <stdlib.h>
#include <sys/stat.h>

// extention parser
#undef yyFlexLexer
#define yyFlexLexer ffFlexLexer
#include <FlexLexer.h>

void* fflval;
ffFlexLexer* fflexx;
extern int ffparse(FitsFile*, ffFlexLexer*);

int fflex(void* vval, ffFlexLexer* ll)
{
  fflval = vval;
  fflexx = ll;
  return ll ? ll->yylex() : 0;
}

void fferror(FitsFile* ff, ffFlexLexer* ll, const char* m)
{
  ff->error(m);
  const char* cmd = ll ? ll->YYText() : (const char*)NULL;
  if (cmd && cmd[0] != '\n')
    ff->error(cmd);
}

// nrrd parser
#undef yyFlexLexer
#define yyFlexLexer nrrdFlexLexer
#include <FlexLexer.h>

void* nrrdlval;
nrrdFlexLexer* nrrdlexx;
extern int nrrdparse(FitsFile*, nrrdFlexLexer*);

int nrrdlex(void* vval, nrrdFlexLexer* ll)
{
  nrrdlval = vval;
  nrrdlexx = ll;
  return ll ? ll->yylex() : 0;
}

void nrrderror(FitsFile* nrrd, nrrdFlexLexer* ll, const char* m)
{
  nrrd->error(m);
  const char* cmd = ll ? ll->YYText() : (const char*)NULL;
  if (cmd && cmd[0] != '\n')
    nrrd->error(cmd);
}

// envi parser
#undef yyFlexLexer
#define yyFlexLexer enviFlexLexer
#include <FlexLexer.h>

void* envilval;
enviFlexLexer* envilexx;
extern int enviparse(FitsFile*, enviFlexLexer*);

int envilex(void* vval, enviFlexLexer* ll)
{
  envilval = vval;
  envilexx = ll;
  return ll ? ll->yylex() : 0;
}

void envierror(FitsFile* envi, enviFlexLexer* ll, const char* m)
{
  envi->error(m);
  const char* cmd = ll ? ll->YYText() : (const char*)NULL;
  if (cmd && cmd[0] != '\n')
    envi->error(cmd);
}

FitsFile::FitsFile()
{
  primary_ = NULL;
  managePrimary_ = 0;

  head_ = NULL;
  manageHead_ = 1;

  data_ = NULL;
  dataSize_ = 0;
  dataSkip_ = 0;

  ext_ = 0;
  inherit_ = 0;
  byteswap_ = lsb();
  endian_ = BIG;
  valid_ = 0;

  pName_ = NULL;
  pExt_ = NULL;
  pIndex_ = -1;

  pFilter_ = NULL;
  pBinX_ = NULL;
  pBinY_ = NULL;
  pBinZ_ = NULL;

  pBitpix_ =0;
  pWidth_ =0;
  pHeight_ =0;
  pDepth_ =1;
  pSkip_ =0;
  pArch_ =NATIVE;

  pEncoding_ =RAW;

  pHPXOrder_ =-1;
  pHPXSystem_ =-1;
  pHPXLayout_ =-1;
  pHPXColumn_ =-1;
  pHPXQuad_ =-1;

  pCRPIX3_ =1;
  pCRVAL3_ =1;
  pCDELT3_ =1;

  pcoord_ =0;
  pxvalid_ =0;
  pxmin_ =0;
  pxmax_ =0;
  pyvalid_ =0;
  pymin_ =0;
  pymax_ =0;
  pzvalid_ =0;
  pzmin_ =0;
  pzmax_ =0;
  pbvalid_ =0;
  pblock_ =1;

  refName_ =NULL;
  refSpec_ =NULL;
  refDev_ =0;
  refIno_ =0;
  refSize_ =0;
}

FitsFile::~FitsFile()
{
  if (refName_)
    delete [] refName_;
  if (refSpec_)
    delete [] refSpec_;

  if (manageHead_ && head_)
    delete head_;

  if (managePrimary_ && primary_)
    delete primary_;

  if (pName_)
    delete [] pName_;

  if (pExt_)
    delete [] pExt_;

  if (pFilter_)
    delete [] pFilter_;

  if (pBinX_)
    delete [] pBinX_;

  if (pBinY_)
    delete [] pBinY_;

  if (pBinZ_)
    delete [] pBinZ_;
}

// Compare the data layout described by two headers.
// Returns NULL if the same, else a description of the difference.
const char* FitsFile::compareLayout(FitsHead* was, FitsHead* now)
{
  if (now->bitpix() != was->bitpix())
    return "data type (BITPIX) has changed";
  if (now->naxes() != was->naxes())
    return "number of axes (NAXIS) has changed";
  for (int ii=0; ii<was->naxes(); ii++)
    if (now->naxis(ii) != was->naxis(ii))
      return "image dimensions have changed";

  return NULL;
}

// Remember which file is mapped and how much of it the mapping needs, so a
// later refresh can verify the file before touching the mapped memory.
// Called after parse(), with the original file spec.
void FitsFile::setRefreshFile(const char* spec, unsigned long dev,
			      unsigned long ino, size_t size)
{
  if (refName_)
    delete [] refName_;
  refName_ =NULL;
  if (refSpec_)
    delete [] refSpec_;
  refSpec_ =NULL;

  if (pName_) {
    const char* fn = pName_;
#ifndef __WIN32
    char buf[PATH_MAX];
    if (realpath(pName_, buf))
      fn = buf;
#endif
    refName_ = dupstr(fn);

    // same spec (extension etc), but absolute, in case the cwd changes
    size_t ll = strlen(pName_);
    if (spec && !strncmp(spec, pName_, ll)) {
      refSpec_ = new char[strlen(fn)+strlen(spec+ll)+1];
      strcpy(refSpec_, fn);
      strcat(refSpec_, spec+ll);
    }
    else
      refSpec_ = dupstr(spec);
  }
  refDev_ = dev;
  refIno_ = ino;
  refSize_ = size;
}

void FitsFile::setRefreshFile(FitsFile* prev)
{
  if (refName_)
    delete [] refName_;
  if (refSpec_)
    delete [] refSpec_;

  refName_ = dupstr(prev->refName_);
  refSpec_ = dupstr(prev->refSpec_);
  refDev_ = prev->refDev_;
  refIno_ = prev->refIno_;
  refSize_ = prev->refSize_;
}

// Can the mapped data simply be redisplayed?
//  REFRESHOK: yes, the layout on disk is unchanged
//  REFRESHSTALE: no, the mapping no longer matches the file (it was
//    replaced, or the data moved), but the new image may still be
//    compatible; the caller must read refSpec() afresh to decide
//  REFRESHERROR: no, the layout has changed
// For anything but OK, msg describes why.
FitsFile::RefreshStatus FitsFile::checkRefresh(const char** msg)
{
  *msg = NULL;

#ifndef __WIN32
  // Touching mapped pages past the end of a truncated file raises SIGBUS,
  // so check the file before the header is re-read from the map.
  if (refName_) {
    struct stat info;
    if (stat(refName_, &info) < 0) {
      *msg = "file no longer exists";
      return REFRESHERROR;
    }
    if ((unsigned long)info.st_dev != refDev_ ||
	(unsigned long)info.st_ino != refIno_) {
      *msg = "file has been replaced";
      return REFRESHSTALE;
    }
    if ((size_t)info.st_size < refSize_) {
      *msg = "file size has shrunk";
      return REFRESHSTALE;
    }
  }
#endif

  // Headers of mmap'd/shared data point directly into the mapped memory,
  // so an in-place rewrite shows up when they are re-parsed.
  FitsHead* hds[2] = {primary_ != head_ ? primary_ : NULL, head_};
  for (int ii=0; ii<2; ii++) {
    FitsHead* hd = hds[ii];
    if (!hd)
      continue;

    FitsHead now(hd->cards(), hd->headbytes(), FitsHead::EXTERNAL);
    if (!now.isValid() || now.headbytes() != hd->headbytes()) {
      // the data has moved within the file
      *msg = "header size has changed";
      return refSpec_ ? REFRESHSTALE : REFRESHERROR;
    }
    if ((*msg = compareLayout(hd, &now)))
      return REFRESHERROR;
  }

  return REFRESHOK;
}

void FitsFile::parse(const char* fn)
{
  if (fn) {
    string x(fn);
    istringstream str(x);

    valid_ = 1;
    ffFlexLexer* ll = new ffFlexLexer(&str);
    ffparse(this, ll);
    delete ll;
  }

  if (!pBinX_ && !pBinY_) {
    char *env;
    if ((env = getenv("DS9_BINKEY"))) {
      string x(env);
      istringstream str(x);

      valid_ = 1;
      ffFlexLexer* ll = new ffFlexLexer(&str);
      ffparse(this, ll);
      delete ll;
    }
  }

  if (!pWidth_ && !pHeight_ && !pBitpix_) {
    char *env;
    if ((env = getenv("DS9_ARRAY"))) {
      string x(env);
      istringstream str(x);

      valid_ = 1;
      ffFlexLexer* ll = new ffFlexLexer(&str);
      ffparse(this, ll);
      delete ll;
    }
  }
}

void FitsFile::error(const char* m)
{
  valid_ = 0;
}

int FitsFile::findEnd(const char* blk)
{
  for (int j=0; j<FTY_BLOCK; j+=FTY_CARDLEN)
    // only check for 4 chars
    if (!strncmp("END ", blk+j,4))
      return 1;

  return 0;
}

void FitsFile::setpName(const char* n)
{
  if (pName_)
    delete [] pName_;

  pName_ = dupstr(n);
}

void FitsFile::setpExt(const char* n)
{
  if (pExt_)
    delete [] pExt_;

  pExt_ = dupstr(n);
}

void FitsFile::setpBinX(const char* x)
{
  if (pBinX_)
    delete [] pBinX_;

  pBinX_ = dupstr(x);
}

void FitsFile::setpBinY(const char* y)
{
  if (pBinY_)
    delete [] pBinY_;

  pBinY_ = dupstr(y);
}

void FitsFile::setpBinZ(const char* z)
{
  if (pBinZ_)
    delete [] pBinZ_;

  pBinZ_ = dupstr(z);
}

void FitsFile::setpFilter(const char* filt)
{
  if (pFilter_)
    delete [] pFilter_;

  pFilter_ = dupstr(filt);
}

Vector FitsFile::getColMinMax(const char* name)
{
  if (isTable()) {
    FitsTableHDU* hdu = (FitsTableHDU*)head()->hdu();
    FitsColumn* col = hdu->find(name);
    if (col) {
      if (!col->hasMinMax()) {
	double zmin =  DBL_MAX;
	double zmax = -DBL_MAX;
	int rowlen = hdu->width();
	int numrow = hdu->rows();

	char* ptr = (char*)data();
	for (int i=0; i<numrow; i++, ptr+=rowlen) {
	  // for memory models that support internal paging
	  ptr = page(ptr, rowlen);

	  double z = col->value(ptr);
	  if (z < zmin)
	    zmin = z;
	  if (z > zmax)
	    zmax = z;
	}
	// for memory models that support internal paging
	resetpage();

	col->setMin(zmin);
	col->setMax(zmax);
	return Vector(zmin,zmax);
      }
      else
	return Vector(col->getMin(), col->getMax());
    }
  }
  return Vector();
}

void FitsFile::setColMinMax(const char* name, const Vector& lim)
{
  if (isBinTable()) {
    FitsBinTableHDU* hdu = (FitsBinTableHDU*)head()->hdu();
    FitsColumn* col = hdu->find(name);
    if (col) {
      Vector ll=lim;
      col->setMin(ll[0]);
      col->setMax(ll[1]);
    }
  }
}

Vector FitsFile::getColDim(const char* name)
{
  if (isBinTable()) {
    FitsBinTableHDU* hdu = (FitsBinTableHDU*)head()->hdu();
    FitsColumn* col = hdu->find(name);
    if (col) {
      if (col->hasTLMinTLMax()) {
	Vector lim = col->dimension();
	col->setMin(lim[0]);
	col->setMax(lim[1]);
	return lim;
      }
      else
	return getColMinMax(name);
    }
  }

  return Vector();
}

int FitsFile::validParams()
{
  if (!pWidth_ || !pHeight_ || !pBitpix_)
    return 0;

  // check for valid bitpix
  switch (pBitpix_) {
  case 8:
  case 16:
  case -16:
  case 32:
  case 64:
  case -32:
  case -64:
    break;
  default:
    return 0;
  }

  return 1;
}

void FitsFile::setByteSwap()
{
  switch (pArch_) {
  case BIG:
    endian_ = pArch_;
    byteswap_ = lsb();
    break;
  case LITTLE:
    endian_ = pArch_;
    byteswap_ = !lsb();
    break;
  case NATIVE:
    endian_ = lsb() ? LITTLE : BIG;
    byteswap_ = 0;
    break;
  }
}

void FitsFile::parseNRRD(istream& str)
{
  valid_ = 1;
  nrrdFlexLexer* ll = new nrrdFlexLexer(&str);
  nrrdparse(this, ll);
  delete ll;
}

void FitsFile::parseENVI(istream& str)
{
  valid_ = 1;
  enviFlexLexer* ll = new enviFlexLexer(&str);
  enviparse(this, ll);
  delete ll;
}

int FitsFile::find(const char* name)
{
  if (head_)
    if (head_->find(name))
      return 1;

  if (primary_ && inherit_)
    if (primary_->find(name))
      return 1;

  return 0;
}

int FitsFile::getLogical(const char* name, int def)
{
  if (head_)
    if (head_->find(name))
      return head_->getLogical(name,def);

  if (primary_ && inherit_)
    if (primary_->find(name))
      return primary_->getLogical(name,def);

  return def;
}

int FitsFile::getInteger(const char* name, int def)
{
  if (head_)
    if (head_->find(name))
      return head_->getInteger(name,def);

  if (primary_ && inherit_)
    if (primary_->find(name))
	return primary_->getInteger(name,def);

  return def;
}

double FitsFile::getReal(const char* name, double def)
{
  if (head_)
    if (head_->find(name))
      return head_->getReal(name,def);

  if (primary_ && inherit_)
    if (primary_->find(name))
      return primary_->getReal(name,def);

  return def;
}

void FitsFile::getComplex(const char* name, double* real, double* img,
			  double rdef, double idef)
{
  if (head_)
    if (head_->find(name)) {
      head_->getComplex(name, real, img, rdef, idef);
      return;
    }

  if (primary_ && inherit_)
    if (primary_->find(name)) {
      primary_->getComplex(name, real, img, rdef, idef);
      return;
    }

  *real = rdef;
  *img = idef;
}

char* FitsFile::getString(const char* name)
{
  if (head_)
    if (head_->find(name))
      return head_->getString(name);

  if (primary_ && inherit_)
    if (primary_->find(name))
      return primary_->getString(name);

  return NULL;
}

char* FitsFile::getComment(const char* name)
{
  if (head_)
    if (head_->find(name))
    return head_->getComment(name);

  if (primary_ && inherit_)
    if (primary_->find(name))
      return primary_->getComment(name);

  return NULL;
}

char* FitsFile::getKeyword(const char* name)
{
  if (head_)
    if (head_->find(name))
    return head_->getKeyword(name);

  if (primary_ && inherit_)
    if (primary_->find(name))
      return primary_->getKeyword(name);

  return NULL;
}



