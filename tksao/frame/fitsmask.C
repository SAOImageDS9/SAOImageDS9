// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "fitsmask.h"

#include <algorithm>
#include <cmath>
#include "base.h"
#include "context.h"

namespace {
// CSS non-separable blend helpers operate in normalized RGB.
double clipColor(double value)
{
  return std::max(0., std::min(1., value));
}

double luminosity(const double color[3])
{
  return .3*color[0] + .59*color[1] + .11*color[2];
}

double saturation(const double color[3])
{
  return std::max(color[0], std::max(color[1], color[2])) -
    std::min(color[0], std::min(color[1], color[2]));
}

void clipRGB(double color[3])
{
  double ll = luminosity(color);
  double nn = std::min(color[0], std::min(color[1], color[2]));
  double xx = std::max(color[0], std::max(color[1], color[2]));

  if (nn < 0)
    for (int ii=0; ii<3; ii++)
      color[ii] = ll + ((color[ii]-ll)*ll)/(ll-nn);
  if (xx > 1)
    for (int ii=0; ii<3; ii++)
      color[ii] = ll + ((color[ii]-ll)*(1-ll))/(xx-ll);
}

void setLuminosity(double color[3], double ll)
{
  double dd = ll-luminosity(color);
  for (int ii=0; ii<3; ii++)
    color[ii] += dd;
  clipRGB(color);
}

void setSaturation(double color[3], double ss)
{
  int order[3] = {0,1,2};
  for (int ii=0; ii<2; ii++)
    for (int jj=ii+1; jj<3; jj++)
      if (color[order[jj]] < color[order[ii]])
	std::swap(order[ii],order[jj]);
  int lo = order[0];
  int mid = order[1];
  int hi = order[2];

  if (color[hi] > color[lo]) {
    color[mid] = ((color[mid]-color[lo])*ss)/(color[hi]-color[lo]);
    color[hi] = ss;
  }
  else {
    color[mid] = 0;
    color[hi] = 0;
  }
  color[lo] = 0;
}

double blendChannel(double source, double backdrop, FitsMask::MaskBlend blend)
{
  switch (blend) {
  case FitsMask::SOURCE:
    return source;
  case FitsMask::MULTIPLY:
    return backdrop*source;
  case FitsMask::SCREEN:
    return backdrop+source-backdrop*source;
  case FitsMask::OVERLAY:
    return backdrop <= .5 ? 2*backdrop*source :
      1-2*(1-backdrop)*(1-source);
  case FitsMask::DARKEN:
    return std::min(backdrop,source);
  case FitsMask::LIGHTEN:
    return std::max(backdrop,source);
  case FitsMask::COLOR_DODGE:
    return backdrop == 0 ? 0 :
      (source == 1 ? 1 : std::min(1.,backdrop/(1-source)));
  case FitsMask::COLOR_BURN:
    return backdrop == 1 ? 1 :
      (source == 0 ? 0 : 1-std::min(1.,(1-backdrop)/source));
  case FitsMask::HARD_LIGHT:
    return source <= .5 ? 2*backdrop*source :
      1-2*(1-backdrop)*(1-source);
  case FitsMask::SOFT_LIGHT:
    if (source <= .5)
      return backdrop-(1-2*source)*backdrop*(1-backdrop);
    else {
      double dd = backdrop <= .25 ?
	((16*backdrop-12)*backdrop+4)*backdrop : std::sqrt(backdrop);
      return backdrop+(2*source-1)*(dd-backdrop);
    }
  case FitsMask::DIFFERENCE:
    return std::fabs(backdrop-source);
  case FitsMask::EXCLUSION:
    return backdrop+source-2*backdrop*source;
  default:
    return source;
  }
}
}

void FitsMask::blendRGB(const unsigned char* src, const unsigned char* bg,
			unsigned char* dest, MaskBlend blend)
{
  double source[3];
  double backdrop[3];
  double result[3];
  for (int ii=0; ii<3; ii++) {
    source[ii] = src[ii]/255.;
    backdrop[ii] = bg[ii]/255.;
  }

  switch (blend) {
  case HUE:
    for (int ii=0; ii<3; ii++)
      result[ii] = source[ii];
    setSaturation(result,saturation(backdrop));
    setLuminosity(result,luminosity(backdrop));
    break;
  case SATURATION:
    for (int ii=0; ii<3; ii++)
      result[ii] = backdrop[ii];
    setSaturation(result,saturation(source));
    setLuminosity(result,luminosity(backdrop));
    break;
  case COLOR:
    for (int ii=0; ii<3; ii++)
      result[ii] = source[ii];
    setLuminosity(result,luminosity(backdrop));
    break;
  case LUMINOSITY:
    for (int ii=0; ii<3; ii++)
      result[ii] = backdrop[ii];
    setLuminosity(result,luminosity(source));
    break;
  default:
    for (int ii=0; ii<3; ii++)
      result[ii] = blendChannel(source[ii],backdrop[ii],blend);
    break;
  }

  for (int ii=0; ii<3; ii++)
    dest[ii] = (unsigned char)(clipColor(result[ii])*255+.5);
}

const char* FitsMask::blendName(MaskBlend blend)
{
  static const char* names[] = {
    "source", "multiply", "screen", "overlay", "darken", "lighten",
    "color-dodge", "color-burn", "hard-light", "soft-light",
    "difference", "exclusion", "hue", "saturation", "color", "luminosity"
  };
  return names[blend];
}

FitsMask::FitsMask(Base* pp, char* clr, MaskType mm, double ll, double hh)
  : mark_(mm), low_(ll), high_(hh)
{
  context_ = new Context();
  context_->parent(pp);

  colorName_ = dupstr(clr);

  next_ = NULL;
  previous_ = NULL;
}

FitsMask::~FitsMask()
{
  if (colorName_)
    delete [] colorName_;

  if (context_) {
    context_->unload();
    delete context_;
  }
}
