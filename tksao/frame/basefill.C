// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tk.h>

#include "basefill.h"

BaseFill::BaseFill(const BaseFill& a)
{
  fill_ = a.fill_;
}

BaseFill::BaseFill()
{
  fill_ =0;
}

BaseFill::BaseFill(int ff)
{
  fill_ =ff;
}
