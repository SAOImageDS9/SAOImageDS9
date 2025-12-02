#include "mainlib.h"

#if HAVE_TCL

/* name of tcl procedure */
#include <tcl.h>

#define TCL_MAINLIB_NAME     "mainlib"

/* library declarations */
_PRbeg

int MainLibInit_Tcl _PRx((MainLib ml));

int MainLibLookup_Tcl _PRx((void *vinterp, char *s));

int MainLibEval_Tcl   _PRx((void *vinterp, char *s));

int MainLibProcess_Tcl _PRx((ClientData clientData, Tcl_Interp *interp,
			     int objc, Tcl_Obj *CONST objv[]));

int MainLibProcessCleanup_Tcl _PRx((ClientData clientData, Tcl_Interp *interp,
				    int objc, Tcl_Obj *CONST objv[]));

int MainLibLoad_Tcl _PRx((ClientData clientData, Tcl_Interp *interp,
			  int objc, Tcl_Obj *CONST objv[]));

_PRend

#endif

