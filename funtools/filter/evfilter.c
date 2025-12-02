/* gcc -g -o foo event.body.c -lm */
#ifdef TEST
#include <math.h>
#define EVFILTRTN _FilterEvents
#define NSHAPE 1
#define NREGION 1
#define _X_ X
#define _Y_ Y
#define FILTER ((circle(g,1,1,1,_X_,_Y_,1,2,3)))
#define EVSIZE 4
#define X *((short *)(eptr+0))
#define Y *((short *)(eptr+2))
#include "regions.h"
#endif

static char __abuf[EVSIZE+1];
static char *acopy(void *s, int n)
{
  memset(__abuf, 0, n+1);
  memmove(__abuf, s, n);
  return __abuf;
}

void *EVFILTRTN(void *tg, char *ebuf, int ne, int esize, int *rbuf)
{
  int i, j;
  int  *rptr;
  char *eptr;
  Scan scan, tscan;
  GFilt g = (GFilt)tg;

  /* set eptr to ebuf -- this must be done before FINIT, because the latter */
  /*passes X and Y to shape init routines, and these defines use eptr */
  eptr = ebuf;

  if( !g ){
    g = (GFilt)calloc(1, sizeof(GFiltRec));
#if NSHAPE
    /* allocate space for the globals */
    g->nshapes = NSHAPE;
    g->maxshapes = (NSHAPE*(XSNO+1))+1;
    g->shapes = (Shape)calloc(g->maxshapes, sizeof(ShapeRec));
#endif
#ifdef EVSECT
    /* if evsect is defined, we are filtering an image section */
    g->evsect = EVSECT;
    sscanf(g->evsect, "%d %d %d %d %d",
	   &g->xmin, &g->xmax, &g->ymin, &g->ymax, &g->block);
    /* get x and y limits on subsection */
    g->x0 = 1;
    g->y0 = 1;
    g->x1 = (g->xmax-g->xmin)/g->block+1;
    g->y1 = (g->ymax-g->ymin)/g->block+1;
    /* allocate a buffer for valid y row flags */
    g->ybuf = (int *)calloc(g->y1+1, sizeof(int));
    g->x0s = (int *)calloc(g->y1+1, sizeof(int));
    g->x1s = (int *)calloc(g->y1+1, sizeof(int));
    /* seed impossible values for x limits */
    for(i=0; i<=g->y1; i++) g->x0s[i]  = g->x0;
    for(i=0; i<=g->y1; i++) g->x1s[i]  = g->x1;
    /* save image mask values */
    if( NMASK ){
      g->nmask = NMASK; 
      g->maskdim = MASKDIM;
      g->masks = _masks;
    }
    /* initialize shapes -- but check to make sure eptr is OK */
#if DO_FILTER_SWAP
    memset(_swf, 0, EVSIZE);
#endif
    if( eptr ) FINIT;
    /* these also must be defined if EVSECT is being used */
    g->tlminx = TLMINX;
    g->tlminy = TLMINY;
    g->usebinsiz = USEBINSIZ;
    if( BINSIZX > 0.0 )
      g->binsizx = BINSIZX;
    else
      g->binsizx = 1.0;
    if( BINSIZY > 0.0 )
      g->binsizy = BINSIZY;
    else
      g->binsizy = 1.0;
    g->tloff =  TLOFF;
#endif
  }

  /* if we have negative events, we free the structs */
  if( !ebuf && !rbuf && (ne<0) ){
#if NSHAPE
    /* free polygon records */
    for(i=0; i<g->maxshapes; i++){
      if( g->shapes[i].scanlist ){
	for(j=0; j<g->y1; j++){
	  if( g->shapes[i].scanlist[j] ){
	    for(scan=g->shapes[i].scanlist[j]; scan; ){
	      tscan = scan->next;
	      if( scan ) free(scan);
	      scan = tscan;
	    }
	  }
	}
	if( g->shapes[i].scanlist ) free(g->shapes[i].scanlist);
      }
      if( g->shapes[i].pts ) free(g->shapes[i].pts);
      if( g->shapes[i].xv ) free(g->shapes[i].xv);
    }
    if( g->masks )  free(g->masks);
    if( g->shapes ) free(g->shapes);
    if( g->ybuf )   free(g->ybuf);
    if( g->x0s )    free(g->x0s);
    if( g->x1s )    free(g->x1s);
    if( g )         free(g);
#endif
    return NULL;
  }
  else{
    /* do the filtering on each event */
    for(rptr=rbuf, eptr=ebuf; ne--; rptr++, eptr += esize){
      g->rid = 0;
#if DO_FILTER_SWAP
      memset(_swf, 0, EVSIZE);
#endif
      *rptr = ((FILTER) ? (g->rid ? g->rid : -1) : 0);
    }
    return (void *)g;
  }
}

int main(int argc, char **argv)
{
  int i;
#if HAVE_MINGW32==0
  int pipes[4];
#endif
  int get, got;
#if DO_FILTER_SWAP
  int sgot;
#endif
  int n;
  int *rbuf;
  char *ebuf, *etop;
  char *s=NULL, *t=NULL, *u=NULL;
  void *g=NULL;
#if USE_WIN32
  HANDLE hStdin, hStdout; 
  DWORD dwRead, dwWritten; 
#endif

  /* Launch() sometimes rearranges passed pipes to be stdin/stdout */
#if HAVE_MINGW32==0
  if( (s=getenv("LAUNCH_PIPES")) ){
    t = (char *)strdup(s);
    for(i=0, u=(char *)strtok(t, ","); i<4 && u; 
	i++, u=(char *)strtok(NULL,",")){
      pipes[i] = atoi(u);
    }
    if( t ) free(t);
    if( i < 4 ) return(1);
    close(pipes[0]);
    close(pipes[3]);
    dup2(pipes[2], 0);  close(pipes[2]);
    dup2(pipes[1], 1);  close(pipes[1]);
  }
#endif

#if USE_WIN32
  hStdout = GetStdHandle(STD_OUTPUT_HANDLE); 
  hStdin = GetStdHandle(STD_INPUT_HANDLE); 
  if( (hStdout == INVALID_HANDLE_VALUE) || (hStdin == INVALID_HANDLE_VALUE) ){
    unlink(argv[0]);
    return 0;
  }
#endif

  /* read and filter events */
#if USE_WIN32
  while((ReadFile(hStdin, &get, sizeof(int), &dwRead, NULL) >0) && 
	(dwRead == sizeof(int)) ){
#else
  while( read(0, &get, sizeof(int)) == sizeof(int) ){
#endif
#if DO_FILTER_SWAP
    switch(sizeof(int)){
    case 2:
      _sw2((char *)&get,2,NULL,0);
      break;
    case 4:
      _sw4((char *)&get,4,NULL,0);
      break;
    case 8:
      _sw8((char *)&get,8,NULL,0);
      break;
    }
#endif
    ebuf = (char *)calloc(get, sizeof(char));
#if USE_WIN32
    for(n=0, etop=ebuf; get>0; etop += got, get -= dwRead){
      if((ReadFile(hStdin, etop, get, &dwRead, NULL)==FALSE) || (dwRead==0))
	break;
      n += dwRead;
    }
#else
    for(n=0, etop=ebuf; get>0; etop += got, get -= got){
      if( (got=read(0, etop, get)) <=0 ) 
	break;
      n += got;
    }
#endif
    n /= EVSIZE;
    /* allocate return value buffer */
    rbuf = (int *)calloc(n, sizeof(int));
    /* filter events, with results going into rbuf */
    g = EVFILTRTN(g, ebuf, n, EVSIZE, rbuf);
    /* write results */
    got = n*sizeof(int);
#if DO_FILTER_SWAP
    sgot = got;
    switch(sizeof(int)){
    case 2:
      _sw2((char *)&sgot,2,NULL,0);
      break;
    case 4:
      _sw4((char *)&sgot,4,NULL,0);
      break;
    case 8:
      _sw8((char *)&sgot,8,NULL,0);
      break;
    }
#if USE_WIN32
    WriteFile(hStdout, &sgot, sizeof(int), &dwWritten, NULL); 
#else
    write(1, &sgot, sizeof(int));
#endif
#else
#if USE_WIN32
    WriteFile(hStdout, &got, sizeof(int), &dwWritten, NULL); 
#else
    write(1, &got, sizeof(int));
#endif
#endif
#if DO_FILTER_SWAP
    switch(sizeof(int)){
    case 2:
      _sw2((char *)rbuf,got,NULL,0);
      break;
    case 4:
      _sw4((char *)rbuf,got,NULL,0);
      break;
    case 8:
      _sw8((char *)rbuf,got,NULL,0);
      break;
    }
#endif
#if USE_WIN32
    WriteFile(hStdout, rbuf, got, &dwWritten, NULL); 
#else
    write(1, rbuf, got);
#endif
    if( ebuf) free(ebuf);
    if( rbuf ) free(rbuf);
  }
  EVFILTRTN(g, NULL, -1, 0, NULL);
  unlink(argv[0]);
  return 0;
}
