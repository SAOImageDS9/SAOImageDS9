/*
** This file contains code use for resolving relative URLs
*/
#include <stdlib.h>
#include "url.h"

#if INTERFACE
/*
** A parsed URI is held in an instance of the following structure.
** Each component is recorded in memory obtained from malloc().
**
** The examples are from the URI 
**
**    http://192.168.1.1:8080/cgi-bin/printenv?name=xyzzy&addr=none#frag
*/
typedef struct Url Url;
struct Url {
  char *zScheme;             /* Ex: "http" */
  char *zAuthority;          /* Ex: "192.168.1.1:8080" */
  char *zPath;               /* Ex: "cgi-bin/printenv" */
  char *zQuery;              /* Ex: "name=xyzzy&addr=none" */
  char *zFragment;           /* Ex: "frag" */
};
#endif

/*
** Return the length of the next component of the URL in z[] given
** that the component starts at z[0].  The initial sequence of the
** component must be zInit[].  The component is terminated by any
** character in zTerm[].  The length returned is 0 if the component
** doesn't exist.  The length includes the zInit[] string, but not
** the termination character.
**
**        Component        zInit      zTerm
**        ----------       -------    -------
**        scheme           ""         ":/?#"
**        authority        "//"       "/?#"
**        path             "/"        "?#"
**        query            "?"        "#"
**        fragment         "#"        ""
*/
static int ComponentLength(const char *z, const char *zInit, const char *zTerm){
  int i, n;
  for(n=0; zInit[n]; n++){
    if( zInit[n]!=z[n] ) return 0;
  }
  while( z[n] ){
    for(i=0; zTerm[i]; i++){
      if( z[n]==zTerm[i] ) return n;
    }
    n++;
  }
  return n;
}

/*
** Duplicate a string of length n.
*/
static char *StrNDup(const char *z, int n){
  char *zResult;
  if( n<=0 ){
    n = strlen(z);
  }
  zResult = malloc( n + 1 );
  if( zResult ){
    memcpy(zResult, z, n);
    zResult[n] = 0;
  }
  return zResult;
}

/*
** Parse a text URI into an Url structure.
*/
Url *ParseUrl(const char *zUri){
  Url *p;
  int n;

  p = malloc( sizeof(*p) );
  if( p==0 ) return 0;
  memset(p, 0, sizeof(*p));
  if( zUri==0 || zUri[0]==0 ) return p;
  while( isspace(zUri[0]) ){ zUri++; }
  n = ComponentLength(zUri, "", ":/?# ");
  if( n>0 && zUri[n]==':' ){
    p->zScheme = StrNDup(zUri, n);
    zUri += n+1;
  }
  n = ComponentLength(zUri, "//", "/?# ");
  if( n>0 ){
    p->zAuthority = StrNDup(&zUri[2], n-2);
    zUri += n;
  }
  n = ComponentLength(zUri, "", "?# ");
  if( n>0 ){
    p->zPath = StrNDup(zUri, n);
    zUri += n;
  }
  n = ComponentLength(zUri, "?", "# ");
  if( n>0 ){
    p->zQuery = StrNDup(&zUri[1], n-1);
    zUri += n;
  }
  n = ComponentLength(zUri, "#", " ");
  if( n>0 ){
    p->zFragment = StrNDup(&zUri[1], n-1);
  }
  return p;
}

/*
** Delete an Url structure.
*/
void FreeUrl(Url *p){
  if( p==0 ) return;
  if( p->zScheme )    free(p->zScheme);
  if( p->zAuthority ) free(p->zAuthority);
  if( p->zPath )      free(p->zPath);
  if( p->zQuery )     free(p->zQuery);
  if( p->zFragment )  free(p->zFragment);
  free(p);
}

/*
** Create a string to hold the given URI.  Memory to hold the string
** is obtained from malloc() and must be freed by the calling
** function.
*/
char *BuildUrl(Url *p){
  int n = 1;
  char *z;
  if( p->zScheme )    n += strlen(p->zScheme)+1;
  if( p->zAuthority ) n += strlen(p->zAuthority)+2;
  if( p->zPath )      n += strlen(p->zPath)+1;
  if( p->zQuery )     n += strlen(p->zQuery)+1;
  if( p->zFragment )  n += strlen(p->zFragment)+1;
  z = malloc( n );
  if( z==0 ) return 0;
  n = 0;
  if( p->zScheme ){
    sprintf(z, "%s:", p->zScheme);
    n = strlen(z);
  }
  if( p->zAuthority ){
    sprintf(&z[n], "//%s", p->zAuthority);
    n += strlen(&z[n]);
  }
  if( p->zPath ){
    sprintf(&z[n], "%s", p->zPath);
    n += strlen(&z[n]);
  }
  if( p->zQuery ){
    sprintf(&z[n], "?%s", p->zQuery);
    n += strlen(&z[n]);
  }
  if( p->zFragment ){
    sprintf(&z[n], "#%s", p->zFragment);
  }
  return z;
}

/*
** Replace the string in *pzDest with the string in zSrc
*/
static void ReplaceStr(char **pzDest, const char *zSrc){
  if( *pzDest!=0 ) free(*pzDest);
  if( zSrc==0 ){
    *pzDest = 0;
  }else{
    *pzDest = StrNDup(zSrc, -1);
  }
}

/*
** Remove leading and trailing spaces from the given string.  Return
** a new string obtained from malloc().
*/
static char *Trim(char *z){
  int i;
  char *zNew;
  while( isspace(*z) ) z++;
  i = strlen(z);
  zNew = malloc( i+1 );
  if( zNew==0 ) return 0;
  strcpy(zNew, z);
  if( i>0 && isspace(zNew[i-1]) ){
    i--;
    zNew[i] = 0;
  }
  return zNew;
}

/*
** Resolve a sequence of URLs.  Return the result in space obtained
** from malloc().
*/
char *ResolveUrl(
  char *zBase,              /* The base URL */
  const char **azSeries     /* A list of relatives.  NULL terminated */
){
  Url *base;
  Url *term;
  char *z;

  base = ParseUrl(zBase);
  while( azSeries[0] ){
    term = ParseUrl(azSeries[0]);
    azSeries++;
    if( term->zScheme==0 && term->zAuthority==0 && term->zPath==0
        && term->zQuery==0 && term->zFragment ){
      ReplaceStr(&base->zFragment, term->zFragment);
    }else if( term->zScheme ){
      Url temp;
      temp = *term;
      *term = *base;
      *base = temp;
    }else if( term->zAuthority ){
      ReplaceStr(&base->zAuthority, term->zAuthority);
      ReplaceStr(&base->zPath, term->zPath);
      ReplaceStr(&base->zQuery, term->zQuery);
      ReplaceStr(&base->zFragment, term->zFragment);
    }else if( term->zPath && term->zPath[0]=='/' ){
      ReplaceStr(&base->zPath, term->zPath);
      ReplaceStr(&base->zQuery, term->zQuery);
      ReplaceStr(&base->zFragment, term->zFragment);
    }else if( term->zPath && base->zPath ){
      char *zBuf;
      int i, j;
      zBuf = malloc( strlen(base->zPath) + strlen(term->zPath) + 2 );
      if( zBuf ){
        sprintf(zBuf,"%s", base->zPath);
        for(i=strlen(zBuf)-1; i>=0 && zBuf[i]!='/'; i--){ zBuf[i] = 0; }
        strcat(zBuf, term->zPath);
        for(i=0; zBuf[i]; i++){
          if( zBuf[i]=='/' && zBuf[i+1]=='.' && zBuf[i+2]=='/' ){
            strcpy(&zBuf[i+1], &zBuf[i+3]);
            i--;
            continue;
          }
          if( zBuf[i]=='/' && zBuf[i+1]=='.' && zBuf[i+2]==0 ){
            zBuf[i+1] = 0;
            continue;
          }
          if( i>0 && zBuf[i]=='/' && zBuf[i+1]=='.' && zBuf[i+2]=='.'
                 && (zBuf[i+3]=='/' || zBuf[i+3]==0) ){
            for(j=i-1; j>=0 && zBuf[j]!='/'; j--){}
            if( zBuf[i+3] ){
              strcpy(&zBuf[j+1], &zBuf[i+4]);
            }else{
              zBuf[j+1] = 0;
            }
            i = j-1;
            if( i<-1 ) i = -1;
            continue;
          }
        }
        free(base->zPath);
        base->zPath = zBuf;
      }   
      ReplaceStr(&base->zQuery, term->zQuery);
      ReplaceStr(&base->zFragment, term->zFragment);
    }
    FreeUrl(term);
  }
  z = BuildUrl(base);
  FreeUrl(base);
  return z;
}
