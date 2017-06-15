// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include "block.h"

FitsBlock::FitsBlock(FitsFile* fits, Vector& block)
{
  FitsHead* srcHead = fits->head();

  width_ = srcHead->naxis(0)/block[0];
  height_ = srcHead->naxis(1)/block[1];
  if (width_<1)
    width_ = 1;
  if (height_<1)
    height_ = 1;
  size_ = (size_t)width_*height_;

  primary_ = fits->primary();
  ext_ = fits->ext();
  inherit_ = fits->inherit();

  bitpix_ = srcHead->hdu()->bitpix();
  switch (bitpix_) {
  case -64:
    if (!(data_ = new double[size_]))
      return;
    dataSize_ = size_*sizeof(double);
    break;
  default:
    bitpix_ = -32;
    if (!(data_ = new float[size_]))
      return;
    dataSize_ = size_*sizeof(float);
    break;
  }
  dataSkip_ = 0;
  memset(data_, 0, dataSize_);

  initHeader(fits, block);
    
  // made it this far, must be valid
  byteswap_ = 0;
  endian_ = lsb() ? LITTLE : BIG;
  valid_ = 1;
}

FitsBlock::~FitsBlock()
{
  if (data_)
    delete [] (char*)data_;
}

void FitsBlock::initHeader(FitsFile* fits, Vector& block)
{
  head_ = new FitsHead(*(fits->head()));

  // change bitpix
  switch (bitpix_) {
  case -64:
    head_->setInteger("BITPIX", -64, "");
    break;
  default:
    head_->setInteger("BITPIX", -32, "");
    break;
  }

  // change width/height
  head_->setInteger("NAXIS1", width_, "");
  head_->setInteger("NAXIS2", height_, "");

  // IRAF
  initLTMV(block);
  initCCDSUM(block);
  initKeySEC("BIASSEC",block);
  initKeySEC("DATASEC",block);
  initKeySEC("TRIMSEC",block);

  // WCS
  initWCS(block);

  // clear cards
  if (head_->find("BZERO"))
    head_->carddel("BZERO");
  if (head_->find("BSCALE"))
    head_->carddel("BSCALE");
  if (head_->find("DATASUM"))
    head_->carddel("DATASUM");
  if (head_->find("CHECKSUM"))
    head_->carddel("CHECKSUM");
  if (head_->find("DATAMIN"))
    head_->carddel("DATAMIN");
  if (head_->find("DATAMAX"))
    head_->carddel("DATAMAX");
  if (head_->find("DATAMEAN"))
    head_->carddel("DATAMEAN");
  if (head_->find("GOODMIN"))
    head_->carddel("GOODMIN");
  if (head_->find("GOODMAX"))
    head_->carddel("GOODMAX");
  if (head_->find("IRAF-MIN"))
    head_->carddel("IRAF-MIN");
  if (head_->find("IRAF-MAX"))
    head_->carddel("IRAF-MAX");

  head_->updateHDU();
}

void FitsBlock::initCCDSUM(Vector& block)
{
  if (head_->find("CCDSUM")) {
    char* val = head_->getString("CCDSUM");
    float xx,yy;
    istringstream istr(val);
    istr >> xx >> yy;

    xx *= block[0];
    yy *= block[1];

    ostringstream ostr;
    ostr << xx << ' ' << yy << ends;
    head_->setString("CCDSUM", ostr.str().c_str(), "");
  }
}

void FitsBlock::initKeySEC(const char* key, Vector& block)
{
  if (head_->find(key)) {
    char* sec = head_->getString(key);
    Vector ll,ur;
    parseSection(sec,&ll,&ur);
    Matrix mm = Translate(-1,-1) *
      Scale(1/block[0],1/block[1]) *
      Translate(1,1);

    Vector nll = ll*mm;
    Vector nur = ur*mm;
    ostringstream ostr;
    ostr << '[' << int(nll[0]) << ':' << int(nur[0])
	 << ',' << int(nll[1]) << ':' << int(nur[1]) << ']' << ends;
    head_->setString(key, ostr.str().c_str(), "");
  }
}

void FitsBlock::initLTMV(Vector& block)
{
  // always do LTMV
  double ltv1 = head_->getReal("LTV1", 0);
  double ltv2 = head_->getReal("LTV2", 0);
  double ltm11 = head_->getReal("LTM1_1", 1);
  double ltm12 = head_->getReal("LTM1_2", 0);
  double ltm21 = head_->getReal("LTM2_1", 0);
  double ltm22 = head_->getReal("LTM2_2", 1);

  Matrix mm(ltm11,ltm12,ltm21,ltm22,ltv1,ltv2);
  Matrix im = mm * 
    Translate(-.5,-.5) * 
    Scale(1./block[0],1./block[1]) * 
    Translate(.5,.5);

  if (head_->find("LTV1"))
    head_->setReal("LTV1", im.matrix(2,0), 8, "");
  else
    head_->appendReal("LTV1", im.matrix(2,0), 8, "");

  if (head_->find("LTV2"))
    head_->setReal("LTV2", im.matrix(2,1), 8, "");
  else
    head_->appendReal("LTV2", im.matrix(2,1), 8, "");

  if (head_->find("LTM1_1"))
    head_->setReal("LTM1_1", ltm11/block[0], 8, "");
  else
    head_->appendReal("LTM1_1", ltm11/block[0], 8, "");

  if (head_->find("LTM1_2"))
    head_->setReal("LTM1_2", ltm12, 8, "");
  else
    head_->appendReal("LTM1_2", ltm12, 8, "");

  if (head_->find("LTM2_1"))
    head_->setReal("LTM2_1", ltm21, 8, "");
  else
    head_->appendReal("LTM2_1", ltm21, 8, "");

  if (head_->find("LTM2_2"))
    head_->setReal("LTM2_2", ltm22/block[1], 8, "");
  else
    head_->appendReal("LTM2_2", ltm22/block[1], 8, "");
}

void FitsBlock::initWCS(Vector& block)
{
  // check for WCS
  if (!head_->find("CRPIX1") && !head_->find("CRPIX2"))
    return;

  double crpix1 = head_->getReal("CRPIX1", 0);
  double crpix2 = head_->getReal("CRPIX2", 0);
  Matrix pp = Matrix(1,0,0,1,crpix1,crpix2) *
    Translate(-.5,-.5) *
    Scale(1/block[0],1/block[1]) *
    Translate(.5,.5);

  if (head_->find("CRPIX1"))
    head_->setReal("CRPIX1", pp.matrix(2,0), 8, "");
  else
    head_->appendReal("CRPIX1", pp.matrix(2,0), 8, "");

  if (head_->find("CRPIX2"))
    head_->setReal("CRPIX2", pp.matrix(2,1), 8, "");
  else
    head_->appendReal("CRPIX2", pp.matrix(2,1), 8, "");

  // CD
  if (head_->find("CD1_1") || head_->find("CD1_2") ||
      head_->find("CD2_1") || head_->find("CD2_2")) {
    double cd11 = head_->getReal("CD1_1", 1);
    double cd12 = head_->getReal("CD1_2", 0);
    double cd21 = head_->getReal("CD2_1", 0);
    double cd22 = head_->getReal("CD2_2", 1);
    Matrix mm = Matrix(cd11,cd12,cd21,cd22,0,0) *
      Scale(block[0],block[1]);

    if (head_->find("CD1_1"))
      head_->setReal("CD1_1", mm.matrix(0,0), 8, "");
    else
      head_->appendReal("CD1_1", mm.matrix(0,0), 8, "");

    if (head_->find("CD1_2"))
      head_->setReal("CD1_2", mm.matrix(0,1), 8, "");
    else
      head_->appendReal("CD1_2", mm.matrix(0,1), 8, "");

    if (head_->find("CD2_1"))
      head_->setReal("CD2_1", mm.matrix(1,0), 8, "");
    else
      head_->appendReal("CD2_1", mm.matrix(1,0), 8, "");

    if (head_->find("CD2_2"))
      head_->setReal("CD2_2", mm.matrix(1,1), 8, "");
    else
      head_->appendReal("CD2_2", mm.matrix(1,1), 8, "");

  }
  // CDELT
  else if (head_->find("CDELT1") || head_->find("CDELT2")) {
    double cdelt1 = head_->getReal("CDELT1", 1);
    double cdelt2 = head_->getReal("CDELT2", 0);
    Matrix mm = Matrix(cdelt1,0,0,cdelt2,0,0) *
      Scale(block[0],block[1]);

    if (head_->find("CDELT1"))
      head_->setReal("CDELT1", mm.matrix(0,0), 8, "");
    else
      head_->appendReal("CDELT1", mm.matrix(0,0), 8, "");

    if (head_->find("CDELT2"))
      head_->setReal("CDELT2", mm.matrix(1,1), 8, "");
    else
      head_->appendReal("CDELT2", mm.matrix(1,1), 8, "");
  }
}

