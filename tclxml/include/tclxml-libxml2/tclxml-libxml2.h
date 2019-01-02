/* tcllibxml2.h --
 *
 *	This module provides an interface to libxml2.
 *
 * Copyright (c) 2005 Explain
 * http://www.explain.com.au/
 * Copyright (c) 2003 Zveno Pty Ltd
 * http://www.zveno.com/
 *
 * See the file "LICENSE" for information on usage and
 * redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * $Id: tclxml-libxml2.h,v 1.1.1.1 2009/01/16 22:11:49 joye Exp $
 */

#ifndef TCLXML_LIBXML2_H
#define TCLXML_LIBXML2_H

#include <tclxml/tclxml.h>
#include <libxml/tree.h>
#include "docObj.h"

/*
 * For C++ compilers, use extern "C"
 */

#ifdef __cplusplus
extern "C" {
#endif

/*
 * These macros are used to control whether functions are being declared for
 * import or export in Windows, 
 * They map to no-op declarations on non-Windows systems.
 * Assumes that tcl.h defines DLLEXPORT & DLLIMPORT correctly.
 * The default build on windows is for a DLL, which causes the DLLIMPORT
 * and DLLEXPORT macros to be nonempty. To build a static library, the
 * macro STATIC_BUILD should be defined before the inclusion of tcl.h
 *
 * If a function is being declared while it is being built
 * to be included in a shared library, then it should have the DLLEXPORT
 * storage class.  If is being declared for use by a module that is going to
 * link against the shared library, then it should have the DLLIMPORT storage
 * class.  If the symbol is beind declared for a static build or for use from a
 * stub library, then the storage class should be empty.
 *
 * The convention is that a macro called BUILD_xxxx, where xxxx is the
 * name of a library we are building, is set on the compile line for sources
 * that are to be placed in the library.  When this macro is set, the
 * storage class will be set to DLLEXPORT.  At the end of the header file, the
 * storage class will be reset to DLLIMPORt.
 */

#undef TCL_STORAGE_CLASS
#ifdef BUILD_TclXML_libxml2
# define TCL_STORAGE_CLASS DLLEXPORT
#else
# ifdef USE_TCL_STUBS
#  define TCL_STORAGE_CLASS
# else
#  define TCL_STORAGE_CLASS DLLIMPORT
# endif
#endif

/*
 * The following function is required to be defined in all stubs aware
 * extensions of TclXML/libxml2.  The function is actually implemented in the stub
 * library, not the main TclXML/libxml2 library, although there is a trivial
 * implementation in the main library in case an extension is statically
 * linked into an application.
 */

EXTERN CONST char *     TclXML_libxml2_InitStubs _ANSI_ARGS_((Tcl_Interp *interp,
                            CONST char *version, int exact));

#ifndef USE_TCLXML_LIBXML2_STUBS

/*
 * When not using stubs, make it a macro.
 */

#define TclXML_libxml2_InitStubs(interp, version, exact) \
    Tcl_PkgRequire(interp, "xml::libxml2", version, exact)

#endif

/*
 * Accessor functions => Stubs
 */

#include <tclxml-libxml2/tclxml-libxml2Decls.h>

#undef  TCL_STORAGE_CLASS
#define TCL_STORAGE_CLASS DLLIMPORT

#ifdef __cplusplus
}
#endif

#endif /* TCLXML_LIBXML2_H */
