/*
 * tkUnixPmap.c --
 *
 *	Implement the Unix specific function calls for the pixmap
 *	image type.
 *
 * Copyright (c) 1996, Expert Interface Technologies
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 */

#include "pixmapInt.h"
#include <stdlib.h>
#include "X11/Xlib.h"
#include "X11/Xutil.h"

#ifdef MAC_OSX_TK
#define XPutImage
#endif

typedef struct PixmapData {
    Pixmap mask;		/* Mask: only display pixmap pixels where
				 * there are 1's here. */
    GC gc;			/* Graphics context for displaying pixmap.
				 * None means there was an error while
				 * setting up the instance, so it cannot
				 * be displayed. */
} PixmapData;


/*----------------------------------------------------------------------
 * TkimgInitPixmapInstance --
 *
 *	Initializes the platform-specific data of a pixmap instance
 *
 *----------------------------------------------------------------------
 */

void
TkimgInitPixmapInstance(
    PixmapMaster *masterPtr,	/* Pointer to master for image. */
    PixmapInstance *instancePtr /* The pixmap instance. */
) {
    PixmapData * dataPtr;

    dataPtr = (PixmapData *)ckalloc(sizeof(PixmapData));
    dataPtr->mask = None;
    dataPtr->gc = NULL;

    instancePtr->clientData = (ClientData)dataPtr;
}

/*----------------------------------------------------------------------
 * TkimgXpmAllocTmpBuffer --
 *
 *	Allocate a temporary space to draw the image.
 *
 *----------------------------------------------------------------------
 */

void
TkimgXpmAllocTmpBuffer(
    PixmapMaster * masterPtr,
    PixmapInstance * instancePtr,
    XImage ** imagePtr,
    XImage ** maskPtr
) {
    int pad;
    XImage * image = NULL, * mask = NULL;
    Display *display = Tk_Display(instancePtr->tkwin);
    int depth;

    depth = Tk_Depth(instancePtr->tkwin);

    if (depth > 16) {
	pad = 32;
    } else if (depth > 8) {
	pad = 16;
    } else {
	pad = 8;
    }

    /*
     * Create the XImage structures to store the temporary image
     */
    image = XCreateImage(display,
	Tk_Visual(instancePtr->tkwin),
	depth, ZPixmap, 0, 0,
	masterPtr->size[0], masterPtr->size[1], pad, 0);
    image->data =
      (char *)ckalloc(image->bytes_per_line * masterPtr->size[1]);

    mask  = XCreateImage(display,
	Tk_Visual(instancePtr->tkwin),
	1, XYPixmap, 0, 0,
	masterPtr->size[0], masterPtr->size[1], pad, 0);

    mask->data =
      (char *)ckalloc(mask->bytes_per_line  * masterPtr->size[1]);

    *imagePtr = image;
    *maskPtr = mask;
}

void
TkimgXpmFreeTmpBuffer(
    PixmapMaster * masterPtr,
    PixmapInstance * instancePtr,
    XImage * image,
    XImage * mask
) {
    if (image) {
	ckfree((char*)image->data);
	image->data = NULL;
	XDestroyImage(image);
    }
    if (mask) {
	ckfree((char*)mask->data);
	mask->data = NULL;
	XDestroyImage(mask);
    }
}

/*----------------------------------------------------------------------
 * TkimgXpmSetPixel --
 *
 *	Sets the pixel at the given (x,y) coordinate to be the given
 *	color.
 *----------------------------------------------------------------------
 */
void
TkimgXpmSetPixel(
    PixmapInstance * instancePtr,
    XImage * image,
    XImage * mask,
    int x,
    int y,
    XColor * colorPtr,
    int * isTranspPtr
) {
    if (colorPtr != NULL) {
	XPutPixel(image, x, y, colorPtr->pixel);
	XPutPixel(mask,  x, y, 1);
    } else {
	XPutPixel(mask,  x, y, 0);
	*isTranspPtr = 1;
    }
}

/*----------------------------------------------------------------------
 * TkimgXpmRealizePixmap --
 *
 *	On Unix: 	Create the pixmap from the buffer.
 *	On Windows:	Free the mask if there are no transparent pixels.
 *----------------------------------------------------------------------
 */

void
TkimgXpmRealizePixmap(
    PixmapMaster * masterPtr,
    PixmapInstance * instancePtr,
    XImage * image,
    XImage * mask,
    int isTransp
) {
    Display *display = Tk_Display(instancePtr->tkwin);
    int depth = Tk_Depth(instancePtr->tkwin);
    PixmapData *dataPtr = (PixmapData*)instancePtr->clientData;
    unsigned int gcMask;
    XGCValues gcValues;
    GC gc;

    instancePtr->pixmap = Tk_GetPixmap(display,
	Tk_WindowId(instancePtr->tkwin),
	masterPtr->size[0], masterPtr->size[1], depth);

    gc = Tk_GetGC(instancePtr->tkwin, 0, NULL);

    XPutImage(display, instancePtr->pixmap,
	gc, image, 0, 0, 0, 0, masterPtr->size[0], masterPtr->size[1]);

    Tk_FreeGC(display, gc);

    if (isTransp) {
	/*
	 * There are transparent pixels. We need a mask.
	 */
	dataPtr->mask = Tk_GetPixmap(display,
	    Tk_WindowId(instancePtr->tkwin),
	    masterPtr->size[0], masterPtr->size[1], 1);
	gc = XCreateGC(display, dataPtr->mask, 0, NULL);
	XPutImage(display, dataPtr->mask,
	    gc, mask,  0, 0, 0, 0, masterPtr->size[0], masterPtr->size[1]);
	XFreeGC(display, gc);
    } else {
	dataPtr->mask = None;
    }

    /*
     * Allocate a GC for drawing this instance (mask is not used if there
     * is no transparent pixels inside the image).
     */
    if (dataPtr->mask != None) {
	gcMask = GCGraphicsExposures|GCClipMask;
    } else {
	gcMask = GCGraphicsExposures;
    }
    gcValues.graphics_exposures = False;
    gcValues.clip_mask = dataPtr->mask;

    gc = Tk_GetGC(instancePtr->tkwin, gcMask, &gcValues);
    dataPtr->gc = gc;
}

void
TkimgXpmFreeInstanceData(
    PixmapInstance *instancePtr,	/* Pixmap instance. */
    int delete				/* Should the instance data structure
					 * be deleted as well? */
) {
    PixmapData *dataPtr = (PixmapData*)instancePtr->clientData;

    if (dataPtr->mask != None) {
	Tk_FreePixmap(Tk_Display(instancePtr->tkwin), dataPtr->mask);
	dataPtr->mask = None;
    }
    if (dataPtr->gc != NULL) {
	Tk_FreeGC(Tk_Display(instancePtr->tkwin), dataPtr->gc);
	dataPtr->gc = NULL;
    }
    if (delete) {
	ckfree((char*)dataPtr);
	instancePtr->clientData = NULL;
    }
}

void
TkimgpXpmDisplay(
    ClientData clientData,	/* Pointer to PixmapInstance structure for
				 * for instance to be displayed. */
    Display *display,		/* Display on which to draw image. */
    Drawable drawable,		/* Pixmap or window in which to draw image. */
    int imageX, int imageY,	/* Upper-left corner of region within image
				 * to draw. */
    int width, int height,	/* Dimensions of region within image to draw.*/
    int drawableX, int drawableY/* Coordinates within drawable that
				 * correspond to imageX and imageY. */
) {
    PixmapInstance *instancePtr = (PixmapInstance *) clientData;
    PixmapData *dataPtr = (PixmapData*)instancePtr->clientData;

    /*
     * If there's no graphics context, it means that an error occurred
     * while creating the image instance so it can't be displayed.
     */
    if (dataPtr->gc == NULL) {
	return;
    }

    /*
     * We always use clipping: modify the clip origin within
     * the graphics context to line up with the image's origin.
     * Then draw the image and reset the clip origin.
     */
    XSetClipOrigin(display, dataPtr->gc, drawableX - imageX,
	drawableY - imageY);
    XCopyArea(display, instancePtr->pixmap, drawable, dataPtr->gc,
	imageX, imageY, (unsigned) width, (unsigned) height,
	drawableX, drawableY);
    XSetClipOrigin(display, dataPtr->gc, 0, 0);
}

