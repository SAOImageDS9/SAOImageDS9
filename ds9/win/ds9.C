// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <string>
using namespace std;

#include <tcl.h>
#include <tk.h>

Tcl_Interp *global_interp =NULL;

extern "C" {
  int SAOAppInit(Tcl_Interp *interp);
  int SAOLocalMainHook(int* argc, char*** argv);

  void TclSetStartupScriptFileName(const char*);

  int Tkblt_Init(Tcl_Interp*);
  int Tktable_Init(Tcl_Interp*);
  int Tksao_Init(Tcl_Interp*);
  int Tkhtml1_Init(Tcl_Interp*);
  int Tkmpeg_Init(Tcl_Interp*);
  int Tksvg_Init(Tcl_Interp*);
  int Tkagif_Init(Tcl_Interp*);

  int Tkimg_Init(Tcl_Interp*);
  int Zlibtcl_Init(Tcl_Interp*);
  int Jpegtcl_Init(Tcl_Interp*);
  int Tkimgjpeg_Init(Tcl_Interp*);
  int Tifftcl_Init(Tcl_Interp*);
  int Tkimgtiff_Init(Tcl_Interp*);
  int Tkimgwindow_Init(Tcl_Interp*);

  int Tclxpa_Init(Tcl_Interp*);
  int Tclfitsy_Init(Tcl_Interp*);

  int Tls_Init(Tcl_Interp*);
  int Tclxml_Init(Tcl_Interp*);
  int Tclxml_libxml2_Init(Tcl_Interp*);

  int Tclxmlrpc_Init(Tcl_Interp*);

  int Tkwin32_Init(Tcl_Interp*);
}

// currently use relative path
// using full path with spaces causes problems
// with htmwidget and tcl/tk

#define STR2(s) #s
#define STR(s) STR2(s)

static string tclLibraryEnv;
static string tkLibraryEnv;

static string DS9ExecutableDir()
{
  const char* executable = Tcl_GetNameOfExecutable();
  string path = executable ? executable : "";

  for (string::iterator ii = path.begin(); ii != path.end(); ii++)
    if (*ii == '\\')
      *ii = '/';

  string::size_type pos = path.rfind('/');
  if (pos == string::npos)
    return ".";

  return path.substr(0, pos);
}

int SAOLocalMainHook(int* argcPtr, char*** argvPtr)
{
  // sync C++ io calls with C io calls
  ios::sync_with_stdio();

  // do this first
  Tcl_FindExecutable((*argvPtr)[0]);

  string root = DS9ExecutableDir();

  // so that tcl and tk know where to find their libs
  // we do it here before InitLibraryPath is called
  tclLibraryEnv = "TCL_LIBRARY=" + root + "/tcl" STR(TCL_MAJOR_VERSION) "." STR(TCL_MINOR_VERSION);
  tkLibraryEnv = "TK_LIBRARY=" + root + "/tk" STR(TCL_MAJOR_VERSION) "." STR(TCL_MINOR_VERSION);
  putenv((char*)tclLibraryEnv.c_str());
  putenv((char*)tkLibraryEnv.c_str());

  // startup script
  string startup = root + "/library/ds9.tcl";
  Tcl_Obj *path = Tcl_NewStringObj(startup.c_str(), -1);
  Tcl_SetStartupScript(path, NULL);

  return TCL_OK;
}

int SAOAppInit(Tcl_Interp *interp)
{
  // save interp for cputs function
  global_interp = interp;

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

  // Tclfitsy
  if (Tclfitsy_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "Tclfitsy", Tclfitsy_Init,
		     (Tcl_PackageInitProc*)NULL);

  // Tkmpeg
  if (Tkmpeg_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "tkmpeg", Tkmpeg_Init, 
		     (Tcl_PackageInitProc*)NULL);

  // Tksvg
  if (Tksvg_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "tksvg", Tksvg_Init, 
		     (Tcl_PackageInitProc*)NULL);

  // Tkagif
  if (Tkagif_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "tkagif", Tkagif_Init, 
		     (Tcl_PackageInitProc*)NULL);

  // Tclxml
  if (Tclxml_Init(interp) == TCL_ERROR)
    return TCL_ERROR;

  // Tclxmlrpc
  if (Tclxmlrpc_Init(interp) == TCL_ERROR)
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

  // Tkimgwindow
  if (Tkimgwindow_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "window", Tkimgwindow_Init,
		     (Tcl_PackageInitProc*)NULL);

  // Tkwin32
  if (Tkwin32_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "tkwin32", Tkwin32_Init,
		     (Tcl_PackageInitProc*)NULL);

  return TCL_OK;
}
