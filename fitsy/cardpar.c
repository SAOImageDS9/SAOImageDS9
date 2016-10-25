/* Fitsy FITS card parsing routines.

   DESCRIPTION
	These routines parse FITS cards.  Usually the header value routines will 
	be used instead of these.

   EXAMPLES
+
		FITSHead	fits;
		FITSCard	card;
		FITSType	type;
		char		value[FT_CARDLEN];
		int		index;
		char		comment[FT_CARDLEN];
		
		int		im;	/-* Is this a primary image? *-/

	#ft_cardpar(card, &type, value, &index, comm);

	card = #ft_headfind(fits, "SIMPLE", 0, 0);

	im = #ft_cardgetl(card);
 */

#include "fitsy.h"

/* Parse a FITS card in to its type, value index and comment parts

   The ft_cardpar will parse an 80 character fits card in memory
   into its parts according to the standard.  Some non-standard
   card formats are recognized.

   Returns
	The value parameter.
 */
char *ft_cardpar(card, type, value, index, comm)
	FITSCard	 card;	/* FITS card to parse.                  */
	FITSType	*type;	/* Returned card type.                  */
	char		*value;	/* Returned card value string.          */
	int		*index;	/* Returned index of the card keyword.  */
	char		*comm;	/* Returned card comment.               */
{
	    int		 i=0, j;

    if ( card == NULL ) {
	*value = '\0';
	return value;
    }

    if ( index ) *index = strtol(&card->c[5], NULL, 0);

    value[0] = '\0';

    if ( !strncmp(card->c, "HISTORY ",  8) || !strncmp(card->c, "COMMENT ", 8)
      || !strncmp(card->c, "CONTINUE ", 9)
      || !strncmp(card->c, "        ",  8) || (*card).c[8] != '=' ) {
	     strncpy(value, &(*card).c[8], sizeof(FITSBuff) - 8);
	    if ( type != NULL ) *type  = FT_COMMENT;
    } else {
	if ( card->c[10] == '\'' ) {
	    if ( type != NULL ) *type = FT_STRING;

	    for ( i = 11, j = 0; i < FT_CARDLEN; i++, j++ ) {
		if ( card->c[i] == '\'' ) {
		    if ( i+1 == FT_CARDLEN || card->c[i+1] != '\'' ) {
			break;
		    } else {
			i++;
		    }
		}

		    value[j] = card->c[i];
	    }
	    for ( ; j && value[j-1] == ' '; j-- );
	    value[j] = '\0';
	} else {
	    if ( type != NULL ) *type = FT_INTEGER;

	    for ( i = 10; i < FT_CARDLEN; i++ )
		if ( card->c[i] != ' ' )
		    break;

	    if ( ( card->c[i] == 'T' || card->c[i] == 'F'
	        || card->c[i] == 't' || card->c[i] == 'f' )
	      && type != NULL ) *type = FT_LOGICAL;
	    
	    for ( j = 0; i < FT_CARDLEN; i++, j++ ) {
		if ( card->c[i] == '/' ) break;
		if ( card->c[i] == '.' && type != NULL ) *type = FT_REAL;

		value[j] = (*card).c[i];
	    }
	    value[j] = '\0';
	}
    }

    if ( comm != NULL ) {
	for ( ; i < FT_CARDLEN && card->c[i] != '/' ; i++ );
	i++;

	for ( j = 0; i < FT_CARDLEN; i++, j++ )
	    comm[j] = card->c[i];
	comm[j] = '\0';
    }

    return value;
}

static FITSBuff         ft_value;

/* Return the value of a FITS card in a static buffer.
 */
char *ft_cardget(card)
	FITSCard	card;
{
	return ft_cardpar(card, NULL, (char *) ft_value.c, NULL, NULL);
}

/* Return the value of a FITS card as a logical.
 */
int ft_cardgetl(card)
	FITSCard	card;
{
	char	 *value = ft_cardget(card);

   return *value == 'T' || *value == 't';
}

/* Return the value of a FITS card as an integer.
 */
int ft_cardgeti(card)
	FITSCard	card;
{
  /* return strtol(ft_cardget(card), NULL, 0); */
  return (int)ft_cardgetr(card);
}

/* Return the value of a FITS card as an integer.
 */
longlong ft_cardgetil(card)
	FITSCard	card;
{
  /* return strtol(ft_cardget(card), NULL, 0); */
  return (longlong)ft_cardgetr(card);
}

/* Return the value of a FITS card as a double.
 */
double ft_cardgetr(card)
	FITSCard	card;
{
        int	i;
        char	*s = ft_cardget(card);

	/* change final 'D' to 'E' so that strtod() can convert correctly */
	for(i=strlen(s)-1; i>=0; i--){
	  if( s[i] == 'D' ){
	    s[i] = 'E';
	    break;
	  }
	}
	return strtod(s, NULL);
}

/* Return the value of a FITS card as an allocated string.

   The returned string is allocated with strdup().
 */
char *ft_cardgets(card)
	FITSCard	card;
{
	return (char *)strdup(ft_cardget(card));
}
