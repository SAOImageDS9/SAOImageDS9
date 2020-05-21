/* Fitsy FITS routines to work with the data portion of a FITS file.
 */

#include <xos.h>
#include "fitsy.h"

/* Skip over the data part of a FITS header data unit.

   If the file is seekable and the #ofile file pointer is
   #NULL or nfile is 0, the data are skipped with an #fseek().

   If the #ofile file pointer is #NULL no data is written.

 */

#define NBLOCK	500

off_t ft_dataskip(ifile, fits, ofiles, nofile)
	File		ifile;	/* File pointer to read FITS data from.	*/
	FITSHead	fits;	/* FITS header associated with data.	*/
	File*		ofiles;	/* File pointers to write data to.	*/
	int		nofile;	/* number of files */
{
                int     i;
		int	blocks;
		char	block[FT_BLOCK * NBLOCK];
  		off_t   pos=0;

        if ( ifile == NULL ) 	return pos;
        if ( fits  == NULL ) 	return pos;
		
	if ( ft_seek(fits) != -1 && (!ofiles || !nofile) ) {
	  if ( ft_databytes(fits) ){
		pos = ftSeek(ifile, ft_databloks(fits) * FT_BLOCK, 1);
		return pos;
	  }
	}

	if ( ft_databytes(fits) ) {
	    for ( blocks = ft_databloks(fits);
		  blocks > NBLOCK; blocks -= NBLOCK ) {
		ftRead(ifile, block, 1, FT_BLOCK*NBLOCK);
		for(i=0; i<nofile; i++)
		    ftWrite(ofiles[i], block, 1, FT_BLOCK*NBLOCK);
	    }
	    if ( blocks ) {
		ftRead(ifile, block, 1, FT_BLOCK*blocks);
		for(i=0; i<nofile; i++)
		    ftWrite(ofiles[i], block, 1, FT_BLOCK*blocks);
	    }
	}
	return pos;
}

/* Seek to the data portion of prevoiusly read fits header data unit.
 */
off_t ft_dataseek(sfile, fits)
	File		sfile;	/* File pointer to seek.	*/
	FITSHead	fits;
{
        if ( sfile == NULL ) 	return -1;
        if ( fits  == NULL ) 	return -1;

	return ftSeek(sfile, fits->data, 0) != -1;
}


