/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <unistd.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>              /* gethostbyname() */
#include <arpa/inet.h>

#define SZ_LINE 1024

int main(int argc, char **argv)
{
  int i, got;
  char host[SZ_LINE];
  struct hostent *hostent;
  struct addrinfo *hints=NULL, *addrinfo=NULL;
  struct sockaddr_in * p;

  // gethost
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
  fprintf(stderr, "\n");

  fprintf(stderr, "calling getaddrinfo (preferred) ...\n");
  hints = (struct addrinfo *)calloc(1, sizeof(struct addrinfo));
  hints->ai_flags |= AI_CANONNAME;
  hints->ai_family = AF_INET;
  got = getaddrinfo(host, NULL, hints, &addrinfo);
  if( got != 0 ){
    fprintf(stderr, "getaddrinfo rtn: %d %s\n", got, gai_strerror(got));
    perror("getaddrinfo");
    exit(1);
  }
  else{
    fprintf(stderr, "getaddrinfo() succeeded\n");
  }
  fprintf(stderr, "printing ip address via getaddrinfo ...\n");
  if( addrinfo ){
    p = (struct sockaddr_in *)(addrinfo->ai_addr);
    fprintf(stderr, "%x (canonical: %s)\n", p->sin_addr.s_addr, addrinfo->ai_canonname);
    freeaddrinfo(addrinfo);
    if( hints ) free(hints);
  }
  else{
    fprintf(stderr, "ERROR: can't look up: %s\n", host);
  }
  fprintf(stderr, "\n");

  fprintf(stderr, "calling gethostbyname (obsolete) ...\n");
  if( !(hostent = gethostbyname(host)) ){
      perror("gethostbyname");
      exit(1);
  }
  else{
    fprintf(stderr, "gethostbyname() succeeded\n");
  }
  fprintf(stderr, "printing ip address(es) via gethostbyname ...\n");
  if( hostent ){
    for(i=0; hostent->h_addr_list[i]; i++){
      fprintf(stderr, "%x\n", *(int *)hostent->h_addr_list[i]);
    }
  }
  else{
    fprintf(stderr, "ERROR: can't look up: %s\n", host);
  }
  fprintf(stderr, "\n");

  return(0);
}
