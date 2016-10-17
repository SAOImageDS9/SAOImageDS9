/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <unistd.h>
#include <strings.h>
#include <stdio.h>
#include <netdb.h>              /* gethostbyname() */

#define SZ_LINE 1024

int main(int argc, char **argv)
{
  int i;
  char host[SZ_LINE];
  struct hostent *hostent;

  if( argc > 1 )
    strcpy(host, argv[1]);
  else{
    fprintf(stderr, "calling gethostname() ...\n");
    if( gethostname(host, SZ_LINE) == -1 ){
      perror("gethostname");
      exit(1);
    }
    else{
      fprintf(stderr, "host name is %s\n", host);
    }
  }
  fprintf(stderr, "calling gethostbyname(host) ...\n");
  if( !(hostent = gethostbyname(host)) ){
      perror("gethostbyname");
      exit(1);
  }
  else{
    fprintf(stderr, "gethostbyname() succeeded\n");
  }
  fprintf(stderr, "printing ip address(es) for this host ...\n");
  if( hostent ){
    for(i=0; hostent->h_addr_list[i]; i++){
      fprintf(stderr, "%x\n", *(int *)hostent->h_addr_list[i]);
    }
  }
  else{
    fprintf(stderr, "ERROR: can't look up: %s\n", host);
  }
  return(0);
}
