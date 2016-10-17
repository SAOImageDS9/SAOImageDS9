/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <xpap.h>

#define MAX_XPAS 10000

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
    fprintf(stderr, "  %s [-c] [-h] [-i nsinet] [-m method] [-n] [-t sval,lval] [-u users] [-v|-V] <template> [type]\n", s);
    fprintf(stderr, "\n");
    fprintf(stderr, "switches:\n");
    fprintf(stderr, "\t-c\tcontact each access point individually to see if it is available\n");
    fprintf(stderr, "\t-h\tprint this message\n");
    fprintf(stderr, "\t-i\toverride XPA_NSINET environment variable\n");
    fprintf(stderr, "\t-m\toverride XPA_METHOD environment variable\n");
    fprintf(stderr, "\t-n\treturn number of matches instead of \"yes\" or \"no\"\n");
    fprintf(stderr, "\t-t \toverride XPA_[SHORT,LONG]_TIMEOUT environment variables\n");
    fprintf(stderr, "\t-u \toverride XPA_NSUSERS environment variable\n");
    fprintf(stderr, "\t-v\tprint info about successful access points\n");
    fprintf(stderr, "\t-V\tprint info and errors about all access points\n");
    fprintf(stderr, "\t--version display version and exit\n");
    fprintf(stderr, "\n");
    fprintf(stderr, "xpaaccess returns \"yes\" if there are existing XPA access points that match\n");
    fprintf(stderr, "the template (and optional access type: g,i,s), and returns \"no\" otherwise.\n");
    fprintf(stderr, "If -n is specified, the number of matches is returned.\n");
    fprintf(stderr, "Templates are of the form [class:]name. Wildcards *,?,[] are accepted.\n");
    fprintf(stderr, "\n");
    fprintf(stderr, "examples:\n");
    fprintf(stderr, "\tcsh> if( `xpaaccess ds9` == \"yes\") then ...\n" );
    fprintf(stderr, "\tcsh> set got=`xpaaccess -n ds9 g`\n");
    fprintf(stderr, "\n(version: %s)\n", XPA_VERSION);
    exit(0);
}

/* catch error from pre 2.1 server -- if we find this error, we know the
   access point is available */
#define OLD_SERVER(s) strstr(s, "XPA$ERROR invalid xpa command in initialization string")

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
  int n=0;
  int donum=0;
  int verbosity=0;
  int contact=0;
  char cmd[SZ_LINE];
  char mode[SZ_LINE];
  char *type=NULL;
  char *xtmpl=NULL;
  char **rclasses;
  char **rnames;
  char **rmethods;
  char **rinfos;
  char *names[MAX_XPAS];
  char *errs[MAX_XPAS];
  XPA xpa=NULL;

  /* display version and exit, if necessary */
  if( (argc == 2) && !strcmp(argv[1], "--version") ){
    fprintf(stderr, "%s\n", XPA_VERSION);
    exit(0);
  }

  /* start with no mode flag */
  *mode = '\0';

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* process switch arguments */
  while ((c = getopt(argc, argv, "chi:m:nt:u:vVwW")) != -1){
    switch(c){
    case 'c':
      contact=1;
      break;
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
      donum=1;
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
    case 'v':
      verbosity=1;
      break;
    case 'V':
      verbosity=2;
      break;
    /* for backward compatibility with 1.0 */
    case 'w':
    case 'W':
      break;
    }
  }

  /* we must have a template */
  if( optind >= argc ){
    usage(argv[0]);
  }
  else{
    xtmpl = argv[optind];
    optind++;
    if( optind < argc ){
      type = argv[optind];
    }
  }

  /* if we need to contact each server ... */
  if( contact ){
    got = XPAAccess(xpa, xtmpl, type, mode, names, errs, MAX_XPAS);
    for(i=0; i<got; i++){
      if( !errs[i] || OLD_SERVER(errs[i]) ){
	if( verbosity ) fprintf(stdout, "%s\n", names[i]);
	n++;
      }
      else{
	if( verbosity >= 2 ) fprintf(stdout, "%s", errs[i]);
      }
      if( errs[i] )  xfree(errs[i]);
      if( names[i] ) xfree(names[i]);
    }
  }
  /* only contact name server */
  else{
    n = XPANSLookup(xpa, xtmpl, type, &rclasses, &rnames, &rmethods, &rinfos);
    /* free up the space */
    for(i=0; i<n; i++){
      if( verbosity ){
	fprintf(stdout, "%s", rmethods[i]);
	if( strcmp(rinfos[i], XPA_DEF_CLIENT_INFO) )
	  fprintf(stdout, " %s", rinfos[i]);
	fprintf(stdout, "\n");
      }
      /* done with these strings */
      xfree(rclasses[i]);
      xfree(rnames[i]);
      xfree(rmethods[i]);
      xfree(rinfos[i]);
    }
    /* free up arrays returned by name server */
    if( n > 0 ){
      xfree(rclasses);
      xfree(rnames);
      xfree(rmethods);
      xfree(rinfos);
    }
  }

  /* print out number */
  if( !verbosity && donum ){
    fprintf(stdout, "%d\n", n);
  }
  /* print out yes/no */
  else if( !verbosity && !donum ){
    if( n > 0 )
      fprintf(stdout, "yes\n");
    else
      fprintf(stdout, "no\n");
  }
  fflush(stdout);
  return(n);
}
