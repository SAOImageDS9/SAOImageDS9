/*
 * tkMacOSXImage.c --
 *
 *	The code in this file provides an interface for XImages,
 *
 * Copyright (c) 1995-1997 Sun Microsystems, Inc.
 * Copyright 2001-2009, Apple Inc.
 * Copyright (c) 2005-2009 Daniel A. Steffen <das@users.sourceforge.net>
 * Copyright (c) 2017-2020 Marc Culler.
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 */

#include "tkMacOSXPrivate.h"
#include "xbytes.h"

static CGImageRef CreateCGImageFromPixmap(Drawable pixmap);
static CGImageRef CreateCGImageFromDrawableRect( Drawable drawable,
	   int x, int y, unsigned int width, unsigned int height);

#pragma mark XImage handling

int
_XInitImageFuncPtrs(
    XImage *image)
{
    return 0;
}

/*
 *----------------------------------------------------------------------
 *
 * TkMacOSXCreateCGImageWithXImage --
 *
 *	Create CGImage from XImage, copying the image data.  Called
 *      in Tk_PutImage and (currently) nowhere else.
 *
 * Results:
 *	CGImage, release after use.
 *
 * Side effects:
 *	None.
 *
 *----------------------------------------------------------------------
 */

static void ReleaseData(void *info, const void *data, size_t size) {
    ckfree(info);
}

CGImageRef
TkMacOSXCreateCGImageWithXImage(
    XImage *image)
{
    CGImageRef img = NULL;
    size_t bitsPerComponent, bitsPerPixel;
    size_t len = image->bytes_per_line * image->height;
    const CGFloat *decode = NULL;
    CGBitmapInfo bitmapInfo;
    CGDataProviderRef provider = NULL;
    char *data = NULL;
    CGDataProviderReleaseDataCallback releaseData = ReleaseData;

    if (image->bits_per_pixel == 1) {
	/*
	 * BW image
	 */

	/* Reverses the sense of the bits */
	static const CGFloat decodeWB[2] = {1, 0};
	decode = decodeWB;

	bitsPerComponent = 1;
	bitsPerPixel = 1;
	if (image->bitmap_bit_order != MSBFirst) {
	    char *srcPtr = image->data + image->xoffset;
	    char *endPtr = srcPtr + len;
	    char *destPtr = (data = ckalloc(len));

	    while (srcPtr < endPtr) {
		*destPtr++ = xBitReverseTable[(unsigned char)(*(srcPtr++))];
	    }
	} else {
	    data = memcpy(ckalloc(len), image->data + image->xoffset, len);
	}
	if (data) {
	    provider = CGDataProviderCreateWithData(data, data, len,
		    releaseData);
	}
	if (provider) {
	    img = CGImageMaskCreate(image->width, image->height,
		    bitsPerComponent, bitsPerPixel, image->bytes_per_line,
		    provider, decode, 0);
	}
    } else if ((image->format == ZPixmap) && (image->bits_per_pixel == 32)) {
	/*
	 * Color image
	 */

	CGColorSpaceRef colorspace = CGColorSpaceCreateDeviceRGB();

	if (image->width == 0 && image->height == 0) {
	    /*
	     * CGCreateImage complains on early macOS releases.
	     */

	    return NULL;
	}
	bitsPerComponent = 8;
	bitsPerPixel = 32;
	bitmapInfo = (image->byte_order == MSBFirst ?
		kCGBitmapByteOrder32Little : kCGBitmapByteOrder32Big);
	bitmapInfo |= kCGImageAlphaLast;
	data = memcpy(ckalloc(len), image->data + image->xoffset, len);
	if (data) {
	    provider = CGDataProviderCreateWithData(data, data, len,
		    releaseData);
	}
	if (provider) {
	    img = CGImageCreate(image->width, image->height, bitsPerComponent,
		    bitsPerPixel, image->bytes_per_line, colorspace, bitmapInfo,
		    provider, decode, 0, kCGRenderingIntentDefault);
	    CFRelease(provider);
	}
	if (colorspace) {
	    CFRelease(colorspace);
	}
    } else {
	TkMacOSXDbgMsg("Unsupported image type");
    }
    return img;
}

/*
 *----------------------------------------------------------------------
 *
 * DestroyImage --
 *
 *	Destroys storage associated with an image.
 *
 * Results:
 *	None.
 *
 * Side effects:
 *	Deallocates the image.
 *
 *----------------------------------------------------------------------
 */

static int
DestroyImage(
    XImage *image)
{
    if (image) {
	if (image->data) {
	    ckfree(image->data);
	}
	ckfree(image);
    }
    return 0;
}

/*
 *----------------------------------------------------------------------
 *
 * ImageGetPixel --
 *
 *	Get a single pixel from an image.
 *
 * Results:
 *      The XColor structure contains an unsigned long field named pixel which
 *      identifies the color.  This function returns the unsigned long that
 *      would be used as the pixel value of an XColor that has the same red
 *      green and blue components as the XImage pixel at the specified
 *      location.
 *
 * Side effects:
 *	None.
 *
 *----------------------------------------------------------------------
 */

static unsigned long
ImageGetPixel(
    XImage *image,
    int x,
    int y)
{
    unsigned char r = 0, g = 0, b = 0;

    /*
     * Compute 8 bit red green and blue values, which are passed as inputs to
     * TkMacOSXRGBPixel to produce the pixel value.
     */

    if (image && image->data) {
	unsigned char *srcPtr = ((unsigned char*) image->data)
		+ (y * image->bytes_per_line)
		+ (((image->xoffset + x) * image->bits_per_pixel) / NBBY);

	switch (image->bits_per_pixel) {
	case 32: /* 8 bits per channel */
	    r = (*((unsigned int*) srcPtr) >> 16) & 0xff;
	    g = (*((unsigned int*) srcPtr) >>  8) & 0xff;
	    b = (*((unsigned int*) srcPtr)      ) & 0xff;
	    /*if (image->byte_order == LSBFirst) {
		r = srcPtr[2]; g = srcPtr[1]; b = srcPtr[0];
	    } else {
		r = srcPtr[1]; g = srcPtr[2]; b = srcPtr[3];
	    }*/
	    break;
	case 16: /* 5 bits per channel */
	    r = (*((unsigned short*) srcPtr) >> 7) & 0xf8;
	    g = (*((unsigned short*) srcPtr) >> 2) & 0xf8;
	    b = (*((unsigned short*) srcPtr) << 3) & 0xf8;
	    break;
	case 8: /* 2 bits per channel */
	    r = (*srcPtr << 2) & 0xc0;
	    g = (*srcPtr << 4) & 0xc0;
	    b = (*srcPtr << 6) & 0xc0;
	    r |= r >> 2 | r >> 4 | r >> 6;
	    g |= g >> 2 | g >> 4 | g >> 6;
	    b |= b >> 2 | b >> 4 | b >> 6;
	    break;
	case 4: { /* 1 bit per channel */
	    unsigned char c = (x % 2) ? *srcPtr : (*srcPtr >> 4);

	    r = (c & 0x04) ? 0xff : 0;
	    g = (c & 0x02) ? 0xff : 0;
	    b = (c & 0x01) ? 0xff : 0;
	    break;
	}
	case 1: /* Black-white bitmap. */
	    r = g = b = ((*srcPtr) & (0x80 >> (x % 8))) ? 0xff : 0;
	    break;
	}
    }

    return TkMacOSXRGBPixel(r, g, b);
}

/*
 *----------------------------------------------------------------------
 *
 * ImagePutPixel --
 *
 *	Set a single pixel in an image.
 *
 * Results:
 *	None.
 *
 * Side effects:
 *	None.
 *
 *----------------------------------------------------------------------
 */

static int
ImagePutPixel(
    XImage *image,
    int x,
    int y,
    unsigned long pixel)
{
    if (image && image->data) {
	unsigned char *dstPtr = ((unsigned char*) image->data)
		+ (y * image->bytes_per_line)
		+ (((image->xoffset + x) * image->bits_per_pixel) / NBBY);

	if (image->bits_per_pixel == 32) {
	    *((unsigned int*) dstPtr) = pixel;
	} else {
	    unsigned char r = ((pixel & image->red_mask)   >> 16) & 0xff;
	    unsigned char g = ((pixel & image->green_mask) >>  8) & 0xff;
	    unsigned char b = ((pixel & image->blue_mask)       ) & 0xff;
	    switch (image->bits_per_pixel) {
	    case 16:
		*((unsigned short*) dstPtr) = ((r & 0xf8) << 7) |
			((g & 0xf8) << 2) | ((b & 0xf8) >> 3);
		break;
	    case 8:
		*dstPtr = ((r & 0xc0) >> 2) | ((g & 0xc0) >> 4) |
			((b & 0xc0) >> 6);
		break;
	    case 4: {
		unsigned char c = ((r & 0x80) >> 5) | ((g & 0x80) >> 6) |
			((b & 0x80) >> 7);
		*dstPtr = (x % 2) ? ((*dstPtr & 0xf0) | (c & 0x0f)) :
			((*dstPtr & 0x0f) | ((c << 4) & 0xf0));
		break;
		}
	    case 1:
		*dstPtr = ((r|g|b) & 0x80) ? (*dstPtr | (0x80 >> (x % 8))) :
			(*dstPtr & ~(0x80 >> (x % 8)));
		break;
	    }
	}
    }
    return 0;
}

/*
 *----------------------------------------------------------------------
 *
 * XCreateImage --
 *
 *	Allocates storage for a new XImage.
 *
 * Results:
 *	Returns a newly allocated XImage.
 *
 * Side effects:
 *	None.
 *
 *----------------------------------------------------------------------
 */

XImage *
XCreateImage(
    Display* display,
    Visual* visual,
    unsigned int depth,
    int format,
    int offset,
    char* data,
    unsigned int width,
    unsigned int height,
    int bitmap_pad,
    int bytes_per_line)
{
    XImage *ximage;

    display->request++;
    ximage = ckalloc(sizeof(XImage));

    ximage->height = height;
    ximage->width = width;
    ximage->depth = depth;
    ximage->xoffset = offset;
    ximage->format = format;
    ximage->data = data;
    ximage->obdata = NULL;

    if (format == ZPixmap) {
	ximage->bits_per_pixel = 32;
	ximage->bitmap_unit = 32;
    } else {
	ximage->bits_per_pixel = 1;
	ximage->bitmap_unit = 8;
    }
    if (bitmap_pad) {
	ximage->bitmap_pad = bitmap_pad;
    } else {
	/*
	 * Use 16 byte alignment for best Quartz perfomance.
	 */

	ximage->bitmap_pad = 128;
    }
    if (bytes_per_line) {
	ximage->bytes_per_line = bytes_per_line;
    } else {
	ximage->bytes_per_line = ((width * ximage->bits_per_pixel +
		(ximage->bitmap_pad - 1)) >> 3) &
		~((ximage->bitmap_pad >> 3) - 1);
    }
#ifdef WORDS_BIGENDIAN
    ximage->byte_order = MSBFirst;
    ximage->bitmap_bit_order = MSBFirst;
#else
    ximage->byte_order = LSBFirst;
    ximage->bitmap_bit_order = LSBFirst;
#endif
    ximage->red_mask = 0x00FF0000;
    ximage->green_mask = 0x0000FF00;
    ximage->blue_mask = 0x000000FF;
    ximage->f.create_image = NULL;
    ximage->f.destroy_image = DestroyImage;
    ximage->f.get_pixel = ImageGetPixel;
    ximage->f.put_pixel = ImagePutPixel;
    ximage->f.sub_image = NULL;
    ximage->f.add_pixel = NULL;

    return ximage;
}

/*
 *----------------------------------------------------------------------
 *
 * TkPutImage, XPutImage --
 *
 *	Copies a rectangular subimage of an XImage into a drawable.  Currently
 *      this is only called by TkImgPhotoDisplay, using a Window as the
 *      drawable.
 *
 * Results:
 *	None.
 *
 * Side effects:
 *	Draws the image on the specified drawable.
 *
 *----------------------------------------------------------------------
 */

int
XPutImage(
    Display* display,		/* Display. */
    Drawable drawable,		/* Drawable to place image on. */
    GC gc,			/* GC to use. */
    XImage* image,		/* Image to place. */
    int src_x,			/* Source X & Y. */
    int src_y,
    int dest_x,			/* Destination X & Y. */
    int dest_y,
    unsigned int width,	        /* Same width & height for both */
    unsigned int height)	/* destination and source. */
{
    TkMacOSXDrawingContext dc;
    MacDrawable *macDraw = (MacDrawable *)drawable;

    display->request++;
    if (!TkMacOSXSetupDrawingContext(drawable, gc, &dc)) {
	return BadDrawable;
    }
    if (dc.context) {
	CGRect bounds, srcRect, dstRect;
	CGImageRef img = TkMacOSXCreateCGImageWithXImage(image);

	/*
	 * The CGContext for a pixmap is RGB only, with A = 0.
	 */

	if (!(macDraw->flags & TK_IS_PIXMAP)) {
	    CGContextSetBlendMode(dc.context, kCGBlendModeSourceAtop);
	}
	if (img) {

	    bounds = CGRectMake(0, 0, image->width, image->height);
	    srcRect = CGRectMake(src_x, src_y, width, height);
	    dstRect = CGRectMake(dest_x, dest_y, width, height);
	    TkMacOSXDrawCGImage(drawable, gc, dc.context,
				img, gc->foreground, gc->background,
				bounds, srcRect, dstRect);
	    CFRelease(img);
	} else {
	    TkMacOSXDbgMsg("Invalid source drawable");
	}
    } else {
	TkMacOSXDbgMsg("Invalid destination drawable");
    }
    TkMacOSXRestoreDrawingContext(&dc);
    return Success;
}

int
TkPutImage(
    unsigned long *colors,	/* Array of pixel values used by this image.
				 * May be NULL. */
    int ncolors,		/* Number of colors used, or 0. */
    Display *display,
    Drawable d,			/* Destination drawable. */
    GC gc,
    XImage *image,		/* Source image. */
    int src_x, int src_y,	/* Offset of subimage. */
    int dest_x, int dest_y,	/* Position of subimage origin in drawable. */
    unsigned int width, unsigned int height)
				/* Dimensions of subimage. */
{
    return XPutImage(display, d, gc, image, src_x, src_y, dest_x, dest_y, width, height);
}

/*
 *----------------------------------------------------------------------
 *
 * CreateCGImageFromDrawableRect
 *
 *	Extract image data from a MacOSX drawable as a CGImage.
 *
 *      This is only called by XGetImage and XCopyArea.  The Tk core uses
 *      these functions on some platforms, but on macOS the core does not
 *      call them with a source drawable which is a window.  Such calls are
 *      used only for double-buffered drawing.  Since macOS defines the
 *      macro TK_NO_DOUBLE_BUFFERING, the generic code never calls XGetImage
 *      or XCopyArea on macOS.  Nonetheless, these function are in the stubs
 *      table and therefore could be used by extensions.
 *
 *      This implementation does not work correctly.  Originally it relied on
 *      [NSBitmapImageRep initWithFocusedViewRect:view_rect] which was
 *      deprecated by Apple in OSX 10.14 and also required the use of other
 *      deprecated functions such as [NSView lockFocus]. Apple's suggested
 *      replacement is [NSView cacheDisplayInRect: toBitmapImageRep:] and that
 *      is what is being used here.  However, that method only works when the
 *      view has a valid CGContext, and a view is only guaranteed to have a
 *      valid context during a call to [NSView drawRect]. To further complicate
 *      matters, cacheDisplayInRect calls [NSView drawRect]. Essentially it is
 *      asking the view to draw a subrectangle of itself using a special
 *      graphics context which is linked to the BitmapImageRep. But our
 *      implementation of [NSView drawRect] does not allow recursive calls. If
 *      called recursively it returns immediately without doing any drawing.
 *      So the bottom line is that this function either returns a NULL pointer
 *      or a black image. To make it useful would require a significant amount
 *      of rewriting of the drawRect method. Perhaps the next release of OSX
 *      will include some more helpful ways of doing this.
 *
 * Results:
 *	Returns an NSBitmapRep representing the image of the given rectangle of
 *      the given drawable. This object is retained. The caller is responsible
 *      for releasing it.
 *
 *      NOTE: The x,y coordinates should be relative to a coordinate system
 *      with origin at the top left, as used by XImage and CGImage, not bottom
 *      left as used by NSView.
 *
 * Side effects:
 *     None
 *
 *----------------------------------------------------------------------
 */

static CGImageRef
CreateCGImageFromDrawableRect(
    Drawable drawable,
    int x,
    int y,
    unsigned int width,
    unsigned int height)
{
    MacDrawable *mac_drawable = (MacDrawable *)drawable;
    CGContextRef cg_context = NULL;
    CGImageRef cg_image = NULL, result = NULL;
    NSBitmapImageRep *bitmapRep = nil;
    NSView *view = nil;
    if (mac_drawable->flags & TK_IS_PIXMAP) {
	/*
	 * This MacDrawable is a bitmap, so its view is NULL.
	 */

	CGRect image_rect = CGRectMake(x, y, width, height);

	cg_context = TkMacOSXGetCGContextForDrawable(drawable);
	cg_image = CGBitmapContextCreateImage((CGContextRef) cg_context);
	if (cg_image) {
	    result = CGImageCreateWithImageInRect(cg_image, image_rect);
	    CGImageRelease(cg_image);
	}
    } else if (TkMacOSXGetNSViewForDrawable(mac_drawable) != nil) {

	/*
	 * Convert Tk top-left to NSView bottom-left coordinates.
	 */

	int view_height = [view bounds].size.height;
	NSRect view_rect = NSMakeRect(x + mac_drawable->xOff,
		view_height - height - y - mac_drawable->yOff,
		width, height);

	/*
	 * Attempt to copy from the view to a bitmapImageRep.  If the view does
	 * not have a valid CGContext, doing this will silently corrupt memory
	 * and make a big mess. So, in that case, we just return NULL.
	 */

	if (view == [NSView focusView]) {
	    bitmapRep = [view bitmapImageRepForCachingDisplayInRect: view_rect];
	    [view cacheDisplayInRect:view_rect toBitmapImageRep:bitmapRep];
	    result = [bitmapRep CGImage];
	    CFRelease(bitmapRep);
	} else {
	    TkMacOSXDbgMsg("No CGContext - cannot copy from screen to bitmap.");
	    result = NULL;
	}
    } else {
	TkMacOSXDbgMsg("Invalid source drawable");
    }
    return result;
}

/*
 *----------------------------------------------------------------------
 *
 * CreateCGImageFromPixmap --
 *
 *	Create a CGImage from an X Pixmap.
 *
 * Results:
 *	CGImage, release after use.
 *
 * Side effects:
 *	None.
 *
 *----------------------------------------------------------------------
 */

static CGImageRef
CreateCGImageFromPixmap(
    Drawable pixmap)
{
    CGImageRef img = NULL;
    CGContextRef context = TkMacOSXGetCGContextForDrawable(pixmap);

    if (context) {
	img = CGBitmapContextCreateImage(context);
    }
    return img;
}

/*
 *----------------------------------------------------------------------
 *
 * XGetImage --
 *
 *	This function copies data from a pixmap or window into an XImage.  It
 *      is essentially never used. At one time it was called by
 *      pTkImgPhotoDisplay, but that is no longer the case. Currently it is
 *      called two places, one of which is requesting an XY image which we do
 *      not support.  It probably does not work correctly -- see the comments
 *      for CGImageFromDrawableRect.
 *
 * Results:
 *	Returns a newly allocated XImage containing the data from the given
 *	rectangle of the given drawable, or NULL if the XImage could not be
 *	constructed.
 *
 * Side effects:
 *	None.
 *
 *----------------------------------------------------------------------
 */
struct pixel_fmt {int r; int g; int b; int a;};
static struct pixel_fmt bgra = {2, 1, 0, 3};
static struct pixel_fmt abgr = {3, 2, 1, 0};

XImage *
XGetImage(
    Display *display,
    Drawable drawable,
    int x,
    int y,
    unsigned int width,
    unsigned int height,
    unsigned long plane_mask,
    int format)
{
    NSBitmapImageRep* bitmapRep = nil;
    NSUInteger bitmap_fmt = 0;
    XImage* imagePtr = NULL;
    char* bitmap = NULL;
    char R, G, B, A;
    int depth = 32, offset = 0, bitmap_pad = 0;
    unsigned int bytes_per_row, size, row, n, m;

    if (format == ZPixmap) {
	CGImageRef cgImage;
	if (width == 0 || height == 0) {
	    return NULL;
	}

	cgImage = CreateCGImageFromDrawableRect(drawable, x, y, width, height);
	if (cgImage) {
	    bitmapRep = [NSBitmapImageRep alloc];
	    [bitmapRep initWithCGImage:cgImage];
	    CFRelease(cgImage);
	} else {
	    TkMacOSXDbgMsg("XGetImage: Failed to construct CGImage");
	    return NULL;
	}
	bitmap_fmt = [bitmapRep bitmapFormat];
	size = [bitmapRep bytesPerPlane];
	bytes_per_row = [bitmapRep bytesPerRow];
	bitmap = ckalloc(size);
	if (!bitmap
		|| (bitmap_fmt != 0 && bitmap_fmt != 1)
		|| [bitmapRep samplesPerPixel] != 4
		|| [bitmapRep isPlanar] != 0
		|| bytes_per_row < 4 * width
		|| size != bytes_per_row * height) {
	    TkMacOSXDbgMsg("XGetImage: Unrecognized bitmap format");
	    CFRelease(bitmapRep);
	    return NULL;
	}
	memcpy(bitmap, (char *)[bitmapRep bitmapData], size);
	CFRelease(bitmapRep);

	/*
	 * When Apple extracts a bitmap from an NSView, it may be in either
	 * BGRA or ABGR format.  For an XImage we need RGBA.
	 */

	struct pixel_fmt pixel = bitmap_fmt == 0 ? bgra : abgr;

	for (row = 0, n = 0; row < height; row++, n += bytes_per_row) {
	    for (m = n; m < n + 4*width; m += 4) {
		R = *(bitmap + m + pixel.r);
		G = *(bitmap + m + pixel.g);
		B = *(bitmap + m + pixel.b);
		A = *(bitmap + m + pixel.a);

		*(bitmap + m)     = R;
		*(bitmap + m + 1) = G;
		*(bitmap + m + 2) = B;
		*(bitmap + m + 3) = A;
	    }
	}
	imagePtr = XCreateImage(display, NULL, depth, format, offset,
		(char*) bitmap, width, height,
		bitmap_pad, bytes_per_row);
    } else {
	/*
	 * There are some calls to XGetImage in the generic Tk code which pass
	 * an XYPixmap rather than a ZPixmap.  XYPixmaps should be handled
	 * here.
	 */
	TkMacOSXDbgMsg("XGetImage does not handle XYPixmaps at the moment.");
    }
    return imagePtr;
}

/*
 *----------------------------------------------------------------------
 *
 * XCopyArea --
 *
 *	Copies image data from one drawable to another.
 *
 * Results:
 *	None.
 *
 * Side effects:
 *	Image data is moved from a window or bitmap to a second window or bitmap.
 *
 *----------------------------------------------------------------------
 */

int
XCopyArea(
    Display *display,		/* Display. */
    Drawable src,		/* Source drawable. */
    Drawable dst,		/* Destination drawable. */
    GC gc,			/* GC to use. */
    int src_x,			/* X & Y, width & height */
    int src_y,			/* define the source rectangle */
    unsigned int width,		/* that will be copied. */
    unsigned int height,
    int dest_x,			/* Dest X & Y on dest rect. */
    int dest_y)
{
    TkMacOSXDrawingContext dc;
    MacDrawable *srcDraw = (MacDrawable *)src;
    CGImageRef img = NULL;
    CGRect bounds, srcRect, dstRect;

    display->request++;
    if (!width || !height) {
	return BadDrawable;
    }

    if (!TkMacOSXSetupDrawingContext(dst, gc, &dc)) {
	TkMacOSXDbgMsg("Failed to setup drawing context.");
	return BadDrawable;
    }

    if (!dc.context) {
	TkMacOSXDbgMsg("Invalid destination drawable - no context.");
	return BadDrawable;
    }

    if (srcDraw->flags & TK_IS_PIXMAP) {
	img = CreateCGImageFromPixmap(src);
    } else if (TkMacOSXGetNSWindowForDrawable(src)) {
	img = CreateCGImageFromDrawableRect(src, src_x, src_y, width, height);
    } else {
	TkMacOSXDbgMsg("Invalid source drawable - neither window nor pixmap.");
    }

    if (img) {
	bounds = CGRectMake(0, 0, srcDraw->size.width, srcDraw->size.height);
	srcRect = CGRectMake(src_x, src_y, width, height);
	dstRect = CGRectMake(dest_x, dest_y, width, height);
	TkMacOSXDrawCGImage(dst, gc, dc.context, img,
		gc->foreground, gc->background, bounds, srcRect, dstRect);
	CFRelease(img);
    } else {
	TkMacOSXDbgMsg("Failed to construct CGImage.");
    }

    TkMacOSXRestoreDrawingContext(&dc);
    return Success;
}

/*
 *----------------------------------------------------------------------
 *
 * XCopyPlane --
 *
 *	Copies a bitmap from a source drawable to a destination drawable. The
 *	plane argument specifies which bit plane of the source contains the
 *	bitmap. Note that this implementation ignores the gc->function.
 *
 * Results:
 *	None.
 *
 * Side effects:
 *	Changes the destination drawable.
 *
 *----------------------------------------------------------------------
 */

int
XCopyPlane(
    Display *display,		/* Display. */
    Drawable src,		/* Source drawable. */
    Drawable dst,		/* Destination drawable. */
    GC gc,				/* GC to use. */
    int src_x,			/* X & Y, width & height */
    int src_y,			/* define the source rectangle */
    unsigned int width,	/* that will be copied. */
    unsigned int height,
    int dest_x,			/* Dest X & Y on dest rect. */
    int dest_y,
    unsigned long plane)	/* Which plane to copy. */
{
    TkMacOSXDrawingContext dc;
    MacDrawable *srcDraw = (MacDrawable *)src;
    MacDrawable *dstDraw = (MacDrawable *)dst;
    CGRect bounds, srcRect, dstRect;
    display->request++;
    if (!width || !height) {
	/* TkMacOSXDbgMsg("Drawing of empty area requested"); */
	return BadDrawable;
    }
    if (plane != 1) {
	Tcl_Panic("Unexpected plane specified for XCopyPlane");
    }
    if (srcDraw->flags & TK_IS_PIXMAP) {
	if (!TkMacOSXSetupDrawingContext(dst, gc, &dc)) {
	    return BadDrawable;
	}

	CGContextRef context = dc.context;

	if (context) {
	    CGImageRef img = CreateCGImageFromPixmap(src);

	    if (img) {
		TkpClipMask *clipPtr = (TkpClipMask *) gc->clip_mask;
		unsigned long imageBackground  = gc->background;

                if (clipPtr && clipPtr->type == TKP_CLIP_PIXMAP) {
		    srcRect = CGRectMake(src_x, src_y, width, height);
		    CGImageRef mask = CreateCGImageFromPixmap(
			    clipPtr->value.pixmap);
		    CGImageRef submask = CGImageCreateWithImageInRect(
			    img, srcRect);
		    CGRect rect = CGRectMake(dest_x, dest_y, width, height);

		    rect = CGRectOffset(rect, dstDraw->xOff, dstDraw->yOff);
		    CGContextSaveGState(context);

		    /*
		     * Move the origin of the destination to top left.
		     */

		    CGContextTranslateCTM(context,
			    0, rect.origin.y + CGRectGetMaxY(rect));
		    CGContextScaleCTM(context, 1, -1);

		    /*
		     * Fill with the background color, clipping to the mask.
		     */

		    CGContextClipToMask(context, rect, submask);
		    TkMacOSXSetColorInContext(gc, gc->background, dc.context);
		    CGContextFillRect(context, rect);

		    /*
		     * Fill with the foreground color, clipping to the
		     * intersection of img and mask.
		     */

		    CGImageRef subimage = CGImageCreateWithImageInRect(
			    img, srcRect);
		    CGContextClipToMask(context, rect, subimage);
		    TkMacOSXSetColorInContext(gc, gc->foreground, context);
		    CGContextFillRect(context, rect);
		    CGContextRestoreGState(context);
		    CGImageRelease(img);
		    CGImageRelease(mask);
		    CGImageRelease(submask);
		    CGImageRelease(subimage);
		} else {
		    bounds = CGRectMake(0, 0,
			    srcDraw->size.width, srcDraw->size.height);
		    srcRect = CGRectMake(src_x, src_y, width, height);
		    dstRect = CGRectMake(dest_x, dest_y, width, height);
		    TkMacOSXDrawCGImage(dst, gc, dc.context, img,
			    gc->foreground, imageBackground, bounds,
			    srcRect, dstRect);
		    CGImageRelease(img);
		}
	    } else {
		/* no image */
		TkMacOSXDbgMsg("Invalid source drawable");
	    }
	} else {
	    TkMacOSXDbgMsg("Invalid destination drawable - "
		    "could not get a bitmap context.");
	}
	TkMacOSXRestoreDrawingContext(&dc);
	return Success;
    } else {
	/*
	 * Source drawable is a Window, not a Pixmap.
	 */

	return XCopyArea(display, src, dst, gc, src_x, src_y, width, height,
		dest_x, dest_y);
    }
}

/*
 * Local Variables:
 * mode: objc
 * c-basic-offset: 4
 * fill-column: 79
 * coding: utf-8
 * End:
 */
