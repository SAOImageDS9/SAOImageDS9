#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <parse.h>

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
  int i;
  int lptr=0;
  int lastd=0;
  int nullvalues=0;
  int whitespace=0;
  int dtab[PARSE_TABLE_SIZE];
  int ctab[PARSE_TABLE_SIZE];
  char *s;
  char tbuf[SZ_LINE];
  char lbuf[SZ_LINE];
  char *delims=" \n";
  char *comchars="#\n";

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* process switch arguments */
  while ((c = getopt(argc, argv, "c:d:nw")) != -1){
    switch(c){
    case 'c':
      comchars=optarg;
      break;
    case 'd':
      delims=optarg;
      break;
    case 'n':
      nullvalues=1;
      break;
    case 'w':
      whitespace=1;
      break;
    }
  }

  memset(dtab, 0, PARSE_TABLE_SIZE*sizeof(int));
  for(s=delims; s && *s; s++){
    if( (i=(int)*s) == '\\' ){
      s++;
      if( *s == 'n' ) i = '\n';
      else if( *s == 't' ) i = '\t';
      else if( *s == 'r' ) i = '\r';
      else if( *s == 'f' ) i = '\014';
    }
    dtab[i] = 1;
  }

  memset(ctab, 0, PARSE_TABLE_SIZE*sizeof(int));
  for(s=comchars; s && *s; s++){
    if( (i=(int)*s) == '\\' ){
      s++;
      if( *s == 'n' ) i = '\n';
      else if( *s == 't' ) i = '\t';
      else if( *s == 'r' ) i = '\r';
      else if( *s == 'f' ) i = '\014';
    }
    ctab[i] = 1;
  }

  i = 0;
  while( fgets(lbuf, SZ_LINE, stdin) ){
    lptr = 0;
    fprintf(stdout, "#%d: %s", i++, lbuf);
    while( ParseWord(dtab, ctab, nullvalues, whitespace,
		     lbuf, tbuf, SZ_LINE, &lptr, &lastd) )
      fprintf(stdout, "%s\n", tbuf);
  }

  /* success */
  return 0;
}
