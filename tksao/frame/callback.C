// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>

#include "callback.h"

CallBack::CallBack(const CallBack& a)
{
  interp_ = a.interp_;

  type_ = a.type_;
  strcpy(proc_, a.proc_);
  strcpy(arg_, a.arg_);

  previous_ = NULL;
  next_ = NULL;
}

CallBack& CallBack::operator=(const CallBack& a) 
{
  interp_ = a.interp_;

  type_ = a.type_;
  strcpy(proc_, a.proc_);
  strcpy(arg_, a.arg_);

  previous_ = NULL;
  next_ = NULL;

  return *this;
}

CallBack::CallBack(Tcl_Interp* interp, Type type, 
		   const char* proc, const char* arg)
{
  interp_ = interp;

  type_ = type;

  if (proc)
    strncpy(proc_, proc, 64);
  else
    proc_[0] = '\0';

  if (arg)
    strncpy(arg_, arg, 64);
  else
    arg_[0] = '\0';

  previous_ = NULL;
  next_ = NULL;
}

int CallBack::eval(const char* arg2)
{
  return Tcl_VarEval(interp_, proc_, " ", arg_, " ", arg2, NULL);
}
