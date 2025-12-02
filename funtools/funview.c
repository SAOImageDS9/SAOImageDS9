/*
 *	Copyright (c) 2005 Smithsonian Astrophysical Observatory
 */

#include <funtoolsP.h>

/*
 *
 * private routines
 *
 */

/* default data base files */
#define FUN_VIEWFILE ".funtools.vu"
#define FUN_VIEWHOME "$HOME/.funtools.vu"

/* default text options for database open */
#define FUN_VIEWEXT "[1,TEXT(alen=1024)]"

/* default is to allow multiple matches */
#define FUN_VIEW_MATCH_DEFAULT 1

/* if a list is specified, do we also match templates? */
#define FUN_VIEW_DOROW_DEFAULT 1

/* types of matches */
#define MATCH_VIEW 1
#define MATCH_FILE 2
#define MATCH_VTMP 4
#define MATCH_FTMP 8

/* this should match what is in fun_viewopen's alen above */
#define SZ_VIEW 1024

/* parser characteristics struct */
typedef struct _rowstruct{
  int type;
  char view[SZ_VIEW];
  char file[SZ_VIEW];
  char fmt[SZ_VIEW];
  char cols[SZ_VIEW];
  char filt[SZ_VIEW];
} *Row, RowRec;

typedef struct _viewstruct{
  char *vname;
  char *vroot;
  int nlist;
  int maxlist;
  char **vlist;
  Fun ifun;
  Fun vfun;
  int nrow;
  int maxrow;
  Row *rows;
  Row file, filt, cols, fmt;
  Row trow;
} *View, ViewRec;

#ifdef ANSI_FUNC
static int
pathcmp(char *s1, char *s2)
#else
static int
pathcmp(s1, s2)
  char *s1;
  char *s2;
#endif
{
  char tbuf1[SZ_LINE];
  char tbuf2[SZ_LINE];
  char tbuf1a[SZ_LINE];
  char tbuf2a[SZ_LINE];

  /* resolve pathnames and expand environment variables */
  ExpandEnv(s1, tbuf1, SZ_LINE);
  ExpandEnv(s2, tbuf2, SZ_LINE);
  ResolvePath(tbuf1, tbuf1a, SZ_LINE);
  ResolvePath(tbuf2, tbuf2a, SZ_LINE);

  /* now compare strings */
  return strcmp(tbuf1a, tbuf2a);
}

#ifdef ANSI_FUNC
static int
ViewFree(View view)
#else
static int ViewFree(view)
     View view;
#endif
{
  int i;

  /* sanity check */
  if( !view ) return 0;

  /* free up resources */
  if( view->vfun )  FunClose(view->vfun);
  if( view->vname ) xfree(view->vname);
  if( view->vroot ) xfree(view->vroot);
  if( view->trow )  xfree(view->trow);
  if( view->rows ){
    for(i=0; i<view->nrow; i++){
      if( view->rows[i] ) xfree(view->rows[i]);
    }
    xfree(view->rows);
  }
  if( view->vlist ){
    for(i=0; i<view->nlist; i++){
      if( view->vlist[i] ) xfree(view->vlist[i]);
    }
    xfree(view->vlist);
  }
  xfree(view);
  return 1;
}

#ifdef ANSI_FUNC
static View
ViewNew(Fun fun, char *vname, char *vptr, char *vlist, char *dbname, int dbmax)
#else
static View
ViewNew(fun, vname, vptr, vlist, dbname, dbmax)
     Fun fun;
     char *vname;
     char *vptr;
     char *vlist;
     char *dbname;
     int dbmax;
#endif
{
  int ip=0;
  char *s, *t;
  char *rmode="r";
  char *fmode="rV";
  char *params=NULL;
  char tbuf[SZ_LINE];
  char dtype[SZ_LINE];
  View view=NULL;

  /* look for view file in the usual places */
  if( (s=(char *)getenv("FUN_VIEWFILE")) && (t=Access(s, rmode)) ){
    xfree(t);
    goto gotv;
  }
  else if( (t=Access(FUN_VIEWFILE, rmode)) ){
    xfree(t);
    s = FUN_VIEWFILE;
    goto gotv;
  }
  else if( (t=Access(FUN_VIEWHOME, rmode)) ){
    xfree(t);
    s = FUN_VIEWHOME;
    goto gotv;
  }
  else{
    return NULL;
  }

gotv:
  /* allocate the view struct */
  if( !(view=(View)xcalloc(1, sizeof(ViewRec))) ){
    gerror(stderr, "can't allocate view database struct\n");
    return NULL;
  }
  /* allocate temp row */
  if( !(view->trow=(Row)xcalloc(1, sizeof(RowRec))) ){
    gerror(stderr, "can't allocate view temp row struct\n");
    ViewFree(view);
    return NULL;
  }

  /* add default text options to the filename, if needed */
  if( strchr(s, '[') ){
    strncpy(tbuf, s, SZ_LINE);
  }
  else{
    snprintf(tbuf, SZ_LINE, "%s%s", s, FUN_VIEWEXT);
  }

  /* open the file */
  if( !(view->vfun=FunOpen(tbuf, fmode, NULL)) ){
    gerror(stderr, "can't open view database file: %s\n", s);
    ViewFree(view);
    return NULL;
  }

  /* select columns from view database */
  snprintf(dtype, SZ_LINE-1, "%dA", SZ_VIEW);
  FunColumnSelect(view->vfun, sizeof(RowRec), params,
		  "view",    dtype, rmode, FUN_OFFSET(Row, view),
		  "file",    dtype, rmode, FUN_OFFSET(Row, file),
		  "format",  dtype, rmode, FUN_OFFSET(Row, fmt),
		  "columns", dtype, rmode, FUN_OFFSET(Row, cols),
		  "filter",  dtype, rmode, FUN_OFFSET(Row, filt),
		  NULL);

  /* save original view string */
  view->vname = xstrdup(vname);

  /* save view name without any bracket extension */
  view->vroot = xstrdup(vptr);
  if( (s=strchr(view->vroot, '[')) ) *s = '\0';

  /* save original input Fun handle */
  view->ifun = fun;

  /* save vlist as separate strings */
  if( vlist ){
    newdtable(",");
    while( word(vlist, tbuf, &ip) ){
      if( view->nlist >= view->maxlist ){
	view->maxlist += SZ_VIEW;
	if( view->vlist )
	  view->vlist = (char **)xrealloc(view->vlist,
					  view->maxlist*sizeof(char **));
	else
	  view->vlist = (char **)xmalloc(view->maxlist*sizeof(char **));
      }
      /* add this record to the array of matches */
      view->vlist[view->nlist++] = xstrdup(tbuf);
    }
    freedtable();
  }

  /* temp row, in case template is matched as a file => use input file name */
  strncpy(view->trow->file, vptr, SZ_VIEW-1);
  if( (s=strrchr(view->trow->file, '[')) ){
    /* remove extension from file (we'll put it back later, if necessary) */
    *s = '\0';
  }
  /* return name of database used, if necessary */
  if( dbname ){
    FunInfoGet(view->vfun, FUN_FNAME, &s, 0);
    strncpy(dbname, s, dbmax-1);
  }

  /* return the good news */
  return view;
}

#ifdef ANSI_FUNC
static int
ViewMatchRow(View view, Row row)
#else
static int
ViewMatchRow(view, row)
     View view;
     Row row;
#endif
{
  char *root=NULL;

  /* sanity check */
  if( !row || !view->vroot || !*view->vroot ) return 0;

  /* root is file without path */
  if( (root=strrchr(row->file, '/')) )
    root++;
  else
    root=row->file;

  /* look for various types of match */
  if( *row->view && !strcmp(view->vroot, row->view) )
    row->type |= MATCH_VIEW;
  /* if not a vew, perhaps a view template */
  else if( *row->view && tmatch(view->vroot, row->view) )
    row->type |= MATCH_VTMP;
  /* check for file, with and without path */
  if( (*row->file &&!pathcmp(view->vroot, row->file)) || 
      (root && *root && !strcmp(view->vroot, root)))
    row->type |= MATCH_FILE;
  /* if not a file, perhaps a file template */
  else if( root && *root && tmatch(view->vroot, root) )
    row->type |= MATCH_FTMP;

  /* return the results */
  return row->type;
}

#ifdef ANSI_FUNC
static int
ViewSaveRow(View view, Row row)
#else
static int
ViewSaveRow(view, row)
     View view;
     Row row;
#endif
{
  /* make sure we have enough space */
  if( view->nrow >= view->maxrow ){
    view->maxrow += SZ_VIEW;
    if( view->rows )
      view->rows = (Row *)xrealloc(view->rows, view->maxrow*sizeof(Row));
    else
      view->rows = (Row *)xmalloc(view->maxrow*sizeof(Row));
  }
  /* add this record to the array of matches */
  view->rows[view->nrow++] = row;
  return view->nrow;
}

#ifdef ANSI_FUNC
static int
ViewMatchList(View view, Row row, int dorow)
#else
static int
ViewMatchList(view, row, dorow)
     View view;
     Row row;
     int dorow;
#endif
{
  int i;

  /* sanity check */
  if( !row || !view->vlist ) return 0;

  /* look though all view strings in the list */
  for(i=0; i<view->nlist; i++){
    /* does list view match row view? */
    if( !strcmp(view->vlist[i], row->view) ){
      row->type |= MATCH_VIEW;
      break;
    }
  }

  /* also check row matches, if necessary */
  if( dorow ) ViewMatchRow(view, row);

  /* return the results */
  return row->type;
}

#ifdef ANSI_FUNC
static int
ViewProcessMatches(View view, char *fname, int fmax)
#else
static int
ViewProcessMatches(view, fname, fmax)
     View view;
     char *fname;
     int fmax;
#endif
{
  int i;
  int nv=0;
  int nf=0;
  int nvt=0;
  int nft=0;
  int fgot=-1;
  int tgot=-1;
  int domulti=FUN_VIEW_MATCH_DEFAULT;
  char *s=NULL;

  /* sanity check */
  if( !view ) return 0;

  /* do we match a single row or use multiple row to complete the spec? */
  if( (s=getenv("FUN_VIEWMATCH")) ){
    if( !strncmp(s, "m", 1) ){
      domulti = 1;
    }
    else if( !strncmp(s, "s", 1) ){
      domulti = 0;
    }
  }

  /* collect separate parts of fname using increasingly general matching */
  if( view->nrow ){
    /* get match counts */
    for(i=0; i<view->nrow; i++){
      if( view->rows[i]->type & MATCH_VIEW )
	nv++;
      if( view->rows[i]->type & MATCH_VTMP )
	nvt++;
      if( view->rows[i]->type & MATCH_FILE )
	nf++;
      if( view->rows[i]->type & MATCH_FTMP )
	nft++;
    }
    /* view matches are the most desirable */
    if( nv ){
      for(i=0; i<view->nrow; i++){
	if( view->rows[i]->type & MATCH_VIEW ){
	  /* if we are using a list, we always take the original filename */
	  if( view->nlist )
	    view->file = view->trow;
	  else if( !view->file && *view->rows[i]->file )
	    view->file = view->rows[i];
	  if( !view->filt && *view->rows[i]->filt )
	    view->filt = view->rows[i];
	  if( !view->cols && *view->rows[i]->cols )
	    view->cols = view->rows[i];
	  if( !view->fmt  && *view->rows[i]->fmt  )
	    view->fmt  = view->rows[i];
	  tgot = i;
	  /* we only use one, unless we are running off a list */
	  if( !view->nlist ) break;
	}
      }
    }
    /* if no view matches, try file matches */
    else if( nf ){
      for(i=0; i<view->nrow; i++){
	if( view->rows[i]->type & MATCH_FILE ){
	  if( !view->file && *view->rows[i]->file )
	    view->file = view->rows[i];
	  if( !view->filt && *view->rows[i]->filt )
	    view->filt = view->rows[i];
	  if( !view->cols && *view->rows[i]->cols )
	    view->cols = view->rows[i];
	  if( !view->fmt  && *view->rows[i]->fmt  )
	    view->fmt  = view->rows[i];
	  fgot = i;
	  break;
	}
      }
    }
    /* if we got a match, only do templates if multiple matches is true */
    if( (tgot==-1 && fgot==-1) || domulti ){
      for(i=0; i<view->nrow; i++){
	if( tgot == i ) continue;
	if( view->rows[i]->type & MATCH_VTMP ){
	  /* use the input file name in this case */
	  if( !view->file && *view->rows[i]->file )
	    view->file = view->trow;
	  if( !view->filt && *view->rows[i]->filt )
	    view->filt = view->rows[i];
	  if( !view->cols && *view->rows[i]->cols )
	    view->cols = view->rows[i];
	  if( !view->fmt  && *view->rows[i]->fmt  )
	    view->fmt  = view->rows[i];
	  /* mark use of view template so we don't do file templates */
	  tgot = i;
	  /* stop at one if not domulti */
	  if( !domulti ) break;
	}
      }
    }
    /* if we got a match, only do templates if multiple matches is true */
    if( (tgot==-1 && fgot==-1) || domulti ){
      for(i=0; i<view->nrow; i++){
	if( fgot == i ) continue;
	if( view->rows[i]->type & MATCH_FTMP ){
	  /* use the input file name in this case */
	  if( !view->file && *view->rows[i]->file )
	    view->file = view->trow;
	  if( !view->filt && *view->rows[i]->filt )
	    view->filt = view->rows[i];
	  if( !view->cols && *view->rows[i]->cols )
	    view->cols = view->rows[i];
	  if( !view->fmt  && *view->rows[i]->fmt  )
	    view->fmt  = view->rows[i];
	  /* stop at one if not domulti */
	  if( !domulti ) break;
	}
      }
    }

    /* now we can make up the fname from the pieces we have found */
    if( view->file && *view->file->file ){
      /* see if original input had an extension */
      if( (s=strchr(view->vname, '[')) ){
	/* if we can guess that original was a filter, don't add new one */
	if(  strstr(s,"ann") ||
	     strstr(s,"box") ||
	     strstr(s,"cir") ||
	     strstr(s,"ell") ||
	     strstr(s,"lin") ||
	     strstr(s,"pan") ||
	     strstr(s,"pie") ||
	     strstr(s,"poi") ||
	     strstr(s,"qtp") ||
	     strstr(s,"pol") ||
	     strstr(s,"fie") ||
	     strstr(s,"bpa") ||
	     strstr(s,"cpa") ||
	     strstr(s,"epa") ||
	     /* guess at some sort of filter operation */
	     strpbrk(s, "!&|~=<>+-/%^") ){
	  snprintf(fname, fmax, "%s%s", view->file->file, s);
	}
	/* otherwise add original + new filter, if we have one */
	else{
	  if( view->filt && *view->filt->filt ){
	    snprintf(fname, fmax, "%s%s[%s]",
		     view->file->file, s, view->filt->filt);
	  }
	  /* just add original */
	  else{
	    snprintf(fname, fmax, "%s%s", view->file->file, s);
	  }
	}
      }
      /* no original filter */
      else{
	/* otherwise new filter, if we have one */
	if( view->filt && *view->filt->filt ){
	  snprintf(fname, fmax, "%s[%s]", view->file->file, view->filt->filt);
	}
	/* just the file name */
	else{
	  snprintf(fname, fmax, "%s", view->file->file);
	}
      }
      /* save other view info */
      if( view->ifun ){
	if( view->cols && *view->cols->cols ) 
	  view->ifun->vcols = xstrdup(view->cols->cols);
	if( view->fmt  && *view->fmt->fmt )
	  view->ifun->vfmt  = xstrdup(view->fmt->fmt);
      }
    }
    return 1;
  }
  else{
    return 0;
  }
}

/*
 *
 * public routines
 *
 */

/*
 *
 * FunView -- translate view into a filename + view params
 *
 */
#ifdef ANSI_FUNC
int
FunView(Fun fun, char *vname, char *vmode, char *fname, int fmax)
#else
int
FunView(fun, vname, vmode, fname, fmax)
     Fun fun;
     char *vname;
     char *vmode;
     char *fname;
     int fmax;
#endif
{
  int nev=0;
  int got=0;
  int dorow=FUN_VIEW_DOROW_DEFAULT;
  char *s=NULL;
  char *vptr=NULL;
  char vlist[SZ_LINE];
  Row row=NULL;
  View view=NULL;

  /* sanity checks */
  if( !fname || !fmax ) return 0;
  *fname = '\0';
  if( !vname || !*vname ) return 0;

  /* assume we don't have a view */
  strncpy(fname, vname, fmax-1);
  fname[fmax-1] = '\0';

  /* sanity check -- this prevents infinite recusion below */
  if( !fun || (vmode && strchr(vmode, 'V')) ) return 0;

  /* see if a view ("v:...") was specified */
  memset(vlist, 0, SZ_LINE);
  vptr = vname;
  if( !*vptr || (*vptr != 'v') ) return 0;
  vptr++;
  if( !*vptr || (*vptr != ':') ) return 0;
  vptr++;
  if( !*vptr ) return 0;
  /* v::vid1,vid2...:file... */
  if( (*vptr == ':') || (*vptr == '+') || (*vptr == '-') ){
    if( *vptr == '+' ) dorow = 1;
    else if( *vptr == '-' ) dorow = 0;
    vptr++;
    /* must have a closing ':' */
    if( !*vptr  || !(s = strchr(vptr, ':')) ) return 0;
    /* copy the list */
    strncpy(vlist, vptr, MIN(s-vptr,SZ_LINE-1));
    /* bump past the ':' */
    vptr = s+1;
  }
  if( !*vptr ) return 0;

  /* now assume we don't match and want to use the supplied filename */
  strncpy(fname, vptr, fmax-1);
  fname[fmax-1] = '\0';

  /* open view file */
  if( !(view=ViewNew(fun, vname, vptr, vlist, NULL, 0)) ) goto done;

  /* read rows from view database */
  while( (row=FunTableRowGet(view->vfun, NULL, 1, NULL, &nev)) && nev ){
    /* look for a match */
    if( view->vlist ){
      if( ViewMatchList(view, row, dorow) ){
	ViewSaveRow(view, row);
	/* clear row */
	row = NULL;
      }
    }
    else{
      if( ViewMatchRow(view, row) ){
	ViewSaveRow(view, row);
	/* clear row */
	row = NULL;
      }
    }
    /* free record if it was not saved (and cleared) */
    if( row ){
      xfree(row);
      row = NULL;
    }
  }

  /* process view information and generate a new file name */
  got = ViewProcessMatches(view, fname, fmax);

done:
  /* clean up */
  ViewFree(view);
  if( row ) xfree(row);

  /* return the news */
  return got;
}
