/*
 *	Copyright (c) 2004 Smithsonian Astrophysical Observatory
 */

/*
 *
 * rtest -- server test for xpa
 *
 */
#include <xpap.h>

#define MAX_XPAS 10

extern char *optarg;
extern int optind;

#define BUFSIZE 1000000

char xbuf[BUFSIZE+1];
size_t xlen;
int quiet=0;

#ifdef ANSI_FUNC
int send_cb (void *client_data, void *call_data, char *paramlist, 
	     char **buf, size_t *len)
#else
int send_cb(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char **buf;
     size_t *len;
#endif
{
  XPA xpa = (XPA)call_data;

  if( !xpa ) return(-1);
  *len = xlen;
  *buf = (char *)xmalloc(*len);
  memcpy(*buf, xbuf, *len);
  if( !quiet ) fprintf(stderr, "sent (%s): %lu\n", 
		       paramlist, (unsigned long)xlen);
  return(0);
}

#ifdef ANSI_FUNC
int receive_cb (void *client_data, void *call_data, char *paramlist,
		char *buf, size_t len)
#else
int receive_cb(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     size_t len;
#endif
{
  XPA xpa = (XPA)call_data;

  if( !xpa ) return(-1);
  if( !quiet ) fprintf(stderr, "recd (%s): %s\n", paramlist, buf);
  return(0);
}

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
  int i, j;
  int got;
  int delay=-1;
  int total=0;
  int dobig=0;
  int dofd=0;
  int doexit=0;
  int poll=1;
  int msec=100;
  size_t lens[MAX_XPAS];
  char *bufs[MAX_XPAS];
  char *names[MAX_XPAS];
  char *errs[MAX_XPAS];
  char *xmode="";
  char xname[SZ_LINE];
  char xclass[SZ_LINE];
  char paramlist[SZ_LINE];
  
  int xfds[1];
  XPA xpa;

  /* we use the xpa timestamp routine */
  putenv("XPA_TIMESTAMP_ERRORS=true");

  /* process switch arguments */
  while ((c = getopt(argc, argv, "bd:fm:pqv")) != -1){
    switch(c){
    case 'b':
      dobig = 1;
      break;
    case 'd':
      delay = atoi(optarg);
      break;
    case 'f':
      dofd = 1;
      break;
    case 'm':
      msec = atoi(optarg);
      break;
    case 'p':
      poll = 0;
      break;
    case 'q':
      quiet = 1;
      break;
    case 'v':
      break;
    default:
      break;
    }
  }
  /* make sure we have the xpa argument */
  if( optind >= argc ){
    fprintf(stderr, "usage: %s [xpa] [target1 target2 ...]\n", argv[0]);
    exit(1);
  }
  strcpy(xname, argv[optind++]);
  strcpy(xclass, xname);
  cluc(xclass);

  if( (xpa = XPANew(xclass, xname, "help is on the way", 
		    send_cb, (void *)xname, xmode, 
		    receive_cb, (void *)xname, xmode)) ){
    fprintf(stdout, "%s using method: %s\n", xpa_name(xpa), xpa_method(xpa));
  }
  else{
    fprintf(stderr, "ERROR: could not init xpa\n");
    exit(1);
  }

  if( dobig ){
    for(i=0; i<BUFSIZE; i++){
      xbuf[i] = 'a' + (i%26);
    }
  }
  else{
    snprintf(xbuf, SZ_LINE,
	     "%s:%s %s (%s);",
	     xpa_class(xpa), xpa_name(xpa), xpa_method(xpa), xpa_sendian(xpa));
  }
  xlen = strlen(xbuf);
  xfds[0] = fileno(stderr);

  fprintf(stdout, "\nEntering select loop ...\n");
  while( 1 ){
    if( poll ){
      fprintf(stderr, "*");
      XPAPoll(msec, 1);
    }
    else{
      fprintf(stderr, ".");
    }
    for(doexit=0, j=optind; j<argc; j++){
      snprintf(paramlist, SZ_LINE, "#%d", total++);
      if( total && ((total % 1000) == 0) ) fprintf(stderr, "%d", total);
      if( dofd ){
	got = XPAGetFd(NULL, argv[j], paramlist, NULL, xfds, names, errs,
		       -MAX_XPAS);
	for(i=0; i<got; i++){
	  if( errs[i] ){
	    fprintf(stderr, "ERROR in %s:\n%s", names[i], errs[i]);
	    fprintf(stderr, "Exiting after error\n");
	    doexit = 1;
	  }
	}
      }
      else{
	got = XPAGet(NULL, argv[j], paramlist, NULL, bufs, lens, names, errs,
		     MAX_XPAS);
	for(i=0; i<got; i++){
	  if( errs[i] ){
	    fprintf(stderr, "ERROR in %s:\n%s", names[i], errs[i]);
	    fprintf(stderr, "Exiting after error\n");
	    doexit = 1;
	  }
	  else{
	    if( !quiet ) fprintf(stderr, "%s", bufs[i]);
	    if( bufs[i] ) xfree(bufs[i]);
	  }
	}
      }
      for(i=0; i<got; i++){
	if( names[i] ) xfree(names[i]);
	if( errs[i] ) xfree(errs[i]);
      }
      if( doexit ) exit(1);
      XPASet(NULL, argv[j], paramlist, NULL, xbuf, xlen, names, errs,
	     MAX_XPAS);
      for(i=0; i<got; i++){
	if( errs[i] ){
	  fprintf(stderr, "ERROR in %s:\n%s", names[i], errs[i]);
	  fprintf(stderr, "Exiting after error\n");
	  doexit = 1;
	}
      }
      for(i=0; i<got; i++){
	if( names[i] ) xfree(names[i]);
	if( errs[i] ) xfree(errs[i]);
      }
      if( doexit ) goto done;
      if( delay > 0 ) XPASleep(delay);
    }
  }

done:
  XPAFree(xpa);
  exit(0);
}
