/* for TEST: gcc -DTEST -g -o foo imfilter.c imregions.o -lm */
#ifdef TEST
#include <stdio.h>
#include <math.h>
#define IMFILTRTN _FilterImage
#define NMASK 0
#define MASKDIM 0
#define _masks NULL
#define NSHAPE 2
#define NREGION 2
#define FILTER ((imcircle(g,1,1,1,4,(double)x,(double)y,8.0,8.0,5.0)))&&(imcircle(g,2,2,0,1,(double)x,(double)y,8.0,8.0,3.0))
#define FILTSTR "((imcircle(g,1,1,1,4,(double)x,(double)y,8.0,8.0,5.0)))&&(imcircle(g,2,2,0,1,(double)x,(double)y,8.0,8.0,3.0))"
#define FINIT imcirclei(g,1,1,1,4,(double)x,(double)y,8.0,8.0,5.0);imcirclei(g,2,2,0,1,(double)x,(double)y,8.0,8.0,3.0);
#include "regions.h"
#endif

/* these are global for use with special region routines */
FilterMask masks=NULL;		/* array valid region masks for one row */
int maxmask;			/* max masks allocated thus far */
int nmask;			/* number of mask segments */
int nreg;			/* number of regions in this set of rows */
int rid;			/* first valid region for current pixel */
int x, y;			/* current row and column */
int rlen;			/* length of temp region buf */
int *rbuf;			/* temp region flags */
int *rptr;			/* pointer into region buffer */

void incnmask(void)
{
  int omax;
  nmask++;
  if( nmask >= maxmask ){
    omax = maxmask;
    maxmask += MASKINC;
    masks = (FilterMask)realloc(masks, maxmask*sizeof(FilterMaskRec));
    memset(masks+omax, 0, (maxmask-omax)*sizeof(FilterMaskRec));
  }
}

FilterMask
IMFILTRTN(int txmin, int txmax, int tymin, int tymax, int tblock, int *got)
{
  int i, j;
  int fieldonly;
  GFilt g;
  Scan scan, tscan;

  /* make sure we have something to process */
  if( NSHAPE <=0 ){
    *got = 0;
    return NULL;
  }
  /* allocate space for the globals */
  g = (GFilt)calloc(1, sizeof(GFiltRec));
  /* see if we have only the field shape */
  fieldonly = (NSHAPE==1) && strstr(FILTSTR, "field");
  /* allocate region records */
  g->nshapes = NSHAPE;
  g->maxshapes = (NSHAPE*(XSNO+1))+1;
  g->shapes = (Shape)calloc(g->maxshapes, sizeof(ShapeRec));
  /* make sure we start at 1 */
  g->block= max(1,tblock);
  g->xmin = max(1,txmin); 
  g->xmax = txmax;
  g->ymin = max(1,tymin);
  g->ymax = tymax;
  /* get x and y limits on subsection */
  g->x0 = 1;
  g->y0 = 1;
  g->x1 = (g->xmax-g->xmin)/g->block+1;
  g->y1 = (g->ymax-g->ymin)/g->block+1;
  /* allocate a temp region buffer */
  rlen = g->x1 - g->x0 + 1;
  rbuf = (int *)calloc(rlen+1, sizeof(int));
  /* allocate an array of masks, which will be written to caller */
  maxmask = MASKINC;
  masks = (FilterMask)calloc(maxmask, sizeof(FilterMaskRec));
  /* seed the first region mask value */
  nmask = 0;
  masks[nmask].region = 0;
  /* keep track of how many hits we had for this set of rows */
  nreg = 0;
  /* allocate a buffer for valid y row flags */
  g->ybuf = (int *)calloc(g->y1+1, sizeof(int));
  g->x0s = (int *)calloc(g->y1+1, sizeof(int));
  g->x1s = (int *)calloc(g->y1+1, sizeof(int));
  /* seed impossible values for x limits */
  for(i=0; i<=g->y1; i++) g->x0s[i]  = g->x1;
  for(i=0; i<=g->y1; i++) g->x1s[i]  = g->x0;
  /* save image mask values */
  if( NMASK ){
    g->nmask = NMASK; 
    g->maskdim = MASKDIM;
    g->masks = _masks;
  }
  /* initialize ybuf */
  FINIT;
  /* process all valid rows */
  for(y=g->y0; y<=g->y1; y++){
    if( fieldonly ){
      /* inc the mask count, (extend mask array, if necessary) */
      masks[nmask].region = 1;
      masks[nmask].y = y - g->y0 + 1;
      masks[nmask].xstart = 1;
      masks[nmask].xstop = (g->x1 - g->x0 + 1);
      incnmask();
      continue;
    }
    if( g->ybuf[y] ){
      /* to start this line, we make a seed mask with no region */
      if( masks[nmask].region ){
	/* inc the mask count, (extend mask array, if necessary) */
	incnmask();
	masks[nmask].region = 0;
      }
      /* process each pixel in this row where there is a region */
      for(x=g->x0s[y], rptr=&rbuf[1+(g->x0s[y]-g->x0)]; x<=g->x1s[y];
	  x++, rptr++){
	/* get filter result, which is the region id or 0 */
	g->rid = 0;
	if( FILTER ){
	  /* never change a region id to a -1 */
	  if( *rptr == 0 ){
	    nreg++;
	    *rptr = g->rid ? g->rid : -1;
	  }
	  /* but always overwrite a -1 */
	  else if( (*rptr == -1) && (g->rid >0) ){
	    *rptr = g->rid;
	  }
	}
      }
    }
    /* if we have processed a row, make up the segments */
    if( nreg ){
      for(i=1; i<=rlen; i++){
	if( rbuf[i] != masks[nmask].region ){
	  /* if previous was non-zero region, finish it and bump to next */
	  if( masks[nmask].region ){
	    masks[nmask].xstop = i - 1;
	    /* inc the mask count, (extend mask array, if necessary) */
	    incnmask();
	  }
	  masks[nmask].y = y - g->y0 + 1;
	  masks[nmask].region = rbuf[i];
	  masks[nmask].xstart = i;
	}
      }
      /* finish last non-zero segment, inc number of mask segs */
      if( masks[nmask].region ){
	masks[nmask].xstop = (g->x1 - g->x0 + 1);
	/* inc the mask count, (extend mask array, if necessary) */
	incnmask();
      }
      /* reset counters for next set of rows */
      (void)memset(rbuf, 0, (rlen+1)*sizeof(int));
      rptr = rbuf;
      nreg = 0;
    }
  }
  /* free buffers */
  if( rbuf) free(rbuf);
  /* free region information */
  if( g ){
    for(i=0; i<g->maxshapes; i++){
      if( g->shapes[i].scanlist ){
	for(j=0; j<=g->y1; j++){
	  if( g->shapes[i].scanlist[j] ){
	    for(scan=g->shapes[i].scanlist[j]; scan; ){
	      tscan = scan->next;
	      free(scan);
	      scan = tscan;
	    }
	  }
	}
	free(g->shapes[i].scanlist);
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
  }
  /* return mask info */
  *got = nmask;
  return masks;
}

int main(int argc, char **argv)
{
  int i;
  int get, got;
#if DO_FILTER_SWAP
  int sgot;
#endif
#if HAVE_MINGW32==0
  int pipes[4];
#endif
  int txmin, txmax, tymin, tymax, tblock;
  char tbuf[SZ_LINE];
  char *s=NULL, *t=NULL, *u=NULL;
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

  /* process requests for region information for sections of the image */
#ifdef TEST
  while( fgets(tbuf, SZ_LINE, stdin) ){
#else
#if USE_WIN32
  while((ReadFile(hStdin, &get, sizeof(int), &dwRead, NULL) != FALSE) && 
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
#if USE_WIN32
    if((ReadFile(hStdin, tbuf, get, &dwRead, NULL)==FALSE) || (dwRead != get))
      break;
#else
    if(read(0, tbuf, get) != get) 
      break;
#endif
#endif /* #ifdef TEST */
    if(sscanf(tbuf, "%d %d %d %d %d",
	      &txmin, &txmax, &tymin, &tymax, &tblock)!=5){
      break;
    }
    masks = IMFILTRTN(txmin, txmax, tymin, tymax, tblock, &got);
#ifdef TEST
    /* display segments for debugging */
    fprintf(stdout, "nmask=%d\n", nmask);
    for(i=0; i<nmask; i++){
      fprintf(stdout, "region: %d\tx: (%d,%d)\ty: %d\n",
	      masks[i].region, masks[i].xstart, masks[i].xstop, masks[i].y);
    }
    fflush(stdout);
#else
    /* calculate size of data we will write */
    got =  got * sizeof(FilterMaskRec);
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
      _sw2((char *)masks,got,NULL,0);
      break;
    case 4:
      _sw4((char *)masks,got,NULL,0);
      break;
    case 8:
      _sw8((char *)masks,got,NULL,0);
      break;
    }
#endif
#if USE_WIN32
    WriteFile(hStdout, masks, got, &dwWritten, NULL); 
#else
    write(1, masks, got);
#endif
#endif
    /* free mask records */
    if( masks ) free(masks);
  }
#ifndef TEST
  unlink(argv[0]);
#endif
  return 0;
}
