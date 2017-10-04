// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "context.h"
#include "framebase.h"
#include "framergb.h"
#include "fitsimage.h"
#include "outfile.h"
#include "outchannel.h"
#include "outsocket.h"
#include "sigbus.h"

void Base::saveFits(OutFitsStream& str)
{
  FitsImage* ptr = currentContext->fits;
  if (!ptr) 
    return;

  int dd = currentContext->naxis(2);
  if (!ptr->isIIS()) {
    ptr->saveFitsHeader(str,dd);
    size_t cnt =0;
    FitsImage* sptr = ptr;
    while (sptr) {
      cnt += sptr->saveFits(str);
      sptr = sptr->nextSlice();
    }
    ptr->saveFitsPad(str,cnt,'\0');
  }
  else {
    ptr->saveFitsIISHeader(str);
    size_t cnt = ptr->saveFitsIIS(str);
    ptr->saveFitsPad(str,cnt,'\0');
  }
}

void Base::saveFitsTable(OutFitsStream& str)
{
  FitsImage* ptr = currentContext->fits;
  if (ptr) {
    if (ptr->isTable())
      ptr->saveFitsTable(str);
    else {
      Tcl_AppendResult(interp, " not a fits table", NULL);
      result = TCL_ERROR;
    }
  }
}

void Base::saveFitsSlice(OutFitsStream& str)
{
  FitsImage* ptr = currentContext->cfits;
  if (!ptr) 
    return;

  ptr->saveFitsHeader(str,1);
  size_t cnt = ptr->saveFits(str);
  ptr->saveFitsPad(str,cnt,'\0');
}

void Base::saveFitsExtCube(OutFitsStream& str)
{
  FitsImage* ptr = currentContext->fits;
  if (!ptr) 
    return;

  ptr->saveFitsPrimHeader(str);
  while (ptr) {
    ptr->saveFitsXtHeader(str, 1);
    size_t cnt = ptr->saveFits(str);
    ptr->saveFitsPad(str,cnt,'\0');
    ptr = ptr->nextSlice();
  }
}

void Base::saveFitsMosaic(OutFitsStream& str, int which)
{
  FitsImage* ptr = currentContext->fits;
  int dd = currentContext->naxis(2);

  // which 1 to n
  which--;
  while (ptr && which) {
    ptr = ptr->nextMosaic();
    which--;
  }

  if (!ptr)
    return;

  ptr->saveFitsHeader(str,dd);
  size_t cnt =0;
  FitsImage* sptr = ptr;
  while (sptr) {
    cnt += sptr->saveFits(str);
    sptr = sptr->nextSlice();
  }
  ptr->saveFitsPad(str,cnt,'\0');
}

void Base::saveFitsMosaicImage(OutFitsStream& str)
{
  FitsImage* ptr = currentContext->fits;
  if (!ptr)
    return;

  int dd = currentContext->naxis(2);
  ptr->saveFitsPrimHeader(str);
  while (ptr) {
    ptr->saveFitsXtHeader(str,dd);
    size_t cnt =0;
    FitsImage* sptr = ptr;
    while (sptr) {
      cnt += sptr->saveFits(str);
      sptr = sptr->nextSlice();
    }
    ptr->saveFitsPad(str,cnt,'\0');
    ptr = ptr->nextMosaic();
  }
}

void FrameRGB::saveFitsRGBImage(OutFitsStream& str)
{
  FitsImage* ptr = keyContext->fits;
  if (!ptr) 
    return;

  // fake primary header
  ptr->saveFitsPrimHeader(str);
  for (int ii=0; ii<3; ii++) {
    if (context[ii].fits) {
      context[ii].fits->saveFitsXtHeader(str,1);
      size_t cnt = context[ii].fits->saveFits(str);
      context[ii].fits->saveFitsPad(str,cnt,'\0');
    }
  }
}

void FrameRGB::saveFitsRGBCube(OutFitsStream& str)
{
  FitsImage* ptr = keyContext->fits;
  if (!ptr)
    return;

  int ss =0;
  for (int ii=0; ii<3; ii++)
    if (context[ii].fits)
      ss++;
  ptr->saveFitsHeader(str,ss);

  size_t cnt =0;
  for (int ii=0; ii<3; ii++)
    if (context[ii].fits)
      cnt += context[ii].fits->saveFits(str);

  ptr->saveFitsPad(str,cnt,'\0');
}

void Base::saveArray(OutFitsStream& str, FitsFile::ArchType endian)
{
  FitsImage* ptr = currentContext->fits;
  if (!ptr)
    return;

  // set endian if needed
  if (endian == FitsFile::NATIVE) {
    if (lsb())
      endian = FitsFile::LITTLE;
    else
      endian = FitsFile::BIG;
  }

  // dump each slice
  while (ptr) {
    ptr->saveArray(str,endian);
    ptr = ptr->nextSlice();
  }
}

void FrameRGB::saveArrayRGBCube(OutFitsStream& str, FitsFile::ArchType endian)
{
  FitsImage* ptr = keyContext->fits;
  if (!ptr)
    return;

  // set endian if needed
  if (endian == FitsFile::NATIVE) {
    if (lsb())
      endian = FitsFile::LITTLE;
    else
      endian = FitsFile::BIG;
  }

  for (int ii=0; ii<3; ii++)
    if (context[ii].fits)
      context[ii].fits->saveArray(str,endian);
}

void Base::saveNRRD(OutFitsStream& str, FitsFile::ArchType endian)
{
  FitsImage* ptr = currentContext->fits;
  if (!ptr)
    return;

  // set endian if needed
  if (endian == FitsFile::NATIVE) {
    if (lsb())
      endian = FitsFile::LITTLE;
    else
      endian = FitsFile::BIG;
  }

  // dump header
  ostringstream hstr;
  hstr << "NRRD0002" << endl;
  if (currentContext->naxis(2)>1) {
    hstr << "dimension: 3" << endl;
    hstr << "sizes: " << ptr->naxis(0) << ' ' << ptr->naxis(1) << ' '
	 << currentContext->naxis(2) << endl;
  }
  else {
    hstr << "dimension: 2" << endl;
    hstr << "sizes: " << ptr->naxis(0) << ' ' << ptr->naxis(1) << endl;
  }
  switch (ptr->bitpix()) {
  case 8:
    hstr << "type: char" << endl;
    break;
  case 16:
    hstr << "type: short" << endl;
    break;
  case 32:
    hstr << "type: int" << endl;
    break;
  case 64:
    hstr << "type: longlong" << endl;
    break;
  case -32:
    hstr << "type: float" << endl;
    break;
  case -64:
    hstr << "type: double" << endl;
    break;
  }
  if (abs(ptr->bitpix()) > 8) {
    switch (endian) {
    case FitsFile::LITTLE:
      hstr << "endian: little" << endl;
      break;
    case FitsFile::BIG:
      hstr << "endian: big" << endl;
      break;
    default:
      // na
      break;
    }
  }
  hstr << "encoding: raw" << endl;
  // very important
  hstr << endl << ends;

  str.write((char*)hstr.str().c_str(),hstr.str().length());

  // now dump each slice
  while (ptr) {
    ptr->saveArray(str,endian);
    ptr = ptr->nextSlice();
  }
}

void Base::saveENVI(ostream& hstr, OutFitsStream& fstr, 
		    FitsFile::ArchType endian)
{
  FitsImage* ptr = currentContext->fits;
  if (!ptr) 
    return;

  // set endian if needed
  if (endian == FitsFile::NATIVE) {
    if (lsb())
      endian = FitsFile::LITTLE;
    else
      endian = FitsFile::BIG;
  }

  // header
  hstr << "ENVI" << endl;
  hstr << "description = {}" << endl;
  hstr << "samples = " << ptr->naxis(0) << endl;
  hstr << "lines = " << ptr->naxis(1) << endl;
  if (currentContext->naxis(2)>1) {
    hstr << "bands = " << currentContext->naxis(2) << endl;
  }
  hstr << "header offset = 0" << endl;
  hstr << "file type = ENVI Standard" << endl;
  hstr << "data type = ";
  switch (ptr->bitpix()) {
  case 8:
    hstr << "1" << endl;
    break;
  case 16:
    hstr << "2" << endl;
    break;
  case -16:
    hstr << "12" << endl;
    break;
  case 32:
    hstr << "3" << endl;
    break;
  case 64:
    hstr << "14" << endl;
    break;
  case -32:
    hstr << "4" << endl;
    break;
  case -64:
    hstr << "5" << endl;
    break;
  }
  hstr << "interleave = bsq" << endl;
  hstr << "byte order = ";
  switch (endian) {
  case FitsFile::LITTLE:
    hstr << "0" << endl;
    break;
  case FitsFile::BIG:
    hstr << "1" << endl;
    break;
  default:
    // na
    break;
  }
  
  // now dump each slice
  while (ptr) {
    ptr->saveArray(fstr,endian);
    ptr = ptr->nextSlice();
  }
}

void FrameBase::saveFitsResample(OutFitsStream& str)
{
  int& width = options->width;
  int& height = options->height;

  int bitpix_ = -32;
  int datapixels_ = width*height;
  int realbytes_ = datapixels_ * (abs(bitpix_)/8);
  int datablocks_ = (realbytes_ + (FTY_BLOCK-1))/FTY_BLOCK;
  int databytes_ = datablocks_ * FTY_BLOCK;

  // create header
  FitsHead hd(width, height, 1, bitpix_);

  // write keywords
  saveFitsResampleKeyword(str, hd);

  // write header
  str.write(hd.cards(), hd.headbytes());

  // write data
  saveFitsResampleFits(str);

  // pad rest of block
  {
    int diff = databytes_ - realbytes_;
    char buf[diff];
    memset(buf,'\0',diff);
    str.write(buf, diff);
  }
}

void FrameBase::saveFitsResampleKeyword(OutFitsStream& str, FitsHead& dst)
{
  FitsHead* src = currentContext->fits->head();
  Vector center = Vector(options->width, options->height)/2.;

  // OBJECT
  char* object = src->getString("OBJECT");
  if (object)
    dst.appendString("OBJECT", object, NULL);

  // DATE-OBS
  char* date = src->getString("DATE");
  if (date)
    dst.appendString("DATE", date, NULL);

  char* dateobs = src->getString("DATE-OBS");
  if (dateobs)
    dst.appendString("DATE-OBS", dateobs, NULL);

  char* timeobs = src->getString("TIME-OBS");
  if (timeobs)
    dst.appendString("TIME-OBS", timeobs, NULL);

  char* dateend = src->getString("DATE-END");
  if (dateend)
    dst.appendString("DATE-END", dateend, NULL);

  char* timeend = src->getString("TIME-END");
  if (timeend)
    dst.appendString("TIME-END", timeend, NULL);

  // LTMV,DTMV
  if (!isMosaic()) {
    if (currentContext->fits->hasLTMV()) {
      Matrix ltmv = currentContext->fits->physicalToRef * refToWidget *
	Translate(-center) *
	Translate(1,0) *
	FlipY() *
	Translate(center);

      dst.appendReal("LTM1_1", ltmv[0][0], 9, NULL);
      dst.appendReal("LTM1_2", ltmv[0][1], 9, NULL);
      dst.appendReal("LTM2_1", ltmv[1][0], 9, NULL);
      dst.appendReal("LTM2_2", ltmv[1][1], 9, NULL);
      dst.appendReal("LTV1",   ltmv[2][0], 9, NULL);
      dst.appendReal("LTV2",   ltmv[2][1], 9, NULL);
    }
  }
  else {
    if (currentContext->fits->hasDTMV()) {
      Matrix dtmv = currentContext->fits->detectorToRef * refToWidget *
	Translate(-center) *
	Translate(1,0) *
	FlipY() *
	Translate(center);

      dst.appendReal("DTM1_1", dtmv[0][0], 9, NULL);
      dst.appendReal("DTM1_2", dtmv[0][1], 9, NULL);
      dst.appendReal("DTM2_1", dtmv[1][0], 9, NULL);
      dst.appendReal("DTM2_2", dtmv[1][1], 9, NULL);
      dst.appendReal("DTV1",   dtmv[2][0], 9, NULL);
      dst.appendReal("DTV2",   dtmv[2][1], 9, NULL);
    }
  }

  // WCS
  if (currentContext->fits->hasWCS(Coord::WCS)) {
#ifndef NEWWCS
    WorldCoor* wcs = currentContext->fits->getWCS(Coord::WCS);

    // abort if this is a DSS, ZPN, TNX
    if (!strncmp(wcs->ptype,"DSS",3) ||
	!strncmp(wcs->ptype,"ZPN",3) ||
	!strncmp(wcs->ptype,"TNX",3))
      return;

    dst.appendString("RADESYS", wcs->radecsys, NULL);
    dst.appendReal("EQUINOX", wcs->equinox, 9, NULL);

    dst.appendString("CTYPE1", wcs->ctype[0], NULL);
    dst.appendString("CTYPE2", wcs->ctype[1], NULL);
    dst.appendReal("CRVAL1", wcs->crval[0], 9, NULL);
    dst.appendReal("CRVAL2", wcs->crval[1], 9, NULL);

    char* cunit1 = src->getString("CUNIT1");
    if (cunit1)
      dst.appendString("CUNIT1", cunit1, NULL);

    char* cunit2 = src->getString("CUNIT2");
    if (cunit2)
      dst.appendString("CUNIT2", cunit2, NULL);

    // crpix
    Vector crpix = Vector(wcs->crpix[0],wcs->crpix[1]) * 
      currentContext->fits->imageToWidget *
      Translate(-center) *
      Translate(1,0) *
      FlipY() *
      Translate(center);

    dst.appendReal("CRPIX1", crpix[0], 9, NULL);
    dst.appendReal("CRPIX2", crpix[1], 9, NULL);

    // cd matrix
    Matrix cd = Matrix(wcs->cd[0],wcs->cd[1],wcs->cd[2],wcs->cd[3],0,0) *
      currentContext->fits->imageToRef * refToUser *
      wcsOrientationMatrix *
      Rotate(wcsRotation) *
      orientationMatrix *
      Scale(zoom_.invert()) *
      Rotate(rotation) *
      Translate(center) *
      Translate(-center) *
      Translate(1,0) *
      FlipY() * 
      Translate(center);

    dst.appendReal("CD1_1", cd.matrix(0,0), 9, NULL);
    dst.appendReal("CD1_2", cd.matrix(0,1), 9, NULL);
    dst.appendReal("CD2_1", cd.matrix(1,0), 9, NULL);
    dst.appendReal("CD2_2", cd.matrix(1,1), 9, NULL);
#else

    if (src->find("RADESYS"))
      dst.appendString("RADESYS", src->getString("RADESYS"), NULL);
    if (src->find("EQUINOX"))
      dst.appendReal("EQUINOX", src->getReal("EQUINOX",2000), 9, NULL);
    if (src->find("CTYPE1"))
      dst.appendString("CTYPE1", src->getString("CTYPE1"), NULL);
    if (src->find("CTYPE2"))
      dst.appendString("CTYPE2", src->getString("CTYPE2"), NULL);
    if (src->find("CRVAL1"))
      dst.appendReal("CRVAL1", src->getReal("CRVAL1",1), 9, NULL);
    if (src->find("CRVAL2"))
      dst.appendReal("CRVAL2", src->getReal("CRVAL2",1), 9, NULL);
    if (src->find("CUNIT1"))
      dst.appendString("CUNIT1", src->getString("CUNIT1"), NULL);
    if (src->find("CUNIT2"))
      dst.appendString("CUNIT2", src->getString("CUNIT2"), NULL);

#endif
  }
}

void FrameBase::saveFitsResampleFits(OutFitsStream& str)
{
  int& width = options->width;
  int& height = options->height;

  // basics
  FitsImage* sptr = currentContext->fits;
  int mosaic = isMosaic();

  // variable
  double* mm = sptr->matrixToData(Coord::WIDGET).mm();
  FitsBound* params = sptr->getDataParams(currentContext->secMode());
  int srcw = sptr->width();

  // main loop

  SETSIGBUS
  for (int jj=height-1; jj>=0; jj--) {
    for (int ii=0; ii<width; ii++) {

      if (mosaic) {
	sptr = currentContext->fits;

	mm = sptr->matrixToData(Coord::WIDGET).mm();
	params = sptr->getDataParams(currentContext->secMode());
	srcw = sptr->width();
      }

      float v = NAN;

      do {
	double xx = ii*mm[0] + jj*mm[3] + mm[6];
	double yy = ii*mm[1] + jj*mm[4] + mm[7];

	if (xx>=params->xmin && xx<params->xmax && 
	    yy>=params->ymin && yy<params->ymax) {

	  v = sptr->getValueFloat(long(yy)*srcw + long(xx));

	  break;
	}
	else {
	  if (mosaic) {
	    sptr = sptr->nextMosaic();

	    if (sptr) {
	      mm = sptr->matrixToData(Coord::WIDGET).mm();
	      params = sptr->getDataParams(currentContext->secMode());
	      srcw = sptr->width();
	    }
	  }
	}
      }
      while (mosaic && sptr);

      if (lsb())
	str.writeSwap((char*)(&v), 4, -32);
      else
	str.write((char*)(&v), 4);
    }
  }
  CLEARSIGBUS
}
