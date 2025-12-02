/* Fitsy FITS header find routines.
 */

#include "xos.h"
#include "fitsy.h"

extern int ft_compare();

/* Find a FITS card in the header.

   If the header has been indexed the index will be used
   otherwise a sequential search will be done.

   Returns
	The card found or NULL if an exact match was not found.
 */
FITSCard ft_headfind(fits, name, n, add)
        FITSHead         fits;		/* The FITS header to search.		*/
	char		*name;		/* Name of the card keyword to search for. */
	int		 n;		/* keyword index number, if is zero no
                                           index number is appended to the keyword.
                                         */
	int		add;		/* If add is true the card will
					   be added to the header if it is
					   not found.
					 */
{
		FITSBuff	key;

	return ft_cardfind(fits, ft_cardkey(&key, name, n), add);
}

/* Index a header for use with #ft_headfind.
 */
void ft_headindex(fits)
	FITSHead	fits;
{
		int	i;

		if ( fits->index ) (void)Free(fits->index);

	Malloc(fits->index, sizeof(FITSCard *) * fits->ncard);
	for ( i = 0; i < fits->ncard; i++ ) {
	    fits->index[i] = (FITSCard) &fits->cards[i];
	}

	qsort(fits->index, fits->ncard, sizeof(FITSCard *), ft_compare);
}

/* Find a FITS card in the header.

   #headfindidx uses an index to find the card.
 */
FITSCard ft_headfindidx(fits, name, n, match)
        FITSHead         fits;
	char		*name;
	int		 n;
	int		*match;		/* Returns true if the card found is
					   an exact match for the keyword
					   requested.
					 */
{
		FITSBuff	key;

	return ft_cardfindidx(fits, ft_cardkey(&key, name, n), match);
}

/* Find a FITS card in the header.

   Find a card in the header using sequential search.

   If the requested card is a FITS indexed keyword and an exact match
   is not found, the highest existing card of that type is returned and
   match is set to 0.
 */
FITSCard ft_headfindseq(fits, name, n, match)
        FITSHead         fits;
	char		*name;
	int		 n;
        int             *match;
{
		FITSBuff	key;

	return ft_cardfindseq(fits, ft_cardkey(&key, name, n), match);
}

