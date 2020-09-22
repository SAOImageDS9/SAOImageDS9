// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "fitsimage.h"
#include "context.h"

Matrix FitsImage::bin(const Vector& vv)
{
  // v is in bin (physical) coords
  return hist_ ? nextBin(vv) : Matrix();
}

Matrix FitsImage::binCenter()
{
  return hist_ ? nextBin(getHistCenter()) : Matrix();
}

Matrix FitsImage::binCursor()
{
  return hist_ ? nextBin(histCursor) : Matrix();
}

void FitsImage::initBin()
{
  // make sure we have rows and cols
  {
    FitsHead* head = fits_->head();
    if (head) {
      FitsTableHDU* hdu = (FitsTableHDU*)(head->hdu());
      if (!hdu->width() || !hdu->rows())
	return;
    }
  }

  // make sure we have cols to bin on
  if (!fits_->pBinX() || !fits_->pBinY()) {
    FitsHead* head = fits_->head();
    if (head) {
      FitsBinTableHDU* hdu = (FitsBinTableHDU*)head->hdu();

      // try for X and Y
      FitsColumn* x = hdu->find("X");
      FitsColumn* y = hdu->find("Y");

      // next, try for ra and dec
      if (!x)
	x = hdu->find("RA");
      if (!y)
	y = hdu->find("DEC");

      // last chance, try first and second column
      if (!x)
	x = hdu->find(0);
      if (!y)
	y = hdu->find(1);

      if (x) {
	char* str = trim(x->ttype());
	fits_->setpBinX(str);
	delete [] str;
      }
      else 
	return;

      if (y) {
	char* str = trim(y->ttype());
	fits_->setpBinY(str);
	delete [] str;
      }
      else
	return;
    }
  }

  if (!fits_->pBinZ()) {
    FitsHead* head = fits_->head();
    if (head) {
      FitsBinTableHDU* hdu = (FitsBinTableHDU*)head->hdu();

      // try for TIME
      FitsColumn* z = hdu->find("TIME");

      // last chance, try third column
      if (!z)
	z = hdu->find(2);

      if (z) {
	char* str = trim(z->ttype());
	fits_->setpBinZ(str);
	delete [] str;
      }
    }
  }

  nextBin(getHistCenter());
}

int FitsImage::hasBinCol(const char* str)
{
  if (fits_) {
    FitsHead* head = fits_->head();
    if (head) {
      FitsBinTableHDU* hdu = (FitsBinTableHDU*)head->hdu();
      return hdu->find(str) ? 1 : 0;
    }
  }
  return 0;
}

void FitsImage::setBinCursor(const Vector& v)
{
  histCursor = v * refToPhysical;
}

Matrix FitsImage::nextBin(const Vector& c)
{
  if (hist_)
    delete hist_;
  hist_ = NULL;

  if (manageBlock_) {
    if (block_)
      delete block_;
    if (blockdata_)
      delete blockdata_;
  }
  manageBlock_ =0;
  block_ = base_;
  blockdata_ = basedata_;

  if (manageAnalysis_) {
    if (analysis_)
      delete analysis_;
    if (analysisdata_)
      delete analysisdata_;
  }
  manageAnalysis_ =0;

  // cursor, c is in bin (physical) coords
  // remember where we are pointing
  histCursor = c;

  // Vector s = getHistDim()/binFactor_;
  Vector d = getHistDim();
  Vector s;
  Vector binFactor = context_->binFactor();
  s[0] = d[0]/binFactor[0];
  s[1] = d[1]/binFactor[1];

  // make sure that we have a width/height of at least 1
  if (s[0]<1)
    s[0]=1;
  if (s[1]<1)
    s[1]=1;

  int bufferSize = context_->binBufferSize();
  int width = (int)(s[0]<bufferSize ? s[0] : bufferSize);
  int height= (int)(s[1]<bufferSize ? s[1] : bufferSize);
  int depth = context_->binDepth();

  Vector center = Vector(width, height)/2;

  if (DebugBin) {
    cerr << "width height: " << width << ' ' << height << endl;
    cerr << "center: " << center << endl;
    cerr << "center.ceil(): " << center.ceil() << endl;
  }

  if (binFactor[0]<1 || binFactor[1]<1) {
    actualHistCursor = histCursor;

    if (DebugBin)
      cerr << "histCursor: " << histCursor << endl;
  }
  else {
    // force to a bin boundary, then translate to center of bin cell
    //    actualHistCursor = ((histCursor/binFactor_).floor() * binFactor_) +
    //      Vector(.5,.5);
    actualHistCursor[0] = (floor(histCursor[0]/binFactor[0]) * binFactor[0])
      +  .5;
    actualHistCursor[1] = (floor(histCursor[1]/binFactor[1]) * binFactor[1])
      +  .5;

    // now, figure out any offset due to mod(lowerleft,binFactor_)
    FitsBinTableHDU* hdu = (FitsBinTableHDU*)(fits_->head())->hdu();
    FitsBinColumnB* xcol = (FitsBinColumnB*)hdu->find(fits_->pBinX());
    FitsBinColumnB* ycol = (FitsBinColumnB*)hdu->find(fits_->pBinY());
    if (!xcol || !ycol)
      return Matrix();

    Vector xd = xcol->dimension();
    Vector yd = ycol->dimension();
    Vector ll(xd[0],yd[0]);

    //    Vector a = ((ll/binFactor_).floor() * binFactor_) + Vector(.5,.5);
    Vector a;
    a[0] = (floor(ll[0]/binFactor[0]) * binFactor[0]) + .5;
    a[1] = (floor(ll[1]/binFactor[1]) * binFactor[1]) + .5;
    Vector offset = a-ll;
    actualHistCursor -= offset;

    if (DebugBin) {
      cerr << "histCursor: " << histCursor << endl;
      cerr << "actualHistCursor: " << actualHistCursor << endl;
      cerr << "ll: " << ll << endl;
      cerr << "offset: " << offset << endl;
    }
  }

  // new physicalToData
  Matrix mm = 
    Translate(-actualHistCursor) * 
    Scale(1./binFactor[0],1./binFactor[1]) *
    Translate(center.ceil());

  if (DebugBin)
    cerr << "mm: " << mm << endl << endl;

  FitsHist::Function binFunction = context_->binFunction();
  hist_ = new FitsHist(fits_, width, height, depth, mm, binFunction, binFactor);

  if (!hist_->isValid()) {
    reset();
    return Matrix();
  }

  load();

  return refToPhysical * mm * dataToRef;
}

Vector FitsImage::getColMinMax(const char* col)
{
  return fits_ ? fits_->getColMinMax(col) : Vector();
}

Vector FitsImage::getColDim(const char* col)
{
  return fits_ ? fits_->getColDim(col) : Vector();
}

Vector FitsImage::getHistDim()
{
  if (!isBinTable())
    return Vector();

  // assumes we aready have our columns
  FitsBinTableHDU* hdu = (FitsBinTableHDU*)(fits_->head())->hdu();
  FitsBinColumnB* xcol = (FitsBinColumnB*)hdu->find(fits_->pBinX());
  FitsBinColumnB* ycol = (FitsBinColumnB*)hdu->find(fits_->pBinY());
  if (!xcol || !ycol)
    return Vector();

  Vector xd = xcol->dimension();
  Vector yd = ycol->dimension();

  // if DBL_MAX, we will get nan
  Vector r(xd[1]-xd[0],yd[1]-yd[0]);

  if (isfinite(r[0]) && isfinite(r[1]))
    return r;
  else
    return Vector(DBL_MAX,DBL_MAX);
}

Vector FitsImage::getHistCenter()
{
  // return bin (physical) coords
  if (!isBinTable())
    return Vector();

  // assumes we aready have our columns
  FitsBinTableHDU* hdu = (FitsBinTableHDU*)(fits_->head())->hdu();
  FitsBinColumnB* xcol = (FitsBinColumnB*)hdu->find(fits_->pBinX());
  FitsBinColumnB* ycol = (FitsBinColumnB*)hdu->find(fits_->pBinY());
  if (!xcol || !ycol)
    return Vector();

  Vector xd = xcol->dimension();
  Vector yd = ycol->dimension();

  // if DBL_MAX, we will get nan
  Vector r = Vector(xd[1]-xd[0],yd[1]-yd[0])/2 + Vector(xd[0],yd[0]);

  if (isfinite(r[0]) && isfinite(r[1]))
    return r;
  else
    return Vector();
}

const char* FitsImage::getHistFilter()
{
  return fits_ ? fits_->pFilter() : NULL;
}

const char* FitsImage::getHistX()
{
  return fits_ ? fits_->pBinX() : NULL;
}

const char* FitsImage::getHistY()
{
  return fits_ ? fits_->pBinY() : NULL;
}

const char* FitsImage::getHistZ()
{
  return fits_ ? fits_->pBinZ() : NULL;
}

char* FitsImage::getHistList()
{
  if (!isHist())
    return NULL;

  FitsHead* head = fits_->head();
  return ((FitsTableHDU*)head->hdu())->list();
}



