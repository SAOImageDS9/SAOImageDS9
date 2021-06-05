/*
 * zlibtcl.h --
 *
 *	Interface to libz.
 *
 * Copyright (c) 2002-2004 Andreas Kupries <andreas_kupries@users.sourceforge.net>
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

#ifndef __ZLIBTCL_H__
#define __ZLIBTCL_H__

#include <tcl.h>

#define ZLIBTCL_MAJOR_VERSION	1
#define ZLIBTCL_MINOR_VERSION	2
#define ZLIBTCL_RELEASE_LEVEL	TCL_RELEASE
#define ZLIBTCL_RELEASE_SERIAL	11

#ifndef ZLIBTCL_VERSION
#define ZLIBTCL_VERSION		"1.2.11"
#define ZLIBTCL_PATCH_LEVEL	"1.2.11"
#endif

/*
 * Used to block the rest of this header file from resource compilers so
 * we can just get the version info.
 */
#ifndef RC_INVOKED

/*
 *----------------------------------------------------------------------------
 * Function prototypes for publically accessible routines
 *----------------------------------------------------------------------------
 */

#include "zlibtclDecls.h"

/*
 *----------------------------------------------------------------------------
 * Function prototypes for stub initialization.
 *----------------------------------------------------------------------------
 */

const char *
Zlibtcl_InitStubs(Tcl_Interp *interp, const char *version, int exact);

#endif /* RC_INVOKED */
#endif /* __ZLIBTCL_H__ */
