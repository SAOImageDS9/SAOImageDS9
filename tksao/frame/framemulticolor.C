// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <tkInt.h>

#include "framemulticolor.h"
#include "fitsimage.h"
#include "outfile.h"
#include "util.h"

#include "sigbus.h"

static double max3(double a, double b, double c)
{
  return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

static double min3(double a, double b, double c)
{
  return a < b ? (a < c ? a : c) : (b < c ? b : c);
}

static void rgbToHls(double r, double g, double b,
		     double* h, double* l, double* s)
{
  double mx = max3(r,g,b);
  double mn = min3(r,g,b);
  double diff = mx-mn;

  *l = (mx+mn)/2.;
  if (diff == 0) {
    *h = 0;
    *s = 0;
    return;
  }

  *s = *l <= .5 ? diff/(mx+mn) : diff/(2.-mx-mn);

  if (r == mx)
    *h = (g-b)/diff + (g < b ? 6. : 0.);
  else if (g == mx)
    *h = (b-r)/diff + 2.;
  else
    *h = (r-g)/diff + 4.;

  *h /= 6.;
}

static double hueToRgb(double p, double q, double t)
{
  if (t < 0)
    t += 1;
  if (t > 1)
    t -= 1;
  if (t < 1./6.)
    return p+(q-p)*6.*t;
  if (t < 1./2.)
    return q;
  if (t < 2./3.)
    return p+(q-p)*(2./3.-t)*6.;
  return p;
}

static unsigned char byteFromUnit(double value)
{
  if (value <= 0)
    return 0;
  if (value >= 1)
    return 255;

  return (unsigned char)(value*255. + .5);
}

static void hlsToRgb(double h, double l, double s,
		     unsigned char* r, unsigned char* g, unsigned char* b)
{
  if (s == 0) {
    *r = byteFromUnit(l);
    *g = byteFromUnit(l);
    *b = byteFromUnit(l);
    return;
  }

  double q = l < .5 ? l*(1.+s) : l+s-l*s;
  double p = 2.*l-q;

  *r = byteFromUnit(hueToRgb(p,q,h+1./3.));
  *g = byteFromUnit(hueToRgb(p,q,h));
  *b = byteFromUnit(hueToRgb(p,q,h-1./3.));
}

static int calcContrastBiasIndex(int i, int colorCount, float bias,
				 float contrast, int invert)
{
  if (fabs(bias - 0.5) < 0.0001 && fabs(contrast - 1.0) < 0.0001)
    return i;

  float b = invert ? 1-bias : bias;
  int r = (int)(((((float)i / colorCount) - b) * contrast + .5 ) *
		colorCount);

  if (r < 0)
    return 0;
  else if (r >= colorCount)
    return colorCount-1;
  else
    return r;
}

FrameMultiColor::FrameMultiColor(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item)
  : FrameA(i,c,item,MAXLAYERS)
{
  layerCount = 1;

  layerSlot = new int[contextCount];
  slotUsed = new int[contextCount];
  colorName = new char*[contextCount];
  blend = new FitsMask::MaskBlend[contextCount];
  alpha = new float[contextCount];
  colorScale = new ColorScale*[contextCount];

  for (int ii=0; ii<contextCount; ii++) {
    layerSlot[ii] = ii;
    slotUsed[ii] = ii == 0;
    colorName[ii] = dupstr("red");
    blend[ii] = FitsMask::SCREEN;
    alpha[ii] = 1.0;
    colorScale[ii] = NULL;
    view[ii] = ii == 0;
  }
}

FrameMultiColor::~FrameMultiColor()
{
  if (colorCells)
    delete [] colorCells;

  for (int ii=0; ii<contextCount; ii++) {
    if (colorName[ii])
      delete [] colorName[ii];
    if (colorScale[ii])
      delete colorScale[ii];
  }

  delete [] layerSlot;
  delete [] slotUsed;
  delete [] colorName;
  delete [] blend;
  delete [] alpha;
  delete [] colorScale;
}

int FrameMultiColor::validColorScale()
{
  for (int ii=0; ii<layerCount; ii++) {
    int ss = layerSlot[ii];
    if (view[ss] && context[ss].fits && !colorScale[ss])
      return 0;
  }

  return 1;
}

unsigned char* FrameMultiColor::fillImage(int width, int height,
					  Coord::InternalSystem sys)
{
  if (!validColorScale())
    return NULL;

  unsigned char* img = new unsigned char[width*height*3];
  memset(img,0,width*height*3);

  char* mk = new char[width*height];
  memset(mk,0,width*height);

  SETSIGBUS

  for (int ll=0; ll<layerCount; ll++) {
    int kk = layerSlot[ll];
    if (!view[kk] || !context[kk].fits)
      continue;

    int length = colorScale[kk]->size() - 1;
    const unsigned char* table = colorScale[kk]->psColors();

    FitsImage* sptr = context[kk].cfits;
    int mosaic = context[kk].isMosaic();

    double* mm = sptr->matrixToData(sys).mm();
    FitsBound* params = sptr->getDataParams(context[kk].secMode());
    int srcw = sptr->width();

    double low = sptr->low();
    double high = sptr->high();
    double diff = high - low;

    unsigned char* dest = img;
    char* mkptr = mk;

    for (long jj=0; jj<height; jj++) {
      for (long ii=0; ii<width; ii++, dest+=3, mkptr++) {
	if (mosaic) {
	  sptr = context[kk].cfits;

	  mm = sptr->matrixToData(sys).mm();
	  params = sptr->getDataParams(context[kk].secMode());
	  srcw = sptr->width();

	  low = sptr->low();
	  high = sptr->high();
	  diff = high - low;
	}

	do {
	  double xx = ii*mm[0] + jj*mm[3] + mm[6];
	  double yy = ii*mm[1] + jj*mm[4] + mm[7];

	  if (xx>=params->xmin && xx<params->xmax && 
	      yy>=params->ymin && yy<params->ymax) {
	    double value = sptr->getValueDouble(long(yy)*srcw + long(xx));

	    if (isfinite(diff) && isfinite(value)) {
	      int idx;
	      if (value <= low)
		idx = 0;
	      else if (value >= high)
		idx = length;
	      else
		idx = (int)(((value - low)/diff * length) + .5);

	      const unsigned char* src = table + idx*3;
	      if (*mkptr == 2) {
		unsigned char blended[3];
		FitsMask::blendRGB(src,dest,blended,blend[kk]);
		for (int cc=0; cc<3; cc++)
		  dest[cc] = (unsigned char)(dest[cc]*(1-alpha[kk]) +
					     blended[cc]*alpha[kk]);
	      }
	      else {
		for (int cc=0; cc<3; cc++)
		  dest[cc] = (unsigned char)(dest[cc]*(1-alpha[kk]) +
					     src[cc]*alpha[kk]);
	      }

	      *mkptr = 2;
	    }
	    else if (*mkptr < 2)
	      *mkptr = 1;

	    break;
	  }
	  else {
	    if (mosaic) {
	      sptr = sptr->nextMosaic();

	      if (sptr) {
		mm = sptr->matrixToData(sys).mm();
		params = sptr->getDataParams(context[kk].secMode());
		srcw = sptr->width();

		low = sptr->low();
		high = sptr->high();
		diff = high - low;
	      }
	    }
	  }
	}
	while (mosaic && sptr);
      }
    }
  }

  XColor* bgColor = useBgColor? getXColor(bgColourName) :
    ((WidgetOptions*)options)->bgColor;
  XColor* nanColor = getXColor(nanColourName);

  {
    unsigned char* dest = img;
    char* mkptr = mk;
    for (int jj=0; jj<height; jj++)
      for (int ii=0; ii<width; ii++, dest+=3, mkptr++) {
	if (*mkptr == 2)
	  ;
	else if (*mkptr == 1) {
	  *dest = (unsigned char)nanColor->red;
	  *(dest+1) = (unsigned char)nanColor->green;
	  *(dest+2) = (unsigned char)nanColor->blue;
	}
	else {
	  *dest = (unsigned char)bgColor->red;
	  *(dest+1) = (unsigned char)bgColor->green;
	  *(dest+2) = (unsigned char)bgColor->blue;
	}
      }	
  }
  CLEARSIGBUS

  delete [] mk;

  if (img)
    if (fadeImg && sys == Coord::WIDGET)
      alphaComposite(img,fadeImg,width,height,fadeAlpha);

  return img;
}

void FrameMultiColor::updateColorCells(int cnt)
{
  if (cnt <= 0)
    return;
  
  colorCount = cnt;
  if (colorCells)
    delete [] colorCells;

  colorCells = new unsigned char[cnt*3];
  memset(colorCells,0,cnt*3);

  cellsptr_ = NULL;
  cellsparentptr_ = NULL;
}

void FrameMultiColor::rebuildLayerScale(int ss)
{
  if (!colorCells || ss < 0 || ss >= contextCount)
    return;

  XColor* xc = getXColor(colorName[ss]);
  if (!xc) {
    result = TCL_ERROR;
    return;
  }

  double r = double(xc->red)/65535.;
  double g = double(xc->green)/65535.;
  double b = double(xc->blue)/65535.;
  double h = 0;
  double l = 0;
  double s = 0;
  rgbToHls(r,g,b,&h,&l,&s);

  for (int ii=0, jj=colorCount-1; ii<colorCount; ii++, jj--) {
    int sample = invert ?
      calcContrastBiasIndex(jj,colorCount,bias[ss],contrast[ss],invert) :
      calcContrastBiasIndex(ii,colorCount,bias[ss],contrast[ss],invert);
    float frac = colorCount > 1 ? float(sample)/(colorCount-1) : 1;
    hlsToRgb(h,l*frac,s,
	     colorCells+ii*3, colorCells+ii*3+1, colorCells+ii*3+2);
  }

  if (colorScale[ss])
    delete colorScale[ss];

  switch (context[ss].colorScaleType()) {
  case FrScale::LINEARSCALE:
    colorScale[ss] =
      new LinearScale(colorCount, colorCells, colorCount);
    break;
  case FrScale::LOGSCALE:
    colorScale[ss] =
      new LogScale(SCALESIZE, colorCells, colorCount, context[ss].expo());
    break;
  case FrScale::POWSCALE:
    colorScale[ss] =
      new PowScale(SCALESIZE, colorCells, colorCount, context[ss].expo());
    break;
  case FrScale::SQRTSCALE:
    colorScale[ss] =
      new SqrtScale(SCALESIZE, colorCells, colorCount);
    break;
  case FrScale::SQUAREDSCALE:
    colorScale[ss] =
      new SquaredScale(SCALESIZE, colorCells, colorCount);
    break;
  case FrScale::ASINHSCALE:
    colorScale[ss] =
      new AsinhScale(SCALESIZE, colorCells, colorCount);
    break;
  case FrScale::SINHSCALE:
    colorScale[ss] =
      new SinhScale(SCALESIZE, colorCells, colorCount);
    break;
  case FrScale::HISTEQUSCALE:
    colorScale[ss] =
      new HistEquScale(SCALESIZE, colorCells, colorCount,
		       context[ss].histequ(), HISTEQUSIZE);
    break;
  case FrScale::IISSCALE:
    colorScale[ss] =
      new IISScale(colorCells, colorCount);
    break;
  }
}

void FrameMultiColor::updateColorScale()
{
  if (!colorCells)
    return;

  for (int ii=0; ii<layerCount; ii++)
    rebuildLayerScale(layerSlot[ii]);
}

int FrameMultiColor::logicalLayer(int ss)
{
  for (int ii=0; ii<layerCount; ii++)
    if (layerSlot[ii] == ss)
      return ii;

  return 0;
}

int FrameMultiColor::layerIndex(int layer)
{
  if (layer <= 0)
    return currentLayer();

  if (layer > layerCount)
    layer = layerCount;

  return layer-1;
}

int FrameMultiColor::allocSlot()
{
  for (int ii=0; ii<contextCount; ii++)
    if (!slotUsed[ii])
      return ii;

  return -1;
}

void FrameMultiColor::setLayer(int layer)
{
  int ll = layerIndex(layer);
  channel = layerSlot[ll];
  setChannel();
}

void FrameMultiColor::getColorbarCmd()
{
  Tcl_DString colors;
  Tcl_DString biases;
  Tcl_DString contrasts;
  Tcl_DStringInit(&colors);
  Tcl_DStringInit(&biases);
  Tcl_DStringInit(&contrasts);
  for (int ii=0; ii<layerCount; ii++) {
    int ss = layerSlot[ii];
    Tcl_DStringAppendElement(&colors, colorName[ss]);

    char buf[64];
    snprintf(buf, sizeof(buf), "%g", bias[ss]);
    Tcl_DStringAppendElement(&biases, buf);
    snprintf(buf, sizeof(buf), "%g", contrast[ss]);
    Tcl_DStringAppendElement(&contrasts, buf);
  }

  ostringstream str;

  str << "multicolor " << currentLayer()+1 << ' ' << invert
      << " {" << Tcl_DStringValue(&colors) << "}"
      << " {" << Tcl_DStringValue(&biases) << "}"
      << " {" << Tcl_DStringValue(&contrasts) << "}" << ends;

  Tcl_AppendResult(interp, str.str().c_str(), NULL);
  Tcl_DStringFree(&colors);
  Tcl_DStringFree(&biases);
  Tcl_DStringFree(&contrasts);
}

void FrameMultiColor::getTypeCmd()
{
  Tcl_AppendResult(interp, "multicolor", NULL);
}

void FrameMultiColor::colormapCmd(float rb, float gb, float bb, 
				  float rc, float gc, float bc, int i,
				  int cnt)
{
  bias[channel] = (rb+gb+bb)/3.;
  contrast[channel] = (rc+gc+bc)/3.;
  invert = i;

  updateColorCells(cnt);
  updateColorScale();
  update(BASE);
}

void FrameMultiColor::colormapCmd(int current, int i, const char* colors,
				  const char* biases, const char* contrasts,
				  int cnt)
{
  if (current < 1)
    current = 1;
  if (current > layerCount)
    current = layerCount;
  channel = layerSlot[current-1];

  Tcl_Size argc = 0;
  const char** argv = NULL;
  if (Tcl_SplitList(interp, biases, &argc, &argv) == TCL_OK) {
    Tcl_Size limit = argc < layerCount ? argc : layerCount;
    for (int ii=0; ii<limit; ii++)
      bias[layerSlot[ii]] = atof(argv[ii]);
    Tcl_Free((char*)argv);
  }

  argc = 0;
  argv = NULL;
  if (Tcl_SplitList(interp, contrasts, &argc, &argv) == TCL_OK) {
    Tcl_Size limit = argc < layerCount ? argc : layerCount;
    for (int ii=0; ii<limit; ii++)
      contrast[layerSlot[ii]] = atof(argv[ii]);
    Tcl_Free((char*)argv);
  }

  argc = 0;
  argv = NULL;
  if (Tcl_SplitList(interp, colors, &argc, &argv) == TCL_OK) {
    Tcl_Size limit = argc < layerCount ? argc : layerCount;
    for (int ii=0; ii<limit; ii++) {
      int ss = layerSlot[ii];
      if (colorName[ss])
	delete [] colorName[ss];
      colorName[ss] = dupstr(argv[ii]);
    }
    Tcl_Free((char*)argv);
  }

  invert = i;
  updateColorCells(cnt);
  updateColorScale();
  update(BASE);
}

void FrameMultiColor::getLayerCountCmd()
{
  printInteger(layerCount);
}

void FrameMultiColor::getLayerNoCmd()
{
  printInteger(currentLayer()+1);
}

void FrameMultiColor::getLayerColorCmd(int layer)
{
  Tcl_AppendResult(interp, colorName[layerSlot[layerIndex(layer)]], NULL);
}

void FrameMultiColor::getLayerBlendCmd(int layer)
{
  Tcl_AppendResult(interp,
		   FitsMask::blendName(blend[layerSlot[layerIndex(layer)]]),
		   NULL);
}

void FrameMultiColor::getLayerTransparencyCmd(int layer)
{
  printDouble((1-alpha[layerSlot[layerIndex(layer)]])*100.);
}

void FrameMultiColor::getLayerViewCmd(int layer)
{
  printInteger(view[layerSlot[layerIndex(layer)]] ? 1 : 0);
}

void FrameMultiColor::saveMultiColorFits(OutFitsStream& str)
{
  FitsImage* ptr = keyContext->fits;
  if (!ptr)
    return;

  ptr->saveFitsPrimHeader(str);

  for (int ii=0; ii<layerCount; ii++) {
    int ss = layerSlot[ii];
    if (context[ss].fits) {
      context[ss].fits->saveFitsXtHeader(str, 1);
      size_t cnt = context[ss].fits->saveFits(str);
      context[ss].fits->saveFitsPad(str, cnt, '\0');
    }
  }
}

void FrameMultiColor::savePhotoCmd(const char* ph)
{
  FitsImage* fits = keyContext->fits;
  if (!fits)
    return;

  FitsBound* params = fits->getDataParams(context->secMode());
  int width = params->xmax - params->xmin;
  int height = params->ymax - params->ymin;

  if (*ph == '\0') {
    Tcl_AppendResult(interp, "bad image name ", NULL);
    return;
  }
  Tk_PhotoHandle photo = Tk_FindPhoto(interp, ph);
  if (!photo) {
    Tcl_AppendResult(interp, "bad image handle ", NULL);
    return;
  }
  if (Tk_PhotoSetSize(interp, photo, width, height) != TCL_OK) {
    Tcl_AppendResult(interp, "bad photo set size ", NULL);
    return;
  }
  Tk_PhotoBlank(photo);
  Tk_PhotoImageBlock block;
  if (!Tk_PhotoGetImage(photo,&block)) {
    Tcl_AppendResult(interp, "bad image block ", NULL);
    return;
  }

  if (block.pixelSize<4) {
    Tcl_AppendResult(interp, "bad pixel size ", NULL);
    return;
  }

  unsigned char* img = fillImage(width, height, Coord::CANVAS);
  if (!img)
    return;

  unsigned char* src = img;
  unsigned char* dest = block.pixelPtr;
  for (long jj=0; jj<height; jj++) {
    for (long ii=0; ii<width; ii++, src+=3, dest+=block.pixelSize) {
      *(dest+block.offset[0]) = *(src);
      *(dest+block.offset[1]) = *(src+1);
      *(dest+block.offset[2]) = *(src+2);
      *(dest+block.offset[3]) = 255;
    }
  }

  delete [] img;

  if (Tk_PhotoPutBlock(interp, photo, &block, 0, 0, width, height,
		       TK_PHOTO_COMPOSITE_SET) != TCL_OK) {
    Tcl_AppendResult(interp, "bad put block ", NULL);
    return;
  }
}

void FrameMultiColor::clipScopeCmd(FrScale::ClipScope ss)
{
  Base::clipScopeCmd(ss);
}

void FrameMultiColor::clipModeCmd(FrScale::ClipMode mm)
{
  Base::clipModeCmd(mm);
}

void FrameMultiColor::clipModeCmd(float per)
{
  Base::clipModeCmd(per);
}

void FrameMultiColor::clipUserCmd(double ll, double hh)
{
  Base::clipUserCmd(ll, hh);
}

void FrameMultiColor::clipMinMaxCmd(FrScale::MinMaxMode mm, int ss)
{
  Base::clipMinMaxCmd(mm, ss);
}

void FrameMultiColor::clipMinMaxRescanCmd()
{
  Base::clipMinMaxRescanCmd();
}

void FrameMultiColor::clipMinMaxModeCmd(FrScale::MinMaxMode mm)
{
  Base::clipMinMaxModeCmd(mm);
}

void FrameMultiColor::clipMinMaxSampleCmd(int ss)
{
  Base::clipMinMaxSampleCmd(ss);
}

void FrameMultiColor::clipZScaleCmd(float ccnt, int ss, int ll)
{
  Base::clipZScaleCmd(ccnt, ss, ll);
}

void FrameMultiColor::clipZScaleContrastCmd(float ccnt)
{
  Base::clipZScaleContrastCmd(ccnt);
}

void FrameMultiColor::clipZScaleSampleCmd(int ss)
{
  Base::clipZScaleSampleCmd(ss);
}

void FrameMultiColor::clipZScaleLineCmd(int ll)
{
  Base::clipZScaleLineCmd(ll);
}

void FrameMultiColor::colorScaleCmd(FrScale::ColorScaleType s)
{
  Base::colorScaleCmd(s);
}

void FrameMultiColor::colorScaleLogCmd(double exp)
{
  Base::colorScaleLogCmd(exp);
}

void FrameMultiColor::layerCreateCmd()
{
  int ss = allocSlot();
  if (ss < 0) {
    Tcl_AppendResult(interp, "maximum number of multicolor layers reached", NULL);
    result = TCL_ERROR;
    return;
  }

  slotUsed[ss] = 1;
  view[ss] = 1;
  alignmentMatrix[ss].identity();
  layerSlot[layerCount++] = ss;
  channel = ss;

  setChannel();
}

void FrameMultiColor::layerNoCmd(int layer)
{
  setLayer(layer);
}

void FrameMultiColor::layerColorCmd(int layer, const char* color)
{
  int ss = layerSlot[layerIndex(layer)];

  if (!getXColor(color)) {
    result = TCL_ERROR;
    return;
  }

  if (colorName[ss])
    delete [] colorName[ss];
  colorName[ss] = dupstr(color);

  rebuildLayerScale(ss);
  setLayer(layer);
}

void FrameMultiColor::layerBlendCmd(int layer, FitsMask::MaskBlend bl)
{
  blend[layerSlot[layerIndex(layer)]] = bl;
  setLayer(layer);
}

void FrameMultiColor::layerTransparencyCmd(int layer, float tt)
{
  int ss = layerSlot[layerIndex(layer)];
  alpha[ss] = 1-(tt/100.);
  if (alpha[ss] < 0)
    alpha[ss] = 0;
  if (alpha[ss] > 1)
    alpha[ss] = 1;

  setLayer(layer);
}

void FrameMultiColor::layerViewCmd(int layer, int vv)
{
  if (vv)
    layerShowCmd(layer);
  else
    layerHideCmd(layer);
}

void FrameMultiColor::layerShowCmd(int layer)
{
  view[layerSlot[layerIndex(layer)]] = 1;
  setLayer(layer);
}

void FrameMultiColor::layerHideCmd(int layer)
{
  view[layerSlot[layerIndex(layer)]] = 0;
  setLayer(layer);
}

void FrameMultiColor::layerDeleteCmd(int layer)
{
  if (layerCount <= 1)
    return;

  int ll = layerIndex(layer);
  int ss = layerSlot[ll];

  context[ss].unload();
  alignmentMatrix[ss].identity();
  slotUsed[ss] = 0;

  for (int ii=ll; ii<layerCount-1; ii++)
    layerSlot[ii] = layerSlot[ii+1];
  layerCount--;

  if (ll >= layerCount)
    ll = layerCount-1;
  channel = layerSlot[ll];

  setChannel();
}

void FrameMultiColor::layerUpCmd(int layer)
{
  int ll = layerIndex(layer);
  if (ll <= 0)
    return;

  int ss = layerSlot[ll];
  layerSlot[ll] = layerSlot[ll-1];
  layerSlot[ll-1] = ss;
  channel = ss;

  setChannel();
}

void FrameMultiColor::layerDownCmd(int layer)
{
  int ll = layerIndex(layer);
  if (ll >= layerCount-1)
    return;

  int ss = layerSlot[ll];
  layerSlot[ll] = layerSlot[ll+1];
  layerSlot[ll+1] = ss;
  channel = ss;

  setChannel();
}

void FrameMultiColor::layerTopCmd(int layer)
{
  int ll = layerIndex(layer);
  if (ll <= 0)
    return;

  int ss = layerSlot[ll];
  for (int ii=ll; ii>0; ii--)
    layerSlot[ii] = layerSlot[ii-1];
  layerSlot[0] = ss;
  channel = ss;

  setChannel();
}

void FrameMultiColor::layerBottomCmd(int layer)
{
  int ll = layerIndex(layer);
  if (ll >= layerCount-1)
    return;

  int ss = layerSlot[ll];
  for (int ii=ll; ii<layerCount-1; ii++)
    layerSlot[ii] = layerSlot[ii+1];
  layerSlot[layerCount-1] = ss;
  channel = ss;

  setChannel();
}
