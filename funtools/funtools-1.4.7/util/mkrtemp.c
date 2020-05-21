/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <mkrtemp.h>

/*
 *
 * mkrtemp -- make a unique temportary filename that is hard to guess,
 * and, optionally, open it using securely: O_CREAT|O_EXCL|O_RDWR, 0600.
 * This should be an improvement over mktmp and mkstmp because of the use
 * of usec of gettimeofday() to make up the filename -- harder to guess.
 * If you want to use a random number generater instead, set the environment
 * variable MTRTEMP_RAND to "true".
 *
 * The routine also allows for both a prefix and suffix to be specified,
 * so that you can create files with extensions. Either of these can be NULL.
 *
 */
#ifdef ANSI_FUNC
int mkrtemp(char *prefix, char *suffix, char *path, int len, int doopen)
#else
int mkrtemp(prefix, suffix, path, len, doopen)
     char *prefix;
     char *suffix;
     char *path;
     int len;
     int doopen;
#endif
{
  char *s;
  int fd;
  long lval;
  struct stat sbuf;
  struct timeval tv;
  static int _method=0;

  /* clear the buffer */
  *path = '\0';
  if( len <=0 )
    return -1;

  /* check validity of the target directory, if necessary */
  if( prefix && *prefix ){
    int bad=0;
    char *xprefix=xstrdup(prefix);
    for(s=xprefix; *s; s++)
      ;
    for(; s>=xprefix ; s--){
      if( (*s == '/') || (*s == '\\') ){
	*s = '\0';
	if( stat(xprefix, &sbuf) ){
	  bad = -1;
	}
	else if( !S_ISDIR(sbuf.st_mode) ){
	  errno = ENOTDIR;
	  bad = -1;
	}
	break;
      }
    }
    free(xprefix);
    if( bad )
      return -1;
  }

  /* initialize method */
  if( !_method ){
    /* assume gettimeofday() usecs */
    _method = 1;
    /* but allow for using RNG */
    if( (s=(char *)getenv("MKRTEMP_RAND")) && istrue(s) )
      _method = 2;
    gettimeofday(&tv, NULL);
    switch(_method){
    case 1:
      break;
    case 2:
      srand48(tv.tv_sec+tv.tv_usec);
      break;
    }
  }

  /* main loop -- make up a new file name and check for non-existence */
  lval = 0;
  while( 1 ){
    switch(_method){
    case 1:
      gettimeofday(&tv, NULL);
      /* avoid repeated checks on same value of lval */
      if( lval == tv.tv_usec )
	lval /= 2;
      else
	lval = tv.tv_usec;
      break;
    case 2:
      lval = lrand48();
      break;
    default:
      return -1;
    }
    snprintf(path, len, "%s%ld%s", 
	     (prefix?prefix:""), lval, (suffix?suffix:""));
    if( doopen ){
      if( (fd=open(path, O_CREAT|O_EXCL|O_RDWR, 0600)) >= 0)
	return fd;
      if (errno != EEXIST)
	return -1;
    }
    else if( lstat(path, &sbuf) )
      return errno==ENOENT ? 0 : -1;
  }
}
