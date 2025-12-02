
#include <stdio.h>

char *strchr();
char *strchr();


main()
{
		char	filename[1024];

		char	xsect[1024];
		char	ysect[1024];

		int	x0, x1, y0, y1;
		int	xsection = 0;
		int	ysection = 0;


		char	extn[1024];
		int	exti;
		char	tail[1024];
		char	cattail[1024];

		char	line[1024];
		char	*l;
		char	*k;
		int	i, n;

		int length = 0;
    
  while ( l = gets(line) ) {
	i = 0;
	filename[i] = '\0';

	printf("line     : %s\n", line);

	extn[0] = '\0';
	exti    = -1;
	tail[0] = '\0';
	cattail[0] = '\0';

	xsection = 0;
	ysection = 0;

    while ( *l ) {
	if ( tail[0] ) {
	    strcat(cattail, "[");
	    strcat(cattail, tail);
	    strcat(cattail, "]");
	}
	tail[0] = '\0';

	/* Copy characters to the filename until a
	   section starts.
	 */
	while ( *l && *l != '[' ) filename[i++] = *l++;
	if ( !*l ) break;

	/* Record where the section begins.
	   Translate quoted "]" chars to '\001'
	 */
	k = l;
	while ( *l && *l != ']' ) {
	    if ( *l == '\'' || *l == '"' ) {
		char q = *l;
		l++;

		while ( *l && *l != q ) {
		    if ( *l == ']' ) *l = '\001';
		    l++;
		}
	    }
	    l++;
	}
	if ( *l != ']' ) fprintf(stderr, "unterminated section\n");
	l++;

	/* Look for sections
	 */
	length = l - k;

	/* IMIO Image Section ?
	 */
	if ( sscanf(k, "[%[-+0-9:*],%[-+0-9:*]]%n", xsect, ysect, &n) == 2 && n == length ) {
	    if ( !strcmp(xsect,  "*") )	xsection =  1;
	    else
	    if ( !strcmp(xsect, "-*") ) 	xsection = -1;
	    else
		if ( sscanf(xsect, "%d:%d", &x0, &x1) == 2 )
		    xsection = 2;
		else
		    goto tryagain;
	    
	    if ( !strcmp(ysect,  "*") )	ysection =  1;
	    else
	    if ( !strcmp(ysect, "-*") ) 	ysection = -1;
	    else
		if ( sscanf(ysect, "%d:%d", &y0, &y1) == 2 )
		    ysection = 2;
		else
		    goto tryagain;

	    continue;
	}

	/* The section looked a little like an image section
	   but its didn't work out.
	 */
        tryagain:

	if ( sscanf(k, "[%d]%n"		      , &exti, &n)       == 1 /* exti			*/
	  && n == length )
	    continue;

	exti = -1;

	if ( sscanf(k, "[%[^]\"',=+-]]%n"     , extn, &n)        == 1 /* extn			*/
	  && n == length )
	    continue;

	extn[0] = '\0';

	if ( sscanf(k, "[%[^]\"',=+-],%d]%n"  , extn, &exti, &n) == 2 /* extn, exti		*/
	  && n == length )
	    continue;

	exti = -1;
	extn[0] = '\0';

	if ( sscanf(k, "[%[^]\"',=+-],%d, %[^]]]%n",extn, &exti, tail, &n)==3 /* extn, exti, tail	*/
	  && n == length )
	    continue;

	exti = -1;
	extn[0] = '\0';
	tail[0] = '\0';

	if ( sscanf(k, "[%d,%[^]]]%n"	      , &exti, tail, &n) == 2 /* exti, tail		*/
	  && n == length )
	    continue;

	exti = -1;
	tail[0] = '\0';

	if ( sscanf(k, "[%[^]\"',=+-],%[^]]]%n", extn, tail, &n) == 2 /* extn, tail		*/
	  && n == length )
	    continue;

	extn[0] = '\0';
	tail[0] = '\0';

	if ( sscanf(k, "[%[^]]]%n"	       , tail, &n)       == 1 /* tail			*/
	  && n == length )
	    continue;

	tail[0] = '\0';

	fprintf(stderr, "unparsable section\n");
    }

    if ( tail[0] ) {
	strcat(cattail, "[");
	strcat(cattail, tail);
	strcat(cattail, "]");
    }
    filename[i] = '\0';

    /* Restore the "]" chars that might be lurking in
       the tail.
     */
    {
	    char *t = cattail;
	while ( *t ) {
	    if ( *t == '\001' ) *t = ']';
	    t++;
	}
    }

    printf("filenname: %s\n", filename);
    switch ( xsection ) {
	case  0:	printf("	no xsection\n");	break;
	case  1:	printf("	xsection =  *\n");	break;
	case -1:	printf("	xsection = -*\n");	break;
	case  2:	printf("	xsection = [%d:%d]\n", x0, x1);	break;
    }
    switch ( ysection ) {
	case  0:	printf("	no ysection\n");	break;
	case  1:	printf("	ysection =  *\n");	break;
	case -1:	printf("	ysection = -*\n");	break;
	case  2:	printf("	ysection = [%d:%d]\n", y0, y1);	break;
    }
    printf("	extn = [%s, %d]\n", extn, exti);
    printf("	tail = %s\n", cattail);
  }
}
