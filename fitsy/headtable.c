/* Fitsy FITS routines to load and store #FITSTable structures.
 */

#include <xos.h>
#include "fitsy.h"

char * ft_formattyp(c)
	char	c;
{
	switch ( c ) {
	 case 'L':	return  "c";
	 case 'X':	return  "x";
	 case 'B':	return  "ud";
	 case 'I':	return  "d";
	 case 'J':	return  "d";
	 case 'K':	return  "lld";
	 case 'U':	return  "ud";
	 case 'V':	return  "ud";
	 case 'F':	return  "f";
	 case 'E':	return  "f";
	 case 'D':	return  "f";
	 case 'A':	return  "s";
	 case 'C':	return  "f";
	 case 'M':	return  "f";
	 case 'P':	return  "x";
	 case 'G':	return  "f";
	}

	/* probably won't work, but a NULL will segv */
	return "";
}

char *ft_format(col)
	FITSTCol	col;
{
		char format[80];

		char	t = col->type;
		int	w = col->width;
		int	p = col->prec;

	if ( col->disp != NULL ) {
	    sscanf(col->disp, " %c %d.%d", &t, &w, &p);
	}

	snprintf(format, 80, "%%%d.%d%s", w, p, ft_formattyp(t));
	return strdup(format);
}

int ft_sizeof(c)
	int	c;
{
	switch ( c ) {
	 case 'P':	return  8;
	 case 'U':	return  2;
	 case 'I':	return  2;
	 case 'V':	return  4;
	 case 'J':	return  4;
	 case 'K':	return  8;
	 case 'F':	return  4;
	 case 'E':	return  4;
	 case 'D':	return  8;
	 case 'A':	return  1;
	 case 'L':	return  1;
	 case 'X':	return  1;
	 case 'B':	return  1;
	 case 'C':	return  8;
	 case 'M':	return 16;

	 case   8:	return 1;
	 case  16:	return 2;
	 case  32:	return 4;
	 case  64:	return 8;

	 case  FT_UNSIGNED |  8:	return 1;
	 case  FT_UNSIGNED | 16:	return 2;
	 case  FT_UNSIGNED | 32:	return 4;

	 case -32:	return 4;
	 case -64:	return 8;

	}

	return 0;
}


/* Allocate and load a #FITSTable data structure.
 */
FITSTable ft_tableloadhead(fits)
	FITSHead	fits;
{
	    FITSTable	 table = NULL;
	    FITSCard	 card;
	    char		*xtension;
	    int		 i;

	    int		 offset = 0;

    if ( (xtension = ft_headget(fits, "XTENSION", 0, &card)) != NULL
      && ( !strcmp(xtension, "TABLE")
	|| !strcmp(xtension, "BINTABLE")
	|| !strcmp(xtension, "A3DTABLE")
	|| !strcmp(xtension, "3DTABLE") ) ) {
	Malloc(table, sizeof(struct _FITSTable));

	table->tabtype = !strcmp(xtension, "TABLE");
	if ( !(table->tfields = ft_headgeti(fits, "TFIELDS", 0, 0, &card)) ) {
	    (void)Free(table);
	    return NULL;
	}
	
	ft_headindex(fits);

	Malloc(table->col, sizeof(struct _FITSTCol) * table->tfields);

	for ( i = 1; i <= table->tfields; i++ ) {
		    FITSCard	 card;
		    char		*tform;
		    int		 r = 0, w = 0, p = 0;
		    char		 t = ' ', h = ' ';
		    char		 format[64];

	    table->col[i-1].name   = ft_headgets(fits, "TTYPE", i, NULL, &card);
	    table->col[i-1].unit   = ft_headgets(fits, "TUNIT", i, NULL, &card);
	    table->col[i-1].scale  = ft_headgetr(fits, "TSCAL", i, 1.0,  &card);
	    table->col[i-1].has_scale = card != NULL;
	    table->col[i-1].zero   = ft_headgetr(fits, "TZERO", i, 0.0,  &card);
	    table->col[i-1].has_zero  = card != NULL;
	    table->col[i-1].scaled = table->col[i-1].has_zero || table->col[i-1].has_scale;
	    table->col[i-1].ablank = ft_headgets(fits, "TNULL", i, NULL, &card);
	    table->col[i-1].has_blank = card != NULL;
	    tform = ft_headget(fits, "TFORM", i, &card);
	    /* if we have no TFORM, its an illegal binary table */
	    if( !card ){
	      table->tfields = i;
	      ft_tablefree(table);
	      return NULL;
	    }

	    /* hacked support for variable length arrays. we ignore the data
	       and just process the 2 64-bit pointers */
	    if ( sscanf(tform, "%d P %c ( %d )", &r, &t, &w) == 3 ) {
	      /* save values for variable length array */
	      table->col[i-1].vla = strdup(tform);
	      table->col[i-1].vla_type = t;
	      table->col[i-1].vla_max = w;
	      /* set up vla pointer values in the table */
	      r = 2;
	      t = 'J';
	      w = 0;
	    }
	    else if ( sscanf(tform, "P %c ( %d )", &t, &w) == 2 ) {
	      /* save values for variable length array */
	      table->col[i-1].vla = strdup(tform);
	      table->col[i-1].vla_type = t;
	      table->col[i-1].vla_max = w;
	      /* set up vla pointer values in the table */
	      r = 2;
	      t = 'J';
	      w = 0;
	    }
	    else if ( sscanf(tform, "%d Q %c ( %d )", &r, &t, &w) == 3 ) {
	      /* save values for variable length array */
	      table->col[i-1].vla = strdup(tform);
	      table->col[i-1].vla_type = t;
	      table->col[i-1].vla_max = w;
	      /* set up vla pointer values in the table */
	      r = 2;
	      t = 'K';
	      w = 0;
	    }
	    else if ( sscanf(tform, "Q %c ( %d )", &t, &w) == 2 ) {
	      /* save values for variable length array */
	      table->col[i-1].vla = strdup(tform);
	      table->col[i-1].vla_type = t;
	      table->col[i-1].vla_max = w;
	      /* set up vla pointer values in the table */
	      r = 2;
	      t = 'K';
	      w = 0;
	    }
	    else{
	      if ( !sscanf(tform, " %d %c %d.%d", &r, &t, &w, &p) ) {
		r = 1;
		sscanf(tform, " %c %d.%d", &t, &w, &p);
	      }
	    }
	    if ( table->tabtype ) {	/* ASCII TABLE  */
		table->col[i-1].format = strdup(format);

		table->col[i-1].type   = 'A';
		table->col[i-1].n      = 1;
		table->col[i-1].size   = w;
		table->col[i-1].offset = ft_headgeti(fits, "TBCOL", i, 0, &card)
							 - 1;
		table->col[i-1].heap   = 0;
		table->col[i-1].prec   = p;

	    } else {		/* BINTABLE	*/

		switch ( t ) {
		 case 'P':
		    table->col[i-1].heap = 1;
		    table->col[i-1].type = h;
		    table->col[i-1].n    = p;
		    table->col[i-1].size = ft_sizeof(table->col[i-1].type);
		    table->col[i-1].width= table->col[i-1].size 
					 * table->col[i-1].n;
		    break;
		 case 'A':
		    p = 1;
	    	    if ( !sscanf(tform, " %d %c%d", &r, &t, &p) ) {
			r = 1;
		        sscanf(tform, " %c%d", &t, &p);
		    }

		    table->col[i-1].heap = 0;
		    table->col[i-1].type = t;
		    table->col[i-1].n    = r;
		    table->col[i-1].size = 1;
		    table->col[i-1].width= table->col[i-1].size 
					 * table->col[i-1].n;
		    break;
		case 'X':
		    table->col[i-1].heap = 0;
		    table->col[i-1].type = t;
		    table->col[i-1].n    = r;
		    table->col[i-1].size = ft_sizeof(table->col[i-1].type);
		    table->col[i-1].width= 
		      ((table->col[i-1].size * table->col[i-1].n) + 7) / 8;
		    table->col[i-1].prec   = p;
		    break;
		 default:
		    table->col[i-1].heap = 0;
		    table->col[i-1].type = t;
		    table->col[i-1].n    = r;
		    table->col[i-1].size = ft_sizeof(table->col[i-1].type);
		    table->col[i-1].width= table->col[i-1].size 
					 * table->col[i-1].n;
		    table->col[i-1].prec   = p;
		    break;
		}

		table->col[i-1].offset = offset;

		if ( table->col[i-1].heap )
		    offset += 8;
		else
		    offset += table->col[i-1].width;
		
		if ( table->col[i-1].ablank ) 
		    table->col[i-1].dblank =
			    strtod(table->col[i-1].ablank, NULL);

		table->col[i-1].disp   = ft_headgets(fits, "TDISP", i, NULL, &card);
		table->col[i-1].format = ft_format(&table->col[i-1]);
	    }
	}
	if ( table->tabtype ) {	/* ASCII TABLE  */
	    for ( i = 1; i < table->tfields; i++ ) {
		table->col[i-1].width  = table->col[i].offset - table->col[i-1].offset;
	    }
	    table->col[i-1].width  = fits->basic->naxis[0] - table->col[i-1].offset;
	}
	    
    }

    return table;
}

/* Store a #FITSTable structure in a FITS header.
 */
void	ft_tablestorhead(fits, table)
	FITSHead	fits;
	FITSTable	table;
{
  ft_basicstorhead(fits, fits->basic);
}

/* Free a #FITSTable structure.
 */
void ft_tablefree(table)
	FITSTable table;
{
		int	i;

	for ( i = 1; i <= table->tfields; i++ ) {
	    if ( table->col[i-1].name )   free(table->col[i-1].name);
	    if ( table->col[i-1].unit )   free(table->col[i-1].unit);
	    if ( table->col[i-1].disp )   free(table->col[i-1].disp);
	    if ( table->col[i-1].format ) free(table->col[i-1].format);
	    if ( table->col[i-1].vla )    free(table->col[i-1].vla);
	    if ( table->col[i-1].ablank ) free(table->col[i-1].ablank);
	}

	(void)Free(table->col);
	(void)Free(table);
}
