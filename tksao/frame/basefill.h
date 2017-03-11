// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __basefill_h__
#define __basefill_h__

class BaseFill {
 protected:
  int fill_;

 public:
  BaseFill();
  BaseFill(int);
  BaseFill(const BaseFill& a);

  void fill(int ff) {fill_ = ff;}
  int getFill() {return fill_;}
};

#endif
