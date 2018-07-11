// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __callback_h__
#define __callback_h__

#include <tcl.h>

class CallBack {
 public:
  enum Type {SELECTCB, UNSELECTCB, 
	     HIGHLITECB, UNHIGHLITECB,
	     EDITBEGINCB, EDITCB, EDITENDCB, 
	     MOVEBEGINCB, MOVECB, MOVEENDCB, 
	     ROTATEBEGINCB, ROTATECB, ROTATEENDCB, 
	     DELETECB, 
	     TEXTCB, COLORCB, LINEWIDTHCB, PROPERTYCB, FONTCB, 
	     KEYCB,
	     UPDATECB,UPDATE3DCB};

 private:
  Tcl_Interp* interp_;

  Type type_;
  char proc_[64];
  char arg_[64];

  CallBack* previous_;
  CallBack* next_;

 public:
  CallBack(const CallBack&);
  CallBack(Tcl_Interp*, Type, const char*, const char*);
  CallBack& operator=(const CallBack&);

  int eval(const char*);

  Type type() {return type_;}
  const char* proc() {return proc_;}
  const char* arg() {return arg_;}

  CallBack* previous() {return previous_;}
  void setPrevious(CallBack* cb) {previous_ = cb;}
  CallBack* next() {return next_;}
  void setNext(CallBack* cb) {next_ = cb;}
};

#endif
