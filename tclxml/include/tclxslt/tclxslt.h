/* tclxslt.h --
 *
 *	Public interfaces to TclXSLT package.
 *
 * Copyright (c) 2005-2007 Explain
 * http://www.explain.com.au/
 * Copyright (c) 2001-2004 Zveno Pty Ltd
 * http://www.zveno.com/
 *
 * See the file "LICENSE" for information on usage and
 * redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * $Id: tclxslt.h,v 1.1.1.1 2009/01/16 22:11:49 joye Exp $
 */

#ifndef __TCLXSLT_H__
#define __TCLXSLT_H__

#ifdef TCLXML_BUILD_AS_FRAMEWORK
#include <Tcl/tcl.h>
#else
#include <tcl.h>
#endif /* TCLXML_BUILD_AS_FRAMEWORK */

#include <tcldom-libxml2/tcldom-libxml2.h>
#include <tclxml-libxml2/docObj.h>
#include <libxml/xpath.h>
#include <libxml/xpathInternals.h>
#include <libxslt/xsltutils.h>
#include <libxslt/transform.h>
#include <libxslt/extensions.h>
#include <libexslt/exsltconfig.h>
#include <libexslt/exslt.h>

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
#ifdef BUILD_Tclxslt
# define TCL_STORAGE_CLASS DLLEXPORT
#else
# ifdef USE_TCL_STUBS
#  define TCL_STORAGE_CLASS
# else
#  define TCL_STORAGE_CLASS DLLIMPORT
# endif
#endif

/*
 * Declarations for externally visible functions.
 */

EXTERN int      Tclxslt_libxslt_Init _ANSI_ARGS_((Tcl_Interp *interp));
EXTERN int      Tclxslt_libxslt_SafeInit _ANSI_ARGS_((Tcl_Interp *interp));

/*
 * Class creation command for XSLT compiled stylesheet objects.
 */

EXTERN Tcl_ObjCmdProc TclXSLTCompileStylesheet;


#undef TCL_STORAGE_CLASS
#define TCL_STORAGE_CLASS DLLIMPORT

#ifdef __cplusplus
}
#endif

#endif /* __TCLXSLT_H__ */
