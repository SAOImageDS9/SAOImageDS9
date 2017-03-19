// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
using namespace std;

#include <string.h>

#include <tkMacOSXPrivate.h>

#include "tkmacosx.h"

extern "C" {
  int Tkmacosx_Init(Tcl_Interp* interp);
  int TkmacosxCmd(ClientData data, Tcl_Interp *interp, int argc, 
	       const char* argv[]);
}

TkMacosx* tkmacosx=NULL;

int Tkmacosx_Init(Tcl_Interp* interp) {

  if (Tcl_InitStubs(interp, TCL_PATCH_LEVEL, 0) == NULL)
    return TCL_ERROR;

  if (Tk_InitStubs(interp, TK_PATCH_LEVEL, 0) == NULL)
    return TCL_ERROR;

  Tcl_CreateCommand(interp, "macosx", TkmacosxCmd,
		    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  if (Tcl_PkgProvide(interp, PACKAGE_NAME, PACKAGE_VERSION))
    return TCL_ERROR;

  tkmacosx = new TkMacosx(interp);

  return tkmacosx ? TCL_OK : TCL_ERROR;
}

int TkmacosxCmd(ClientData data,Tcl_Interp *interp,int argc,const char* argv[])
{
  if (argc>=2) {
/*
    if (!strncmp(argv[1], "pm", 2))
      return tkmacosx->pm(argc, argv);
*/
    if (!strncmp(argv[1], "locale", 2))
      return tkmacosx->locale(argc, argv);
    else {
      Tcl_AppendResult(interp, "macosx: unknown command: ", argv[1], NULL);
      return TCL_ERROR;
    }
  }
  else {
    Tcl_AppendResult(interp, "usage: macosx ?locale?", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

TkMacosx::TkMacosx(Tcl_Interp* intp)
{
  interp = intp;

/*
  showDialog = 0;

  status = noErr;
  pageFormat = kPMNoPageFormat;
  printSettings = kPMNoPrintSettings;
  printSession = NULL;
  context = NULL;
*/
}

TkMacosx::~TkMacosx()
{
/*
  if (pageFormat != kPMNoPageFormat)
    PMRelease(pageFormat);
  if (printSettings != kPMNoPrintSettings)
    PMRelease(printSettings);
*/
}

// Locale
int TkMacosx::locale(int argc, const char* argv[])
{
  CFPropertyListRef preferences = 
    CFPreferencesCopyAppValue(CFSTR("AppleLanguages"), 
			      kCFPreferencesCurrentApplication);
  if (preferences && CFGetTypeID(preferences) == CFArrayGetTypeID()) {
    CFArrayRef prefArray = (CFArrayRef)preferences;
    int nn = CFArrayGetCount (prefArray);
    char buf[256];

    for (int ii=0; ii<nn; ii++) {
      CFTypeRef element = CFArrayGetValueAtIndex (prefArray, ii);
      if (element && CFGetTypeID(element) == CFStringGetTypeID()
	  && CFStringGetCString ((CFStringRef)element, buf, sizeof(buf), 
				 kCFStringEncodingASCII)) {
        ;
      }
      Tcl_AppendResult(interp, buf, " ", NULL);
    }

    CFRelease(preferences);
  }

  return TCL_OK;
}

/*
// Image Print Mangager
int TkMacosx::pm(int argc, const char* argv[])
{
  if (argc >= 3) {
    if (!strncmp(argv[2], "print", 3))
      return tkmacosx->pmPrint(argc, argv);
    else if (!strncmp(argv[2], "pagesetup", 3))
      return tkmacosx->pmPageSetup();
    else {
      Tcl_AppendResult(interp, "tkmacosx pm: unknown command: ", argv[2], NULL);
      return TCL_ERROR;
    }
  }
  else {
    Tcl_AppendResult(interp, "usage: tkmacosx pm ?print?pagesetup?", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

int TkMacosx::pmPrint(int argc, const char* argv[])
{
  if (argc >= 4) {
    if (!strncmp(argv[3], "begin", 3))
      return tkmacosx->pmPrintBegin(argc, argv);
    else if (!strncmp(argv[3], "end", 3))
      return tkmacosx->pmPrintEnd();
    else if (!strncmp(argv[3], "text", 3))
      return tkmacosx->pmPrintText(argc, argv);
    else {
      Tcl_AppendResult(interp, "tkmacosx pm print: unknown command: ", argv[2], NULL);
      return TCL_ERROR;
    }
  }
  else {
    Tcl_AppendResult(interp, "usage: tkmacosx pm print: ?begin?end?text?", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

int TkMacosx::pmPrintBegin(int argc, const char* argv[])
{
  // canvas width and height
  double width =0;
  double height =0;
  if (argc >= 7) {
    string w(argv[4]);
    istringstream ww(w);
    ww >> width;

    string h(argv[5]);
    istringstream hh(h);
    hh >> height;

    if (width <=0 || height <=0) {
      Tcl_AppendResult(interp, "Invalid width or height.", NULL);
      return TCL_ERROR;
    }

    if (!strncmp(argv[6], "yes", 2))
      showDialog = 1;
    else if (!strncmp(argv[6], "no", 2)) 
      showDialog = 0;
  }
  else {
    Tcl_AppendResult(interp, "usage: tkmacosx pm print begin: ?width height yes|no?", NULL);
    return TCL_ERROR;
  }

  Vector canvas(width,height);

  // print session
  status = PMCreateSession(&printSession);
  if (status != noErr)
    goto error;

  // pagesetup
  if (pageFormat == kPMNoPageFormat) {
    status = PMCreatePageFormat(&pageFormat);
    if (status != noErr)
      goto error;
		
    if (pageFormat != kPMNoPageFormat) {
      status = PMSessionDefaultPageFormat(printSession, pageFormat);
      if (status != noErr)
	goto error;
    }
  }
  else {
    status = PMSessionValidatePageFormat(printSession, pageFormat, 
					 kPMDontWantBoolean);
    if (status != noErr)
      goto error;
  }
  
  status = PMSessionValidatePageFormat(printSession, pageFormat, 
				       kPMDontWantBoolean);
  if (status != noErr)
    goto error;

  // printsettings
  if (printSettings == kPMNoPrintSettings) {
    status = PMCreatePrintSettings(&printSettings);
    if (status != noErr)
      goto error;

    if (printSettings != kPMNoPrintSettings) {
      status = PMSessionDefaultPrintSettings(printSession, printSettings);
      if (status != noErr)
	goto error;
    }
  }
  else {
    status = PMSessionValidatePrintSettings(printSession, printSettings, 
					    kPMDontWantBoolean);
    if (status != noErr)
      goto error;
  }

  // range
  status = PMSetPageRange(printSettings, 1, 1);
  if (status != noErr)
    goto error;

  // dialog
  if (showDialog) {
    Boolean rr;
    status = PMSessionPrintDialog(printSession, printSettings, pageFormat, &rr);
    if (status != noErr)
      goto error;

    // user clicked cancel
    if (!rr) {
      Tcl_AppendResult(interp, "0", NULL);
      goto done;
    }
  }

  // print loop
  {
    CFStringRef jobName = CFSTR("SAOImage DS9");
    status = PMPrintSettingsSetJobName(printSettings, jobName);
    if (status != noErr)
      goto error;
  }

  // set pages
  {
    UInt32 firstPage =0;
    UInt32 lastPage =0;
    status = PMGetFirstPage(printSettings, &firstPage);
    if (status != noErr)
      goto error;
    status = PMGetLastPage(printSettings, &lastPage);
    if (status != noErr)
      goto error;
    if (1 < lastPage)
      lastPage = 1;

    status = PMSetFirstPage(printSettings, firstPage, false);
    if (status != noErr)
      goto error;
    status = PMSetLastPage(printSettings, lastPage, false);
    if (status != noErr)
      goto error;
  }

  status = PMSessionBeginCGDocument(printSession, printSettings, pageFormat);
  if (status != noErr)
    goto error;

  status = PMSessionBeginPage(printSession, pageFormat, NULL);
  if (status != noErr)
    goto error;

  status = PMSessionGetCGGraphicsContext(printSession, &context);
  if (status != noErr)
    goto error;

  {
    PMRect pageRect;
    status = PMGetAdjustedPageRect(pageFormat, &pageRect);
    if (status != noErr)
      goto error;
    PMRect paperRect;
    status = PMGetAdjustedPaperRect(pageFormat, &paperRect);
    if (status != noErr)
      goto error;
    double scale;
    status = PMGetScale(pageFormat, &scale);
    if (status != noErr)
      goto error;
    PMOrientation orient;
    status = PMGetOrientation(pageFormat, &orient);
    if (status != noErr)
      goto error;
    Matrix orientation;
    switch (orient) {
    case kPMPortrait:
    case kPMLandscape:
      break;
    case kPMReverseLandscape:
      orientation = FlipX();
      break;
    }

    // build context transformation matrix
    Vector page(pageRect.right-pageRect.left,pageRect.bottom-pageRect.top); 
    Vector paper(paperRect.right-paperRect.left,
		 paperRect.bottom-paperRect.top);
    Vector origin(pageRect.left,pageRect.top);
    float ss;
    if (page[0]/canvas[0] < page[1]/canvas[1])
      ss = page[0]/canvas[0]*.95;
    else
      ss = page[1]/canvas[1]*.95;

    Vector cp = page/2;
    CGContextTranslateCTM(context, cp[0], cp[1]);
    CGContextScaleCTM(context, ss, ss);
    CGContextScaleCTM(context, scale/100, scale/100);
    CGContextTranslateCTM(context, -cp[0], -cp[1]);

    // build coordinate matrix
    canvasToPage = Translate(-canvas/2) * 
      FlipY() * 
      orientation *
      Translate(paper/2) *
      Translate(origin);
  }

  // ok, we are good for go
  Tcl_AppendResult(interp, "1", NULL);

 done:
  return TCL_OK;

 error:
  cerr << "PM Error Code: " << status << endl;
  return TCL_ERROR;
}

int TkMacosx::pmPrintEnd()
{
  status = PMSessionEndPage(printSession);
  if (status != noErr)
    goto error;
  status = PMSessionEndDocument(printSession);
  if (status != noErr)
    goto error;

  status = PMSessionError(printSession);
  if (status != noErr)
    goto error;

 done:
  PMRelease(printSession);
  printSession = NULL;
  return TCL_OK;

 error:
  cerr << "PM Error Code: " << status << endl;
  PMRelease(printSession);
  printSession = NULL;
  return TCL_ERROR;
}

int TkMacosx::pmPrintText(int argc, const char* argv[])
{
  const int fontSize =12;
  const float margin =36;

  float top;
  float left;
  float bottom;
  float right;

  UInt32 firstPage =1;
  UInt32 currentPage =1;
  UInt32 maxPage;
  UInt32 lastPage;

  int numLines =1;

  float xx;
  float yy;
  char* ss;
  char* st;

  char* sstr;
  char* estr;

  // text
  if (argc >= 5)
    ;
  else {
    Tcl_AppendResult(interp, "usage: tkmacosx pm print text: ?text?", NULL);
    return TCL_ERROR;
  }

  if (!argv[4])
    goto error;

  // dup text
  sstr = new char[strlen(argv[4])+1];
  estr = sstr;
  if (!sstr)
    goto error;

  strcpy(sstr,argv[4]);
  sstr[strlen(argv[4])] = '\0';

  // sub ends for \n and count lines
  while (estr && *estr) {
    if (*estr == '\n') {
      *estr = '\0';
      numLines++;
    }
    estr++;
  }

  // print session
  status = PMCreateSession(&printSession);
  if (status != noErr)
    goto error;

  // pagesetup
  if (pageFormat == kPMNoPageFormat) {
    status = PMCreatePageFormat(&pageFormat);
    if (status != noErr)
      goto error;
		
    if (pageFormat != kPMNoPageFormat) {
      status = PMSessionDefaultPageFormat(printSession, pageFormat);
      if (status != noErr)
	goto error;
    }
  }
  else {
    status = PMSessionValidatePageFormat(printSession, pageFormat, 
					 kPMDontWantBoolean);
    if (status != noErr)
      goto error;
  }
  
  status = PMSessionValidatePageFormat(printSession, pageFormat, 
				       kPMDontWantBoolean);
  if (status != noErr)
    goto error;

  // printsettings
  if (printSettings == kPMNoPrintSettings) {
    status = PMCreatePrintSettings(&printSettings);
    if (status != noErr)
      goto error;

    if (printSettings != kPMNoPrintSettings) {
      status = PMSessionDefaultPrintSettings(printSession, printSettings);
      if (status != noErr)
	goto error;
    }
  }
  else {
    status = PMSessionValidatePrintSettings(printSession, printSettings, 
					    kPMDontWantBoolean);
    if (status != noErr)
      goto error;
  }

  // calc page size
  PMRect pageRect;
  status = PMGetAdjustedPageRect(pageFormat, &pageRect);
  if (status != noErr)
    goto error;
  PMRect paperRect;
  status = PMGetAdjustedPaperRect(pageFormat, &paperRect);
  if (status != noErr)
    goto error;
  double scale;
  status = PMGetScale(pageFormat, &scale);
  if (status != noErr)
    goto error;
  PMOrientation orient;
  status = PMGetOrientation(pageFormat, &orient);
  if (status != noErr)
    goto error;

  top =pageRect.top + margin;
  left =pageRect.left + margin;
  bottom =pageRect.bottom - margin;
  right =pageRect.right - margin;

  // calc range
  maxPage = int(numLines / int((bottom-top)/fontSize) ) +1;
  lastPage =maxPage;
  
  status = PMSetPageRange(printSettings, firstPage, lastPage);
  if (status != noErr)
    goto error;

  // dialog
  {
    Boolean rr;
    status = PMSessionPrintDialog(printSession, printSettings, pageFormat, &rr);
    if (status != noErr)
      goto error;

    // user clicked cancel
    if (!rr) {
      Tcl_AppendResult(interp, "0", NULL);
      goto done;
    }
  }

  // job name
  {
    CFStringRef jobName = CFSTR("SAOImage DS9");
    status = PMSetJobNameCFString(printSettings, jobName);
    if (status != noErr)
      goto error;
  }

  // get pages
  status = PMGetFirstPage(printSettings, &firstPage);
  if (status != noErr)
    goto error;
  status = PMGetLastPage(printSettings, &lastPage);
  if (status != noErr)
    goto error;

  // check pages
  if (firstPage < 1)
    firstPage =1;
  if (firstPage > maxPage)
    firstPage = maxPage;

  if (lastPage < firstPage)
    lastPage = firstPage;
  if (lastPage > maxPage)
    lastPage = maxPage;

  // set pages
  status = PMSetFirstPage(printSettings, firstPage, false);
  if (status != noErr)
    goto error;
  status = PMSetLastPage(printSettings, lastPage, false);
  if (status != noErr)
    goto error;

  // start
  status = PMSessionBeginCGDocument(printSession, printSettings, pageFormat);
  if (status != noErr)
    goto error;

  // loop over pages
  xx = left;
  yy = top;
  ss = sstr;
  st = sstr;

  while (currentPage <= lastPage) {
    status = PMSessionBeginPage(printSession, pageFormat, NULL);
    if (status != noErr)
      goto error;

    status = PMSessionGetCGGraphicsContext(printSession, &context);
    if (status != noErr)
      goto error;

    // set context
    CGContextSelectFont(context, "Courier", fontSize, kCGEncodingMacRoman);
    CGContextSetRGBFillColor(context,0,0,0,1);
    CGContextSetTextDrawingMode (context, kCGTextFill);

    // matrix
    Vector paper(paperRect.right-paperRect.left,
		 paperRect.bottom-paperRect.top);
    Matrix mm = Translate(-paper/2) * 
      Translate(0,fontSize) *
      FlipY() * 
      Translate(paper/2);
    
    // line by line
    while (ss < estr) {
      Vector vv = Vector(xx,yy) * mm;
      CGContextShowTextAtPoint (context, vv[0], vv[1], ss, strlen(ss));

      while (*st++);
      ss = st;
      yy += fontSize;

      if (yy > bottom) {
	yy = top;
	break;
      }
    }

    status = PMSessionEndPage(printSession);
    if (status != noErr)
      goto error;

    currentPage++;
  }

  status = PMSessionEndDocument(printSession);
  if (status != noErr)
    goto error;

  status = PMSessionError(printSession);
  if (status != noErr)
    goto error;

 done:
  if (printSession)
    PMRelease(printSession);
  printSession = NULL;

  if (sstr)
    delete sstr;

  return TCL_OK;

 error:
  cerr << "PM Error Code: " << status << endl;
  if (printSession)
    PMRelease(printSession);
  printSession = NULL;

  if (sstr)
    delete sstr;

  return TCL_ERROR;
}

int TkMacosx::pmPageSetup()
{
  // print session
  status = PMCreateSession(&printSession);
  if (status != noErr)
    goto error;

  // pagesetup
  if (pageFormat == kPMNoPageFormat) {
    status = PMCreatePageFormat(&pageFormat);
    if (status != noErr)
      goto error;
		
    if (pageFormat != kPMNoPageFormat) {
      status = PMSessionDefaultPageFormat(printSession, pageFormat);
      if (status != noErr)
	goto error;
    }
  }
  else {
    status = PMSessionValidatePageFormat(printSession, pageFormat, 
					 kPMDontWantBoolean);
    if (status != noErr)
      goto error;
  }
  
  Boolean rr;
  status = PMSessionPageSetupDialog(printSession, pageFormat, &rr);
  if (status != noErr)
    goto error;

 done:
  PMRelease(printSession);
  printSession = NULL;
  return TCL_OK;

 error:
  cerr << "PM Error Code: " << status << endl;
  PMRelease(printSession);
  printSession = NULL;
  return TCL_ERROR;
}

// drawing routines

void TkMacosx::begin()
{
  CGContextSaveGState(context);
}

void TkMacosx::end()
{
  CGContextRestoreGState(context);
}

void TkMacosx::color(float red, float green, float blue)
{
  CGContextSetRGBStrokeColor(context,red,green,blue,1);
  CGContextSetRGBFillColor(context,red,green,blue,1);
}

void TkMacosx::width(float ww)
{
  CGContextSetLineWidth(context,ww);
}

void TkMacosx::dash(float* dd, int nn)
{
  CGContextSetLineDash(context,0,(CGFloat*)dd,nn);
}

void TkMacosx::font(const char* font, float size)
{
  CGContextSelectFont(context, font, size, kCGEncodingMacRoman);
}

void TkMacosx::clip(float x, float y, float w, float h)
{
  CGContextBeginPath(context);
  CGContextAddRect(context, CGRectMake(x,y,w,h));
  CGContextClosePath(context);
  CGContextClip(context);
}

void TkMacosx::newpath()
{
  CGContextBeginPath(context);
}

void TkMacosx::stroke()
{
  CGContextStrokePath(context);
}

void TkMacosx::fill()
{
  CGContextEOFillPath(context);
}

void TkMacosx::arc(float x, float y, float rad, float ang1, float ang2)
{
  CGContextAddArc(context, x, y, rad, ang1, ang2, 0);
}

void TkMacosx::curve(float x0, float y0, float u0, float v0, 
		     float u1, float v1, float x1, float y1)
{
  CGContextMoveToPoint(context, x0, y0);
  CGContextAddCurveToPoint(context, u0, v0, u1, v1, x1, y1);
}

void TkMacosx::drawText(float x, float y, float angle, const char* text)
{
  CGAffineTransform mm = CGAffineTransformMakeRotation(angle);
  CGContextSetTextMatrix(context, mm);

  CGContextSetTextDrawingMode (context, kCGTextFill);
  CGContextShowTextAtPoint (context, x, y, text, strlen(text));
}

void TkMacosx::drawLines(float* x, float* y, int n)
{
  CGContextBeginPath(context);
  CGContextMoveToPoint(context, x[0], y[0]);
  for (int ii=1; ii<n; ii++) 
    CGContextAddLineToPoint(context, x[ii], y[ii]);
  CGContextStrokePath(context);
}

void TkMacosx::fillPolygon(float* x, float* y, int n)
{
  CGContextBeginPath(context);
  CGContextMoveToPoint(context, x[0], y[0]);
  for (int ii=1; ii<n; ii++) 
    CGContextAddLineToPoint(context, x[ii], y[ii]);
  CGContextAddLineToPoint(context, x[0], y[0]);
  CGContextEOFillPath(context);
}

void TkMacosx::drawArc(float x, float y, float rad, float ang1, float ang2)
{
  CGContextBeginPath(context);
  CGContextAddArc(context, x, y, rad, ang1, ang2, 0);
  CGContextStrokePath(context);
}

void TkMacosx::bitmapCreate(void* data, int width, int height, 
			    float x, float y, float w, float h)
{
  CGColorSpaceRef cs = CGColorSpaceCreateWithName(kCGColorSpaceGenericRGB);
  CGContextRef bm = CGBitmapContextCreate(data, width, height, 8,
					  width*4, cs, 
					  kCGImageAlphaNoneSkipLast | 
					  kCGBitmapByteOrder32Big);
  CGImageRef img = CGBitmapContextCreateImage(bm);

  CGContextDrawImage(context, CGRectMake(x,y,w,h), img);

  if (img)
    CGImageRelease(img);
  if (bm)
    CGContextRelease(bm);
  if (cs)
    CGColorSpaceRelease(cs);
}
*/
