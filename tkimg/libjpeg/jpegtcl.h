/*
 * jpegtcl.h --
 *
 *	Interface to libjpeg.
 *
 * Copyright (c) 2002 Andreas Kupries <andreas_kupries@users.sourceforge.net>
 *
 * Zveno Pty Ltd makes this software and associated documentation
 * available free of charge for any purpose.  You may make copies
 * of the software but you must include all of this notice on any copy.
 *
 * Zveno Pty Ltd does not warrant that this software is error free
 * or fit for any purpose.  Zveno Pty Ltd disclaims any liability for
 * all claims, expenses, losses, damages and costs any user may incur
 * as a result of using, copying or modifying the software.
 *
 */

#ifndef __JPEGTCL_H__
#define __JPEGTCL_H__

#include <tcl.h>
#include <stdio.h>

#define JPEGTCL_MAJOR_VERSION	9
#define JPEGTCL_MINOR_VERSION	4
#define JPEGTCL_RELEASE_LEVEL	TCL_RELEASE
#define JPEGTCL_RELEASE_SERIAL	0

#define JPEGTCL_VERSION		"9.4"
#define JPEGTCL_PATCH_LEVEL	"9.4"

/*
 * Used to block the rest of this header file from resource compilers so
 * we can just get the version info.
 */
#ifndef RC_INVOKED

/*
 *----------------------------------------------------------------------------
 * C API for Jpegtcl generic layer
 *----------------------------------------------------------------------------
 */

/*
 *----------------------------------------------------------------------------
 * Function prototypes for publicly accessible routines
 *----------------------------------------------------------------------------
 */

#include "jpegtclDecls.h"

/*
 *----------------------------------------------------------------------------
 * Function prototypes for stub initialization.
 *----------------------------------------------------------------------------
 */

const char *
Jpegtcl_InitStubs(Tcl_Interp *interp, const char *version, int exact);

#endif /* RC_INVOKED */
#endif /* __JPEGTCL_H__ */
