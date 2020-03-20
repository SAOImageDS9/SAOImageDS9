// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "tag.h"

Tag::Tag(const Tag& t)
{
  tag_ = dupstr(t.tag_);
}

Tag::Tag(const char* t)
{
  tag_ = dupstr(t);
}

Tag& Tag::operator=(const Tag& t) 
{
  tag_ = dupstr(t.tag_);
  return *this;
}

Tag::~Tag()
{
  if (tag_)
    delete [] tag_;
}

void Tag::set(const char* t)
{
  if (tag_)
    delete tag_;

  tag_ = dupstr(t);
}

