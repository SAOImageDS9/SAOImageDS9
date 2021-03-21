// waj
int enableScreenCapture =0;
static XImage* MacOSScreenCapture(Display* display, Drawable drawable,
				  int x, int y ,
				  unsigned int width, unsigned int height,
				  int format)
{
  if (!enableScreenCapture)
      return NULL;

  if (!width || !height)
      return NULL;

  MacDrawable *mac_drawable = (MacDrawable *)drawable;
  NSView *view = TkMacOSXGetNSViewForDrawable(mac_drawable);
  if (!view)
      return NULL;

  int view_height = [view bounds].size.height;
  NSRect view_rect = NSMakeRect(x + mac_drawable->xOff,
				view_height - height - y - mac_drawable->yOff,
				width, height);

  // convert from view to bitmap, then CGImage, back to bitmap
  // this solves a number of problems
  NSBitmapImageRep* bitmapRepBase =
      [view bitmapImageRepForCachingDisplayInRect: view_rect];
  if (!bitmapRepBase)
      return NULL;

  [bitmapRepBase retain];
  [view cacheDisplayInRect:view_rect toBitmapImageRep:bitmapRepBase];
  CGImageRef cgImage = [bitmapRepBase CGImage];
  if (!cgImage)
      return NULL;

  NSBitmapImageRep* bitmapRep = [NSBitmapImageRep alloc];
  [bitmapRep initWithCGImage:cgImage];
  CFRelease(cgImage);

  NSUInteger bitmap_fmt = [bitmapRep bitmapFormat];
  int bitsPerPixel = [bitmapRep bitsPerPixel];
  int bytesPerRow = [bitmapRep bytesPerRow];
  int bytesPerPlane = [bitmapRep bytesPerPlane];
  int samplesPerPixel = [bitmapRep samplesPerPixel];

  // scale=1 non-retina
  // scale>1 retina
  int scale = bytesPerRow/width/samplesPerPixel;

  char* bitmap = ckalloc(bytesPerPlane);
  memcpy(bitmap, (char *)[bitmapRep bitmapData], bytesPerPlane);
  CFRelease(bitmapRep);

  // reorder
  struct pixel_fmt pixel = bitmap_fmt == 0 ? bgra : abgr;
  char* src = bitmap;
  for (int jj=0; jj<height*scale; jj++) {
      for (int ii=0; ii<width*scale; ii++) {
	  char R = *(src + pixel.r);
	  char G = *(src + pixel.g);
	  char B = *(src + pixel.b);
	  char A = *(src + pixel.a);

	  *src++ = R;
	  *src++ = G;
	  *src++ = B;
	  *src++ = A;
      }
  }

  if (scale ==1)
      return XCreateImage(display, NULL, bitsPerPixel, format, 0,
			  (char*)bitmap, width, height, 0, bytesPerRow);
  else {
      int bpr = width*samplesPerPixel;
      int bpp = width*height*samplesPerPixel;

      char* bm = ckalloc(bpp);
      char* src = bitmap;
      char* dst = bm;
      for (int jj=0; jj<height; jj++) {
	  for (int ii=0; ii<width; ii++) {
	      for (int kk=0; kk<samplesPerPixel; kk++)
		  *dst++ = *src++;
	      src += samplesPerPixel;
	  }
	  src += bytesPerRow;
      }

      ckfree(bitmap);
      return XCreateImage(display, NULL, bitsPerPixel, format, 0,
			  bm, width, height, 0, bpr);
  }
}

    // waj
    imagePtr = MacOSScreenCapture(display,drawable,x,y,width,height,format);
    if (imagePtr)
	return imagePtr;
