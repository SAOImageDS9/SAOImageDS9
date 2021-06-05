/*
 * zlibtclStubLib.c --
 *
 *	Stub object that will be statically linked into extensions that wish
 *	to access the ZLIBTCL API.
 *
 * Copyright (c) 2002 Andreas Kupries <andreas_kupries@users.sourceforge.net>
 * Copyright (c) 2002 Andreas Kupries <andreas_kupries@users.sourceforge.net>
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 */

#ifndef USE_TCL_STUBS
#define USE_TCL_STUBS
#endif

#include "zlibtcl.h"

const ZlibtclStubs *zlibtclStubsPtr;

/*
 *----------------------------------------------------------------------
 *
 * Zlibtcl_InitStubs --
 *
 *	Checks that the correct version of Blt is loaded and that it
 *	supports stubs. It then initialises the stub table pointers.
 *
 * Results:
 *	The actual version of BLT that satisfies the request, or
 *	NULL to indicate that an error occurred.
 *
 * Side effects:
 *	Sets the stub table pointers.
 *
 *----------------------------------------------------------------------
 */

#ifdef Zlibtcl_InitStubs
#undef Zlibtcl_InitStubs
#endif

MODULE_SCOPE const char *
Zlibtcl_InitStubs(
	Tcl_Interp *interp,
	const char *version,
	int exact
) {
	const char *result;
	void *data;

	result = Tcl_PkgRequireEx(interp, PACKAGE_NAME, version, exact, &data);
	if (!result || !data) {
		return NULL;
	}

	zlibtclStubsPtr = data;
	return result;
}
