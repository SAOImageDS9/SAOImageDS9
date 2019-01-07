/*
** This is a simple program used to retrieve an HTML document using
** HTTP.  The program also fetches all images that the document
** references.
*/
#include <stdio.h>
#include <stdlib.h>
#include "getpage.h"

#define stricmp strcasecmp


/*
** Each image to be loaded is an instance of the following structure.
*/
typedef struct Image Image;
struct Image {
  char *zUrl;      /* The URL for this image */
  char *zLocal;    /* The local filename */
  Image *pNext;    /* Next in a list of them all */
};

static FILE *html;        /* Html output to this file. */
static int nImage = 0;    /* Number of images loaded so far */
static Image *pImage;     /* List of all images */
static global_nErr = 0;   /* System wide errors */
static char baseUrl[1000];/* The base URL */
static int quiet = 0;     /* The quiet flag */

/*
** Make sure the given URL is loaded as a local file.  Return the
** name of the local file.
*/
static char *GetImage(char *zUrl){
  Image *p;
  for(p=pImage; p; p=p->pNext){
    if( strcmp(p->zUrl,zUrl)==0 ){
      return p->zLocal;
    }
  }
  p = malloc( sizeof(*p) + strlen(zUrl) + 100 );
  p->zUrl = (char*)&p[1];
  strcpy(p->zUrl, zUrl);
  p->zLocal = &p->zUrl[strlen(zUrl)+1];
  sprintf(p->zLocal,"image%d", ++nImage);
  p->pNext = pImage;
  pImage = p;
  HttpFetch(zUrl, p->zLocal, quiet, 0, 0);
  return p->zLocal;
}

/*
** Print a usage comment and exit
*/
void usage(char *argv0){
  fprintf(stderr,"Usage: %s URL\n",argv0);
  exit(1);
}

/*
** Handle anything that isn't markup
*/
static void WordHandler(const char *zText, void *notUsed){
  fprintf(html, zText);
}

/*
** Handle all markup that we don't care about.
*/
static void DefaultMarkup(int argc, const char **argv, void *notUsed){
  int i;
  fprintf(html,"<%s",argv[0]);
  for(i=1; i<argc-1; i+=2){
    fprintf(html," %s=\"%s\"", argv[i], argv[i+1]);
  }
  fprintf(html,">");
}

/*
** Handler for <IMG> markup
*/
static void ImageMarkup(int argc, const char **argv, void *notUsed){
  int i;
  for(i=1; i<argc-1; i+=2){
    if( stricmp(argv[i],"src")==0 ){
      const char *azUrl[2];
      char *zResolved;
      azUrl[0] = argv[i+1];
      azUrl[1] = 0;
      zResolved = ResolveUrl(baseUrl, azUrl);
      if( !quiet ){
        printf("Resolved: (%s) (%s) -> (%s)\n",baseUrl, azUrl[0], zResolved);
      }
      argv[i+1] = GetImage(zResolved);
      /* printf("%s -> %s -> argv[i+1]\n",argv[i+1], zResolved); */
      free(zResolved);
    }
  }
  DefaultMarkup(argc, argv, 0);
}

/*
** Handler for <BASE> markup
*/
static void BaseMarkup(int argc, const char **argv, void *notUsed){
  int i;
  for(i=1; i<argc-1; i+=2){
    if( stricmp(argv[i],"href")==0 ){
      if( !quiet ){
        printf("Base Href=%s\n",argv[i+1]);
      }
      sprintf(baseUrl,"%.*s", sizeof(baseUrl), argv[i+1]);
    }
  }
}

/*
** Name of a temporary file
*/
static char zTemp[] = "index.html.orig";

/*
** The main routine
*/
int main(int argc, char **argv){
  int i;                 /* Loop counter */
  int nErr;              /* Number of errors */
  int rc;                /* Result code */
  char *zUrl = 0;        /* The URL */
  FILE *in;              /* For reading the raw html */

  if( argc<2 ) usage(argv[0]);
  zUrl = 0;
  for(i=1; i<argc; i++){
    if( strcmp(argv[i],"-quiet")==0 ){
      quiet = 1;
    }else if( argv[i][0]=='-' ){
      usage(argv[0]);
    }else{
      zUrl = argv[i];
    }
  }
  if( zUrl==0 ) usage(argv[0]);
  rc = HttpFetch(zUrl, zTemp, quiet, sizeof(baseUrl), baseUrl);
  if( rc!=200 ){
    unlink(zTemp);
    fprintf(stderr,"Unable to fetch base page %s\n", zUrl);
    exit(1);
  }
  in = fopen(zTemp,"r");
  /* unlink(zTemp); */
  if( in==0 ){
    perror("can't reopen temporary file!");
    exit(1);
  }
  html = fopen("index.html","w");
  if( html==0 ){
    perror("can't open output file \"index.html\"");
    exit(1);
  }
  SgmlWordHandler(WordHandler);
  SgmlSpaceHandler(WordHandler);
  SgmlCommentHandler(WordHandler);
  SgmlDefaultMarkupHandler(DefaultMarkup);
  SgmlHandler("img", ImageMarkup);
  SgmlHandler("base", BaseMarkup);
  SgmlParse(in, 0);
  fclose(in);
  fclose(html);
  return global_nErr;
}
