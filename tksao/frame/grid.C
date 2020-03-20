// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "grid.h"
#include "context.h"
#include "fitsimage.h"

extern "C" {
  #include "ast.h"
}

Grid::Grid(Coord::CoordSystem sys, Coord::SkyFrame sky, 
	   Coord::SkyFormat format, GridType type, const char* v) 
  : type_(type), system_(sys), sky_(sky), skyFormat_(format)
{
  vars_ = dupstr(v);
}

Grid::~Grid()
{
  if (vars_)
    delete [] vars_;
}
