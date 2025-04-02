/*
 * tkimg.c --
 *
 * Copyright (c) 2002 Andreas Kupries <andreas_kupries@users.sourceforge.net>
 */

#include <stdlib.h>
#include <time.h>

#include "tkimg.h"
#include "tkimgUuid.h"

MODULE_SCOPE const TkimgStubs tkimgStubs;

/*
 * Declarations for externally visible functions.
 */

/*
 *----------------------------------------------------------------------------
 *
 * Tkimg_Init --
 *
 *  Initialisation routine for loadable module
 *
 * Results:
 *  A Tcl result: TCL_OK or TCL_ERROR.
 *
 * Side effects:
 *  Creates commands in the interpreter.
 *
 *----------------------------------------------------------------------------
 */

#ifndef STRINGIFY
#  define STRINGIFY(x) STRINGIFY1(x)
#  define STRINGIFY1(x) #x
#endif

int Tkimg_Init(
    Tcl_Interp *interp /* Interpreter to initialise. */
) {
    Tcl_CmdInfo info;

    if (!Tcl_InitStubs(interp, "8.6-", 0)) {
        return TCL_ERROR;
    }
    if (!Tk_InitStubs(interp, "8.6-", 0)) {
        return TCL_ERROR;
    }

    if (Tcl_PkgProvideEx(interp, PACKAGE_TCLNAME, PACKAGE_VERSION,
            (void *)&tkimgStubs) != TCL_OK
    ) {
        return TCL_ERROR;
    }
    if (Tcl_GetCommandInfo(interp, "::tcl::build-info", &info)) {
        Tcl_CreateObjCommand(interp, "::tkimg::build-info",
        info.objProc, (void *)(PACKAGE_VERSION
            "+" STRINGIFY(TKIMG_VERSION_UUID)
#if defined(__clang__) && defined(__clang_major__)
            ".clang-" STRINGIFY(__clang_major__)
#if __clang_minor__ < 10
            "0"
#endif
            STRINGIFY(__clang_minor__)
#endif
#if defined(__cplusplus) && !defined(__OBJC__)
            ".cplusplus"
#endif
#ifndef NDEBUG
            ".debug"
#endif
#ifdef DEBUG_LOCAL
            ".debug-local"
#endif
#if !defined(__clang__) && !defined(__INTEL_COMPILER) && defined(__GNUC__)
            ".gcc-" STRINGIFY(__GNUC__)
#if __GNUC_MINOR__ < 10
            "0"
#endif
            STRINGIFY(__GNUC_MINOR__)
#endif
#ifdef __INTEL_COMPILER
            ".icc-" STRINGIFY(__INTEL_COMPILER)
#endif
#ifdef TCL_MEM_DEBUG
            ".memdebug"
#endif
#if defined(_MSC_VER)
            ".msvc-" STRINGIFY(_MSC_VER)
#endif
#ifdef USE_NMAKE
            ".nmake"
#endif
#ifndef TCL_CFG_OPTIMIZED
            ".no-optimize"
#endif
#ifdef __OBJC__
            ".objective-c"
#if defined(__cplusplus)
            "plusplus"
#endif
#endif
#ifdef TCL_CFG_PROFILED
            ".profile"
#endif
#ifdef PURIFY
            ".purify"
#endif
#ifdef STATIC_BUILD
            ".static"
#endif
        ), NULL);
    }

    /* Initialize random number generator used in GetTemporaryFileName. */
    srand (time (NULL));

    return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * Tkimg_SafeInit --
 *
 *  Initialisation routine for loadable module in a safe interpreter.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  Creates commands in the interpreter.
 *
 *----------------------------------------------------------------------------
 */

int Tkimg_SafeInit(
    Tcl_Interp *interp
) {
    return Tkimg_Init(interp);
}
