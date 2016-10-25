#include <xos.h>
#include "fitsy.h"

/*
 *
 * ft_tableheader -- read a string that details the structure
 * of the event record and generate a fitsy table header
 *
 * The structure of the string is:
 *
 * [name]:[n][type]:[(lodim:)hidim]
 *
 * Data types follow standard conventions for FITS binary tables, but include
 * two extra unsigned types ('U' and 'V'):
 *
 * B -- unsigned 8-bit char
 * I -- signed 16-bit int
 * J -- signed 32-bit int
 * K -- signed 64-bit int
 * E -- 32-bit float
 * D -- 64-bit float
 * U -- unsigned 16-bit int
 * V -- unsigned 32-bit int
 * 
 * An optional integer value n can be prefixed to the type to indicate
 * that the element actually is an array of n values.
 * 
 * Furthermore, image dimensions are attached to the event specification
 * in order to tell FITS how to bin the events into an image. They
 * follow the conventions for the FITS TLMIN, TLMAX, and TALEN
 * keywords. If the low image dimension is not specified, it defaults to
 * 1.  Thus:
 *
 * RAWX:J:1:100
 * RAWX:J:100
 *
 * both specify that the dimension of this column runs from 1 to 100.
 * Note that it is required that all padding be specified in the record
 * definition.
 *
 *
 * For example, suppose a FITS binary table has the following set of column
 * definitions:
 * 
 *
 * TTYPE1  = 'X                 ' / Label for field
 * TFORM1  = '1I                ' / Data type for field
 * TLMIN1  =                    1 / Min. axis value
 * TLMAX1  =                   10 / Max. axis value
 * TTYPE2  = 'Y                 ' / Label for field
 * TFORM2  = '1I                ' / Data type for field
 * TLMIN2  =                    2 / Min. axis value
 * TLMAX2  =                   11 / Max. axis value
 * TTYPE3  = 'PHA               ' / Label for field
 * TFORM3  = '1I                ' / Data type for field
 * TTYPE4  = 'PI                ' / Label for field
 * TFORM4  = '1J                ' / Data type for field
 * TTYPE5  = 'TIME              ' / Label for field
 * TFORM5  = '1D                ' / Data type for field 
 * TTYPE6  = 'DX                ' / Label for field
 * TFORM6  = '1E                ' / Data type for field
 * TLMIN6  =                    1 / Min. axis value
 * TLMAX6  =                   10 / Max. axis value
 * TTYPE7  = 'DY                ' / Label for field
 * TFORM7  = '1E                ' / Data type for field
 * TLMIN7  =                    3 / Min. axis value
 * TLMAX7  =                   12 / Max. axis value
 *
 * An raw event file containing these same data would have the event
 * specification:
 *
 * X:I:10,Y:I:2:11,PHA:I,PI:J,TIME:D,DX:E:10,DY:E:3:12
 *
 */
FITSHead ft_tableheader(char *eventdef, int nev)
{
  FITSHead header;
  char type[SZ_LINE];
  char name[SZ_LINE];
  char dim[SZ_LINE];
  char *neventdef = NULL;
  char *nevdef;
  char *d, *n, *s, *t, u[2];
  char **names, **types, **dims;
  char *extname="EVENTS";
  int extver=1;
  int cols, width, got;
  int i, r;
  int *lodims, *hidims, *widths;

  /* init the fitsy header */
  header = ft_headinit(NULL, 0);

  /* get rid of enclosing parens */
  if(*eventdef == '('){
    NewString(neventdef, eventdef+1);
    i = strlen(neventdef);
    if( neventdef[i-1] == ')' )
      neventdef[i-1] = '\0';
  }
  else{
    NewString(neventdef, eventdef);
  }
  /* we only deal with upper case in FITS */
  for(nevdef=neventdef; *nevdef; nevdef++){
    if( islower((int)*nevdef) )
      *nevdef = toupper(*nevdef);
  }

  /* first count the number of columns we have specified,
     separated by ',' */
  for(s=neventdef, cols=1; *s; s++){
    if( *s == ',' )
      cols++;
  }

  /* allocate string space for each column */
  names = (char **)calloc(cols, sizeof(char *));
  types = (char **)calloc(cols, sizeof(char *));
  dims = (char **)calloc(cols, sizeof(char *));
  lodims = (int *)calloc(cols, sizeof(int));
  hidims = (int *)calloc(cols, sizeof(int));
  widths = (int *)calloc(cols, sizeof(int));

  /* process the string and gather up the information */
  for(s=neventdef, width=0, got=0; *s; ){
    /* get name */
    n=name;
    *n = '\0';
    while( *s && (*s != ':') )
      *n++ = *s++;
    *n = '\0';
    NewString(names[got], name);
    /* skip delim */
    if( *s == ':' )
      s++;
    if( *s == '\0' )
      break;

    /* get type, which might be preceded by a count */
    r = strtol(s, &t, 10);
    if( s != t )
      s = t;
    else
      r = 1;
    /* cast unsupported unsigned type, if necessary */
    u[0] = *s;
    u[1] = '\0';
    snprintf(type, SZ_LINE, "%d%c", r, *u);
    NewString(types[got], type);
    width += ft_sizeof(*u)*r;
    widths[got] = ft_sizeof(*u);
    /* bump past type character */
    s++;

    /* get optional image dimension */
    if( *s == ':' ){
      /* skip past ':' */
      s++;
      *dim = '\0';
      for( d=dim; *s && (*s != ',') && (*s != ':'); )
	*d++ = *s++;
      *d = '\0';
      NewString(dims[got], dim);
      if( *s == ':' ){
	lodims[got] = atoi(dims[got]);
	s++;
	*dim = '\0';
	for( d=dim; *s && (*s != ','); )
	  *d++ = *s++;
	*d = '\0';
	hidims[got] = atoi(dim);
      }
      else{
	lodims[got] = 0;
	hidims[got] = atoi(dims[got])-1;
      }
      if( *s == ',' )
	s++;
    }
    else
      dims[got] = NULL;

    /* bump past the comma */
    if( *s == ',' )
      s++;
    /* done with another header value */
    got++;
  }

  /* fake the header to a binary table */
  ft_headsets(header, "XTENSION", 0, "BINTABLE", "FITS BINARY TABLE", 1);
  ft_headseti(header, "BITPIX", 0, 8, "Binary data", 1);
  ft_headseti(header, "NAXIS", 0, 2, "Table is a matrix", 1);
  ft_headseti(header, "NAXIS", 1, width, "Width of table in bytes", 1);
  ft_headseti(header, "NAXIS", 2, nev, "Number of entries in table", 1);
  ft_headseti(header, "PCOUNT", 0, 0, "Random parameter count", 1);
  ft_headseti(header, "GCOUNT", 0, 1, "Group count", 1);
  ft_headseti(header, "TFIELDS", 0, got, "Number of fields in each row", 1);
  ft_headsets(header, "EXTNAME", 0, extname, "Table name", 1);
  ft_headseti(header, "EXTVER", 0, extver, "Version number of table", 1);
  /* info for each column */
  for(i=0; i<got; i++){
    ft_headsets(header, "TFORM", i+1, types[i], "Data type for field", 1);
    ft_headsets(header, "TTYPE", i+1, names[i], "Label for field", 1);
    if( dims[i] != NULL ){
      ft_headseti(header, "TLMIN", i+1, lodims[i], "Min. axis value", 1);
      ft_headseti(header, "TLMAX", i+1, hidims[i], "Max. axis value", 1);
    }
  }

  /* now turn this into a table header */
  ft_syncdata(header);

  /* free up the column strings */
  for(i=0; i<cols; i++){
    if( names[i] ) free(names[i]);
    if( types[i] ) free(types[i]);
    if( dims[i] )  free(dims[i]);
  }
  if( names )     free(names);
  if( types )     free(types);
  if( dims )      free(dims);
  if( lodims )    free(lodims);
  if( hidims )    free(hidims);
  if( widths )    free(widths);
  if( neventdef ) free(neventdef);

  return header;
}
