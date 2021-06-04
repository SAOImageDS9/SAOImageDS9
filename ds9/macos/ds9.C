// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <stdlib.h>

#include <iostream>
#include <sstream>
using namespace std;

#include <tcl.h>
#include <tk.h>

Tcl_Interp *global_interp =NULL;

#define DEBUGS(x) {FILE* fp=fopen("/Users/joye/debug.txt","a+");fprintf(fp,"%s\n",x);fclose(fp);}

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
  int Tcliis_Init(Tcl_Interp*);
  int Tclfitsy_Init(Tcl_Interp*);

  int Tls_Init(Tcl_Interp*);
  int Tclxml_Init(Tcl_Interp*);
  int Tclxml_libxml2_Init(Tcl_Interp*);

  int Signal_ext_Init(Tcl_Interp*);

  int Tkmacosx_Init(Tcl_Interp*);
}

#define PATHSIZE 2048
int SAOLocalMainHook(int* argcPtr, char*** argvPtr)
{
  // sync C++ io calls with C io calls
  ios::sync_with_stdio();

  // use exec path
  char** argv = *argvPtr;
  char ss[PATHSIZE];
  strncpy(ss,argv[0],PATHSIZE);

  // now remove "MacOSX/ds9"
  char* ptr = ss+strlen(ss);
  while (*ptr != '/' && ptr != ss)
    ptr--;
  ptr--;
  while (*ptr != '/' && ptr != ss)
    ptr--;
  *ptr = '\0';

  // do this first
  Tcl_FindExecutable((*argvPtr)[0]);

  // and add startup script
  strncat(ss,"/Frameworks/Tksao.framework/Resources/library/ds9.tcl",PATHSIZE);

  Tcl_Obj *path = Tcl_NewStringObj(ss,-1);
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

  // Tcliis
  if (Tcliis_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "tcliis", Tcliis_Init, 
		     (Tcl_PackageInitProc*)NULL);

  // Tclfitsy
  if (Tclfitsy_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "tclfitsy", Tclfitsy_Init, 
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

  // Signal_Ext
  if (Signal_ext_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "signal", Signal_ext_Init, 
		     (Tcl_PackageInitProc*)NULL);

  // Tkmacosx
  if (Tkmacosx_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  Tcl_StaticPackage (interp, "tkmacosx", Tkmacosx_Init,
		     (Tcl_PackageInitProc*)NULL);

  return TCL_OK;
}
