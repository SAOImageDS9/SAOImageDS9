// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tcl.h>

#include "var.h"

FitsVar::FitsVar(Tcl_Interp* interp, const char* var, const char* fn)
{
  parse(fn);
  if (!valid_)
    return;

  // reset
  valid_ =0;

  obj = Tcl_GetVar2Ex(interp, (char*)var, NULL, 
		      TCL_GLOBAL_ONLY | TCL_LEAVE_ERR_MSG);
  if (!obj)
    return;

  // just in case
  Tcl_ConvertToType(interp, obj, Tcl_GetObjType("bytearray"));

  typedef struct ByteArray {
    int used;			/* The number of bytes used in the byte
				 * array. */
    int allocated;		/* The amount of space actually allocated
				 * minus 1 byte. */
    unsigned char bytes[4];	/* The array of bytes.  The actual size of
				 * this field depends on the 'allocated' field
				 * above. */
  } ByteArray;

  ByteArray* ba = (ByteArray*)(obj->internalRep.otherValuePtr);
  mapsize_ = ba->used;
  mapdata_ = (char*)ba->bytes;

  Tcl_IncrRefCount(obj);

  // so far, so good
  valid_ = 1;
}

FitsVar::~FitsVar()
{
  if (obj)
    Tcl_DecrRefCount(obj);
}



