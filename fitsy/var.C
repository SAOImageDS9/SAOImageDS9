// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tcl.h>

#include "var.h"

FitsVar::FitsVar(Tcl_Interp* interp, const char* var, const char* fn)
{
  obj = NULL;

  parse(fn);
  if (!valid_)
    return;

  // reset
  valid_ =0;

  obj = Tcl_GetVar2Ex(interp, (char*)var, NULL, 
		      TCL_GLOBAL_ONLY | TCL_LEAVE_ERR_MSG);
  if (!obj)
    return;

  Tcl_IncrRefCount(obj);

  Tcl_Size objLen = 0;
  unsigned char* bytes = Tcl_GetByteArrayFromObj(obj, &objLen);
  if (!bytes) {
    Tcl_DecrRefCount(obj);
    obj = NULL;
    return;
  }

  mapsize_ = objLen;
  mapdata_ = (char*)bytes;

  // so far, so good
  valid_ = 1;
}

FitsVar::~FitsVar()
{
  if (obj)
    Tcl_DecrRefCount(obj);
}


