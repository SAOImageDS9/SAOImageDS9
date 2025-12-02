/* Routines to handle FITS image data.
 */

#include <xos.h>
#include "fitsy.h"

/* Read data from a file pointer and convert it to the requested type.
 */
void *ft_dataread(file, fits, dataptr, pixtype)
	File		  file;	/* File pointer to read data from.	*/
	FITSHead	  fits;
	void		 *dataptr; /* Pointer to data buffer to store data. */
	int		  pixtype; /* Pixtype to convert data to.	*/
{
		void	*fdata;
		void	*mdata;
		size_t	 fsize;
		size_t	 msize;

    if ( file == NULL )		return NULL;
    if ( fits == NULL )		return NULL;

    if ( pixtype == FT_BITPIX )
	pixtype = ft_bitpix(fits);

    fsize = Abs(ft_bitpix(fits)/8);
    msize = pixtype ? (size_t)((Abs(pixtype) & ~FT_UNSIGNED)/8) : fsize;

    if ( dataptr == NULL ) {
	Malloc(mdata, ft_fitsbloks(ft_datapixls(fits) * msize) * FT_BLOCK);
	if ( mdata == NULL ) {
	   return NULL;
	}
    } else
	mdata = dataptr;


    if ( pixtype && msize != fsize ) {
        Malloc(fdata, ft_databloks(fits) * FT_BLOCK);
	if ( fdata == NULL ) {
	  if ( mdata && dataptr == NULL ) (void)Free(mdata);
	   return NULL;
	}
    } else
	fdata = mdata;

    /* Read in enough data but don't show an error in a short data
     * block.
     */
    if(ftRead(file, fdata, 1, ft_databloks(fits)*FT_BLOCK) < ft_databytes(fits)){
	if ( dataptr == NULL ) {
	  if ( fdata != mdata ) (void)Free(fdata);
	  (void)Free(mdata);
	}
	return NULL;
    }

    if ( pixtype ) {
        ft_dataswap(fdata, fdata, ft_databytes(fits), ft_bitpix(fits));
 
        if ( pixtype != ft_bitpix(fits)
          || ft_hasbscale(fits)
          || ft_hasbzero(fits) ) {
             ft_acht(pixtype, mdata, ft_bitpix(fits), fdata
		    , ft_datapixls(fits)
		    , 1
                    , ft_hasbscale(fits) || ft_hasbzero(fits)
                    , ft_bscale(fits)
                    , ft_bzero(fits));
        }
    }

    if ( mdata != fdata ) (void)Free(fdata);
    return mdata;
}


int ft_datawrite(file, fits, data, pixtype)
        File              file;
        FITSHead          fits;
        void             *data;
        int               pixtype;
{
		void	*fdata;
		void	*mdata = data;
		int	 fsize;
		int	 msize;
		int	 pad;
		char	 blok[FT_BLOCK];

    if ( file == NULL )		return 0;
    if ( fits == NULL )		return 0;

    if ( pixtype == FT_BITPIX )
	pixtype = ft_bitpix(fits);

    fsize = Abs(ft_bitpix(fits)/8);
    msize = pixtype ? (Abs(pixtype) & ~FT_UNSIGNED)/8 : fsize;

    if ( pixtype && msize != fsize ) {
        Malloc(fdata, ft_databloks(fits) * FT_BLOCK);
	if ( fdata == NULL ) {
	   return 0;
	}
    } else
	fdata = mdata;

    if ( pixtype ) {
        if ( pixtype != ft_bitpix(fits)
          || ft_hasbscale(fits)
          || ft_hasbzero(fits) ) {
            ft_acht(ft_bitpix(fits), fdata, pixtype, mdata
		    , ft_datapixls(fits)
		    , 0
                    , ft_hasbscale(fits) || ft_hasbzero(fits)
                    , ft_bscale(fits)
                    , ft_bzero(fits));
        }

        ft_dataswap(fdata, fdata, ft_databytes(fits), ft_bitpix(fits));
    }

    memset(blok, 0, FT_BLOCK);

    ftWrite(file, fdata, 1, ft_databytes(fits));

    /* this is how John would do it ...
    ftWrite(file, blok , 1, 
    (FT_BLOCK - ft_databytes(fits) % FT_BLOCK) % FT_BLOCK);
    */

    /* ... and this is Eric's way ... */
    pad = FT_BLOCK - ft_databytes(fits) % FT_BLOCK;
    if( pad && (pad != FT_BLOCK) )
      ftWrite(file, blok , 1, pad);

    if ( mdata != fdata ) (void)Free(fdata);
    return 1;
}


void swap2(to, from, nbytes)
	char *to;
	char *from;
	size_t nbytes;
{
    char c;
    size_t i;
    for ( i=0; i < nbytes; i += 2, (to += 2), (from += 2) ) {
	c = *from;
	*(to) = *(from+1);
	*(to+1) = c;
    }
}

void  swap4(to, from, nbytes)
	char *to;
	char *from;
	size_t nbytes;
{
    char c;
    size_t i;
    for ( i=0; i < nbytes; i += 4, (to += 4), (from += 4) ) {
	c = *from;
	*to = *(from+3);
	*(to+3) = c;
	c = *(from+1);
	*(to+1) = *(from+2);
	*(to+2) = c;
    }
}

void swap8(to, from, nbytes)
	char *to;
	char *from;
	size_t nbytes;
{
    char c;
    size_t i;
    for ( i=0; i < nbytes; i += 8, (to += 8), (from += 8) ) {
	c   	= *(from+0);
	*(to+0)	= *(from+7);
	*(to+7) = c;
	c   	= *(from+1);
	*(to+1) = *(from+6);
	*(to+6) = c;
	c 	= *(from+2);
	*(to+2)	= *(from+5);
	*(to+5) = c;
	c 	= *(from+3);
	*(to+3) = *(from+4);
	*(to+4) = c;
    }
}

/* Swap n bytes of data if necessary.
 */
void *ft_dataswap(to, from, n, type)
	void		*to;	/* Pointer to data to swap.	*/
	void		*from;	/* Pointer to data to swap.	*/
	size_t		 n;	/* N bytes			*/
	int		 type;	/* Swap 2, swap 4, swap 8.	*/
{
	if ( !from || !to ) 		return NULL;
	if ( !ft_byteswap() ) {
	    if ( from == to ) return to;

	    memcpy(to, from, n);
  	    return to;
	}

	if ( type && Abs(type) != 8 ) {
	    switch ( Abs(type) ) {
	     case 16:	swap2(to, from, n);	break;
	     case 32:	swap4(to, from, n);	break;
	     case 64:	swap8(to, from, n);	break;
	    }
	}

	return to;
}
