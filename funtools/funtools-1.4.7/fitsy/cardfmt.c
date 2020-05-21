/* Fitsy FITS card set routines.

   EXAMPLES

   Format the keyword part of a card:
+

		FITSHead	fits;
		FITSBuff	card;
		FITSCard	here;

	#ft_cardclr(&card, 1);			/-* Clear out the card first		*-/

	#ft_cardkey(&card, "RA");			/-* Set the keyword		*-/
	#ft_cardsetr(&card, 14.789, 3, "OBS RA");	/-* Set the value of RA.		*-/

	here = #ft_cardapp(fits, &card);		/-* Put the new card into a header*-/

	#ft_cardsetr(here, 15.567, 3, FT_Comment);	/-* Set a new value after it's in 
							   the header and reuse the existing
							   comment *-/
+

   Format the value part of a card:
+
		int	l = 1;
		int	i = 15;
		double	d = 34.7;
		char   *c = "Shutter";

		FITSHead	fits;
		FITSCard	card;

	/-* Get a card pointer from the header
	 *-/
	card = #ft_cardfind(fits, "Keyword", 0);

	#ft_cardsetl(card, l, "A true value");
	#ft_cardseti(card, i, "15 is the number");
	#ft_cardsetr(card, d, 4, "Four digits of precision here");

	/-* In this example the special pointer #FT_Comment is used to 
	   use the existing comment in the card.
	 *-/
	#ft_cardsets(card, c, FT_Comment);
+
 */

#include <ctype.h>
#include <math.h>
#include "fitsy.h"
#include "xos.h"

char	 FT_comment='\0';
char	*FT_Comment = &FT_comment;


/* look for blank name */
int ft_isblank(s)
     char *s;
{
  if( !s || !*s )
    return 1;
  for(; *s; s++){
    if( *s != ' ' )
      return 0;
  }
  return 1;
}

/* Format a FITS card with the supplied values.
 */
FITSCard ft_cardfmt(card, name, n, type, value, prec, comm)
	FITSCard	 card;	/* FITS card to format.                 */
	char		*name;	/* keyword name.                        */
	int		 n;	/* keyword index number, if is zero no
                                   index number is appended to the
				   keyword.
                                 */
	FITSType	 type;	/* type of the card.                    */
	void		*value;	/* pointer to the value to format.  The
                                   pointer must be of the apropriate type.
				 */
	int		 prec;	/* If type is FT_REAL the value is formatted
                                   at this precision.  Otherwise this parameter
				   is ignored.
                                 */
	char		*comm;	/* Comment for the card.                */
{
		int		i, j;
		int		card_len = 30;
		FITSBuff	comment;

	if ( card == NULL ) return NULL;

	if ( comm == FT_Comment ) {
	    ft_cardclr((FITSCard) comment.c, 1);

	    for ( i = 8; i < FT_CARDLEN && card->c[i] != '/'; i++ );
	    i++;
	    for ( j = 0; i < FT_CARDLEN; i++, j++ )
		     comment.c[j] = card->c[i];
	    if ( j ) comment.c[j+1] = '\0';
	    else     comment.c[0]   = '\0';
	}

	memset(&(*card).c[8], ' ', FT_CARDLEN-8);

	if ( name ) {
		int len = Min(strlen(name), 8);

	    memset(&(*card).c[0], ' ', 8);
	    memcpy(&(*card).c[0], name, len);

	    if ( n != 0 ) {
		char	tbuf[32];	/* Vestigial remains of Eric's fix. */
		snprintf(tbuf, 32, "%d", n);

		memcpy(&(*card).c[len], tbuf, Min((int)strlen(tbuf), 8-len));
	    }
	    /* sense HISTORY AND COMMENT cards */
	    if( !n && (ft_isblank(name)           ||
		       !strcmp(name, "HISTORY")   ||
		       !strcmp(name, "CONTINUE")  ||
		       !strcmp(name, "COMMENT"))  )
	      type = FT_COMMENT;
	}

	if ( value ) {
	    switch ( type ) {
	     case FT_COMMENT: {
		    char	*v = (char *) value;

		    for ( i = 0, j = 8; j < FT_CARDLEN && v[i]; i++, j++ ) {
			card->c[j] = v[i];
		    }

		    goto docomm;
	     }
	     
	     case FT_VALUE: {
			    char	*v = (char *) value;
			    
		    card->c[8]  = '=';

		    for ( i = 0, j = 10; j < FT_CARDLEN && v[i]; i++, j++ ) {
			if ( v[i] == '\'' ) {
			    j--;
			    continue;
			}

			card->c[j] = v[i];
		    }
		    if ( j < 29 ) j = 29;

		    card_len  = j;
		    break;
	     }

	     case FT_STRING: {
			    char	*v = (char *) value;

		    card->c[8]  = '=';
		    card->c[10] = '\'';

		    for ( i = 0, j = 11; j < FT_CARDLEN-1 && v[i]; i++, j++ ) {
			if ( v[i] == '\'' ) {
			    j--;
			    continue;
			}
			card->c[j] = v[i];
		    }
		    if ( j < 19 ) j = 19;

		    card->c[j++] = '\'';

		    card_len  = j;
		    break;
	     }

	     case FT_INTEGER: {
			    int	*v = (int *) value;

		    card->c[8]  = '=';
		    sprintf(&card->c[10], "%20d", *v);
		    card_len = strlen((card->c));
		    card->c[card_len] = ' ';
		    break;
	     }

	     case FT_LONG: {
			    longlong *v = (longlong *) value;

		    card->c[8]  = '=';
#if HAVE_LONG_LONG
		    sprintf(&card->c[10], "%20lld", *v);
#else
		    sprintf(&card->c[10], "%20ld", *v);
#endif
		    card_len = strlen((card->c));
		    card->c[card_len] = ' ';
		    break;
	     }

	     case FT_REAL: {
			    double	*v = (double *) value;

		    card->c[8]  = '=';
		    /* use e format if the number is too big/small */
		    if( Abs(*v) < 0.1 )
		      sprintf(&card->c[10], "%#20.*E", prec, *v);
		    else if( Abs(*v) >= pow(10.0,(double)(20-2-prec)) )
		      sprintf(&card->c[10], "%#20.*E", 
			      Min(17,prec+(int)log10(*v)) , *v);
		    else
		      sprintf(&card->c[10], "%#20.*f", prec, *v);
		    card_len = strlen(card->c);
		    card->c[card_len] = ' ';
		    break;
	     }
	     case FT_LOGICAL: {
			    int	*v = (int *) value;

		    card->c[8]  = '=';
		    card->c[29] = *v ? 'T' : 'F';
		    card_len = 30;
		    break;
	     }
	     case FT_COMPLEX: break;
	     case FT_UNKNOWN: break;
	    }
	}

docomm:
	if ( comm != NULL ) {
	    if ( comm == FT_Comment ) comm = comment.c;
	    if ( *comm ) {
		int comm_len;

		while( *comm == ' ' )
		  comm++;
		comm_len = strlen(comm);

		if ( card_len + comm_len + 3 > FT_CARDLEN ) {
		    /* Clip the comment
		     */
		    comm_len = FT_CARDLEN-(card_len + 3);
		}

		if ( comm_len <= 0 ) return card;

		/* start as close to col 29 as we can to make it look nice */
		if ( (card_len < 30) && 
		     (card_len + comm_len + 3 < FT_CARDLEN) ) {
		  int spaces;
		  spaces = Min(30-card_len,FT_CARDLEN-(card_len+comm_len+3));
		  if( spaces > 0 ){
		    while( spaces-- )
		      card->c[card_len++] = ' ';
		  }
		}

		card->c[card_len+1] = '/';
		card->c[card_len+2] = ' ';
		memmove(&(*card).c[card_len+3], comm, comm_len);
	    } 
	}

	return card;
}

/* Format a keyword into a FITS card.
 */
FITSCard ft_cardkey(card, name, n)
	FITSCard	 card;
	char		*name;
	int		 n;
{
	return ft_cardfmt(card, name, n, FT_UNKNOWN, NULL, 0, NULL);
}

/* Format a value into a FITS card.
 */
FITSCard ft_cardset(card, type, value, prec, comm)
	FITSCard	 card;
	FITSType	 type; 
	void		*value;	
	int		 prec;
	char		*comm;
{
	return ft_cardfmt(card, NULL, 0, type, value, prec, comm);
}

/* Format a logical value into a FITS card.
 */
FITSCard ft_cardsetl(card, lvalue, comm)
	FITSCard	 card;
	int		 lvalue;	/* Logical to format as a FITS value.	*/
	char		*comm;
{
	return ft_cardfmt (card, NULL, 0, FT_LOGICAL, &lvalue, 0, comm);
}

/* Format an integer value into a FITS card.
 */
FITSCard ft_cardseti(card, ivalue, comm)
	FITSCard	 card;
	int		 ivalue;	/* Integer to format as a FITS value.	*/
	char		*comm;
{
	return ft_cardfmt (card, NULL, 0, FT_INTEGER, &ivalue, 0, comm);
}

/* Format an 64-bit integer value into a FITS card.
 */
FITSCard ft_cardsetil(card, ivalue, comm)
	FITSCard	 card;
	longlong	 ivalue;	/* Integer to format as a FITS value.	*/
	char		*comm;
{
	return ft_cardfmt (card, NULL, 0, FT_LONG, &ivalue, 0, comm);
}

/* Format a real value into a FITS card.
 */
FITSCard ft_cardsetr(card, rvalue, prec, comm)
	FITSCard	 card;
	double		 rvalue;	/* Double to format as a FITS value.	*/
	int		 prec;
	char		*comm;
{
	return ft_cardfmt (card, NULL, 0, FT_REAL   , &rvalue, prec, comm);
}

/* Format a string value into a FITS card.
 */
FITSCard ft_cardsets(card, svalue, comm)
	FITSCard	 card;
	char		*svalue;	/* String to format as a FITS value.	*/
	char		*comm;
{
	return ft_cardfmt (card, NULL, 0, FT_STRING ,  svalue, 0, comm);
}

/* Clear FITS cards by writing space into them.
 */
FITSCard ft_cardclr(card, ncards)
	FITSCard	card;
	int		ncards;	/* Number of 80 character FITS cards to clear */
{
	if ( card != NULL ) 
	    memset(card, ' ', sizeof(FITSBuff) * ncards);

	return card;
}

/* Copy a FITS card.
 */
FITSCard ft_cardcpy(card1, card2)
	FITSCard	card1;	/* Destination card	*/
	FITSCard	card2;	/* Source card 		*/
{
	if ( card1 != NULL && card2 != NULL ) 
	    memmove(card1->c, card2->c, sizeof(FITSBuff));

	return card1;
}
