#include <tclmainlib.h>

int funcen_main(int argc, char **argv);
int funcnts_main(int argc, char **argv);
int fundisp_main(int argc, char **argv);
int funhead_main(int argc, char **argv);
int funhist_main(int argc, char **argv);
int funimage_main(int argc, char **argv);
int funmerge_main(int argc, char **argv);
int funtable_main(int argc, char **argv);
int funcalc_main(int argc, char **argv);
#if HAVE_TCL
#include <tcl.h>

int Funtools_Init (void *vinterp)
{
  Tcl_Interp *interp = (Tcl_Interp *)vinterp;

  Tcl_CreateObjCommand(interp, "funcen", MainLib_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "funcnts", MainLib_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "fundisp", MainLib_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "funhead", MainLib_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "funhist", MainLib_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "funimage", MainLib_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "funmerge", MainLib_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "funtable", MainLib_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateObjCommand(interp, "funcalc", MainLib_Tcl,
    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_PkgProvide(interp, "funtools", "1.0");
  return(TCL_OK);
}

int funtclmainlib=1;
#else

int funtclmainlib=0;
#endif
