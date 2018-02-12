// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tk.h>

extern int FrameTrueColor8_Init(Tcl_Interp*);
extern int FrameTrueColor16_Init(Tcl_Interp*);
extern int FrameTrueColor24_Init(Tcl_Interp*);

extern int FrameRGBTrueColor8_Init(Tcl_Interp*);
extern int FrameRGBTrueColor16_Init(Tcl_Interp*);
extern int FrameRGBTrueColor24_Init(Tcl_Interp*);

extern int Frame3dTrueColor8_Init(Tcl_Interp*);
extern int Frame3dTrueColor16_Init(Tcl_Interp*);
extern int Frame3dTrueColor24_Init(Tcl_Interp*);

extern int ColorbarTrueColor8_Init(Tcl_Interp*);
extern int ColorbarTrueColor16_Init(Tcl_Interp*);
extern int ColorbarTrueColor24_Init(Tcl_Interp*);

extern int ColorbarRGBTrueColor8_Init(Tcl_Interp*);
extern int ColorbarRGBTrueColor16_Init(Tcl_Interp*);
extern int ColorbarRGBTrueColor24_Init(Tcl_Interp*);

extern int PannerTrueColor_Init(Tcl_Interp*);

extern int MagnifierTrueColor_Init(Tcl_Interp*);

extern "C" {
  int Tksao_Init(Tcl_Interp* interp);
  int SaotkCmd(ClientData data, Tcl_Interp *interp, int argc, 
	       const char* argv[]);
}

int Tksao_Init(Tcl_Interp* interp) {
  if (Tcl_InitStubs(interp, TCL_PATCH_LEVEL, 0) == NULL)
    return TCL_ERROR;
  if (Tk_InitStubs(interp, TK_PATCH_LEVEL, 0) == NULL)
    return TCL_ERROR;

  if (FrameTrueColor8_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (FrameTrueColor16_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (FrameTrueColor24_Init(interp) == TCL_ERROR)
    return TCL_ERROR;

  if (FrameRGBTrueColor8_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (FrameRGBTrueColor16_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (FrameRGBTrueColor24_Init(interp) == TCL_ERROR)
    return TCL_ERROR;

  if (Frame3dTrueColor8_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (Frame3dTrueColor16_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (Frame3dTrueColor24_Init(interp) == TCL_ERROR)
    return TCL_ERROR;

  if (ColorbarTrueColor8_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (ColorbarTrueColor16_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (ColorbarTrueColor24_Init(interp) == TCL_ERROR)
    return TCL_ERROR;

  if (PannerTrueColor_Init(interp) == TCL_ERROR)
    return TCL_ERROR;

  if (MagnifierTrueColor_Init(interp) == TCL_ERROR)
    return TCL_ERROR;

  if (ColorbarRGBTrueColor8_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (ColorbarRGBTrueColor16_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (ColorbarRGBTrueColor24_Init(interp) == TCL_ERROR)
    return TCL_ERROR;

  // dummy command 
  // needed for auto_load, since all of our real work are canvas widgets, 
  // tcl commands

  Tcl_CreateCommand(interp, "saotk", (Tcl_CmdProc* )SaotkCmd,
  		    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  if (Tcl_PkgProvide(interp, PACKAGE_NAME, PACKAGE_VERSION) != TCL_OK)
    return TCL_ERROR;

  return TCL_OK;
}

int SaotkCmd(ClientData data, Tcl_Interp *interp, int argc, const char* argv[])
{
  return TCL_OK;
}
