#include <stdio.h>

#define SZ_LINE 256

main(argc, argv)
     int argc;
     char **argv;
{
  char tbuf[SZ_LINE];
  char name[SZ_LINE];
  char extn[SZ_LINE];
  char tail[SZ_LINE];
  int indx;

  while( 1 ){
    *tbuf = '\0';
    if( feof(stdin) )
      break;
    gets(tbuf);
    if( *tbuf == 'q' )
      exit(0);
    if( (*tbuf == '\0') || (*tbuf == '\n') )
      continue;
    ft_parsefilename(tbuf, name, extn, SZ_LINE, &indx, tail, SZ_LINE);
    fprintf(stderr, "%s ->\nname='%s' extn='%s' indx='%d' tail='%s'\n\n",
	    tbuf, name, extn, indx, tail);
  }
}
