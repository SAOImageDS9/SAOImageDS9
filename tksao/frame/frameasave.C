// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "framea.h"
#include "util.h"
#include "fitsimage.h"
#include "outfile.h"
#include "outchannel.h"
#include "outsocket.h"

#include "sigbus.h"

void FrameA::saveRGBImage(OutFitsStream& str)
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

void FrameA::saveRGBCube(OutFitsStream& str)
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

void FrameA::saveRGBArrayCube(OutFitsStream& str, FitsFile::ArchType endian)
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

void FrameA::saveRGBImageFileCmd(const char* fn)
{
  if (!keyContext->fits)
    return;

  OutFitsFile str(fn);
  if (str.valid())
    saveRGBImage(str);
}

void FrameA::saveRGBImageChannelCmd(const char* ch)
{
  if (!keyContext->fits)
    return;

  OutFitsChannel str(interp, ch);
  if (str.valid())
    saveRGBImage(str);
}

void FrameA::saveRGBImageSocketCmd(int ss)
{
  if (!keyContext->fits)
    return;

  OutFitsSocket str(ss);
  if (str.valid())
    saveRGBImage(str);
}

void FrameA::saveRGBCubeFileCmd(const char* fn)
{
  if (!keyContext->fits)
    return;

  OutFitsFile str(fn);
  if (str.valid())
    saveRGBCube(str);
}

void FrameA::saveRGBCubeChannelCmd(const char* ch)
{
  if (!keyContext->fits)
    return;

  OutFitsChannel str(interp, ch);
  if (str.valid())
    saveRGBCube(str);
}

void FrameA::saveRGBCubeSocketCmd(int ss)
{
  if (!keyContext->fits)
    return;

  OutFitsSocket str(ss);
  if (str.valid())
    saveRGBCube(str);
}

void FrameA::saveRGBArrayCubeFileCmd(const char* fn, FitsFile::ArchType endian)
{
  if (!keyContext->fits)
    return;

  OutFitsFile str(fn);
  if (str.valid())
    saveRGBArrayCube(str, endian);
}

void FrameA::saveRGBArrayCubeChannelCmd(const char* ch, FitsFile::ArchType endian)
{
  if (!keyContext->fits)
    return;

  OutFitsChannel str(interp, ch);
  if (str.valid())
    saveRGBArrayCube(str, endian);
}

void FrameA::saveRGBArrayCubeSocketCmd(int ss, FitsFile::ArchType endian)
{
  if (!keyContext->fits)
    return;

  OutFitsSocket str(ss);
  if (str.valid())
    saveRGBArrayCube(str, endian);
}


