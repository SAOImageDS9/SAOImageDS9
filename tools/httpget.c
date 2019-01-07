/*
** This file contains code to fetch a single URL into a local file.
*/
#include <stdio.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <linux/in.h>
#include "httpget.h"

#define strnicmp strncasecmp

/*
** Get a URL using HTTP.  Return the result code.  If a Location: field
** appears in the header, write it into zLocation[].  Location[] should
** be at least 200 characters in size.
*/
static int
HttpTryOnce(char *zUrl, char *zLocalFile, int quiet, char *zLocation){
  int i, j;
  int nErr = 0;             /* Number of errors */
  char *zPath;              /* Pathname to send as second argument to GET */
  int iPort;                /* TCP port for the server */
  struct hostent *pHost;    /* Name information */
  int s;                    /* The main communications socket */
  int c;                    /* A character read from the remote side */
  int n;                    /* Number of characters in header */
  int rc = 200;             /* The result code */
  FILE *sock;               /* FILE corresponding to file descriptor s */
  FILE *out;                /* Write output here */
  int last_was_nl;          /* TRUE if last character received was '\n' */
  struct sockaddr_in addr;  /* The address structure */
  int nByte = 0;
  char zIpAddr[400];        /* The IP address of the server to print */
  char zMsg[1000];          /* Space to hold error messages */
  char zLine[1000];         /* A single line of the header */

  out = fopen(zLocalFile, "w");
  if( out==0 ){
    sprintf(zMsg, "can't open output fule \"%.100s\"", zLocalFile);
    perror(zMsg);   
    return 1;
  }

  i = 0;
  if( strnicmp(zUrl,"http:",5)==0 ){ i = 5; }
  while( zUrl[i]=='/' ){ i++; }
  j = 0;
  while( zUrl[i] && zUrl[i]!=':' && zUrl[i]!='/' ){
    if( j<sizeof(zIpAddr)-1 ){ zIpAddr[j++] = zUrl[i]; }
    i++;
  }
  zIpAddr[j] = 0;
  if( zUrl[i]==':' ){
    iPort = 0;
    i++;
    while( isdigit(zUrl[i]) ){
      iPort = iPort*10 + zUrl[i] - '0';
      i++;
    }
  }else{
    iPort = 80;
  }
  zPath = &zUrl[i];

  addr.sin_family = AF_INET;
  addr.sin_port = htons(iPort);
  *(int*)&addr.sin_addr = inet_addr(zIpAddr);
  if( -1 == *(int*)&addr.sin_addr ){
    pHost = gethostbyname(zIpAddr);
    if( pHost==0 ){
      fprintf(stderr,"can't resolve host name: %s\n",zIpAddr);
      return 1;
    }
    memcpy(&addr.sin_addr,pHost->h_addr_list[0],pHost->h_length);
    if( !quiet ){
      fprintf(stderr,"Address resolution: %s -> %d.%d.%d.%d\n",zIpAddr,
              pHost->h_addr_list[0][0]&0xff,
              pHost->h_addr_list[0][1]&0xff,
              pHost->h_addr_list[0][2]&0xff,
              pHost->h_addr_list[0][3]&0xff);
    }
  }
  s = socket(AF_INET,SOCK_STREAM,0);
  if( s<0 ){
    sprintf(zMsg,"can't open socket to %.100s", zIpAddr);
    perror(zMsg);
    fclose(out);
    return 1;
  }
  if( connect(s,(struct sockaddr*)&addr,sizeof(addr))<0 ){
    sprintf(zMsg,"can't connect to host %.100s", zIpAddr);
    perror(zMsg);
    fclose(out);
    return 1;
  }
  sock = fdopen(s,"r+");
  if( *zPath==0 ) zPath = "/";
  fprintf(sock,"GET %s HTTP/1.0\r\n",zPath);
  fprintf(sock,"User-Agent: Mozilla/2.0 (X11; U; Linux 0.99p17 i486)\r\n");
  if( iPort!=80 ){
    fprintf(sock,"Host: %s:%d\r\n", zIpAddr, iPort);
  }else{
    fprintf(sock,"Host: %s\r\n", zIpAddr);
  }
  fprintf(sock,"Accept: image/gif, image/x-xbitmap, image/jpeg, */*\r\n");
  fprintf(sock,"\r\n");
  fflush(sock);
  n = 0;
  rc = 0;
  while( (c=getc(sock))!=EOF && (c!='\n' || !last_was_nl) ){
    if( c=='\r' ) continue;
    last_was_nl = (c=='\n');
    if( last_was_nl ){
      zLine[n] = 0;
      if( strncmp(zLine,"Location:",9)==0 && zLocation ){
        int j, k;
        for(j=9; isspace(zLine[j]); j++){}
        k = 0;
        while( zLine[j] && !isspace(zLine[j]) && k<199 ){
          zLocation[k++] = zLine[j++];
        }
        zLocation[k] = 0;
        if( !quiet ) fprintf(stderr,"Location: %s\n", zLocation);
      }else if( rc==0 ){
        sscanf(zLine,"HTTP/%*d.%*d %d ",&rc);
        if( !quiet ) fprintf(stderr,"Status: %d\n", rc);
      }
    }
    if( n<sizeof(zLine)-1 ){ zLine[n++] = c; }
    if( last_was_nl ){ n = 0; }
  }
  if( rc==0 ) rc = 200;
  if( !quiet ){
    fprintf(stderr, "Reading %s...", zUrl);
  }
  while( (c=getc(sock))!=EOF ){
    nByte++;
    putc(c,out);
  }
  if( !quiet ){
    fprintf(stderr, " %d bytes\n", nByte);
  }
  fclose(sock);
  fclose(out);
  return rc;
}

/*
** Get the file.  Take up to 7 redirects.
*/
int HttpFetch(
  char *zUrl,          /* Fetch this URL */
  char *zLocalFile,    /* Write to this file */
  int quiet,           /* Be quiet if true */
  int nActual,         /* Size of zActual[] */
  char *zActual        /* Write actual URL retrieved here */
){
  int i;
  int rc;
  char *zOriginalUrl = zUrl;
  char zLocation[300];

  for(i=0; i<7; i++){
    if( !quiet ) fprintf(stderr,"HTTP: %s -> %s\n", zUrl, zLocalFile);
    rc = HttpTryOnce(zUrl, zLocalFile, quiet, zLocation);
    if( rc==301 || rc==302 ){
      char *z;
      const char *az[2];
      az[0] = zLocation;
      az[1] = 0;
      z = ResolveUrl(zUrl, az);
      if( zUrl!=zOriginalUrl ){
        free(zUrl);
      }
      zUrl = z;
    }else{
      break;
    }
  }
  if( nActual>0 && zActual!=0 ){
    sprintf(zActual, "%.*s", nActual, zUrl);
  }
  if( zUrl!=zOriginalUrl ){
    free(zUrl);
  }
  return rc;
}
