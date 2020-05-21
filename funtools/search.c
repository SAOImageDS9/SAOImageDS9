/* search.c
 */
/* Starbase Data Tables	- An Ascii Database for UNIX

   copyright 1991, 1993, 1995, 1999, 2003 John B. Roll jr.
 */

extern int N;

#include <math.h>
#include <ctype.h>
#include <except.h>

#include <table.h> 
#include <tablesearch.h> 
#include <filelist.h>

double	 slaDsep();
void	 radecbox();

exception ex_search = "search";

typedef void *(*vvector)();

TableSearch table_search();
TableSearch table_searchsetup();
char *table_searchcheckindexpattern();
Range *table_srange2();

typedef struct Axis {
    	int	 type;
    	int	 once;
	int	 c1;
	int	 c2;
	char	*value;
	double	 lo;
	double	 hi;
	double	 wp;
	Range	*R;
	int	method;
	TableSearch search;
	struct Axis *pair;
} Axis;

char *table_searchcheckindexpattern();


void table_searchpairs(table, axes, naxes, filecache)
            char    	 *table;
	    Axis	**axes;
	    int		 naxes;
	    void	 *filecache;
{
    	char	*here;
    	char	 directo[1024];
    	int	i, j;

	TableSearch search = table_searchsetup(table);
	int		Numeric;
	    int		Method;

    strcpy(directo, table);
    if ( (here = strrchr(directo, '/')) ) {
	*here = '\0';
	here++;
    } else {
	strcpy(directo, ".");
	here = table;
    }

    for ( i = 0; i < naxes; i++ ) {
    for ( j = 0; j < naxes; j++ ) {
		char	*name;
		char	*col1;
		char	*col2;
	    	filelist 	list;
		int	len;
		char	pattern[1024];

	if ( i == j ) 			continue;
	if ( axes[i]->search != NULL ) 	continue;
	if ( axes[j]->search != NULL ) 	continue;

	col1 = table_colnam(search->THead, axes[i]->c2);
	col2 = table_colnam(search->THead, axes[j]->c2);

	sprintf(pattern, "%s.%s.%s[-.:][sbhir]", here, col1, col2);

	if ( (name = table_searchcheckindexpattern(search, directo, pattern)) ) {
	    table_searchsetupindex(search, name, col1);
	    table_searchsetupcache(search, NULL);

	    axes[i]->search          = search;
	    axes[j]->search          = search;
	    axes[i]->search->Index   = name;
            axes[i]->search->Tcolumn = table_colnum(search->THead, col1);
            axes[i]->search->Indxcol = table_colnum(search->IHead, col1);
            axes[i]->search->Tcolum2 = table_colnum(search->THead, col2);
            axes[i]->search->Indxco2 = table_colnum(search->IHead, col2);
	    axes[i]->type    	     = 'S';
	    axes[j]->type    	     = '4';
	    axes[j]->pair	     = axes[i];

	    search = table_searchsetup(table);	/* Leak one search descriptor */
	}
    } }
}
	

typedef struct CsysDef  {
	void	(*setup)();
	int	(*filte)();
	int	 nrange;
	double	*range;
	int	 naxes;
	Axis	*axis;
	char	*data;
} CsysDef;

typedef struct CsysType {
	char	option;
	char	*name;
	int	(*filte)();
	void	(*setup)();
	char   *(*parse)();
} CsysType; 

typedef struct RCache {
	struct _CNode	cache;
} *RCache;

typedef struct JoinData {
	CsysDef		*csys;
	int		 nsys;
	Range		*r;
	File		 ofile;
	int		 print;
	int		 setcnt;
	RCache		 cache;
	int		 posit;
	TableHead	 T1;
	TableRow	 R1;
} JoinData;

rowcmp(a, b)
	CNode	a;
	CNode	b;
{
	return a->hash == b->hash;
}

char *cartparse(csys, option)
	CsysDef	*csys;
	char	*option;
{
    	int i;

    if ( *option )
	    csys->naxes  = atoi(option);
    else	csys->naxes  = 1;
    csys->nrange = 1;

    if ( !csys->naxes )
	except(ex_search, "error in Cartesian coordinate system option");

    Malloc(csys->axis, sizeof(Axis) * csys->naxes);

    for ( i = 0; i < csys->naxes; i++ ) {
	csys->axis[i].type   = '2';
        csys->axis[i].once   =  0;
        csys->axis[i].method = TSEARCH_SEXAGAS;
    }
    return "C";
}

void cartsetup(csys, row)
	CsysDef		*csys;
	TableRow	 row;
{
		int	i;

    for ( i = 0; i < csys->naxes; i++ ) {
     csys->axis[i].lo = table_colvald(row, csys->axis[i].c1) - csys->range[0];
     csys->axis[i].hi = table_colvald(row, csys->axis[i].c1) + csys->range[0];
    }
}

cartfilte(csys, row1, row2)
	CsysDef		*csys;
	TableRow	 row1;
	TableRow	 row2;
{
		int	i;
		double	square = 0.0;

	for ( i = 0; i < csys->naxes; i++ ) {
		double	d = table_colvald(row1, csys->axis[i].c1) 
			  - table_colvald(row2, csys->axis[i].c2);

		square += d * d;
	}

	if ( sqrt(square) <= csys->range[0] ) return 1;
	else			   	   return 0;
}

char *sphrparse(csys, option)
	CsysDef	*csys;
	char	*option;
{
		int	i;

    if ( *option == '1' || *option == '2' ) {
	    csys->naxes  = *option++ - '0';
    } else
	    csys->naxes  = 2;

    if ( csys->naxes == 1 )
	csys->filte = NULL;

    csys->nrange = 1;

    Malloc(csys->axis, sizeof(Axis) * csys->naxes);

    for ( i = 0; i < csys->naxes; i++ ) {
	csys->axis[i].type   = '2';
        csys->axis[i].once   =  0;
        csys->axis[i].method = TSEARCH_SEXAGAS;
    }

    /* Parse units options.  Set up wrap values.
     */
    NewString(csys->data, "hdd");
    for ( i = 0; i < 3 && option[i]; i++ )
	csys->data[i] = option[i];

    for ( i = 0; i < csys->naxes; i++ ) {
	switch ( csys->data[i] ) {
	    case 'h': csys->axis[i].wp =  24.0;	break;
	    case 'd': csys->axis[i].wp = 360.0; 	break;
	    case 'r': csys->axis[i].wp = X_2PI;	break;
	    default:
		except(ex_search, "bad units option to spherical system\n");
	}
    }

    return "C";
}
	
void sphrsetup(csys, row)
	CsysDef 	*csys;
	TableRow	 row;
{
	double	ra, dec;
	double	width;
	double	r0, r1, d0, d1;

	if ( csys->naxes == 1 ) {
	    csys->axis[0].lo = table_colvald(row, csys->axis[0].c1) - 
				    csys->range[0];
	    if ( csys->axis[0].lo < 0 ) csys->axis[0].lo += csys->axis[0].wp;

	    csys->axis[0].hi = table_colvald(row, csys->axis[0].c1) + 
				    csys->range[0];
	    if ( csys->axis[0].hi > csys->axis[0].wp ) 
		 csys->axis[0].hi -= csys->axis[0].wp;

	    return;
	}


	/* Input units conversion.
	 */
	switch ( csys->data[0] ) {
	 case 'h':  ra	 =     table_colvald(row, csys->axis[0].c1);	break;
	 case 'd':  ra   = d2h(table_colvald(row, csys->axis[0].c1));	break;
	 case 'r':  ra   = r2h(table_colvald(row, csys->axis[0].c1));	break;
	}
	switch ( csys->data[1] ) {
	 case 'h': dec   = h2d(table_colvald(row, csys->axis[1].c1));    break;
         case 'd': dec	 =     table_colvald(row, csys->axis[1].c1);	break;
         case 'r': dec   = r2d(table_colvald(row, csys->axis[1].c1));	break;
        }
	switch ( csys->data[2] ) {
         case 'h': width = h2d(csys->range[0]);	break;
         case 'd': width =     csys->range[0];	break;
         case 'r': width = r2d(csys->range[0]);	break;
        }

	radecbox(ra, dec, width * 2, &r0, &r1, &d0, &d1);

	/* Output units conversion
	 */
	switch ( csys->data[0] ) {
         case 'h': csys->axis[0].lo =     r0;
		   csys->axis[0].hi =     r1;
		   break;
         case 'd': csys->axis[0].lo = h2d(r0);
		   csys->axis[0].hi = h2d(r1);
		   break;
         case 'r': csys->axis[0].lo = h2r(r0);
		   csys->axis[0].hi = h2r(r1);
		   break;
        }
        switch ( csys->data[1] ) {
         case 'h': csys->axis[1].lo = d2h(d0);
		   csys->axis[1].hi = d2h(d1);
		   break;
         case 'd': csys->axis[1].lo =     d0;
		   csys->axis[1].hi =     d1;
		   break;
         case 'r': csys->axis[1].lo = d2r(d0);
		   csys->axis[1].hi = d2r(d1);
		   break;
        }
}

int sphrfilte(csys, row1, row2)
	CsysDef		*csys;
	TableRow	row1;
	TableRow	row2;
{
		double	r1, r2, d1, d2;
		double	radius;

	switch ( csys->data[0] ) {
	 case 'h': r1 = h2r(table_colvald(row1, csys->axis[0].c1));
		   r2 = h2r(table_colvald(row2, csys->axis[0].c2));
		   break;
	 case 'd': r1 = d2r(table_colvald(row1, csys->axis[0].c1));
		   r2 = d2r(table_colvald(row2, csys->axis[0].c2));
		   break;
	 case 'r': r1 =     table_colvald(row1, csys->axis[0].c1);
                   r2 =     table_colvald(row2, csys->axis[0].c2);
		   break;
	}
	switch ( csys->data[1] ) {
	 case 'h': d1 = h2r(table_colvald(row1, csys->axis[1].c1));
		   d2 = h2r(table_colvald(row2, csys->axis[1].c2));
		   break;
	 case 'd': d1 = d2r(table_colvald(row1, csys->axis[1].c1));
		   d2 = d2r(table_colvald(row2, csys->axis[1].c2));
		   break;
	 case 'r': d1 =     table_colvald(row1, csys->axis[1].c1);
                   d2 =     table_colvald(row2, csys->axis[1].c2);
                   break;
	}
	switch ( csys->data[2] ) {
         case 'h': radius = h2r(csys->range[0]);	break;
         case 'd': radius = d2r(csys->range[0]);	break;
         case 'r': radius =     csys->range[0];		break;
        }

	if ( slaDsep(r1, d1, r2, d2) <= radius ) return 1;
	else					 return 0;
}

char *singparse(csys, option)
	CsysDef         *csys;
	char		*option;
{

	csys->naxes  = 1;
	csys->nrange = 0;

	Malloc(csys->axis, sizeof(Axis) * csys->naxes);

	csys->axis[0].type   = '1';
        csys->axis[0].once   =  0;
	csys->axis[0].method = TSEARCH_ASCII;
	return "C";
}

void singsetup(csys, row)
        CsysDef         *csys;
        TableRow         row;
{
	csys->axis[0].value = table_colval(row, csys->axis[0].c1);
}


char *rangparse(csys, option)
        CsysDef         *csys;
        char            *option;
{

	csys->naxes  = 1;
	csys->nrange = 0;

	Malloc(csys->axis, sizeof(Axis) * 3);

	if ( *option == ':' ) {
		double wrap = SAOstrtod(&option[1], NULL);

	    csys->axis[0].wp = wrap;
	}

	csys->axis[0].type   = '2';
        csys->axis[0].once   =  0;
	csys->axis[0].method = TSEARCH_SEXAGAS;
	return "211";
}

void rangsetup(csys, row)
        CsysDef         *csys;
        TableRow         row;
{
	csys->naxes = 1;

	csys->axis[0].lo = table_colvald(row, csys->axis[1].c1);
	csys->axis[0].hi = table_colvald(row, csys->axis[2].c1);
}

char *valuparse(csys, option)
        CsysDef         *csys;
        char            *option;
{
        csys->naxes  = 1;
        csys->nrange = 0;

	Malloc(csys->axis, sizeof(Axis) * (csys->naxes + 0));
	csys->axis[0].type   = '1';
	csys->axis[0].once   =  1;
	csys->axis[0].method = TSEARCH_ASCII;

	return "2V";
}

void valusetup(csys, row)
        CsysDef         *csys;
        TableRow         row;
{
		TableRow X = table_rowloc(NULL, 0, 0);

	csys->axis[0].R = range_union(table_svalue(csys->axis[0].search
		    	, csys->axis[0].value
			, (vvector) range_add, NULL, X));

	table_rowfree(X);
	csys->setup = NULL;
}

char *limtparse(csys, option)
        CsysDef         *csys;
        char            *option;
{
        csys->naxes  = 1;
        csys->nrange = 2;

	Malloc(csys->axis, sizeof(Axis) * csys->naxes);
	csys->axis[0].type   = '2';
	csys->axis[0].once   =  1;
	csys->axis[0].method = TSEARCH_SEXAGAS;

	return "2";
}


void limtsetup(csys, row)
        CsysDef         *csys;
        TableRow         row;
{
	csys->axis[0].lo = csys->range[0];
	csys->axis[0].hi = csys->range[1];

	csys->setup = NULL;
	csys->naxes = 0;
}


CsysType CsysTypes[] = {
	  { 'C' ,	"cartesian",	cartfilte, cartsetup, cartparse }
	, { 'S',	"spherical",	sphrfilte, sphrsetup, sphrparse }
	, { 'V',	"col value",	NULL, 	   NULL     , valuparse }
	, { 'Z',	"col range",	NULL, 	   rangsetup, rangparse }
	, { 'R',	"col limit",	NULL, 	   limtsetup, limtparse }
	, { '\0',	 NULL,		NULL,	   NULL,      NULL 	}
	, { '\0',	"singleaxs",	NULL,      singsetup, singparse }
#define N_CsysTypes	6
};


void *joinem(data, start, end, row, table, file)
	void		*data;
	off_t		 start;
	off_t		 end;
	TableRow	 row;
	TableHead	 table;
	File		 file;
{
	JoinData *d = (JoinData *) data;
	int	  i;

	struct	_CNode		   node;

	node.hash = start;

	/* If the row won't pass the filter - bail.
	 */
	for ( i = 0; i < d->nsys; i++ ) {
	    if ( !  d->csys[i].filte) { continue; }
	    if ( !(*d->csys[i].filte)(&d->csys[i], d->R1, row) ) {
		return data;
	    }
	}

	if ( !d->print ) {
	    d->r = range_add(d->r, start, end);
	    return data;
	}

	if ( d->posit ) {
		fprintf(d->ofile, OffFormat "	%d\n", start, end-start);
		return data;
	}

	if ( d->setcnt ) {
	    if ( cache_hashe(d->cache, &node, NULL) != NULL ) 
		return data;

	    cache_cache(d->cache, &node);
	    fprintf(d->ofile, "%d\t", d->setcnt);
	}

	if ( d->T1 ) 
	    table_rowput(d->ofile, d->T1, d->R1, NULL, NULL, 0);

	table_rowput(d->ofile, table,   row, NULL, NULL, 0);
	return data;
}

char *trim();

main(argc, argv)
	int	argc;
	char	*argv[];
{
		int	n, i, j, k;
		int	nsys = 0; 
		int	asys = 0;

		Axis	**axes;
		int	naxes = 0;

		int		*lcol = NULL;
		int		 ncol = 0;

		CsysDef	*csys = NULL;

		File		 ifile = Stdin;
		File		 ofile = Stdout;
		void		*obuff;

		File		 F1, F2 = NULL;
		TableHead	 T1 = NULL, T2;
		char		*file1 = "-";
		char		*file2 = NULL;

		TableRow	 row, row1 = NULL, X;

		JoinData	 jdata;

		char		*zeval = "0.0";
		char		*args = NULL;

		int		  header = 1;
		int		  invert = 0;
		int		  joiner = 0;
		int		  count  = 0;
		int		  setcnt = 0;
		int		  posit  = 0;

		off_t		  Start, End;

	if ( argc < 2 ) {
	    FPrint(Stderr
	    , "usage: search table [-p] [-s] [-j] [-i keytable] [-m[bhisr]]\n");
	    FPrint(Stderr, "		[Column]\n");
	    FPrint(Stderr, "		[-R Column <Min> <Max>]\n");
	    FPrint(Stderr, "		[-S[uuu] Column Column Range]\n");
	    FPrint(Stderr, "		[-C[n] Column [... Column<n>] Range]\n");
	    FPrint(Stderr, "		[-Z[wrap] Column Column]\n");
	    exit(1);
	}

	/* Look ahead for file option.
	 */
	for ( i = 1; i < argc - 1 ; i++ ) {
	  if ( argv[i][0] == '-' && argv[i][1] == 'i' ) {
	    if ( (ifile = (!strcmp("-", argv[i+1]))
				? Stdin 
				: Open(argv[i+1], "r")) == NULL ) {
		except(ex_search
		    , "search: can't open input file: %s : %s"
		    , argv[i+1], exc_oserror());
	    } else {
	      for ( ; i < argc - 2; i++ ) 
			argv[i] = argv[i+2];	/* Ooch these over	*/
	      argc   -= 2;
	      break;
	    }
	  }
	}

	F1 = ifile;

	for ( n = 1; n < argc; n++ ) {
		char	*arg;

	    if ( argv[n][0] == '-' ) {
		switch ( argv[n][1] ) {
		 case 'c' : count  = 1;		continue;
		 case 'h' : header = 0;		continue;
		 case 'I' : invert = 1;		continue;
		 case 'p' : posit  = 1;		continue;
		 case 'j' : joiner = 1;		continue;
		 case 's' : setcnt = 1; 	continue;
		 case 'o' : 
		    if ( (ofile = (!strcmp("-", argv[n+1]))
			    ? Stdout : Open(argv[n+1], "w")) == NULL ) {
			except(ex_search
			    , "can't open output file: %s : %s"
			    , argv[n+1], exc_oserror());
		    }
		    n++;
		    continue;
		 default:

		     for ( i = 0; CsysTypes[i].name != NULL; i++ ) {
			if ( CsysTypes[i].option == argv[n][1] )
			    break;
		     }

		     if ( CsysTypes[i].name == NULL )
			except(ex_search
				, "search: unknown option: %c", argv[n][1]);

		     arg = &argv[n][2];
		     n++;
		     break;
		}
	    } else {
		if ( F2 ) {
		   i = N_CsysTypes;
		   arg = NULL;
		} else {
		    if ( (F2 = Open(argv[n], "r")) == NULL )
			except(ex_search, "can't open table: %s : %s", argv[n]
				, exc_oserror());
		    if ( (T2 = table_header(F2, 0)) == NULL )
			except(ex_search, "can't read table header from: %s\n"
				, argv[n]);
		    file2 = argv[n];

		    if ( (Start = Seek(F2, 0, SEEK_CUR)) == -1 ) {
			perror("search:");
			exit(1);
		    }
		    End = Seek(F2, 0    , SEEK_END);
		          Seek(F2, Start, SEEK_SET);

		    continue;
		}
	    }

	    if ( file2 == NULL ) except(ex_search, "no table to search");

	    if ( nsys >= asys ) {
		asys *= 2;
		asys += 4;
		ReAlloc(csys, asys * sizeof(CsysDef));
	    }

	    csys[nsys].setup  = CsysTypes[i].setup;
	    csys[nsys].filte  = CsysTypes[i].filte;

	    args = CsysTypes[i].parse(&csys[nsys], arg);

	    if ( csys[nsys].nrange )
		Malloc(csys[nsys].range, sizeof(double) * csys[nsys].nrange);

	    for ( i = 0; i < csys[nsys].naxes || (*args && *args != 'C')
		; n++, i++ ) {
			char	*c1;
			char	*c2;
			char	*nchr;

		if ( n >= argc )
		    except(ex_search
			, "not enough columns for this coordinate system");

		c1 = argv[n];

		if ( *args != 'V' && (nchr = strchr(c1, '.')) )
		     *nchr++ = '\0';
		else  nchr   = NULL;

		if ( *args == 'C' && (c2 = strchr(c1, ':')) )
		     *c2++ = '\0';
		else  c2   = c1;
		    
		if ( *args == 'C' || *args == '1' ) {
		  if ( T1 == NULL && (T1 = table_header(F1, TABLE_PARSE)) == NULL )
	    	    except(ex_search
			, "can't read table header from: %s\n", file1);

		  if ( !(csys[nsys].axis[i].c1 = table_colnum(T1, c1)) )
		    except(ex_search, "no column %s in keytable", c1);
		}

		if ( *args == 'C' || *args == '2' ) {
		  if ( !(csys[nsys].axis[i].c2 = table_colnum(T2, c2)) )
		    except(ex_search, "no column %s in table %s\n", c2, file2);

		}

		if ( *args == 'V' ) {
		  csys[nsys].axis[i-1].value = argv[n];
		  csys[nsys].axis[i-1].hi    = SAOstrtod(argv[n], NULL);
		  csys[nsys].axis[i-1].lo    = SAOstrtod(argv[n], NULL);
		} else {
		  csys[nsys].axis[i].value = NULL;
		  csys[nsys].axis[i].R     = NULL;
		}

		if ( *args != 'C' ) args++;
	    }

	    for ( i = 0; i < csys[nsys].nrange; i++, n++ ) {
			char	*here = NULL;

	    	if ( n >= argc )
                    except(ex_search
		    , "not enough ranges given for this coordinate system.\n");

	    	csys[nsys].range[i] = SAOstrtod(argv[n], &here);
		if ( *here )
		    except(ex_search, "this doesn't look like a range: %s"
				, argv[n]);
	    }

	    naxes += csys[nsys].naxes;
	    nsys++;
	    n--;
	}

	Malloc(axes, naxes * sizeof(Axis *));
	
	for ( i = k = 0; i < nsys; i++ ) {
	    for ( j = 0; j < csys[i].naxes; j++, k++ ) {
		axes[k] = &csys[i].axis[j];
		axes[k]->search = NULL;
	    }
	}

	table_searchpairs(file2, axes, naxes, NULL);

	for ( k = 0; k < naxes; k++ ) {
	    if ( axes[k]->search == NULL ) {
		if ( (axes[k]->search 
			= table_search(file2, table_colnam(T2, axes[k]->c2)
			  	, axes[k]->method, NULL)) == NULL ) {

		    except(ex_search
			, "can't access index for: %s column: %s\n", file2
			, table_colnam(T2, axes[k]->c2));
		}
	    }
	}

	row = table_rowloc(NULL, 0, 0);
	X   = table_rowloc(NULL, 0, 0);


	if ( posit ) {
	    fprintf(ofile, "Offset	Length\n");
	    fprintf(ofile, "------	------\n");
	} else
	if ( T1 && joiner ) {
	    if ( header )
		table_hdrput(ofile, T1, TBLHDR_VALUES | TBLHDR_TEXT
				, NULL, NULL, 0);
	    table_ors(T1, '\t');

	    if ( header ) {
		/* rename cols and generate the headline
		 */
		Malloc(lcol, (T1->header->ncol + T2->header->ncol) 
				* sizeof(int));

		if ( setcnt ) fprintf(ofile, "SetNumber\t");

		for ( j = 1; j <= T1->header->ncol; j++ )
		    /* look up column name in the other table.
		     */
		    lcol[ncol++] = hdrfix(ofile, table_colval(T1->header, j)
				,  table_colnum(T2
				, trim(table_colval(T1->header, j))) ? 1 : 0
				       ,  '\t');

		for ( j = 1; j <= T2->header->ncol; j++ )
		    lcol[ncol++] = hdrfix(ofile, table_colval(T2->header, j)
				,  table_colnum(T1
				, trim(table_colval(T2->header, j))) ? 2 : 0
				       ,  j == T2->header->ncol ? '\n' : '\t');

		if ( setcnt ) fprintf(ofile, "---------\t");

		/* Output dashline
		 */
		for ( i = 0; i < ncol; i++ ) {
		    table_dashes(ofile , lcol[i] , (i == ncol - 1) ? '\n' 
								   : '\t');
		}
	    }
	} else {
	    table_hdrput(ofile, T2, TBLHDR_VALUES | TBLHDR_TEXT, NULL, NULL, 0);
	    if ( setcnt ) fprintf(ofile, "SetNumber\t");
	    table_hdrput(ofile, T2, TBLHDR_HEADLINE, NULL, NULL, 0);
	    if ( setcnt ) fprintf(ofile, "---------\t");
	    table_hdrput(ofile, T2, TBLHDR_DASHLINE, NULL, NULL, 0);
	}


    {
	Range 	*U = NULL;		/* Union of all keytable rows       */

	jdata.ofile = ofile;

	jdata.csys  = csys;
	jdata.nsys  = nsys;

	jdata.T1    = joiner ? T1 : NULL;
	jdata.r     = NULL;
	jdata.print = joiner;
        jdata.setcnt= setcnt;
	jdata.posit = posit;
        if ( setcnt && jdata.print == 0 ) jdata.print = 1;

	if ( setcnt ) {
	    jdata.cache = (RCache) cache_init(sizeof(struct RCache), 7967, 0
				, NULL, NULL, rowcmp);
	} else {
	    jdata.cache = NULL;
	}

	/* For each row in the input.
	 */
	while ( T1 == NULL 
	    || (row1 = table_rowget(F1, T1, row, NULL, NULL, 0)) ) {
		Range *R = NULL;	/* Intersection of all axes     */
		Range *r;		/* Search of one axis       	*/

	    if ( count != 0 ) { progress(count);  count++; }

	    jdata.R1     = row1;
	

	    /* Call the setup function on each csys
	     */
	    for ( i = 0; i < nsys; i++ ) {
	    	if ( csys[i].setup ) csys[i].setup(&csys[i], row1);
	    }

	    /* Build the range set
	     */
	    for ( i = 0; i < naxes; i++ ) {
		switch ( axes[i]->type ) {
		  case 'R': {
		    r = range_copy(axes[i]->R);
		    break;
		  }
		  case '1': {
		    r = table_svalue(axes[i]->search
				   , axes[i]->value
				   , (vvector) range_add, NULL, X);
		    break;
		  }
		  case '2': {
		    double	hi = axes[i]->hi;
		    double	lo = axes[i]->lo;
		    double	wp = axes[i]->wp ? axes[i]->wp 
				    : 0.0 ;

		    char	hival[64];
		    char	loval[64];
		    char	wpval[64];

		    sprintf(hival, "%.21g", hi);
		    sprintf(loval, "%.21g", lo);
		    sprintf(wpval, "%.21g", wp);

		    if ( lo > hi ) {
			r = table_srange(axes[i]->search
				, loval, wpval, (vvector) range_add, NULL, X);
			r = table_srange(axes[i]->search
				, zeval, hival, (vvector) range_add, r, X);
		    } else {
			r = table_srange(axes[i]->search
			        , loval, hival, (vvector) range_add, NULL, X);
		    }
		    break;
		  }
		  case '4': {
		    double	hi1 = axes[i]->pair->hi;
		    double	lo1 = axes[i]->pair->lo;
		    double	wp1 = axes[i]->pair->wp ? axes[i]->pair->wp : 0.0 ;

		    double	hi2 = axes[i]->hi;
		    double	lo2 = axes[i]->lo;
		    double	wp2 = axes[i]->wp       ? axes[i]->wp : 0.0 ;

		    char	hival1[64];
		    char	loval1[64];
		    char	wpval1[64];

		    char	hival2[64];
		    char	loval2[64];
		    char	wpval2[64];

		    sprintf(hival1, "%.21g", hi1);
		    sprintf(loval1, "%.21g", lo1);
		    sprintf(wpval1, "%.21g", wp1);

		    sprintf(hival2, "%.21g", hi2);
		    sprintf(loval2, "%.21g", lo2);
		    sprintf(wpval2, "%.21g", wp2);

		    if ( lo1 > hi1 ) {
		      if ( lo2 > hi2 ) {
			r = table_srange2(axes[i]->pair->search
				, loval1, wpval1
				, loval2, wpval2
				, (vvector) range_add, NULL, X);
			r = table_srange2(axes[i]->pair->search
				, loval1, wpval1
				, wpval2, hival2
				, (vvector) range_add, NULL, X);
			r = table_srange2(axes[i]->pair->search
				, wpval1, hival1
				, loval2, wpval2
				, (vvector) range_add, r, X);
			r = table_srange2(axes[i]->pair->search
				, wpval1, hival1
				, wpval2, hival2
				, (vvector) range_add, r, X);
		      } else {
			r = table_srange2(axes[i]->pair->search
				, wpval1, hival1
				, loval2, hival2
				, (vvector) range_add, r, X);
			r = table_srange2(axes[i]->pair->search
				, wpval1, hival1
				, loval2, hival2
				, (vvector) range_add, r, X);
		      }
		    } else {
		      if ( lo2 > hi2 ) {
			r = table_srange2(axes[i]->pair->search
				, loval1, hival1
				, loval2, wpval2
				, (vvector) range_add, r, X);
			r = table_srange2(axes[i]->pair->search
				, loval1, hival1
				, wpval2, hival2
				, (vvector) range_add, r, X);
		      } else {
			r = table_srange2(axes[i]->pair->search
			        , loval1, hival1
			        , loval2, hival2
				, (vvector) range_add, NULL, X);
		      }
		    }
		    break;
		  }
		  case 'S': { continue; }
		  default: {
		    fprintf(stderr, "search error unknown axis type %c\n", 
			    axes[i]->type);
		    exit(1);
		  }
		}
		r = range_union(r);

		if ( axes[i]->once ) {
		    range_copy(r);
		    axes[i]->type = 'R';
		}

		if ( R != NULL ) R = range_inter(R, r);
		else     	     R = r;

		if ( R == NULL ) break;
	    }

	    /* Filter/Output the Range.
	     */
	    if ( R != NULL ) {
		table_rangerows(F2, T2, X, R, joinem, &jdata);
		Free(R);

		if ( !joiner ) {
		    U = range_union(range_cat(U, jdata.r));
		    jdata.r = NULL;
		}
	   	if ( jdata.setcnt ) jdata.setcnt++;
	    }

	    if ( T1 == NULL ) break;
	}

	if ( invert ) {
	     U = range_invrt(U, Start, End);
	}

	if ( U ) {
	    jdata.print = 1;
	    jdata.nsys  = 0;
	    table_rangerows(F2, T2, X, U, joinem, &jdata);
	}
   }
   exit(0);
}


void radecbox(ra, dec, width, r1, r2, d1, d2)
	double	ra;
	double	dec;
	double	width;
	double	*r1, *r2, *d1, *d2;
{
		double	cosdec;

	*d1 = dec - width / 2.0;
	if ( *d1 <= -90.0 ) {
		*d1 = -90.0;
		*d2 = dec + width / 2.0;
		*r1 =  0.0;
		*r2 = 24.0;
	} else {
		*d2 = dec + width / 2.0;
		if ( *d2 >=  90.0 ) {
			*d1 = dec - width / 2.0;
			*d2 = 90.0;
			*r1  = 0.0;
			*r2  = 24.0;
		} else {
		    if ( dec > 0.0 )	cosdec = Abs(cos(d2r(*d1)));
		    else		cosdec = Abs(cos(d2r(*d2)));

		    *r1 = ra - d2h(width) / 2 / cosdec;
		    *r2 = ra + d2h(width) / 2 / cosdec;

		    if ( *r1 <  0.0 ) *r1 += 24;
		    if ( *r2 > 24.0 ) *r2 -= 24;
		}
	}
}


void slaDcs2c ( double a, double b, double v[3] ) 
{  
   double cosb;
 
   cosb = cos ( b );
   v[0] = cos ( a ) * cosb;
   v[1] = sin ( a ) * cosb;
   v[2] = sin ( b );
}  

double slaDsep ( double a1, double b1, double a2, double b2 )
{
   int i;
   double d, v1[3], v2[3], s2, c2;
 
   slaDcs2c ( a1, b1, v1 );
   slaDcs2c ( a2, b2, v2 );
 
   s2 = 0.0;
   for ( i = 0; i < 3; i++ ) {
      d = v1[i] - v2[i];
      s2 += d * d;
   }
   s2 /= 4.0; 
 
   c2 = 1.0 - s2;
   return 2.0 * atan2 ( sqrt ( s2 ), sqrt ( Max ( 0.0, c2 )));
}


progress(count)
	int	count;
{
    if ( (count % 1000) == 0 ) {
	if ( (count % 100000) == 0 ) {
	    FPrint(Stderr, "=");
	} else {
	    if ( (count % 10000) == 0 ) {
		FPrint(Stderr, "+");
	    } else {
		FPrint(Stderr, "*");
	    }
	}

	Flush(Stderr);
    }
}
