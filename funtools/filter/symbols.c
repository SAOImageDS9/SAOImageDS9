/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * symbols.c -- management of filter symbols
 *
 */

#include <filter.h>

#define SYMINC  100	/* increment for allocating symbols */

static char *bincols=NULL;
static char xbin[SZ_LINE];
static char ybin[SZ_LINE];

extern char *filtinchar;

/*
 *
 * Public Routines
 *
 */

/*
 *
 *  FilterSymbolInit -- init the symbol table
 *
 */
#ifdef ANSI_FUNC
int
FilterSymbolInit(Filter filter)
#else
int FilterSymbolInit(filter)
     Filter filter;
#endif
{
  /* make sure we are init'ed */
  if( filter == NULL ){
    gerror(stderr, "symbol table not initialized\n");
    return(0);
  }
  filter->symtab = (FilterSymbols)xcalloc(SYMINC, sizeof(FilterSymRec));
  filter->nsyms = 0;
  filter->maxsyms = SYMINC;
  return(SYMINC);
}

/*
 *
 * FilterSymbolEnter -- enter a new symbol in the symbol table
 * The symbol will either be a column name, or
 * a parameter in the table header, or
 * a parameter in the primary header
 *
 */
#ifdef ANSI_FUNC
char *
FilterSymbolEnter(Filter filter, char *s, int *got)
#else
char *FilterSymbolEnter(filter, s, got)
     Filter filter;
     char *s;
     int *got;
#endif
{
  int brack=0;
  int i, j;
  char *t;
  FilterSymbols sp;
  char name[SZ_LINE];
  FITSCard card;
  FITSHead fhd;

  /* see return value */
  if( got ) *got =-3;

  /* make sure we are init'ed */
  if( filter == NULL ){
    gerror(stderr, "symbol table not initialized\n");
    return(NULL);
  }

  /* make sure we are init'ed */
  if( filter->fhd == NULL ){
    gerror(stderr, "symbol table not initialized\n");
    return(NULL);
  }
  fhd = filter->fhd;

  /* make sure we have something */
  if( !s || !*s )
    return(NULL);

  /* this is the name of the variable in the filter program */
  nowhite(s, name);
  /* but strip off brackets */
  if( (t=strchr(name, '[')) != NULL ){
    brack=1;
    *t = '\0';
  }

  /* loop through the symbol table and look for existing symbol */
  for(i=0; i<filter->nsyms; i++){
    sp = &(filter->symtab[i]);
    /* skip accidentally empty ones */
    if( (sp->name == NULL) || (*sp->name == '\0') )
      continue;
    /* is this name already entered? */
    if( !strcasecmp(sp->name, name) ){
      if( got ) *got = 1;
      return (char *)sp->name;
    }
  }

  /* make sure there is room for a new symbol */
  if( i >= filter->maxsyms ){
    filter->maxsyms += SYMINC;
    filter->symtab = (FilterSymbols)xrealloc(filter->symtab,
		                    filter->maxsyms*sizeof(FilterSymRec));
  }

  /* this is where the next symbol will be entered */
  sp = &(filter->symtab[i]);

  /* look for name in the list of columns */
  if( fhd->table ){
    for(j=0; j<fhd->table->tfields; j++){
      if( !strcasecmp(name, fhd->table->col[j].name) ){
	if( brack && (fhd->table->col[j].n==1) ){
	  if( got ) *got = -2;
	  return(NULL);
	}
	sp->type = SYM_COL;
	sp->name = (char *)xstrdup(name);
	sp->idx = j;
	filter->size += fhd->table->col[j].size;
	filter->nsyms++;
	if( got ) *got = 1;
	return (char *)sp->name;
      }
    }
  }
  /* look for name in the table header */
  if( (t=ft_headgets(fhd, name, 0, NULL, &card)) ){
    sp->type = SYM_PAR;
    sp->name = xstrdup(name);
    sp->value = t;
    sp->idx = -1;
    filter->nsyms++;
    if( got ) *got = 2;
    return (char *)sp->name;
  }
  /* look for name in the primary header */
  else if( fhd->primary &&
	   (t=ft_headgets(fhd->primary, name, 0, NULL, &card)) ){
    sp->type = SYM_PAR;
    sp->name = xstrdup(name);
    sp->value = t;
    sp->idx = -1;
    filter->nsyms++;
    if( got ) *got = 2;
    return (char *)sp->name;
  }
  /* did not find the symbol anywhere */
  else{
    gerror(stderr, "can't find '%s' in table\n", s);
    if( got ) *got = -1;
    return(NULL);
  }
} /* EnterSymbol */


/*
 *
 * FilterSymbolLookup -- lookup a symbol in the symbol table
 *
 */
#ifdef ANSI_FUNC
FilterSymbols
FilterSymbolLookup(Filter filter, char *name)
#else
FilterSymbols FilterSymbolLookup(filter, name)
     Filter filter;
     char *s;
#endif
{
  int i;

  /* sanity check */
  if( !name || !*name ) return NULL;

  /* loop through the symbol table and look for existing symbol */
  for(i=0; i<filter->nsyms; i++){
    /* skip accidentally empty ones */
    if( (filter->symtab[i].name == NULL) || (*filter->symtab[i].name == '\0') )
      continue;
    /* look for name */
    if( !strcasecmp(filter->symtab[i].name, name) ){
      /* return symbol table record if found */
      return &filter->symtab[i];
    }
  }
  return NULL;
}

/*
 *
 * FilterSymbolDefaults -- enter default symbols for X and Y columns
 *
 */
#ifdef ANSI_FUNC
int
FilterSymbolDefaults(Filter filter, int enter)
#else
int FilterSymbolDefaults(filter, enter)
     Filter filter;
     int enter;
#endif
{
  int ip=0;
  char tbuf[SZ_LINE];
  char *mbuf;
  char *k;
  char *s;

  /* this is only for events */
  if( !filter || !filter->fhd || !filter->fhd->table )
    return 0;

  /* parse bincols variable */
  if( !bincols ){
    mbuf = xstrdup(filter->mode);
    if( !keyword(mbuf, "bincols", tbuf, SZ_LINE) )
      return 0;
    if( mbuf ) xfree(mbuf);
    s = tbuf;
    /* parse the bincols string and add the symbols */
    newdtable(",:)");
    bincols = xstrdup(s);
    k = bincols;
    /* point past first paren */
    if( *bincols == '(' )
      k++;
    if( !word(k, xbin, &ip) || !word(k, ybin, &ip) ){
      freedtable();
      return 0;
    }
    freedtable();
    /* set the filter bin strings */
    if( filter->xbin ) xfree(filter->xbin);
    filter->xbin = xstrdup(xbin);
    if( filter->ybin ) xfree(filter->ybin);
    filter->ybin = xstrdup(ybin);
  }
  else if( !filter->xbin || !filter->ybin ){
    /* set the filter bin strings */
    if( filter->xbin ) xfree(filter->xbin);
    filter->xbin = xstrdup(xbin);
    if( filter->ybin ) xfree(filter->ybin);
    filter->ybin = xstrdup(ybin);
  }

  /* enter symbols if necessary */
  if( enter ){
    if( !FilterSymbolEnter(filter, xbin, NULL) ||
	!FilterSymbolEnter(filter, ybin, NULL) )
      return 0;
  }
  return 1;
}

/*
 *
 * FilterSymbolFree -- free space from symbol table
 *
 */
#ifdef ANSI_FUNC
void
FilterSymbolFree(Filter filter)
#else
void FilterSymbolFree(filter)
     Filter filter;
#endif
{
  int i;
  FilterSymbols sp;

  /* if we have no symbols, just return */
  if( !filter || !filter->nsyms )
    return;

  /* loop through the symbol table and free up records */
  for(i=0; i<filter->nsyms; i++){
    sp = &(filter->symtab[i]);
    /* skip accidentally empty ones */
    if( (sp->name == NULL) || (*sp->name == '\0') )
      continue;
    /* process this type of symbol */
    switch(sp->type){
    case SYM_COL:
      xfree(sp->name);
      sp->name = NULL;
      break;
    case SYM_PAR:
      xfree(sp->name);
      xfree(sp->value);
      sp->name = NULL;
      break;
    }
  }
  /* no symbols */
  filter->nsyms = 0;
  if( bincols != NULL ){
    xfree(bincols);
    bincols = NULL;
    *xbin = '\0';
    *ybin = '\0';
  }
}

