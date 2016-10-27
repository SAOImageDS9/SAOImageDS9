/* Fitsy FITS routines to read and write FITS headers.
 */

#include <xos.h>
#include "fitsy.h"

#define MAX_COPY 1024
static int ncopy_file=0;
static File copy_files[MAX_COPY];

static int GetWordType(fptr, tbuf, cflag)
     char **fptr;
     char *tbuf;
     int *cflag;
{
  int alpha, digit, other, got;
  char *f, *t;

  /* start out clean */
  *tbuf = '\0';

  /* gather up characters until we have a delim */
  for(got=0, alpha=0, digit=0, other=0, f=*fptr, *tbuf='\0', t=tbuf;
      (*f!='\0') && (*f!=',') && (*f!=']');
      got++){
    if( isdigit((unsigned int)*f) ){
      digit++;
      *t++ = *f++;
    }
    else if( isalpha((unsigned int)*f) || (*f == '_') || (*f == '$') ){
      alpha++;
      *t++ = *f++;
    }
    /* special case: extension or index ending with '+' means copy extension */
    else if( (*f=='+') && ((*(f+1)=='\0') || (*(f+1)==',') || (*(f+1)==']')) ){
      /* don't add '+' to output, but inc past it in input */
      f++;
      /* we got the 'copy extension' flag */
      *cflag = 1;
    }
    else{
      /* - might be part of an extension */
      if( (*f=='-') && got && !other )
	alpha++;
      else
	other++;
      *t++ = *f++;
    }
  }
  /* null terminate working string */
  *t = '\0';

  /* update pointer */
  *fptr = f;

  /* determine what sort of beast we have and return */
  if( got == 0 )
    return(0);
  else if( other >0 )
    return(3);
  else if( (digit>0) && (alpha==0) )
    return(2);
  else 
    return(1);
}


/*
 *
 * ft_parsefilename -- break a string into name, extension, index, tail
 * The possibilities are:
 *
 * name[extn], name[extn,index], name[index]
 * name[extn,tail], name[extn,index,tail], name[index,tail]
 *
 * where:
 * extn is composed of alphanumerics, index is numeric, tail is anything
 * and commas are separators.
 *
 * returns 1 if 'copy flag' was set (+extn, extn+, +index, index+), else 0
 *
 *
 */
int ft_parsefilename(filename, name, extn, nmaxlen, indx, tail, tmaxlen)
     char *filename;
     char *name;
     char *extn;
     int nmaxlen;
     int *indx;
     char *tail;
     int tmaxlen;
{
  char *f, *t;
  char *tbuf, *tbuf2;
  int i, len;
  int got;
  int cflag;

  /* start out clean */
  *extn = '\0';
  *indx = -1;
  *tail = '\0';
  cflag = 0;

  /* make sure we have something to work with */
  if( (filename == NULL) || (*filename == '\0') )
    return 0;

  /* handle pipe: specification specially */
  if( !strncasecmp(filename, "pipe:", 5) ){
    strncpy(name, filename, nmaxlen);
    return 0;
  }

  /* basic work buffers */
  tbuf = (char *)malloc(strlen(filename)+1);
  tbuf2 = (char *)malloc(strlen(filename)+1);

  /* this will be our pointer into the filename buffer */
  f = filename;

  /* maxlen generally is 1 more than we can handle */
  nmaxlen--;
  tmaxlen--;

  /* gather up the name */
  for(*tbuf='\0', t=tbuf; (*f!='\0') && (*f!='[') && (*f!=','); )
    *t++ = *f++;
  /* null terminate working string */
  *t = '\0';
  /* copy max from the work buffer to the name buffer */
  strncpy(name, tbuf, nmaxlen);
  name[nmaxlen] = '\0';
  /* check for done */
  if( *f == '\0' )
    goto cleanup;
  /* or skip past '[' delim following the name */
  else
    f++;

  /* get token and process type */
  switch(GetWordType(&f, tbuf, &cflag)){
  /* EOF */
  case 0:
    break;
  /* extn */
  case 1:
    strcpy(extn, tbuf);
    *tbuf = '\0';
    if( *f == ',' ){
      f++;
      switch(GetWordType(&f, tbuf, &cflag)){
      case 2:
	*indx = strtol(tbuf, NULL, 10);
	*tbuf = '\0';
	if( *f == ',' )
	  f++;
	break;
      default:
	break;
      }
    }
    break;
  /* index */
  case 2:
    *indx = strtol(tbuf, NULL, 10);
    *tbuf = '\0';
    if( *f == ',' )
      f++;
    break;
  /* tail */
  case 3:
    break;
  }

  /* at this point, we are processing tail */
  strcpy(tbuf2, "[");
  if( *tbuf != '\0' )
    strcat(tbuf2, tbuf);
  if( *f != '\0' )
    strcat(tbuf2, f);
  strncpy(tail, tbuf2, tmaxlen);
  tail[tmaxlen] = '\0';
  /* get rid of any empty brackets */
  len = strlen(tail);
  for(i=0; i<len; i++){
    if( (tail[i] == '[') && (i+2 < len) && (tail[i+1] == ']') ){
      strcpy(tbuf, &(tail[i+2]));
      strcpy(&(tail[i]), tbuf);
    }
  }
  /* but don't bother passing back completely null brackets */
  len = strlen(tail);
  for(got=0, i=0; i<len; i++){
    if( (tail[i] != '[') && (tail[i] != ']') && (tail[i] != ' ') ){
      got = 1;
      break;
    }
  }
  if( !got ) *tail = '\0';

  /* clean up */
cleanup:
  if( tbuf != NULL )
    free(tbuf);
  if( tbuf2 != NULL )
    free(tbuf2);
  return cflag;
}

/*
 *
 * ft_cfile -- change the static copy_file handle
 * This is used to set/unset the copy handle for when we open a fits file
 * (There is no other good place to store this copy handle!)
 * returns: old handle
 *
 */
int ft_cfile(cfile)
     File cfile;
{
  if( cfile ){
    if( ncopy_file >= MAX_COPY ) return -1;
    copy_files[ncopy_file++] = cfile;
  }
  else{
    ncopy_file = 0;
  }
  return ncopy_file;
}

/* Read a FITS header from the named file -- primitive of ft_fitsheadopen()
 */
File ft_fitsheadread(file, filename, header, mode, iline, ifd)
     File         file;
     char 	  *filename;	/* FITS image file name.		*/
     FITSHead 	  *header;
     char	  *mode;
     char         iline[FT_CARDLEN];
     File	  *ifd;
{
  FITSHead  prim = NULL;
  FITSHead  head = NULL;
  char	name[FT_FILENAME];
  char	extn[FT_FILENAME];
  char	tail[FT_FILENAME];
  char  tbuf[FT_CARDLEN];
  char	*e;
  char	*i;
  char  *tptr;
  int	indx = 0;
  int   len = FT_FILENAME;
  int   tlen;
  int   n;
  int   nc;
  static int vlaerr=0;

  /* if the user called the wrong routine, fix it */
  if( !file ) return NULL;

  /* initialize return values */
  if( iline ) iline[0] = '\0';
  if( ifd )  *ifd = file;

  /* parse filename into extension, index, and tail */
  ft_parsefilename(filename, name, extn, len, &indx, tail, len);

  /* make sure this is a FITS file by looking at the first card */
  tptr = (iline ? iline : tbuf);
  if( ( !ftGets(file, tptr, 10) ) ||
      (strncmp(tptr, "SIMPLE  =", 9) && strncmp(tptr, "XTENSION=", 9)) ){
    /* pass back opened file so someone else can make an attempt */
    if( !ifd ) ftClose(file);
    return NULL;
  }
  tlen = strlen(tptr);
  if( ftRead(file, &tptr[tlen], FT_CARDLEN-tlen, 1) != 1 ){
    /* pass back opened file so someone else can make an attempt */
    if( !ifd ) ftClose(file);
    return NULL;
  }

  /* don't return anything anymore, both ifd and line were used already */
  if( iline ){
    memcpy(tbuf, iline, FT_CARDLEN);
    iline[0] = '\0';
  }
  if( ifd ) *ifd = NULL;

  /* read primary header */
  if ( (prim = ft_headread0(file, tbuf, FT_CARDLEN)) == NULL ){
    ftClose(file);
    return NULL;
  }

  /* 	Only look in the environment if the primary header
	has no data and the user hasn't specified any thing
	in the brackets.
	*/
  if ( ft_databytes(prim) == 0 && !*extn && indx == -1 ) {
    if ( (e = (char *)getenv("FITS_EXTNAME")) ) {
      strncpy(extn, e, len);
      extn[len-1] = '\0';
    }
    if ( (i = (char *)getenv("FITS_EXTNUM")) ) {
      indx = atoi(i);
    }
  }
	
  head = prim;
  if ( *extn ) {	/* Extension and possible an index	*/
    do {
      char *ext=NULL;
      char *extcopy=(char *)strdup(extn);
      for(ext=(char *)strtok(extcopy," :;,");
	  ext!=NULL;
	  ext=(char *)strtok(NULL," :;,")){
	/* look for extname, then hduname, along with indx */
	if ( ((ft_name(head) && *ft_name(head) && 
	      !strcasecmp(ext, ft_name(head)))           ||
	      (ft_hduname(head) && *ft_hduname(head) && 
	      !strcasecmp(ext, ft_hduname(head))))       &&
	     (indx == -1 || indx == ft_extn(head)) )
	  break;
      }
      if( extcopy )
	free(extcopy);
      /* if we matched an extension, we are done */
      if( ext )
	break;
      
      /* copy header, if necessary */
      if( ncopy_file ){
	for(nc=0; nc<ncopy_file; nc++)
	  ft_headwrite(copy_files[nc], head);
      }
      /* skip data, copying header if necessary */
      ft_dataskip(file, head, copy_files, ncopy_file);

      if ( head != prim ) ft_headfree(head, 1);
    } while ( (head = ft_headread(file)) );

    if ( !head ) {
      ft_headfree(prim, 1);
      ftClose(file);
      return NULL;
    }
  } else if ( indx > 0 ) {	/* Extension index, not == 0		*/
    int	i;

    /* copy header, if necessary */
    if( ncopy_file ){
      for(nc=0; nc<ncopy_file; nc++)
	ft_headwrite(copy_files[nc], head);
    }
    ft_dataskip(file, prim, copy_files, ncopy_file);
    
    for ( i = 1; i <= indx; i++ ) {
      if ( (head = ft_headread(file)) == NULL ) {
	ft_headfree(prim, 1);
	ftClose(file);
	return NULL;
      }
      if( i != indx ){
	/* copy header, if necessary */
	if( ncopy_file ){
	  for(nc=0; nc<ncopy_file; nc++)
	    ft_headwrite(copy_files[nc], head);
	}
	/* skip data, copying header if necessary */
	ft_dataskip(file, head, copy_files, ncopy_file);
	ft_headfree(head, 1);
      }
    }
  } 

  if ( head != prim ){
    ft_primlink(prim, head);	/* Link the primary to the header */
    /* this primary header only exists as part of head */
    prim->rfcount = 1;
  }

  /* if this is a table and contains a variable length array, issue wanring */
  if( head && head->table && !vlaerr ){
    for ( n = 1; n <= head->table->tfields; n++ ) {
      if ( head->table->col[n-1].vla ){
	fprintf(stderr,
	"WARNING: The 'variable length array' is not part of the FITS Bintable standard. ");
	fprintf(stderr,
	"Funtools will pass it along, but will not process it.\n"); 
	vlaerr++;
	break;
      }
    }
  }

  if( header != NULL ){
    *header = head;
  }

  return file;
}

/* Read a FITS header from the named file.
 */
File ft_fitsheadopen(filename, header, tail, len, mode)
     char 	  *filename;	/* FITS image file name.		*/
     FITSHead 	  *header;
     char	  *tail;
     int 	  len;
     char	  *mode;
{
  return ft_fitsheadopenfd(filename, header, tail, len, mode, NULL, 
			   NULL, NULL);
}

/* Read a FITS header from the named file.
 */
File ft_fitsheadopenfd(filename, header, tail, len, mode, file, iline, ifd)
     char 	  *filename;	/* FITS image file name.		*/
     FITSHead 	  *header;
     char	  *tail;
     int 	  len;
     char	  *mode;
     File	  file;
     char         iline[FT_CARDLEN];
     File	  *ifd;
{
  char    *xmode;
  char	name[FT_FILENAME];
  char	extn[FT_FILENAME];
  int	indx = 0;
  int     cflag;

  /* initialize return values */
  if( iline ) iline[0] = '\0';
  if( ifd )  *ifd = NULL;

  /* parse filename into extension, index, and tail */
  cflag = ft_parsefilename(filename, name, extn, FT_FILENAME, &indx,
			   tail, len);

  /* set mode or use 'r' as default */
  if( mode ){
    xmode = mode;
  }
  else
    xmode = "r";

  /* see if 'CopyExtension' mode was explicitly set in the mode */
  if( strchr(xmode, 'C') )
    cflag = 1;
  /* else see if it was set in the section and is permitted by the mode */
  else if( strchr(xmode, 'c') && cflag )
    cflag = 1;
  /* else we do not copy */
  else
    cflag = 0;

  if( !file ){
    if ( (file = ftOpen(name, xmode))   == NULL )
      return NULL;
  }

  /* if the "copy extension" flag was set, we can exit here */
  if( cflag ){
    /* flag header was not created */
    if( header )
      *header = NULL;
    return file;
  }

  /* now read the file up to the specified extension */
  file = ft_fitsheadread(file, filename, header, xmode, iline, ifd);

  /* save filename */
  if( file && header && *header && *name ){
    if( (*header)->filename ) (void)Free((*header)->filename);
    (*header)->filename = strdup(name);
  }

  return file;
}
