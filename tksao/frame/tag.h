// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __tag_h__
#define __tag_h__

class Tag {
  char* tag_;

  Tag* previous_;
  Tag* next_;

 public:
  Tag(const char*);
  Tag(const Tag&);
  Tag& operator=(const Tag&);
  ~Tag();

  const char* tag() {return tag_;}
  void set(const char*);
  Tag* previous() {return previous_;}
  void setPrevious(Tag* t) {previous_ = t;}
  Tag* next() {return next_;}
  void setNext(Tag* t) {next_ = t;}
};

#endif
