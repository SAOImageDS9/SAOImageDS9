/* Fitsy FITS card insert and delete routines.

   EXAMPLES
+
		FITSCard	here;
		FITSBuff	card;

	#ft_cardkey(&card, "Keyword", 0);
	#ft_cardseti(&card, 4, NULL);

	/-* Insert a new card "Keyword" after the 4th card.
	 *-/
	here = #ft_cardins(fits, &card, #ft_cardnth(4));

	/-* Append the same card to the header
	 *-/
	card = #ft_cardapp(fits, &card);

	/-* Delete the first card.
	 *-/
	#ft_carddel(fits, here);
+
 */

#include "xos.h"
#include "fitsy.h"

/* Insert a #card into a FITS header after #here.

   If #here is NULL #card is inserted before the END card.

   Returns #card;
 */
FITSCard ft_cardins(fits, card, here)
	FITSHead         fits;		/* FITS header.			*/
	FITSCard	 card;		/* FITS card to insert, append or
					   delete.			*/
	FITSCard	 here;		/* Insert #card after #here	*/
{

	if ( fits == NULL )		return NULL;
	if ( fits->cards == NULL ) 	return NULL;
	if ( card == NULL ) 		return NULL;

	if ( fits->index ) (void)Free(fits->index);

	if ( fits->ncard+1 > fits->acard ) {
		int	hereoffset = 0;

	    if ( here != NULL ) hereoffset = here - fits->cards;

	    if ( fits->mem != FT_MALLOC ) return NULL;

	    fits->acard += FT_CARDS;
	    /* fits->data  = fits->acard * FT_CARDLEN; */
	    (void)ReAlloc(fits->cards, sizeof(FITSBuff) * fits->acard + 1);
	    /* make sure there is a null at the end (EGM) */
	    ((char *)fits->cards)[sizeof(FITSBuff) * fits->acard] = '\0';

	    if ( here != NULL ) here = fits->cards + hereoffset;

	    ft_cardclr(&fits->cards[fits->acard-FT_CARDS], FT_CARDS);
	} 

	if ( here == NULL ) here = &fits->cards[fits->ncard-2];

	memmove(here+2, here+1
		, (&fits->cards[fits->ncard-1]-here) * sizeof(FITSBuff));
	memmove(here+1, card  , sizeof(FITSBuff));

	fits->ncard++;

	return (here+1);
}

/* Append a card to the end of the FITS header.

   Retuns #card.
 */
FITSCard ft_cardapp(fits, card)
	FITSHead         fits;
	FITSCard	 card;
{
	 return ft_cardins(fits, card, NULL);
}

/* Delete a card from a FITS header.

   Returns #card which now points the the card after
   the one deleted
 */
FITSCard ft_carddel(fits, card)
	FITSHead         fits;
	FITSCard	 card;
{
	if ( fits == NULL ) return NULL;
	if ( card == NULL ) return NULL;

	(void)Free(fits->index);
	memmove(card, card+1, (ft_last(fits) - card) * sizeof(FITSBuff));
	ft_cardclr(ft_last(fits), 1);

	fits->ncard--;

	return card;
}

