/* nodeObj.h --
 *
 *	This module manages libxml2 xmlNodePtr and event node Tcl objects.
 *
 * Copyright (c) 2003 Zveno Pty Ltd
 * http://www.zveno.com/
 *
 * See the file "LICENSE" for information on usage and
 * redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * $Id: nodeObj.h,v 1.1.1.1 2009/01/16 22:11:49 joye Exp $
 */

#ifndef TCLDOM_LIBXML2_NODEOBJ_H
#define TCLDOM_LIBXML2_NODEOBJ_H

#include "tcl.h"
#include <libxml/tree.h>
#include "tcldom-libxml2.h"

#define TCLDOM_LIBXML2_NODE_NODE 0
#define TCLDOM_LIBXML2_NODE_EVENT 1

typedef void (TclDOM_libxml2Node_FreeHookProc) _ANSI_ARGS_((ClientData clientData));

int TclDOM_libxml2_NodeObjInit _ANSI_ARGS_((Tcl_Interp *interp));

#endif /* TCLDOM_LIBXML2_NODEOBJ_H */
