// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <stdlib.h>
#include <string.h>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;
#include <cstdlib>


#include <tcl.h>
#include <tk.h>

Tcl_Interp *global_interp =NULL;
static string tclLibraryEnv;
static string tkLibraryEnv;

Tcl_Obj *startup_script_path=NULL;

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

#define PATHSIZE 2048
int SAOLocalMainHook(int* argcPtr, char*** argvPtr)
{
  // sync C++ io calls with C io calls
  ios::sync_with_stdio();

  // use exec path
  char** argv = *argvPtr;
  char ss[PATHSIZE];
  memset(ss,0,PATHSIZE);
  strncpy(ss,argv[0],PATHSIZE);

  // now remove "/ds9.exe"
  char* ptr = ss+strlen(ss);
  while (*ptr != '/' && ptr != ss)
    ptr--;
  if (ptr != ss)
    *ptr = '\0';
  else
    strcpy(ss, ".");

  char rr[PATHSIZE];

  // so that tcl and tk know where to find their libs
  // we do it here before InitLibraryPath is called
  {
    strncpy(rr,ss,PATHSIZE);
    strncat(rr,"/tcl9.0",PATHSIZE);
    ostringstream str;
    str << "TCL_LIBRARY=" << rr << ends;
    putenv((char*)str.str().c_str());
    tclLibraryEnv = rr;
  }

  {
    strncpy(rr,ss,PATHSIZE);
    strncat(rr,"/tk9.0",PATHSIZE);
    ostringstream str;
    str << "TK_LIBRARY=" << rr << ends;
    putenv((char*)str.str().c_str());
    tkLibraryEnv = rr;
  }

  // do this first
  Tcl_FindExecutable((*argvPtr)[0]);

  // and add startup script
  strncpy(rr,ss,PATHSIZE);
  strncat(rr,"/library/ds9.tcl",PATHSIZE);
  Tcl_Obj *path = Tcl_NewStringObj(rr, -1);
  Tcl_SetStartupScript(path, NULL);
  startup_script_path = path;
  return TCL_OK;
}

int SAOAppInit(Tcl_Interp *interp)
{
  // save interp for cputs function
  global_interp = interp;

  //~ cout << "TCL_LIBRARAY=" << getenv("TCL_LIBRARY") << endl;
  //~ cout << "TK_LIBRARY=" << getenv("TK_LIBRARY") << endl;
  Tcl_SetStartupScript(startup_script_path, NULL);

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
