/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * gcat -- cat-like program using gio with byte-swapping support
 *
 */

#include <gio.h>

#define BUFSIZE 4096

extern char *optarg;
extern int optind;

#ifdef ANSI_FUNC
static void swap2(char *to, char *from, size_t nbytes)
#else
static void swap2(to, from, nbytes)
     char *to;
     char *from;
     size_t nbytes;
#endif
{
  char c;
  size_t i;
  for(i=0; i < nbytes; i += 2, (to += 2), (from += 2)){
    c = *from;
    *(to) = *(from+1);
    *(to+1) = c;
  }
}

#ifdef ANSI_FUNC
static void swap4(char *to, char *from, size_t nbytes)
#else
static void swap4(to, from, nbytes)
     char *to;
     char *from;
     size_t nbytes;
#endif
{
  char c;
  size_t i;
  for(i=0; i < nbytes; i += 4, (to += 4), (from += 4)){
    c = *from;
    *to = *(from+3);
    *(to+3) = c;
    c = *(from+1);
    *(to+1) = *(from+2);
    *(to+2) = c;
  }
}

#ifdef ANSI_FUNC
static void swap8(char *to, char *from, size_t nbytes)
#else
static void swap8(to, from, nbytes)
     char *to;
     char *from;
     size_t nbytes;
#endif
{
  char c;
  size_t i;
  for(i=0; i < nbytes; i += 8, (to += 8), (from += 8)){
    c = *(from+0);
    *(to+0) = *(from+7);
    *(to+7) = c;
    c = *(from+1);
    *(to+1) = *(from+6);
    *(to+6) = c;
    c = *(from+2);
    *(to+2) = *(from+5);
    *(to+5) = c;
    c = *(from+3);
    *(to+3) = *(from+4);
    *(to+4) = c;
  }
}


#ifdef ANSI_FUNC
static void usage(char *s)
#else
static void usage(s)
     char *s;
#endif
{
  fprintf(stderr,
	  "usage: %s <switches> [iname [oname]]\n", s);
  fprintf(stderr, "optional switches:\n");
  fprintf(stderr, "  -b bufsize       # number of records to read at once (def: %d)\n", BUFSIZE);
  fprintf(stderr, "  -e elsize        # size of an individual record (def: 1)\n");
  fprintf(stderr, "  -s elsize        # swap bytes in a record of this size (def: no swapping)\n");
  fprintf(stderr, "  -v               # verbose messages as data is transferred\n");
  fprintf(stderr, "examples:\n");
  fprintf(stderr, "# copy named files\n");
  fprintf(stderr, "%s foo foo2\n", s);
  fprintf(stderr, "# or copy file to socket 1234 on this host\n");
  fprintf(stderr, "%s foo '$host:1234'\n", s);
  fprintf(stderr, "# or copy from a socket on this host to another host\n");
  fprintf(stderr, "%s '$host:1234' 'remotehost:2345'\n", s);
  exit(0);
}

#ifdef ANSI_FUNC
int
main (int argc, char **argv)
#else
int main(argc, argv)
     int argc;
     char **argv;
#endif
{
  int c;
  int got;
  int args;
  int ntot=0;
  int doswap=0;
  int elsize=1;
  int verbose=0;
  int bufsize=BUFSIZE;
  char *ibuf=NULL;
  char *obuf=NULL;
  char *iname=NULL;
  char *oname=NULL;
  GIO igio;
  GIO ogio;

  /* exit on gio errors */
  setgerror(2);

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* process switch arguments */
  while ((c = getopt(argc, argv, "b:e:hs:v")) != -1){
    switch(c){
    case 'h':
      usage(argv[0]);
      return 0;
    case 'b':
      bufsize = atoi(optarg);
      break;
    case 'e':
      elsize = atoi(optarg);
      break;
    case 's':
      elsize = atoi(optarg);
      switch(elsize){
      case 1:
	doswap = 0;
	break;
      case 2:
      case 4:
      case 8:
	doswap = 1;
	break;
      default:
	gerror(stderr, "ERROR: invalid swap size argument: %d\n", elsize);
	break;
      }
      break;
    case 'v':
      verbose++;
      break;
    }
  }

  /* process remaining command line arguments(i.e. file names) */
  args = argc - optind;
  switch(args){
  case 0:
    iname = "stdin";
    oname = "stdout";
    break;
  case 1:
    iname = argv[optind+0];
    oname = "stdout";
    break;
  case 2:
    iname = argv[optind+0];
    oname = argv[optind+1];
    break;
  default:
    usage(argv[0]);
    exit(1);
  }

  /* sanity checks */
  if( bufsize <= 0 ) gerror(stderr, "bufsize must be positive\n", bufsize);
  if( elsize <= 0 )  gerror(stderr, "elsize must be positive\n", elsize);

  /* allocate space */
  ibuf = xcalloc(elsize, bufsize);
  if( doswap )
    obuf = xcalloc(elsize, bufsize);
  else
    obuf = ibuf;

  /* open the input and output files */
  if( !(igio = gopen(iname, "r")) )
    gerror(stderr, "can't gopen input file: %s\n", iname);
  if( !(ogio = gopen(oname, "w")) )
    gerror(stderr, "can't gopen output file: %s\n", oname);

  /* read/write all bytes */
  while( 1 ){
    /* read next buffer's worth */
    got = gread(igio, ibuf, elsize, bufsize);
    if( !got )
      break;
    else if( got < 0 ){
      gerror(stderr, "error reading input file\n");
      break;
    }
    /* swap bytes, if necessary */
    if( doswap ){
      switch(elsize){
      case 2:
	swap2(obuf, ibuf, elsize*got);
	break;
      case 4:
	swap4(obuf, ibuf, elsize*got);
	break;
      case 8:
	swap8(obuf, ibuf, elsize*got);
	break;
      default:
	gerror(stderr, "invalid swap size: %d\n", elsize);
	break;
      }

    }
    /* verbose display */
    if( verbose >= 2 ){
      if( doswap ){
	fprintf(stderr, "transferring %d swapped %d-byte records\n", 
		got, elsize);
      }
      else if( elsize > 1 ){
	fprintf(stderr, "transferring %d %d-byte records\n", 
		got, elsize);
      }
      else{
	fprintf(stderr, "transferring %d bytes\n", got);
      }
    }
    /* write buffer's worth */
    if( gwrite(ogio, obuf, elsize, got) != (unsigned int)got ){
      gerror(stderr, "error writing output file\n");
    }
    ntot += got;
  }

  /* verbose display */
  if( verbose ){
    if( doswap ){
      fprintf(stderr, "transfer from %s to %s: %d swapped %d-byte records\n", 
	      iname, oname, ntot, elsize);
    }
    else if( elsize > 1 ){
      fprintf(stderr, "transfer from %s to %s: %d %d-byte records\n", 
	      iname, oname, ntot, elsize);
    }
    else{
      fprintf(stderr, "transfer from %s to %s: %d bytes\n", 
	      iname, oname, ntot);
    }
  }

  /* close files */
  gclose(igio);
  gclose(ogio);

  /* clean up */
  if( ibuf ) xfree(ibuf );
  if( doswap && obuf ) xfree(obuf);
  return 0;
}
