/*
 * init.c --
 *
 *  Generic photo image type initialization, Tcl/Tk package
 *
 * Copyright (c) 2002 Andreas Kupries <andreas_kupries@users.sourceforge.net>
 *
 */

#include "tkimg.h"

#ifndef MORE_INITIALIZATION
#define MORE_INITIALIZATION
#endif

/*
 * Functions exported for package management.
 */


extern DLLEXPORT int @CPACKAGE@_Init(Tcl_Interp *interp);
extern DLLEXPORT int @CPACKAGE@_SafeInit(Tcl_Interp *interp);

/*
 * Declarations of internal functions.
 */

#if defined(USE_FORMAT_VERSION3) && HAVE_FORMAT_VERSION3 == 1

static int FileMatchVersion3(Tcl_Interp *interp,
        Tcl_Channel chan, const char *fileName, Tcl_Obj *format,
        Tcl_Obj *metadataIn, int *widthPtr, int *heightPtr,
        Tcl_Obj *metadataOut);

static int StringMatchVersion3(Tcl_Interp *interp,
        Tcl_Obj *dataObj, Tcl_Obj *format, Tcl_Obj *metadataIn, int *widthPtr,
        int *heightPtr, Tcl_Obj *metadataOut);

static int FileReadVersion3(Tcl_Interp *interp,
        Tcl_Channel chan,
        const char *fileName, Tcl_Obj *format, Tcl_Obj *metadataIn,
        Tk_PhotoHandle imageHandle,
        int destX, int destY, int width, int height, int srcX, int srcY,
        Tcl_Obj *metadataOut);

static int StringReadVersion3(Tcl_Interp *interp,
        Tcl_Obj *dataObj, Tcl_Obj *format, Tcl_Obj *metadataIn,
        Tk_PhotoHandle imageHandle, int destX, int destY, int width, int height,
        int srcX, int srcY, Tcl_Obj *metadataOut);

static int FileWriteVersion3(Tcl_Interp *interp,
        const char *fileName, Tcl_Obj *format, Tcl_Obj *metadataIn,
        Tk_PhotoImageBlock *blockPtr);

static int StringWriteVersion3(Tcl_Interp *interp,
        Tcl_Obj *format, Tcl_Obj *metadataIn, Tk_PhotoImageBlock *blockPtr);

static Tk_PhotoImageFormatVersion3 sImageFormatVersion3 = {
    (char *) "%PHIMGTYPE%",  /* name */
    FileMatchVersion3,       /* fileMatchProc */
    StringMatchVersion3,     /* stringMatchProc */
    FileReadVersion3,        /* fileReadProc */
    StringReadVersion3,      /* stringReadProc */
    FileWriteVersion3,       /* fileWriteProc */
    StringWriteVersion3,     /* stringWriteProc */
    NULL
};

#else

static int FileMatch(Tcl_Channel chan, const char *fileName,
        Tcl_Obj *format, int *widthPtr, int *heightPtr, Tcl_Interp *interp);

static int StringMatch(Tcl_Obj *dataObj, Tcl_Obj *format,
        int *widthPtr, int *heightPtr, Tcl_Interp *interp);

static int FileRead(Tcl_Interp *interp, Tcl_Channel chan,
        const char *fileName, Tcl_Obj *format, Tk_PhotoHandle imageHandle,
        int destX, int destY, int width, int height, int srcX, int srcY);

static int StringRead(Tcl_Interp *interp, Tcl_Obj *dataObj,
        Tcl_Obj *format, Tk_PhotoHandle imageHandle,
        int destX, int destY, int width, int height, int srcX, int srcY);

static int FileWrite(Tcl_Interp *interp, const char *filename,
        Tcl_Obj *format, Tk_PhotoImageBlock *blockPtr);

static int StringWrite(Tcl_Interp *interp, Tcl_Obj *format,
        Tk_PhotoImageBlock *blockPtr);

static Tk_PhotoImageFormat sImageFormat = {
    (char *) "%PHIMGTYPE%",  /* name */
    FileMatch,               /* fileMatchProc */
    StringMatch,             /* stringMatchProc */
    FileRead,                /* fileReadProc */
    StringRead,              /* stringReadProc */
    FileWrite,               /* fileWriteProc */
    StringWrite,             /* stringWriteProc */
    NULL
};
#endif /* USE_FORMAT_VERSION3 && HAVE_FORMAT_VERSION3 */

#ifdef SECOND_FORMAT
/*
 * Declare procedures of the second format as needed. The macro we
 * check for allow us to share code between first and second
 * format. Current user of this feature: The PS/PDF combo handler
 */

#ifndef SECOND_FILEMATCH
#define SECOND_FILEMATCH FileMatchBeta
static int FileMatchBeta(Tcl_Channel chan, const char *fileName,
        Tcl_Obj *format, int *widthPtr, int *heightPtr, Tcl_Interp *interp);
#endif

#ifndef SECOND_STRINGMATCH
#define SECOND_STRINGMATCH StringMatchBeta
static int StringMatchBeta(Tcl_Obj *dataObj, Tcl_Obj *format,
        int *widthPtr, int *heightPtr, Tcl_Interp *interp);
#endif

#ifndef SECOND_FILEREAD
#define SECOND_FILEREAD FileReadBeta
static int FileReadBeta(Tcl_Interp *interp, Tcl_Channel chan,
        const char *fileName, Tcl_Obj *format, Tk_PhotoHandle imageHandle,
        int destX, int destY, int width, int height, int srcX, int srcY);
#endif

#ifndef SECOND_STRINGREAD
#define SECOND_STRINGREAD StringReadBeta
static int StringReadBeta(Tcl_Interp *interp, Tcl_Obj *dataObj,
        Tcl_Obj *format, Tk_PhotoHandle imageHandle,
        int destX, int destY, int width, int height, int srcX, int srcY);
#endif

#ifndef SECOND_FILEWRITE
#define SECOND_FILEWRITE FileWriteBeta
static int FileWriteBeta(Tcl_Interp *interp, const char *filename,
        Tcl_Obj *format, Tk_PhotoImageBlock *blockPtr);
#endif

#ifndef SECOND_STRINGWRITE
#define SECOND_STRINGWRITE StringWriteBeta
static int StringWriteBeta(Tcl_Interp *interp, Tcl_Obj *format,
        Tk_PhotoImageBlock *blockPtr);
#endif

static Tk_PhotoImageFormat sImageFormatBeta = {
    (char *) "%PHIMGTYPE_BETA%",  /* name */
    SECOND_FILEMATCH,             /* fileMatchProc */
    SECOND_STRINGMATCH,           /* stringMatchProc */
    SECOND_FILEREAD,              /* fileReadProc */
    SECOND_STRINGREAD,            /* stringReadProc */
    SECOND_FILEWRITE,             /* fileWriteProc */
    SECOND_STRINGWRITE,           /* stringWriteProc */
    NULL
};

#endif /* SECOND_FORMAT */


/*
 *----------------------------------------------------------------------------
 *
 * @CPACKAGE@_Init --
 *
 *  Initialisation routine for loadable module
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  Creates commands in the interpreter, loads package.
 *
 *----------------------------------------------------------------------------
 */

int
@CPACKAGE@_Init(
    Tcl_Interp *interp /* Interpreter to initialise. */
) {
    if (!Tcl_InitStubs(interp, "8.6-", 0)) {
        return TCL_ERROR;
    }
#if defined(USE_FORMAT_VERSION3) && HAVE_FORMAT_VERSION3 == 1
    if (!Tk_InitStubs(interp, "8.7-", 0)) {
        return TCL_ERROR;
    }
#else
    if (!Tk_InitStubs(interp, "8.6-", 0)) {
        return TCL_ERROR;
    }
#endif
    if (!Tkimg_InitStubs(interp, TKIMG_VERSION, 0)) {
        return TCL_ERROR;
    }

    MORE_INITIALIZATION;

#if defined(USE_FORMAT_VERSION3) && HAVE_FORMAT_VERSION3 == 1
    Tk_CreatePhotoImageFormatVersion3(&sImageFormatVersion3);
#else
    Tk_CreatePhotoImageFormat(&sImageFormat);
#endif

#ifdef SECOND_FORMAT
    Tk_CreatePhotoImageFormat(&sImageFormatBeta);
#endif

    if (Tcl_PkgProvide(interp, PACKAGE_TCLNAME, TKIMG_VERSION) != TCL_OK) {
        return TCL_ERROR;
    }
    return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * @CPACKAGE@_SafeInit --
 *
 *  Initialisation routine for loadable module in a safe interpreter.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  Creates commands in the interpreter, loads package.
 *
 *----------------------------------------------------------------------------
 */

int
@CPACKAGE@_SafeInit(
    Tcl_Interp *interp /* Interpreter to initialise. */
) {
    return @CPACKAGE@_Init(interp);
}

