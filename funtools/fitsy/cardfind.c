/* Fitsy FITS card find routines.

   DESCRIPTION

	Routines to find FITS cards in a FITS headers data structure.

   EXAMPLES
+

		/-* Declair some fitsy types.
		 *-/
		#FITSHead	fits;
		#FITSCard	foo;
		#FITSCard	goo;
		#FITSBuff	key;

	/-* Look up a card using sequential search.
	 *-/
	#ft_cardkey(key, "FOO");
	foo = #ft_cardfind(fits, key, 0);

	/-* This is the same thing.  But the card is added to the header
	   if it isn't found.  This will also invalidate the index if
	   there is one.
	 *-/
	#ft_cardkey(key, "FOO");
	foo = #ft_cardfind(fits, key, 1);

	/-* Now index the header so that searches are faster.  #ft_cardfind
	   will automatically use the index if its valid.
	 *-/
	#ft_index(fits);
	#ft_cardkey(key, "GOO", 0);
	goo = #ft_cardfind(fits, key, 0);
+
 */

#include "fitsy.h"

int ft_compare(a, b)
	char	**a;
	char	**b;

{
		int	ax, bx;

	if ( !strncmp(*a, *b, 5) 
	  && ((*a)[5] != ' ') && ((*b)[5] != ' ')
	  && (ax = atoi(&(*a)[5])) 
	  && (bx = atoi(&(*b)[5])) ) {
		if ( ax <  bx ) return -1;
		if ( ax == bx ) return  0;
		if ( ax >  bx ) return  1;
	}

	return strncmp(*a, *b, 8);
}

/* Find a FITS card in the header.

   #cardfind will use the index if is has been created otherwise
   it searches sequentially through the header to find the card.
 */
FITSCard ft_cardfind(fits, key, add)
	FITSHead	fits;		/* The FITS header to look in.	*/
	FITSCard	key;		/* The card keyword to lookup.	*/
	int		add;		/* If add is true the card will
					   be added to the header if it is
					   not found.
					 */
{
		FITSCard	 card;
		int		 match;

	if ( fits == NULL ) return NULL;
	if ( key  == NULL ) return NULL;

	if ( fits->index ) card = ft_cardfindidx(fits, key, &match);
	else 		   card = ft_cardfindseq(fits, key, &match);

	if ( !match && add )
		return ft_cardins(fits, key, card);
	else    return match ? card : NULL;
}

/* Find a FITS card in the header using an index.

   If the header is not indexed an index is created for it.
 */
FITSCard ft_cardfindidx(fits, key, match)
	FITSHead	 fits;
	FITSCard	 key;
	int		*match;		/* Returns true if the card found is
					   an exact match for the keyword requested.
					 */
{
                FITSCard    	*base;
                int     	 length;

                int     lo, hi, cut;
                int     i; 
 
	if ( fits == NULL ) return NULL;
	if ( key  == NULL ) return NULL;

	base   = fits->index;
	length = ft_ncards(fits);

	lo  = -1;
	hi  = length;
	cut = length / 2;

	if ( !fits->index ) ft_headindex(fits);

	*match = 0;
        while ( hi - lo > 1 ) {
                if ( !(i = ft_compare((char **)&key, (char **)&base[cut])) ) {
		    *match = 1;
                    return base[cut];
		}
 
                if ( i < 0 ) {
                        hi = cut;
                        cut = (lo + hi) / 2;
                } else { 
                        lo = cut;
                        cut = (lo + hi) / 2;
                } 
        }

	if ( !strncmp(key->c, base[cut]->c, 5) )
             return base[cut];

	return NULL;
}
 
/* Find a card in the FITS header using sequential search.

   If the requested card is a FITS indexed keyword and an exact match
   is not found, the last card of that type is returned and
   match is set to 0.
 */
FITSCard ft_cardfindseq(fits, key, match)
	FITSHead	 fits;
	FITSCard	 key;
	int		*match;
{
	    FITSCard  card;
	    FITSCard  xnear = NULL;

    if ( fits == NULL ) return NULL;
    if ( key  == NULL ) return NULL;

    *match = 0;
    for ( card = fits->cards; card != &fits->cards[fits->ncard]; card++ ) {
	    if ( !strncmp(key->c, card->c, 8) ) {
		*match = 1;
		return card;
	    }
	    if (  !strncmp(key->c, card->c, 5) 
	      && (isdigit((unsigned int) (*card).c[5]) || (*card).c[5] == ' ' )
	      && (isdigit((unsigned int) (*card).c[6]) || (*card).c[6] == ' ' )
	      && (isdigit((unsigned int) (*card).c[7]) || (*card).c[7] == ' ' ) ) {
		xnear = card;
    	    }
    }

    return xnear;
}

FITSCard ft_cardfindblok(cards, key, match, nhist)
	FITSCard	 cards;
	FITSCard	 key;
	int		*match;
	int		*nhist;
{
	    FITSCard  card;
	    FITSCard  xnear = NULL;

    if ( cards== NULL ) return NULL;
    if ( key  == NULL ) return NULL;

    *nhist = 0;
    *match = 0;
    for ( card = cards; card != &cards[FT_CARDS]; card++ ) {
	    if ( !strncmp(key->c, card->c, 8) ) {
		*match = 1;
		return card;
	    }
	    if (  !strncmp(key->c, card->c, 5) 
	      && (isdigit((unsigned int) (*card).c[5]) || (*card).c[5] == ' ' )
	      && (isdigit((unsigned int) (*card).c[6]) || (*card).c[6] == ' ' )
	      && (isdigit((unsigned int) (*card).c[7]) || (*card).c[7] == ' ' ) ) {
		xnear = card;
    	    }

	    if ( !strncmp(key->c, "HISTORY", 7) ) (*nhist)++;
    }

    return xnear;
}
