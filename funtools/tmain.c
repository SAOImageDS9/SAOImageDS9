/*
 *
 * tmain -- call a funtools main program as a subroutine
 *
 *  saoconfig shmainlib
 *  make
 *  make shmainlib
 *  gcc -g -o tmain -I. -I./util tmain.c libfuntools.a -ldl -lm
 *
 *  gcc -g -o tmain -I. -I./util tmain.c libfuntoolsMainLib.a libfuntools.a
 *  -ldl -lnsl -lsocket -lm
 *
 *   gcc -g -o tmain -I. -I./util tmain.c libfuntoolsMainLib.a libtclfun.a \
 *   libfuntools.a /proj/rd/lib/libtcl8.4.so -ldl -lnsl -lsocket -lm
 *
 *   ./tmain -s libfuntoolsMainLib.dylib $S "fundisp foo[circle(512,512,.1)]"
 *  or
 *   ./tmain -s libfuntoolsMainLib.so $S "fundisp foo[circle(512,512,.1)]"
 *  or
 *   ./tmain $S 'fundisp xxx[cir(512,512,.1)] | awk "NR>2{print $5}"'
 *
 */

#define DYNAMIC 0

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>
#include <sys/mman.h>
#include <mainlib.h>
#include <file.h>

#define HAVE_TCL 0

extern char *optarg;
extern int optind;

#ifdef ANSI_FUNC
int 
main (int argc, char **argv)
#else
main(argc, argv)
     int argc;
     char **argv;
#endif
{
  int c;
  int ip;
  int len;
  int got;
  int args;
  int prot;
  int flags;
  int domem=0;
  char *buf=NULL;
  char *buf2=NULL;
  char *shobj=NULL;
  char mode[SZ_LINE];
  char tbuf[SZ_LINE];
  char cmd[SZ_LINE];
  char file[SZ_LINE];
  char *ermsg;
  char *extn;
  char *iname;
  char *ibuf;
  char *s;
  void *dl=NULL;
  struct stat statbuf;
  MainLib ml=NULL, ml2=NULL;
  FILE *fp=NULL;
  FILE *ifp=NULL, *ofp=NULL, *efp=NULL;

  /* initialize */
  *mode = '\0';

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* process switch arguments */
  while ((c = getopt(argc, argv, "mi:e:o:s:t")) != -1){
    switch(c){
    case 'i':
      if( !strcmp(optarg, "stdin") ){
	ifp = stdin;
      }
      else{
	if( !(ifp=fopen(optarg, "r")) ){
	  fprintf(stderr, "can't open '%s' for reading\n", optarg);
	  exit(1);
	}
      }
      snprintf(tbuf, SZ_LINE, "stdin=%d", fileno(ifp));
      if( *mode ) strncat(mode, ",", SZ_LINE);
      strncat(mode, tbuf, SZ_LINE);
      break;
    case 'e':
      if( !(efp=fopen(optarg, "w")) ){
	fprintf(stderr, "can't open '%s' for writing\n", optarg);
	exit(1);
      }
      snprintf(tbuf, SZ_LINE, "stderr=%d", fileno(efp));
      if( *mode ) strncat(mode, ",", SZ_LINE);
      strncat(mode, tbuf, SZ_LINE);
      break;
    case 'm':
      domem=1;
      break;
    case 'o':
      if( !strcmp(optarg, "stdout") ){
	ofp = stdout;
      }
      else{
	if( !(ofp=fopen(optarg, "w")) ){
	  fprintf(stderr, "can't open '%s' for writing\n", optarg);
	  exit(1);
	}
      }
      snprintf(tbuf, SZ_LINE, "stdout=%d", fileno(ofp));
      if( *mode ) strncat(mode, ",", SZ_LINE);
      strncat(mode, tbuf, SZ_LINE);
      break;
    case 's':
      shobj=optarg;
      break;
    case 't':
      if( *mode ) strncat(mode, ",", SZ_LINE);
      strncat(mode, "tcl=0", SZ_LINE);
      break;
    }
  }

  /* process required args */
  args = argc - optind;
  if( args < 2 ){
    fprintf(stderr, "usage: %s file cmd\n", argv[0]);
    exit(1);
  }
  iname = argv[optind+0];
  ibuf = argv[optind+1];

  /* read input file into memory */
  if( domem ){
    if( !(fp = fopen(iname, "r")) ){
      fprintf(stderr, "can't open input file: %s\n", iname);
      exit(1);
    }
    fstat(fileno(fp), &statbuf);
    len = statbuf.st_size;
    prot = PROT_READ;
    flags = MAP_PRIVATE;
    s = mmap(NULL, len, prot, flags, fileno(fp), 0);
    fclose(fp);
    if( !s ){
      fprintf(stderr, "can't mmap input file: %s\n", iname);
      exit(1);
    }
  }
  else{
    s = (char *)FileContents(iname, 0, &len);
    if( !s ){
      fprintf(stderr, "can't access input file: %s\n", iname);
      exit(1);
    }
  }

#if DYNAMIC!=1
  /* init routine is statically linked */
  ml = (MainLib)funtoolsMainLibInit();
#endif

#if DYNAMIC!=0
  /* load shared object and execute init routine */
  switch( MainLibLoad("funtools", shobj, (void **)&ml2, &ermsg) ){
  case -1:
    fprintf(stderr, "can't load shared object %s (%s)\n", shobj, ermsg);
    exit(1);
  case -2:
    fprintf(stderr, "can't init %s (%s)\n", "funtools", ermsg);
    exit(1);
  case -3:
    fprintf(stderr, "invalid call to MainLibLoad (%s)\n", ermsg);
    exit(1);
  }
  /* this is not always an error ( if we have the it linked statically) */
  if( !ml2->mainlibprocess ){
    fprintf(stderr, "no MainLibProcess routine found\n");
    exit(1);
  }
#endif

#if HAVE_TCL
  /* initialize Tcl support */
  MainLibInit_Tcl(ml);
#endif

  /* parse command, file containing possible extension, and extra args */
  ip = 0;
  *cmd = '\0';
  *file = '\0';
  if( !word(ibuf, cmd, &ip) ){
    fprintf(stderr, "requires a command (and usually a file)\n");
    exit(1);
  }

  /* make up command containing memory-based buffer pointer as a filename */
  if( word(ibuf, file, &ip) && *file ){
    strncat(cmd, " ", SZ_LINE-1);
    /* internal buffer pointer is passed as filename */
    /* snprintf(tbuf, SZ_LINE, "\"buf:0x%p:%d", s, len); */
    snprintf(tbuf, SZ_LINE, "\"buf:%#lx:%d", (long)s, len);
    strncat(cmd, tbuf, SZ_LINE-1);
    /* buffer pointer gets extension appended */
    if( (extn = FileExtension(file)) && *extn ) strncat(cmd, extn, SZ_LINE-1);
    strncat(cmd, "\"", SZ_LINE-1);
    /* extra arguments */
    strncat(cmd, " ", SZ_LINE-1);
    strncat(cmd, &ibuf[ip], SZ_LINE-1);
  }

  /* call main as library routine */
  fprintf(stderr, "executing: %s\n", cmd);

#if DYNAMIC == 1
  got = ml2->mainlibprocess(ml2, cmd, &buf, mode);
#elif DYNAMIC == 2
  got = MainLibProcess(ml, cmd, &buf, mode);
  got = ml2->mainlibprocess(ml2, cmd, &buf2, mode);
#else
  got = MainLibProcess(ml, cmd, &buf, mode);
#endif

  /* handle result */
  if( got < 0 ){
    fprintf(stderr, "could not process cmd '%s'\n", cmd);
    exit(1);
  }
  else if( got == 0 ){
    fprintf(stderr, "no output from cmd '%s'\n", cmd);
  }
  else if( got > 1 ){
    fprintf(stderr, "%s", buf);
    if( buf2 ){
      fprintf(stderr, "\n");
      fprintf(stderr, "%s", buf2);
    }
  }

  /* clean up */
  if( extn ) xfree(extn);
  if( buf )  xfree(buf);
  if( s ){
    if( domem ){
      munmap(s, len);
    }
    else{
      xfree(s);
    }
  }

  /* close files */
  if( ifp ) fclose(ifp);
  if( ofp && (ofp != stdout) ) fclose(ofp);

  /* close mainlib lists */
  if( ml  ) MainLibFree(ml);
  if( ml2 ) MainLibFree(ml2);

  /* success */
  return 0;
}
