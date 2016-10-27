/*
 *	Copyright (c) 1999-2005 Smithsonian Astrophysical Observatory
 */

#include <funtoolsP.h>

#define MAXROW 8192
static int maxrow=MAXROW;

#define BLANK "                                                                                "

extern char *optarg;
extern int optind;

#ifdef ANSI_FUNC
static int 
_FunHeadEdit(char *iname, char *oname, char *ename)
#else
  static int _FunHeadEdit(iname, oname, ename)
     char *iname;
     char *oname;
     char *ename;
#endif
{
  int i;
  int type;
  int dim2;
  int action=1;
  int got=0;
  int put=0;
  int pgot=0;
  char *ev;
  char *eptr=NULL;
  char ebuf[SZ_LINE];
  char key[SZ_LINE];
  char val[SZ_LINE];
  char com[SZ_LINE];
  char tfile[SZ_LINE];
  char tbuf[SZ_LINE];
  char *buf=NULL;
  Fun ifun=NULL;
  Fun ofun=NULL;
  GIO efd=NULL;
  FITSHead header=NULL, theader=NULL;
  FITSCard card;

  /* sanity check */
  if( !*iname || !*ename ) return 0;

  /* temp file if no output name is given */
  if( !oname ){
    if( !mkrtemp("fun", ".fits", tfile, SZ_LINE, 0) ){
      gerror(stderr, "can't open temp file for param editing\n");
    }
    oname = tfile;
  }

  /* open file(s) */
  if( !(efd = gopen(ename, "r")) ){
    gerror(stderr, "can't open edit file: %s\n", ename);
  }
  if( !(ifun = FunOpen(iname, "rC", NULL)) ){
    gerror(stderr, "can't FunOpen input file (or find extension): %s\n",
	   iname);
  }
  if( !(ofun = FunOpen(oname, "w", ifun)) ){
    gerror(stderr, "can't FunOpen output file: %s\n",
	   oname);
  }

  /* we write into the temp space of the output header */
  FunInfoGet(ifun, FUN_HEADER,  &header, FUN_TYPE, &type, 0);
  FunInfoGet(ofun, FUN_THEADER, &theader, 0);

  /* read and process the edit commands */
  while( ggets (efd, ebuf, SZ_LINE) ){
    eptr = ebuf;
    /* skip comments and blank lines */
    if( (*eptr == '#') || (*eptr == '\n') ) continue;
    /* skip whitespace */
    while( isspace((int)*eptr) ) eptr++;
    /* check for action type */
    switch((int)*eptr){
    case '-':
      action = 1;
      eptr++;
      break;
    case '?':
      action = 2;
      eptr++;
      break;
    default:
      action = 3;
      break;
    }
    /* analyze string */
    pgot = FunTextParam(NULL, eptr, key, val, com, SZ_LINE);
    /* key is always upper case */
    cluc(key);
    /* process action for this parameter */
    switch(action){
    case 1:
      /* delete the parameter */
      if( (card=ft_headfind(theader, key, 0, 0)) && *card->c ){
	ft_headdel(theader, key, 0);
      }
      else if( (card=ft_headfind(header, key, 0, 0)) && *card->c  ){
	ft_headdel(header, key, 0);
      }
      else{
	fprintf(stdout, "WARNING: %s not found\n", key);
      }
      break;
    case 2:
      /* display the parameter */
      if( ((card=ft_headfind(theader, key, 0, 0)) && *card->c)  ||
 	  ((card=ft_headfind(header, key, 0, 0)) && *card->c)   ){
	strncpy(tbuf, card->c, FT_CARDLEN);
	tbuf[FT_CARDLEN] = '\0';
	fprintf(stdout, "%s\n", tbuf);
      }
      else{
	fprintf(stdout, "WARNING: %s not found\n", key);
      }
      fflush(stdout);
      break;
    case 3:
      /* add or modify the parameter */
      FunTextParamHeader(theader, eptr, key, val, com, pgot);
      break;
    default:
      break;
    }
  }
  if( efd )  gclose(efd);

  /* copy data */
  switch(type){
  case FUN_IMAGE:
  case FUN_ARRAY:
    FunInfoGet(ifun, FUN_SECT_DIM2, &dim2, 0);
    /* set dim2 to 1 for a 1D image */
    if( dim2 == 0 ) dim2 = 1;
    /* copy the image from input to output */
    for(i=1; i<=dim2; i++){
      /* extract image row by row */
      if( !(buf = FunImageRowGet(ifun, buf, i, i, NULL)) )
	gerror(stderr, "can't FunImageRowGet: %s\n", iname);
      /* write output image row by row */
      if( !FunImageRowPut(ofun, buf, i, i, 0, 0, 0, NULL) )
	gerror(stderr, "can't FunImageRowPut: %s\n", oname);
    }
    if( buf ) xfree(buf);
    break;
  case FUN_TABLE:
  case FUN_EVENTS:
    /* copy the events from input to output */
    while( (ev = FunTableRowGet(ifun, NULL, maxrow, NULL, &got)) ){
      if( (put=FunTableRowPut(ofun, ev, got, 0, NULL)) != got ){
	gerror(stderr, "expected to write %d rows; only wrote %d\n",
	       got, put);
      }
      if( ev ) xfree(ev);
    }
    break;
  }

  /* flush and close files */
  if( ofun ) FunClose(ofun);
  if( ifun ) FunClose(ifun);
  return 0;
}

#ifdef ANSI_FUNC
static void
usage (char *fname)
#else
static void usage(fname)
     char *fname;
#endif
{
  fprintf(stderr,
	  "usage: %s [-a] [-s] [-t] [-L] iname[ext] [oname ename]\n", 
	  fname);
  fprintf(stderr, "optional switches:\n");
  fprintf(stderr, "  -a  # display all extension headers\n");
  fprintf(stderr, "  -s  # display 79 chars instead of 80 before the new-line \n");
  fprintf(stderr, "  -t  # prepend data type char to each line of output\n");
  fprintf(stderr, "  -L  # output in rdb/starbase list format\n");
  fprintf(stderr, "\n(version: %s)\n", FUN_VERSION);
  exit(1);
}

#ifdef ANSI_FUNC
int 
main (int argc, char **argv)
#else
int
main(argc, argv)
     int argc;
     char **argv;
#endif
{
  int c;
  int i;
  int args;
  int got;
  int clen=0;
  int extno=0;
  int doall=0;
  int dotype=0;
  int dolist=0;
  int rcode=0;
  char *s, *t;
  char *ind;
  char *fmt="%.80s\n";
  char *iname=NULL;
  char *oname=NULL;
  char *ename=NULL;
  char *cname=NULL;
  Fun fun;

  /* exit on gio errors */
  if( !getenv("GERROR")  )
    setgerror(2);

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* process switch arguments */
  while ((c = getopt(argc, argv, "astL")) != -1){
    switch(c){
    case 'a':
      doall = 1;
      break;
    case 's':
      fmt = "%.79s\n";
      break;
    case 't':
      dotype = 1;
      fmt = "%.77s\n";
      break;
    case 'L':
      dolist = 1;
      break;
    }
  }

  /* get maxrow,if user-specified */
  if( (s=(char *)getenv("FUN_MAXROW")) != NULL )
    maxrow = atoi(s);

  /* check for required arguments */
  args = argc - optind;
  if( (args != 1) && (args != 3) ) usage(argv[0]);

  /* input file name */
  iname = xstrdup(argv[optind+0]);

  /* edit expression right here and exit */
  if( args >= 2 ){
    if( args >= 3 ){
      oname = xstrdup(argv[optind+1]);
      ename = xstrdup(argv[optind+2]);
    }
    else{
      ename = xstrdup(argv[optind+1]);
    }
    rcode = _FunHeadEdit(iname, oname, ename);
    goto done;
  }
    
  /* if we are doing all extensions, remove bracket specifcation from base */
  if( doall ){
    if( (ind=strchr(iname, '[')) || (ind=strchr(iname, ',')) ){
      *ind = '\0';
    }
  }

  /* set up current name */
  clen = strlen(iname) + SZ_LINE;
  cname = xcalloc(clen, sizeof(char));

  /* set up the first extension */
  if( doall ){
    snprintf(cname, clen, "%s[%d]", iname, extno);
    extno++;
  }
  else{
    strncpy(cname, iname, clen);
  }

again:
  /* open the input FITS extension  */
  if( !(fun = FunOpen(cname, "r", NULL)) ){
    /* if we are doing all extension, an error means we are done */
    if( doall )
      return(0);
    /* not doing all, so if no extension was given, try primary */
    if( !strchr(iname, '[') && !strchr(iname, ',') ){
      snprintf(cname, clen, "%s[0]", iname);
      if( !(fun = FunOpen(cname, "r", NULL)) )
	gerror(stderr, "can't FunOpen input file (or find extension): %s\n",
	       iname);
    }
    else{
      gerror(stderr, "can't FunOpen input file (or find extension): %s\n",
	     iname);
    }
  }


  if ( dolist ) {
      fprintf(stdout, "\n");
      fprintf(stdout, "FITSNAME\t%s\n", iname);
  } else {
      /* get extension name */
      if( (s=FunParamGets(fun, "EXTNAME", 0, NULL, &got)) ){
	  fprintf(stdout, "\t\tExtension: %s", s);
	  if( (t=FunParamGets(fun, "HDUNAME", 0, NULL, &got)) )
	      fprintf(stdout, "/%s", t);
	  fprintf(stdout, "\n\n");
	  if( s ) xfree(s);
	  if( t ) xfree(t);
      }
  }

  /* display cards */
  for(i=1; ;i++){
    if( (s = FunParamGets(fun, NULL, i, NULL, &got)) ){
      if( dolist ) {
	if( strncmp(s, "        ", 8) ) {
	  /* John did this -- its not my fault */
	  fprintf(stdout, "%8.8s\t%s\n", s,
		  (char *)ft_cardget((FITSCard)s));
	}
      } else {
	if( dotype )
	  fprintf(stdout, "%c ", got);
	fprintf(stdout, fmt, s);
      }
      xfree(s);
    }
    else{
      break;
    }
  }
  fflush(stdout);
  
  /* close file */
  FunClose(fun);

  /* if we are processing all extensions, go back for more */
  if( doall ){
    snprintf(cname, clen, "%s[%d]", iname, extno);
    extno++;
    goto again;
  }

done:
  /* clean up */
  if( iname ) xfree(iname);
  if( oname ) xfree(oname);
  if( cname ) xfree(cname);
  if( ename ) xfree(ename);

  return(rcode);
}
