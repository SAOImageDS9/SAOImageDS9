/*
 * imgWindow.c --
 *
 * A photo image file handler to put the content of a window in a photo.
 *
 * Author : Jan Nijtmans
 *
 */

/*
 * Generic initialization code, parameterized via CPACKAGE and PACKAGE.
 */

#include "init.c"

#include "X11/Xutil.h"
#if !defined(__WIN32__)
#  if !defined(MAC_OSX_TK)
#   include "X11/Xproto.h"
#  else
#   include "X11/Xlib.h"
#   include "X11/Xfuncproto.h"
#   undef X_GetImage
#  endif
#else
#   include "X11/Xlib.h"
#   include "tkInt.h"
#   include "tkWinInt.h"
#   include "X11/Xfuncproto.h"
#   undef X_GetImage
#endif

/*
 * The format record for the Win data format:
 */

#ifdef X_GetImage
static int xerrorhandler(ClientData clientData, XErrorEvent *e);
#endif

typedef struct ColormapData {	/* Hold color information for a window */
    int separated;		/* Whether to use separate color bands */
    int color;			/* Whether window is color or black/white */
    int ncolors;		/* Number of color values stored */
    XColor *colors;		/* Pixel value -> RGB mappings */
    int red_mask, green_mask, blue_mask;	/* Masks and shifts for each */
    int red_shift, green_shift, blue_shift;	/* color band */
} ColormapData;

/*
 * Prototypes for local procedures defined in this file:
 */

#define UCHAR(c) ((unsigned char) (c))
/*
 *--------------------------------------------------------------
 *
 * xerrorhandler --
 *
 *	This is a dummy function to catch X11 errors during an
 *	attempt to convert a window to a photo image.
 *
 * Results:
 *	None.
 *
 * Side effects:
 *	None.
 *
 *--------------------------------------------------------------
 */

#ifdef X_GetImage
static int
xerrorhandler(clientData, e)
    ClientData clientData;
    XErrorEvent *e;
{
    return 0;
}
#endif

static int
ChnRead(
    Tcl_Interp *interp,
    Tcl_Channel chan,
    const char *fileName,
    Tcl_Obj *format,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY
) {
    return 0;
}

static int ChnWrite(
    Tcl_Interp *interp,
    const char *filename,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr
) {
    return 0;
}

static int StringWrite(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr
) {
    return 0;
}

/*
 *----------------------------------------------------------------------
 *
 * ChnMatch --
 *
 *	This procedure is invoked by the photo image type to see if
 *	a file contains image data in WINDOW format.
 *
 * Results:
 *	The return value is always 0, because a window cannot be
 *	read from a file.
 *
 * Side effects:
 *	None.
 *
 *----------------------------------------------------------------------
 */

static int ChnMatch(
    Tcl_Channel chan,
    const char *filename,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    Tcl_Interp *interp
) {
    return 0;
}

/*
 *----------------------------------------------------------------------
 *
 * ObjMatch --
 *
 *  This procedure is invoked by the photo image type to see if
 *  an object contains image data which can be read from a window.
 *
 * Results:
 *  The return value is 1 if data contains a valid window name.
 *
 * Side effects:
 *  the size of the image is placed in widthPtr and heightPtr.
 *
 *----------------------------------------------------------------------
 */

static int ObjMatch(
    Tcl_Obj *data,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    Tcl_Interp *interp
) {
    Tk_Window tkwin;
    const char *name;

    name = tkimg_GetStringFromObj2(data, NULL);

    if (interp && name && (name[0] == '.') &&
        ((name[1] == 0) || islower(UCHAR(name[1])))) {
	tkwin = Tk_MainWindow(interp);
	if (tkwin == NULL) {
	    return 0;
	}
	tkwin = Tk_NameToWindow(interp, name, tkwin);
	if (tkwin == NULL) {
	    *widthPtr = *heightPtr = 0;
	    return 1;
	}
	*widthPtr =  Tk_Width(tkwin);
	*heightPtr = Tk_Height(tkwin);
	return 1;
    }
    return 0;
}

#if defined(__WIN32__)
    typedef struct _BITMAPCAPTURE {
        HBITMAP hbm;
        LPDWORD pixels;
        INT     width;
        INT     height;
    } BITMAPCAPTURE;

    static BOOL CaptureWindow (BITMAPCAPTURE *bmpCapture, Tk_Window tkwin)
    {
        BOOL bResult = FALSE;
        HWND hWnd;
        HDC hdcScreen;
        HDC hdcCapture;
        int nWidth;
        int nHeight;
        LPBYTE lpCapture;
        BITMAPINFO bmiCapture = {
            { sizeof(BITMAPINFOHEADER), 0, 0, 1, 32, BI_RGB, 0, 0, 0, 0, 0 }
        };

        if (!bmpCapture) {
            return bResult;
        }
         
        ZeroMemory (bmpCapture, sizeof(BITMAPCAPTURE));
         
        hWnd = Tk_GetHWND(Tk_WindowId(tkwin));
        if( ! hWnd ) {
            return bResult;
        }
        hdcScreen  = GetDC(hWnd);
        hdcCapture = CreateCompatibleDC(NULL);
        nWidth  = Tk_Width(tkwin);
        nHeight = Tk_Height(tkwin);

        bmiCapture.bmiHeader.biWidth  = nWidth;
        bmiCapture.bmiHeader.biHeight = -nHeight;

        bmpCapture->hbm = CreateDIBSection (hdcScreen, &bmiCapture,
            DIB_RGB_COLORS, (LPVOID *)&lpCapture, NULL, 0);
        if (bmpCapture->hbm) {
            HBITMAP hbmOld = (HBITMAP)SelectObject(hdcCapture, bmpCapture->hbm);
            BitBlt(hdcCapture, 0, 0, nWidth, nHeight, hdcScreen, 0, 0, SRCCOPY);
            SelectObject(hdcCapture, hbmOld);
            bmpCapture->pixels = (LPDWORD)lpCapture;
            bmpCapture->width  = nWidth;
            bmpCapture->height = nHeight;
            bResult = TRUE;
        }
        DeleteDC(hdcCapture);
        DeleteDC(hdcScreen);
        return bResult;
    }

#endif /* __WIN32__ */

/*
 *----------------------------------------------------------------------
 *
 * ObjRead --
 *
 *	This procedure is called by the photo image type to read
 *	the contents of a window and give it to the photo image.
 *
 * Results:
 *	A standard TCL completion code.  If TCL_ERROR is returned
 *	then an error message is left in interp->result.
 *
 * Side effects:
 *	new data is added to the image given by imageHandle.
 *
 *----------------------------------------------------------------------
 */
static int ObjRead(
    Tcl_Interp *interp,
    Tcl_Obj *data,
    Tcl_Obj *format,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY
) {
    Tk_PhotoImageBlock block;
    Tk_Window tkwin;
    int fileWidth, fileHeight, nBytes, x, y;
    const char *name;
#if !defined(__WIN32__)
    XImage *ximage;
    ColormapData cdata;
    Colormap cmap;
    int i, ncolors;
    Visual *visual;
#else
#   undef XGetPixel
#   define XGetPixel(P,X,Y) GetPixel(P, X, Y)
    TkWinDCState DCi;
    HDC         ximage;
    BITMAPCAPTURE grab;
#endif
    unsigned char *p;
#ifdef X_GetImage
    Tk_ErrorHandler	handle;
#endif
    int green, blue;
    int result = TCL_OK;

    name = tkimg_GetStringFromObj2(data, NULL);

    tkwin = Tk_NameToWindow(interp, name, Tk_MainWindow(interp));

    if (!tkwin) {
	Tcl_AppendResult(interp, "Window \"", name,"\" doesn't exist", (char *) NULL);
	return TCL_ERROR;
    }

    if (!Tk_WindowId(tkwin)) {
	Tcl_AppendResult(interp, "Window \"", name,"\" is not mapped", (char *) NULL);
	return TCL_ERROR;
    }

    fileWidth  = Tk_Width(tkwin);
    fileHeight = Tk_Height(tkwin);

    if ((srcX + width) > fileWidth) {
	width = fileWidth - srcX;
    }
    if ((srcY + height) > fileHeight) {
	height = fileHeight - srcY;
    }
    if ((width <= 0) || (height <= 0)) {
	return TCL_OK;
    }

    /*
     * If the window is off the screen it will generate an BadMatch/XError
     * We catch any BadMatch errors here
     */

#ifdef X_GetImage
    handle = Tk_CreateErrorHandler(Tk_Display(tkwin), BadMatch,
	    X_GetImage, -1, xerrorhandler, (ClientData) tkwin);
#endif

#if !defined(__WIN32__)
    /*
     * Generate an XImage from the window.  We can then read pixel
     * values out of the XImage.
     */

    ximage = XGetImage(Tk_Display(tkwin), Tk_WindowId(tkwin), srcX, srcY,
	width, height, AllPlanes, ZPixmap);

#ifdef X_GetImage
    Tk_DeleteErrorHandler(handle);
#endif

    if (ximage == (XImage*) NULL) {
	Tcl_AppendResult(interp, "Window \"", name,
		"\" cannot be transformed into a pixmap (possibly obscured?)",
		(char *) NULL);
	return TCL_ERROR;
    }
#else
    ximage = TkWinGetDrawableDC(Tk_Display(tkwin), Tk_WindowId(tkwin), &DCi);

    if ( ! CaptureWindow (&grab, tkwin)) {
        Tcl_AppendResult(interp, "Window \"", name, "\" cannot be grabbed", (char *) NULL);
        return TCL_ERROR;
    }

#ifdef X_GetImage
    Tk_DeleteErrorHandler(handle);
#endif
#endif

    if (tkimg_PhotoExpand(interp, imageHandle, destX + width, destY + height) == TCL_ERROR) {
	return TCL_ERROR;
    }

#if !defined(__WIN32__)
    visual = Tk_Visual(tkwin);
    cmap = Tk_Colormap(tkwin);

    /*
     * Obtain information about the colormap, ie the mapping between
     * pixel values and RGB values. The code below should work
     * for all Visual types.
     */

    ncolors = visual->map_entries;
    cdata.colors = (XColor *) ckalloc(sizeof(XColor) * ncolors);
    cdata.ncolors = ncolors;
    if (visual->class == DirectColor || visual->class == TrueColor) {
	cdata.separated = 1;
	cdata.red_mask = visual->red_mask;
	cdata.green_mask = visual->green_mask;
	cdata.blue_mask = visual->blue_mask;
	cdata.red_shift = 0;
	cdata.green_shift = 0;
	cdata.blue_shift = 0;
	while ((0x0001 & (cdata.red_mask >> cdata.red_shift)) == 0)
	    cdata.red_shift ++;
	while ((0x0001 & (cdata.green_mask >> cdata.green_shift)) == 0)
	    cdata.green_shift ++;
	while ((0x0001 & (cdata.blue_mask >> cdata.blue_shift)) == 0)
	    cdata.blue_shift ++;
	for (i = 0; i < ncolors; i ++)
	    cdata.colors[i].pixel =
		    ((i << cdata.red_shift) & cdata.red_mask) |
		    ((i << cdata.green_shift) & cdata.green_mask) |
		    ((i << cdata.blue_shift) & cdata.blue_mask);
    } else {
	cdata.separated = 0;
	cdata.red_mask = 0;
	cdata.green_mask = 0;
	cdata.blue_mask = 0;
	cdata.red_shift = 0;
	cdata.green_shift = 0;
	cdata.blue_shift = 0;
	for (i = 0; i < ncolors; i ++) cdata.colors[i].pixel = i;
    }
    cdata.color = !(visual->class == StaticGray || visual->class == GrayScale);

    XQueryColors(Tk_Display(tkwin), cmap, cdata.colors, ncolors);
#endif

    block.offset[0] = 0;
    block.offset[3] = 0;
#if !defined(__WIN32__)
    if (cdata.color) {
#endif
	block.pixelSize = 3;
	block.offset[1] = green = 1;
	block.offset[2] = blue = 2;
#if !defined(__WIN32__)
    } else {
	block.pixelSize = 1;
	block.offset[1] = green = 0;
	block.offset[2] = blue = 0;
    }
#endif
    block.width = width;
    block.height = height;
    block.pitch = block.pixelSize * width;
    nBytes = block.pitch * height;
    block.pixelPtr = (unsigned char *) ckalloc((unsigned) nBytes);

    p = block.pixelPtr;
    for (y = 0; y<height; y++) {
	for (x = 0; x<width; x++) {
#if !defined(__WIN32__)
	    unsigned long pixel = XGetPixel(ximage, x, y);
	    if (cdata.separated) {
		int r = (pixel & cdata.red_mask) >> cdata.red_shift;
		p[0] = cdata.colors[r].red >> 8;
		if (cdata.color) {
		    int g = (pixel & cdata.green_mask) >> cdata.green_shift;
		    int b = (pixel & cdata.blue_mask) >> cdata.blue_shift;
		    p[1] = cdata.colors[g].green >> 8;
		    p[2] = cdata.colors[b].blue >> 8;
		}
	    } else {
		p[0] = cdata.colors[pixel].red >> 8;
		if (cdata.color) {
		    p[1] = cdata.colors[pixel].green >> 8;
		    p[2] = cdata.colors[pixel].blue >> 8;
		}
	    }
#else
            /* Bitmap has order ARGB. */
            #define BITMAP_PIXEL(b, x, y) ((b).pixels[(y) * (b).width + (x)])
            COLORREF pixel = BITMAP_PIXEL (grab, x, y);
            p[0] = (pixel & 0xFF0000) >> 16;
            p[1] = (pixel & 0xFF00)   >>  8;
            p[2] = (pixel & 0xFF);
#endif
	    p += block.pixelSize;
	}
    }

    if (tkimg_PhotoPutBlock(interp, imageHandle, &block, destX, destY, width, height, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
	result = TCL_ERROR;
    }

#if !defined(__WIN32__)
    XDestroyImage(ximage);
    ckfree((char *) cdata.colors);
#else
    DeleteObject(grab.hbm);
    TkWinReleaseDrawableDC(Tk_WindowId(tkwin), ximage, &DCi);
#endif
    ckfree((char *) block.pixelPtr);
    return result;
}
