/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <xpap.h>

extern char *optarg;
extern int optind;

#ifdef ANSI_FUNC
void
usage (char *s)
#else
void usage(s)
     char *s;
#endif
{
    fprintf(stderr, "\n");
    fprintf(stderr, "usage:\n");
    fprintf(stderr, "  %s [-h] [-i nsinet] [-m method] [-n] [-s] [-t sval,lval] [-u users] <tmpl|host:port> [paramlist]\n", s);
    fprintf(stderr, "\n");
    fprintf(stderr, "switches:\n");
    fprintf(stderr, "\t-h\tprint this message\n");
    fprintf(stderr, "\t-i\toverride XPA_NSINET environment variable\n");
    fprintf(stderr, "\t-m\toverride XPA_METHOD environment variable\n");
    fprintf(stderr, "\t-n\tdon't wait for message after server completes (kind of useless!)\n");
    fprintf(stderr, "\t-s\tserver mode\n");
    fprintf(stderr, "\t-t \toverride XPA_[SHORT,LONG]_TIMEOUT environment variables\n");
    fprintf(stderr, "\t-u\toverride XPA_NSUSERS environment variable\n");
    fprintf(stderr, "\t--version display version and exit\n");
    fprintf(stderr, "\n");
    fprintf(stderr, "Data will be retrieved from access points matching the template or host:port.\n");
    fprintf(stderr, "Templates are of the form [class:]name. Wildcards *,?,[] are accepted.\n");
    fprintf(stderr, "A set of qualifying parameters can be appended.\n");
    fprintf(stderr, "\n");
    fprintf(stderr, "examples:\n");
    fprintf(stderr, "\tcsh> xpaget ds9 file\n");
    fprintf(stderr, "\tcsh> xpaget bynars.harvard.edu:1147\n");
    fprintf(stderr, "\n(version: %s)\n", XPA_VERSION);
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
  int i;
  int c;
  int got;
  int lp;
  int errcode=0;
  int server=0;
  int maxhosts=XPA_MAXHOSTS;
  char *paramlist=NULL;
  char *xtemplate=NULL;
  char lbuf[SZ_LINE];
  char tbuf[SZ_LINE];
  char mode[SZ_LINE];
  char cmd[SZ_LINE];
  char *s;
  char **errs=NULL;
  char **names=NULL;
  int fds[1];
  XPA xpa=NULL;

  /* display version and exit, if necessary */
  if( (argc == 2) && !strcmp(argv[1], "--version") ){
    fprintf(stderr, "%s\n", XPA_VERSION);
    exit(0);
  }

  /* make sure we have enough arguments */
  if( argc < 2 )
    usage(argv[0]);

  /* start with no mode flag */
  *mode = '\0';

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* process switch arguments */
  while ((c = getopt(argc, argv, "hi:m:nst:u:wW")) != -1){
    switch(c){
    case 'h':
      usage(argv[0]);
    case 'i':
      snprintf(cmd, SZ_LINE, "XPA_NSINET=%s", optarg);
      putenv(xstrdup(cmd));
      break;
    case 'm':
      snprintf(cmd, SZ_LINE, "XPA_METHOD=%s", optarg);
      putenv(xstrdup(cmd));
      break;
    case 'n':
      if( *mode != '\0' )
	strcat(mode, ",");
      strcat(mode, "ack=false");
      break;
    case 's':
      server = 1;
      xpa = XPAOpen(NULL);
      break;
    case 't':
      {
	int xip=0;
	char xbuf[SZ_LINE];
	newdtable(",;");
	if( word(optarg, xbuf, &xip) && *xbuf && (*xbuf != '*') ){
	  snprintf(cmd, SZ_LINE, "XPA_SHORT_TIMEOUT=%s", xbuf);
	  putenv(xstrdup(cmd));
	}
	if( word(optarg, xbuf, &xip) && *xbuf && (*xbuf != '*') ){
	  snprintf(cmd, SZ_LINE, "XPA_LONG_TIMEOUT=%s", xbuf);
	  putenv(xstrdup(cmd));
	}
	freedtable();
      }
      break;
    case 'u':
      snprintf(cmd, SZ_LINE, "XPA_NSUSERS=%s", optarg);
      putenv(xstrdup(cmd));
      break;
    /* for backward compatibility with 1.0 */
    case 'w':
    case 'W':
      break;
    }
  }

  /* no explicit host:port specified, so we should have a name */
  if( optind >= argc ){
    /* in server mode, we can skip the host on the command line */
    if( !server )
      usage(argv[0]);
  }
  else{
    xtemplate = xstrdup(argv[optind]);
    optind++;
  }

  /* make the paramlist */
  paramlist = XPAArgvParamlist(argc, argv, optind);

  /* init variables for names and ports */
  if( (s=(char *)getenv("XPA_MAXHOSTS")) != NULL )
    maxhosts = atoi(s);
  names = (char **)xcalloc(maxhosts, sizeof(char *));
  errs  = (char **)xcalloc(maxhosts, sizeof(char *));

  /* we only send to stdout */
  fds[0] = fileno(stdout);

again:
  /* if we are in server mode, we might have to read a line from stdin
     to grab the template and paramlist */
  if( server && (xtemplate==NULL) ){
    /* read description of template and paramlist */
    if( fgets(lbuf, SZ_LINE, stdin) == NULL )
      exit(errcode);
    if( (*lbuf == '#') || (*lbuf == '\n') )
      goto again;
    lp = 0;
    if( word(lbuf, tbuf, &lp) && !strcmp(tbuf, "xpaget") &&
	word(lbuf, tbuf, &lp) ){
      xtemplate = xstrdup(tbuf);
      paramlist = xstrdup(&(lbuf[lp]));
      nowhite(paramlist, paramlist);
    }
    else{
      fprintf(stderr, "XPA$ERROR invalid command: %s", lbuf);
      exit(++errcode);
    }
  }

  /* process xpa requests */
  got = XPAGetFd(xpa, xtemplate, paramlist, mode, fds, names, errs, -maxhosts);
  if( got == 0 ){
    fprintf(stderr, "XPA$ERROR no 'xpaget' access points match template: %s\n",
	    xtemplate);
    errcode++;
  }
  else{
    /* display errors and free up strings */
    for(i=0; i<got; i++){
      if( errs[i] != NULL ){
	fprintf(stderr, "%s", errs[i]);
	xfree(errs[i]);
	errcode++;
      }
      if( names[i] != NULL )
	xfree(names[i]);
    }
  }

  /* free the paramlist */
  if( paramlist!= NULL ){
    xfree(paramlist);
    paramlist = NULL;
  }
  /* and the template */
  if( xtemplate != NULL ){
    xfree(xtemplate);
    xtemplate = NULL;
  }

  /* if we are in server mode, go back for more */
  if( server )
    goto again;
  else{
    /* clean up */
    if( errs )  xfree(errs);
    if( names ) xfree(names);
    XPACleanup();
    exit(errcode);
  }
  return(0);
}
