/*
 * tkimg.h --
 *
 *  Interface to tkimg base package.
 *
 * Copyright (c) 2002 Andreas Kupries <andreas_kupries@users.sourceforge.net>
 */

#ifndef __TKIMG_H__
#define __TKIMG_H__

#ifdef _MSC_VER
#    pragma warning(disable:4244) /* '=' : conversion from '__int64' to 'int', possible loss of data */
#    pragma warning(disable:4761) /* integral size mismatch in argument; conversion supplied */
#if _MSC_VER <= 1800 /* VS 2013 and older do not have snprintf */
#    define tkimg_snprintf  _snprintf
#    define tkimg_vsnprintf _vsnprintf
#else
#    define tkimg_snprintf  snprintf
#    define tkimg_vsnprintf vsnprintf
#endif
#else
#    define tkimg_snprintf  snprintf
#    define tkimg_vsnprintf vsnprintf
#endif /* _MSC_VER_ */

#if defined(__MINGW32__)
#    define SETJMP(jbuf)        __builtin_setjmp(jbuf)
#    define LONGJMP(jbuf, code) __builtin_longjmp(jbuf, code)
#else
#    define SETJMP(jbuf)        setjmp(jbuf)
#    define LONGJMP(jbuf, code) longjmp(jbuf, code)
#endif

#define IMGOUT Tcl_WriteChars (outChan, str, -1)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <setjmp.h>
#include <tk.h>

/*
 * On a few systems, type boolean and/or its values FALSE, TRUE may appear
 * in standard header files.  Or you may have conflicts with application-
 * specific header files that you want to include together with these files.
 * Defining HAVE_BOOLEAN before including tkimg.h should make it work.
 */

/* On windows use the boolean definition from its headers to prevent
 * any conflicts should a user of this header use "windows.h". Without
 * this we will have/get conflicting definitions of 'boolean' ('int'
 * here, 'unsigned' char for windows)
 */

#ifndef HAVE_BOOLEAN
#define HAVE_BOOLEAN
#   ifndef __RPCNDR_H__     /* don't conflict if rpcndr.h already read */
#if defined(_WINDOWS) || defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(_Windows)
typedef unsigned char boolean;
#else
typedef int boolean;
#endif
#endif
#endif

/*
 * Used to block the rest of this header file from resource compilers so
 * we can just get the version info.
 */
#ifndef RC_INVOKED

#ifndef TK_PHOTO_COMPOSITE_OVERLAY
#   define TK_PHOTO_COMPOSITE_OVERLAY 0
#endif
#ifndef TK_PHOTO_COMPOSITE_SET
#   define TK_PHOTO_COMPOSITE_SET 1
#endif

#ifndef JOIN
#  define JOIN(a,b) JOIN1(a,b)
#  define JOIN1(a,b) a##b
#endif

#if !defined(INT2PTR)
#   define INT2PTR(p) ((void *)(ptrdiff_t)(p))
#endif
#if !defined(PTR2INT)
#   define PTR2INT(p) ((ptrdiff_t)(p))
#endif

#ifndef TCL_UNUSED
#   if defined(__cplusplus)
#       define TCL_UNUSED(T) T
#   elif defined(__GNUC__) && (__GNUC__ > 2)
#       define TCL_UNUSED(T) T JOIN(dummy, __LINE__) __attribute__((unused))
#   else
#       define TCL_UNUSED(T) T JOIN(dummy, __LINE__)
#   endif
#endif

#include "tkimgDecls.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 *----------------------------------------------------------------------------
 * C API for Tkimg generic layer
 *----------------------------------------------------------------------------
 */

#define IMG_SPECIAL (1<<8)
#define IMG_CHAN    (IMG_SPECIAL+1)
#define IMG_STRING  (IMG_SPECIAL+2)

#define IMG_READ    (IMG_SPECIAL+3)
#define IMG_WRITE   (IMG_SPECIAL+4)

/* Default DPI value. */
#define IMG_DEFAULT_DPI 0

#if (TK_MAJOR_VERSION > 8) || !defined(TK_MINOR_VERSION) || (TK_MINOR_VERSION > 6)
    #define HAVE_FORMAT_VERSION3 1
#else
    #define HAVE_FORMAT_VERSION3 0
#endif

/* Maximum number of channels storable in a photo image. */
#define IMG_MAX_CHANNELS     4

/* Definitions for mapping short or float images into unsigned char
 * photo images. See tkimgMap.c for corresponding functions.
 */

/* Size of gamma correction table. */
#define IMG_GAMMA_TABLE_SIZE 257

/* Mapping modes. */
#define IMG_MAP_NONE   0
#define IMG_MAP_MINMAX 1
#define IMG_MAP_AGC    2
#define IMG_MAP_NONE_STR   "none"
#define IMG_MAP_MINMAX_STR "minmax"
#define IMG_MAP_AGC_STR    "agc"

/*
 *----------------------------------------------------------------------------
 * Function prototypes for stub initialization.
 *----------------------------------------------------------------------------
 */

const char *
Tkimg_InitStubs(Tcl_Interp *interp, const char *version, int exact);

#endif /* RC_INVOKED */

#ifdef __cplusplus
}
#endif

#endif /* __TKIMG_H__ */
