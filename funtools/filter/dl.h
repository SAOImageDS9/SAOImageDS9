#ifndef	__dl_h
#define	__dl_h

#if HAVE_CONFIG_H
#include "conf.h"
#endif

#ifdef HAVE_DLFCN_H
#include <dlfcn.h>
#endif

#include "prsetup.h"

_PRbeg

void *DLOpen _PRx((char *name));
void *DLSym _PRx((void *dl, char *name));
int DLClose _PRx((void *dl));


_PRend

#endif
