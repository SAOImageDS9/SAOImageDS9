/*
** This file contains code used to tokenize SGML.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "sgmlparse.h"

#define stricmp strcasecmp

/* These three pointers define certain special handlers.  All whitespace
** is sent to xSpaceHandler.  Non-whitespace is given to xWordHandler.
** Any markup that isn't specifically directed elsewhere is given
** to xDefaultMarkupHandlers.
*/
static void (*xSpaceHandler)(const char*,void*);
static void (*xWordHandler)(const char*,void*);
static void (*xCommentHandler)(const char*,void*);
static void (*xDefaultMarkupHandler)(int, const char**, void*);

/* Each handler is stored in a hash table as an instance of the
** following structure.
*/
typedef struct sgHandler Handler;
struct sgHandler {
  char *zName;                                /* Name of markup to handle */
  void (*xHandler)(int, const char**, void*); /* Routine to do the work */
  Handler *pCollide;                          /* Next handler with same hash */
};

/* The size of the handler hash table. 
** For best results, this should be a prime number which is larger than
** the number of markups in the hash table.
*/
#define SGML_HASH_SIZE 203

/* The handler hash table */
static Handler *apHandler[SGML_HASH_SIZE];

/* Hash a handler name */
static int SgmlHash(const char *zName){
  int h = 0;
  char c;
  while( (c=*zName)!=0 ){
    if( isupper(c) ) c = tolower(c);
    h = h<<5 ^ h ^ c;
    zName++;
  }
  if( h<0 ) h = -h;
  return h % SGML_HASH_SIZE;
}

/* Given a pointer to an input file, read and parse that file
** as if it were SGML.
**
** This is not a true SGML parser because it handles some unusual
** cases differently, and ignores the & operator completely.
*/
void SgmlParse(FILE *in, void *pArg){
  int c;
  int i, j;
  int argc;
  Handler *pHandler;
  char *argv[100];
  char zBuf[10000];

  c = getc(in);
  while( c!=EOF ){
    if( isspace(c) ){
      /* Case 1: spaces */
      zBuf[0] = c;
      i = 1;
      while( i<sizeof(zBuf)-2 && (c=getc(in))!=EOF && isspace(c) ){
        zBuf[i++] = c;
      }
      zBuf[i] = 0;
      /* Dispose of space */
      if( xSpaceHandler ){
        (*xSpaceHandler)(zBuf,pArg);
      }
    }else if( c=='<' ){
      int cQuote = 0;
      i = 0;
      zBuf[i++] = c;
      while( (c=getc(in))!=EOF && (cQuote || c!='>') ){
        if( i<sizeof(zBuf)-3 ) zBuf[i++] = c;
        if( cQuote ){
          if( cQuote==c ) cQuote = 0;
        }else if( c=='"' || c=='\'' ){
          cQuote = c;
        }
      }
      if( c=='>' ) c = getc(in);
      zBuf[i] = 0;
      if( strncmp(zBuf,"<!--",4)==0 ){
        zBuf[i++] = '>';
        zBuf[i] = 0;
        if( xCommentHandler ){
          (*xCommentHandler)(zBuf,pArg);
        }
        continue;
      }    
      argc = 0;
      argv[0] = &zBuf[1];
      for(j=1; zBuf[j] && !isspace(zBuf[j]); j++){}
      if( zBuf[j] ){
        zBuf[j++] = 0;
        while( argc<(sizeof(argv)/sizeof(argv[0])) - 4 && zBuf[j] ){
          while( isspace(zBuf[j]) ) j++;
          argv[++argc] = &zBuf[j];
          while( zBuf[j] && !isspace(zBuf[j]) && zBuf[j]!='=' ) j++;
          if( zBuf[j]!='=' ){
            argv[argc+1] = argv[argc];
            argc++;
            if( zBuf[j] ) zBuf[j++] = 0;
            continue;
          }
          zBuf[j++] = 0;
          if( zBuf[j]=='"' || zBuf[j]=='\'' ){
            cQuote = zBuf[j++];
          }else{
            cQuote = 0;
          }
          argv[++argc] = &zBuf[j];
          if( cQuote ){
            while( zBuf[j] && zBuf[j]!=cQuote ) j++;
          }else{
            while( zBuf[j] && !isspace(zBuf[j]) ) j++;
          }
          if( zBuf[j] ) zBuf[j++] = 0;
        }
      }
      argv[++argc] = 0;
      /* Despose of a markup */
      pHandler = apHandler[SgmlHash(argv[0])];
      while( pHandler && stricmp(pHandler->zName,argv[0])!=0 ){
        pHandler = pHandler->pCollide;
      }
      if( pHandler ){
        if( pHandler->xHandler ){
          (*pHandler->xHandler)(argc,(const char**)argv,pArg);
        }
      }else if( xDefaultMarkupHandler ){
        (*xDefaultMarkupHandler)(argc,(const char**)argv,pArg);
      }
    }else{
      zBuf[0] = c;
      i = 1;
      while( i<sizeof(zBuf)-2 && (c=getc(in))!=EOF && c!='<' && !isspace(c) ){
        zBuf[i++] = c;
      }
      zBuf[i] = 0;
      /* Dispose of a word */
      if( xWordHandler ){
        (*xWordHandler)(zBuf,pArg);
      }
    }
  }
}

/*
** Clear out the handler hash table
*/
void SgmlHandlerReset(void){
  Handler *pHandler;
  int i;

  for(i=0; i<SGML_HASH_SIZE; i++){
    Handler *pNext;
    for(pHandler=apHandler[i]; pHandler; pHandler=pNext){
      pNext = pHandler->pCollide;
      free(pHandler);
    }
    apHandler[i] = 0;
  }
}

/* Install a new handler
*/
void SgmlHandler(const char *zName, void (*xFunc)(int,const char**,void*)){
  int h = SgmlHash(zName);
  extern void *malloc();
  Handler *pNew = malloc( sizeof(Handler) + strlen(zName) + 1 );
  if( pNew==0 ) return;
  pNew->zName = (char*)&pNew[1];
  strcpy(pNew->zName,zName);
  pNew->pCollide = apHandler[h];
  pNew->xHandler = xFunc;
  apHandler[h] = pNew;  
}

/* Install the default handlers
*/
void SgmlWordHandler(void (*xWord)(const char*,void*)){
  xWordHandler = xWord;
}
void SgmlSpaceHandler(void (*xSpace)(const char*,void*)){
  xSpaceHandler = xSpace;
}
void SgmlCommentHandler(void (*xComment)(const char*,void*)){
  xCommentHandler = xComment;
}
void SgmlDefaultMarkupHandler(void (*xMarkup)(int,const char**,void*)){
  xDefaultMarkupHandler = xMarkup;
}
