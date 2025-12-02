/* default xfile.h
 */

#ifndef XFILE_H
#define XFILE_H

#include <stdio.h>

typedef FILE *File;
#define ftOpen(n, m)		fopen(n, m)
#define ftWrite(f, b, s, n)	fwrite(b, s, n, f)
#define ftRead(f, b, s, n)	fread(b, s, n, f)
#define ftGets(f, b, n)		fgets(b, n, f)
#define ftFlush(f)		fflush(f)
#define ftSeek(f, o, n)		(fseek(f, o, n), ftell(f))
#define ftTell(f)		ftell(f)
#define ftOpenFd(fd, mode)	fdopen(fd, mode)
#define ftClose(fd)		fclose(fd)

#endif
