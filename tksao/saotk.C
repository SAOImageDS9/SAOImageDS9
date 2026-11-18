// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tk.h>

#include <math.h>
#include <string.h>
#include <string>
#include <vector>

#include "hips.h"

extern int FrameTrueColor8_Init(Tcl_Interp*);
extern int FrameTrueColor16_Init(Tcl_Interp*);
extern int FrameTrueColor24_Init(Tcl_Interp*);

extern int FrameRGBTrueColor8_Init(Tcl_Interp*);
extern int FrameRGBTrueColor16_Init(Tcl_Interp*);
extern int FrameRGBTrueColor24_Init(Tcl_Interp*);

extern int FrameMultiColorTrueColor8_Init(Tcl_Interp*);
extern int FrameMultiColorTrueColor16_Init(Tcl_Interp*);
extern int FrameMultiColorTrueColor24_Init(Tcl_Interp*);

extern int FrameHSVTrueColor8_Init(Tcl_Interp*);
extern int FrameHSVTrueColor16_Init(Tcl_Interp*);
extern int FrameHSVTrueColor24_Init(Tcl_Interp*);

extern int FrameHLSTrueColor8_Init(Tcl_Interp*);
extern int FrameHLSTrueColor16_Init(Tcl_Interp*);
extern int FrameHLSTrueColor24_Init(Tcl_Interp*);

extern int Frame3dTrueColor8_Init(Tcl_Interp*);
extern int Frame3dTrueColor16_Init(Tcl_Interp*);
extern int Frame3dTrueColor24_Init(Tcl_Interp*);

extern int ColorbarTrueColor8_Init(Tcl_Interp*);
extern int ColorbarTrueColor16_Init(Tcl_Interp*);
extern int ColorbarTrueColor24_Init(Tcl_Interp*);

extern int ColorbarRGBTrueColor8_Init(Tcl_Interp*);
extern int ColorbarRGBTrueColor16_Init(Tcl_Interp*);
extern int ColorbarRGBTrueColor24_Init(Tcl_Interp*);

extern int ColorbarHSVTrueColor8_Init(Tcl_Interp*);
extern int ColorbarHSVTrueColor16_Init(Tcl_Interp*);
extern int ColorbarHSVTrueColor24_Init(Tcl_Interp*);

extern int ColorbarHLSTrueColor8_Init(Tcl_Interp*);
extern int ColorbarHLSTrueColor16_Init(Tcl_Interp*);
extern int ColorbarHLSTrueColor24_Init(Tcl_Interp*);

extern int PannerTrueColor_Init(Tcl_Interp*);

extern int MagnifierTrueColor_Init(Tcl_Interp*);

extern "C" int IIS_Init(Tcl_Interp*);

extern "C" {
  int Tksao_Init(Tcl_Interp* interp);
  int SaotkCmd(ClientData data, Tcl_Interp *interp, int argc, 
	       const char* argv[]);
  int HiPSInfoCmd(ClientData data, Tcl_Interp *interp, int argc,
		  const char* argv[]);
}

void internalError(const char* msg)
{
  extern Tcl_Interp *global_interp;
  Tcl_SetVar2(global_interp, "ds9", "msg", msg, TCL_GLOBAL_ONLY);
  Tcl_SetVar2(global_interp, "ds9", "msg,level", "error", TCL_GLOBAL_ONLY);
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

  if (FrameMultiColorTrueColor8_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (FrameMultiColorTrueColor16_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (FrameMultiColorTrueColor24_Init(interp) == TCL_ERROR)
    return TCL_ERROR;

  if (FrameHSVTrueColor8_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (FrameHSVTrueColor16_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (FrameHSVTrueColor24_Init(interp) == TCL_ERROR)
    return TCL_ERROR;

  if (FrameHLSTrueColor8_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (FrameHLSTrueColor16_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (FrameHLSTrueColor24_Init(interp) == TCL_ERROR)
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

  if (ColorbarHSVTrueColor8_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (ColorbarHSVTrueColor16_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (ColorbarHSVTrueColor24_Init(interp) == TCL_ERROR)
    return TCL_ERROR;

  if (ColorbarHLSTrueColor8_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (ColorbarHLSTrueColor16_Init(interp) == TCL_ERROR)
    return TCL_ERROR;
  if (ColorbarHLSTrueColor24_Init(interp) == TCL_ERROR)
    return TCL_ERROR;

  if (IIS_Init(interp) == TCL_ERROR)
    return TCL_ERROR;

  // dummy command 
  // needed for auto_load, since all of our real work are canvas widgets, 
  // tcl commands

  Tcl_CreateCommand(interp, "saotk", (Tcl_CmdProc* )SaotkCmd,
  		    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateCommand(interp, "hipsinfo", (Tcl_CmdProc* )HiPSInfoCmd,
		    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  if (Tcl_PkgProvide(interp, PACKAGE_NAME, PACKAGE_VERSION) != TCL_OK)
    return TCL_ERROR;

  return TCL_OK;
}

int SaotkCmd(ClientData data, Tcl_Interp *interp, int argc, const char* argv[])
{
  return TCL_OK;
}

// hipsinfo: what the HiPS reader (fitsy FitsHiPS) makes of a HiPS, for
// the Tcl side (dialogs, the remote fetcher), so it never copies it.
//   hipsinfo describe <name>
//     name is the root directory plus options, as loaded. A dict:
//     format (fits, png or jpg), frame, width, minorder, maxorder,
//     depth, slice (1-based), order/source/nside (what a load would read:
//     norder= or the automatic choice; order -1 and source {} if
//     nothing, with why), lon/lat (the initial view in the HiPS's frame,
//     {} if none), fov ({} if none). Throws the reader's error (no
//     properties, a catalogue, a bad option or format).
//   hipsinfo format <name>
//     the tiles a load reads: fits, png or jpg (the properties and
//     options only, no looking for tiles); throws the reader's error
//   hipsinfo allsky <name> <order>
//     {width bad}: the usable Allsky tile width (0 if none) and 1 if one
//     is there but can't be used
//   hipsinfo moc <file> <order>
//     the tiles of order a NUNIQ MOC covers; throws if it can't be read

// the reader reports through ds9(msg) (internalError); take its message
// and leave ds9(msg) as it was
static std::string HiPSInfoTake(Tcl_Interp* interp, const char* save)
{
  const char* mm = Tcl_GetVar2(interp, "ds9", "msg", TCL_GLOBAL_ONLY);
  std::string msg = mm ? mm : "";
  if (!msg.compare(0, 6, "HiPS: "))
    msg = msg.substr(6);
  Tcl_SetVar2(interp, "ds9", "msg", save, TCL_GLOBAL_ONLY);
  return msg;
}

static void HiPSInfoPut(Tcl_Obj* dict, const char* key, Tcl_Obj* val)
{
  Tcl_DictObjPut(NULL, dict, Tcl_NewStringObj(key, -1), val);
}

static Tcl_Obj* HiPSInfoReal(double vv)
{
  return isnan(vv) ? Tcl_NewObj() : Tcl_NewDoubleObj(vv);
}

int HiPSInfoCmd(ClientData data, Tcl_Interp *interp, int argc,
		const char* argv[])
{
  int three = argc == 3 &&
    (!strcmp(argv[1], "describe") || !strcmp(argv[1], "format"));
  int four = argc == 4 &&
    (!strcmp(argv[1], "allsky") || !strcmp(argv[1], "moc"));
  if (!three && !four) {
    Tcl_SetObjResult(interp, Tcl_NewStringObj(
      "usage: hipsinfo describe|format name | allsky name order | moc file order",
      -1));
    return TCL_ERROR;
  }

  int order = -1;
  if (argc == 4 && Tcl_GetInt(interp, argv[3], &order) != TCL_OK)
    return TCL_ERROR;

  if (!strcmp(argv[1], "moc")) {
    std::vector<long long> tiles;
    if (!FitsHiPS::mocTiles(argv[2], order, &tiles)) {
      Tcl_SetObjResult(interp, Tcl_NewStringObj("not a readable NUNIQ MOC", -1));
      return TCL_ERROR;
    }
    Tcl_Obj* ll = Tcl_NewListObj(0, NULL);
    for (size_t ii=0; ii<tiles.size(); ii++)
      Tcl_ListObjAppendElement(NULL, ll, Tcl_NewWideIntObj(tiles[ii]));
    Tcl_SetObjResult(interp, ll);
    return TCL_OK;
  }

  const char* old = Tcl_GetVar2(interp, "ds9", "msg", TCL_GLOBAL_ONLY);
  std::string save = old ? old : "";
  Tcl_SetVar2(interp, "ds9", "msg", "", TCL_GLOBAL_ONLY);
  FitsHiPS hips(argv[2], interp, -1, strcmp(argv[1], "describe") ? 2 : 1);
  std::string msg = HiPSInfoTake(interp, save.c_str());
  if (!hips.isValid()) {
    if (msg.empty())
      msg = "can't read " + std::string(argv[2]);
    Tcl_SetObjResult(interp, Tcl_NewStringObj(msg.c_str(), -1));
    return TCL_ERROR;
  }

  if (!strcmp(argv[1], "format")) {
    Tcl_SetObjResult(interp, Tcl_NewStringObj(hips.tileExt(), -1));
    return TCL_OK;
  }

  if (!strcmp(argv[1], "allsky")) {
    int bad = 0;
    int ww = hips.allskyAt(order, &bad);
    Tcl_Obj* ll = Tcl_NewListObj(0, NULL);
    Tcl_ListObjAppendElement(NULL, ll, Tcl_NewIntObj(ww));
    Tcl_ListObjAppendElement(NULL, ll, Tcl_NewIntObj(bad));
    Tcl_SetObjResult(interp, ll);
    return TCL_OK;
  }

  Tcl_Obj* dd = Tcl_NewDictObj();
  HiPSInfoPut(dd, "format", Tcl_NewStringObj(hips.tileExt(), -1));
  const char* frames[] = {"", "equatorial", "galactic", "ecliptic"};
  HiPSInfoPut(dd, "frame", Tcl_NewStringObj(frames[hips.frame()], -1));
  HiPSInfoPut(dd, "width", Tcl_NewIntObj(hips.tileWidth()));
  HiPSInfoPut(dd, "minorder", Tcl_NewIntObj(hips.minOrder()));
  HiPSInfoPut(dd, "maxorder", Tcl_NewIntObj(hips.maxOrder()));
  HiPSInfoPut(dd, "depth", Tcl_NewIntObj(hips.depth()));
  HiPSInfoPut(dd, "slice", Tcl_NewIntObj(hips.slice()+1));
  const char* src = "";
  if (hips.source() == FitsHiPS::TILES)
    src = "tiles";
  else if (hips.source() == FitsHiPS::ALLSKY)
    src = hips.readWidth() == hips.tileWidth() ? "allsky" : "reduced";
  HiPSInfoPut(dd, "order", Tcl_NewIntObj(hips.order()));
  HiPSInfoPut(dd, "source", Tcl_NewStringObj(src, -1));
  HiPSInfoPut(dd, "nside", Tcl_NewWideIntObj(hips.source() == FitsHiPS::NONE
					     ? 0 : hips.nside()));
  HiPSInfoPut(dd, "why", Tcl_NewStringObj(hips.source() == FitsHiPS::NONE
					   ? msg.c_str() : "", -1));
  double lon, lat;
  if (hips.initialPosition(&lon, &lat)) {
    HiPSInfoPut(dd, "lon", Tcl_NewDoubleObj(lon));
    HiPSInfoPut(dd, "lat", Tcl_NewDoubleObj(lat));
  }
  else {
    HiPSInfoPut(dd, "lon", Tcl_NewObj());
    HiPSInfoPut(dd, "lat", Tcl_NewObj());
  }
  HiPSInfoPut(dd, "fov", HiPSInfoReal(hips.initialFov()));
  Tcl_SetObjResult(interp, dd);
  return TCL_OK;
}
