/* Fitsy FITS routines for reading and writing image related cards.

   DESCRIPTION

	The routines on this page are usually called automatically from
	#ft_headinit, #ft_headread, #ft_headwrite and other higher level 
	routines.  This user should never need to call them with the
	exception of #ft_synchead or #ft_syncdata.
 */


#include <xos.h>
#include "fitsy.h"

/* Copy information from a #FITSHead into the #FITSBasic, #FITSImage 
   and #FITSTable data structures.
 */
void ft_syncdata(fits)
	FITSHead	fits;
{
	if ( fits == NULL ) return;

	if ( fits->basic ) ft_basicfree(fits->basic);
	if ( fits->image ) ft_imagefree(fits->image);
	if ( fits->table ) ft_tablefree(fits->table);

	fits->basic = ft_basicloadhead(fits);
	fits->image = ft_imageloadhead(fits);
	fits->table = ft_tableloadhead(fits);
}

/* Copy information from the #FITSBasic, #FITSImage and #FITSTable data
   structures into a #FITSHead.
 */
void ft_synchead(fits)
	FITSHead	fits;
{
	if ( fits == NULL ) return;

	if ( fits->basic ) ft_basicstorhead(fits, fits->basic);
	if ( fits->image ) ft_imagestorhead(fits, fits->image);
	if ( fits->table ) ft_tablestorhead(fits, fits->table);
}

/* Load image FITS values into the #FITSImage structure.
 */
FITSImage ft_imageloadhead(fits)
	FITSHead	fits;		/* FITS header to read/write image
					   cards from/to.	*/
{
		FITSImage	image = NULL;
		FITSCard	card;

		char		*xtension;

	if ( fits        == NULL ) 	return NULL;
	if ( fits->basic == NULL ) 	return NULL;

	if ( ft_headgetl(fits, "SIMPLE", 0, 0, &card)
	  || (( xtension = ft_headget(fits, "XTENSION", 0, &card))
	    && !strcmp(xtension, "IMAGE")) ) {
	    Malloc(image, sizeof(struct _FITSImage));

	    image->blank = ft_headgeti(fits, "BLANK", 0, 0, &card);
	    image->has_blank   = card != NULL;

	    image->dbzero       = ft_headgetr(fits, "BZERO" , 0, 0.0, &card);
	    image->has_bzero   = image->dbzero != 0.0;

	    image->dbscale      = ft_headgetr(fits, "BSCALE", 0, 1.0, &card);
	    image->has_bscale  = image->dbscale != 1.0;

	    /* Read in the IRAF Linear Image CS info
	     */
	    image->log.has_wcs = 0;
	    image->log.fwd[0][0] = ft_headgetr(fits, "LTM1_1", 0, 1.0, &card);
	    image->log.has_wcs |= card != NULL;
	    image->log.fwd[1][0] = ft_headgetr(fits, "LTM2_1", 0, 0.0, &card);
	    image->log.has_wcs |= card != NULL;
	    image->log.fwd[0][1] = ft_headgetr(fits, "LTM1_2", 0, 0.0, &card);
	    image->log.has_wcs |= card != NULL;
	    image->log.fwd[1][1] = ft_headgetr(fits, "LTM2_2", 0, 1.0, &card);
	    image->log.has_wcs |= card != NULL;
	    image->log.fwd[2][0] = ft_headgetr(fits, "LTV1"  , 0, 0.0, &card);
	    image->log.has_wcs |= card != NULL;
	    image->log.fwd[2][1] = ft_headgetr(fits, "LTV2"  , 0, 0.0, &card);
	    image->log.has_wcs |= card != NULL;
	    image->log.has_wcs |= ft_inverse(image->log.fwd, image->log.rev);

	    image->det.has_wcs = 0;
	    image->det.fwd[0][0] = ft_headgetr(fits, "DTM1_1", 0, 1.0, &card);
	    image->det.has_wcs |= card != NULL;
	    image->det.fwd[1][0] = ft_headgetr(fits, "DTM2_1", 0, 0.0, &card);
	    image->det.has_wcs |= card != NULL;
	    image->det.fwd[0][1] = ft_headgetr(fits, "DTM1_2", 0, 0.0, &card);
	    image->det.has_wcs |= card != NULL;
	    image->det.fwd[1][1] = ft_headgetr(fits, "DTM2_2", 0, 1.0, &card);
	    image->det.has_wcs |= card != NULL;
	    image->det.fwd[2][0] = ft_headgetr(fits, "DTV1"  , 0, 0.0, &card);
	    image->det.has_wcs |= card != NULL;
	    image->det.fwd[2][1] = ft_headgetr(fits, "DTV2"  , 0, 0.0, &card);
	    image->det.has_wcs |= card != NULL;
	    image->det.has_wcs |= ft_inverse(image->det.fwd, image->det.rev);

	    image->amp.has_wcs = 0;
	    image->amp.fwd[0][0] = ft_headgetr(fits, "ATM1_1", 0, 1.0, &card);
	    image->amp.has_wcs |= card != NULL;
	    image->amp.fwd[1][0] = ft_headgetr(fits, "ATM2_1", 0, 0.0, &card);
	    image->amp.has_wcs |= card != NULL;
	    image->amp.fwd[0][1] = ft_headgetr(fits, "ATM1_2", 0, 0.0, &card);
	    image->amp.has_wcs |= card != NULL;
	    image->amp.fwd[1][1] = ft_headgetr(fits, "ATM2_2", 0, 1.0, &card);
	    image->amp.has_wcs |= card != NULL;
	    image->amp.fwd[2][0] = ft_headgetr(fits, "ATV1"  , 0, 0.0, &card);
	    image->amp.has_wcs |= card != NULL;
	    image->amp.fwd[2][1] = ft_headgetr(fits, "ATV2"  , 0, 0.0, &card);
	    image->amp.has_wcs |= card != NULL;
	    image->amp.has_wcs |= ft_inverse(image->amp.fwd, image->amp.rev);
	}

	
	return image;
}

/* Store image FITS values from a #FITSImage structure into a header.
 */
void	ft_imagestorhead(fits, image)
	FITSHead	fits;
	FITSImage	image;		/* Image data to copy into header. */
{
	if ( fits  == NULL ) 	return;
	if ( image == NULL ) 	return;

	if ( image->has_blank  ) {
	    if ( fits->basic->bitpix > 0 )
		ft_headseti(fits, "BLANK", 0, image->blank, NULL, 0);
	}

	if ( image->has_bzero  )
	    ft_headsetr(fits, "BZERO" , 0, image->dbzero , 7, NULL, 0);
	if ( image->has_bscale )
	    ft_headsetr(fits, "BSCALE", 0, image->dbscale, 7, NULL, 0);

	if ( image->log.has_wcs ) {
	   ft_headsetr(fits, "LTM1_1", 0, image->log.fwd[0][0], 7, NULL, 0);
	   ft_headsetr(fits, "LTM1_2", 0, image->log.fwd[0][1], 7, NULL, 0);
	   ft_headsetr(fits, "LTM2_1", 0, image->log.fwd[1][0], 7, NULL, 0);
	   ft_headsetr(fits, "LTM2_2", 0, image->log.fwd[1][1], 7, NULL, 0);
	   ft_headsetr(fits, "LTV1",   0, image->log.fwd[2][0], 7, NULL, 0);
	   ft_headsetr(fits, "LTV2",   0, image->log.fwd[2][1], 7, NULL, 0);
	}
	if ( image->amp.has_wcs ) {
	   ft_headsetr(fits, "ATM1_1", 0, image->amp.fwd[0][0], 7, NULL, 0);
	   ft_headsetr(fits, "ATM1_2", 0, image->amp.fwd[0][1], 7, NULL, 0);
	   ft_headsetr(fits, "ATM2_1", 0, image->amp.fwd[1][0], 7, NULL, 0);
	   ft_headsetr(fits, "ATM2_2", 0, image->amp.fwd[1][1], 7, NULL, 0);
	   ft_headsetr(fits, "ATV1",   0, image->amp.fwd[2][0], 7, NULL, 0);
	   ft_headsetr(fits, "ATV2",   0, image->amp.fwd[2][1], 7, NULL, 0);
	}
	if ( image->det.has_wcs ) {
	   ft_headsetr(fits, "DTM1_1", 0, image->det.fwd[0][0], 7, NULL, 0);
	   ft_headsetr(fits, "DTM1_2", 0, image->det.fwd[0][1], 7, NULL, 0);
	   ft_headsetr(fits, "DTM2_1", 0, image->det.fwd[1][0], 7, NULL, 0);
	   ft_headsetr(fits, "DTM2_2", 0, image->det.fwd[1][1], 7, NULL, 0);
	   ft_headsetr(fits, "DTV1",   0, image->det.fwd[2][0], 7, NULL, 0);
	   ft_headsetr(fits, "DTV2",   0, image->det.fwd[2][1], 7, NULL, 0);
	}
}


/* Free a FITSImage data structure.
 */
void ft_imagefree(image)
	FITSImage image;
{
  if ( image ) (void)Free(image);
}

/* Load basic FITS values into the #FITSBasic structure.
 */
FITSBasic ft_basicloadhead(fits)
	FITSHead	fits;
{
		FITSBasic	basic;
		FITSCard	card;
		int		i;

	if ( fits  == NULL ) 	return NULL;

	Malloc(basic, sizeof(struct _FITSBasic));

	basic->simple = ft_headgetl(fits, "SIMPLE", 0, 0, &card);
	if ( basic->simple ) {
	    basic->name = strdup("primary");
	} else {
	    basic->name = ft_headgets(fits, "EXTNAME", 0, "None", &card);
	    basic->hduname = ft_headgets(fits, "HDUNAME", 0, "None", &card);
	    basic->extn = ft_headgeti(fits, "EXTVER",  0,      0, &card);
	}

	basic->naxes  = ft_headgeti(fits, "NAXIS", 0, 0, &card);

	if ( basic->naxes > FT_MAXAXES ) return NULL;

	for ( i = 1; i <= basic->naxes; i++ ) 
	    basic->naxis[i-1] = ft_headgeti(fits, "NAXIS", i, 0, &card);

	basic->bitpix = ft_headgeti(fits, "BITPIX", 0, 0, &card);
	basic->gcount = ft_headgeti(fits, "GCOUNT", 0, 1, &card);
	basic->pcount = ft_headgeti(fits, "PCOUNT", 0, 0, &card);


	if ( basic->naxes  == 0 || basic->gcount == 0 ) {
	    basic->datapixls = 0;
	} else {
	    basic->datapixls = 1;

	    for ( i = 1; i <= basic->naxes; i++ )
		    basic->datapixls *= basic->naxis[i-1];

	    basic->datapixls = 
		  basic->gcount 
		* (basic->pcount + basic->datapixls);
	}

	basic->databytes = basic->datapixls  * (Abs(basic->bitpix)/8);
	basic->databloks = ft_fitsbloks(basic->databytes);
	basic->row_bytes = basic->naxis[0] * (Abs(basic->bitpix)/8);

	return basic;
}

/* Store basic FITS values from a #FITSBasic structre into a fits header.
 */
void	ft_basicstorhead(fits, basic)
	FITSHead	fits;
	FITSBasic	basic;	/* FITSBasic structure	*/
{
		FITSCard	card;

		int	i;
		int	naxes;

	if ( fits  == NULL ) 	return;
	if ( basic == NULL ) 	return;

	naxes = ft_headgeti(fits, "NAXIS", 0, 0, &card);

	ft_headsetl(fits, "SIMPLE", 0, 1, NULL, 0);

	ft_headseti(fits, "BITPIX", 0, basic->bitpix, NULL, 0);
	ft_headseti(fits, "NAXIS" , 0, basic->naxes, NULL, 0);

	for ( i = 1; i <= naxes; i++ ) {
	    if ( i < basic->naxes )
		ft_headseti(fits, "NAXIS", i, basic->naxis[i-1], NULL, 0);
	    else
		ft_headdel (fits, "NAXIS", i);
	}

	ft_headseti(fits, "GCOUNT", basic->gcount, 0, NULL, 0);
	ft_headseti(fits, "PCOUNT", basic->pcount, 0, NULL, 0);
}

/* Free a FITSBasic data structure.
 */
void ft_basicfree(basic)
	FITSBasic basic;
{
  if ( basic->name ) (void)Free(basic->name );
  if ( basic->hduname ) (void)Free(basic->hduname );
  if ( basic ) (void)Free(basic );
}

