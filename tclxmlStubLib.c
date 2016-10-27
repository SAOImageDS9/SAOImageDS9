/* 
 * tclxmlStubLib.c --
 *
 *	Stub object that will be statically linked into extensions that wish
 *	to access the TCLXML API.
 *
 * Copyright (c) 1998 Paul Duffin.
 * Copyright (c) 1998-1999 by Scriptics Corporation.
 * Copyright (c) 2004 Zveno Pty Ltd.
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * RCS: @(#) $Id: tclxmlStubLib.c,v 1.1.1.1 2009/01/16 22:11:49 joye Exp $
 */

#ifndef USE_TCL_STUBS
#define USE_TCL_STUBS
#endif

#include <tclxml/tclxml.h>

TclxmlStubs *tclxmlStubsPtr;

/*
 *----------------------------------------------------------------------
 *
 * TclXML_InitStubs --
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

CONST char *
TclXML_InitStubs(interp, version, exact)
    Tcl_Interp *interp;
    CONST char *version;
    int exact;
{
    CONST char *result;

    /* HACK: de-CONST 'version' if compiled against 8.3.
     * The API has no CONST despite not modifying the argument
     * And a debug build with high warning-level on windows
     * will abort the compilation.
     */

#if ((TCL_MAJOR_VERSION < 8) || ((TCL_MAJOR_VERSION == 8) && (TCL_MINOR_VERSION < 4)))
#define UNCONST (char*)
#else
#define UNCONST 
#endif

    result = Tcl_PkgRequireEx(interp, "xml::c", UNCONST version, exact,
		(ClientData *) &tclxmlStubsPtr);
    if (!result || !tclxmlStubsPtr) {
        return (char *) NULL;
    }

    return result;
}
#undef UNCONST
