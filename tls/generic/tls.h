/*
 * TLS Channel - This extension provides a encrypted communication channel
 * using the TLS or SSL protocols. It can be layered on top of any
 * bi-directional Tcl_Channel.
 *
 * Copyright (C) 1997-2000 Matt Newman <matt@novadigm.com>
 *
 * Addition credit is due for Andreas Kupries (a.kupries@westend.com), for
 * providing the Tcl_ReplaceChannel mechanism and working closely with me
 * to enhance it to support full fileevent semantics.
 *
 * Also work done by the follow people provided the impetus to do this "right":-
 *	tclSSL (Colin McCormack, Shared Technology)
 *	SSLtcl (Peter Antman)
 *
 */

#ifndef _TLS_H
#define _TLS_H

#include <tcl.h>

/*
 * Initialization routines -- our entire public C API.
 */
DLLEXPORT int Tls_Init(Tcl_Interp *interp);
DLLEXPORT int Tls_SafeInit(Tcl_Interp *interp);

#endif /* _TLS_H */
