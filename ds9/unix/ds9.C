// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <sstream>
using namespace std;

#include <tcl.h>
#include <tk.h>

extern "C" {
  int SAOAppInit(Tcl_Interp *interp);
  int SAOLocalMainHook(int* argc, char*** argv);

  void TclSetStartupScriptFileName(const char*);

  int Zvfs_Init(Tcl_Interp*);
  int Zvfs_Mount(Tcl_Interp*, char*, char *);

  int Tkblt_Init(Tcl_Interp*);
  int Tktable_Init(Tcl_Interp*);
  int Tclcheckdns_Init(Tcl_Interp*);
  int Tksao_Init(Tcl_Interp*);
  int Tkhtml1_Init(Tcl_Interp*);
  int Tkmpeg_Init(Tcl_Interp*);

  int Tkimg_Init(Tcl_Interp*);
  int Zlibtcl_Init(Tcl_Interp*);
  int Jpegtcl_Init(Tcl_Interp*);
  int Tkimgjpeg_Init(Tcl_Interp*);
  int Tifftcl_Init(Tcl_Interp*);
  int Tkimgtiff_Init(Tcl_Interp*);
  int Pngtcl_Init(Tcl_Interp*);
  int Tkimgpng_Init(Tcl_Interp*);
  int Tkimggif_Init(Tcl_Interp*);
  int Tkimgwindow_Init(Tcl_Interp*);

  int Tclxpa_Init(Tcl_Interp*);
  int Tcliis_Init(Tcl_Interp*);

  int Tls_Init(Tcl_Interp*);
  int Tclxml_Init(Tcl_Interp*);
  int Tclxml_libxml2_Init(Tcl_Interp*);

  int Signal_ext_Init(Tcl_Interp*);
}

Tcl_Interp *global_interp;

void internalError(const char* msg)
{
  Tcl_SetVar2(global_interp, "ds9", "msg", msg, TCL_GLOBAL_ONLY);
  Tcl_SetVar2(global_interp, "ds9", "msg,level", "error", TCL_GLOBAL_ONLY);
}

// currently use relative path
// using full path with spaces causes problems 
// with htmwidget and tcl/tk

int SAOLocalMainHook(int* argcPtr, char*** argvPtr)
{
  // sync C++ io calls with C io calls
  ios::sync_with_stdio();

  // do this first
  Tcl_FindExecutable((*argvPtr)[0]);

  // so that tcl and tk know where to find their libs
  // we do it here before InitLibraryPath is called
  putenv((char*)"TCL_LIBRARY=./zvfsmntpt/tcl8.6");
  putenv((char*)"TK_LIBRARY=./zvfsmntpt/tk8.6");

  // startup script
  Tcl_Obj *path = Tcl_NewStringObj("./zvfsmntpt/library/ds9.tcl",-1);
  Tcl_SetStartupScript(path, NULL);

  return TCL_OK;
}

int SAOAppInit(Tcl_Interp *interp)
{
  // save interp for cputs function
  global_interp = interp;

  // We have to initialize the virtual filesystem before calling
  // Tcl_Init().  Otherwise, Tcl_Init() will not be able to find
  // its startup script files.
  if (Zvfs_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "zvfs", Zvfs_Init, (Tcl_PackageInitProc*)NULL);

  // find current working directory, and set as mount point
  {
    Tcl_DString pwd;
    Tcl_DStringInit(&pwd);
    Tcl_GetCwd(interp, &pwd);

#ifdef ZIPFILE
    ostringstream str;
    str << (char *)Tcl_GetNameOfExecutable() 
	<< ".zip" 
	<<  ends;
    if( Zvfs_Mount(interp, (char*)str.str().c_str(), Tcl_DStringValue(&pwd)) != TCL_OK ){
      char str[] = "ERROR: Unable to open the auxiliary ds9 file 'ds9.zip'. If you moved the ds9 program from its original location, please also move the zip file to the same place.";

      cerr << str << endl;
      exit(1);
    }
#else
    Zvfs_Mount(interp, (char *)Tcl_GetNameOfExecutable(), 
	       Tcl_DStringValue(&pwd));
#endif
    Tcl_DStringFree(&pwd);
  }

  // Tcl
  if (Tcl_Init(interp) == TCL_ERROR)
    return TCL_ERROR;

  // Tk
  if (Tk_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage(interp,"Tk", Tk_Init, Tk_SafeInit);

  // Tkblt
  if (Tkblt_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage(interp, "tkblt", Tkblt_Init, 
		    (Tcl_PackageInitProc*)NULL);

  // Tktable
  if (Tktable_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "Tktable", Tktable_Init, 
		     (Tcl_PackageInitProc*)NULL);

  // Tclcheckdns
  if (Tclcheckdns_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "tclcheckdns", Tclcheckdns_Init, 
		     (Tcl_PackageInitProc*)NULL);

  // Tls
  if (Tls_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "tls", Tls_Init, 
		     (Tcl_PackageInitProc*)NULL);

  // Tksao
  if (Tksao_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "tksao", Tksao_Init,
  		     (Tcl_PackageInitProc*)NULL);

  // Tkhtml1
  if (Tkhtml1_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "tkhtml1", Tkhtml1_Init,
  		     (Tcl_PackageInitProc*)NULL);

  // Tclxpa
  if (Tclxpa_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "Tclxpa", Tclxpa_Init,
		     (Tcl_PackageInitProc*)NULL);

  // Tcliis
  if (Tcliis_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "Tcliis", Tcliis_Init, 
		     (Tcl_PackageInitProc*)NULL);

  // Tkmpeg
  if (Tkmpeg_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "tkmpeg", Tkmpeg_Init, 
		     (Tcl_PackageInitProc*)NULL);

  // Tclxml
  if (Tclxml_Init(interp) == TCL_ERROR)
    return TCL_ERROR;

  // Tkimg
  if (Tkimg_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "img", Tkimg_Init,
		     (Tcl_PackageInitProc*)NULL);

  // zlibtcl
  if (Zlibtcl_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "zlibtcl", Zlibtcl_Init,
		     (Tcl_PackageInitProc*)NULL);

  // jpegtcl
  if (Jpegtcl_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "jpegtcl", Jpegtcl_Init,
		     (Tcl_PackageInitProc*)NULL);

  // Tkimgjpeg
  if (Tkimgjpeg_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "jpeg", Tkimgjpeg_Init,
		     (Tcl_PackageInitProc*)NULL);

  // Tifftcl
  if (Tifftcl_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "tifftcl", Tifftcl_Init,
		     (Tcl_PackageInitProc*)NULL);

  // Tkimgtiff
  if (Tkimgtiff_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "tiff", Tkimgtiff_Init,
		     (Tcl_PackageInitProc*)NULL);

  // Pngtcl
  if (Pngtcl_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "pngtcl", Pngtcl_Init,
  		     (Tcl_PackageInitProc*)NULL);

  // Tkimgpng
  if (Tkimgpng_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "png", Tkimgpng_Init,
  		     (Tcl_PackageInitProc*)NULL);

  // Tkimggif
  if (Tkimggif_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "gif", Tkimggif_Init,
		     (Tcl_PackageInitProc*)NULL);

  // Tkimgwindow
  if (Tkimgwindow_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "window", Tkimgwindow_Init,
		     (Tcl_PackageInitProc*)NULL);

  // Signal_Ext
  if (Signal_ext_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "signal", Signal_ext_Init, 
		     (Tcl_PackageInitProc*)NULL);

  return TCL_OK;
}
