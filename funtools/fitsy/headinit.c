/* Fitsy FITS header creation routines.

   EXAMPLES
+
		FITSHead	fits;

	fits = #ft_headinit(NULL, 0);	/-* Create an empty header	*-/

	/-* Build a FITS file header by hand.
	 *-/
	#ft_headappl(fits, "SIMPLE", 0,   1, "Primary FITS image array");
	#ft_headappi(fits, "BITPIX", 0, -32, "Single floats");
	#ft_headappi(fits, "NAXIS" , 0,   2, "2d image");
	#ft_headappi(fits, "NAXIS" , 1, 256, "X axis is 256");
	#ft_headappi(fits, "NAXIS" , 2, 256, "Y axis is 256");

+
 */

#include "xos.h"
#include "fitsy.h"

/* Create or import a FITS header to Fitsy.

   This is the primary way in which FITSHead structures are created.

   If #cards is not NULL then then #acard cards are scanned from the memory
   in search of the END card.  When a memory block is passed in to #ft_headinit
   then it is considered ~unmanaged~ and will not be freed by #ft_headfree.

   If #cards is NULL, then #acards cards will be allocated for use as a FITSHead.
   If #acards is 0 the #FT_CARDS will be allocated (36).

	
 */
FITSHead ft_headinit(data, bytes)
	void		*data;	/* Pointer to FITS cards.	*/
	int		 bytes;		/* Number of bytes in buffer.	*/
{
		int		match;
		FITSHead	fits;
		FITSCard	end = NULL;
		FITSBuff	*cards;

	/* cast the namby-pamby void into a real pointer 
	 */
	cards = (FITSCard) data;

	Calloc(fits, sizeof(struct _FITSHead));
	fits->mem = FT_MALLOC;
	fits->primary = NULL;
	fits->filename = NULL;
	fits->rfcount = 1;

	if ( cards ) {
	    fits->cards = fits->last = cards;
	    fits->acard = fits->ncard = Abs(bytes/FT_CARDLEN);
	    if ( bytes > 0 )    fits->mem = FT_EXTERN;

	    if ( bytes > 0 && (end=ft_headfindseq(fits, "END", 0, &match)) ) {
		fits->ncard = end - fits->cards + 1;
		fits->acard = ((fits->ncard+FT_CARDS-1)/FT_CARDS) * FT_CARDS;
		fits->data  = fits->acard * FT_CARDLEN;
	    }
	} else {
	    if ( bytes == 0 ) bytes = FT_CARDS * FT_CARDLEN;

	    fits->acard = bytes/FT_CARDLEN ? bytes/FT_CARDLEN : FT_CARDS;
	    (void)Calloc(fits->cards, sizeof(FITSBuff) * fits->acard + 1);
	    /* make sure there is a null at the end (EGM) */
	    ((char *)fits->cards)[sizeof(FITSBuff) * fits->acard] = '\0';
	    ft_cardclr(fits->cards, fits->acard);
	    fits->ncard = 0;
	    fits->data  = fits->acard * FT_CARDLEN;
	}
	fits->index = NULL;
	fits->last  = fits->cards;

	if ( !cards || (bytes > 0 && !end) ) {
	    fits->ncard = 1;
	    ft_cardkey(fits->cards, "END", 0);
	} else {
	    if ( end ) {
		ft_syncdata(fits);
	    }
	}

	fits->sync  = 0;
	fits->cache = NULL;

	return fits;
}

/* Make a copy of a #FITSHead data structure.
 */
FITSHead ft_headcopy(fits)
	FITSHead	fits;
{
		FITSHead	head;

	if ( fits == NULL ) return ft_headinit(NULL, 0);

	Calloc(head, sizeof(struct _FITSHead));
	head->primary = NULL;
	head->rfcount = 1;

	if ( fits->primary )
	    ft_primlink(fits->primary, head);

	memmove(head, fits, sizeof(struct _FITSHead));

	(void)Calloc (head->cards, head->acard * FT_CARDLEN + 1);
	/* make sure there is a null at the end (EGM) */
	((char *)head->cards)[head->acard * FT_CARDLEN] = '\0';
	memmove(head->cards, fits->cards, head->acard * FT_CARDLEN);

	head->index = NULL;
	head->basic = NULL;
	head->image = NULL;
	head->table = NULL;
	head->mem   = FT_MALLOC;
	head->mmap_here  = 0;
	head->mmap_size  = 0;

	/* realloc filename string for the copy record */
	if( head->filename ) head->filename = strdup(head->filename);

	ft_syncdata(head);

	if( head->index && !fits->index ){
	  (void)Free(head->index);
	  head->index = NULL;
	}

	return head;
}

/* Free a Fitsy FITS header data structure.
 */
void ft_headfree(fits, freecards)
	FITSHead	fits;
	int		freecards;	/* Free the FITS cards?		*/
{
	if ( fits == NULL )	return;

	if ( --fits->rfcount ) return;

	if ( fits->index )    (void)Free(fits->index);
	if ( fits->filename ) (void)Free(fits->filename);

	if ( fits->basic ) ft_basicfree(fits->basic);
	if ( fits->image ) ft_imagefree(fits->image);
	if ( fits->table ) ft_tablefree(fits->table);

	if ( fits->mem == FT_MALLOC && freecards ) (void)Free(fits->cards);

#ifdef HAVE_SYS_MMAN_H
        if ( fits->mem == FT_MMAP  ) ft_munmap(fits);
#endif
#ifdef HAVE_SYS_SHM_H
        if ( fits->mem == FT_SHMAT ) ft_shmdt(fits);
#endif

	if ( fits->primary ) ft_headfree(fits->primary, 1);

	(void)Free(fits);
}

void ft_primlink(prim, fits)
	FITSHead	prim;
	FITSHead	fits;
{
	if ( prim == NULL ) return;
	if ( fits == NULL ) return;

	fits->primary = prim;
	prim->rfcount++;
}

/* Set the card buffer
 */
void ft_setcards(fits, cards)
	FITSHead	 fits;
	void		*cards;
{
	fits->cards = (FITSCard) cards;
}

/* Make a copy of the header and force it to be a simple primary header.
 */
FITSHead ft_primary(fits)
	FITSHead	fits;
{
	FITSHead prim;
        int             one = 1;

    prim = ft_headcopy(fits);

    ft_cardfmt(ft_cardnth(prim, 1)
		, "SIMPLE", 0, FT_LOGICAL, &one, 0, FT_Comment);
 
    ft_headdel(prim, "EXTVER", 0);
    ft_headdel(prim, "GCOUNT", 0);
    ft_headdel(prim, "PCOUNT", 0);
    ft_headdel(prim, "EXTEND", 0);
    ft_headdel(prim, "NEXTEND", 0);
    ft_headdel(prim, "INHERIT", 0);

    return prim;
}

/* Merge cards from fits1 to fits2
 */
FITSHead ft_headmerge(fits1, fits2, copy)
	FITSHead	fits1;
	FITSHead	fits2;
	int		copy;
{
	FITSHead	merge;
	FITSCard	card;
	int		i, match;

    merge = ft_headcopy(fits1);

    if ( fits2 != NULL ) {
        i = 1;
	card = ft_cardnth(fits2, 1);
	if( !strcmp(card->c, "SIMPLE") || !strcmp(card->c, "XTENSION") )
	  i = 2;
	for ( ; i < ft_ncards(fits2); i++ ) {
	    /* The card is not in the merge header
	     */
	    if ( !(card = ft_cardfindseq(merge
				, ft_cardnth(fits2, i), &match)) ) {
		ft_cardapp(merge, ft_cardnth(fits2, i));
	    } else {
		if ( !match ) {
		    ft_cardins(merge, ft_cardnth(fits2, i), card);
		} else {
		    /* special cards always are inserted */
		    if( !strncmp(card->c, "HISTORY ",  8)  ||
			!strncmp(card->c, "CONTINUE ", 9)  ||
			!strncmp(card->c, "COMMENT ",  8)  ||
			!strncmp(card->c, "        ",  8)  )
		      ft_cardapp(merge, ft_cardnth(fits2, i));
		    else if( copy ) ft_cardcpy(card , ft_cardnth(fits2, i));
		}
	    }
	}

    }

    ft_syncdata(merge);

    return merge;
}
