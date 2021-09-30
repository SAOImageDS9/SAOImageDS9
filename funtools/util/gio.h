/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * GIO.H -- include file for gio.c
 *
 */

#ifndef _gio_h

#if HAVE_CONFIG_H
#include "conf.h"
#endif

#include "xport.h"

#include <stdio.h>
#ifdef HAVE_STRING_H
#include <string.h>
#endif
#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif
#ifdef HAVE_MALLOC_H
#include <malloc.h>
#endif
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#ifdef HAVE_SYS_SHM_H
#include <sys/shm.h>
#endif
#ifdef HAVE_SYS_MMAN_H
#include <sys/mman.h>
#endif
#ifdef __STDC__
#include <stdarg.h>
#else
#include <varargs.h>
#endif
#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/time.h>

#include "prsetup.h"
#include "xalloc.h"

/* use ftello/fseeko (assuming its available) if we are using 64-bit offsets */
#if _FILE_OFFSET_BITS == 64

#ifdef USE_FTELLO
#undef USE_FTELLO
#endif
#if HAVE_FTELLO
#define USE_FTELLO 1
#endif

#ifdef USE_FSEEKO
#undef USE_FSEEKO
#endif
#if HAVE_FSEEKO
#define USE_FSEEKO 1
#endif

#endif

/* make sure socklen_t is available, since some systems don't use it */
#ifndef HAVE_SOCKLEN_T
#define socklen_t int
#endif

/* define the types of "file" we can open */
#define GIO_DISK	1
#define GIO_STREAM	2
#define GIO_MEMORY	4
#define GIO_MMAP	8
#define GIO_SHM		16
#define GIO_PIPE	32
#define GIO_SOCKET	64
#define GIO_GZIP       128

/* define the size of the memory buffer increment we allocate */
#define GIO_BUFINC 81920

/* define socket parameters */
#define GIO_RETRIES   6000
#define GIO_MAXLISTEN 1000
#define GIO_TIMEOUT     60

typedef struct {
  int type;
  char *name;
  char *mode;
  /* memory types */
  char *buf;
  off_t len;
  off_t cur;
  int extend;
  /* disk files and streams */
  FILE *fp;
  int unbuffered;
  /* gzip */
  void *gz;
  /* shared memory */
  int shmid;
  /* command pipes and sockets */
  int pid;
  int ifd;
  int ofd;
  /* cr-delimited files */
  char *crbuf;
  int crlen;
} *GIO, GIORec, GFile;

_PRbeg

GIO gopen _PRx((char *name, char *mode));
GIO gmemopen _PRx((char *buf, off_t len, char *mode));
void *_gread _PRx((GIO gio, char *buf, size_t size, size_t n, size_t *got));
size_t gread _PRx((GIO gio, char *buf, size_t size, size_t n));
size_t gwrite _PRx((GIO gio, char *buf, size_t size, size_t n));
void *ggets _PRx((GIO gio, char *buf, int len));
int gflush _PRx((GIO gio));

off_t gseek _PRx((GIO gio, off_t offset, int whence));
off_t gtell _PRx((GIO gio));
int gskip _PRx((GIO gio, off_t n));
int ginfo _PRx((GIO gio, 
		char **name, int *type, off_t *cur, char **buf, int *len));
void gfreebuf _PRx((GIO gio, void *buf));
void gclose _PRx((GIO gio));
int setgerror _PRx((int flag));
char *gerrorstring _PRx((void));
#ifdef __STDC__
int gprintf(GIO gio, char *format, ...);
void gerror(FILE *fd, char *format, ...);
void gwarning(FILE *fd, char *format, ...);
#else
int gprintf();
void gerror();
void gwarning();
#endif
int setgwarning _PRx((int flag));
char *gwarningstring _PRx((void));
void gsleep _PRx((int millisec));

#if USE_FTELLO
off_t ftello _PRx((FILE *stream));
#endif
#if USE_FSEEKO
int fseeko _PRx((FILE *stream, off_t offset, int whence));
#endif

_PRend

#define _gio_h

#endif
