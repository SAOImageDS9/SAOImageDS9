// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "context.h"
#include "framebase.h"
#include "framergb.h"
#include "fitsimage.h"
#include "outfile.h"
#include "outchannel.h"
#include "outsocket.h"
#include "sigbus.h"
#include "wcsast.h"

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
  hstr << endl;

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

  // center mx
  Matrix cc =
    Translate(-center) *
    Translate(1,0) *
    FlipY() *
    Translate(center);

  // OBJECT
  char* object = src->getString("OBJECT");
  if (object)
    dst.appendString("OBJECT", object, NULL);

  // LTMV
  if (currentContext->fits->hasLTMV()) {
    Matrix ltmv = currentContext->fits->physicalToRef * refToWidget * cc;
    dst.appendReal("LTM1_1", ltmv[0][0], 9, NULL);
    dst.appendReal("LTM1_2", ltmv[0][1], 9, NULL);
    dst.appendReal("LTM2_1", ltmv[1][0], 9, NULL);
    dst.appendReal("LTM2_2", ltmv[1][1], 9, NULL);
    dst.appendReal("LTV1",   ltmv[2][0], 9, NULL);
    dst.appendReal("LTV2",   ltmv[2][1], 9, NULL);
  }

  if (!isMosaic()) {
    if (currentContext->fits->hasATMV()) {
      Matrix dtmv = currentContext->fits->amplifierToRef * refToWidget * cc;
      dst.appendReal("ATM1_1", dtmv[0][0], 9, NULL);
      dst.appendReal("ATM1_2", dtmv[0][1], 9, NULL);
      dst.appendReal("ATM2_1", dtmv[1][0], 9, NULL);
      dst.appendReal("ATM2_2", dtmv[1][1], 9, NULL);
      dst.appendReal("ATV1",   dtmv[2][0], 9, NULL);
      dst.appendReal("ATV2",   dtmv[2][1], 9, NULL);
    }

    if (currentContext->fits->hasDTMV()) {
      Matrix dtmv = currentContext->fits->detectorToRef * refToWidget * cc;
      dst.appendReal("DTM1_1", dtmv[0][0], 9, NULL);
      dst.appendReal("DTM1_2", dtmv[0][1], 9, NULL);
      dst.appendReal("DTM2_1", dtmv[1][0], 9, NULL);
      dst.appendReal("DTM2_2", dtmv[1][1], 9, NULL);
      dst.appendReal("DTV1",   dtmv[2][0], 9, NULL);
      dst.appendReal("DTV2",   dtmv[2][1], 9, NULL);
    }
  }

  // WCS
  astClearStatus; // just to make sure
  astBegin; // start memory management

  // create channel and set encoding
  AstFitsChan* chan = astFitsChan(NULL, NULL, "");
  const char* fitswcs = "FITS-WCS";
  const char* encode = currentContext->fits->encoding_;
  if (!encode || !*encode)
    encode = fitswcs;
  astSet (chan, "Card=1, Encoding=%s", encode);

  // ast
  AstFrameSet* ast = (AstFrameSet*)astCopy(currentContext->fits->ast_);
  Matrix mx = currentContext->fits->imageToRef * refToWidget * cc;
  AstCmpMap* cmp = wcsMatrixMap(ast, mx);
  if (cmp)
    astRemapFrame(ast, AST__BASE, cmp);

  // write to channel
  if (!astWrite(chan, ast)) {
    // try again
    encode = fitswcs;
    astSet (chan, "Card=1, Encoding=%s", encode);
    astWrite(chan, ast);
  }
    
  // dump cards from channel
  astClear(chan, "Card");
  char card[81];
  while (astFindFits(chan, "%f", card, 1))
    dst.cardins(card,NULL);

  astEnd; // now, clean up memory
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
