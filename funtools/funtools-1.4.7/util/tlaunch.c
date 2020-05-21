/*
 *	Copyright (c) 2007 Smithsonian Astrophysical Observatory
 */

/*
 *
 * tlaunch -- test launch routine
 *
 */

#define HAVE_CONFIG_H 1
#include <xlaunch.h>

extern char *optarg;
extern int optind;

#ifdef ANSI_FUNC
int main (int argc, char **argv)
#else
int main(argc, argv)
     int argc;
     char **argv;
#endif
{
  int c;
  int got=0;
  int doattach=0;
  int dofiles=0;
  int dopipes=0;
  int pipes[2];
  char *prog=NULL;
  char *files[3];
  char *pfile=NULL;
  char wbuf[SZ_LINE];
  FILE *fd;

  /* init */
  memset(files, 0, sizeof(char *)*3);
  /* process switch arguments */
  while ((c = getopt(argc, argv, "ae:i:o:p:w:")) != -1){
    switch(c){
    case 'a':
      doattach = 1;
      break;
    case 'e':
      files[2] = optarg;
      dofiles |= 4;
      break;
    case 'i':
      files[0] = optarg;
      dofiles |= 1;
      break;
    case 'o':
      files[1] = optarg;
      dofiles |= 2;
      break;
    case 'p':
      pfile = optarg;
      dopipes = 1;
      break;
    case 'w':
      snprintf(wbuf, SZ_LINE, "LAUNCH_ROUTINE=%s", optarg);
      putenv(wbuf);
    default:
      break;
    }
  }
  if( optind >= argc ){
    fprintf(stderr, 
	    "usage: %s -a -i stdin -o stdout -e stderr -p pfile [command]\n", 
	    argv[0]);
    return 1;
  }
  prog = argv[optind++];
  if( !strcmp(prog, "tlaunch2") && !dopipes ){
    fprintf(stderr, "ERROR: use -p [file] with tlaunch2\n");
    return 1;
  }
  if( (got = Launch(prog, doattach, dofiles?files:NULL, dopipes?pipes:NULL)) )
    fprintf(stderr, "ERROR: got=%d\n", got);
  else
    fprintf(stderr, "SUCCESS: got(%x)=%d\n", dofiles, got);
  /* send pipe file contents to child, read back and display results */
  if( pfile ){
    if( !(fd = fopen(pfile,"r")) ){
      perror("fopen");
      return 1;
    }
    while( fread(&c, sizeof(char), 1, fd) ){
      write(pipes[1], &c, 1);
      if( read(pipes[0], &c, 1) ){
	fwrite(&c, sizeof(char), 1, stdout);
      }
    }
    fclose(fd);
  }
  return 0;
}
