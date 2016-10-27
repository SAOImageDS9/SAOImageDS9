/* Fitsy FITS read and write header routines.
 */

#include <xos.h>
#include "fitsy.h"

FITSHead ft_headread0(file, card1, n)
	File		 file;
	char		*card1;	
	size_t		 n;
{
	    int	 nbloks;

	    FITSHead	fits;
	    FITSCard	cards;
	    FITSCard	end;
	    FITSBuff	key;
	    int		match;
	    int		nhist;

    if ( file == NULL )	return NULL;

    Malloc(cards, FT_BLOCK+1);
    ft_cardclr(cards, FT_CARDS);
    /* make sure there is a null at the end (EGM) */
    ((char *)cards)[FT_BLOCK] = '\0';
    fits = ft_headinit(cards, -FT_CARDS*FT_CARDLEN);

    fits->seek  = ftTell(file);

    if ( card1 )
	memmove(fits->cards, card1, n);

    if ( ftRead(file, (void *)&fits->cards[0].c[n],
	      1, FT_BLOCK - n) != FT_BLOCK - n ) {
      (void)Free(fits->cards);
      (void)Free(fits);
      return NULL;
    };
    
    ft_cardkey(&key, "END", 0);

    for ( nbloks = 1; 1; nbloks++ ) {
	if ( (end = ft_cardfindblok(&fits->cards[(nbloks-1) * FT_CARDS]
				, &key, &match, &nhist)) ) break;

	if ( (nbloks <= 25) || (nbloks > 25 && nhist < FT_CARDS) ) {
	    fits->ncard += FT_CARDS;
	    (void)ReAlloc(fits->cards, (nbloks+1) * FT_BLOCK + 1);
	    /* make sure there is a null at the end (EGM) */
	    ((char *)fits->cards)[(nbloks+1) * FT_BLOCK] = '\0';
	    ft_cardclr(&fits->cards[nbloks * FT_CARDS], FT_CARDS);
	} else
	    nbloks--;

	if ( ftRead(file, (void *)&fits->cards[nbloks * FT_CARDS], 
		  1, FT_BLOCK) != FT_BLOCK ) {
	  (void)Free(fits->cards);
	  (void)Free(fits);
	  return NULL;
	}
    }

    fits->data  = ftTell(file);

    fits->ncard = end - fits->cards + 1;
    fits->acard = nbloks * FT_CARDS;

    ft_syncdata(fits);

    return fits;
}

/* Read a FITS header from a file pointer.

   Returns
	The #FITSHead read from #file.
 */
FITSHead ft_headread(file)
	File	file;	/* File pointer to read or write a FITS header on. */
{
	return ft_headread0(file, NULL, 0);
}

/* Write a FITS header to a file pointer.
 */
int ft_headwrite(file, fits)
	File		file;
	FITSHead	fits;	/* Header to write.		*/
{
    if ( file == NULL )		return 0;
    if ( fits == NULL )		return 0;

    if ( fits->sync ) ft_synchead(fits);

    ftWrite(file, (void *)fits->cards, 
	  FT_BLOCK, ((fits->ncard+FT_CARDS-1)/FT_CARDS));
    ftFlush(file);

    return 1;
}

void *ft_fileparse(ifile, callback, cdata)
	File	ifile;
	int	(*callback)();
	void	*cdata;
{
		FITSHead	 fits;
		void		*data = NULL;

    if ( ifile == NULL )	return NULL;

    while ( (fits = ft_headread(ifile)) ) {
	if ( (*callback)(ifile, fits, &data, cdata) )
	    return data;
    }

    return data;
}

/* Seek back to the header part of a FITS HDU.  The file handle must be the same
   one from which the FITS header was read and must be seekable.
 */
off_t ft_headseek(file, fits)
	File		file;
	FITSHead	fits;
{
    if ( file == NULL )		return -1;
    if ( fits == NULL )		return -1;

    return ftSeek(file, fits->seek, 0) != -1;
}

int ft_sync(fits, x)
	FITSHead	fits;
	int		x;
{
		int sync;

    if ( fits == NULL )		return -1;

    sync = fits->sync;
    fits->sync = x;

    return sync;
	
}
