/* nodeObj.c --
 *
 *	This module manages libxml2 xmlNodePtr Tcl objects.
 *
 * Copyright (c) 2007 Explain
 * http://www.explain.com.au/
 * Copyright (c) 2003 Zveno Pty Ltd
 * http://www.zveno.com/
 *
 * See the file "LICENSE" for information on usage and
 * redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * $Id: nodeObj.c,v 1.1.1.1 2009/01/16 22:11:49 joye Exp $
 */

#include <tcldom-libxml2/nodeObj.h>

#define TCL_DOES_STUBS \
    (TCL_MAJOR_VERSION > 8 || TCL_MAJOR_VERSION == 8 && (TCL_MINOR_VERSION > 1 || \
    (TCL_MINOR_VERSION == 1 && TCL_RELEASE_LEVEL == TCL_FINAL_RELEASE)))

#undef TCL_STORAGE_CLASS
#define TCL_STORAGE_CLASS DLLEXPORT

extern Tcl_ObjType NodeObjType;

/*
 * For debugging
 */

extern Tcl_Channel stderrChan;
extern char dbgbuf[200];


/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_libxml2_NodeObjInit --
 *
 *  Initialise node obj module.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  Registers new object type.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOM_libxml2_NodeObjInit(interp)
     Tcl_Interp *interp;
{
  Tcl_RegisterObjType(&NodeObjType);

  return TCL_OK;
}
