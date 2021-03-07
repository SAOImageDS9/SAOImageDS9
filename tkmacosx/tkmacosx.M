// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
using namespace std;

#include <string.h>

//#include <tkMacOSXPrivate.h>
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

  Tcl_CreateCommand(interp, "macos", TkmacosxCmd,
		    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  if (Tcl_PkgProvide(interp, PACKAGE_NAME, PACKAGE_VERSION))
    return TCL_ERROR;

  tkmacosx = new TkMacosx(interp);

  return tkmacosx ? TCL_OK : TCL_ERROR;
}

int TkmacosxCmd(ClientData data,Tcl_Interp *interp,int argc,const char* argv[])
{
  if (argc>=2) {
    if (!strncmp(argv[1], "pm", 2))
      return tkmacosx->pm(argc, argv);
    else if (!strncmp(argv[1], "sc", 2))
      return tkmacosx->sc(argc, argv);
    else if (!strncmp(argv[1], "locale", 2))
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
  //  pmView = NULL;
}

TkMacosx::~TkMacosx()
{
}

// Locale
int TkMacosx::locale(int argc, const char* argv[])
{
  /*
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
  */
  return TCL_OK;
}

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

// major kludge, located in hacked tk8.6/macosx/tkMacOSXDraw.c
int enableScreenCapture=0;
int TkMacosx::sc(int argc, const char* argv[])
{
  if (argc >= 1) {
    if (!strncmp(argv[2], "yes", 3)) {
      enableScreenCapture =1;
      return TCL_OK;
    }
    else if (!strncmp(argv[2], "no", 2)) {
      enableScreenCapture =0;
      return TCL_OK;
    }
    else {
      Tcl_AppendResult(interp, "tkmacosx sc: unknown command: ", argv[2], NULL);
      return TCL_ERROR;
    }
  }
  Tcl_AppendResult(interp, "usage: tkmacosx sc yes|no", NULL);
  return TCL_ERROR;
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

/*
@implementation PMView
- (PMView*)init
{
  self = [super init];
  return self;
}

- (void)alloc
{
}

- (void)dealloc
{
  [super dealloc];
}

- (void)drawRect: (NSRect)rect
{
}
@end
*/

int TkMacosx::pmPrintBegin(int argc, const char* argv[])
{
  /*
  pmView = [[PMView alloc] init];
  NSPrintInfo* printInfo = [NSPrintInfo sharedPrintInfo];
  NSPrintOperation* printOp = \
    [NSPrintOperation printOperationWithView:pmView printInfo:printInfo];

  [printOp runOperation];
  return TCL_OK;
  */
  return TCL_OK;
}

int TkMacosx::pmPrintEnd()
{
  return TCL_OK;
}

int TkMacosx::pmPrintText(int argc, const char* argv[])
{
  return TCL_OK;
}

int TkMacosx::pmPageSetup()
{
  return TCL_OK;
}
