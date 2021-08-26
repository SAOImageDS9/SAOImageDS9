// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <fstream>

#include "util.h"
#include "colorbar.h"
#include "ps.h"
#include "psutil.h"

#include "lut.h"
#include "sao.h"
#include "default.h"

Colorbar::Colorbar(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item) 
  : ColorbarBase(i,c,item)
{
  cmapid_ =1;
  ctagid_ =1;

  bias = .5;
  contrast = 1.0;

  tag =NULL;
  tagaction =NONE;
  taginit =0;
}

Colorbar::~Colorbar()
{
}

int Colorbar::calcContrastBias(int i)
{
  // if default (contrast = 1.0 && bias = .5) return
  if (fabs(bias - 0.5) < 0.0001 && fabs(contrast - 1.0) < 0.0001)
    return i;
  
  // map i to range of 0 to 1.0
  // shift by bias (if invert, bias = 1-bias)
  // multiply by contrast
  // shift to center of region
  // expand back to number of dynamic colors
  float b = invert ? 1-bias : bias;
  int r = (int)(((((float)i / colorCount) - b) * contrast + .5 ) * colorCount);

  // clip to bounds if out of range
  if (r < 0)
    return 0;
  else if (r >= colorCount)
    return colorCount-1;
  else
    return r;
}

void Colorbar::loadDefaultCMaps()
{
  cmaps.append(new GreyColorMap(this));
  cmaps.append(new RedColorMap(this));
  cmaps.append(new GreenColorMap(this));
  cmaps.append(new BlueColorMap(this));
  cmaps.append(new AColorMap(this));
  cmaps.append(new BColorMap(this));
  cmaps.append(new BBColorMap(this));
  cmaps.append(new HEColorMap(this));
  cmaps.append(new I8ColorMap(this));
  cmaps.append(new AIPSColorMap(this));
  cmaps.append(new SLSColorMap(this));
  cmaps.append(new HSVColorMap(this));
  cmaps.append(new HeatColorMap(this));
  cmaps.append(new CoolColorMap(this));
  cmaps.append(new RainbowColorMap(this));
  cmaps.append(new StandardColorMap(this));
  cmaps.append(new StaircaseColorMap(this));
  cmaps.append(new ColorColorMap(this));

  cmaps.head();
}

ColorMapInfo* Colorbar::newColorMap(const char* fn, const char* type)
{
  // determine colormap type
  char* tmp = dupstr(fn);      // tmp memory, we will mangle it
  char* ptr = tmp;
  while (*ptr++);              // walk forward till end of string
  ptr--;                       // backup one
  while (ptr != tmp && *ptr != '.')  // march backward looking for '.'
    ptr--;
  if (ptr != tmp) {            // are we at '.' or start of string
    *ptr = '\0';               // mark end of string at '.'
    ptr++;
  }

  // Create ColorMap
  ColorMapInfo* map = NULL;

  // if type specified, use it, otherwise, use file extension
  if (type)
    ptr = (char*)type;

  if (strncmp(ptr, "lut", 3) == 0)
    map = new LUTColorMap(this);
  else
    map = new SAOColorMap(this);

  // Bail out if we don't have a new ColorMap
  if (!map)
    return NULL;

  // Extract a name from the file name. Any extension has already been removed.
  ptr = tmp;
  while (*ptr++);           // walk forward till end of string
  while (ptr != tmp && *ptr != '/')  // march backward looking for '/'
    ptr--;
  if (ptr != tmp)           // see if we found '/' or at begining of string
    ptr++;

  map->setName(ptr);
  map->setFileName(fn);

  delete [] tmp;               // clean up
  return map;
}

void Colorbar::psHorz(ostream& str, Filter& filter, int width, int height)
{
  for (int jj=0; jj<height; jj++) {
    for (int ii=0; ii<width; ii++) {
      int kk = (int)(double(ii)/width*colorCount)*3;
      unsigned char red = colorCells[kk+2];
      unsigned char green = colorCells[kk+1];
      unsigned char blue = colorCells[kk];

      switch (psColorSpace) {
      case BW:
      case GRAY:
	filter << RGB2Gray(red, green, blue);
	break;
      case RGB:
	filter << red << green << blue;
	break;
      case CMYK:
	{
	  unsigned char cyan, magenta, yellow, black;
	  RGB2CMYK(red, green, blue, &cyan, &magenta, &yellow, &black);
	  filter << cyan << magenta << yellow << black;
	}
	break;
      }
      str << filter;
    }
  }
}

void Colorbar::psVert(ostream& str, Filter& filter, int width, int height)
{
  for (int jj=0; jj<height; jj++) {
    int kk = (int)(double(jj)/height*colorCount)*3;
    unsigned char red = colorCells[kk+2];
    unsigned char green = colorCells[kk+1];
    unsigned char blue = colorCells[kk];

    switch (psColorSpace) {
    case BW:
    case GRAY:
      for (int ii=0; ii<width; ii++)
	filter << RGB2Gray(red, green, blue);
      break;
    case RGB:
      for (int ii=0; ii<width; ii++)
	filter << red << green << blue;
      break;
    case CMYK:
      for (int ii=0; ii<width; ii++) {
	unsigned char cyan, magenta, yellow, black;
	RGB2CMYK(red, green, blue, &cyan, &magenta, &yellow, &black);
	filter << cyan << magenta << yellow << black;
      }
      break;
    }
    str << filter;
  }
}

void Colorbar::reset()
{
  bias = 0.5;
  contrast = 1.0;
  invert = 0;

  updateColors();
}

void Colorbar::updateColorCells()
{
  int clrs = (((ColorbarBaseOptions*)options)->colors);
  if (clrs != colorCount) {
    colorCount = clrs;
    if (colorCells)
      delete [] colorCells;
    colorCells = new unsigned char[colorCount*3];
  }

  // fill rgb table
  // note: its filled bgr to match XImage

  if (cmaps.current())
    for(int i=0, j=colorCount-1; i<colorCount; i++, j--) {
      int index = invert ? calcContrastBias(j) : calcContrastBias(i);
      colorCells[i*3] = cmaps.current()->getBlueChar(index, colorCount);
      colorCells[i*3+1] = cmaps.current()->getGreenChar(index, colorCount);
      colorCells[i*3+2] = cmaps.current()->getRedChar(index, colorCount);
    }

  ctags.head();
  while (ctags.current()) {
    for (int ii=ctags.current()->start(); ii<ctags.current()->stop(); ii++) {
      colorCells[ii*3] = ctags.current()->colorBlue();
      colorCells[ii*3+1] = ctags.current()->colorGreen();
      colorCells[ii*3+2] = ctags.current()->colorRed();
    }
    ctags.next();
  }
}

// Commands

void Colorbar::adjustCmd(float c, float b)
{
  contrast = c;
  bias = b;
  updateColors();
}

void Colorbar::getBiasCmd()
{
  ostringstream str;
  str << bias << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Colorbar::getColorbarCmd()
{
  if (cmaps.current()) {
    ostringstream str;
    str << cmaps.current()->id() << ' '
      << bias << ' ' 
      << contrast << ' ' 
      << invert << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  }
  else
    result = TCL_ERROR;
}

void Colorbar::getColormapCmd()
{
  if (cmaps.current()) {
    ostringstream str;
    str << cmaps.current()->id() << ' '
	<< bias << ' ' 
	<< contrast << ' ' 
	<< invert << ' '
	<< (unsigned short*)colorCells << ' '
	<< colorCount << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  }
  else
    result = TCL_ERROR;
}

void Colorbar::getColormapNameCmd(int id)
{
  ColorMapInfo* ptr = cmaps.begin();
  while (ptr) {
    if (ptr->id() == id) {
      Tcl_AppendResult(interp, (char*)ptr->name(), NULL);
      return;
    }
    ptr = ptr->next();
  }

  // if we got this far, we did not find it, bail out
  Tcl_AppendResult(interp, " colormap not found.", NULL);
  result = TCL_ERROR;
}

void Colorbar::getColormapFileNameCmd(int id)
{
  ColorMapInfo* ptr = cmaps.begin();
  while (ptr) {
    if (ptr->id() == id) {
      Tcl_AppendResult(interp, (char*)ptr->filename(), NULL);
      return;
    }
    ptr = ptr->next();
  }

  // if we got this far, we did not find it, bail out
  Tcl_AppendResult(interp, " colormap not found.", NULL);
  result = TCL_ERROR;
}

void Colorbar::getColormapFileNameCmd(const char* str)
{
  ColorMapInfo* ptr = cmaps.begin();
  while (ptr) {
    if (!strcmp(ptr->name(),str)) {
      Tcl_AppendResult(interp, (char*)ptr->filename(), NULL);
      return;
    }
    ptr = ptr->next();
  }

  // if we got this far, we did not find it, bail out
  Tcl_AppendResult(interp, " colormap not found.", NULL);
  result = TCL_ERROR;
}

void Colorbar::getContrastCmd()
{
  ostringstream str;
  str << contrast << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Colorbar::getCurrentIDCmd()
{
  if (cmaps.current()) {
    ostringstream str;
    str << cmaps.current()->id() << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
  }
  else
    result = TCL_ERROR;
}

void Colorbar::getCurrentNameCmd()
{
  if (cmaps.current())
    Tcl_AppendElement(interp, (char*)cmaps.current()->name());
  else
    result = TCL_ERROR;
}

void Colorbar::getCurrentFileNameCmd()
{
  if (cmaps.current())
    Tcl_AppendElement(interp, (char*)cmaps.current()->filename());
  else
    result = TCL_ERROR;
}

void Colorbar::getTagCmd()
{
  ostringstream str;
  ctags.head();
  while (ctags.current()) {
    str << ctags.current()->start() << ' ' 
	<< ctags.current()->stop() << ' '
	<< ctags.current()->colorname() << ' ';
    ctags.next();
  }
  str << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Colorbar::getTagCmd(int xx, int yy)
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  int rr,ss;
  if (!opts->orientation) {
    rr = xx;
    ss = float(rr)/opts->width * colorCount;
  }
  else {
    rr = yy;
    ss = (1-float(rr)/opts->height) * colorCount;
  }

  ctags.head();
  while (ctags.current()) {
    if (ss>ctags.current()->start() && ss<ctags.current()->stop()) {
      int startid = float(ctags.current()->start())/colorCount * cnt;
      int stopid = float(ctags.current()->stop())/colorCount * cnt;
      if (startid<0)
	startid = 0;
      if (startid>=cnt)
	startid = cnt-1;
      if (stopid<0)
	stopid = 0;
      if (stopid>=cnt)
	stopid = cnt-1;

      ostringstream str;
      str << ctags.current()->id() << ' ' 
	  << lut[startid] << ' '
	  << lut[stopid] << ' '
	  << ctags.current()->colorname() << ends;
      Tcl_AppendResult(interp, str.str().c_str(), NULL);
      return;
    }
    ctags.next();
  }
}

void Colorbar::getTypeCmd()
{
  Tcl_AppendResult(interp, "base", NULL);
}

void Colorbar::getRGBChannelCmd()
{
  Tcl_AppendResult(interp, "red", NULL);
}

void Colorbar::listIDCmd()
{

  ColorMapInfo* ptr = cmaps.begin();
  while (ptr) {
    ostringstream str;
    str << ptr->id() << ends;
    Tcl_AppendElement(interp, str.str().c_str());

    ptr = ptr->next();
  }
}

void Colorbar::listNameCmd()
{
  ColorMapInfo* ptr = cmaps.begin();
  while (ptr) {
    Tcl_AppendElement(interp, (char*)ptr->name());
    ptr = ptr->next();
  }
}

void Colorbar::loadCmd(const char* fn, const char* type)
{
  ColorMapInfo* map = newColorMap(fn, type);

  if (map && map->load()) {
    // add new colormap to end of the list
    cmaps.append(map);
    reset();
  }
  else {
    // something has gone wrong, clean up, and bail out
    delete map;
    Tcl_AppendResult(interp, " unable to load colormap: ", fn, NULL);
    result = TCL_ERROR;
  }
}

void Colorbar::loadCmd(const char* fn, const char* type, const char* var)
{
  ColorMapInfo* map = newColorMap(fn, type);

  if (map && map->load(var)) {
    // add new colormap to end of the list
    cmaps.append(map);
    reset();
  }
  else {
    // something has gone wrong, clean up, and bail out
    delete map;
    Tcl_AppendResult(interp, " unable to load colormap: ", fn, NULL);
    result = TCL_ERROR;
  }
}

void Colorbar::mapCmd(char* which)
{
  char* a = toLower(which);
  cmaps.head();
  do {
    char* b = toLower(cmaps.current()->name());
    if (!strcmp(a,b)) {
      reset();
      delete [] a;
      delete [] b;
      return;
    }
    delete [] b;
  }
  while (cmaps.next());

  // if we got this far, we did not find it, bail out
  cmaps.head();
  delete [] a;
  result = TCL_ERROR;
}

void Colorbar::mapCmd(int id)
{
  cmaps.head();
  do {
    if (cmaps.current()->id() == id) {
      reset();
      return;
    }
  }
  while (cmaps.next());

  // if we got this far, we did not find it, bail out
  cmaps.head();
  result = TCL_ERROR;
}

void Colorbar::saveCmd(const char* fn)
{
  if (!cmaps.current()->save(fn)) {
    Tcl_AppendResult(interp, " unable to save colormap: ", fn, NULL);
    result = TCL_ERROR;
  }
}

void Colorbar::saveCmd(int id, const char* fn)
{
  ColorMapInfo* ptr = cmaps.begin();
  while (ptr) {
    if (ptr->id() == id) {
      if (!ptr->save(fn)) {
	Tcl_AppendResult(interp, " unable to save colormap: ", fn, NULL);
	result = TCL_ERROR;
      }
      return;
    }
    ptr = ptr->next();
  }

  Tcl_AppendResult(interp, " unable to save colormap: ", fn, NULL);
  result = TCL_ERROR;
}

void Colorbar::saveCmd(const char* cmap, const char* fn)
{
  ColorMapInfo* ptr = cmaps.begin();
  while (ptr) {
    if (!strcmp(ptr->name(),cmap)) {
      if (!ptr->save(fn)) {
	Tcl_AppendResult(interp, " unable to save colormap: ", fn, NULL);
	result = TCL_ERROR;
      }
      return;
    }
    ptr = ptr->next();
  }

  Tcl_AppendResult(interp, " unable to save colormap: ", fn, NULL);
  result = TCL_ERROR;
}

void Colorbar::saveVarCmd(const char* cmap, const char* var)
{
  ColorMapInfo* ptr = cmaps.begin();
  while (ptr) {
    if (!strcmp(ptr->name(),cmap)) {
      if (!ptr->saveVar(var)) {
	Tcl_AppendResult(interp, " unable to save colormap: ", var, NULL);
	result = TCL_ERROR;
      }
      return;
    }
    ptr = ptr->next();
  }

  Tcl_AppendResult(interp, " unable to save colormap: ", var, NULL);
  result = TCL_ERROR;
}

void Colorbar::setColorbarCmd(int id, float b, float c, int i)
{
  cmaps.head();
  while (cmaps.current()) {
    if (cmaps.current()->id() == id) {
      bias = b;
      contrast = c;
      invert = i;
      updateColors();
      return;
    }
    cmaps.next();
  }

  // if we got this far, we did not find it, bail out
  cmaps.head();
  result = TCL_ERROR;
}

void Colorbar::tagCmd(const char* txt)
{
  ctags.deleteAll();

  istringstream str(txt);
  while (!str.eof()) {
    int aa =0;
    int bb =0;
    char color[32];
    *color ='\0';

    str >> aa >> bb >> color;

    if (aa && bb && *color)
      ctags.append(new ColorTag(this,aa,bb,color));
  }
  updateColors();
}

void Colorbar::tagCmd(int id, const Vector& v, const char* color)
{
  Vector vv = v;
  int mm=0;
  int nn=0;
  ctags.head();
  while (ctags.current()) {
    if (ctags.current()->id() == id) {
      // special case
      if (vv[0]>lut[cnt-1] && vv[1]>lut[cnt-1])
	return;
      else if (vv[0]<lut[0] && vv[1]<lut[0])
	return;

      mm =0;
      for (int ii=0; ii<cnt; ii++)
	if (vv[0]<lut[ii]) {
	  mm=ii;
	  break;
	}
      nn =cnt-1;
      for (int ii=cnt-1; ii>=0; ii--)
	if (vv[1]>lut[ii]) {
	  nn=ii;
	  break;
	}

      Vector rr = Vector(mm,nn)/cnt*colorCount;
      ctags.current()->set(rr[0],rr[1],color);
      updateColors();
      return;
    }
    ctags.next();
  }
}

void Colorbar::tagDeleteCmd()
{
  ctags.deleteAll();
  updateColors();
}

void Colorbar::tagDeleteCmd(int xx, int yy)
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  int rr,ss;
  if (!opts->orientation) {
    rr = xx;
    ss = float(rr)/opts->width * colorCount;
  }
  else {
    rr = yy;
    ss = (1-float(rr)/opts->height) * colorCount;
  }

  ctags.head();
  while (ctags.current()) {
    if (ss>ctags.current()->start() && ss<ctags.current()->stop()) {
      ColorTag* ct = ctags.extract();
      if (ct)
	delete ct;

      updateColors();
      return;
    }
    ctags.next();
  }
}

void Colorbar::tagEditBeginCmd(int xx, int yy, const char* color)
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  tag= NULL;
  tagaction =NONE;
  taginit =0;

  int rr,ss;
  if (!opts->orientation) {
    rr = xx;
    ss = float(rr)/opts->width * colorCount;
  }
  else {
    rr = yy;
    ss = (1-float(rr)/opts->height) * colorCount;
  }

  ctags.head();
  while (ctags.current()) {
    int start = ctags.current()->start();
    int stop = ctags.current()->stop();
    if (ss>start && ss<stop) {
      if (ss>stop-10 && ss<stop) {
	tagaction =STOP;
      }
      else if (ss>start && ss<start+10) {
	tagaction =START;
      }
      else {
	tagaction =MOVE;
      }
      tag = ctags.current();
      taginit =rr;
      return;
    }
    ctags.next();
  }

  // else create a new tag
  ctags.append(new ColorTag(this,ss,ss,color));
  tag = ctags.current();
  tagaction =CREATE;
  taginit =rr;
}

void Colorbar::tagEditMotionCmd(int xx, int yy)
{
  ColorbarBaseOptions* opts = (ColorbarBaseOptions*)options;

  if (tag) {
    int rr,ss,tt;
    if (!opts->orientation) {
      rr = xx;
      ss = float(rr)/opts->width * colorCount;
      tt = float(taginit)/opts->width *colorCount;
    }
    else {
      rr = yy;
      ss = (1-float(rr)/opts->height) * colorCount;
      tt = (1-float(taginit)/opts->height) *colorCount;
    }

    switch (tagaction) {
    case NONE:
      break;
    case CREATE:
      tagaction =STOP;
      tag->move(0,ss-tt);
      break;
    case START:
      tag->move(ss-tt,0);
      break;
    case STOP:
      tag->move(0,ss-tt);
      break;
    case MOVE:
      tag->move(ss-tt,ss-tt);
      break;
    }
    taginit = rr;

    updateColors();
  }
}

void Colorbar::tagEditEndCmd(int xx, int yy)
{
  if (tag) {
    switch (tagaction) {
    case NONE:
      break;
    case CREATE:
      tag->width(100);
      break;
    case START:
      break;
    case STOP:
      break;
    case MOVE:
      break;
    }

    updateColors();
  }
}

void Colorbar::tagLoadCmd(const char* fn)
{
  ifstream str(fn);

  if (!str) {
    Tcl_AppendResult(interp, " unable to load color tags: ", fn, NULL);
    result = TCL_ERROR;
    return;
  }

  ctags.deleteAll();

  while (!str.eof()) {
    int mm=0;
    int nn=0;
    double aa =0;
    double bb =0;
    char color[32];
    *color ='\0';

    str >> aa >> bb >> color;

    if (aa && bb && *color) {
      // special case
      if (aa>lut[cnt-1] && bb>lut[cnt-1])
	continue;
      else if (aa<lut[0] && bb<lut[0])
	continue;

      mm =0;
      for (int ii=0; ii<cnt; ii++)
	if (aa<lut[ii]) {
	  mm=ii;
	  break;
	}
      nn =cnt-1;
      for (int ii=cnt-1; ii>=0; ii--)
	if (bb>lut[ii]) {
	  nn=ii;
	  break;
	}

      Vector rr = Vector(mm,nn)/cnt*colorCount;
      ctags.append(new ColorTag(this,rr[0],rr[1],color));
    }
  }

  updateColors();
}

void Colorbar::tagSaveCmd(const char* fn)
{
  ofstream str(fn);

  if (!str) {
    Tcl_AppendResult(interp, " unable to save color tags: ", fn, NULL);
    result = TCL_ERROR;
    return;
  }

  ctags.head();
  while (ctags.current()) {
    int startid = float(ctags.current()->start())/colorCount * cnt;
    int stopid = float(ctags.current()->stop())/colorCount * cnt;
    if (startid<0)
      startid = 0;
    if (startid>=cnt)
      startid = cnt-1;
    if (stopid<0)
      stopid = 0;
    if (stopid>=cnt)
      stopid = cnt-1;

    str << lut[startid] << ' ' << lut[stopid] << ' '
	<< ctags.current()->colorname() << endl;
    ctags.next();
  }
}

#ifdef MAC_OSX_TK

void Colorbar::macosx(float scale, int width, int height, 
		      const Vector& v, const Vector& s)
{
  /*
  if (!colorCells)
    return;

  // destination
  unsigned char* dst = new unsigned char[width*height*4];
  unsigned char* dptr = dst;

  if (!((ColorbarBaseOptions*)options)->orientation) {
    for (int jj=0; jj<height; jj++)
      for (int ii=0; ii<width; ii++) {
	int kk = (int)(double(ii)/width*colorCount)*3;
	*dptr++ = colorCells[kk+2];
	*dptr++ = colorCells[kk+1];
	*dptr++ = colorCells[kk];
	*dptr++ = 0;
      }
  }
  else {
    for (int jj=0; jj<height; jj++) {
      int kk = (int)(double(jj)/height*colorCount)*3;
      unsigned char rr = colorCells[kk+2];
      unsigned char gg = colorCells[kk+1];
      unsigned char bb = colorCells[kk];
      for (int ii=0; ii<width; ii++) {
	*dptr++ = rr;
	*dptr++ = gg;
	*dptr++ = bb;
	*dptr++ = 0;
      }
    }
  }

  macosxBitmapCreate(dst, width, height, v, s);

  if (dst)
    delete [] dst;
  */
}
#endif

#ifdef __WIN32
#include <win32lib.h>

void Colorbar::win32(float scale, int width, int height, 
		      const Vector& v, const Vector& s)
{
  if (!colorCells)
    return;

  // destination (width must be aligned on 4-byte DWORD boundary)
  int jjwidth=(((width+3)/4)*4);

  // extra alignment padding which we have to skip over for each row
  int jjpad=(jjwidth-width)*3;

  unsigned char* dst = new unsigned char[jjwidth*height*3];
  if (!dst)
    return;
  memset(dst, '\0', jjwidth*height*3);

  unsigned char* dptr = dst;

  if (!((ColorbarBaseOptions*)options)->orientation) {
    for (int jj=0; jj<height; jj++) {
      for (int ii=0; ii<width; ii++) {
	int kk = (int)(double(ii)/width*colorCount)*3;
	*dptr++ = colorCells[kk];
	*dptr++ = colorCells[kk+1];
	*dptr++ = colorCells[kk+2];
      }
      dptr += jjpad;
    }
  }
  else {
    for (int jj=0; jj<height; jj++) {
      int kk = (int)(double(jj)/height*colorCount)*3;
      unsigned char rr = colorCells[kk];
      unsigned char gg = colorCells[kk+1];
      unsigned char bb = colorCells[kk+2];
      for (int ii=0; ii<width; ii++) {
	*dptr++ = rr;
	*dptr++ = gg;
	*dptr++ = bb;
      }
      dptr += jjpad;
    }
  }

  win32Clip(v,s);
  win32BitmapCreate(dst, jjwidth, height, v, s);
  win32Clip(Vector(INT_MIN,INT_MIN),Vector(INT_MAX,INT_MAX));

  if (dst)
    delete [] dst;
}
#endif
