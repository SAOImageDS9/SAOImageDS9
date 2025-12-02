#include <stdio.h>
#include <string.h>
#include <funtoolsP.h>

static char macrobuf[SZ_LINE];

typedef struct hcstruct{
  int args;
  int eflag;
  int clen;
  int maxlen;
  char *fmt;
  char *expr;
  char mbuf[SZ_LINE];
  char tbuf[SZ_LINE];
} *HC, HCRec;

static char *_HeadColumnCB(char *name, void *client_data)
{
  HC hc = (HC)client_data;

  /* macro replacement */
  if( !strcmp(name, "name") || !strcmp(name, "col") ){
    if( strchr(hc->mbuf, 'n') ){
      hc->eflag = 1;
      gerror(stderr, 
	     "$%s can only be specified once in headcol format\n", name);
      return NULL;
    }
    strncpy(macrobuf, "%s", SZ_LINE);
    strncat(hc->mbuf, "n", SZ_LINE);
    hc->args++;
    return macrobuf;
  }
  else if( !strcmp(name, "format") || !strcmp(name, "fmt") ){
    if( strchr(hc->mbuf, 'f') ){
      hc->eflag = 1;
      gerror(stderr,
	     "$%s can only be specified once in headcol format\n", name);
      return NULL;
    }
    strncpy(macrobuf, "%[a-zA-Z0-9.]", SZ_LINE);
    strncat(hc->mbuf, "f", SZ_LINE);
    hc->args++;
    return macrobuf;
  }
  else if( !strcmp(name, "skip") ){
    strncpy(macrobuf, "%*s", SZ_LINE);
    return macrobuf;
  }
  else if( !strcmp(name, "skipi") ){
    strncpy(macrobuf, "%*d", SZ_LINE);
    return macrobuf;
  }
  else if( !strcmp(name, "skipf") ){
    strncpy(macrobuf, "%*f", SZ_LINE);
    return macrobuf;
  }
  else{
    return NULL;
  }
}

void HeadColumnFree(HC hc)
{
  /* sanity check */
  if( !hc ) return;
  if( hc->fmt ) xfree(hc->fmt);
  xfree(hc);
}

HC HeadColumnNew(char *s)
{
  HC hc=NULL;

  /* sanity check */
  if( !s ) return NULL;
  /* allocate record */
  if( !(hc=xcalloc(1, sizeof(HCRec))) ) return NULL;
  /* expand format specification to make a scanf format */
  if( !(hc->fmt = ExpandMacro(s, NULL, NULL, 0, _HeadColumnCB, hc)) ||
      hc->eflag ){
    HeadColumnFree(hc);
    return NULL;
  }
  fprintf(stderr, "format: %s mbuf=%s args=%d\n", hc->fmt, hc->mbuf, hc->args);
  return hc;
}

char *HeadColumnProcess(HC hc, char *s)
{
  int got;
  int len;
  char tbuf[SZ_LINE];
  char tbuf1[SZ_LINE];
  char tbuf2[SZ_LINE];

  /* sanity check */
  if( !hc || !*hc->mbuf || !hc->fmt || !s ) return NULL;

  /* clear buffers */
  *tbuf  = '\0';
  *tbuf1 = '\0';
  *tbuf2 = '\0';

  if( !strcmp(hc->mbuf, "n") ){
    if( (got = sscanf(s, hc->fmt, tbuf1)) != hc->args ) return NULL;
    strncpy(tbuf, tbuf1, SZ_LINE);
  }
  else if( !strcmp(hc->mbuf, "f") ){
    if( (got = sscanf(s, hc->fmt, tbuf1)) != hc->args ) return NULL;
    strncpy(tbuf, tbuf1, SZ_LINE);
  }
  else if( !strcmp(hc->mbuf, "nf") ){
    if( (got = sscanf(s, hc->fmt, tbuf1, tbuf2)) != hc->args ) return NULL;
    switch(*tbuf2){
    case 'I':
      snprintf(tbuf, SZ_LINE, "%s:J", tbuf1);
      break;
    case 'F':
      snprintf(tbuf, SZ_LINE, "%s:D", tbuf1);
      break;
    case 'A':
      snprintf(tbuf, SZ_LINE, "%s:%s", tbuf1, tbuf2);
      break;
    default:
      snprintf(tbuf, SZ_LINE, "%s:%s", tbuf1, tbuf2);
      break;
    }
  }
  else if( !strcmp(hc->mbuf, "fn") ){
    if( (got = sscanf(s, hc->fmt, tbuf1, tbuf2)) != hc->args ) return NULL;
    switch(*tbuf2){
    case 'I':
      snprintf(tbuf, SZ_LINE, "%s:J", tbuf2);
      break;
    case 'F':
      snprintf(tbuf, SZ_LINE, "%s:D", tbuf2);
      break;
    case 'A':
      snprintf(tbuf, SZ_LINE, "%s:%s", tbuf2, tbuf1);
      break;
    default:
      snprintf(tbuf, SZ_LINE, "%s:%s", tbuf2, tbuf1);
      break;
    }
  }
  else{
    *tbuf = '\0';
  }

  /* add to expression */
  if( hc->tbuf ){
    len = strlen(tbuf);
    if( (len + hc->clen + 1) >= hc->maxlen ){
      while( (len + hc->clen +1) > hc->maxlen ){
	hc->maxlen += SZ_LINE;
      }
      if( hc->clen == 0 )
	hc->expr = (char *)xcalloc(hc->maxlen, sizeof(char));
      else
	hc->expr = (char *)xrealloc(hc->expr, hc->maxlen);
    }
    if( *hc->expr ) strncat(hc->expr, ",", SZ_LINE-1);
    strncat(hc->expr, tbuf, SZ_LINE-1);
  }

  /* return what we just got */
  return hc->tbuf;
}

char *HeadColumnExpr(HC hc)
{
  /* sanity check */
  if( !hc ) return NULL;
  /* return current expression */
  return hc->expr;
}

int main(int argc, char **argv)
{
  int i;
  char *fptr=NULL;
  char *expr=NULL;
  char *lptr;
  char lbuf[SZ_LINE];
  HC hc;

  if( argc >= 2 ){
    fptr = argv[1];
  }
  else{
    fptr = "Column $name ($format)";
  }

  /* initialize columnheader priocessing */
  if( !(hc = HeadColumnNew(fptr)) ){
    gerror(stderr, "can't init headcolumn\n");
    return 1;
  }

  /* read comment lines and look for column specifications */
  if( argc > 2 ){
    for(i=2; i<argc; i++){
      strncpy(lbuf, argv[i], SZ_LINE);
      lptr = lbuf;
      if( *lptr == '#' ) lptr++;
      if( HeadColumnProcess(hc, lptr) ){
	fprintf(stderr, "+");
      }
    }
  }
  else{
    while( fgets(lbuf, SZ_LINE, stdin) ){
      lptr = lbuf;
      if( *lptr == '#' ) lptr++;
      if( HeadColumnProcess(hc, lptr) ){
	fprintf(stderr, "+");
      }
    }
  }

  /* display result -- the column specification */
  if( HeadColumnExpr(hc) ){
    fprintf(stderr, "\n%s\n", HeadColumnExpr(hc));
  }

  /* clean up */
  HeadColumnFree(hc);
  return 0;
}
