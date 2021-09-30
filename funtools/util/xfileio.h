/*
 *
 * xfileio.h -- package-specific xfileio.h used by fitsy
 *
 */

#ifndef XFILEIO_H
#define XFILEIO_H

#include "gio.h"

/* define the basic IO routines */
typedef GIO File;
#define ftOpen(n, m)		gopen(n, m)
#define ftRead(f, b, s, n)	gread(f, b, s, n)
#define ftGets(f, b, n)		ggets(f, b, n)
#define ftWrite(f, b, s, n)	gwrite(f, b, s, n)
#define ftFlush(f)		gflush(f)
#define ftSeek(f, o, n)		(gseek(f, o, n), gtell(f))
#define ftTell(f)		gtell(f)
#define ftClose(fd)		gclose(fd)

#endif
