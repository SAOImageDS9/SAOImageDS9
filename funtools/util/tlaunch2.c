/*
 *
 * tlaunch2 -- test launch routine (child routines)
 *
 */

#define HAVE_CONFIG_H 1

#if HAVE_CONFIG_H
#include <conf.h>
#endif
#include <stdio.h>
#include <ctype.h>
#if HAVE_STRING_H
#include <string.h>
#endif
#if HAVE_STDLIB_H
#include <stdlib.h>
#endif
#if HAVE_UNISTD_H
#include <unistd.h>
#endif

#ifdef ANSI_FUNC
int main (int argc, char **argv)
#else
int main(argc, argv)
     int argc;
     char **argv;
#endif
{
  int i;
  char c;
  char *s, *t, *u;
  int pipes[4];
  if( (s=getenv("LAUNCH_PIPES")) ){
    t = (char *)strdup(s);
    for(i=0, u=(char *)strtok(t, ","); i<4 && u; 
	i++, u=(char *)strtok(NULL,",")){
      pipes[i] = atoi(u);
      fprintf(stderr, "child pipe #%d: %d\n", i, pipes[i]);
    }
    if( t ) free(t);
    if( i < 4 ) return(1);
    close(pipes[0]);
    close(pipes[3]);
    dup2(pipes[2], 0);  close(pipes[2]);
    dup2(pipes[1], 1);  close(pipes[1]);
  }
  else{
    fprintf(stderr, "No LAUNCH_PIPE environment variable\n");
  }
  while( read(0, &c, 1) ){
    if( islower((int)c) ) c = toupper((int)c);
    write(3, &c, 1);
    write(1, &c, 1);
  }
  return 0;
}
