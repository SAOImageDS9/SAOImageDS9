// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __default_h__
#define __default_h__

#include "sao.h"
#include "lut.h"

class Colorbar;

class GreyColorMap : public SAOColorMap {
public:
  GreyColorMap(Colorbar*);
};

class RedColorMap : public SAOColorMap {
public:
  RedColorMap(Colorbar*);
};

class GreenColorMap : public SAOColorMap {
public:
  GreenColorMap(Colorbar*);
};

class BlueColorMap : public SAOColorMap {
public:
  BlueColorMap(Colorbar*);
};

class AColorMap : public SAOColorMap {
public:
  AColorMap(Colorbar*);
};

class BColorMap : public SAOColorMap {
public:
  BColorMap(Colorbar*);
};

class BBColorMap : public SAOColorMap {
public:
  BBColorMap(Colorbar*);
};

class HEColorMap : public SAOColorMap {
public:
  HEColorMap(Colorbar*);
};

class I8ColorMap : public LUTColorMap {
public:
  I8ColorMap(Colorbar*);
};

class AIPSColorMap : public LUTColorMap {
public:
  AIPSColorMap(Colorbar*);
};

class HeatColorMap : public SAOColorMap {
public:
  HeatColorMap(Colorbar*);
};

class CoolColorMap : public SAOColorMap {
public:
  CoolColorMap(Colorbar*);
};

class RainbowColorMap : public SAOColorMap {
public:
  RainbowColorMap(Colorbar*);
};

class StandardColorMap : public SAOColorMap {
public:
  StandardColorMap(Colorbar*);
};

class StaircaseColorMap : public LUTColorMap {
public:
  StaircaseColorMap(Colorbar*);
};

class ColorColorMap : public LUTColorMap {
public:
  ColorColorMap(Colorbar*);
};

class SLSColorMap : public LUTColorMap {
public:
  SLSColorMap(Colorbar*);
};

class HSVColorMap : public LUTColorMap {
public:
  HSVColorMap(Colorbar*);
};

#endif

