/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <funtools.h>
#include <fitsy.h>
#include <wcs.h>
#include <gio.h>
#include <tl.h>
#include <word.h>

/* mode flags for processing */
#define FLAG_FILE 1	/* save file name for each event */
#define FLAG_WCS  2	/* do wcs conversion */
#define FLAG_SAVE 4	/* do wcs conversion and save old event values */
#define FLAG_IWCS 8	/* use image wcs */

#define MAXROW 8192
static int maxrow=MAXROW;

extern char *optarg;
extern int optind;

typedef struct evstruct{
  double x, y;
  double ox, oy;
  short nfile;
} *Ev, EvRec;

typedef struct filestruct{
  struct filestruct *next;
  char *fname;
  Fun fun;
  FITSHead header;
  struct WorldCoor *wcs;
  int type;
  int tltyp[2];
  double tlmin[2];
  double tlmax[2];
  double binsiz[2];
  int bin[2];
  char *bincols[2];
  int nfile;
} *MFile, MFileRec;

#ifdef ANSI_FUNC
static void InputFileParams(MFile ifile, int flag)
#else
static void InputFileParams(ifile, flag)
     MFile ifile;
     int flag;
#endif
{
  int i;
  int got;

  /* get bin offsets for bin columns */
  FunInfoGet(ifile->fun, FUN_BINOFFS, ifile->bin, 0);
  for(i=0; i<=1; i++){
    if( ifile->bin[i] >=0 ){
      FunColumnLookup(ifile->fun, NULL, ifile->bin[i], &(ifile->bincols[i]),
		      &(ifile->tltyp[i]), NULL, NULL, NULL, NULL);
      ifile->tlmin[i] = 
	FunParamGetd(ifile->fun, "TLMIN", ifile->bin[i]+1, 0.0, &got);
      ifile->tlmax[i] = 
	FunParamGetd(ifile->fun, "TLMAX", ifile->bin[i]+1, 0.0, &got);
      ifile->binsiz[i] = 
	FunParamGetd(ifile->fun, "TDBIN", ifile->bin[i]+1, 1.0, &got);
    }
  }
  /* get WCS info if necessary */
  if( flag & FLAG_WCS ){
    if( flag & FLAG_IWCS )
      FunInfoGet(ifile->fun, FUN_WCS, &(ifile->wcs), 0);
    else
      FunInfoGet(ifile->fun, FUN_WCS0, &(ifile->wcs), 0);
    if( !ifile->wcs )
      gerror(stderr, "no WCS found in %s\n", ifile->fname);
  }
  /* fitsy header is used for consistency check oncolumns */
  FunInfoGet(ifile->fun, FUN_HEADER, &(ifile->header), 0);
}

#ifdef ANSI_FUNC
static int OpenInputFile(MFile ifile, int flag)
#else
static int OpenInputFile(ifile, flag)
     MFile ifile;
     int flag;
#endif
{
  char *mode;

  /* mode depends on file count */
  if( ifile->nfile == 1 )
    mode = "rc";
  else
    mode = "r";

  /* open input file */
  if( !(ifile->fun = FunOpen(ifile->fname, mode, NULL)) ){
    gerror(stderr, "can't FunOpen input file (or find extension): %s\n",
	   ifile->fname);
    return 0;
  }

  /* check data type */
  FunInfoGet(ifile->fun, FUN_TYPE, &(ifile->type), 0);
  if( (ifile->type != FUN_TABLE) && (ifile->type != FUN_EVENTS) ){
    gerror(stderr, "Sorry, only binary tables can be merged (thus far)\n");
    return 0;
  }

  /* get params */
  InputFileParams(ifile, flag);

  /* return the good news */
  return 1;
}

#ifdef ANSI_FUNC
static MFile NewInputFile( MFile head, char *s, int flag)
#else
  static MFile NewInputFile(head, s, flag)
     MFile head;
     char *s;
     int flag;
#endif
{
  MFile thead, cfile, cur;

  /* allocate space */
  if( !(cfile = (MFile)xcalloc(1, sizeof(MFileRec))) ){
    gerror(stderr, "can't allocate input file record for %s\n", s);
    return NULL;
  }
  /* fill in the blanks */
  cfile->fname = xstrdup(s);
  /* add to list */
  if( head == NULL ){
    thead = cfile;
    cfile->nfile = 1;
    /* we open the first input file, which the the base file for wcs */
    if( !OpenInputFile(cfile, flag) ){
      gerror(stderr, "can't open input file: %s\n", cfile->fname);
      xfree(cfile);
      return NULL;
    }
  }
  else{
    thead = head;
    for(cur=head; cur->next!=NULL; cur=cur->next)
      ;
    cur->next = cfile;
    cfile->nfile = cur->nfile+1;
  }
  /* return head of list */
  return thead;
}

#ifdef ANSI_FUNC
static void FreeInputFile(MFile file)
#else
static void FreeInputFile(file)
     MFile file;
#endif
{
  if( file->fname ) xfree(file->fname);
  if( file )        xfree(file);
}

#ifdef ANSI_FUNC
static void
ConvertEvents(MFile ifile, MFile ofile, MFile file1, Ev ebuf, int nrow, 
	      int flag)
#else
static void 
ConvertEvents(ifile, ofile, file1, ebuf, nrow, flag)
     MFile ifile;
     MFile ofile;
     MFile file1;
     Ev ebuf;
     int nrow;
     int flag;
#endif
{
  int i;
  int offscl;
  double dval1, dval2;
  Ev ev=NULL;

  for(i=0; i<nrow; i++){
    if( flag & (FLAG_WCS | FLAG_FILE) ){
      ev = ebuf+i;
    }
    /* do wcs translation, if necessary */
    if( flag & FLAG_WCS ){
      /* save old coord, might have to write it back out */
      ev->ox = ev->x;
      ev->oy = ev->y;
      /* wcs convert all but the first file (which is the base file) */
      if( ifile != file1 ){
	if( flag & FLAG_IWCS ){
	  /* convert physical pixels to image */
	  ev->x = tlp2i(ev->x,
			ifile->tlmin[0], ifile->binsiz[0], ifile->tltyp[0]);
	  ev->y = tlp2i(ev->y,
			ifile->tlmin[1], ifile->binsiz[1], ifile->tltyp[1]);
	}
	/* convert image pixels to ra/dec using wcs */
	pix2wcs(ifile->wcs, ev->x, ev->y, &dval1, &dval2);
	/* convert ra/dec to image pixels using base wcs */
	wcs2pix(file1->wcs, dval1, dval2, &(ev->x), &(ev->y), &offscl);
	if( flag & FLAG_IWCS ){
	  /* convert pixels back to physical in base system */
	  ev->x = tli2p(ev->x,
			file1->tlmin[0], file1->binsiz[0], file1->tltyp[0]);
	  ev->y = tli2p(ev->y,
			file1->tlmin[1], file1->binsiz[1], file1->tltyp[1]);
	}
	/* if output coords are not float, we need to round before update */
	switch( ofile->tltyp[0] ){
	case 'D':
	case 'E':
	  break;
	default:
	  if( ev->x >=0 ) ev->x += 0.5;
	  else ev->x -= 0.5;
	  break;
	}
	switch( ofile->tltyp[1] ){
	case 'D':
	case 'E':
	  break;
	default:
	  if( ev->y >=0 ) ev->y += 0.5;
	  else ev->y -= 0.5;
	  break;
	}
      }
    }
    /* save file number, if necessary */
    if( flag & FLAG_FILE ){
      ev->nfile = ifile->nfile;
    }
  }
}

#ifdef ANSI_FUNC
static void
usage (char *fname)
#else
static void usage(fname)
     char *fname;
#endif
{
  fprintf(stderr,
	  "usage: %s [-w|-x] [-f colname] iname1 iname2 ...  oname\n", fname);
  fprintf(stderr, "optional switches:\n");
  fprintf(stderr, "  -f  # output a column specifying file from which this event came\n");
  fprintf(stderr, "  -w  # adjust position values using WCS info\n");
  fprintf(stderr, "  -x  # adjust position values using WCS info and save old values\n");
  fprintf(stderr, "\n(version: %s)\n", FUN_VERSION);
  exit(1);
}

#ifdef ANSI_FUNC
int 
main (int argc, char **argv)
#else
int
main(argc, argv)
     int argc;
     char **argv;
#endif
{
  int i;
  int c;
  int iargs;
  int nrow;
  int flag;
  int put;
  char tbuf[SZ_LINE];
  char onames[2][SZ_LINE];
  char colname[SZ_LINE];
  char *s;
  char *oname=NULL;
  char *mode=NULL;
  char *filemode=NULL, *savemode=NULL, *wcsmode=NULL;
  double tlmin0, tlmin1, tlmax0, tlmax1;
  GIO gio;
  Ev ev, ebuf;
  EvRec tev;
  Fun ofun;
  MFile ifiles=NULL, ofile=NULL, cfile=NULL, tfile=NULL;

  /* exit on gio errors */
  if( !getenv("GERROR")  )
    setgerror(2);

  /* get maxrow,if user-specified */
  if( (s=getenv("FUN_MAXROW")) != NULL )
    maxrow = atoi(s);

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* set colname to something silly. it won't actually be added to the
     file unless -c <name> is on the command line, because the mode is
     NULL by default */
  strcpy(colname, "???");
  strcpy(onames[0], "???");
  strcpy(onames[1], "???");

  /* init flag: assume we will use image wcs */
  flag = FLAG_IWCS;

  /* process switch arguments */
  while ((c = getopt(argc, argv, "f:wxIT")) != -1){
    switch(c){
    case 'f':
      flag |= FLAG_FILE;
      filemode = "w";
      strcpy(colname, optarg);
      break;
    case 'w':
      flag |= FLAG_WCS;
      wcsmode = "rw";
      break;
    case 'x':
      flag |= FLAG_SAVE;
      savemode = "w";
      flag |= FLAG_WCS;
      wcsmode = "rw";
      break;
    case 'I':
      flag |= FLAG_IWCS;
      break;
    case 'T':
      flag &= ~FLAG_IWCS;
      break;
    default:
      break;
    }
  }

  iargs = argc - optind - 1;
  /* make sure we have something to do */
  if( iargs < 1 ) usage(argv[0]);

  /* process input files */
  for(i=optind; i<optind+iargs; i++){
    if( argv[i][0] != '@' ){
      /* allocate new ifile (and open the first file, i.e. the base) */
      ifiles = NewInputFile(ifiles, argv[i], flag);
    }
    /* @ sign means this file contains file names */
    else{
      if( !(gio = gopen(&argv[i][1], "r")) ){
	gerror(stderr, "can't open include file: %s\n", argv[i]);
      }
      while( ggets(gio, tbuf, SZ_LINE) ){
	if( (*tbuf == '\n') || (*tbuf == '#') ) continue;
	nowhite(tbuf, tbuf);
	/* allocate new ifile (and open the first file, i.e. the base) */
	ifiles = NewInputFile(ifiles, tbuf, flag);
      }
      gclose(gio);
    }
  }

  /* final argument is the output file */
  oname = argv[argc-1];
  /* open the output FITS image, preparing to copy input params */
  if( !(ofun = FunOpen(oname, "w", ifiles->fun)) )
    gerror(stderr, "can't FunOpen output file: %s\n", oname);
  /* allocate record for the output file */
  ofile = (MFile)xcalloc(1, sizeof(MFileRec));
  ofile->fun = ofun;
  ofile->fname = xstrdup(oname);
  InputFileParams(ofile, 0);

  /* get old column names from base file, if necessary */
  if( savemode ){
    for(i=0; i<=1; i++){
      if( ifiles->bincols[i] ){
	snprintf(onames[i], SZ_LINE-1, "OLD_%s", ifiles->bincols[i]);
      }
    }
  }

  /* add merge filename parameters */
  for(cfile=ifiles; cfile; cfile=cfile->next){
    snprintf(tbuf, SZ_LINE-1, "MIF%d", cfile->nfile);
    FunParamPuts(ofun, tbuf, 0, cfile->fname, "merge input file", 1);
  }

  /* adjust the TLMIN/TLMAX of the base file to accommodate all of the
     possible position values from this event file. This effectively
     enlargens the size of the output image. */
  /* set temp tlmin variables */
  tlmin0 = ifiles->tlmin[0];
  tlmin1 = ifiles->tlmin[1];
  tlmax0 = ifiles->tlmax[0];
  tlmax1 = ifiles->tlmax[1];
  for(cfile=ifiles->next; cfile; cfile=cfile->next){
    if( !OpenInputFile(cfile, flag) ){
      gerror(stderr, "can't open input file: %s\n", cfile->fname);
    }
    /* make sure stdin was not specified for one of these input files */
    FunInfoGet(cfile->fun, FUN_GIO, &gio, 0);
    if( gio->type & GIO_STREAM ){
      gerror(stderr, "a stream can only be used for the first input file\n");
    }
    /* make sure we have the same column structure as the base file */
    if( ifiles->header->table->tfields != cfile->header->table->tfields ){
      gerror(stderr, 
	     "%s and %s have a different number of columns (%d, %d)\n",
	     ifiles->fname, cfile->fname,
	     ifiles->header->table->tfields, cfile->header->table->tfields);
    }
    for(i=0; i<cfile->header->table->tfields; i++){
      if( strcasecmp(ifiles->header->table->col[i].name, 
		     cfile->header->table->col[i].name) ){
	gerror(stderr, 
	       "column names for %s and %s differ in column #%d (%s, %s)\n",
	       ifiles->fname, cfile->fname,
	       i+1,
	       ifiles->header->table->col[i].name, 
	       cfile->header->table->col[i].name);
      }
      else if( (ifiles->header->table->col[i].type!= 
		cfile->header->table->col[i].type)     ||
	       (ifiles->header->table->col[i].n != 
		cfile->header->table->col[i].n)        ){
	gerror(stderr, 
	       "data types for %s and %s differ in column '%s' (%d%c, %d%c)\n",
	       ifiles->fname,
	       cfile->fname,
	       ifiles->header->table->col[i].name,
	       ifiles->header->table->col[i].n,
	       ifiles->header->table->col[i].type, 
	       cfile->header->table->col[i].n,
	       cfile->header->table->col[i].type);
      }
    }
    ev = &tev;
    /* this is the smallest x,y we can have */
    ev->x = cfile->tlmin[0];
    ev->y = cfile->tlmin[1];
    ConvertEvents(cfile, ofile, ifiles, ev, 1, flag);
    if( ev->x < tlmin0 ){
      tlmin0 = (int)(ev->x-1);
      FunParamPutd(ofun, "TLMIN", cfile->bin[0]+1, tlmin0, 7, 
		   "Min. axis value", 1);
    }
    if( ev->y < tlmin1 ){
      tlmin1 = (int)(ev->y-1);
      FunParamPutd(ofun, "TLMIN", cfile->bin[1]+1, tlmin1, 7, 
		   "Min. axis value", 1);
    }
    /* this is the largest x,y we can have */
    ev->x = cfile->tlmax[0];
    ev->y = cfile->tlmax[1];
    ConvertEvents(cfile, ofile, ifiles, ev, 1, flag);
    if( ev->x > tlmax0 ){
      tlmax0 = (int)(ev->x+1);
      FunParamPutd(ofun, "TLMAX", cfile->bin[0]+1, tlmax0, 7,
		   "Max. axis value", 1);
    }
    if( ev->y > tlmax1 ){
      tlmax1 = (int)(ev->y+1);
      FunParamPutd(ofun, "TLMAX", cfile->bin[1]+1, tlmax1, 7,
		   "Max. axis value", 1);
    }
    /* we have to close the file now so as not to run out of descriptors */
    FunClose(cfile->fun);
  }

  /* in some cases, we an avoid transfering anything into user space,
     by not calling FunColumnSelect() on the input file, but we must
     explicitly make a select call to output the raw data */
  if( !filemode && !wcsmode ){
    FunColumnSelect(ofun, 0, "merge=update", NULL);
    /* flag that we do not convert data on input or output */
    mode = "convert=false";
  }

  /* now we can process the events in all of the input files */
  for(cfile=ifiles; cfile; cfile=cfile->next){
    /* for all but the base file, re-open input file */
    if( cfile != ifiles ){
      if( !OpenInputFile(cfile, flag) ){
	gerror(stderr, "can't open input file: %s\n", cfile->fname);
      }
    }
    /* select columns for processing */
    if( filemode || wcsmode ){
      FunColumnSelect(cfile->fun, sizeof(EvRec), "merge=update",
		      "$X",       "D", wcsmode,  FUN_OFFSET(Ev, x),
		      "$Y",       "D", wcsmode,  FUN_OFFSET(Ev, y),
		      onames[0],  "D", savemode, FUN_OFFSET(Ev, ox),
		      onames[1],  "D", savemode, FUN_OFFSET(Ev, oy),
		      colname,    "I", filemode, FUN_OFFSET(Ev, nfile),
		      NULL);
    }
    /* make the new extension the reference handle for the output file */
    FunInfoPut(ofile->fun, FUN_IFUN0, &cfile->fun, 0);
    /* extract events from this file */
    while( (ebuf = FunTableRowGet(cfile->fun, NULL, maxrow, mode, &nrow)) ){
      /* translate events, if necessary */
      ConvertEvents(cfile, ofile, ifiles, ebuf, nrow, flag);
      /* write to output file */
      if( (put=FunTableRowPut(ofile->fun, ebuf, nrow, 0, mode)) != nrow ){
	gerror(stderr, "expected to write %d events; only wrote %d\n",
	       nrow, put);
      }
      xfree(ebuf);
    }
    /* close all files but the first */
    if( cfile != ifiles ) FunClose(cfile->fun);
  }

  /* close output before input, so end flush is done automatically  */
  FunClose(ofun);
  FreeInputFile(ofile);

  /* close base file */
  FunClose(ifiles->fun);

  /* clean up */
  for(cfile=ifiles; cfile;){
    tfile = cfile->next;
    FreeInputFile(cfile);
    cfile = tfile;
  }
  return(0);
}
