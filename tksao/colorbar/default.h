// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __default_h__
#define __default_h__

#include "sao.h"
#include "lut.h"

class Colorbar;

class GreyColorMap : public SAOColorMap {
public:
  GreyColorMap(ColorbarBase*);
};

class RedColorMap : public SAOColorMap {
public:
  RedColorMap(ColorbarBase*);
};

class GreenColorMap : public SAOColorMap {
public:
  GreenColorMap(ColorbarBase*);
};

class BlueColorMap : public SAOColorMap {
public:
  BlueColorMap(ColorbarBase*);
};

class AColorMap : public SAOColorMap {
public:
  AColorMap(ColorbarBase*);
};

class BColorMap : public SAOColorMap {
public:
  BColorMap(ColorbarBase*);
};

class BBColorMap : public SAOColorMap {
public:
  BBColorMap(ColorbarBase*);
};

class HEColorMap : public SAOColorMap {
public:
  HEColorMap(ColorbarBase*);
};

class I8ColorMap : public LUTColorMap {
public:
  I8ColorMap(ColorbarBase*);
};

class AIPSColorMap : public LUTColorMap {
public:
  AIPSColorMap(ColorbarBase*);
};

class HeatColorMap : public SAOColorMap {
public:
  HeatColorMap(ColorbarBase*);
};

class CoolColorMap : public SAOColorMap {
public:
  CoolColorMap(ColorbarBase*);
};

class RainbowColorMap : public SAOColorMap {
public:
  RainbowColorMap(ColorbarBase*);
};

class StandardColorMap : public SAOColorMap {
public:
  StandardColorMap(ColorbarBase*);
};

class StaircaseColorMap : public LUTColorMap {
public:
  StaircaseColorMap(ColorbarBase*);
};

class ColorColorMap : public LUTColorMap {
public:
  ColorColorMap(ColorbarBase*);
};

class SLSColorMap : public LUTColorMap {
public:
  SLSColorMap(ColorbarBase*);
};

class HSVColorMap : public LUTColorMap {
public:
  HSVColorMap(ColorbarBase*);
};

class HSVHLSColorMap : public SAOColorMap {
public:
  HSVHLSColorMap(ColorbarBase*);
};

#endif

